#include "patches.h"

#include <ultra64.h>

extern void func_8006031C(void*);
extern void func_80060808(s32, s32);

extern u32 gTrackedObjects_OneTime[256];

RECOMP_PATCH void func_800608B8(struct UnkStruct_8006031C* arg0) {
    s32 sp1C;
    s32 sp18;

    func_8006031C(arg0);
    for (sp1C = 0;; sp1C++) {
        if (arg0[sp1C].idx == -1) {
            break;
        }
        sp18 = arg0[sp1C].unk4;

        gObjects[sp18].actionState = 1;

        if (*(u32*)&arg0[sp1C].unk8 == 0x00000000 &&
            *(u32*)&arg0[sp1C].unkC == 0x00000000 &&
            *(u32*)&arg0[sp1C].unk10 == 0x00000000) {
                recomp_printf("Bad movement found for objID 0x%02X, skipping\n", sp18);
                gTrackedObjects_OneTime[sp18] = 1;
        }

        gObjects[sp18].Pos.x = arg0[sp1C].unk8;
        gObjects[sp18].Pos.y = arg0[sp1C].unkC;
        gObjects[sp18].Pos.z = arg0[sp1C].unk10;
        gObjects[sp18].Scale.x = arg0[sp1C].unk14;
        gObjects[sp18].Scale.y = arg0[sp1C].unk18;
        gObjects[sp18].unkD4 = arg0[sp1C].unk1C;
        gObjects[sp18].unkD8 = arg0[sp1C].unk20;
        gObjects[sp18].objID = (s16) arg0[sp1C].idx;
        func_80060808(arg0[sp1C].idx, sp18);
    }
}