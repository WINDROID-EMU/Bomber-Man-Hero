#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800BCD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCD40: jr          $ra
    // 0x800BCD44: nop

    return;
    // 0x800BCD44: nop

    // 0x800BCD48: jr          $ra
    // 0x800BCD4C: nop

    return;
    // 0x800BCD4C: nop

;}
RECOMP_FUNC void func_8005F170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F170: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005F174: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F178: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005F17C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F180: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005F184: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005F188: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8005F18C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8005F190: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005F194: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005F198: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8005F19C: nop

    // 0x8005F1A0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005F1A4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005F1A8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005F1AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F1B0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005F1B4: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005F1B8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8005F1BC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8005F1C0: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x8005F1C4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005F1C8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005F1CC: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x8005F1D0: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x8005F1D4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005F1D8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005F1DC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005F1E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F1E4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005F1E8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005F1EC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8005F1F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8005F1F4: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x8005F1F8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005F1FC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8005F200: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8005F204: ori         $t1, $t1, 0x2205
    ctx->r9 = ctx->r9 | 0X2205;
    // 0x8005F208: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8005F20C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005F210: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005F214: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F218: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005F21C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005F220: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005F224: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005F228: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8005F22C: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8005F230: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005F234: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8005F238: nop

    // 0x8005F23C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005F240: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005F244: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005F248: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F24C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005F250: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005F254: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8005F258: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F25C: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x8005F260: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x8005F264: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F268: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F26C: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x8005F270: ori         $t2, $t2, 0x3048
    ctx->r10 = ctx->r10 | 0X3048;
    // 0x8005F274: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005F278: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005F27C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005F280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F284: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005F288: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005F28C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8005F290: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005F294: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8005F298: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8005F29C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005F2A0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005F2A4: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x8005F2A8: ori         $t8, $t8, 0xF279
    ctx->r24 = ctx->r24 | 0XF279;
    // 0x8005F2AC: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8005F2B0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F2B4: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005F2B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F2BC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005F2C0: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005F2C4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005F2C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005F2CC: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8005F2D0: ori         $t2, $t2, 0x602
    ctx->r10 = ctx->r10 | 0X602;
    // 0x8005F2D4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005F2D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005F2DC: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x8005F2E0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005F2E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F2E8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005F2EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F2F0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005F2F4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005F2F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005F2FC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005F300: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8005F304: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8005F308: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005F30C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005F310: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x8005F314: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005F318: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005F31C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005F320: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F324: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005F328: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005F32C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8005F330: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F334: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x8005F338: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x8005F33C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005F340: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F344: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8005F348: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005F34C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005F350: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005F354: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F358: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005F35C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005F360: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8005F364: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8005F368: lui         $t0, 0xFD10
    ctx->r8 = S32(0XFD10 << 16);
    // 0x8005F36C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005F370: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8005F374: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8005F378: addiu       $t2, $t2, 0x3928
    ctx->r10 = ADD32(ctx->r10, 0X3928);
    // 0x8005F37C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005F380: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005F384: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005F388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F38C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005F390: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005F394: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8005F398: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8005F39C: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8005F3A0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005F3A4: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8005F3A8: nop

    // 0x8005F3AC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005F3B0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005F3B4: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005F3B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F3BC: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005F3C0: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8005F3C4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8005F3C8: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8005F3CC: lui         $t1, 0xF500
    ctx->r9 = S32(0XF500 << 16);
    // 0x8005F3D0: ori         $t1, $t1, 0x100
    ctx->r9 = ctx->r9 | 0X100;
    // 0x8005F3D4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005F3D8: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8005F3DC: lui         $t3, 0x700
    ctx->r11 = S32(0X700 << 16);
    // 0x8005F3E0: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005F3E4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005F3E8: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8005F3EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F3F0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005F3F4: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005F3F8: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x8005F3FC: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8005F400: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8005F404: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005F408: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8005F40C: nop

    // 0x8005F410: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005F414: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F418: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005F41C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F420: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005F424: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005F428: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x8005F42C: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x8005F430: lui         $t2, 0xF000
    ctx->r10 = S32(0XF000 << 16);
    // 0x8005F434: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005F438: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8005F43C: lui         $t4, 0x703
    ctx->r12 = S32(0X703 << 16);
    // 0x8005F440: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x8005F444: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005F448: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F44C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005F450: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F454: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005F458: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005F45C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005F460: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8005F464: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005F468: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005F46C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8005F470: nop

    // 0x8005F474: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005F478: b           L_8005F480
    // 0x8005F47C: nop

        goto L_8005F480;
    // 0x8005F47C: nop

L_8005F480:
    // 0x8005F480: jr          $ra
    // 0x8005F484: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005F484: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800AC948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC948: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AC94C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AC950: nop

    // 0x800AC954: bne         $t6, $zero, L_800AC98C
    if (ctx->r14 != 0) {
        // 0x800AC958: nop
    
            goto L_800AC98C;
    }
    // 0x800AC958: nop

    // 0x800AC95C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AC960: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AC964: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC968: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AC96C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AC970: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AC974: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AC978: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AC97C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AC980: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800AC984: b           L_800AC9D8
    // 0x800AC988: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800AC9D8;
    // 0x800AC988: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800AC98C:
    // 0x800AC98C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800AC990: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800AC994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AC998: bne         $t0, $at, L_800AC9D0
    if (ctx->r8 != ctx->r1) {
        // 0x800AC99C: nop
    
            goto L_800AC9D0;
    }
    // 0x800AC99C: nop

    // 0x800AC9A0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800AC9A4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800AC9A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC9AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AC9B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AC9B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AC9B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AC9BC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AC9C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AC9C4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800AC9C8: b           L_800AC9D8
    // 0x800AC9CC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800AC9D8;
    // 0x800AC9CC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800AC9D0:
    // 0x800AC9D0: jr          $ra
    // 0x800AC9D4: nop

    return;
    // 0x800AC9D4: nop

L_800AC9D8:
    // 0x800AC9D8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800AC9DC: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x800AC9E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC9E4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AC9E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AC9EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AC9F0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AC9F4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AC9F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AC9FC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800ACA00: jr          $ra
    // 0x800ACA04: nop

    return;
    // 0x800ACA04: nop

    // 0x800ACA08: jr          $ra
    // 0x800ACA0C: nop

    return;
    // 0x800ACA0C: nop

;}
RECOMP_FUNC void func_800F7284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7284: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F7288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F728C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7290: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7294: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7298: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F729C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F72A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F72A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F72A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F72AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F72B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F72B4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F72B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F72BC: nop

    // 0x800F72C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F72C4: nop

    // 0x800F72C8: bne         $t1, $zero, L_800F7314
    if (ctx->r9 != 0) {
        // 0x800F72CC: nop
    
            goto L_800F7314;
    }
    // 0x800F72CC: nop

    // 0x800F72D0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F72D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F72D8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F72DC: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800F72E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F72E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F72E8: nop

    // 0x800F72EC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800F72F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F72F4: nop

    // 0x800F72F8: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800F72FC: nop

    // 0x800F7300: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x800F7304: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F7308: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800F730C: nop

    // 0x800F7310: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
L_800F7314:
    // 0x800F7314: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x800F7318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F731C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7320: jal         0x80028FA0
    // 0x800F7324: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800F7324: nop

    after_0:
    // 0x800F7328: beq         $v0, $zero, L_800F7338
    if (ctx->r2 == 0) {
        // 0x800F732C: nop
    
            goto L_800F7338;
    }
    // 0x800F732C: nop

    // 0x800F7330: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800F7334: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_800F7338:
    // 0x800F7338: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F733C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7340: jal         0x80029D8C
    // 0x800F7344: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x800F7344: nop

    after_1:
    // 0x800F7348: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F734C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F7350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7358: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F735C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800F7360: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F7364: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F7368: jal         0x80029018
    // 0x800F736C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800F736C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800F7370: beq         $v0, $zero, L_800F7380
    if (ctx->r2 == 0) {
        // 0x800F7374: nop
    
            goto L_800F7380;
    }
    // 0x800F7374: nop

    // 0x800F7378: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F737C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_800F7380:
    // 0x800F7380: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800F7384: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F7388: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F738C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7394: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F7398: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F739C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F73A0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800F73A4: jal         0x800295C0
    // 0x800F73A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800F73A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800F73AC: beq         $v0, $zero, L_800F73BC
    if (ctx->r2 == 0) {
        // 0x800F73B0: nop
    
            goto L_800F73BC;
    }
    // 0x800F73B0: nop

    // 0x800F73B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800F73B8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_800F73BC:
    // 0x800F73BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800F73C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F73C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F73C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F73CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F73D0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F73D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F73D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F73DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F73E0: jal         0x800295C0
    // 0x800F73E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800F73E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800F73E8: beq         $v0, $zero, L_800F73F8
    if (ctx->r2 == 0) {
        // 0x800F73EC: nop
    
            goto L_800F73F8;
    }
    // 0x800F73EC: nop

    // 0x800F73F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800F73F4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_800F73F8:
    // 0x800F73F8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F73FC: nop

    // 0x800F7400: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800F7404: nop

    // 0x800F7408: beq         $t2, $zero, L_800F7418
    if (ctx->r10 == 0) {
        // 0x800F740C: nop
    
            goto L_800F7418;
    }
    // 0x800F740C: nop

    // 0x800F7410: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800F7414: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_800F7418:
    // 0x800F7418: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F741C: nop

    // 0x800F7420: beq         $t4, $zero, L_800F7440
    if (ctx->r12 == 0) {
        // 0x800F7424: nop
    
            goto L_800F7440;
    }
    // 0x800F7424: nop

    // 0x800F7428: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F742C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7430: jal         0x8002B0E4
    // 0x800F7434: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800F7434: nop

    after_5:
    // 0x800F7438: b           L_800F7448
    // 0x800F743C: nop

        goto L_800F7448;
    // 0x800F743C: nop

L_800F7440:
    // 0x800F7440: b           L_800F7448
    // 0x800F7444: nop

        goto L_800F7448;
    // 0x800F7444: nop

L_800F7448:
    // 0x800F7448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F744C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F7450: jr          $ra
    // 0x800F7454: nop

    return;
    // 0x800F7454: nop

;}
RECOMP_FUNC void func_800D03EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D03EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D03F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D03F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D03F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D03FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D0400: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D0404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D0408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D040C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0414: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0418: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D041C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D0420: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D0424: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D0428: nop

    // 0x800D042C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D0430: nop

    // 0x800D0434: bne         $t1, $zero, L_800D0494
    if (ctx->r9 != 0) {
        // 0x800D0438: nop
    
            goto L_800D0494;
    }
    // 0x800D0438: nop

    // 0x800D043C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D0440: nop

    // 0x800D0444: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D0448: nop

    // 0x800D044C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D0450: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D0454: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D0458: nop

    // 0x800D045C: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800D0460: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0464: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0468: nop

    // 0x800D046C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800D0470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0474: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D0478: addiu       $t7, $t7, -0x7AEC
    ctx->r15 = ADD32(ctx->r15, -0X7AEC);
    // 0x800D047C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0480: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800D0484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D0488: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800D048C: jal         0x8001C0EC
    // 0x800D0490: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D0490: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_0:
L_800D0494:
    // 0x800D0494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D049C: jal         0x80028FA0
    // 0x800D04A0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800D04A0: nop

    after_1:
    // 0x800D04A4: beq         $v0, $zero, L_800D04C8
    if (ctx->r2 == 0) {
        // 0x800D04A8: nop
    
            goto L_800D04C8;
    }
    // 0x800D04A8: nop

    // 0x800D04AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D04B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D04B4: jal         0x80029B60
    // 0x800D04B8: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800D04B8: nop

    after_2:
    // 0x800D04BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D04C0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800D04C4: sh          $t8, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r24;
L_800D04C8:
    // 0x800D04C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D04CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D04D0: jal         0x8001B62C
    // 0x800D04D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x800D04D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800D04D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D04DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D04E0: nop

    // 0x800D04E4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x800D04E8: nop

    // 0x800D04EC: bc1f        L_800D0524
    if (!c1cs) {
        // 0x800D04F0: nop
    
            goto L_800D0524;
    }
    // 0x800D04F0: nop

    // 0x800D04F4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D04F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D04FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D0500: nop

    // 0x800D0504: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x800D0508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D050C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0510: lui         $a1, 0x40D5
    ctx->r5 = S32(0X40D5 << 16);
    // 0x800D0514: lui         $a2, 0x3EB3
    ctx->r6 = S32(0X3EB3 << 16);
    // 0x800D0518: ori         $a2, $a2, 0xA626
    ctx->r6 = ctx->r6 | 0XA626;
    // 0x800D051C: jal         0x80029EF8
    // 0x800D0520: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800D0520: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    after_4:
L_800D0524:
    // 0x800D0524: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D0528: nop

    // 0x800D052C: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x800D0530: nop

    // 0x800D0534: bne         $t3, $zero, L_800D0594
    if (ctx->r11 != 0) {
        // 0x800D0538: nop
    
            goto L_800D0594;
    }
    // 0x800D0538: nop

    // 0x800D053C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0544: jal         0x8002A640
    // 0x800D0548: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_5;
    // 0x800D0548: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_5:
    // 0x800D054C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800D0550: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D0554: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D0558: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800D055C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800D0560: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800D0564: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x800D0568: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800D056C: jal         0x80015538
    // 0x800D0570: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800D0570: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x800D0574: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0578: nop

    // 0x800D057C: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800D0580: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D0584: nop

    // 0x800D0588: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800D058C: b           L_800D05AC
    // 0x800D0590: swc1        $f16, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f16.u32l;
        goto L_800D05AC;
    // 0x800D0590: swc1        $f16, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f16.u32l;
L_800D0594:
    // 0x800D0594: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D0598: nop

    // 0x800D059C: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x800D05A0: nop

    // 0x800D05A4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800D05A8: sh          $t0, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r8;
L_800D05AC:
    // 0x800D05AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D05B0: nop

    // 0x800D05B4: lwc1        $f18, 0x28($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800D05B8: nop

    // 0x800D05BC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x800D05C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D05C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D05C8: nop

    // 0x800D05CC: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x800D05D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D05D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D05D8: jal         0x80029C40
    // 0x800D05DC: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800D05DC: nop

    after_7:
    // 0x800D05E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D05E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D05E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D05EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D05F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800D05F4: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800D05F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D05FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800D0600: jal         0x80029018
    // 0x800D0604: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800D0604: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x800D0608: beq         $v0, $zero, L_800D062C
    if (ctx->r2 == 0) {
        // 0x800D060C: nop
    
            goto L_800D062C;
    }
    // 0x800D060C: nop

    // 0x800D0610: jal         0x800297DC
    // 0x800D0614: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800D0614: nop

    after_9:
    // 0x800D0618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D061C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D0624: jal         0x80029824
    // 0x800D0628: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800D0628: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_800D062C:
    // 0x800D062C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D0630: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D0634: nop

    // 0x800D0638: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x800D063C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D0640: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D0644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D064C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D0650: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D0654: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D0658: jal         0x80029F58
    // 0x800D065C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_11;
    // 0x800D065C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x800D0660: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0664: bne         $v0, $at, L_800D06B4
    if (ctx->r2 != ctx->r1) {
        // 0x800D0668: nop
    
            goto L_800D06B4;
    }
    // 0x800D0668: nop

    // 0x800D066C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D0670: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0674: lwc1        $f18, 0x44($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X44);
    // 0x800D0678: nop

    // 0x800D067C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800D0680: nop

    // 0x800D0684: bc1t        L_800D06B4
    if (c1cs) {
        // 0x800D0688: nop
    
            goto L_800D06B4;
    }
    // 0x800D0688: nop

    // 0x800D068C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0690: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800D0694: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800D0698: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D069C: nop

    // 0x800D06A0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800D06A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D06A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D06AC: jal         0x8001BBDC
    // 0x800D06B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x800D06B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_800D06B4:
    // 0x800D06B4: b           L_800D06BC
    // 0x800D06B8: nop

        goto L_800D06BC;
    // 0x800D06B8: nop

L_800D06BC:
    // 0x800D06BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D06C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D06C4: jr          $ra
    // 0x800D06C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D06C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800ABA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABA38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800ABA3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ABA40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800ABA44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ABA48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ABA4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ABA50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ABA54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABA58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ABA5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABA60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ABA64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ABA68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ABA6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800ABA70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABA74: nop

    // 0x800ABA78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ABA7C: nop

    // 0x800ABA80: bne         $t1, $zero, L_800ABAF4
    if (ctx->r9 != 0) {
        // 0x800ABA84: nop
    
            goto L_800ABAF4;
    }
    // 0x800ABA84: nop

    // 0x800ABA88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABA8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ABA90: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ABA94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ABA98: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABA9C: nop

    // 0x800ABAA0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800ABAA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ABAA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABAAC: nop

    // 0x800ABAB0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800ABAB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABAB8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800ABABC: addiu       $t6, $t6, 0x75D0
    ctx->r14 = ADD32(ctx->r14, 0X75D0);
    // 0x800ABAC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABAC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800ABAC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABACC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800ABAD0: jal         0x8001C0EC
    // 0x800ABAD4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ABAD4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800ABAD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABAE0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ABAE4: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800ABAE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABAEC: jal         0x8001ABF4
    // 0x800ABAF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800ABAF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800ABAF4:
    // 0x800ABAF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABAF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABAFC: jal         0x8002A8B4
    // 0x800ABB00: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800ABB00: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_2:
    // 0x800ABB04: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABB08: nop

    // 0x800ABB0C: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800ABB10: nop

    // 0x800ABB14: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x800ABB18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABB20: jal         0x80028FA0
    // 0x800ABB24: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800ABB24: nop

    after_3:
    // 0x800ABB28: beq         $v0, $zero, L_800ABB40
    if (ctx->r2 == 0) {
        // 0x800ABB2C: nop
    
            goto L_800ABB40;
    }
    // 0x800ABB2C: nop

    // 0x800ABB30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABB38: jal         0x80029B60
    // 0x800ABB3C: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800ABB3C: nop

    after_4:
L_800ABB40:
    // 0x800ABB40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABB48: jal         0x80029C40
    // 0x800ABB4C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800ABB4C: nop

    after_5:
    // 0x800ABB50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABB58: jal         0x80029D04
    // 0x800ABB5C: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800ABB5C: nop

    after_6:
    // 0x800ABB60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ABB64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ABB68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABB70: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800ABB74: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800ABB78: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ABB7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800ABB80: jal         0x80029018
    // 0x800ABB84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800ABB84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800ABB88: beq         $v0, $zero, L_800ABBC0
    if (ctx->r2 == 0) {
        // 0x800ABB8C: nop
    
            goto L_800ABBC0;
    }
    // 0x800ABB8C: nop

    // 0x800ABB90: jal         0x800297DC
    // 0x800ABB94: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800ABB94: nop

    after_8:
    // 0x800ABB98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABB9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABBA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800ABBA4: jal         0x80029824
    // 0x800ABBA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800ABBA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800ABBAC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABBB0: nop

    // 0x800ABBB4: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800ABBB8: nop

    // 0x800ABBBC: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
L_800ABBC0:
    // 0x800ABBC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABBC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABBC8: jal         0x8002A560
    // 0x800ABBCC: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_10;
    // 0x800ABBCC: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_10:
    // 0x800ABBD0: bne         $v0, $zero, L_800ABC40
    if (ctx->r2 != 0) {
        // 0x800ABBD4: nop
    
            goto L_800ABC40;
    }
    // 0x800ABBD4: nop

    // 0x800ABBD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABBDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABBE0: jal         0x8002A1FC
    // 0x800ABBE4: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_11;
    // 0x800ABBE4: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_11:
    // 0x800ABBE8: beq         $v0, $zero, L_800ABC08
    if (ctx->r2 == 0) {
        // 0x800ABBEC: nop
    
            goto L_800ABC08;
    }
    // 0x800ABBEC: nop

    // 0x800ABBF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABBF4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800ABBF8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800ABBFC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC00: nop

    // 0x800ABC04: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800ABC08:
    // 0x800ABC08: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800ABC10: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800ABC14: nop

    // 0x800ABC18: bne         $t3, $at, L_800ABC38
    if (ctx->r11 != ctx->r1) {
        // 0x800ABC1C: nop
    
            goto L_800ABC38;
    }
    // 0x800ABC1C: nop

    // 0x800ABC20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC24: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800ABC28: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800ABC2C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC30: nop

    // 0x800ABC34: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800ABC38:
    // 0x800ABC38: b           L_800ABC70
    // 0x800ABC3C: nop

        goto L_800ABC70;
    // 0x800ABC3C: nop

L_800ABC40:
    // 0x800ABC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABC48: jal         0x8002A1FC
    // 0x800ABC4C: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x800ABC4C: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_12:
    // 0x800ABC50: bne         $v0, $zero, L_800ABC70
    if (ctx->r2 != 0) {
        // 0x800ABC54: nop
    
            goto L_800ABC70;
    }
    // 0x800ABC54: nop

    // 0x800ABC58: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800ABC60: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800ABC64: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABC68: nop

    // 0x800ABC6C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800ABC70:
    // 0x800ABC70: b           L_800ABC78
    // 0x800ABC74: nop

        goto L_800ABC78;
    // 0x800ABC74: nop

L_800ABC78:
    // 0x800ABC78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800ABC7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800ABC80: jr          $ra
    // 0x800ABC84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800ABC84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D7CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7CD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D7CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D7CD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7CDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D7CE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D7CE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D7CE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7CEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D7CF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7CF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D7CF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D7CFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D7D00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D7D04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D08: nop

    // 0x800D7D0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D7D10: nop

    // 0x800D7D14: bne         $t1, $zero, L_800D7DB0
    if (ctx->r9 != 0) {
        // 0x800D7D18: nop
    
            goto L_800D7DB0;
    }
    // 0x800D7D18: nop

    // 0x800D7D1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D20: nop

    // 0x800D7D24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D7D28: nop

    // 0x800D7D2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D7D30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D7D34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D38: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800D7D3C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D7D40: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D7D44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D7D48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D4C: nop

    // 0x800D7D50: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D7D54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800D7D5C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D7D60: lwc1        $f12, 0x128($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X128);
    // 0x800D7D64: jal         0x80015538
    // 0x800D7D68: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800D7D68: nop

    after_0:
    // 0x800D7D6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D7D70: nop

    // 0x800D7D74: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800D7D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7D80: lui         $a1, 0x4166
    ctx->r5 = S32(0X4166 << 16);
    // 0x800D7D84: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x800D7D88: ori         $a2, $a2, 0xCB3E
    ctx->r6 = ctx->r6 | 0XCB3E;
    // 0x800D7D8C: jal         0x80029EF8
    // 0x800D7D90: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800D7D90: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    after_1:
    // 0x800D7D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7D9C: jal         0x8001BBDC
    // 0x800D7DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D7DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800D7DA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D7DA8: nop

    // 0x800D7DAC: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
L_800D7DB0:
    // 0x800D7DB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D7DB4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800D7DB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D7DBC: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800D7DC0: jal         0x80015538
    // 0x800D7DC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800D7DC4: nop

    after_3:
    // 0x800D7DC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D7DCC: nop

    // 0x800D7DD0: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800D7DD4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D7DD8: nop

    // 0x800D7DDC: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800D7DE0: nop

    // 0x800D7DE4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800D7DE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D7DEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D7DF0: nop

    // 0x800D7DF4: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x800D7DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7E00: jal         0x80029C40
    // 0x800D7E04: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800D7E04: nop

    after_4:
    // 0x800D7E08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D7E0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D7E10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7E14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7E18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D7E1C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D7E20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D7E24: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D7E28: jal         0x80029018
    // 0x800D7E2C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800D7E2C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800D7E30: beq         $v0, $zero, L_800D7E5C
    if (ctx->r2 == 0) {
        // 0x800D7E34: nop
    
            goto L_800D7E5C;
    }
    // 0x800D7E34: nop

    // 0x800D7E38: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D7E3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D7E40: nop

    // 0x800D7E44: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800D7E48: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D7E4C: nop

    // 0x800D7E50: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D7E54: nop

    // 0x800D7E58: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
L_800D7E5C:
    // 0x800D7E5C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800D7E60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D7E64: nop

    // 0x800D7E68: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800D7E6C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D7E70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D7E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7E7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D7E80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D7E84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D7E88: jal         0x80029F58
    // 0x800D7E8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800D7E8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800D7E90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D7E94: bne         $v0, $at, L_800D7EA8
    if (ctx->r2 != ctx->r1) {
        // 0x800D7E98: nop
    
            goto L_800D7EA8;
    }
    // 0x800D7E98: nop

    // 0x800D7E9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D7EA0: nop

    // 0x800D7EA4: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800D7EA8:
    // 0x800D7EA8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D7EAC: nop

    // 0x800D7EB0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800D7EB4: nop

    // 0x800D7EB8: bne         $t0, $zero, L_800D7ED8
    if (ctx->r8 != 0) {
        // 0x800D7EBC: nop
    
            goto L_800D7ED8;
    }
    // 0x800D7EBC: nop

    // 0x800D7EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D7EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D7EC8: jal         0x8002B0E4
    // 0x800D7ECC: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800D7ECC: nop

    after_7:
    // 0x800D7ED0: b           L_800D7EF0
    // 0x800D7ED4: nop

        goto L_800D7EF0;
    // 0x800D7ED4: nop

L_800D7ED8:
    // 0x800D7ED8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D7EDC: nop

    // 0x800D7EE0: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D7EE4: nop

    // 0x800D7EE8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D7EEC: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800D7EF0:
    // 0x800D7EF0: b           L_800D7EF8
    // 0x800D7EF4: nop

        goto L_800D7EF8;
    // 0x800D7EF4: nop

L_800D7EF8:
    // 0x800D7EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D7EFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D7F00: jr          $ra
    // 0x800D7F04: nop

    return;
    // 0x800D7F04: nop

;}
RECOMP_FUNC void func_800EA55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA55C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EA560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EA564: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EA568: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EA56C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EA570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EA574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EA578: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EA57C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EA580: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EA584: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EA588: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EA58C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EA590: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA594: nop

    // 0x800EA598: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EA59C: nop

    // 0x800EA5A0: bne         $t1, $zero, L_800EA644
    if (ctx->r9 != 0) {
        // 0x800EA5A4: nop
    
            goto L_800EA644;
    }
    // 0x800EA5A4: nop

    // 0x800EA5A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EA5AC: nop

    // 0x800EA5B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EA5B4: nop

    // 0x800EA5B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EA5BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EA5C0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EA5C4: nop

    // 0x800EA5C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EA5CC: nop

    // 0x800EA5D0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EA5D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800EA5D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EA5DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA5E0: nop

    // 0x800EA5E4: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800EA5E8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800EA5EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EA5F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA5F4: nop

    // 0x800EA5F8: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800EA5FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA600: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EA604: addiu       $t9, $t9, -0x6714
    ctx->r25 = ADD32(ctx->r25, -0X6714);
    // 0x800EA608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA60C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EA610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EA614: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800EA618: jal         0x8001C0EC
    // 0x800EA61C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EA61C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800EA620: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA624: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800EA628: addiu       $t1, $t1, -0x66F4
    ctx->r9 = ADD32(ctx->r9, -0X66F4);
    // 0x800EA62C: lh          $a0, 0xEC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEC);
    // 0x800EA630: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800EA634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EA638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EA63C: jal         0x8001C0EC
    // 0x800EA640: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EA640: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
L_800EA644:
    // 0x800EA644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA64C: jal         0x8001B62C
    // 0x800EA650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800EA650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800EA654: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800EA658: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA65C: nop

    // 0x800EA660: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800EA664: nop

    // 0x800EA668: bc1f        L_800EA7A0
    if (!c1cs) {
        // 0x800EA66C: nop
    
            goto L_800EA7A0;
    }
    // 0x800EA66C: nop

    // 0x800EA670: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EA674: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EA678: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800EA67C: nop

    // 0x800EA680: bne         $t4, $at, L_800EA7A0
    if (ctx->r12 != ctx->r1) {
        // 0x800EA684: nop
    
            goto L_800EA7A0;
    }
    // 0x800EA684: nop

    // 0x800EA688: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EA68C: nop

    // 0x800EA690: lbu         $t6, 0x132($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X132);
    // 0x800EA694: nop

    // 0x800EA698: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x800EA69C: sb          $t5, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r13;
    // 0x800EA6A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA6A4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x800EA6A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EA6AC: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800EA6B0: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x800EA6B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EA6B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EA6BC: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800EA6C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EA6C4: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800EA6C8: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EA6CC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800EA6D0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EA6D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EA6D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800EA6DC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EA6E0: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800EA6E4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800EA6E8: addiu       $a1, $a1, 0x44B0
    ctx->r5 = ADD32(ctx->r5, 0X44B0);
    // 0x800EA6EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EA6F0: jal         0x80027464
    // 0x800EA6F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800EA6F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800EA6F8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800EA6FC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800EA700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EA704: beq         $t8, $at, L_800EA720
    if (ctx->r24 == ctx->r1) {
        // 0x800EA708: nop
    
            goto L_800EA720;
    }
    // 0x800EA708: nop

    // 0x800EA70C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800EA710: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800EA714: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800EA718: jal         0x80026F10
    // 0x800EA71C: nop

    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x800EA71C: nop

    after_4:
L_800EA720:
    // 0x800EA720: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EA724: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x800EA728: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA72C: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800EA730: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x800EA734: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800EA738: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EA73C: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800EA740: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA744: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800EA748: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800EA74C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800EA750: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA754: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EA758: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA75C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EA760: lwc1        $f16, 0x1C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800EA764: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800EA768: addiu       $a1, $a1, 0x44B0
    ctx->r5 = ADD32(ctx->r5, 0X44B0);
    // 0x800EA76C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EA770: jal         0x80027464
    // 0x800EA774: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x800EA774: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800EA778: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800EA77C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800EA780: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EA784: beq         $t0, $at, L_800EA7A0
    if (ctx->r8 == ctx->r1) {
        // 0x800EA788: nop
    
            goto L_800EA7A0;
    }
    // 0x800EA788: nop

    // 0x800EA78C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800EA790: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800EA794: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800EA798: jal         0x80026F10
    // 0x800EA79C: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x800EA79C: nop

    after_6:
L_800EA7A0:
    // 0x800EA7A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA7A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA7A8: jal         0x80029C40
    // 0x800EA7AC: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800EA7AC: nop

    after_7:
    // 0x800EA7B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800EA7B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EA7B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA7BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA7C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EA7C4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800EA7C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EA7CC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EA7D0: jal         0x80029018
    // 0x800EA7D4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800EA7D4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800EA7D8: beq         $v0, $zero, L_800EA804
    if (ctx->r2 == 0) {
        // 0x800EA7DC: nop
    
            goto L_800EA804;
    }
    // 0x800EA7DC: nop

    // 0x800EA7E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EA7E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EA7E8: nop

    // 0x800EA7EC: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800EA7F0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EA7F4: nop

    // 0x800EA7F8: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800EA7FC: nop

    // 0x800EA800: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_800EA804:
    // 0x800EA804: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EA808: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EA80C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA814: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EA818: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EA81C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EA820: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EA824: jal         0x800295C0
    // 0x800EA828: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x800EA828: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x800EA82C: beq         $v0, $zero, L_800EA844
    if (ctx->r2 == 0) {
        // 0x800EA830: nop
    
            goto L_800EA844;
    }
    // 0x800EA830: nop

    // 0x800EA834: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EA838: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EA83C: b           L_800EA854
    // 0x800EA840: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
        goto L_800EA854;
    // 0x800EA840: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
L_800EA844:
    // 0x800EA844: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EA848: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA84C: nop

    // 0x800EA850: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
L_800EA854:
    // 0x800EA854: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800EA858:
    // 0x800EA858: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA85C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EA860: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x800EA864: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800EA868: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x800EA86C: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800EA870: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EA874: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EA878: lwc1        $f8, 0x24($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800EA87C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EA880: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EA884: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA888: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EA88C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA890: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800EA894: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x800EA898: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA89C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EA8A0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800EA8A4: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x800EA8A8: lh          $t2, 0xE8($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XE8);
    // 0x800EA8AC: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800EA8B0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800EA8B4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800EA8B8: lwc1        $f18, 0x28($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800EA8BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EA8C0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800EA8C4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA8C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EA8CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA8D0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EA8D4: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x800EA8D8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA8DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA8E0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800EA8E4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800EA8E8: lh          $t3, 0xE8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XE8);
    // 0x800EA8EC: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800EA8F0: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800EA8F4: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800EA8F8: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800EA8FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EA900: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800EA904: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA908: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EA90C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA910: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EA914: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x800EA918: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA91C: nop

    // 0x800EA920: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800EA924: sll         $t2, $t6, 16
    ctx->r10 = S32(ctx->r14 << 16);
    // 0x800EA928: sra         $t5, $t2, 16
    ctx->r13 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800EA92C: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x800EA930: bne         $at, $zero, L_800EA858
    if (ctx->r1 != 0) {
        // 0x800EA934: sh          $t6, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r14;
            goto L_800EA858;
    }
    // 0x800EA934: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x800EA938: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA93C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EA940: lh          $t7, 0xE8($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XE8);
    // 0x800EA944: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EA948: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EA94C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EA950: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EA954: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EA958: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EA95C: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x800EA960: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EA964: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EA968: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EA96C: nop

    // 0x800EA970: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA974: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x800EA978: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EA97C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EA980: lh          $t4, 0xEA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XEA);
    // 0x800EA984: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EA988: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800EA98C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800EA990: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EA994: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800EA998: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EA99C: addu        $t5, $t6, $t2
    ctx->r13 = ADD32(ctx->r14, ctx->r10);
    // 0x800EA9A0: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EA9A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA9A8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EA9AC: nop

    // 0x800EA9B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA9B4: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x800EA9B8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA9BC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EA9C0: lh          $t7, 0xEC($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XEC);
    // 0x800EA9C4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EA9C8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EA9CC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EA9D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EA9D4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EA9D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EA9DC: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x800EA9E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EA9E4: lwc1        $f18, 0x5554($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5554);
    // 0x800EA9E8: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EA9EC: nop

    // 0x800EA9F0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA9F4: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x800EA9F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA9FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAA00: jal         0x8001B4AC
    // 0x800EAA04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_10;
    // 0x800EAA04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x800EAA08: beq         $v0, $zero, L_800EAA28
    if (ctx->r2 == 0) {
        // 0x800EAA0C: nop
    
            goto L_800EAA28;
    }
    // 0x800EAA0C: nop

    // 0x800EAA10: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA14: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800EAA18: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800EAA1C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA20: nop

    // 0x800EAA24: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800EAA28:
    // 0x800EAA28: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EAA30: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800EAA34: nop

    // 0x800EAA38: bne         $t5, $at, L_800EAAA0
    if (ctx->r13 != ctx->r1) {
        // 0x800EAA3C: nop
    
            goto L_800EAAA0;
    }
    // 0x800EAA3C: nop

    // 0x800EAA40: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EAA48: lh          $t7, 0xEA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XEA);
    // 0x800EAA4C: nop

    // 0x800EAA50: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EAA54: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAA58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EAA5C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAA60: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EAA64: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EAA68: lwc1        $f6, 0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800EAA6C: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800EAA70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAA74: nop

    // 0x800EAA78: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800EAA7C: nop

    // 0x800EAA80: bc1f        L_800EAAA0
    if (!c1cs) {
        // 0x800EAA84: nop
    
            goto L_800EAAA0;
    }
    // 0x800EAA84: nop

    // 0x800EAA88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA8C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800EAA90: sh          $t0, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r8;
    // 0x800EAA94: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EAA98: nop

    // 0x800EAA9C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800EAAA0:
    // 0x800EAAA0: b           L_800EAAA8
    // 0x800EAAA4: nop

        goto L_800EAAA8;
    // 0x800EAAA4: nop

L_800EAAA8:
    // 0x800EAAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EAAAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EAAB0: jr          $ra
    // 0x800EAAB4: nop

    return;
    // 0x800EAAB4: nop

;}
RECOMP_FUNC void func_800AD374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AD378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AD37C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD380: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AD384: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AD388: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AD38C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD390: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AD394: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD398: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AD39C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AD3A0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800AD3A4: nop

    // 0x800AD3A8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800AD3AC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD3B0: nop

    // 0x800AD3B4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AD3B8: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x800AD3BC: beq         $at, $zero, L_800AD430
    if (ctx->r1 == 0) {
        // 0x800AD3C0: nop
    
            goto L_800AD430;
    }
    // 0x800AD3C0: nop

    // 0x800AD3C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AD3C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AD3CC: addu        $at, $at, $t0
    gpr jr_addend_800AD3D8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AD3D0: lw          $t0, 0x4ADC($at)
    ctx->r8 = ADD32(ctx->r1, 0X4ADC);
    // 0x800AD3D4: nop

    // 0x800AD3D8: jr          $t0
    // 0x800AD3DC: nop

    switch (jr_addend_800AD3D8 >> 2) {
        case 0: goto L_800AD3E0; break;
        case 1: goto L_800AD3F0; break;
        case 2: goto L_800AD400; break;
        case 3: goto L_800AD410; break;
        case 4: goto L_800AD420; break;
        default: switch_error(__func__, 0x800AD3D8, 0x80114ADC);
    }
    // 0x800AD3DC: nop

L_800AD3E0:
    // 0x800AD3E0: jal         0x800ACA10
    // 0x800AD3E4: nop

    func_800ACA10(rdram, ctx);
        goto after_0;
    // 0x800AD3E4: nop

    after_0:
    // 0x800AD3E8: b           L_800AD440
    // 0x800AD3EC: nop

        goto L_800AD440;
    // 0x800AD3EC: nop

L_800AD3F0:
    // 0x800AD3F0: jal         0x800ACB2C
    // 0x800AD3F4: nop

    func_800ACB2C(rdram, ctx);
        goto after_1;
    // 0x800AD3F4: nop

    after_1:
    // 0x800AD3F8: b           L_800AD440
    // 0x800AD3FC: nop

        goto L_800AD440;
    // 0x800AD3FC: nop

L_800AD400:
    // 0x800AD400: jal         0x800ACDCC
    // 0x800AD404: nop

    func_800ACDCC(rdram, ctx);
        goto after_2;
    // 0x800AD404: nop

    after_2:
    // 0x800AD408: b           L_800AD440
    // 0x800AD40C: nop

        goto L_800AD440;
    // 0x800AD40C: nop

L_800AD410:
    // 0x800AD410: jal         0x800AD034
    // 0x800AD414: nop

    func_800AD034(rdram, ctx);
        goto after_3;
    // 0x800AD414: nop

    after_3:
    // 0x800AD418: b           L_800AD440
    // 0x800AD41C: nop

        goto L_800AD440;
    // 0x800AD41C: nop

L_800AD420:
    // 0x800AD420: jal         0x800AD21C
    // 0x800AD424: nop

    func_800AD21C(rdram, ctx);
        goto after_4;
    // 0x800AD424: nop

    after_4:
    // 0x800AD428: b           L_800AD440
    // 0x800AD42C: nop

        goto L_800AD440;
    // 0x800AD42C: nop

L_800AD430:
    // 0x800AD430: jal         0x800AD034
    // 0x800AD434: nop

    func_800AD034(rdram, ctx);
        goto after_5;
    // 0x800AD434: nop

    after_5:
    // 0x800AD438: b           L_800AD440
    // 0x800AD43C: nop

        goto L_800AD440;
    // 0x800AD43C: nop

L_800AD440:
    // 0x800AD440: b           L_800AD448
    // 0x800AD444: nop

        goto L_800AD448;
    // 0x800AD444: nop

L_800AD448:
    // 0x800AD448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AD44C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AD450: jr          $ra
    // 0x800AD454: nop

    return;
    // 0x800AD454: nop

;}
RECOMP_FUNC void func_800EE354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EE358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE35C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EE360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EE364: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800EE368: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE36C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE370: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE374: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EE378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE37C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EE380: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800EE384: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800EE388: nop

    // 0x800EE38C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x800EE390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EE394: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800EE398: jal         0x800EE274
    // 0x800EE39C: nop

    func_800EE274(rdram, ctx);
        goto after_0;
    // 0x800EE39C: nop

    after_0:
    // 0x800EE3A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800EE3A4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800EE3A8: nop

    // 0x800EE3AC: bgez        $t8, L_800EE3CC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800EE3B0: nop
    
            goto L_800EE3CC;
    }
    // 0x800EE3B0: nop

    // 0x800EE3B4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE3B8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800EE3BC: jal         0x80015538
    // 0x800EE3C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800EE3C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x800EE3C4: b           L_800EE404
    // 0x800EE3C8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_800EE404;
    // 0x800EE3C8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_800EE3CC:
    // 0x800EE3CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800EE3D0: nop

    // 0x800EE3D4: blez        $t9, L_800EE3F4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800EE3D8: nop
    
            goto L_800EE3F4;
    }
    // 0x800EE3D8: nop

    // 0x800EE3DC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800EE3E0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE3E4: jal         0x80015538
    // 0x800EE3E8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800EE3E8: nop

    after_2:
    // 0x800EE3EC: b           L_800EE404
    // 0x800EE3F0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_800EE404;
    // 0x800EE3F0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_800EE3F4:
    // 0x800EE3F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EE3F8: jal         0x800EE1F4
    // 0x800EE3FC: nop

    func_800EE1F4(rdram, ctx);
        goto after_3;
    // 0x800EE3FC: nop

    after_3:
    // 0x800EE400: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_800EE404:
    // 0x800EE404: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800EE408: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800EE40C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EE410: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EE414: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EE418: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EE41C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EE420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE424: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EE428: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x800EE42C: b           L_800EE434
    // 0x800EE430: nop

        goto L_800EE434;
    // 0x800EE430: nop

L_800EE434:
    // 0x800EE434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE438: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EE43C: jr          $ra
    // 0x800EE440: nop

    return;
    // 0x800EE440: nop

;}
RECOMP_FUNC void func_80095228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095228: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009522C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095230: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80095234: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095238: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009523C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095240: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095248: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009524C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095250: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095254: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80095258: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009525C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80095260: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80095264: nop

    // 0x80095268: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009526C: nop

    // 0x80095270: bne         $t1, $zero, L_800952BC
    if (ctx->r9 != 0) {
        // 0x80095274: nop
    
            goto L_800952BC;
    }
    // 0x80095274: nop

    // 0x80095278: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8009527C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80095280: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80095284: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80095288: nop

    // 0x8009528C: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x80095290: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80095294: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80095298: nop

    // 0x8009529C: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x800952A0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800952A4: nop

    // 0x800952A8: lwc1        $f6, 0x48($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X48);
    // 0x800952AC: nop

    // 0x800952B0: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
    // 0x800952B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800952B8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_800952BC:
    // 0x800952BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800952C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800952C4: jal         0x80028FA0
    // 0x800952C8: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800952C8: nop

    after_0:
    // 0x800952CC: beq         $v0, $zero, L_800952F0
    if (ctx->r2 == 0) {
        // 0x800952D0: nop
    
            goto L_800952F0;
    }
    // 0x800952D0: nop

    // 0x800952D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800952D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800952DC: jal         0x80029B60
    // 0x800952E0: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800952E0: nop

    after_1:
    // 0x800952E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800952E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800952EC: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_800952F0:
    // 0x800952F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800952F4: nop

    // 0x800952F8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800952FC: nop

    // 0x80095300: beq         $t1, $zero, L_8009535C
    if (ctx->r9 == 0) {
        // 0x80095304: nop
    
            goto L_8009535C;
    }
    // 0x80095304: nop

    // 0x80095308: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8009530C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80095310: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80095314: lwc1        $f8, 0x44($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80095318: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009531C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80095320: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80095324: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x80095328: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8009532C: nop

    // 0x80095330: lwc1        $f18, 0x44($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80095334: nop

    // 0x80095338: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8009533C: nop

    // 0x80095340: bc1f        L_8009535C
    if (!c1cs) {
        // 0x80095344: nop
    
            goto L_8009535C;
    }
    // 0x80095344: nop

    // 0x80095348: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8009534C: nop

    // 0x80095350: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x80095354: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80095358: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_8009535C:
    // 0x8009535C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80095360: nop

    // 0x80095364: beq         $t6, $zero, L_800953B0
    if (ctx->r14 == 0) {
        // 0x80095368: nop
    
            goto L_800953B0;
    }
    // 0x80095368: nop

    // 0x8009536C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095374: jal         0x8002A46C
    // 0x80095378: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x80095378: nop

    after_2:
    // 0x8009537C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80095380: nop

    // 0x80095384: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80095388: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009538C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80095390: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80095394: nop

    // 0x80095398: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x8009539C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800953A0: nop

    // 0x800953A4: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800953A8: nop

    // 0x800953AC: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
L_800953B0:
    // 0x800953B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800953B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800953B8: jal         0x80029C40
    // 0x800953BC: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800953BC: nop

    after_3:
    // 0x800953C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800953C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800953C8: jal         0x80029D04
    // 0x800953CC: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800953CC: nop

    after_4:
    // 0x800953D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800953D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800953D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800953DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800953E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800953E4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800953E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800953EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800953F0: jal         0x80029018
    // 0x800953F4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800953F4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800953F8: beq         $v0, $zero, L_80095430
    if (ctx->r2 == 0) {
        // 0x800953FC: nop
    
            goto L_80095430;
    }
    // 0x800953FC: nop

    // 0x80095400: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80095404: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80095408: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009540C: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80095410: jal         0x80015538
    // 0x80095414: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80095414: nop

    after_6:
    // 0x80095418: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8009541C: nop

    // 0x80095420: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80095424: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80095428: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009542C: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_80095430:
    // 0x80095430: b           L_80095438
    // 0x80095434: nop

        goto L_80095438;
    // 0x80095434: nop

L_80095438:
    // 0x80095438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009543C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80095440: jr          $ra
    // 0x80095444: nop

    return;
    // 0x80095444: nop

;}
RECOMP_FUNC void func_800E8934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E893C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8940: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E894C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E895C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8960: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8964: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8968: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E896C: nop

    // 0x800E8970: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8974: nop

    // 0x800E8978: bne         $t1, $zero, L_800E8A1C
    if (ctx->r9 != 0) {
        // 0x800E897C: nop
    
            goto L_800E8A1C;
    }
    // 0x800E897C: nop

    // 0x800E8980: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8984: nop

    // 0x800E8988: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E898C: nop

    // 0x800E8990: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8994: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8998: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E899C: nop

    // 0x800E89A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E89A4: nop

    // 0x800E89A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E89AC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E89B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E89B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E89B8: nop

    // 0x800E89BC: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800E89C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E89C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E89C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E89CC: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E89D0: jal         0x80015538
    // 0x800E89D4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800E89D4: nop

    after_0:
    // 0x800E89D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E89DC: nop

    // 0x800E89E0: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800E89E4: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x800E89E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E89EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E89F0: nop

    // 0x800E89F4: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x800E89F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E89FC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E8A00: addiu       $t1, $t1, -0x6730
    ctx->r9 = ADD32(ctx->r9, -0X6730);
    // 0x800E8A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8A08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E8A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8A10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800E8A14: jal         0x8001C0EC
    // 0x800E8A18: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E8A18: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_1:
L_800E8A1C:
    // 0x800E8A1C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E8A20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E8A24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E8A28: lwc1        $f8, 0x44($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X44);
    // 0x800E8A2C: nop

    // 0x800E8A30: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800E8A34: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x800E8A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8A40: jal         0x80029C40
    // 0x800E8A44: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800E8A44: nop

    after_2:
    // 0x800E8A48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E8A4C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E8A50: lwc1        $f4, 0x550C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X550C);
    // 0x800E8A54: lwc1        $f18, 0x28($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800E8A58: nop

    // 0x800E8A5C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800E8A60: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x800E8A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8A6C: jal         0x8001B4AC
    // 0x800E8A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E8A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E8A74: beq         $v0, $zero, L_800E8A94
    if (ctx->r2 == 0) {
        // 0x800E8A78: nop
    
            goto L_800E8A94;
    }
    // 0x800E8A78: nop

    // 0x800E8A7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E8A80: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800E8A84: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x800E8A88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8A8C: nop

    // 0x800E8A90: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800E8A94:
    // 0x800E8A94: b           L_800E8A9C
    // 0x800E8A98: nop

        goto L_800E8A9C;
    // 0x800E8A98: nop

L_800E8A9C:
    // 0x800E8A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8AA4: jr          $ra
    // 0x800E8AA8: nop

    return;
    // 0x800E8AA8: nop

;}
RECOMP_FUNC void func_800BB480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BB484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BB488: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB48C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB490: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB49C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB4A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB4A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB4A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BB4AC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800BB4B0: nop

    // 0x800BB4B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800BB4B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB4BC: nop

    // 0x800BB4C0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BB4C4: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x800BB4C8: beq         $at, $zero, L_800BB53C
    if (ctx->r1 == 0) {
        // 0x800BB4CC: nop
    
            goto L_800BB53C;
    }
    // 0x800BB4CC: nop

    // 0x800BB4D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BB4D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BB4D8: addu        $at, $at, $t0
    gpr jr_addend_800BB4E4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BB4DC: lw          $t0, 0x4C58($at)
    ctx->r8 = ADD32(ctx->r1, 0X4C58);
    // 0x800BB4E0: nop

    // 0x800BB4E4: jr          $t0
    // 0x800BB4E8: nop

    switch (jr_addend_800BB4E4 >> 2) {
        case 0: goto L_800BB4EC; break;
        case 1: goto L_800BB4FC; break;
        case 2: goto L_800BB50C; break;
        case 3: goto L_800BB51C; break;
        case 4: goto L_800BB52C; break;
        default: switch_error(__func__, 0x800BB4E4, 0x80114C58);
    }
    // 0x800BB4E8: nop

L_800BB4EC:
    // 0x800BB4EC: jal         0x800BAD34
    // 0x800BB4F0: nop

    func_800BAD34(rdram, ctx);
        goto after_0;
    // 0x800BB4F0: nop

    after_0:
    // 0x800BB4F4: b           L_800BB544
    // 0x800BB4F8: nop

        goto L_800BB544;
    // 0x800BB4F8: nop

L_800BB4FC:
    // 0x800BB4FC: jal         0x800BAE94
    // 0x800BB500: nop

    func_800BAE94(rdram, ctx);
        goto after_1;
    // 0x800BB500: nop

    after_1:
    // 0x800BB504: b           L_800BB544
    // 0x800BB508: nop

        goto L_800BB544;
    // 0x800BB508: nop

L_800BB50C:
    // 0x800BB50C: jal         0x800BB080
    // 0x800BB510: nop

    func_800BB080(rdram, ctx);
        goto after_2;
    // 0x800BB510: nop

    after_2:
    // 0x800BB514: b           L_800BB544
    // 0x800BB518: nop

        goto L_800BB544;
    // 0x800BB518: nop

L_800BB51C:
    // 0x800BB51C: jal         0x800BB270
    // 0x800BB520: nop

    func_800BB270(rdram, ctx);
        goto after_3;
    // 0x800BB520: nop

    after_3:
    // 0x800BB524: b           L_800BB544
    // 0x800BB528: nop

        goto L_800BB544;
    // 0x800BB528: nop

L_800BB52C:
    // 0x800BB52C: jal         0x800BB388
    // 0x800BB530: nop

    func_800BB388(rdram, ctx);
        goto after_4;
    // 0x800BB530: nop

    after_4:
    // 0x800BB534: b           L_800BB544
    // 0x800BB538: nop

        goto L_800BB544;
    // 0x800BB538: nop

L_800BB53C:
    // 0x800BB53C: b           L_800BB544
    // 0x800BB540: nop

        goto L_800BB544;
    // 0x800BB540: nop

L_800BB544:
    // 0x800BB544: b           L_800BB54C
    // 0x800BB548: nop

        goto L_800BB54C;
    // 0x800BB548: nop

L_800BB54C:
    // 0x800BB54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BB550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BB554: jr          $ra
    // 0x800BB558: nop

    return;
    // 0x800BB558: nop

;}
RECOMP_FUNC void func_80093484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093484: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009348C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093490: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093494: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093498: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009349C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800934A0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800934A4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800934A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800934AC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800934B0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800934B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800934B8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800934BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800934C0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800934C4: addiu       $a1, $a1, 0x1804
    ctx->r5 = ADD32(ctx->r5, 0X1804);
    // 0x800934C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800934CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800934D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800934D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800934D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800934DC: jal         0x80027464
    // 0x800934E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800934E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800934E4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800934E8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800934EC: addiu       $t1, $t1, 0x31A8
    ctx->r9 = ADD32(ctx->r9, 0X31A8);
    // 0x800934F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800934F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800934F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800934FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80093500: jal         0x8001C0EC
    // 0x80093504: addiu       $a3, $zero, 0x288
    ctx->r7 = ADD32(0, 0X288);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80093504: addiu       $a3, $zero, 0x288
    ctx->r7 = ADD32(0, 0X288);
    after_1:
    // 0x80093508: b           L_80093510
    // 0x8009350C: nop

        goto L_80093510;
    // 0x8009350C: nop

L_80093510:
    // 0x80093510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093518: jr          $ra
    // 0x8009351C: nop

    return;
    // 0x8009351C: nop

;}
RECOMP_FUNC void func_80093054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093054: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009305C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093060: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093064: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093068: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009306C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093070: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093074: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093078: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009307C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80093080: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093084: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80093088: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009308C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093090: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093094: addiu       $a1, $a1, 0x17B0
    ctx->r5 = ADD32(ctx->r5, 0X17B0);
    // 0x80093098: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009309C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800930A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800930A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800930A8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800930AC: jal         0x80027464
    // 0x800930B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800930B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800930B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800930B8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800930BC: addiu       $t1, $t1, 0x31B8
    ctx->r9 = ADD32(ctx->r9, 0X31B8);
    // 0x800930C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800930C4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800930C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800930CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800930D0: jal         0x8001C0EC
    // 0x800930D4: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800930D4: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    after_1:
    // 0x800930D8: b           L_800930E0
    // 0x800930DC: nop

        goto L_800930E0;
    // 0x800930DC: nop

L_800930E0:
    // 0x800930E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800930E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800930E8: jr          $ra
    // 0x800930EC: nop

    return;
    // 0x800930EC: nop

;}
RECOMP_FUNC void func_800A1FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1FAC: jr          $ra
    // 0x800A1FB0: nop

    return;
    // 0x800A1FB0: nop

    // 0x800A1FB4: jr          $ra
    // 0x800A1FB8: nop

    return;
    // 0x800A1FB8: nop

;}
RECOMP_FUNC void func_800909D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800909D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800909D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800909DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800909E0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800909E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800909E8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800909EC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800909F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800909F4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800909F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800909FC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090A00: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090A04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090A08: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090A0C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090A10: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090A14: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, 0X1468);
    // 0x80090A18: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090A1C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090A20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090A24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090A28: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090A2C: jal         0x80027464
    // 0x80090A30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090A30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090A34: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090A38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090A3C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090A40: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090A48: jal         0x8001ABF4
    // 0x80090A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80090A50: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090A54: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090A58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090A5C: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80090A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80090A64: jal         0x8001ABF4
    // 0x80090A68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80090A68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80090A6C: b           L_80090A74
    // 0x80090A70: nop

        goto L_80090A74;
    // 0x80090A70: nop

L_80090A74:
    // 0x80090A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090A78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090A7C: jr          $ra
    // 0x80090A80: nop

    return;
    // 0x80090A80: nop

;}
RECOMP_FUNC void func_800DBBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DBBA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800DBBAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DBBB0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DBBB4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DBBB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DBBBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DBBC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DBBC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DBBC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBBCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DBBD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBBD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DBBD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DBBDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DBBE0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800DBBE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBBE8: nop

    // 0x800DBBEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DBBF0: nop

    // 0x800DBBF4: bne         $t1, $zero, L_800DBC38
    if (ctx->r9 != 0) {
        // 0x800DBBF8: nop
    
            goto L_800DBC38;
    }
    // 0x800DBBF8: nop

    // 0x800DBBFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBC00: nop

    // 0x800DBC04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DBC08: nop

    // 0x800DBC0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DBC10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DBC14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBC18: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DBC1C: addiu       $t5, $t5, -0x714C
    ctx->r13 = ADD32(ctx->r13, -0X714C);
    // 0x800DBC20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBC24: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DBC28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DBC2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DBC30: jal         0x8001C0EC
    // 0x800DBC34: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DBC34: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_0:
L_800DBC38:
    // 0x800DBC38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBC3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBC40: jal         0x8002A46C
    // 0x800DBC44: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800DBC44: nop

    after_1:
    // 0x800DBC48: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBC4C: nop

    // 0x800DBC50: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800DBC54: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBC58: nop

    // 0x800DBC5C: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800DBC60: nop

    // 0x800DBC64: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800DBC68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBC6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBC70: jal         0x8001B4AC
    // 0x800DBC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800DBC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800DBC78: beq         $v0, $zero, L_800DBCE0
    if (ctx->r2 == 0) {
        // 0x800DBC7C: nop
    
            goto L_800DBCE0;
    }
    // 0x800DBC7C: nop

    // 0x800DBC80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DBC84: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBC88: nop

    // 0x800DBC8C: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x800DBC90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBC94: nop

    // 0x800DBC98: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800DBC9C: nop

    // 0x800DBCA0: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800DBCA4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBCA8: nop

    // 0x800DBCAC: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800DBCB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBCB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBCB8: jal         0x8002A1FC
    // 0x800DBCBC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800DBCBC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_3:
    // 0x800DBCC0: beq         $v0, $zero, L_800DBCE0
    if (ctx->r2 == 0) {
        // 0x800DBCC4: nop
    
            goto L_800DBCE0;
    }
    // 0x800DBCC4: nop

    // 0x800DBCC8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBCCC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800DBCD0: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800DBCD4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBCD8: nop

    // 0x800DBCDC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800DBCE0:
    // 0x800DBCE0: b           L_800DBCE8
    // 0x800DBCE4: nop

        goto L_800DBCE8;
    // 0x800DBCE4: nop

L_800DBCE8:
    // 0x800DBCE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DBCEC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DBCF0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DBCF4: jr          $ra
    // 0x800DBCF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800DBCF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800BA09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA09C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA0A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA0A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA0A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA0AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA0B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA0B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA0B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA0BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA0C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA0C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA0C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA0CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BA0D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BA0D4: nop

    // 0x800BA0D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BA0DC: nop

    // 0x800BA0E0: bne         $t1, $zero, L_800BA164
    if (ctx->r9 != 0) {
        // 0x800BA0E4: nop
    
            goto L_800BA164;
    }
    // 0x800BA0E4: nop

    // 0x800BA0E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BA0EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BA0F0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BA0F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA0F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA0FC: nop

    // 0x800BA100: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BA104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BA108: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BA10C: nop

    // 0x800BA110: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BA114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA118: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800BA11C: addiu       $t6, $t6, 0x7D8C
    ctx->r14 = ADD32(ctx->r14, 0X7D8C);
    // 0x800BA120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA124: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800BA128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA12C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BA130: jal         0x8001C0EC
    // 0x800BA134: addiu       $a3, $zero, 0xF3
    ctx->r7 = ADD32(0, 0XF3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800BA134: addiu       $a3, $zero, 0xF3
    ctx->r7 = ADD32(0, 0XF3);
    after_0:
    // 0x800BA138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA13C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA140: jal         0x8001BBDC
    // 0x800BA144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800BA144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800BA148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA14C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA150: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BA154: addiu       $a3, $a3, 0x7E04
    ctx->r7 = ADD32(ctx->r7, 0X7E04);
    // 0x800BA158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA15C: jal         0x8001ABF4
    // 0x800BA160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800BA160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800BA164:
    // 0x800BA164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA16C: jal         0x80029C40
    // 0x800BA170: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800BA170: nop

    after_3:
    // 0x800BA174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA17C: jal         0x80029D04
    // 0x800BA180: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800BA180: nop

    after_4:
    // 0x800BA184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA18C: jal         0x8002A2EC
    // 0x800BA190: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_5;
    // 0x800BA190: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800BA194: beq         $v0, $zero, L_800BA1CC
    if (ctx->r2 == 0) {
        // 0x800BA198: nop
    
            goto L_800BA1CC;
    }
    // 0x800BA198: nop

    // 0x800BA19C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA1A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA1A4: jal         0x8002A3A8
    // 0x800BA1A8: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_6;
    // 0x800BA1A8: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_6:
    // 0x800BA1AC: beq         $v0, $zero, L_800BA1CC
    if (ctx->r2 == 0) {
        // 0x800BA1B0: nop
    
            goto L_800BA1CC;
    }
    // 0x800BA1B0: nop

    // 0x800BA1B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA1B8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800BA1BC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800BA1C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BA1C4: nop

    // 0x800BA1C8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800BA1CC:
    // 0x800BA1CC: b           L_800BA1D4
    // 0x800BA1D0: nop

        goto L_800BA1D4;
    // 0x800BA1D0: nop

L_800BA1D4:
    // 0x800BA1D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA1D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BA1DC: jr          $ra
    // 0x800BA1E0: nop

    return;
    // 0x800BA1E0: nop

;}
RECOMP_FUNC void func_800D1348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D134C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D1350: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D1354: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D1358: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D135C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D1360: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D1364: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D1368: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D136C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D1370: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D1374: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D1378: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D137C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D1380: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D1384: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D1388: addiu       $a1, $a1, 0x40CC
    ctx->r5 = ADD32(ctx->r5, 0X40CC);
    // 0x800D138C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D1390: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D1394: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D1398: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D139C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D13A0: jal         0x80027464
    // 0x800D13A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D13A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D13A8: b           L_800D13B0
    // 0x800D13AC: nop

        goto L_800D13B0;
    // 0x800D13AC: nop

L_800D13B0:
    // 0x800D13B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D13B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D13B8: jr          $ra
    // 0x800D13BC: nop

    return;
    // 0x800D13BC: nop

;}
RECOMP_FUNC void func_800B969C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B969C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B96A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B96A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B96A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B96AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B96B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B96B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B96B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B96BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B96C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B96C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B96C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B96CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B96D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B96D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B96D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B96DC: nop

    // 0x800B96E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B96E4: nop

    // 0x800B96E8: bne         $t1, $zero, L_800B9744
    if (ctx->r9 != 0) {
        // 0x800B96EC: nop
    
            goto L_800B9744;
    }
    // 0x800B96EC: nop

    // 0x800B96F0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B96F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B96F8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B96FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B9700: nop

    // 0x800B9704: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x800B9708: nop

    // 0x800B970C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800B9710: nop

    // 0x800B9714: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9718: swc1        $f6, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f6.u32l;
    // 0x800B971C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9724: jal         0x8001BB04
    // 0x800B9728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_0;
    // 0x800B9728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B972C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9738: lw          $a1, 0x48($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X48);
    // 0x800B973C: jal         0x80029EF8
    // 0x800B9740: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800B9740: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_1:
L_800B9744:
    // 0x800B9744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B974C: jal         0x80029C40
    // 0x800B9750: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B9750: nop

    after_2:
    // 0x800B9754: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B9758: nop

    // 0x800B975C: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800B9760: nop

    // 0x800B9764: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800B9768: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B976C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B9770: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9774: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9778: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B977C: lui         $a2, 0x430C
    ctx->r6 = S32(0X430C << 16);
    // 0x800B9780: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B9784: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B9788: jal         0x80029018
    // 0x800B978C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800B978C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800B9790: beq         $v0, $zero, L_800B97A8
    if (ctx->r2 == 0) {
        // 0x800B9794: nop
    
            goto L_800B97A8;
    }
    // 0x800B9794: nop

    // 0x800B9798: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800B979C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B97A0: nop

    // 0x800B97A4: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
L_800B97A8:
    // 0x800B97A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B97AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B97B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B97B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B97B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B97BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B97C0: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    // 0x800B97C4: jal         0x80029F58
    // 0x800B97C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800B97C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800B97CC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B97D0: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x800B97D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B97D8: bne         $t9, $at, L_800B98CC
    if (ctx->r25 != ctx->r1) {
        // 0x800B97DC: nop
    
            goto L_800B98CC;
    }
    // 0x800B97DC: nop

    // 0x800B97E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B97E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B97E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B97EC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x800B97F0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B97F4: jal         0x800175F0
    // 0x800B97F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800B97F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x800B97FC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B9800: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800B9804: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B9808: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B980C: nop

    // 0x800B9810: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B9814: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B9818: nop

    // 0x800B981C: lh          $t5, 0xAA($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAA);
    // 0x800B9820: nop

    // 0x800B9824: addiu       $t4, $t5, -0x32
    ctx->r12 = ADD32(ctx->r13, -0X32);
    // 0x800B9828: sh          $t4, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r12;
    // 0x800B982C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9830: nop

    // 0x800B9834: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800B9838: nop

    // 0x800B983C: bgtz        $t7, L_800B9850
    if (SIGNED(ctx->r15) > 0) {
        // 0x800B9840: nop
    
            goto L_800B9850;
    }
    // 0x800B9840: nop

    // 0x800B9844: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B9848: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B984C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800B9850:
    // 0x800B9850: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B9854: nop

    // 0x800B9858: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800B985C: nop

    // 0x800B9860: addiu       $t2, $t1, -0x3
    ctx->r10 = ADD32(ctx->r9, -0X3);
    // 0x800B9864: sh          $t2, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r10;
    // 0x800B9868: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B986C: nop

    // 0x800B9870: lh          $t4, 0xAC($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XAC);
    // 0x800B9874: nop

    // 0x800B9878: bgtz        $t4, L_800B988C
    if (SIGNED(ctx->r12) > 0) {
        // 0x800B987C: nop
    
            goto L_800B988C;
    }
    // 0x800B987C: nop

    // 0x800B9880: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9884: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800B9888: sh          $t3, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r11;
L_800B988C:
    // 0x800B988C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B9890: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x800B9894: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800B9898: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800B989C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B98A0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800B98A4: lw          $t1, 0x7740($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7740);
    // 0x800B98A8: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800B98AC: bne         $t1, $at, L_800B98CC
    if (ctx->r9 != ctx->r1) {
        // 0x800B98B0: nop
    
            goto L_800B98CC;
    }
    // 0x800B98B0: nop

    // 0x800B98B4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B98B8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800B98BC: sh          $t2, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r10;
    // 0x800B98C0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B98C4: nop

    // 0x800B98C8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B98CC:
    // 0x800B98CC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B98D0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B98D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B98D8: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800B98DC: nop

    // 0x800B98E0: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B98E4: nop

    // 0x800B98E8: bc1f        L_800B9900
    if (!c1cs) {
        // 0x800B98EC: nop
    
            goto L_800B9900;
    }
    // 0x800B98EC: nop

    // 0x800B98F0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B98F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B98F8: b           L_800B9950
    // 0x800B98FC: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
        goto L_800B9950;
    // 0x800B98FC: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
L_800B9900:
    // 0x800B9900: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B9904: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B9908: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B990C: lwc1        $f16, 0x28($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800B9910: nop

    // 0x800B9914: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800B9918: nop

    // 0x800B991C: bc1f        L_800B9934
    if (!c1cs) {
        // 0x800B9920: nop
    
            goto L_800B9934;
    }
    // 0x800B9920: nop

    // 0x800B9924: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B9928: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B992C: b           L_800B9944
    // 0x800B9930: nop

        goto L_800B9944;
    // 0x800B9930: nop

L_800B9934:
    // 0x800B9934: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9938: nop

    // 0x800B993C: lwc1        $f20, 0x28($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800B9940: nop

L_800B9944:
    // 0x800B9944: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B9948: nop

    // 0x800B994C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
L_800B9950:
    // 0x800B9950: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B9954: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800B9958: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B995C: lwc1        $f12, 0x18($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X18);
    // 0x800B9960: jal         0x80015538
    // 0x800B9964: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800B9964: nop

    after_6:
    // 0x800B9968: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B996C: nop

    // 0x800B9970: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x800B9974: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B9978: nop

    // 0x800B997C: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800B9980: nop

    // 0x800B9984: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x800B9988: b           L_800B9990
    // 0x800B998C: nop

        goto L_800B9990;
    // 0x800B998C: nop

L_800B9990:
    // 0x800B9990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B9994: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B9998: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B999C: jr          $ra
    // 0x800B99A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B99A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009EAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EAEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009EAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009EAF4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009EAF8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8009EAFC: nop

    // 0x8009EB00: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009EB04: nop

    // 0x8009EB08: bne         $t7, $zero, L_8009EB94
    if (ctx->r15 != 0) {
        // 0x8009EB0C: nop
    
            goto L_8009EB94;
    }
    // 0x8009EB0C: nop

    // 0x8009EB10: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8009EB14: nop

    // 0x8009EB18: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009EB1C: nop

    // 0x8009EB20: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009EB24: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009EB28: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8009EB2C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8009EB30: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8009EB34: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8009EB38: nop

    // 0x8009EB3C: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
    // 0x8009EB40: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8009EB44: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x8009EB48: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x8009EB4C: nop

    // 0x8009EB50: bne         $t5, $at, L_8009EB6C
    if (ctx->r13 != ctx->r1) {
        // 0x8009EB54: nop
    
            goto L_8009EB6C;
    }
    // 0x8009EB54: nop

    // 0x8009EB58: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009EB5C: addiu       $t6, $t6, 0x6E50
    ctx->r14 = ADD32(ctx->r14, 0X6E50);
    // 0x8009EB60: addiu       $t7, $t6, 0x1C
    ctx->r15 = ADD32(ctx->r14, 0X1C);
    // 0x8009EB64: b           L_8009EB7C
    // 0x8009EB68: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_8009EB7C;
    // 0x8009EB68: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8009EB6C:
    // 0x8009EB6C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8009EB70: addiu       $t9, $t9, 0x6E50
    ctx->r25 = ADD32(ctx->r25, 0X6E50);
    // 0x8009EB74: addiu       $t0, $t9, 0x54
    ctx->r8 = ADD32(ctx->r25, 0X54);
    // 0x8009EB78: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8009EB7C:
    // 0x8009EB7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009EB80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009EB84: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8009EB88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009EB8C: jal         0x8001ABF4
    // 0x8009EB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009EB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8009EB94:
    // 0x8009EB94: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8009EB98: nop

    // 0x8009EB9C: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x8009EBA0: lh          $t2, 0xA8($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XA8);
    // 0x8009EBA4: nop

    // 0x8009EBA8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8009EBAC: mflo        $t3
    ctx->r11 = lo;
    // 0x8009EBB0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8009EBB4: nop

    // 0x8009EBB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009EBBC: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x8009EBC0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8009EBC4: nop

    // 0x8009EBC8: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x8009EBCC: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x8009EBD0: nop

    // 0x8009EBD4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8009EBD8: sh          $t7, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r15;
    // 0x8009EBDC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8009EBE0: nop

    // 0x8009EBE4: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x8009EBE8: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x8009EBEC: nop

    // 0x8009EBF0: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8009EBF4: bne         $at, $zero, L_8009EC2C
    if (ctx->r1 != 0) {
        // 0x8009EBF8: nop
    
            goto L_8009EC2C;
    }
    // 0x8009EBF8: nop

    // 0x8009EBFC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8009EC00: nop

    // 0x8009EC04: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x8009EC08: nop

    // 0x8009EC0C: negu        $t8, $t3
    ctx->r24 = SUB32(0, ctx->r11);
    // 0x8009EC10: sh          $t8, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r24;
    // 0x8009EC14: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8009EC18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009EC1C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8009EC20: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8009EC24: nop

    // 0x8009EC28: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8009EC2C:
    // 0x8009EC2C: b           L_8009EC34
    // 0x8009EC30: nop

        goto L_8009EC34;
    // 0x8009EC30: nop

L_8009EC34:
    // 0x8009EC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009EC38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009EC3C: jr          $ra
    // 0x8009EC40: nop

    return;
    // 0x8009EC40: nop

;}
RECOMP_FUNC void func_8009B9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B9F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B9F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B9FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009BA00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009BA04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009BA08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009BA0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009BA10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009BA14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009BA18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009BA1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009BA20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009BA24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009BA28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009BA2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009BA30: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009BA34: nop

    // 0x8009BA38: bne         $t1, $at, L_8009BAD4
    if (ctx->r9 != ctx->r1) {
        // 0x8009BA3C: nop
    
            goto L_8009BAD4;
    }
    // 0x8009BA3C: nop

    // 0x8009BA40: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009BA44: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8009BA48: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8009BA4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009BA50: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8009BA54: nop

    // 0x8009BA58: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8009BA5C: nop

    // 0x8009BA60: bc1f        L_8009BACC
    if (!c1cs) {
        // 0x8009BA64: nop
    
            goto L_8009BACC;
    }
    // 0x8009BA64: nop

    // 0x8009BA68: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x8009BA6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009BA70: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8009BA74: nop

    // 0x8009BA78: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8009BA7C: nop

    // 0x8009BA80: bc1f        L_8009BACC
    if (!c1cs) {
        // 0x8009BA84: nop
    
            goto L_8009BACC;
    }
    // 0x8009BA84: nop

    // 0x8009BA88: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x8009BA8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009BA90: nop

    // 0x8009BA94: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x8009BA98: nop

    // 0x8009BA9C: bc1f        L_8009BACC
    if (!c1cs) {
        // 0x8009BAA0: nop
    
            goto L_8009BACC;
    }
    // 0x8009BAA0: nop

    // 0x8009BAA4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009BAA8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8009BAAC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8009BAB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BAB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BAB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009BABC: addiu       $a2, $zero, 0x5E
    ctx->r6 = ADD32(0, 0X5E);
    // 0x8009BAC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009BAC4: jal         0x800175F0
    // 0x8009BAC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8009BAC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_8009BACC:
    // 0x8009BACC: b           L_8009BBAC
    // 0x8009BAD0: nop

        goto L_8009BBAC;
    // 0x8009BAD0: nop

L_8009BAD4:
    // 0x8009BAD4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009BAD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009BADC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8009BAE0: nop

    // 0x8009BAE4: bne         $t6, $at, L_8009BB9C
    if (ctx->r14 != ctx->r1) {
        // 0x8009BAE8: nop
    
            goto L_8009BB9C;
    }
    // 0x8009BAE8: nop

    // 0x8009BAEC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009BAF0: addiu       $at, $zero, 0x18B
    ctx->r1 = ADD32(0, 0X18B);
    // 0x8009BAF4: lh          $t8, 0xE4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE4);
    // 0x8009BAF8: nop

    // 0x8009BAFC: bne         $t8, $at, L_8009BB50
    if (ctx->r24 != ctx->r1) {
        // 0x8009BB00: nop
    
            goto L_8009BB50;
    }
    // 0x8009BB00: nop

    // 0x8009BB04: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009BB08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009BB0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB10: nop

    // 0x8009BB14: swc1        $f18, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f18.u32l;
    // 0x8009BB18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB1C: lui         $at, 0x4424
    ctx->r1 = S32(0X4424 << 16);
    // 0x8009BB20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009BB24: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8009BB28: nop

    // 0x8009BB2C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8009BB30: nop

    // 0x8009BB34: bc1f        L_8009BB48
    if (!c1cs) {
        // 0x8009BB38: nop
    
            goto L_8009BB48;
    }
    // 0x8009BB38: nop

    // 0x8009BB3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB40: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009BB44: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_8009BB48:
    // 0x8009BB48: b           L_8009BB94
    // 0x8009BB4C: nop

        goto L_8009BB94;
    // 0x8009BB4C: nop

L_8009BB50:
    // 0x8009BB50: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8009BB54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009BB58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB5C: nop

    // 0x8009BB60: swc1        $f10, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f10.u32l;
    // 0x8009BB64: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB68: lui         $at, 0xC424
    ctx->r1 = S32(0XC424 << 16);
    // 0x8009BB6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009BB70: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8009BB74: nop

    // 0x8009BB78: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x8009BB7C: nop

    // 0x8009BB80: bc1f        L_8009BB94
    if (!c1cs) {
        // 0x8009BB84: nop
    
            goto L_8009BB94;
    }
    // 0x8009BB84: nop

    // 0x8009BB88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009BB8C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8009BB90: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_8009BB94:
    // 0x8009BB94: b           L_8009BBAC
    // 0x8009BB98: nop

        goto L_8009BBAC;
    // 0x8009BB98: nop

L_8009BB9C:
    // 0x8009BB9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009BBA0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009BBA4: nop

    // 0x8009BBA8: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
L_8009BBAC:
    // 0x8009BBAC: b           L_8009BBB4
    // 0x8009BBB0: nop

        goto L_8009BBB4;
    // 0x8009BBB0: nop

L_8009BBB4:
    // 0x8009BBB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009BBB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009BBBC: jr          $ra
    // 0x8009BBC0: nop

    return;
    // 0x8009BBC0: nop

;}
RECOMP_FUNC void func_800AFEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AFEB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AFEBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AFEC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AFEC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AFEC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AFECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AFED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AFED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFEDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AFEE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AFEE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AFEE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AFEEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFEF0: nop

    // 0x800AFEF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AFEF8: nop

    // 0x800AFEFC: bne         $t1, $zero, L_800AFF7C
    if (ctx->r9 != 0) {
        // 0x800AFF00: nop
    
            goto L_800AFF7C;
    }
    // 0x800AFF00: nop

    // 0x800AFF04: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AFF08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AFF0C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AFF10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AFF14: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AFF18: nop

    // 0x800AFF1C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AFF20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AFF24: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AFF28: nop

    // 0x800AFF2C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AFF30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AFF34: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800AFF38: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800AFF3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFF40: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800AFF44: addiu       $t8, $t8, 0x7660
    ctx->r24 = ADD32(ctx->r24, 0X7660);
    // 0x800AFF48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFF4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AFF50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFF54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800AFF58: jal         0x8001C0EC
    // 0x800AFF5C: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AFF5C: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_0:
    // 0x800AFF60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFF64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFF68: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AFF6C: addiu       $a3, $a3, 0x7738
    ctx->r7 = ADD32(ctx->r7, 0X7738);
    // 0x800AFF70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AFF74: jal         0x8001ABF4
    // 0x800AFF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800AFF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800AFF7C:
    // 0x800AFF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFF80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFF84: jal         0x80029C40
    // 0x800AFF88: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800AFF88: nop

    after_2:
    // 0x800AFF8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFF90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFF94: jal         0x80029D04
    // 0x800AFF98: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800AFF98: nop

    after_3:
    // 0x800AFF9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFFA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFFA4: jal         0x8001B44C
    // 0x800AFFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800AFFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800AFFAC: beq         $v0, $zero, L_800AFFF0
    if (ctx->r2 == 0) {
        // 0x800AFFB0: nop
    
            goto L_800AFFF0;
    }
    // 0x800AFFB0: nop

    // 0x800AFFB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFFB8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800AFFBC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AFFC0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AFFC4: nop

    // 0x800AFFC8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800AFFCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFFD0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800AFFD4: addiu       $t2, $t2, 0x7660
    ctx->r10 = ADD32(ctx->r10, 0X7660);
    // 0x800AFFD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFFDC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800AFFE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFFE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AFFE8: jal         0x8001C0EC
    // 0x800AFFEC: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800AFFEC: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_5:
L_800AFFF0:
    // 0x800AFFF0: b           L_800AFFF8
    // 0x800AFFF4: nop

        goto L_800AFFF8;
    // 0x800AFFF4: nop

L_800AFFF8:
    // 0x800AFFF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AFFFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B0000: jr          $ra
    // 0x800B0004: nop

    return;
    // 0x800B0004: nop

;}
RECOMP_FUNC void func_8008ED8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ED8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008ED90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008ED94: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008ED98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008ED9C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x8008EDA0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008EDA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008EDA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EDAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008EDB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EDB4: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008EDB8: nop

    // 0x8008EDBC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8008EDC0: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x8008EDC4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8008EDC8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8008EDCC: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8008EDD0: lh          $s0, 0x4CB8($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4CB8);
    // 0x8008EDD4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EDD8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x8008EDDC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8008EDE0: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8008EDE4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8008EDE8: jal         0x8001BB34
    // 0x8008EDEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008EDEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8008EDF0: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x8008EDF4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008EDF8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008EDFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008EE00: lh          $t5, 0x4CB8($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4CB8);
    // 0x8008EE04: nop

    // 0x8008EE08: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8008EE0C: beq         $t6, $zero, L_8008EE3C
    if (ctx->r14 == 0) {
        // 0x8008EE10: nop
    
            goto L_8008EE3C;
    }
    // 0x8008EE10: nop

    // 0x8008EE14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EE18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EE1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EE20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EE24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EE28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EE2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008EE30: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008EE34: b           L_8008EE64
    // 0x8008EE38: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
        goto L_8008EE64;
    // 0x8008EE38: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
L_8008EE3C:
    // 0x8008EE3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EE40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EE44: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008EE48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008EE4C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008EE50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008EE54: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008EE58: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008EE5C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008EE60: sb          $t9, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r25;
L_8008EE64:
    // 0x8008EE64: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_8008EE68:
    // 0x8008EE68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EE6C: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8008EE70: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008EE74: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008EE78: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008EE7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008EE80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008EE84: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008EE88: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8008EE8C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008EE90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EE94: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8008EE98: nop

    // 0x8008EE9C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8008EEA0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008EEA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008EEA8: beq         $t8, $at, L_8008EF54
    if (ctx->r24 == ctx->r1) {
        // 0x8008EEAC: nop
    
            goto L_8008EF54;
    }
    // 0x8008EEAC: nop

    // 0x8008EEB0: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8008EEB4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8008EEB8: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x8008EEBC: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8008EEC0: lh          $s0, 0x4CB8($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4CB8);
    // 0x8008EEC4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008EEC8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x8008EECC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8008EED0: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8008EED4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8008EED8: jal         0x8001BB34
    // 0x8008EEDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8008EEDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8008EEE0: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8008EEE4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008EEE8: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8008EEEC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008EEF0: lh          $t5, 0x4CB8($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4CB8);
    // 0x8008EEF4: nop

    // 0x8008EEF8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8008EEFC: beq         $t6, $zero, L_8008EF2C
    if (ctx->r14 == 0) {
        // 0x8008EF00: nop
    
            goto L_8008EF2C;
    }
    // 0x8008EF00: nop

    // 0x8008EF04: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008EF08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EF0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EF10: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EF14: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EF18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EF1C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008EF20: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008EF24: b           L_8008EF54
    // 0x8008EF28: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
        goto L_8008EF54;
    // 0x8008EF28: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
L_8008EF2C:
    // 0x8008EF2C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008EF30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EF34: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8008EF38: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008EF3C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008EF40: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008EF44: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008EF48: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008EF4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008EF50: sb          $t0, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r8;
L_8008EF54:
    // 0x8008EF54: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8008EF58: nop

    // 0x8008EF5C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8008EF60: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x8008EF64: sra         $t5, $t3, 16
    ctx->r13 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8008EF68: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x8008EF6C: bne         $at, $zero, L_8008EE68
    if (ctx->r1 != 0) {
        // 0x8008EF70: sh          $t4, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r12;
            goto L_8008EE68;
    }
    // 0x8008EF70: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
    // 0x8008EF74: b           L_8008EF7C
    // 0x8008EF78: nop

        goto L_8008EF7C;
    // 0x8008EF78: nop

L_8008EF7C:
    // 0x8008EF7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008EF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008EF84: jr          $ra
    // 0x8008EF88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008EF88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D63C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D63C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D63C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D63CC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D63D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D63D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D63D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D63DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D63E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D63E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D63E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D63EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D63F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D63F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D63F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D63FC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D6400: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6404: nop

    // 0x800D6408: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D640C: nop

    // 0x800D6410: bne         $t1, $zero, L_800D64A0
    if (ctx->r9 != 0) {
        // 0x800D6414: nop
    
            goto L_800D64A0;
    }
    // 0x800D6414: nop

    // 0x800D6418: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D641C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D6420: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D6424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D6428: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800D642C: nop

    // 0x800D6430: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800D6434: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6438: nop

    // 0x800D643C: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D6440: nop

    // 0x800D6444: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800D6448: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D644C: nop

    // 0x800D6450: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800D6454: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6458: nop

    // 0x800D645C: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800D6460: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6464: nop

    // 0x800D6468: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800D646C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6470: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D6474: addiu       $t9, $t9, -0x7798
    ctx->r25 = ADD32(ctx->r25, -0X7798);
    // 0x800D6478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D647C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800D6480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D6484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D6488: jal         0x8001C0EC
    // 0x800D648C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D648C: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x800D6490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6498: jal         0x8001BBDC
    // 0x800D649C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D649C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800D64A0:
    // 0x800D64A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D64A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800D64A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D64AC: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x800D64B0: nop

    // 0x800D64B4: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800D64B8: nop

    // 0x800D64BC: bc1f        L_800D64E0
    if (!c1cs) {
        // 0x800D64C0: nop
    
            goto L_800D64E0;
    }
    // 0x800D64C0: nop

    // 0x800D64C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D64C8: nop

    // 0x800D64CC: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800D64D0: nop

    // 0x800D64D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800D64D8: b           L_800D64FC
    // 0x800D64DC: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
        goto L_800D64FC;
    // 0x800D64DC: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_800D64E0:
    // 0x800D64E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800D64E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800D64E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D64EC: lwc1        $f10, 0x20($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800D64F0: nop

    // 0x800D64F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800D64F8: swc1        $f18, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f18.u32l;
L_800D64FC:
    // 0x800D64FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6500: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800D6504: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800D6508: nop

    // 0x800D650C: bne         $t6, $at, L_800D6524
    if (ctx->r14 != ctx->r1) {
        // 0x800D6510: nop
    
            goto L_800D6524;
    }
    // 0x800D6510: nop

    // 0x800D6514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D651C: jal         0x8002B0E4
    // 0x800D6520: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800D6520: nop

    after_2:
L_800D6524:
    // 0x800D6524: b           L_800D652C
    // 0x800D6528: nop

        goto L_800D652C;
    // 0x800D6528: nop

L_800D652C:
    // 0x800D652C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D6530: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D6534: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D6538: jr          $ra
    // 0x800D653C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D653C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800EE1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EE1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE1FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800EE200: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800EE204: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EE208: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EE20C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE210: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EE214: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800EE218: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE21C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800EE220: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EE224: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800EE228: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800EE22C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x800EE230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EE234: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800EE238: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800EE23C: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800EE240: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800EE244: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800EE248: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800EE24C: jal         0x80015634
    // 0x800EE250: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x800EE250: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x800EE254: b           L_800EE264
    // 0x800EE258: nop

        goto L_800EE264;
    // 0x800EE258: nop

    // 0x800EE25C: b           L_800EE264
    // 0x800EE260: nop

        goto L_800EE264;
    // 0x800EE260: nop

L_800EE264:
    // 0x800EE264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EE26C: jr          $ra
    // 0x800EE270: nop

    return;
    // 0x800EE270: nop

;}
RECOMP_FUNC void func_800F14A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F14A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F14AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F14B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F14B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F14B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F14BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F14C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F14C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F14C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F14CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F14D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F14D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F14D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F14DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F14E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F14E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F14E8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800F14EC: nop

    // 0x800F14F0: beq         $s0, $at, L_800F150C
    if (ctx->r16 == ctx->r1) {
        // 0x800F14F4: nop
    
            goto L_800F150C;
    }
    // 0x800F14F4: nop

    // 0x800F14F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F14FC: beq         $s0, $at, L_800F151C
    if (ctx->r16 == ctx->r1) {
        // 0x800F1500: nop
    
            goto L_800F151C;
    }
    // 0x800F1500: nop

    // 0x800F1504: b           L_800F152C
    // 0x800F1508: nop

        goto L_800F152C;
    // 0x800F1508: nop

L_800F150C:
    // 0x800F150C: jal         0x800F11F4
    // 0x800F1510: nop

    func_800F11F4(rdram, ctx);
        goto after_0;
    // 0x800F1510: nop

    after_0:
    // 0x800F1514: b           L_800F1534
    // 0x800F1518: nop

        goto L_800F1534;
    // 0x800F1518: nop

L_800F151C:
    // 0x800F151C: jal         0x800F1478
    // 0x800F1520: nop

    func_800F1478(rdram, ctx);
        goto after_1;
    // 0x800F1520: nop

    after_1:
    // 0x800F1524: b           L_800F1534
    // 0x800F1528: nop

        goto L_800F1534;
    // 0x800F1528: nop

L_800F152C:
    // 0x800F152C: b           L_800F1534
    // 0x800F1530: nop

        goto L_800F1534;
    // 0x800F1530: nop

L_800F1534:
    // 0x800F1534: b           L_800F153C
    // 0x800F1538: nop

        goto L_800F153C;
    // 0x800F1538: nop

L_800F153C:
    // 0x800F153C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F1540: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F1544: jr          $ra
    // 0x800F1548: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F1548: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B4C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4C1C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B4C20: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800B4C24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B4C28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B4C2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B4C30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B4C34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B4C38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B4C3C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B4C40: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B4C44: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B4C48: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B4C4C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B4C50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B4C54: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B4C58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B4C5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B4C60: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B4C64: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B4C68: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B4C6C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B4C70: jr          $ra
    // 0x800B4C74: nop

    return;
    // 0x800B4C74: nop

    // 0x800B4C78: jr          $ra
    // 0x800B4C7C: nop

    return;
    // 0x800B4C7C: nop

;}
RECOMP_FUNC void func_800C2D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2D40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2D48: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C2D4C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C2D50: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C2D54: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C2D58: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C2D5C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C2D60: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C2D64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C2D68: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C2D6C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C2D70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C2D74: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C2D78: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C2D7C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C2D80: addiu       $a1, $a1, 0x3EF8
    ctx->r5 = ADD32(ctx->r5, 0X3EF8);
    // 0x800C2D84: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C2D88: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C2D8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C2D90: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C2D94: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C2D98: jal         0x80027464
    // 0x800C2D9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C2D9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C2DA0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C2DA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C2DA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C2DAC: beq         $t1, $at, L_800C2E38
    if (ctx->r9 == ctx->r1) {
        // 0x800C2DB0: nop
    
            goto L_800C2E38;
    }
    // 0x800C2DB0: nop

    // 0x800C2DB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2DB8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2DBC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C2DC0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C2DC4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C2DC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2DCC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C2DD0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C2DD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2DD8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C2DDC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800C2DE0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C2DE4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2DE8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C2DEC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C2DF0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C2DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2DF8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C2DFC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C2E00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2E04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C2E08: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800C2E0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C2E10: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C2E14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C2E18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C2E1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C2E20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C2E24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C2E28: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C2E2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2E30: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C2E34: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_800C2E38:
    // 0x800C2E38: b           L_800C2E40
    // 0x800C2E3C: nop

        goto L_800C2E40;
    // 0x800C2E3C: nop

L_800C2E40:
    // 0x800C2E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C2E48: jr          $ra
    // 0x800C2E4C: nop

    return;
    // 0x800C2E4C: nop

;}
RECOMP_FUNC void func_80080388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080388: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008038C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80080390: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80080394: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080398: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008039C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800803A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800803A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800803A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800803AC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800803B0: addiu       $t6, $zero, 0x2C3
    ctx->r14 = ADD32(0, 0X2C3);
    // 0x800803B4: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x800803B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800803BC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800803C0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800803C4: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800803C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800803CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800803D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800803D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800803D8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800803DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800803E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800803E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800803E8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800803EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800803F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800803F4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800803F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800803FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80080400: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80080404: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80080408: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008040C: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x80080410: lwc1        $f12, 0x14($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X14);
    // 0x80080414: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80080418: swc1        $f12, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f12.u32l;
    // 0x8008041C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80080420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080424: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80080428: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8008042C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080430: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80080434: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080438: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008043C: swc1        $f12, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f12.u32l;
    // 0x80080440: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80080444: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80080448: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008044C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80080450: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80080454: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80080458: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008045C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80080460: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80080464: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80080468: sh          $t6, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r14;
    // 0x8008046C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80080470: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80080474: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080478: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008047C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80080480: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80080484: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80080488: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008048C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80080490: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80080494: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80080498: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8008049C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800804A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800804A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800804A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800804AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800804B0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800804B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800804B8: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x800804BC: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x800804C0: b           L_800804C8
    // 0x800804C4: nop

        goto L_800804C8;
    // 0x800804C4: nop

L_800804C8:
    // 0x800804C8: jr          $ra
    // 0x800804CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800804CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Demo_RenderTextBG(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BAD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005BAD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005BAD8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005BADC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BAE0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BAE4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005BAE8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8005BAEC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BAF0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005BAF4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BAF8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BAFC: nop

    // 0x8005BB00: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005BB04: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005BB08: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005BB0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BB10: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005BB14: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005BB18: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8005BB1C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8005BB20: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x8005BB24: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BB28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005BB2C: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x8005BB30: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x8005BB34: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005BB38: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005BB3C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005BB40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BB44: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005BB48: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005BB4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8005BB50: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8005BB54: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x8005BB58: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005BB5C: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8005BB60: addiu       $t1, $zero, 0x2204
    ctx->r9 = ADD32(0, 0X2204);
    // 0x8005BB64: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8005BB68: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005BB6C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005BB70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BB74: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BB78: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005BB7C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8005BB80: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8005BB84: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x8005BB88: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x8005BB8C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BB90: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x8005BB94: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x8005BB98: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x8005BB9C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005BBA0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005BBA4: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005BBA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BBAC: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005BBB0: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8005BBB4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x8005BBB8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8005BBBC: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x8005BBC0: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x8005BBC4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005BBC8: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8005BBCC: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x8005BBD0: ori         $t3, $t3, 0x41C8
    ctx->r11 = ctx->r11 | 0X41C8;
    // 0x8005BBD4: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005BBD8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005BBDC: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8005BBE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BBE4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005BBE8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005BBEC: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8005BBF0: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8005BBF4: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8005BBF8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005BBFC: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8005BC00: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8005BC04: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8005BC08: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005BC0C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005BC10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BC14: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005BC18: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005BC1C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8005BC20: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005BC24: lui         $t3, 0xF64A
    ctx->r11 = S32(0XF64A << 16);
    // 0x8005BC28: ori         $t3, $t3, 0x8370
    ctx->r11 = ctx->r11 | 0X8370;
    // 0x8005BC2C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BC30: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8005BC34: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x8005BC38: ori         $t5, $t5, 0x2D0
    ctx->r13 = ctx->r13 | 0X2D0;
    // 0x8005BC3C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005BC40: b           L_8005BC48
    // 0x8005BC44: nop

        goto L_8005BC48;
    // 0x8005BC44: nop

L_8005BC48:
    // 0x8005BC48: jr          $ra
    // 0x8005BC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005BC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800E8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8804: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E8808: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E880C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E8810: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E8814: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8818: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E881C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8820: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E882C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8830: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8834: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8838: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E883C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E8840: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E8844: nop

    // 0x800E8848: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E884C: nop

    // 0x800E8850: bne         $t1, $zero, L_800E88F0
    if (ctx->r9 != 0) {
        // 0x800E8854: nop
    
            goto L_800E88F0;
    }
    // 0x800E8854: nop

    // 0x800E8858: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E885C: nop

    // 0x800E8860: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E8864: nop

    // 0x800E8868: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E886C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8870: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E8874: nop

    // 0x800E8878: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800E887C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E8880: nop

    // 0x800E8884: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x800E8888: nop

    // 0x800E888C: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
    // 0x800E8890: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8894: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E8898: nop

    // 0x800E889C: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x800E88A0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E88A4: nop

    // 0x800E88A8: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E88AC: nop

    // 0x800E88B0: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800E88B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E88B8: nop

    // 0x800E88BC: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800E88C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E88C4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E88C8: addiu       $t1, $t1, -0x6730
    ctx->r9 = ADD32(ctx->r9, -0X6730);
    // 0x800E88CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E88D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E88D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E88D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800E88DC: jal         0x8001C0EC
    // 0x800E88E0: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E88E0: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
    // 0x800E88E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E88E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800E88EC: sb          $t3, 0x13A($t4)
    MEM_B(0X13A, ctx->r12) = ctx->r11;
L_800E88F0:
    // 0x800E88F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E88F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E88F8: jal         0x8001B4AC
    // 0x800E88FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800E88FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800E8900: beq         $v0, $zero, L_800E8918
    if (ctx->r2 == 0) {
        // 0x800E8904: nop
    
            goto L_800E8918;
    }
    // 0x800E8904: nop

    // 0x800E8908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E890C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8910: jal         0x8002B0E4
    // 0x800E8914: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800E8914: nop

    after_2:
L_800E8918:
    // 0x800E8918: b           L_800E8920
    // 0x800E891C: nop

        goto L_800E8920;
    // 0x800E891C: nop

L_800E8920:
    // 0x800E8920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E8924: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E8928: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E892C: jr          $ra
    // 0x800E8930: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E8930: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800DEB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DEB3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DEB40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DEB44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DEB48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DEB4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DEB50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DEB54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DEB58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DEB5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DEB60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DEB64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DEB68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DEB6C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DEB70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DEB74: nop

    // 0x800DEB78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DEB7C: nop

    // 0x800DEB80: bne         $t1, $zero, L_800DEC28
    if (ctx->r9 != 0) {
        // 0x800DEB84: nop
    
            goto L_800DEC28;
    }
    // 0x800DEB84: nop

    // 0x800DEB88: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DEB8C: nop

    // 0x800DEB90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DEB94: nop

    // 0x800DEB98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DEB9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DEBA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEBA4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DEBA8: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DEBAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEBB0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DEBB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DEBB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800DEBBC: jal         0x8001C0EC
    // 0x800DEBC0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DEBC0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DEBC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEBC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEBCC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DEBD0: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DEBD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DEBD8: jal         0x8001ABF4
    // 0x800DEBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DEBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DEBE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEBE4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DEBE8: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DEBEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEBF0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DEBF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DEBF8: jal         0x8001ABF4
    // 0x800DEBFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DEBFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DEC00: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DEC04: nop

    // 0x800DEC08: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DEC0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DEC10: nop

    // 0x800DEC14: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800DEC18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DEC1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DEC20: nop

    // 0x800DEC24: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
L_800DEC28:
    // 0x800DEC28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEC2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEC30: jal         0x80028FA0
    // 0x800DEC34: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DEC34: nop

    after_3:
    // 0x800DEC38: beq         $v0, $zero, L_800DEC74
    if (ctx->r2 == 0) {
        // 0x800DEC3C: nop
    
            goto L_800DEC74;
    }
    // 0x800DEC3C: nop

    // 0x800DEC40: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800DEC44: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DEC48: lh          $t0, 0x106($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X106);
    // 0x800DEC4C: nop

    // 0x800DEC50: beq         $t0, $at, L_800DEC64
    if (ctx->r8 == ctx->r1) {
        // 0x800DEC54: nop
    
            goto L_800DEC64;
    }
    // 0x800DEC54: nop

    // 0x800DEC58: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DEC5C: bne         $t0, $at, L_800DEC74
    if (ctx->r8 != ctx->r1) {
        // 0x800DEC60: nop
    
            goto L_800DEC74;
    }
    // 0x800DEC60: nop

L_800DEC64:
    // 0x800DEC64: jal         0x800E3EE4
    // 0x800DEC68: nop

    func_800E3EE4(rdram, ctx);
        goto after_4;
    // 0x800DEC68: nop

    after_4:
    // 0x800DEC6C: b           L_800DECD0
    // 0x800DEC70: nop

        goto L_800DECD0;
    // 0x800DEC70: nop

L_800DEC74:
    // 0x800DEC74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEC78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEC7C: jal         0x8002A8B4
    // 0x800DEC80: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x800DEC80: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x800DEC84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DEC88: nop

    // 0x800DEC8C: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800DEC90: nop

    // 0x800DEC94: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x800DEC98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEC9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DECA0: jal         0x8001B4AC
    // 0x800DECA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800DECA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800DECA8: beq         $v0, $zero, L_800DECC8
    if (ctx->r2 == 0) {
        // 0x800DECAC: nop
    
            goto L_800DECC8;
    }
    // 0x800DECAC: nop

    // 0x800DECB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DECB4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800DECB8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800DECBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DECC0: nop

    // 0x800DECC4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800DECC8:
    // 0x800DECC8: b           L_800DECD0
    // 0x800DECCC: nop

        goto L_800DECD0;
    // 0x800DECCC: nop

L_800DECD0:
    // 0x800DECD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DECD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DECD8: jr          $ra
    // 0x800DECDC: nop

    return;
    // 0x800DECDC: nop

;}
RECOMP_FUNC void func_800D2D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2D34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2D40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2D44: jal         0x8002B0E4
    // 0x800D2D48: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D2D48: nop

    after_0:
    // 0x800D2D4C: b           L_800D2D54
    // 0x800D2D50: nop

        goto L_800D2D54;
    // 0x800D2D50: nop

L_800D2D54:
    // 0x800D2D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2D5C: jr          $ra
    // 0x800D2D60: nop

    return;
    // 0x800D2D60: nop

;}
RECOMP_FUNC void func_800F5D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F5D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F5D88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F5D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F5D90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F5D94: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F5D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F5D9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F5DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F5DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F5DA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F5DAC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F5DB0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F5DB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F5DB8: beq         $s0, $at, L_800F5DD4
    if (ctx->r16 == ctx->r1) {
        // 0x800F5DBC: nop
    
            goto L_800F5DD4;
    }
    // 0x800F5DBC: nop

    // 0x800F5DC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F5DC4: beq         $s0, $at, L_800F5DE4
    if (ctx->r16 == ctx->r1) {
        // 0x800F5DC8: nop
    
            goto L_800F5DE4;
    }
    // 0x800F5DC8: nop

    // 0x800F5DCC: b           L_800F5DF4
    // 0x800F5DD0: nop

        goto L_800F5DF4;
    // 0x800F5DD0: nop

L_800F5DD4:
    // 0x800F5DD4: jal         0x800F57C4
    // 0x800F5DD8: nop

    func_800F57C4(rdram, ctx);
        goto after_0;
    // 0x800F5DD8: nop

    after_0:
    // 0x800F5DDC: b           L_800F5DFC
    // 0x800F5DE0: nop

        goto L_800F5DFC;
    // 0x800F5DE0: nop

L_800F5DE4:
    // 0x800F5DE4: jal         0x800F5904
    // 0x800F5DE8: nop

    func_800F5904(rdram, ctx);
        goto after_1;
    // 0x800F5DE8: nop

    after_1:
    // 0x800F5DEC: b           L_800F5DFC
    // 0x800F5DF0: nop

        goto L_800F5DFC;
    // 0x800F5DF0: nop

L_800F5DF4:
    // 0x800F5DF4: b           L_800F5DFC
    // 0x800F5DF8: nop

        goto L_800F5DFC;
    // 0x800F5DF8: nop

L_800F5DFC:
    // 0x800F5DFC: b           L_800F5E04
    // 0x800F5E00: nop

        goto L_800F5E04;
    // 0x800F5E00: nop

L_800F5E04:
    // 0x800F5E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F5E0C: jr          $ra
    // 0x800F5E10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F5E10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007C1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C1B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C1B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007C1BC: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x8007C1C0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007C1C4: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8007C1C8: mflo        $t7
    ctx->r15 = lo;
    // 0x8007C1CC: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8007C1D0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007C1D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007C1D8: nop

    // 0x8007C1DC: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8007C1E0: bne         $at, $zero, L_8007C1F0
    if (ctx->r1 != 0) {
        // 0x8007C1E4: nop
    
            goto L_8007C1F0;
    }
    // 0x8007C1E4: nop

    // 0x8007C1E8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8007C1EC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8007C1F0:
    // 0x8007C1F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007C1F4: lh          $t1, -0x1F00($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F00);
    // 0x8007C1F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007C1FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007C200: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007C204: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8007C208: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007C20C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8007C210: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8007C214: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8007C218: nop

    // 0x8007C21C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8007C220: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007C224: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x8007C228: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007C22C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007C230: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007C234: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8007C238: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007C23C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8007C240: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007C244: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8007C248: nop

    // 0x8007C24C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8007C250: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007C254: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x8007C258: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007C25C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007C260: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007C264: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007C268: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007C26C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8007C270: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007C274: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8007C278: nop

    // 0x8007C27C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8007C280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007C284: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007C288: jal         0x8001A928
    // 0x8007C28C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007C28C: nop

    after_0:
    // 0x8007C290: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007C294: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007C298: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007C29C: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007C2A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007C2A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007C2A8: bne         $t7, $at, L_8007C2E0
    if (ctx->r15 != ctx->r1) {
        // 0x8007C2AC: nop
    
            goto L_8007C2E0;
    }
    // 0x8007C2AC: nop

    // 0x8007C2B0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C2B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C2B8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C2BC: jal         0x8007C06C
    // 0x8007C2C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007C06C(rdram, ctx);
        goto after_1;
    // 0x8007C2C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8007C2C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C2C8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C2CC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C2D0: jal         0x8007C06C
    // 0x8007C2D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8007C06C(rdram, ctx);
        goto after_2;
    // 0x8007C2D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8007C2D8: b           L_8007C384
    // 0x8007C2DC: nop

        goto L_8007C384;
    // 0x8007C2DC: nop

L_8007C2E0:
    // 0x8007C2E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007C2E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007C2E8: bne         $t8, $at, L_8007C334
    if (ctx->r24 != ctx->r1) {
        // 0x8007C2EC: nop
    
            goto L_8007C334;
    }
    // 0x8007C2EC: nop

    // 0x8007C2F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C2F4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C2F8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C2FC: jal         0x8007C06C
    // 0x8007C300: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8007C06C(rdram, ctx);
        goto after_3;
    // 0x8007C300: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8007C304: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C308: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C30C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C310: jal         0x8007C06C
    // 0x8007C314: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007C06C(rdram, ctx);
        goto after_4;
    // 0x8007C314: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8007C318: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C31C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C320: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C324: jal         0x8007C06C
    // 0x8007C328: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8007C06C(rdram, ctx);
        goto after_5;
    // 0x8007C328: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x8007C32C: b           L_8007C384
    // 0x8007C330: nop

        goto L_8007C384;
    // 0x8007C330: nop

L_8007C334:
    // 0x8007C334: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C338: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C33C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C340: jal         0x8007C06C
    // 0x8007C344: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8007C06C(rdram, ctx);
        goto after_6;
    // 0x8007C344: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x8007C348: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C34C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C350: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C354: jal         0x8007C06C
    // 0x8007C358: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8007C06C(rdram, ctx);
        goto after_7;
    // 0x8007C358: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x8007C35C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C360: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C364: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C368: jal         0x8007C06C
    // 0x8007C36C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8007C06C(rdram, ctx);
        goto after_8;
    // 0x8007C36C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8007C370: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C374: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C378: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007C37C: jal         0x8007C06C
    // 0x8007C380: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8007C06C(rdram, ctx);
        goto after_9;
    // 0x8007C380: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
L_8007C384:
    // 0x8007C384: b           L_8007C38C
    // 0x8007C388: nop

        goto L_8007C38C;
    // 0x8007C388: nop

L_8007C38C:
    // 0x8007C38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007C394: jr          $ra
    // 0x8007C398: nop

    return;
    // 0x8007C398: nop

;}
RECOMP_FUNC void func_80090060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090068: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009006C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090070: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090074: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090078: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009007C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090080: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090084: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090088: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009008C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090090: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090094: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090098: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009009C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800900A0: addiu       $a1, $a1, 0x139C
    ctx->r5 = ADD32(ctx->r5, 0X139C);
    // 0x800900A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800900A8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800900AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800900B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800900B4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800900B8: jal         0x80027464
    // 0x800900BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800900BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800900C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800900C4: b           L_800900CC
    // 0x800900C8: nop

        goto L_800900CC;
    // 0x800900C8: nop

L_800900CC:
    // 0x800900CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800900D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800900D4: jr          $ra
    // 0x800900D8: nop

    return;
    // 0x800900D8: nop

;}
RECOMP_FUNC void func_8008F63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F63C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008F640: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008F644: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008F648: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008F64C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008F650: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008F654: nop

    // 0x8008F658: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008F65C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F660: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F664: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F668: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008F66C: nop

    // 0x8008F670: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008F674: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008F678: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008F67C: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x8008F680: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8008F684: lh          $a2, 0x4($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X4);
    // 0x8008F688: lh          $a3, 0x6($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X6);
    // 0x8008F68C: jal         0x800178D4
    // 0x8008F690: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x8008F690: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x8008F694: b           L_8008F69C
    // 0x8008F698: nop

        goto L_8008F69C;
    // 0x8008F698: nop

L_8008F69C:
    // 0x8008F69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F6A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F6A4: jr          $ra
    // 0x8008F6A8: nop

    return;
    // 0x8008F6A8: nop

;}
RECOMP_FUNC void func_80091F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091F4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091F54: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091F58: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091F5C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091F60: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091F64: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091F68: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091F6C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091F70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091F74: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091F78: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091F7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091F80: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091F84: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091F88: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091F8C: addiu       $a1, $a1, 0x1648
    ctx->r5 = ADD32(ctx->r5, 0X1648);
    // 0x80091F90: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091F94: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091F9C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091FA0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091FA4: jal         0x80027464
    // 0x80091FA8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091FA8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091FAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091FB0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091FB4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091FB8: addiu       $a3, $a3, 0x2EF8
    ctx->r7 = ADD32(ctx->r7, 0X2EF8);
    // 0x80091FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091FC0: jal         0x8001ABF4
    // 0x80091FC4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091FC4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80091FC8: b           L_80091FD0
    // 0x80091FCC: nop

        goto L_80091FD0;
    // 0x80091FCC: nop

L_80091FD0:
    // 0x80091FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091FD8: jr          $ra
    // 0x80091FDC: nop

    return;
    // 0x80091FDC: nop

;}
RECOMP_FUNC void func_800DA6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA6BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DA6C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA6C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DA6C8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DA6CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DA6D0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DA6D4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DA6D8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DA6DC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DA6E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DA6E4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DA6E8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DA6EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DA6F0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DA6F4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DA6F8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DA6FC: addiu       $a1, $a1, 0x42DC
    ctx->r5 = ADD32(ctx->r5, 0X42DC);
    // 0x800DA700: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DA704: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DA708: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DA70C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DA710: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DA714: jal         0x80027464
    // 0x800DA718: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DA718: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DA71C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800DA720: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DA724: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DA728: beq         $t1, $at, L_800DA748
    if (ctx->r9 == ctx->r1) {
        // 0x800DA72C: nop
    
            goto L_800DA748;
    }
    // 0x800DA72C: nop

    // 0x800DA730: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800DA734: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DA738: addiu       $a3, $a3, -0x7688
    ctx->r7 = ADD32(ctx->r7, -0X7688);
    // 0x800DA73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DA740: jal         0x8001ABF4
    // 0x800DA744: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DA744: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_800DA748:
    // 0x800DA748: b           L_800DA750
    // 0x800DA74C: nop

        goto L_800DA750;
    // 0x800DA74C: nop

L_800DA750:
    // 0x800DA750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA754: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DA758: jr          $ra
    // 0x800DA75C: nop

    return;
    // 0x800DA75C: nop

;}
RECOMP_FUNC void func_8009B8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B8F4: jr          $ra
    // 0x8009B8F8: nop

    return;
    // 0x8009B8F8: nop

    // 0x8009B8FC: jr          $ra
    // 0x8009B900: nop

    return;
    // 0x8009B900: nop

;}
RECOMP_FUNC void Get_InactiveObject(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007944C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80079450: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80079454: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_80079458:
    // 0x80079458: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007945C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80079460: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80079464: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80079468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007946C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80079470: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80079474: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80079478: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007947C: nop

    // 0x80079480: bne         $t9, $zero, L_80079494
    if (ctx->r25 != 0) {
        // 0x80079484: nop
    
            goto L_80079494;
    }
    // 0x80079484: nop

    // 0x80079488: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8007948C: b           L_800794BC
    // 0x80079490: nop

        goto L_800794BC;
    // 0x80079490: nop

L_80079494:
    // 0x80079494: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80079498: nop

    // 0x8007949C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800794A0: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x800794A4: bne         $at, $zero, L_80079458
    if (ctx->r1 != 0) {
        // 0x800794A8: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_80079458;
    }
    // 0x800794A8: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x800794AC: b           L_800794BC
    // 0x800794B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800794BC;
    // 0x800794B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800794B4: b           L_800794BC
    // 0x800794B8: nop

        goto L_800794BC;
    // 0x800794B8: nop

L_800794BC:
    // 0x800794BC: jr          $ra
    // 0x800794C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800794C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F4078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4078: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F407C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800F4080: nop

    // 0x800F4084: bne         $t6, $zero, L_800F40BC
    if (ctx->r14 != 0) {
        // 0x800F4088: nop
    
            goto L_800F40BC;
    }
    // 0x800F4088: nop

    // 0x800F408C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F4090: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F4094: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4098: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F409C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F40A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F40A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F40A8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F40AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F40B0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800F40B4: b           L_800F412C
    // 0x800F40B8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800F412C;
    // 0x800F40B8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800F40BC:
    // 0x800F40BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F40C0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F40C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F40C8: bne         $t0, $at, L_800F4100
    if (ctx->r8 != ctx->r1) {
        // 0x800F40CC: nop
    
            goto L_800F4100;
    }
    // 0x800F40CC: nop

    // 0x800F40D0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800F40D4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800F40D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F40DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F40E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F40E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F40E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F40EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F40F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F40F4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800F40F8: b           L_800F412C
    // 0x800F40FC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800F412C;
    // 0x800F40FC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800F4100:
    // 0x800F4100: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800F4104: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800F4108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F410C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F4110: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F4114: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F4118: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F411C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F4120: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F4124: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800F4128: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_800F412C:
    // 0x800F412C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F4130: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F4134: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4138: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800F413C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4140: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4144: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4148: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F414C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F4150: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800F4154: jr          $ra
    // 0x800F4158: nop

    return;
    // 0x800F4158: nop

    // 0x800F415C: jr          $ra
    // 0x800F4160: nop

    return;
    // 0x800F4160: nop

;}
RECOMP_FUNC void func_800CCA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCA28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CCA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CCA30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CCA34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CCA38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CCA3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCA40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCA44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCA48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCA4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCA50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CCA54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CCA58: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800CCA5C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCA60: nop

    // 0x800CCA64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CCA68: nop

    // 0x800CCA6C: bne         $t1, $zero, L_800CCAC8
    if (ctx->r9 != 0) {
        // 0x800CCA70: nop
    
            goto L_800CCAC8;
    }
    // 0x800CCA70: nop

    // 0x800CCA74: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCA78: nop

    // 0x800CCA7C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CCA80: nop

    // 0x800CCA84: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CCA88: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CCA8C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCA90: nop

    // 0x800CCA94: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800CCA98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CCA9C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CCAA0: addiu       $a3, $a3, -0x7D7C
    ctx->r7 = ADD32(ctx->r7, -0X7D7C);
    // 0x800CCAA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CCAA8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800CCAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CCAB0: jal         0x8001ABF4
    // 0x800CCAB4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800CCAB4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x800CCAB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CCABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CCAC0: jal         0x800261E8
    // 0x800CCAC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800261E8(rdram, ctx);
        goto after_1;
    // 0x800CCAC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800CCAC8:
    // 0x800CCAC8: b           L_800CCAD0
    // 0x800CCACC: nop

        goto L_800CCAD0;
    // 0x800CCACC: nop

L_800CCAD0:
    // 0x800CCAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CCAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CCAD8: jr          $ra
    // 0x800CCADC: nop

    return;
    // 0x800CCADC: nop

;}
RECOMP_FUNC void func_800F8028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8028: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F802C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F8030: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F8034: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F8038: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F803C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F8040: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F8044: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F8048: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F804C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F8050: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F8054: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F8058: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F805C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F8060: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F8064: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F8068: addiu       $a1, $a1, 0x3790
    ctx->r5 = ADD32(ctx->r5, 0X3790);
    // 0x800F806C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F8070: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F8074: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800F8078: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F807C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F8080: jal         0x80027464
    // 0x800F8084: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F8084: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F8088: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F808C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F8090: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8094: beq         $t1, $at, L_800F82D4
    if (ctx->r9 == ctx->r1) {
        // 0x800F8098: nop
    
            goto L_800F82D4;
    }
    // 0x800F8098: nop

    // 0x800F809C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F80A0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800F80A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F80A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F80AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F80B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F80B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F80B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F80BC: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800F80C0: nop

    // 0x800F80C4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800F80C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F80CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F80D0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F80D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F80D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F80DC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F80E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F80E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F80E8: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x800F80EC: nop

    // 0x800F80F0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800F80F4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F80F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F80FC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800F8100: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F8104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F8108: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800F810C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F8110: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F8114: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800F8118: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F811C: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800F8120: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F8124: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F8128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F812C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800F8130: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F8134: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F8138: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800F813C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F8140: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x800F8144: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x800F8148: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F814C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F8150: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F8154: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F8158: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F815C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8160: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F8164: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8168: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F816C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800F8170: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8174: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F8178: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800F817C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F8180: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F8184: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F8188: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800F818C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800F8190: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F8194: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x800F8198: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
    // 0x800F819C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F81A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F81A4: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x800F81A8: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x800F81AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F81B0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F81B4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800F81B8: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x800F81BC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F81C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F81C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F81C8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800F81CC: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x800F81D0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F81D4: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x800F81D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F81DC: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x800F81E0: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x800F81E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F81E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800F81EC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x800F81F0: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x800F81F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F81F8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800F81FC: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x800F8200: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F8204: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800F8208: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x800F820C: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x800F8210: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F8214: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x800F8218: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F821C: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800F8220: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F8224: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x800F8228: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F822C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F8230: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x800F8234: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x800F8238: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F823C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800F8240: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800F8244: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8248: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F824C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800F8250: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8254: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8258: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800F825C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x800F8260: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x800F8264: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F8268: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x800F826C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F8270: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800F8274: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F8278: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x800F827C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800F8280: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F8284: addu        $t0, $t3, $t6
    ctx->r8 = ADD32(ctx->r11, ctx->r14);
    // 0x800F8288: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x800F828C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F8290: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F8294: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800F8298: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800F829C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F82A0: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x800F82A4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800F82A8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800F82AC: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800F82B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F82B4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F82B8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800F82BC: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x800F82C0: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800F82C4: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800F82C8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F82CC: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x800F82D0: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
L_800F82D4:
    // 0x800F82D4: b           L_800F82DC
    // 0x800F82D8: nop

        goto L_800F82DC;
    // 0x800F82D8: nop

L_800F82DC:
    // 0x800F82DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F82E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F82E4: jr          $ra
    // 0x800F82E8: nop

    return;
    // 0x800F82E8: nop

;}
RECOMP_FUNC void func_800E06E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E06E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E06E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E06E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E06EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E06F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E06F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E06F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E06FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0700: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E0704: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0708: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E070C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E0710: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E0714: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E0718: nop

    // 0x800E071C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800E0720: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E0724: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E0728: nop

    // 0x800E072C: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800E0730: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E0734: nop

    // 0x800E0738: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E073C: nop

    // 0x800E0740: swc1        $f8, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f8.u32l;
    // 0x800E0744: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E0748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E074C: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E0750: nop

    // 0x800E0754: bne         $t4, $at, L_800E0778
    if (ctx->r12 != ctx->r1) {
        // 0x800E0758: nop
    
            goto L_800E0778;
    }
    // 0x800E0758: nop

    // 0x800E075C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E0760: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800E0764: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E0768: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E076C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E0770: b           L_800E07CC
    // 0x800E0774: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
        goto L_800E07CC;
    // 0x800E0774: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_800E0778:
    // 0x800E0778: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E077C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800E0780: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800E0784: nop

    // 0x800E0788: bne         $t0, $at, L_800E07A8
    if (ctx->r8 != ctx->r1) {
        // 0x800E078C: nop
    
            goto L_800E07A8;
    }
    // 0x800E078C: nop

    // 0x800E0790: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E0794: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800E0798: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800E079C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E07A0: b           L_800E07CC
    // 0x800E07A4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_800E07CC;
    // 0x800E07A4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E07A8:
    // 0x800E07A8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E07AC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800E07B0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800E07B4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E07B8: nop

    // 0x800E07BC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800E07C0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E07C4: nop

    // 0x800E07C8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
L_800E07CC:
    // 0x800E07CC: b           L_800E07D4
    // 0x800E07D0: nop

        goto L_800E07D4;
    // 0x800E07D0: nop

L_800E07D4:
    // 0x800E07D4: jr          $ra
    // 0x800E07D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E07D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B30B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B30B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B30B8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800B30BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B30C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B30C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B30C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B30CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B30D0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B30D4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B30D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B30DC: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B30E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B30E4: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B30E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B30EC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B30F0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B30F4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B30F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B30FC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B3100: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B3104: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B3108: jr          $ra
    // 0x800B310C: nop

    return;
    // 0x800B310C: nop

    // 0x800B3110: jr          $ra
    // 0x800B3114: nop

    return;
    // 0x800B3114: nop

;}
RECOMP_FUNC void func_800DE1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE1E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800DE1EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DE1F0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DE1F4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DE1F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE1FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE200: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE204: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE20C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE214: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE218: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE21C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE220: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800DE224: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE228: nop

    // 0x800DE22C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DE230: nop

    // 0x800DE234: bne         $t1, $zero, L_800DE328
    if (ctx->r9 != 0) {
        // 0x800DE238: nop
    
            goto L_800DE328;
    }
    // 0x800DE238: nop

    // 0x800DE23C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE240: nop

    // 0x800DE244: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DE248: nop

    // 0x800DE24C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DE250: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DE254: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DE258: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE25C: nop

    // 0x800DE260: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800DE264: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE268: nop

    // 0x800DE26C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800DE270: nop

    // 0x800DE274: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800DE278: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE27C: nop

    // 0x800DE280: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800DE284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE288: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800DE28C: addiu       $t8, $t8, -0x700C
    ctx->r24 = ADD32(ctx->r24, -0X700C);
    // 0x800DE290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE294: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800DE298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE29C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800DE2A0: jal         0x8001C0EC
    // 0x800DE2A4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DE2A4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DE2A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE2AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE2B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DE2B4: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DE2B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE2BC: jal         0x8001ABF4
    // 0x800DE2C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DE2C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DE2C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE2C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DE2CC: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DE2D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE2D4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800DE2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DE2DC: jal         0x8001ABF4
    // 0x800DE2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DE2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DE2E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE2E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE2EC: jal         0x8002A46C
    // 0x800DE2F0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DE2F0: nop

    after_3:
    // 0x800DE2F4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE2F8: nop

    // 0x800DE2FC: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800DE300: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE304: nop

    // 0x800DE308: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DE30C: nop

    // 0x800DE310: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x800DE314: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DE318: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DE31C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE320: nop

    // 0x800DE324: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
L_800DE328:
    // 0x800DE328: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE32C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE330: jal         0x8001B62C
    // 0x800DE334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800DE334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800DE338: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800DE33C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DE340: nop

    // 0x800DE344: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800DE348: nop

    // 0x800DE34C: bc1f        L_800DE478
    if (!c1cs) {
        // 0x800DE350: nop
    
            goto L_800DE478;
    }
    // 0x800DE350: nop

    // 0x800DE354: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE358: nop

    // 0x800DE35C: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800DE360: nop

    // 0x800DE364: bne         $t4, $zero, L_800DE478
    if (ctx->r12 != 0) {
        // 0x800DE368: nop
    
            goto L_800DE478;
    }
    // 0x800DE368: nop

    // 0x800DE36C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE370: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800DE374: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800DE378: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800DE37C: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800DE380: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800DE384: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800DE388: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800DE38C: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800DE390: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800DE394: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DE398: addiu       $a1, $a1, 0x4360
    ctx->r5 = ADD32(ctx->r5, 0X4360);
    // 0x800DE39C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DE3A0: jal         0x80027464
    // 0x800DE3A4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x800DE3A4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800DE3A8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800DE3AC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800DE3B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DE3B4: beq         $t5, $at, L_800DE478
    if (ctx->r13 == ctx->r1) {
        // 0x800DE3B8: nop
    
            goto L_800DE478;
    }
    // 0x800DE3B8: nop

    // 0x800DE3BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800DE3C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DE3C4: addiu       $a3, $a3, -0x6CA4
    ctx->r7 = ADD32(ctx->r7, -0X6CA4);
    // 0x800DE3C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE3CC: jal         0x8001ABF4
    // 0x800DE3D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800DE3D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x800DE3D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE3D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE3DC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800DE3E0: jal         0x80026F10
    // 0x800DE3E4: nop

    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x800DE3E4: nop

    after_7:
    // 0x800DE3E8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800DE3EC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800DE3F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800DE3F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DE3F8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE3FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800DE400: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DE404: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800DE408: lwc1        $f20, 0x3C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800DE40C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800DE410: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DE414: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800DE418: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800DE41C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800DE420: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800DE424: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800DE428: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DE42C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800DE430: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800DE434: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800DE438: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800DE43C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DE440: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800DE444: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800DE448: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800DE44C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800DE450: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800DE454: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800DE458: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800DE45C: sh          $t1, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r9;
    // 0x800DE460: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE464: nop

    // 0x800DE468: lh          $t5, 0xAA($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAA);
    // 0x800DE46C: nop

    // 0x800DE470: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800DE474: sh          $t6, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r14;
L_800DE478:
    // 0x800DE478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE47C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE480: jal         0x80028FA0
    // 0x800DE484: nop

    func_80028FA0(rdram, ctx);
        goto after_8;
    // 0x800DE484: nop

    after_8:
    // 0x800DE488: beq         $v0, $zero, L_800DE4DC
    if (ctx->r2 == 0) {
        // 0x800DE48C: nop
    
            goto L_800DE4DC;
    }
    // 0x800DE48C: nop

    // 0x800DE490: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE494: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DE498: lh          $t8, 0x106($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X106);
    // 0x800DE49C: nop

    // 0x800DE4A0: beq         $t8, $at, L_800DE4B4
    if (ctx->r24 == ctx->r1) {
        // 0x800DE4A4: nop
    
            goto L_800DE4B4;
    }
    // 0x800DE4A4: nop

    // 0x800DE4A8: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DE4AC: bne         $t8, $at, L_800DE4CC
    if (ctx->r24 != ctx->r1) {
        // 0x800DE4B0: nop
    
            goto L_800DE4CC;
    }
    // 0x800DE4B0: nop

L_800DE4B4:
    // 0x800DE4B4: jal         0x800E3EE4
    // 0x800DE4B8: nop

    func_800E3EE4(rdram, ctx);
        goto after_9;
    // 0x800DE4B8: nop

    after_9:
    // 0x800DE4BC: b           L_800DE520
    // 0x800DE4C0: nop

        goto L_800DE520;
    // 0x800DE4C0: nop

    // 0x800DE4C4: b           L_800DE4DC
    // 0x800DE4C8: nop

        goto L_800DE4DC;
    // 0x800DE4C8: nop

L_800DE4CC:
    // 0x800DE4CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE4D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE4D4: jal         0x80029B60
    // 0x800DE4D8: nop

    func_80029B60(rdram, ctx);
        goto after_10;
    // 0x800DE4D8: nop

    after_10:
L_800DE4DC:
    // 0x800DE4DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE4E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE4E4: jal         0x8001B4AC
    // 0x800DE4E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x800DE4E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800DE4EC: beq         $v0, $zero, L_800DE518
    if (ctx->r2 == 0) {
        // 0x800DE4F0: nop
    
            goto L_800DE518;
    }
    // 0x800DE4F0: nop

    // 0x800DE4F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE4F8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800DE4FC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800DE500: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE504: nop

    // 0x800DE508: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
    // 0x800DE50C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800DE510: nop

    // 0x800DE514: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800DE518:
    // 0x800DE518: b           L_800DE520
    // 0x800DE51C: nop

        goto L_800DE520;
    // 0x800DE51C: nop

L_800DE520:
    // 0x800DE520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DE524: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DE528: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DE52C: jr          $ra
    // 0x800DE530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800DE530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8009AE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AE7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009AE80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009AE84: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009AE88: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009AE8C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009AE90: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009AE94: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009AE98: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009AE9C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009AEA0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009AEA4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009AEA8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009AEAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009AEB0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009AEB4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009AEB8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009AEBC: addiu       $a1, $a1, 0x34E4
    ctx->r5 = ADD32(ctx->r5, 0X34E4);
    // 0x8009AEC0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009AEC4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009AEC8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8009AECC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009AED0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009AED4: jal         0x80027464
    // 0x8009AED8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009AED8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009AEDC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009AEE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009AEE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009AEE8: beq         $t1, $at, L_8009AF00
    if (ctx->r9 == ctx->r1) {
        // 0x8009AEEC: nop
    
            goto L_8009AF00;
    }
    // 0x8009AEEC: nop

    // 0x8009AEF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009AEF4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009AEF8: jal         0x80027B34
    // 0x8009AEFC: addiu       $a1, $a1, 0x485C
    ctx->r5 = ADD32(ctx->r5, 0X485C);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x8009AEFC: addiu       $a1, $a1, 0x485C
    ctx->r5 = ADD32(ctx->r5, 0X485C);
    after_1:
L_8009AF00:
    // 0x8009AF00: b           L_8009AF08
    // 0x8009AF04: nop

        goto L_8009AF08;
    // 0x8009AF04: nop

L_8009AF08:
    // 0x8009AF08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009AF10: jr          $ra
    // 0x8009AF14: nop

    return;
    // 0x8009AF14: nop

;}
