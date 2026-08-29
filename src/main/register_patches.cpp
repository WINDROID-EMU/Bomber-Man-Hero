#include "ovl_patches.hpp"
#include "../../RecompiledPatches/recomp_overlays.inl"

#include "librecomp/overlays.hpp"
#include "librecomp/game.hpp"

extern "C" {
    extern const char bmhero_patches_bin[];
    extern const size_t bmhero_patches_bin_size;
}

void banjo::register_bk_patches() {
    recomp::overlays::register_patches(bmhero_patches_bin, bmhero_patches_bin_size, section_table, ARRLEN(section_table));
    recomp::overlays::register_base_exports(export_table);
    recomp::overlays::register_base_events(event_names);
    recomp::overlays::register_manual_patch_symbols(manual_patch_symbols);
}
