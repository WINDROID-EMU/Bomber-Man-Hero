#include <filesystem>
#include <fstream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>

std::vector<char> read_file(const char* path) {
    std::ifstream input_file{path, std::ios::binary};
    std::vector<char> ret{};

    if (!input_file.good()) {
        return ret;
    }

    // Get the length of the file
    input_file.seekg(0, std::ios::end);
    ret.resize(input_file.tellg());
    
    // Read the file contents into the vector
    input_file.seekg(0, std::ios::beg);
    input_file.read(ret.data(), ret.size());

    return ret;
}

void create_parent_if_needed(const char* path) {
    std::filesystem::path parent_path = std::filesystem::path{path}.parent_path();
    if (!parent_path.empty()) {
        std::filesystem::create_directories(parent_path);
    }
}

int main(int argc, const char** argv) {
    if (argc < 5) {
        printf("Usage: %s [input file] [array name] [output C file] [output C header] [--text]\n", argv[0]);
        return EXIT_SUCCESS;
    }

    const char* input_path = argv[1];
    const char* array_name = argv[2];
    const char* output_c_path = argv[3];
    const char* output_h_path = argv[4];
    bool text_mode = (argc >= 6 && strcmp(argv[5], "--text") == 0);

    // Read the input file's contents
    std::vector<char> contents = read_file(input_path);

    if (contents.empty()) {
        fprintf(stderr, "Failed to open file %s! (Or it's empty)\n", input_path);
        return EXIT_FAILURE;
    }

    // Create the output directories if they don't exist
    create_parent_if_needed(output_c_path);
    create_parent_if_needed(output_h_path);

    size_t array_len = text_mode ? contents.size() + 1 : contents.size();

    // Write the C file with the array
    {
        std::ofstream output_c_file{output_c_path};
        output_c_file << "#include <stddef.h>\n";
        output_c_file << "extern const char " << array_name << "[" << array_len << "];\n";
        output_c_file << "const char " << array_name << "[" << array_len << "] = {";

        for (size_t i = 0; i < contents.size(); i++) {
            if ((i % 20) == 0) {
                output_c_file << "\n\t";
            }
            output_c_file << "0x" << std::hex << (static_cast<int>(contents[i]) & 0xFF) << ", ";
        }

        if (text_mode) {
            output_c_file << "0x00, ";
        }

        output_c_file << "\n};\n";
    }

    // Write the H file with the extern declaration
    {
        std::ofstream output_h_file{output_h_path};
        output_h_file << "#pragma once\n";
        output_h_file << "#include <stddef.h>\n";
        output_h_file << "extern const char " << array_name << "[" << array_len << "];\n";
    }

    return EXIT_SUCCESS;
}
