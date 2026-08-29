#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033226C_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033226C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332274: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332278: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033227C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332280: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332284: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332288: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033228C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332290: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332294: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332298: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033229C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803322A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803322A4: nop

    // 0x803322A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803322AC: nop

    // 0x803322B0: bne         $t1, $zero, L_8033234C
    if (ctx->r9 != 0) {
        // 0x803322B4: nop
    
            goto L_8033234C;
    }
    // 0x803322B4: nop

    // 0x803322B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803322BC: nop

    // 0x803322C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803322C4: nop

    // 0x803322C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803322CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803322D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803322D4: nop

    // 0x803322D8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803322DC: nop

    // 0x803322E0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803322E4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803322E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803322EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803322F0: nop

    // 0x803322F4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803322F8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_803322FC:
    // 0x803322FC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80332300: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332304: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80332308: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8033230C: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80332310: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80332314: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332318: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033231C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332320: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332324: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033232C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332330: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80332334: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332338: nop

    // 0x8033233C: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80332340: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80332344: bne         $at, $zero, L_803322FC
    if (ctx->r1 != 0) {
        // 0x80332348: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_803322FC;
    }
    // 0x80332348: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_8033234C:
    // 0x8033234C: jal         0x80333308
    // 0x80332350: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80332350: nop

    after_0:
    // 0x80332354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033235C: jal         0x80029D8C
    // 0x80332360: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80332360: nop

    after_1:
    // 0x80332364: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80332368:
    // 0x80332368: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033236C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332370: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80332374: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80332378: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x8033237C: jal         0x80029D8C
    // 0x80332380: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80332380: nop

    after_2:
    // 0x80332384: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80332388: nop

    // 0x8033238C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332390: slti        $at, $t1, 0x9
    ctx->r1 = SIGNED(ctx->r9) < 0X9 ? 1 : 0;
    // 0x80332394: bne         $at, $zero, L_80332368
    if (ctx->r1 != 0) {
        // 0x80332398: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80332368;
    }
    // 0x80332398: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8033239C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323A4: jal         0x8002A2EC
    // 0x803323A8: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x803323A8: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_3:
    // 0x803323AC: beq         $v0, $zero, L_803325E0
    if (ctx->r2 == 0) {
        // 0x803323B0: nop
    
            goto L_803325E0;
    }
    // 0x803323B0: nop

    // 0x803323B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803323B8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x803323BC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803323C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803323C4: nop

    // 0x803323C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803323CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803323D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803323D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803323D8: lwc1        $f8, 0xD4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x803323DC: nop

    // 0x803323E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803323E4: swc1        $f16, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f16.u32l;
    // 0x803323E8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803323EC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803323F0: lh          $t5, 0xE8($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XE8);
    // 0x803323F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803323F8: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x803323FC: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80332400: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80332404: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332408: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8033240C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80332410: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332414: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332418: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033241C: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x80332420: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332424: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80332428: lh          $t0, 0xEA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XEA);
    // 0x8033242C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332430: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332434: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332438: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033243C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332440: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332444: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332448: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033244C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332450: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332454: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x80332458: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033245C: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80332460: lh          $t4, 0xEC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEC);
    // 0x80332464: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332468: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033246C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332470: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80332474: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332478: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033247C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80332480: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332484: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332488: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033248C: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x80332490: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332494: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332498: lh          $t7, 0xEE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEE);
    // 0x8033249C: lwc1        $f10, 0x49F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49F0);
    // 0x803324A0: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x803324A4: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x803324A8: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803324AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803324B0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x803324B4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803324B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803324BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324C0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803324C4: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x803324C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803324CC: lui         $at, 0x443E
    ctx->r1 = S32(0X443E << 16);
    // 0x803324D0: lh          $t8, 0xF0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XF0);
    // 0x803324D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803324D8: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x803324DC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803324E0: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803324E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803324E8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803324EC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803324F0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803324F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324F8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803324FC: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x80332500: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332504: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332508: lh          $t3, 0xF2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF2);
    // 0x8033250C: lwc1        $f10, 0x49F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49F4);
    // 0x80332510: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332514: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332518: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033251C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332520: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332524: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332528: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033252C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332530: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332534: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x80332538: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033253C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332540: lh          $t6, 0xF4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XF4);
    // 0x80332544: lwc1        $f4, 0x49F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X49F8);
    // 0x80332548: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033254C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332550: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80332554: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033255C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80332560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332564: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332568: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033256C: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x80332570: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332574: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332578: lh          $t9, 0xF6($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XF6);
    // 0x8033257C: lwc1        $f10, 0x49FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49FC);
    // 0x80332580: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80332584: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332588: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033258C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332590: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332594: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332598: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033259C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325A0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803325A4: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x803325A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803325AC: lui         $at, 0x44AA
    ctx->r1 = S32(0X44AA << 16);
    // 0x803325B0: lh          $t1, 0xF8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XF8);
    // 0x803325B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803325B8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803325BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803325C0: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803325C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803325C8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803325CC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803325D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803325D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325D8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803325DC: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_803325E0:
    // 0x803325E0: b           L_803325E8
    // 0x803325E4: nop

        goto L_803325E8;
    // 0x803325E4: nop

L_803325E8:
    // 0x803325E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803325EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803325F0: jr          $ra
    // 0x803325F4: nop

    return;
    // 0x803325F4: nop

;}
RECOMP_FUNC void func_80333D54_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333D5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80333D60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80333D64: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80333D68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333D6C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333D70: jal         0x80333E3C
    // 0x80333D74: nop

    func_80333E3C_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80333D74: nop

    after_0:
    // 0x80333D78: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80333D7C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333D80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D98: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333D9C: lwc1        $f14, 0x4190($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80333DA0: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333DA4: jal         0x80015538
    // 0x80333DA8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80333DA8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80333DAC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80333DB0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80333DB4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333DB8: nop

    // 0x80333DBC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80333DC0: nop

    // 0x80333DC4: bc1t        L_80333DEC
    if (c1cs) {
        // 0x80333DC8: nop
    
            goto L_80333DEC;
    }
    // 0x80333DC8: nop

    // 0x80333DCC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333DD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333DD4: nop

    // 0x80333DD8: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80333DDC: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80333DE0: nop

    // 0x80333DE4: bc1f        L_80333DF4
    if (!c1cs) {
        // 0x80333DE8: nop
    
            goto L_80333DF4;
    }
    // 0x80333DE8: nop

L_80333DEC:
    // 0x80333DEC: b           L_80333E2C
    // 0x80333DF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80333E2C;
    // 0x80333DF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80333DF4:
    // 0x80333DF4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333DF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333DFC: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80333E00: nop

    // 0x80333E04: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80333E08: nop

    // 0x80333E0C: bc1f        L_80333E1C
    if (!c1cs) {
        // 0x80333E10: nop
    
            goto L_80333E1C;
    }
    // 0x80333E10: nop

    // 0x80333E14: b           L_80333E2C
    // 0x80333E18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80333E2C;
    // 0x80333E18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80333E1C:
    // 0x80333E1C: b           L_80333E2C
    // 0x80333E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80333E2C;
    // 0x80333E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80333E24: b           L_80333E2C
    // 0x80333E28: nop

        goto L_80333E2C;
    // 0x80333E28: nop

L_80333E2C:
    // 0x80333E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333E30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333E34: jr          $ra
    // 0x80333E38: nop

    return;
    // 0x80333E38: nop

;}
RECOMP_FUNC void func_80332E2C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332E34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332E60: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E64: nop

    // 0x80332E68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E6C: nop

    // 0x80332E70: bne         $t1, $zero, L_80332EE8
    if (ctx->r9 != 0) {
        // 0x80332E74: nop
    
            goto L_80332EE8;
    }
    // 0x80332E74: nop

    // 0x80332E78: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E7C: nop

    // 0x80332E80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332E84: nop

    // 0x80332E88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332E8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332E90: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E94: nop

    // 0x80332E98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332E9C: nop

    // 0x80332EA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332EA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80332EA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332EAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EB0: nop

    // 0x80332EB4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332EB8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EBC: nop

    // 0x80332EC0: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
    // 0x80332EC4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EC8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332ECC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332ED0: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332ED4: jal         0x80015538
    // 0x80332ED8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80332ED8: nop

    after_0:
    // 0x80332EDC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332EE0: nop

    // 0x80332EE4: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_80332EE8:
    // 0x80332EE8: b           L_80332EF0
    // 0x80332EEC: nop

        goto L_80332EF0;
    // 0x80332EEC: nop

L_80332EF0:
    // 0x80332EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332EF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332EF8: jr          $ra
    // 0x80332EFC: nop

    return;
    // 0x80332EFC: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8033000C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80330010: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80330014: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x80330018: jal         0x80069E60
    // 0x8033001C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x8033001C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80330020: b           L_80330028
    // 0x80330024: nop

        goto L_80330028;
    // 0x80330024: nop

L_80330028:
    // 0x80330028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330030: jr          $ra
    // 0x80330034: nop

    return;
    // 0x80330034: nop

;}
RECOMP_FUNC void func_80332168_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332168: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033216C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332170: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332174: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332178: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033217C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332180: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332188: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033218C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332190: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332194: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332198: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033219C: nop

    // 0x803321A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803321A4: nop

    // 0x803321A8: bne         $t1, $zero, L_8033220C
    if (ctx->r9 != 0) {
        // 0x803321AC: nop
    
            goto L_8033220C;
    }
    // 0x803321AC: nop

    // 0x803321B0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803321B4: nop

    // 0x803321B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803321BC: nop

    // 0x803321C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803321C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803321C8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x803321CC: nop

    // 0x803321D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803321D4: nop

    // 0x803321D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803321DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803321E0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x803321E4: nop

    // 0x803321E8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803321EC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x803321F0: nop

    // 0x803321F4: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
    // 0x803321F8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x803321FC: nop

    // 0x80332200: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332204: nop

    // 0x80332208: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
L_8033220C:
    // 0x8033220C: b           L_80332214
    // 0x80332210: nop

        goto L_80332214;
    // 0x80332210: nop

L_80332214:
    // 0x80332214: jr          $ra
    // 0x80332218: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80332218: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80338D54_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338D54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338D58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338D5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338D60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338D64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338D68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338D6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338D70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338D78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338D7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338D80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338D84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338D88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338D8C: nop

    // 0x80338D90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338D94: nop

    // 0x80338D98: bne         $t1, $zero, L_80338DC8
    if (ctx->r9 != 0) {
        // 0x80338D9C: nop
    
            goto L_80338DC8;
    }
    // 0x80338D9C: nop

    // 0x80338DA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338DA4: nop

    // 0x80338DA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338DAC: nop

    // 0x80338DB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338DB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338DB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80338DBC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338DC0: nop

    // 0x80338DC4: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
L_80338DC8:
    // 0x80338DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338DD4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80338DD8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80338DDC: jal         0x800175F0
    // 0x80338DE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80338DE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80338DE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338DE8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80338DEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338DF0: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80338DF4: nop

    // 0x80338DF8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80338DFC: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x80338E00: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338E04: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x80338E08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338E0C: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80338E10: jal         0x80015538
    // 0x80338E14: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338E14: nop

    after_1:
    // 0x80338E18: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338E1C: nop

    // 0x80338E20: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80338E24: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338E28: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80338E2C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80338E30: nop

    // 0x80338E34: bne         $t0, $at, L_80338E54
    if (ctx->r8 != ctx->r1) {
        // 0x80338E38: nop
    
            goto L_80338E54;
    }
    // 0x80338E38: nop

    // 0x80338E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338E44: jal         0x8002B114
    // 0x80338E48: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80338E48: nop

    after_2:
    // 0x80338E4C: b           L_80338E6C
    // 0x80338E50: nop

        goto L_80338E6C;
    // 0x80338E50: nop

L_80338E54:
    // 0x80338E54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338E58: nop

    // 0x80338E5C: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80338E60: nop

    // 0x80338E64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338E68: sb          $t4, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r12;
L_80338E6C:
    // 0x80338E6C: b           L_80338E74
    // 0x80338E70: nop

        goto L_80338E74;
    // 0x80338E70: nop

L_80338E74:
    // 0x80338E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338E7C: jr          $ra
    // 0x80338E80: nop

    return;
    // 0x80338E80: nop

;}
RECOMP_FUNC void func_80338044_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338044: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80338048: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033804C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338050: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338054: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033805C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338064: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338068: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033806C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338070: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80338074: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80338078: nop

    // 0x8033807C: sw          $zero, 0xD0($t0)
    MEM_W(0XD0, ctx->r8) = 0;
    // 0x80338080: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80338084: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
L_80338088:
    // 0x80338088: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8033808C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80338090: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80338094: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338098: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033809C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803380A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803380A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803380A8: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x803380AC: nop

    // 0x803380B0: beq         $t4, $zero, L_803381D4
    if (ctx->r12 == 0) {
        // 0x803380B4: nop
    
            goto L_803381D4;
    }
    // 0x803380B4: nop

    // 0x803380B8: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x803380BC: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x803380C0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803380C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803380C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803380CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803380D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803380D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803380D8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803380DC: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x803380E0: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803380E4: nop

    // 0x803380E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803380EC: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x803380F0: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x803380F4: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x803380F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803380FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338100: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80338104: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338108: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033810C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338110: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80338114: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80338118: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033811C: nop

    // 0x80338120: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80338124: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80338128: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8033812C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80338130: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80338134: nop

    // 0x80338138: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8033813C: nop

    // 0x80338140: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80338144: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80338148: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8033814C: nop

    // 0x80338150: bc1f        L_803381D4
    if (!c1cs) {
        // 0x80338154: nop
    
            goto L_803381D4;
    }
    // 0x80338154: nop

    // 0x80338158: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8033815C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80338160: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80338164: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338168: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033816C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338170: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338174: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338178: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x8033817C: nop

    // 0x80338180: addiu       $t4, $t3, -0x26
    ctx->r12 = ADD32(ctx->r11, -0X26);
    // 0x80338184: sltiu       $at, $t4, 0x5
    ctx->r1 = ctx->r12 < 0X5 ? 1 : 0;
    // 0x80338188: beq         $at, $zero, L_803381CC
    if (ctx->r1 == 0) {
        // 0x8033818C: nop
    
            goto L_803381CC;
    }
    // 0x8033818C: nop

    // 0x80338190: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338194: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338198: addu        $at, $at, $t4
    gpr jr_addend_803381A4 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033819C: lw          $t4, -0x4AF4($at)
    ctx->r12 = ADD32(ctx->r1, -0X4AF4);
    // 0x803381A0: nop

    // 0x803381A4: jr          $t4
    // 0x803381A8: nop

    switch (jr_addend_803381A4 >> 2) {
        case 0: goto L_803381AC; break;
        case 1: goto L_803381AC; break;
        case 2: goto L_803381AC; break;
        case 3: goto L_803381AC; break;
        case 4: goto L_803381AC; break;
        default: switch_error(__func__, 0x803381A4, 0x8033B50C);
    }
    // 0x803381A8: nop

L_803381AC:
    // 0x803381AC: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x803381B0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x803381B4: nop

    // 0x803381B8: sw          $t5, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r13;
    // 0x803381BC: b           L_803381FC
    // 0x803381C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803381FC;
    // 0x803381C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803381C4: b           L_803381D4
    // 0x803381C8: nop

        goto L_803381D4;
    // 0x803381C8: nop

L_803381CC:
    // 0x803381CC: b           L_803381D4
    // 0x803381D0: nop

        goto L_803381D4;
    // 0x803381D0: nop

L_803381D4:
    // 0x803381D4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x803381D8: nop

    // 0x803381DC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803381E0: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x803381E4: bne         $at, $zero, L_80338088
    if (ctx->r1 != 0) {
        // 0x803381E8: sw          $t8, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r24;
            goto L_80338088;
    }
    // 0x803381E8: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x803381EC: b           L_803381FC
    // 0x803381F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803381FC;
    // 0x803381F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803381F4: b           L_803381FC
    // 0x803381F8: nop

        goto L_803381FC;
    // 0x803381F8: nop

L_803381FC:
    // 0x803381FC: jr          $ra
    // 0x80338200: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80338200: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80333BCC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333BCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333BD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333BD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333BDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333BE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333BE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333BEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333BF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333BF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333BFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333C00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C04: nop

    // 0x80333C08: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80333C0C: nop

    // 0x80333C10: bne         $t1, $zero, L_80333C60
    if (ctx->r9 != 0) {
        // 0x80333C14: nop
    
            goto L_80333C60;
    }
    // 0x80333C14: nop

    // 0x80333C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C20: jal         0x8001B44C
    // 0x80333C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80333C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333C28: beq         $v0, $zero, L_80333C58
    if (ctx->r2 == 0) {
        // 0x80333C2C: nop
    
            goto L_80333C58;
    }
    // 0x80333C2C: nop

    // 0x80333C30: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333C34: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80333C38: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
    // 0x80333C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C44: jal         0x8001BBDC
    // 0x80333C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80333C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80333C4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333C50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80333C54: sh          $t4, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r12;
L_80333C58:
    // 0x80333C58: b           L_80333CF4
    // 0x80333C5C: nop

        goto L_80333CF4;
    // 0x80333C5C: nop

L_80333C60:
    // 0x80333C60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333C64: nop

    // 0x80333C68: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x80333C6C: nop

    // 0x80333C70: bne         $t7, $zero, L_80333CDC
    if (ctx->r15 != 0) {
        // 0x80333C74: nop
    
            goto L_80333CDC;
    }
    // 0x80333C74: nop

    // 0x80333C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C7C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80333C80: addiu       $t8, $t8, -0x52A0
    ctx->r24 = ADD32(ctx->r24, -0X52A0);
    // 0x80333C84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80333C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C90: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80333C94: jal         0x8001C0EC
    // 0x80333C98: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80333C98: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_2:
    // 0x80333C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CA4: jal         0x8001BBDC
    // 0x80333CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333CAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333CB0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80333CB4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333CB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333CBC: nop

    // 0x80333CC0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80333CC4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333CC8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80333CCC: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80333CD0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333CD4: b           L_80333CF4
    // 0x80333CD8: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
        goto L_80333CF4;
    // 0x80333CD8: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
L_80333CDC:
    // 0x80333CDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333CE0: nop

    // 0x80333CE4: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x80333CE8: nop

    // 0x80333CEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80333CF0: sh          $t7, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r15;
L_80333CF4:
    // 0x80333CF4: b           L_80333CFC
    // 0x80333CF8: nop

        goto L_80333CFC;
    // 0x80333CF8: nop

L_80333CFC:
    // 0x80333CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333D04: jr          $ra
    // 0x80333D08: nop

    return;
    // 0x80333D08: nop

;}
RECOMP_FUNC void func_8033ADA8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ADA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033ADAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033ADB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ADB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ADB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ADBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ADC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ADC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ADC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ADCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ADD0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ADD4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ADD8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033ADDC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADE0: nop

    // 0x8033ADE4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033ADE8: nop

    // 0x8033ADEC: bne         $t1, $zero, L_8033AE18
    if (ctx->r9 != 0) {
        // 0x8033ADF0: nop
    
            goto L_8033AE18;
    }
    // 0x8033ADF0: nop

    // 0x8033ADF4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADF8: nop

    // 0x8033ADFC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AE00: nop

    // 0x8033AE04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AE08: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AE0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE10: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x8033AE14: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_8033AE18:
    // 0x8033AE18: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE1C: nop

    // 0x8033AE20: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033AE24: nop

    // 0x8033AE28: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x8033AE2C: beq         $at, $zero, L_8033AEA0
    if (ctx->r1 == 0) {
        // 0x8033AE30: nop
    
            goto L_8033AEA0;
    }
    // 0x8033AE30: nop

    // 0x8033AE34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE3C: jal         0x80028FA0
    // 0x8033AE40: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x8033AE40: nop

    after_0:
    // 0x8033AE44: beq         $v0, $zero, L_8033AEA0
    if (ctx->r2 == 0) {
        // 0x8033AE48: nop
    
            goto L_8033AEA0;
    }
    // 0x8033AE48: nop

    // 0x8033AE4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AE58: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033AE5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033AE60: jal         0x800175F0
    // 0x8033AE64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033AE64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033AE68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE6C: nop

    // 0x8033AE70: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033AE74: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033AE78: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x8033AE7C: lw          $a3, 0xD4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0XD4);
    // 0x8033AE80: jal         0x8007EE88
    // 0x8033AE84: nop

    func_8007EE88(rdram, ctx);
        goto after_2;
    // 0x8033AE84: nop

    after_2:
    // 0x8033AE88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE90: jal         0x8002B114
    // 0x8033AE94: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033AE94: nop

    after_3:
    // 0x8033AE98: b           L_8033AF34
    // 0x8033AE9C: nop

        goto L_8033AF34;
    // 0x8033AE9C: nop

L_8033AEA0:
    // 0x8033AEA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AEA4: nop

    // 0x8033AEA8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033AEAC: nop

    // 0x8033AEB0: bne         $t1, $zero, L_8033AF14
    if (ctx->r9 != 0) {
        // 0x8033AEB4: nop
    
            goto L_8033AF14;
    }
    // 0x8033AEB4: nop

    // 0x8033AEB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AEC4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033AEC8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033AECC: jal         0x800175F0
    // 0x8033AED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8033AED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8033AED4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033AED8: nop

    // 0x8033AEDC: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033AEE0: lwc1        $f14, 0x4($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033AEE4: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x8033AEE8: lw          $a3, 0xD4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0XD4);
    // 0x8033AEEC: jal         0x8007EE88
    // 0x8033AEF0: nop

    func_8007EE88(rdram, ctx);
        goto after_5;
    // 0x8033AEF0: nop

    after_5:
    // 0x8033AEF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEFC: jal         0x8002B114
    // 0x8033AF00: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x8033AF00: nop

    after_6:
    // 0x8033AF04: b           L_8033AF34
    // 0x8033AF08: nop

        goto L_8033AF34;
    // 0x8033AF08: nop

    // 0x8033AF0C: b           L_8033AF2C
    // 0x8033AF10: nop

        goto L_8033AF2C;
    // 0x8033AF10: nop

L_8033AF14:
    // 0x8033AF14: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF18: nop

    // 0x8033AF1C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033AF20: nop

    // 0x8033AF24: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x8033AF28: sh          $t5, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r13;
L_8033AF2C:
    // 0x8033AF2C: b           L_8033AF34
    // 0x8033AF30: nop

        goto L_8033AF34;
    // 0x8033AF30: nop

L_8033AF34:
    // 0x8033AF34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AF38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033AF3C: jr          $ra
    // 0x8033AF40: nop

    return;
    // 0x8033AF40: nop

;}
RECOMP_FUNC void func_8033782C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033782C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337834: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80337838: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033783C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337840: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337848: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033784C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337854: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337858: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033785C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337860: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337868: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033786C: jal         0x8002A2EC
    // 0x80337870: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80337870: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x80337874: beq         $v0, $zero, L_803378CC
    if (ctx->r2 == 0) {
        // 0x80337878: nop
    
            goto L_803378CC;
    }
    // 0x80337878: nop

    // 0x8033787C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80337880: nop

    // 0x80337884: bne         $t0, $zero, L_8033789C
    if (ctx->r8 != 0) {
        // 0x80337888: nop
    
            goto L_8033789C;
    }
    // 0x80337888: nop

    // 0x8033788C: jal         0x80336978
    // 0x80337890: nop

    func_80336978_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80337890: nop

    after_1:
    // 0x80337894: b           L_803378C4
    // 0x80337898: nop

        goto L_803378C4;
    // 0x80337898: nop

L_8033789C:
    // 0x8033789C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803378A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803378A4: bne         $t1, $at, L_803378BC
    if (ctx->r9 != ctx->r1) {
        // 0x803378A8: nop
    
            goto L_803378BC;
    }
    // 0x803378A8: nop

    // 0x803378AC: jal         0x8033739C
    // 0x803378B0: nop

    func_8033739C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x803378B0: nop

    after_2:
    // 0x803378B4: b           L_803378C4
    // 0x803378B8: nop

        goto L_803378C4;
    // 0x803378B8: nop

L_803378BC:
    // 0x803378BC: jal         0x80337770
    // 0x803378C0: nop

    func_80337770_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x803378C0: nop

    after_3:
L_803378C4:
    // 0x803378C4: b           L_803378EC
    // 0x803378C8: nop

        goto L_803378EC;
    // 0x803378C8: nop

L_803378CC:
    // 0x803378CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803378D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803378D4: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x803378D8: nop

    // 0x803378DC: bne         $t3, $at, L_803378EC
    if (ctx->r11 != ctx->r1) {
        // 0x803378E0: nop
    
            goto L_803378EC;
    }
    // 0x803378E0: nop

    // 0x803378E4: jal         0x80336C50
    // 0x803378E8: nop

    func_80336C50_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x803378E8: nop

    after_4:
L_803378EC:
    // 0x803378EC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803378F0: nop

    // 0x803378F4: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x803378F8: nop

    // 0x803378FC: bne         $t5, $zero, L_8033790C
    if (ctx->r13 != 0) {
        // 0x80337900: nop
    
            goto L_8033790C;
    }
    // 0x80337900: nop

    // 0x80337904: jal         0x80330038
    // 0x80337908: nop

    func_80330038_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80337908: nop

    after_5:
L_8033790C:
    // 0x8033790C: b           L_80337914
    // 0x80337910: nop

        goto L_80337914;
    // 0x80337910: nop

L_80337914:
    // 0x80337914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033791C: jr          $ra
    // 0x80337920: nop

    return;
    // 0x80337920: nop

;}
RECOMP_FUNC void func_8033A538_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033A53C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033A540: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033A544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A548: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A54C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A55C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A564: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A56C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033A570: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A574: nop

    // 0x8033A578: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x8033A57C: nop

    // 0x8033A580: bne         $t1, $zero, L_8033A5D4
    if (ctx->r9 != 0) {
        // 0x8033A584: nop
    
            goto L_8033A5D4;
    }
    // 0x8033A584: nop

    // 0x8033A588: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A58C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033A590: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x8033A594: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033A598: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A59C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A5A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A5A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A5A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A5AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A5B0: lh          $t5, 0x41F4($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F4);
    // 0x8033A5B4: nop

    // 0x8033A5B8: bne         $t5, $at, L_8033A5D4
    if (ctx->r13 != ctx->r1) {
        // 0x8033A5BC: nop
    
            goto L_8033A5D4;
    }
    // 0x8033A5BC: nop

    // 0x8033A5C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033A5C8: sh          $t6, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r14;
    // 0x8033A5CC: b           L_8033AAB8
    // 0x8033A5D0: nop

        goto L_8033AAB8;
    // 0x8033A5D0: nop

L_8033A5D4:
    // 0x8033A5D4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5D8: nop

    // 0x8033A5DC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033A5E0: nop

    // 0x8033A5E4: bne         $t9, $zero, L_8033A6E0
    if (ctx->r25 != 0) {
        // 0x8033A5E8: nop
    
            goto L_8033A6E0;
    }
    // 0x8033A5E8: nop

    // 0x8033A5EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5F0: nop

    // 0x8033A5F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A5F8: nop

    // 0x8033A5FC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8033A600: sb          $t2, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r10;
    // 0x8033A604: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A608: nop

    // 0x8033A60C: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x8033A610: nop

    // 0x8033A614: sh          $t4, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r12;
    // 0x8033A618: jal         0x80014E80
    // 0x8033A61C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033A61C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8033A620: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033A624: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8033A628: nop

    // 0x8033A62C: beq         $s0, $zero, L_8033A654
    if (ctx->r16 == 0) {
        // 0x8033A630: nop
    
            goto L_8033A654;
    }
    // 0x8033A630: nop

    // 0x8033A634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A638: beq         $s0, $at, L_8033A66C
    if (ctx->r16 == ctx->r1) {
        // 0x8033A63C: nop
    
            goto L_8033A66C;
    }
    // 0x8033A63C: nop

    // 0x8033A640: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A644: beq         $s0, $at, L_8033A688
    if (ctx->r16 == ctx->r1) {
        // 0x8033A648: nop
    
            goto L_8033A688;
    }
    // 0x8033A648: nop

    // 0x8033A64C: b           L_8033A6A4
    // 0x8033A650: nop

        goto L_8033A6A4;
    // 0x8033A650: nop

L_8033A654:
    // 0x8033A654: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A658: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A65C: nop

    // 0x8033A660: swc1        $f4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f4.u32l;
    // 0x8033A664: b           L_8033A6C0
    // 0x8033A668: nop

        goto L_8033A6C0;
    // 0x8033A668: nop

L_8033A66C:
    // 0x8033A66C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033A670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A674: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A678: nop

    // 0x8033A67C: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x8033A680: b           L_8033A6C0
    // 0x8033A684: nop

        goto L_8033A6C0;
    // 0x8033A684: nop

L_8033A688:
    // 0x8033A688: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A68C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A690: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A694: nop

    // 0x8033A698: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
    // 0x8033A69C: b           L_8033A6C0
    // 0x8033A6A0: nop

        goto L_8033A6C0;
    // 0x8033A6A0: nop

L_8033A6A4:
    // 0x8033A6A4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033A6A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033A6AC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6B0: nop

    // 0x8033A6B4: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x8033A6B8: b           L_8033A6C0
    // 0x8033A6BC: nop

        goto L_8033A6C0;
    // 0x8033A6BC: nop

L_8033A6C0:
    // 0x8033A6C0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6C4: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x8033A6C8: sh          $t9, 0xC0($t1)
    MEM_H(0XC0, ctx->r9) = ctx->r25;
    // 0x8033A6CC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033A6D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A6D4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6D8: nop

    // 0x8033A6DC: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
L_8033A6E0:
    // 0x8033A6E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A6E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A6E8: jal         0x80028FA0
    // 0x8033A6EC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8033A6EC: nop

    after_1:
    // 0x8033A6F0: beq         $v0, $zero, L_8033A8D0
    if (ctx->r2 == 0) {
        // 0x8033A6F4: nop
    
            goto L_8033A8D0;
    }
    // 0x8033A6F4: nop

    // 0x8033A6F8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6FC: addiu       $at, $zero, 0x1CF
    ctx->r1 = ADD32(0, 0X1CF);
    // 0x8033A700: lh          $t4, 0x106($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X106);
    // 0x8033A704: nop

    // 0x8033A708: beq         $t4, $at, L_8033A71C
    if (ctx->r12 == ctx->r1) {
        // 0x8033A70C: nop
    
            goto L_8033A71C;
    }
    // 0x8033A70C: nop

    // 0x8033A710: addiu       $at, $zero, 0x1C8
    ctx->r1 = ADD32(0, 0X1C8);
    // 0x8033A714: bne         $t4, $at, L_8033A8A4
    if (ctx->r12 != ctx->r1) {
        // 0x8033A718: nop
    
            goto L_8033A8A4;
    }
    // 0x8033A718: nop

L_8033A71C:
    // 0x8033A71C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A720: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033A724: lh          $t5, 0xC2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XC2);
    // 0x8033A728: nop

    // 0x8033A72C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033A730: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033A734: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A738: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033A73C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A744: lh          $t7, 0x41F6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F6);
    // 0x8033A748: nop

    // 0x8033A74C: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x8033A750: sltiu       $at, $t8, 0x12
    ctx->r1 = ctx->r24 < 0X12 ? 1 : 0;
    // 0x8033A754: beq         $at, $zero, L_8033A894
    if (ctx->r1 == 0) {
        // 0x8033A758: nop
    
            goto L_8033A894;
    }
    // 0x8033A758: nop

    // 0x8033A75C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033A760: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A764: addu        $at, $at, $t8
    gpr jr_addend_8033A770 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033A768: lw          $t8, -0x4A84($at)
    ctx->r24 = ADD32(ctx->r1, -0X4A84);
    // 0x8033A76C: nop

    // 0x8033A770: jr          $t8
    // 0x8033A774: nop

    switch (jr_addend_8033A770 >> 2) {
        case 0: goto L_8033A778; break;
        case 1: goto L_8033A7C8; break;
        case 2: goto L_8033A894; break;
        case 3: goto L_8033A778; break;
        case 4: goto L_8033A778; break;
        case 5: goto L_8033A778; break;
        case 6: goto L_8033A7C8; break;
        case 7: goto L_8033A7C8; break;
        case 8: goto L_8033A894; break;
        case 9: goto L_8033A894; break;
        case 10: goto L_8033A778; break;
        case 11: goto L_8033A778; break;
        case 12: goto L_8033A894; break;
        case 13: goto L_8033A778; break;
        case 14: goto L_8033A894; break;
        case 15: goto L_8033A894; break;
        case 16: goto L_8033A778; break;
        case 17: goto L_8033A778; break;
        default: switch_error(__func__, 0x8033A770, 0x8033B57C);
    }
    // 0x8033A774: nop

L_8033A778:
    // 0x8033A778: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A77C: nop

    // 0x8033A780: lh          $t1, 0xB6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB6);
    // 0x8033A784: nop

    // 0x8033A788: bne         $t1, $zero, L_8033A7C0
    if (ctx->r9 != 0) {
        // 0x8033A78C: nop
    
            goto L_8033A7C0;
    }
    // 0x8033A78C: nop

    // 0x8033A790: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A794: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A798: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033A79C: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8033A7A0: jal         0x80015538
    // 0x8033A7A4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033A7A4: nop

    after_2:
    // 0x8033A7A8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A7AC: nop

    // 0x8033A7B0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x8033A7B4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A7B8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8033A7BC: sh          $t4, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r12;
L_8033A7C0:
    // 0x8033A7C0: b           L_8033A89C
    // 0x8033A7C4: nop

        goto L_8033A89C;
    // 0x8033A7C4: nop

L_8033A7C8:
    // 0x8033A7C8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A7CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A7D0: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x8033A7D4: nop

    // 0x8033A7D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A7DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A7E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A7E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A7E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A7EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A7F0: lwc1        $f18, 0x418C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A7F4: nop

    // 0x8033A7F8: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
    // 0x8033A7FC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A800: nop

    // 0x8033A804: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033A808: nop

    // 0x8033A80C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A810: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A818: lh          $t1, 0xC2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XC2);
    // 0x8033A81C: nop

    // 0x8033A820: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A824: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A828: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A82C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A830: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A834: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A838: lwc1        $f6, 0x4194($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x8033A83C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033A840: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A844: nop

    // 0x8033A848: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033A84C: nop

    // 0x8033A850: bc1f        L_8033A88C
    if (!c1cs) {
        // 0x8033A854: nop
    
            goto L_8033A88C;
    }
    // 0x8033A854: nop

    // 0x8033A858: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A85C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A860: lh          $t4, 0xC2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XC2);
    // 0x8033A864: nop

    // 0x8033A868: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8033A86C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033A870: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033A874: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033A878: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033A87C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033A880: lwc1        $f10, 0x4194($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x8033A884: nop

    // 0x8033A888: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
L_8033A88C:
    // 0x8033A88C: b           L_8033A89C
    // 0x8033A890: nop

        goto L_8033A89C;
    // 0x8033A890: nop

L_8033A894:
    // 0x8033A894: b           L_8033A89C
    // 0x8033A898: nop

        goto L_8033A89C;
    // 0x8033A898: nop

L_8033A89C:
    // 0x8033A89C: b           L_8033A8C8
    // 0x8033A8A0: nop

        goto L_8033A8C8;
    // 0x8033A8A0: nop

L_8033A8A4:
    // 0x8033A8A4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A8AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033A8B0: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033A8B4: jal         0x80015538
    // 0x8033A8B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033A8B8: nop

    after_3:
    // 0x8033A8BC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8C0: nop

    // 0x8033A8C4: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
L_8033A8C8:
    // 0x8033A8C8: b           L_8033A928
    // 0x8033A8CC: nop

        goto L_8033A928;
    // 0x8033A8CC: nop

L_8033A8D0:
    // 0x8033A8D0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8D4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033A8D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033A8DC: lwc1        $f16, 0x44($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X44);
    // 0x8033A8E0: nop

    // 0x8033A8E4: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8033A8E8: nop

    // 0x8033A8EC: bc1f        L_8033A914
    if (!c1cs) {
        // 0x8033A8F0: nop
    
            goto L_8033A914;
    }
    // 0x8033A8F0: nop

    // 0x8033A8F4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033A8FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A900: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8033A904: nop

    // 0x8033A908: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033A90C: b           L_8033A928
    // 0x8033A910: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
        goto L_8033A928;
    // 0x8033A910: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
L_8033A914:
    // 0x8033A914: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033A918: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033A91C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A920: nop

    // 0x8033A924: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
L_8033A928:
    // 0x8033A928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A92C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A930: jal         0x80029C40
    // 0x8033A934: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033A934: nop

    after_4:
    // 0x8033A938: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033A93C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A94C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033A950: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A954: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033A958: jal         0x80029018
    // 0x8033A95C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x8033A95C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x8033A960: beq         $v0, $zero, L_8033A98C
    if (ctx->r2 == 0) {
        // 0x8033A964: nop
    
            goto L_8033A98C;
    }
    // 0x8033A964: nop

    // 0x8033A968: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A96C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A970: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033A974: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033A978: jal         0x80015538
    // 0x8033A97C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033A97C: nop

    after_6:
    // 0x8033A980: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A984: nop

    // 0x8033A988: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
L_8033A98C:
    // 0x8033A98C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A990: nop

    // 0x8033A994: lh          $t3, 0xC0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XC0);
    // 0x8033A998: nop

    // 0x8033A99C: bne         $t3, $zero, L_8033A9B0
    if (ctx->r11 != 0) {
        // 0x8033A9A0: nop
    
            goto L_8033A9B0;
    }
    // 0x8033A9A0: nop

    // 0x8033A9A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A9A8: b           L_8033A9C8
    // 0x8033A9AC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_8033A9C8;
    // 0x8033A9AC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A9B0:
    // 0x8033A9B0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A9B4: nop

    // 0x8033A9B8: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x8033A9BC: nop

    // 0x8033A9C0: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x8033A9C4: sh          $t5, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r13;
L_8033A9C8:
    // 0x8033A9C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A9CC: nop

    // 0x8033A9D0: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x8033A9D4: nop

    // 0x8033A9D8: bne         $t9, $zero, L_8033AA30
    if (ctx->r25 != 0) {
        // 0x8033A9DC: nop
    
            goto L_8033AA30;
    }
    // 0x8033A9DC: nop

    // 0x8033A9E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A9E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A9E8: lh          $t2, 0xBE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XBE);
    // 0x8033A9EC: nop

    // 0x8033A9F0: bne         $t2, $at, L_8033AA30
    if (ctx->r10 != ctx->r1) {
        // 0x8033A9F4: nop
    
            goto L_8033AA30;
    }
    // 0x8033A9F4: nop

    // 0x8033A9F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A9FC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033AA00: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033AA04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA08: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033AA0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AA10: jal         0x8001ABF4
    // 0x8033AA14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x8033AA14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8033AA18: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033AA20: sh          $t4, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r12;
    // 0x8033AA24: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA28: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x8033AA2C: sh          $t0, 0xBC($t7)
    MEM_H(0XBC, ctx->r15) = ctx->r8;
L_8033AA30:
    // 0x8033AA30: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AA38: lh          $t6, 0xBA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBA);
    // 0x8033AA3C: nop

    // 0x8033AA40: bne         $t6, $at, L_8033AAB0
    if (ctx->r14 != ctx->r1) {
        // 0x8033AA44: nop
    
            goto L_8033AAB0;
    }
    // 0x8033AA44: nop

    // 0x8033AA48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA4C: nop

    // 0x8033AA50: lh          $t9, 0xBC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBC);
    // 0x8033AA54: nop

    // 0x8033AA58: bne         $t9, $zero, L_8033AA98
    if (ctx->r25 != 0) {
        // 0x8033AA5C: nop
    
            goto L_8033AA98;
    }
    // 0x8033AA5C: nop

    // 0x8033AA60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA64: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033AA68: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033AA6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA70: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033AA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AA78: jal         0x8001ABF4
    // 0x8033AA7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033AA7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8033AA80: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA84: nop

    // 0x8033AA88: sh          $zero, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = 0;
    // 0x8033AA8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA90: b           L_8033AAB0
    // 0x8033AA94: sh          $zero, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = 0;
        goto L_8033AAB0;
    // 0x8033AA94: sh          $zero, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = 0;
L_8033AA98:
    // 0x8033AA98: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA9C: nop

    // 0x8033AAA0: lh          $t3, 0xBC($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XBC);
    // 0x8033AAA4: nop

    // 0x8033AAA8: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x8033AAAC: sh          $t0, 0xBC($t4)
    MEM_H(0XBC, ctx->r12) = ctx->r8;
L_8033AAB0:
    // 0x8033AAB0: b           L_8033AAB8
    // 0x8033AAB4: nop

        goto L_8033AAB8;
    // 0x8033AAB4: nop

L_8033AAB8:
    // 0x8033AAB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033AABC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033AAC0: jr          $ra
    // 0x8033AAC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033AAC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803332F4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803332F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803332FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333300: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333304: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333308: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033330C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333310: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333314: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333318: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033331C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333320: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333324: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333328: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033332C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333330: nop

    // 0x80333334: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80333338: nop

    // 0x8033333C: slti        $at, $s0, 0x19
    ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
    // 0x80333340: bne         $at, $zero, L_8033335C
    if (ctx->r1 != 0) {
        // 0x80333344: nop
    
            goto L_8033335C;
    }
    // 0x80333344: nop

    // 0x80333348: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x8033334C: beq         $s0, $at, L_803334A8
    if (ctx->r16 == ctx->r1) {
        // 0x80333350: nop
    
            goto L_803334A8;
    }
    // 0x80333350: nop

    // 0x80333354: b           L_803334B8
    // 0x80333358: nop

        goto L_803334B8;
    // 0x80333358: nop

L_8033335C:
    // 0x8033335C: addiu       $t1, $s0, -0x1
    ctx->r9 = ADD32(ctx->r16, -0X1);
    // 0x80333360: sltiu       $at, $t1, 0x18
    ctx->r1 = ctx->r9 < 0X18 ? 1 : 0;
    // 0x80333364: beq         $at, $zero, L_803334B8
    if (ctx->r1 == 0) {
        // 0x80333368: nop
    
            goto L_803334B8;
    }
    // 0x80333368: nop

    // 0x8033336C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333370: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333374: addu        $at, $at, $t1
    gpr jr_addend_80333380 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333378: lw          $t1, -0x4C48($at)
    ctx->r9 = ADD32(ctx->r1, -0X4C48);
    // 0x8033337C: nop

    // 0x80333380: jr          $t1
    // 0x80333384: nop

    switch (jr_addend_80333380 >> 2) {
        case 0: goto L_80333388; break;
        case 1: goto L_803334B8; break;
        case 2: goto L_803334B8; break;
        case 3: goto L_803334B8; break;
        case 4: goto L_80333398; break;
        case 5: goto L_803333A8; break;
        case 6: goto L_803333B8; break;
        case 7: goto L_803333C8; break;
        case 8: goto L_803333D8; break;
        case 9: goto L_803333E8; break;
        case 10: goto L_803333F8; break;
        case 11: goto L_80333408; break;
        case 12: goto L_80333418; break;
        case 13: goto L_80333428; break;
        case 14: goto L_803334B8; break;
        case 15: goto L_80333438; break;
        case 16: goto L_803334B8; break;
        case 17: goto L_803334B8; break;
        case 18: goto L_80333448; break;
        case 19: goto L_80333458; break;
        case 20: goto L_80333468; break;
        case 21: goto L_80333478; break;
        case 22: goto L_80333488; break;
        case 23: goto L_80333498; break;
        default: switch_error(__func__, 0x80333380, 0x8033B3B8);
    }
    // 0x80333384: nop

L_80333388:
    // 0x80333388: jal         0x803320B8
    // 0x8033338C: nop

    func_803320B8_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x8033338C: nop

    after_0:
    // 0x80333390: b           L_803334C0
    // 0x80333394: nop

        goto L_803334C0;
    // 0x80333394: nop

L_80333398:
    // 0x80333398: jal         0x80332168
    // 0x8033339C: nop

    func_80332168_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033339C: nop

    after_1:
    // 0x803333A0: b           L_803334C0
    // 0x803333A4: nop

        goto L_803334C0;
    // 0x803333A4: nop

L_803333A8:
    // 0x803333A8: jal         0x8033221C
    // 0x803333AC: nop

    func_8033221C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x803333AC: nop

    after_2:
    // 0x803333B0: b           L_803334C0
    // 0x803333B4: nop

        goto L_803334C0;
    // 0x803333B4: nop

L_803333B8:
    // 0x803333B8: jal         0x803322F0
    // 0x803333BC: nop

    func_803322F0_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x803333BC: nop

    after_3:
    // 0x803333C0: b           L_803334C0
    // 0x803333C4: nop

        goto L_803334C0;
    // 0x803333C4: nop

L_803333C8:
    // 0x803333C8: jal         0x8033244C
    // 0x803333CC: nop

    func_8033244C_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x803333CC: nop

    after_4:
    // 0x803333D0: b           L_803334C0
    // 0x803333D4: nop

        goto L_803334C0;
    // 0x803333D4: nop

L_803333D8:
    // 0x803333D8: jal         0x803324EC
    // 0x803333DC: nop

    func_803324EC_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x803333DC: nop

    after_5:
    // 0x803333E0: b           L_803334C0
    // 0x803333E4: nop

        goto L_803334C0;
    // 0x803333E4: nop

L_803333E8:
    // 0x803333E8: jal         0x80332688
    // 0x803333EC: nop

    func_80332688_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x803333EC: nop

    after_6:
    // 0x803333F0: b           L_803334C0
    // 0x803333F4: nop

        goto L_803334C0;
    // 0x803333F4: nop

L_803333F8:
    // 0x803333F8: jal         0x803327B4
    // 0x803333FC: nop

    func_803327B4_unk_bin_16(rdram, ctx);
        goto after_7;
    // 0x803333FC: nop

    after_7:
    // 0x80333400: b           L_803334C0
    // 0x80333404: nop

        goto L_803334C0;
    // 0x80333404: nop

L_80333408:
    // 0x80333408: jal         0x803328A8
    // 0x8033340C: nop

    func_803328A8_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x8033340C: nop

    after_8:
    // 0x80333410: b           L_803334C0
    // 0x80333414: nop

        goto L_803334C0;
    // 0x80333414: nop

L_80333418:
    // 0x80333418: jal         0x803329F8
    // 0x8033341C: nop

    func_803329F8_unk_bin_16(rdram, ctx);
        goto after_9;
    // 0x8033341C: nop

    after_9:
    // 0x80333420: b           L_803334C0
    // 0x80333424: nop

        goto L_803334C0;
    // 0x80333424: nop

L_80333428:
    // 0x80333428: jal         0x80332AAC
    // 0x8033342C: nop

    func_80332AAC_unk_bin_16(rdram, ctx);
        goto after_10;
    // 0x8033342C: nop

    after_10:
    // 0x80333430: b           L_803334C0
    // 0x80333434: nop

        goto L_803334C0;
    // 0x80333434: nop

L_80333438:
    // 0x80333438: jal         0x80332B60
    // 0x8033343C: nop

    func_80332B60_unk_bin_16(rdram, ctx);
        goto after_11;
    // 0x8033343C: nop

    after_11:
    // 0x80333440: b           L_803334C0
    // 0x80333444: nop

        goto L_803334C0;
    // 0x80333444: nop

L_80333448:
    // 0x80333448: jal         0x80332C6C
    // 0x8033344C: nop

    func_80332C6C_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x8033344C: nop

    after_12:
    // 0x80333450: b           L_803334C0
    // 0x80333454: nop

        goto L_803334C0;
    // 0x80333454: nop

L_80333458:
    // 0x80333458: jal         0x80332D20
    // 0x8033345C: nop

    func_80332D20_unk_bin_16(rdram, ctx);
        goto after_13;
    // 0x8033345C: nop

    after_13:
    // 0x80333460: b           L_803334C0
    // 0x80333464: nop

        goto L_803334C0;
    // 0x80333464: nop

L_80333468:
    // 0x80333468: jal         0x80332E2C
    // 0x8033346C: nop

    func_80332E2C_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x8033346C: nop

    after_14:
    // 0x80333470: b           L_803334C0
    // 0x80333474: nop

        goto L_803334C0;
    // 0x80333474: nop

L_80333478:
    // 0x80333478: jal         0x80332F00
    // 0x8033347C: nop

    func_80332F00_unk_bin_16(rdram, ctx);
        goto after_15;
    // 0x8033347C: nop

    after_15:
    // 0x80333480: b           L_803334C0
    // 0x80333484: nop

        goto L_803334C0;
    // 0x80333484: nop

L_80333488:
    // 0x80333488: jal         0x80332FA4
    // 0x8033348C: nop

    func_80332FA4_unk_bin_16(rdram, ctx);
        goto after_16;
    // 0x8033348C: nop

    after_16:
    // 0x80333490: b           L_803334C0
    // 0x80333494: nop

        goto L_803334C0;
    // 0x80333494: nop

L_80333498:
    // 0x80333498: jal         0x80333058
    // 0x8033349C: nop

    func_80333058_unk_bin_16(rdram, ctx);
        goto after_17;
    // 0x8033349C: nop

    after_17:
    // 0x803334A0: b           L_803334C0
    // 0x803334A4: nop

        goto L_803334C0;
    // 0x803334A4: nop

L_803334A8:
    // 0x803334A8: jal         0x80333150
    // 0x803334AC: nop

    func_80333150_unk_bin_16(rdram, ctx);
        goto after_18;
    // 0x803334AC: nop

    after_18:
    // 0x803334B0: b           L_803334C0
    // 0x803334B4: nop

        goto L_803334C0;
    // 0x803334B4: nop

L_803334B8:
    // 0x803334B8: b           L_803334C0
    // 0x803334BC: nop

        goto L_803334C0;
    // 0x803334BC: nop

L_803334C0:
    // 0x803334C0: b           L_803334C8
    // 0x803334C4: nop

        goto L_803334C8;
    // 0x803334C4: nop

L_803334C8:
    // 0x803334C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803334CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803334D0: jr          $ra
    // 0x803334D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803334D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033244C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033244C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332450: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332454: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332458: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033245C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332464: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332468: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033246C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332470: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332474: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332478: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033247C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332480: nop

    // 0x80332484: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332488: nop

    // 0x8033248C: bne         $t1, $zero, L_803324DC
    if (ctx->r9 != 0) {
        // 0x80332490: nop
    
            goto L_803324DC;
    }
    // 0x80332490: nop

    // 0x80332494: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80332498: nop

    // 0x8033249C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803324A0: nop

    // 0x803324A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803324A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803324AC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x803324B0: nop

    // 0x803324B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803324B8: nop

    // 0x803324BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803324C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803324C4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x803324C8: nop

    // 0x803324CC: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803324D0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x803324D4: nop

    // 0x803324D8: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
L_803324DC:
    // 0x803324DC: b           L_803324E4
    // 0x803324E0: nop

        goto L_803324E4;
    // 0x803324E0: nop

L_803324E4:
    // 0x803324E4: jr          $ra
    // 0x803324E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803324E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80336284_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336284: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80336288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033628C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336290: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336294: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336298: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033629C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803362A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803362AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803362B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803362B4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803362B8: jal         0x803374AC
    // 0x803362BC: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x803362BC: nop

    after_0:
    // 0x803362C0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803362C4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803362C8: nop

    // 0x803362CC: sh          $zero, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = 0;
    // 0x803362D0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
L_803362D4:
    // 0x803362D4: lh          $t2, 0x38($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X38);
    // 0x803362D8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803362DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803362E0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803362E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803362E8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803362EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803362F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803362F4: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803362F8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x803362FC: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80336300: jal         0x80015538
    // 0x80336304: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80336304: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x80336308: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8033630C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80336310: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80336314: lwc1        $f11, -0x4B68($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4B68);
    // 0x80336318: lwc1        $f10, -0x4B64($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B64);
    // 0x8033631C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80336320: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80336324: jal         0x80034970
    // 0x80336328: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80336328: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x8033632C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80336330: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336334: nop

    // 0x80336338: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8033633C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80336340: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80336344: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80336348: lwc1        $f11, -0x4B60($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4B60);
    // 0x8033634C: lwc1        $f10, -0x4B5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B5C);
    // 0x80336350: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80336354: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80336358: jal         0x80036570
    // 0x8033635C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x8033635C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_3:
    // 0x80336360: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80336364: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336368: nop

    // 0x8033636C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80336370: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80336374: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336378: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033637C: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80336380: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80336384: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80336388: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033638C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80336390: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80336394: jal         0x803360CC
    // 0x80336398: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80336398: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_4:
    // 0x8033639C: sb          $v0, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r2;
    // 0x803363A0: lh          $t5, 0x38($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X38);
    // 0x803363A4: nop

    // 0x803363A8: bne         $t5, $zero, L_803363F4
    if (ctx->r13 != 0) {
        // 0x803363AC: nop
    
            goto L_803363F4;
    }
    // 0x803363AC: nop

    // 0x803363B0: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x803363B4: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x803363B8: beq         $t6, $at, L_803363E4
    if (ctx->r14 == ctx->r1) {
        // 0x803363BC: nop
    
            goto L_803363E4;
    }
    // 0x803363BC: nop

    // 0x803363C0: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x803363C4: beq         $t6, $at, L_803363E4
    if (ctx->r14 == ctx->r1) {
        // 0x803363C8: nop
    
            goto L_803363E4;
    }
    // 0x803363C8: nop

    // 0x803363CC: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x803363D0: beq         $t6, $at, L_803363E4
    if (ctx->r14 == ctx->r1) {
        // 0x803363D4: nop
    
            goto L_803363E4;
    }
    // 0x803363D4: nop

    // 0x803363D8: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x803363DC: bne         $t6, $at, L_803363F4
    if (ctx->r14 != ctx->r1) {
        // 0x803363E0: nop
    
            goto L_803363F4;
    }
    // 0x803363E0: nop

L_803363E4:
    // 0x803363E4: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x803363E8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803363EC: b           L_803363F4
    // 0x803363F0: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
        goto L_803363F4;
    // 0x803363F0: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
L_803363F4:
    // 0x803363F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803363F8: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x803363FC: lh          $t1, 0xBE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBE);
    // 0x80336400: nop

    // 0x80336404: bne         $t9, $t1, L_80336424
    if (ctx->r25 != ctx->r9) {
        // 0x80336408: nop
    
            goto L_80336424;
    }
    // 0x80336408: nop

    // 0x8033640C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80336410: nop

    // 0x80336414: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x80336418: nop

    // 0x8033641C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336420: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
L_80336424:
    // 0x80336424: lh          $t5, 0x38($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X38);
    // 0x80336428: nop

    // 0x8033642C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80336430: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80336434: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80336438: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x8033643C: bne         $at, $zero, L_803362D4
    if (ctx->r1 != 0) {
        // 0x80336440: sh          $t6, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r14;
            goto L_803362D4;
    }
    // 0x80336440: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x80336444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033644C: jal         0x8001B4AC
    // 0x80336450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80336450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80336454: beq         $v0, $zero, L_80336628
    if (ctx->r2 == 0) {
        // 0x80336458: nop
    
            goto L_80336628;
    }
    // 0x80336458: nop

    // 0x8033645C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80336460: nop

    // 0x80336464: bne         $t0, $zero, L_80336618
    if (ctx->r8 != 0) {
        // 0x80336468: nop
    
            goto L_80336618;
    }
    // 0x80336468: nop

    // 0x8033646C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80336470: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80336474: lh          $t1, 0xB6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB6);
    // 0x80336478: nop

    // 0x8033647C: bne         $t1, $at, L_80336608
    if (ctx->r9 != ctx->r1) {
        // 0x80336480: nop
    
            goto L_80336608;
    }
    // 0x80336480: nop

    // 0x80336484: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80336488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033648C: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80336490: nop

    // 0x80336494: bne         $t4, $at, L_803364A8
    if (ctx->r12 != ctx->r1) {
        // 0x80336498: nop
    
            goto L_803364A8;
    }
    // 0x80336498: nop

    // 0x8033649C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803364A0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x803364A4: sh          $t2, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r10;
L_803364A8:
    // 0x803364A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803364B4: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x803364B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803364BC: jal         0x800175F0
    // 0x803364C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x803364C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x803364C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364C8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803364CC: addiu       $t6, $t6, -0x52A0
    ctx->r14 = ADD32(ctx->r14, -0X52A0);
    // 0x803364D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803364D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803364DC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x803364E0: jal         0x8001C0EC
    // 0x803364E4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x803364E4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_7:
    // 0x803364E8: lui         $t7, 0x8034
    ctx->r15 = S32(0X8034 << 16);
    // 0x803364EC: lh          $t7, -0x4D1C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4D1C);
    // 0x803364F0: nop

    // 0x803364F4: bne         $t7, $zero, L_803365AC
    if (ctx->r15 != 0) {
        // 0x803364F8: nop
    
            goto L_803365AC;
    }
    // 0x803364F8: nop

    // 0x803364FC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80336500: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80336504: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80336508: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8033650C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336510: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80336514: addiu       $a1, $a1, -0x4D50
    ctx->r5 = ADD32(ctx->r5, -0X4D50);
    // 0x80336518: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033651C: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    // 0x80336520: jal         0x80027464
    // 0x80336524: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80336524: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80336528: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033652C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80336530: addiu       $t0, $t0, -0x4F68
    ctx->r8 = ADD32(ctx->r8, -0X4F68);
    // 0x80336534: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80336538: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033653C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80336544: jal         0x8001C0EC
    // 0x80336548: addiu       $a3, $zero, 0x134
    ctx->r7 = ADD32(0, 0X134);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x80336548: addiu       $a3, $zero, 0x134
    ctx->r7 = ADD32(0, 0X134);
    after_9:
    // 0x8033654C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336550: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80336554: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80336558: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033655C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336560: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80336564: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80336568: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033656C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336570: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80336574: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x80336578: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033657C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336580: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80336584: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80336588: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033658C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80336590: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80336594: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80336598: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033659C: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x803365A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803365A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803365A8: sh          $t6, -0x4D1C($at)
    MEM_H(-0X4D1C, ctx->r1) = ctx->r14;
L_803365AC:
    // 0x803365AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803365B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803365B4: nop

    // 0x803365B8: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x803365BC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803365C0: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x803365C4: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x803365C8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803365CC: nop

    // 0x803365D0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803365D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803365D8: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x803365DC: sh          $t9, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r25;
    // 0x803365E0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803365E4: nop

    // 0x803365E8: sh          $zero, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = 0;
    // 0x803365EC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803365F0: nop

    // 0x803365F4: sh          $zero, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = 0;
    // 0x803365F8: jal         0x803367A0
    // 0x803365FC: nop

    func_803367A0_unk_bin_16(rdram, ctx);
        goto after_10;
    // 0x803365FC: nop

    after_10:
    // 0x80336600: b           L_80336610
    // 0x80336604: nop

        goto L_80336610;
    // 0x80336604: nop

L_80336608:
    // 0x80336608: jal         0x80336B9C
    // 0x8033660C: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_11;
    // 0x8033660C: nop

    after_11:
L_80336610:
    // 0x80336610: b           L_80336620
    // 0x80336614: nop

        goto L_80336620;
    // 0x80336614: nop

L_80336618:
    // 0x80336618: jal         0x80336B9C
    // 0x8033661C: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x8033661C: nop

    after_12:
L_80336620:
    // 0x80336620: b           L_80336658
    // 0x80336624: nop

        goto L_80336658;
    // 0x80336624: nop

L_80336628:
    // 0x80336628: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033662C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80336630: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80336634: nop

    // 0x80336638: bne         $t6, $at, L_80336658
    if (ctx->r14 != ctx->r1) {
        // 0x8033663C: nop
    
            goto L_80336658;
    }
    // 0x8033663C: nop

    // 0x80336640: jal         0x803374AC
    // 0x80336644: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_13;
    // 0x80336644: nop

    after_13:
    // 0x80336648: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033664C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80336650: jal         0x803376AC
    // 0x80336654: nop

    func_803376AC_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x80336654: nop

    after_14:
L_80336658:
    // 0x80336658: b           L_80336660
    // 0x8033665C: nop

        goto L_80336660;
    // 0x8033665C: nop

L_80336660:
    // 0x80336660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336664: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80336668: jr          $ra
    // 0x8033666C: nop

    return;
    // 0x8033666C: nop

;}
RECOMP_FUNC void func_80338BE4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338BE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338BE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338BEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338BF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338BF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338BF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338BFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338C00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338C04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338C08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338C0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338C10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338C14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338C18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338C1C: nop

    // 0x80338C20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338C24: nop

    // 0x80338C28: bne         $t1, $zero, L_80338C5C
    if (ctx->r9 != 0) {
        // 0x80338C2C: nop
    
            goto L_80338C5C;
    }
    // 0x80338C2C: nop

    // 0x80338C30: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338C34: nop

    // 0x80338C38: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338C3C: nop

    // 0x80338C40: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338C44: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338C48: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80338C4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338C50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338C54: nop

    // 0x80338C58: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
L_80338C5C:
    // 0x80338C5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338C60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338C68: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80338C6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80338C70: jal         0x800175F0
    // 0x80338C74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80338C74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80338C78: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338C7C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80338C80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338C84: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80338C88: nop

    // 0x80338C8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80338C90: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x80338C94: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338C98: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x80338C9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338CA0: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80338CA4: jal         0x80015538
    // 0x80338CA8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338CA8: nop

    after_1:
    // 0x80338CAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338CB0: nop

    // 0x80338CB4: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80338CB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338CBC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80338CC0: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80338CC4: nop

    // 0x80338CC8: bne         $t0, $at, L_80338CE8
    if (ctx->r8 != ctx->r1) {
        // 0x80338CCC: nop
    
            goto L_80338CE8;
    }
    // 0x80338CCC: nop

    // 0x80338CD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338CD4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80338CD8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80338CDC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338CE0: b           L_80338D3C
    // 0x80338CE4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80338D3C;
    // 0x80338CE4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80338CE8:
    // 0x80338CE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80338CF0: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x80338CF4: nop

    // 0x80338CF8: bne         $t5, $at, L_80338D24
    if (ctx->r13 != ctx->r1) {
        // 0x80338CFC: nop
    
            goto L_80338D24;
    }
    // 0x80338CFC: nop

    // 0x80338D00: jal         0x80338F28
    // 0x80338D04: nop

    func_80338F28_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80338D04: nop

    after_2:
    // 0x80338D08: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338D0C: nop

    // 0x80338D10: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80338D14: nop

    // 0x80338D18: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80338D1C: b           L_80338D3C
    // 0x80338D20: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
        goto L_80338D3C;
    // 0x80338D20: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
L_80338D24:
    // 0x80338D24: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338D28: nop

    // 0x80338D2C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80338D30: nop

    // 0x80338D34: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80338D38: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
L_80338D3C:
    // 0x80338D3C: b           L_80338D44
    // 0x80338D40: nop

        goto L_80338D44;
    // 0x80338D40: nop

L_80338D44:
    // 0x80338D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338D48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338D4C: jr          $ra
    // 0x80338D50: nop

    return;
    // 0x80338D50: nop

;}
RECOMP_FUNC void func_80336038_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033603C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336040: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80336044: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336048: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033604C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336050: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336058: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033605C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336060: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336064: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336068: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033606C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80336070: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x80336074: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336078: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8033607C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80336080: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80336084: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80336088: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8033608C: jal         0x80067748
    // 0x80336090: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80336090: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    after_0:
    // 0x80336094: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80336098: lbu         $v0, 0x76E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X76E0);
    // 0x8033609C: nop

    // 0x803360A0: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x803360A4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x803360A8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x803360AC: b           L_803360BC
    // 0x803360B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_803360BC;
    // 0x803360B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x803360B4: b           L_803360BC
    // 0x803360B8: nop

        goto L_803360BC;
    // 0x803360B8: nop

L_803360BC:
    // 0x803360BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803360C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803360C4: jr          $ra
    // 0x803360C8: nop

    return;
    // 0x803360C8: nop

;}
RECOMP_FUNC void func_8033615C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033615C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336160: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80336164: swc1        $f14, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f14.u32l;
    // 0x80336168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033616C: lh          $t6, 0x7788($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7788);
    // 0x80336170: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80336174: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80336178: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033617C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80336180: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80336184: nop

    // 0x80336188: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8033618C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80336190: nop

    // 0x80336194: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80336198: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033619C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803361A0: nop

    // 0x803361A4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803361A8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x803361AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x803361B0: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x803361B4: nop

    // 0x803361B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803361BC: lh          $t9, 0x77A8($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X77A8);
    // 0x803361C0: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x803361C4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x803361C8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803361CC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803361D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803361D4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x803361D8: nop

    // 0x803361DC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x803361E0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803361E4: nop

    // 0x803361E8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803361EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803361F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803361F4: nop

    // 0x803361F8: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x803361FC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80336200: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80336204: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80336208: nop

    // 0x8033620C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80336210: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80336214: sra         $t3, $t2, 2
    ctx->r11 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80336218: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8033621C: lh          $t5, 0x7788($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7788);
    // 0x80336220: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80336224: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336228: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8033622C: addiu       $t7, $t6, 0x78
    ctx->r15 = ADD32(ctx->r14, 0X78);
    // 0x80336230: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80336234: nop

    // 0x80336238: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033623C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x80336240: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x80336244: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80336248: sra         $t9, $t8, 2
    ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
    // 0x8033624C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80336250: lh          $t1, 0x77A8($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X77A8);
    // 0x80336254: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80336258: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033625C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80336260: addiu       $t3, $t2, 0x78
    ctx->r11 = ADD32(ctx->r10, 0X78);
    // 0x80336264: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80336268: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8033626C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80336270: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x80336274: b           L_8033627C
    // 0x80336278: nop

        goto L_8033627C;
    // 0x80336278: nop

L_8033627C:
    // 0x8033627C: jr          $ra
    // 0x80336280: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336280: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80337E7C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337E7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337E80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337E84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337E88: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337E8C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337E90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337E94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337E9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337EA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337EA4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337EA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337EAC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337EB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EB4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80337EB8: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80337EBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EC0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80337EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337EC8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80337ECC: jal         0x8001C0EC
    // 0x80337ED0: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337ED0: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80337ED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337EE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337EE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80337EE8: jal         0x800175F0
    // 0x80337EEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80337EEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80337EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EF8: jal         0x8001BBDC
    // 0x80337EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80337EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80337F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337F04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337F08: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80337F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337F10: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80337F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337F18: jal         0x8001ABF4
    // 0x80337F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80337F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80337F20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337F24: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x80337F28: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80337F2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80337F30: nop

    // 0x80337F34: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80337F38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337F3C: addiu       $t4, $zero, 0x16
    ctx->r12 = ADD32(0, 0X16);
    // 0x80337F40: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80337F44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337F48: nop

    // 0x80337F4C: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x80337F50: b           L_80337F58
    // 0x80337F54: nop

        goto L_80337F58;
    // 0x80337F54: nop

L_80337F58:
    // 0x80337F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337F60: jr          $ra
    // 0x80337F64: nop

    return;
    // 0x80337F64: nop

;}
RECOMP_FUNC void func_80338E84_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338E84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338E88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338E8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338E94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338E98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338EB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338EB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338EB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338EBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338EC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338EC4: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80338EC8: nop

    // 0x80338ECC: beq         $s0, $at, L_80338EE8
    if (ctx->r16 == ctx->r1) {
        // 0x80338ED0: nop
    
            goto L_80338EE8;
    }
    // 0x80338ED0: nop

    // 0x80338ED4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338ED8: beq         $s0, $at, L_80338EF8
    if (ctx->r16 == ctx->r1) {
        // 0x80338EDC: nop
    
            goto L_80338EF8;
    }
    // 0x80338EDC: nop

    // 0x80338EE0: b           L_80338F08
    // 0x80338EE4: nop

        goto L_80338F08;
    // 0x80338EE4: nop

L_80338EE8:
    // 0x80338EE8: jal         0x80338BE4
    // 0x80338EEC: nop

    func_80338BE4_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80338EEC: nop

    after_0:
    // 0x80338EF0: b           L_80338F10
    // 0x80338EF4: nop

        goto L_80338F10;
    // 0x80338EF4: nop

L_80338EF8:
    // 0x80338EF8: jal         0x80338D54
    // 0x80338EFC: nop

    func_80338D54_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80338EFC: nop

    after_1:
    // 0x80338F00: b           L_80338F10
    // 0x80338F04: nop

        goto L_80338F10;
    // 0x80338F04: nop

L_80338F08:
    // 0x80338F08: b           L_80338F10
    // 0x80338F0C: nop

        goto L_80338F10;
    // 0x80338F0C: nop

L_80338F10:
    // 0x80338F10: b           L_80338F18
    // 0x80338F14: nop

        goto L_80338F18;
    // 0x80338F14: nop

L_80338F18:
    // 0x80338F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338F1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338F20: jr          $ra
    // 0x80338F24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338F24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80337924_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337924: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80337928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033792C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80337930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337934: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337938: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033793C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337940: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337944: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337948: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033794C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337950: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337954: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337958: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033795C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80337960: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80337964: nop

    // 0x80337968: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x8033796C: nop

    // 0x80337970: bne         $t1, $zero, L_80337A54
    if (ctx->r9 != 0) {
        // 0x80337974: nop
    
            goto L_80337A54;
    }
    // 0x80337974: nop

    // 0x80337978: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033797C: nop

    // 0x80337980: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80337984: lwc1        $f14, 0x4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80337988: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8033798C: jal         0x803360CC
    // 0x80337990: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80337990: nop

    after_0:
    // 0x80337994: sb          $v0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r2;
    // 0x80337998: lbu         $s0, 0x33($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X33);
    // 0x8033799C: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x803379A0: beq         $s0, $at, L_803379D4
    if (ctx->r16 == ctx->r1) {
        // 0x803379A4: nop
    
            goto L_803379D4;
    }
    // 0x803379A4: nop

    // 0x803379A8: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x803379AC: beq         $s0, $at, L_80337A28
    if (ctx->r16 == ctx->r1) {
        // 0x803379B0: nop
    
            goto L_80337A28;
    }
    // 0x803379B0: nop

    // 0x803379B4: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x803379B8: beq         $s0, $at, L_80337A28
    if (ctx->r16 == ctx->r1) {
        // 0x803379BC: nop
    
            goto L_80337A28;
    }
    // 0x803379BC: nop

    // 0x803379C0: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x803379C4: beq         $s0, $at, L_80337A28
    if (ctx->r16 == ctx->r1) {
        // 0x803379C8: nop
    
            goto L_80337A28;
    }
    // 0x803379C8: nop

    // 0x803379CC: b           L_80337A38
    // 0x803379D0: nop

        goto L_80337A38;
    // 0x803379D0: nop

L_803379D4:
    // 0x803379D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803379D8: nop

    // 0x803379DC: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x803379E0: nop

    // 0x803379E4: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x803379E8: beq         $at, $zero, L_80337A00
    if (ctx->r1 == 0) {
        // 0x803379EC: nop
    
            goto L_80337A00;
    }
    // 0x803379EC: nop

    // 0x803379F0: jal         0x80336284
    // 0x803379F4: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803379F4: nop

    after_1:
    // 0x803379F8: b           L_80337A20
    // 0x803379FC: nop

        goto L_80337A20;
    // 0x803379FC: nop

L_80337A00:
    // 0x80337A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337A08: jal         0x8001B4AC
    // 0x80337A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80337A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80337A10: beq         $v0, $zero, L_80337A20
    if (ctx->r2 == 0) {
        // 0x80337A14: nop
    
            goto L_80337A20;
    }
    // 0x80337A14: nop

    // 0x80337A18: jal         0x80336B9C
    // 0x80337A1C: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80337A1C: nop

    after_3:
L_80337A20:
    // 0x80337A20: b           L_80337A4C
    // 0x80337A24: nop

        goto L_80337A4C;
    // 0x80337A24: nop

L_80337A28:
    // 0x80337A28: jal         0x80337770
    // 0x80337A2C: nop

    func_80337770_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80337A2C: nop

    after_4:
    // 0x80337A30: b           L_80337A4C
    // 0x80337A34: nop

        goto L_80337A4C;
    // 0x80337A34: nop

L_80337A38:
    // 0x80337A38: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80337A3C: jal         0x8033782C
    // 0x80337A40: nop

    func_8033782C_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80337A40: nop

    after_5:
    // 0x80337A44: b           L_80337A4C
    // 0x80337A48: nop

        goto L_80337A4C;
    // 0x80337A48: nop

L_80337A4C:
    // 0x80337A4C: b           L_80337A60
    // 0x80337A50: nop

        goto L_80337A60;
    // 0x80337A50: nop

L_80337A54:
    // 0x80337A54: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80337A58: jal         0x8033782C
    // 0x80337A5C: nop

    func_8033782C_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80337A5C: nop

    after_6:
L_80337A60:
    // 0x80337A60: b           L_80337A68
    // 0x80337A64: nop

        goto L_80337A68;
    // 0x80337A64: nop

L_80337A68:
    // 0x80337A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337A6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337A70: jr          $ra
    // 0x80337A74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80337A74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80338900_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338900: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338904: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338908: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033890C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338910: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033891C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338924: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338928: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033892C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338930: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338934: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338938: nop

    // 0x8033893C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338940: nop

    // 0x80338944: bne         $t1, $zero, L_8033899C
    if (ctx->r9 != 0) {
        // 0x80338948: nop
    
            goto L_8033899C;
    }
    // 0x80338948: nop

    // 0x8033894C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338950: nop

    // 0x80338954: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338958: nop

    // 0x8033895C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338960: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338964: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338968: nop

    // 0x8033896C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338970: nop

    // 0x80338974: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033897C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338980: addiu       $t7, $t7, -0x5174
    ctx->r15 = ADD32(ctx->r15, -0X5174);
    // 0x80338984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338988: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033898C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338990: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80338994: jal         0x8001C0EC
    // 0x80338998: addiu       $a3, $zero, 0x11F
    ctx->r7 = ADD32(0, 0X11F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338998: addiu       $a3, $zero, 0x11F
    ctx->r7 = ADD32(0, 0X11F);
    after_0:
L_8033899C:
    // 0x8033899C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389A4: jal         0x8001B44C
    // 0x803389A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x803389A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803389AC: beq         $v0, $zero, L_803389DC
    if (ctx->r2 == 0) {
        // 0x803389B0: nop
    
            goto L_803389DC;
    }
    // 0x803389B0: nop

    // 0x803389B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389BC: jal         0x8001BBDC
    // 0x803389C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803389C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803389C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803389C8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803389CC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803389D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803389D4: nop

    // 0x803389D8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803389DC:
    // 0x803389DC: b           L_803389E4
    // 0x803389E0: nop

        goto L_803389E4;
    // 0x803389E0: nop

L_803389E4:
    // 0x803389E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803389E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803389EC: jr          $ra
    // 0x803389F0: nop

    return;
    // 0x803389F0: nop

;}
RECOMP_FUNC void func_80332D20_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332D28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332D30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332D34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332D44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332D4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D50: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332D54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D58: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x80332D5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332D60: nop

    // 0x80332D64: bne         $t1, $at, L_80332DCC
    if (ctx->r9 != ctx->r1) {
        // 0x80332D68: nop
    
            goto L_80332DCC;
    }
    // 0x80332D68: nop

    // 0x80332D6C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D70: nop

    // 0x80332D74: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332D78: nop

    // 0x80332D7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332D80: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332D84: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D88: nop

    // 0x80332D8C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332D90: nop

    // 0x80332D94: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D98: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80332DA0: sw          $t7, 0xC4($t8)
    MEM_W(0XC4, ctx->r24) = ctx->r15;
    // 0x80332DA4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80332DA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332DAC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DB0: nop

    // 0x80332DB4: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80332DB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80332DBC: jal         0x80330000
    // 0x80332DC0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_80330000_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80332DC0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_0:
    // 0x80332DC4: b           L_80332E14
    // 0x80332DC8: nop

        goto L_80332E14;
    // 0x80332DC8: nop

L_80332DCC:
    // 0x80332DCC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DD0: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80332DD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332DD8: nop

    // 0x80332DDC: bne         $t1, $at, L_80332DFC
    if (ctx->r9 != ctx->r1) {
        // 0x80332DE0: nop
    
            goto L_80332DFC;
    }
    // 0x80332DE0: nop

    // 0x80332DE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DEC: jal         0x8002B114
    // 0x80332DF0: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80332DF0: nop

    after_1:
    // 0x80332DF4: b           L_80332E14
    // 0x80332DF8: nop

        goto L_80332E14;
    // 0x80332DF8: nop

L_80332DFC:
    // 0x80332DFC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E00: nop

    // 0x80332E04: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80332E08: nop

    // 0x80332E0C: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x80332E10: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_80332E14:
    // 0x80332E14: b           L_80332E1C
    // 0x80332E18: nop

        goto L_80332E1C;
    // 0x80332E18: nop

L_80332E1C:
    // 0x80332E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332E20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332E24: jr          $ra
    // 0x80332E28: nop

    return;
    // 0x80332E28: nop

;}
RECOMP_FUNC void func_80334324_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033432C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334330: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334334: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334338: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033433C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334340: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334344: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334348: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033434C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334350: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334354: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334358: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033435C: nop

    // 0x80334360: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80334364: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80334368: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8033436C: jal         0x803360CC
    // 0x80334370: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80334370: nop

    after_0:
    // 0x80334374: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x80334378: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033437C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334380: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80334384: nop

    // 0x80334388: bne         $t2, $at, L_8033439C
    if (ctx->r10 != ctx->r1) {
        // 0x8033438C: nop
    
            goto L_8033439C;
    }
    // 0x8033438C: nop

    // 0x80334390: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334394: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80334398: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_8033439C:
    // 0x8033439C: jal         0x80336DDC
    // 0x803343A0: nop

    func_80336DDC_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803343A0: nop

    after_1:
    // 0x803343A4: b           L_803343AC
    // 0x803343A8: nop

        goto L_803343AC;
    // 0x803343A8: nop

L_803343AC:
    // 0x803343AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803343B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803343B4: jr          $ra
    // 0x803343B8: nop

    return;
    // 0x803343B8: nop

;}
RECOMP_FUNC void func_803376AC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803376AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803376B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803376B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803376B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803376BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803376C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803376C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803376C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803376D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803376D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803376DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803376E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803376E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376EC: jal         0x8002A2EC
    // 0x803376F0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x803376F0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x803376F4: beq         $v0, $zero, L_8033772C
    if (ctx->r2 == 0) {
        // 0x803376F8: nop
    
            goto L_8033772C;
    }
    // 0x803376F8: nop

    // 0x803376FC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80337700: nop

    // 0x80337704: bne         $t0, $zero, L_8033771C
    if (ctx->r8 != 0) {
        // 0x80337708: nop
    
            goto L_8033771C;
    }
    // 0x80337708: nop

    // 0x8033770C: jal         0x80336978
    // 0x80337710: nop

    func_80336978_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80337710: nop

    after_1:
    // 0x80337714: b           L_80337724
    // 0x80337718: nop

        goto L_80337724;
    // 0x80337718: nop

L_8033771C:
    // 0x8033771C: jal         0x80336B9C
    // 0x80337720: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80337720: nop

    after_2:
L_80337724:
    // 0x80337724: b           L_80337758
    // 0x80337728: nop

        goto L_80337758;
    // 0x80337728: nop

L_8033772C:
    // 0x8033772C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80337730: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80337734: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80337738: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8033773C: nop

    // 0x80337740: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80337744: nop

    // 0x80337748: bc1f        L_80337758
    if (!c1cs) {
        // 0x8033774C: nop
    
            goto L_80337758;
    }
    // 0x8033774C: nop

    // 0x80337750: jal         0x8033740C
    // 0x80337754: nop

    func_8033740C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80337754: nop

    after_3:
L_80337758:
    // 0x80337758: b           L_80337760
    // 0x8033775C: nop

        goto L_80337760;
    // 0x8033775C: nop

L_80337760:
    // 0x80337760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337768: jr          $ra
    // 0x8033776C: nop

    return;
    // 0x8033776C: nop

;}
RECOMP_FUNC void func_80336978_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336978: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033697C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336984: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336988: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033698C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336994: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336998: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033699C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803369A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803369A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803369A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803369AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369B0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803369B4: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x803369B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803369C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803369C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x803369C8: jal         0x8001C0EC
    // 0x803369CC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803369CC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x803369D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369D8: jal         0x8002A46C
    // 0x803369DC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x803369DC: nop

    after_1:
    // 0x803369E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803369E4: nop

    // 0x803369E8: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803369EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803369F0: nop

    // 0x803369F4: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803369F8: nop

    // 0x803369FC: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x80336A00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336A04: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80336A08: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x80336A0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336A10: nop

    // 0x80336A14: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
    // 0x80336A18: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336A1C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80336A20: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80336A24: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336A28: nop

    // 0x80336A2C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80336A30: b           L_80336A38
    // 0x80336A34: nop

        goto L_80336A38;
    // 0x80336A34: nop

L_80336A38:
    // 0x80336A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336A40: jr          $ra
    // 0x80336A44: nop

    return;
    // 0x80336A44: nop

;}
RECOMP_FUNC void func_803334D8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803334D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803334DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803334E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803334E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803334E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803334EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803334F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803334F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803334F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803334FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333500: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333504: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333508: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033350C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333510: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80333514: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80333518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033351C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333524: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80333528: jal         0x8001C0EC
    // 0x8033352C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033352C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80333530: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333534: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333538: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033353C: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80333540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333544: jal         0x8001ABF4
    // 0x80333548: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333548: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033354C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333550: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333554: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80333558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033355C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80333560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333564: jal         0x8001ABF4
    // 0x80333568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80333568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033356C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333570: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333574: jal         0x8002A46C
    // 0x80333578: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x80333578: nop

    after_3:
    // 0x8033357C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333580: nop

    // 0x80333584: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80333588: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033358C: nop

    // 0x80333590: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80333594: nop

    // 0x80333598: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x8033359C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803335A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803335A4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x803335A8: b           L_803335B0
    // 0x803335AC: nop

        goto L_803335B0;
    // 0x803335AC: nop

L_803335B0:
    // 0x803335B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803335B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803335B8: jr          $ra
    // 0x803335BC: nop

    return;
    // 0x803335BC: nop

;}
RECOMP_FUNC void func_80336C50_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336C50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336C54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336C58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336C5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336C60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336C64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336C6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336C74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336C78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336C7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336C80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336C84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C88: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80336C8C: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80336C90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80336C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336C9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80336CA0: jal         0x8001C0EC
    // 0x80336CA4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336CA4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80336CA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CB0: jal         0x8002A46C
    // 0x80336CB4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x80336CB4: nop

    after_1:
    // 0x80336CB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336CBC: nop

    // 0x80336CC0: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80336CC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336CC8: nop

    // 0x80336CCC: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80336CD0: nop

    // 0x80336CD4: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x80336CD8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336CDC: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80336CE0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x80336CE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336CE8: nop

    // 0x80336CEC: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
    // 0x80336CF0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336CF4: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80336CF8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80336CFC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336D00: nop

    // 0x80336D04: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80336D08: b           L_80336D10
    // 0x80336D0C: nop

        goto L_80336D10;
    // 0x80336D0C: nop

L_80336D10:
    // 0x80336D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336D14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336D18: jr          $ra
    // 0x80336D1C: nop

    return;
    // 0x80336D1C: nop

;}
RECOMP_FUNC void func_80335CF8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335CF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80335CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335D00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335D18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335D20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335D24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335D28: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80335D2C: jal         0x803374AC
    // 0x80335D30: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80335D30: nop

    after_0:
    // 0x80335D34: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80335D38: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335D3C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335D40: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80335D44: lwc1        $f9, -0x4B88($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4B88);
    // 0x80335D48: lwc1        $f8, -0x4B84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B84);
    // 0x80335D4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80335D50: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80335D54: jal         0x80034970
    // 0x80335D58: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80335D58: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80335D5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335D60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335D64: nop

    // 0x80335D68: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80335D6C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80335D70: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80335D74: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335D78: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80335D7C: lwc1        $f9, -0x4B80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4B80);
    // 0x80335D80: lwc1        $f8, -0x4B7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B7C);
    // 0x80335D84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80335D88: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80335D8C: jal         0x80036570
    // 0x80335D90: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80335D90: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80335D94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335D98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335D9C: nop

    // 0x80335DA0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80335DA4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80335DA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335DAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335DB0: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x80335DB4: nop

    // 0x80335DB8: bne         $t3, $at, L_80335DEC
    if (ctx->r11 != ctx->r1) {
        // 0x80335DBC: nop
    
            goto L_80335DEC;
    }
    // 0x80335DBC: nop

    // 0x80335DC0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80335DC4: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335DC8: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80335DCC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335DD0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80335DD4: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80335DD8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80335DDC: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80335DE0: jal         0x803360CC
    // 0x80335DE4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80335DE4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x80335DE8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
L_80335DEC:
    // 0x80335DEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80335DF0: jal         0x80337A78
    // 0x80335DF4: nop

    func_80337A78_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80335DF4: nop

    after_4:
    // 0x80335DF8: b           L_80335E00
    // 0x80335DFC: nop

        goto L_80335E00;
    // 0x80335DFC: nop

L_80335E00:
    // 0x80335E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335E04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80335E08: jr          $ra
    // 0x80335E0C: nop

    return;
    // 0x80335E0C: nop

;}
RECOMP_FUNC void func_8033AF44_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AF44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AF48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AF4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AF50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AF54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AF58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AF5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AF64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AF6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AF70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AF74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033AF78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF7C: nop

    // 0x8033AF80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AF84: nop

    // 0x8033AF88: bne         $t1, $zero, L_8033AFB4
    if (ctx->r9 != 0) {
        // 0x8033AF8C: nop
    
            goto L_8033AFB4;
    }
    // 0x8033AF8C: nop

    // 0x8033AF90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF94: nop

    // 0x8033AF98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AF9C: nop

    // 0x8033AFA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AFA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AFA8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AFAC: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x8033AFB0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_8033AFB4:
    // 0x8033AFB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033AFB8: nop

    // 0x8033AFBC: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033AFC0: nop

    // 0x8033AFC4: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x8033AFC8: beq         $at, $zero, L_8033B03C
    if (ctx->r1 == 0) {
        // 0x8033AFCC: nop
    
            goto L_8033B03C;
    }
    // 0x8033AFCC: nop

    // 0x8033AFD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AFD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AFD8: jal         0x80028FA0
    // 0x8033AFDC: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x8033AFDC: nop

    after_0:
    // 0x8033AFE0: beq         $v0, $zero, L_8033B03C
    if (ctx->r2 == 0) {
        // 0x8033AFE4: nop
    
            goto L_8033B03C;
    }
    // 0x8033AFE4: nop

    // 0x8033AFE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AFEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AFF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AFF4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033AFF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033AFFC: jal         0x800175F0
    // 0x8033B000: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033B000: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033B004: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B008: nop

    // 0x8033B00C: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033B010: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033B014: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x8033B018: lw          $a3, 0xD4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0XD4);
    // 0x8033B01C: jal         0x8007EE88
    // 0x8033B020: nop

    func_8007EE88(rdram, ctx);
        goto after_2;
    // 0x8033B020: nop

    after_2:
    // 0x8033B024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B02C: jal         0x8002B114
    // 0x8033B030: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033B030: nop

    after_3:
    // 0x8033B034: b           L_8033B19C
    // 0x8033B038: nop

        goto L_8033B19C;
    // 0x8033B038: nop

L_8033B03C:
    // 0x8033B03C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033B040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B044: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B048: nop

    // 0x8033B04C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x8033B050: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B054: nop

    // 0x8033B058: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033B05C: nop

    // 0x8033B060: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033B064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B06C: jal         0x80029C40
    // 0x8033B070: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033B070: nop

    after_4:
    // 0x8033B074: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033B078: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033B07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B080: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B088: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033B08C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033B090: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033B094: jal         0x80029018
    // 0x8033B098: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x8033B098: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8033B09C: beq         $v0, $zero, L_8033B0F8
    if (ctx->r2 == 0) {
        // 0x8033B0A0: nop
    
            goto L_8033B0F8;
    }
    // 0x8033B0A0: nop

    // 0x8033B0A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B0A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B0AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B0B0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033B0B4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B0B8: jal         0x800175F0
    // 0x8033B0BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x8033B0BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8033B0C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B0C4: nop

    // 0x8033B0C8: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033B0CC: lwc1        $f14, 0x4($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033B0D0: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x8033B0D4: lw          $a3, 0xD4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0XD4);
    // 0x8033B0D8: jal         0x8007EE88
    // 0x8033B0DC: nop

    func_8007EE88(rdram, ctx);
        goto after_7;
    // 0x8033B0DC: nop

    after_7:
    // 0x8033B0E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B0E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B0E8: jal         0x8002B114
    // 0x8033B0EC: nop

    func_8002B114(rdram, ctx);
        goto after_8;
    // 0x8033B0EC: nop

    after_8:
    // 0x8033B0F0: b           L_8033B19C
    // 0x8033B0F4: nop

        goto L_8033B19C;
    // 0x8033B0F4: nop

L_8033B0F8:
    // 0x8033B0F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B0FC: nop

    // 0x8033B100: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033B104: nop

    // 0x8033B108: bne         $t2, $zero, L_8033B17C
    if (ctx->r10 != 0) {
        // 0x8033B10C: nop
    
            goto L_8033B17C;
    }
    // 0x8033B10C: nop

    // 0x8033B110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B11C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033B120: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B124: jal         0x800175F0
    // 0x8033B128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x8033B128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x8033B12C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B130: nop

    // 0x8033B134: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033B138: lwc1        $f6, 0x2C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033B13C: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033B140: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B144: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x8033B148: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8033B14C: lwc1        $f14, 0x4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033B150: lw          $a3, 0xD4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0XD4);
    // 0x8033B154: jal         0x8007EE88
    // 0x8033B158: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007EE88(rdram, ctx);
        goto after_10;
    // 0x8033B158: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_10:
    // 0x8033B15C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B164: jal         0x8002B114
    // 0x8033B168: nop

    func_8002B114(rdram, ctx);
        goto after_11;
    // 0x8033B168: nop

    after_11:
    // 0x8033B16C: b           L_8033B19C
    // 0x8033B170: nop

        goto L_8033B19C;
    // 0x8033B170: nop

    // 0x8033B174: b           L_8033B194
    // 0x8033B178: nop

        goto L_8033B194;
    // 0x8033B178: nop

L_8033B17C:
    // 0x8033B17C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B180: nop

    // 0x8033B184: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8033B188: nop

    // 0x8033B18C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8033B190: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_8033B194:
    // 0x8033B194: b           L_8033B19C
    // 0x8033B198: nop

        goto L_8033B19C;
    // 0x8033B198: nop

L_8033B19C:
    // 0x8033B19C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B1A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B1A4: jr          $ra
    // 0x8033B1A8: nop

    return;
    // 0x8033B1A8: nop

;}
RECOMP_FUNC void func_80336A48_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80336A4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336A50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A78: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80336A7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336A80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336A84: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80336A88: nop

    // 0x80336A8C: bne         $t1, $at, L_80336AB4
    if (ctx->r9 != ctx->r1) {
        // 0x80336A90: nop
    
            goto L_80336AB4;
    }
    // 0x80336A90: nop

    // 0x80336A94: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x80336A98: lw          $t2, -0x4D30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4D30);
    // 0x80336A9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336AA0: bne         $t2, $at, L_80336AB4
    if (ctx->r10 != ctx->r1) {
        // 0x80336AA4: nop
    
            goto L_80336AB4;
    }
    // 0x80336AA4: nop

    // 0x80336AA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80336AAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80336AB0: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80336AB4:
    // 0x80336AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AB8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80336ABC: addiu       $t5, $t5, -0x52A0
    ctx->r13 = ADD32(ctx->r13, -0X52A0);
    // 0x80336AC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AC4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80336AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80336AD0: jal         0x8001C0EC
    // 0x80336AD4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336AD4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80336AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336ADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336AE4: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80336AE8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80336AEC: jal         0x800175F0
    // 0x80336AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80336AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80336AF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AFC: jal         0x8001BBDC
    // 0x80336B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80336B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80336B04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80336B08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B14: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80336B18: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80336B1C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336B20: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336B24: jal         0x800295C0
    // 0x80336B28: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80336B28: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80336B2C: beq         $v0, $zero, L_80336B44
    if (ctx->r2 == 0) {
        // 0x80336B30: nop
    
            goto L_80336B44;
    }
    // 0x80336B30: nop

    // 0x80336B34: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336B38: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B3C: b           L_80336B54
    // 0x80336B40: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
        goto L_80336B54;
    // 0x80336B40: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_80336B44:
    // 0x80336B44: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80336B48: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B4C: nop

    // 0x80336B50: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
L_80336B54:
    // 0x80336B54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B58: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80336B5C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336B60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B64: nop

    // 0x80336B68: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80336B6C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B70: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80336B74: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x80336B78: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B7C: nop

    // 0x80336B80: sh          $zero, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = 0;
    // 0x80336B84: b           L_80336B8C
    // 0x80336B88: nop

        goto L_80336B8C;
    // 0x80336B88: nop

L_80336B8C:
    // 0x80336B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80336B94: jr          $ra
    // 0x80336B98: nop

    return;
    // 0x80336B98: nop

;}
RECOMP_FUNC void func_8033A0D4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A0D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A0DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A0E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A0E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A0E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A0EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A0F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A0F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A0FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A100: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A104: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A108: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033A10C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033A110: nop

    // 0x8033A114: bne         $t0, $zero, L_8033A250
    if (ctx->r8 != 0) {
        // 0x8033A118: nop
    
            goto L_8033A250;
    }
    // 0x8033A118: nop

    // 0x8033A11C: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x8033A120: lw          $t2, -0x4D30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4D30);
    // 0x8033A124: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A128: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033A12C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A130: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033A134: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A138: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033A13C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033A140: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033A144: sh          $t1, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r9;
    // 0x8033A148: lui         $t4, 0x8034
    ctx->r12 = S32(0X8034 << 16);
    // 0x8033A14C: lw          $t4, -0x4D30($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4D30);
    // 0x8033A150: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033A154: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033A158: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A15C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A160: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A164: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A168: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033A16C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8033A170: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x8033A174: nop

    // 0x8033A178: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033A17C: sh          $t9, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r25;
    // 0x8033A180: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8033A184:
    // 0x8033A184: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x8033A188: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x8033A18C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033A190: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033A194: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033A198: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033A19C: lw          $t1, -0x4D2C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4D2C);
    // 0x8033A1A0: nop

    // 0x8033A1A4: bne         $t1, $t3, L_8033A1C8
    if (ctx->r9 != ctx->r11) {
        // 0x8033A1A8: nop
    
            goto L_8033A1C8;
    }
    // 0x8033A1A8: nop

    // 0x8033A1AC: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x8033A1B0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A1B4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033A1B8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A1BC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8033A1C0: b           L_8033A220
    // 0x8033A1C4: sw          $t4, -0x4D2C($at)
    MEM_W(-0X4D2C, ctx->r1) = ctx->r12;
        goto L_8033A220;
    // 0x8033A1C4: sw          $t4, -0x4D2C($at)
    MEM_W(-0X4D2C, ctx->r1) = ctx->r12;
L_8033A1C8:
    // 0x8033A1C8: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x8033A1CC: lui         $t7, 0x8034
    ctx->r15 = S32(0X8034 << 16);
    // 0x8033A1D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033A1D4: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033A1D8: lw          $t7, -0x4D2C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D2C);
    // 0x8033A1DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A1E0: beq         $t7, $at, L_8033A220
    if (ctx->r15 == ctx->r1) {
        // 0x8033A1E4: nop
    
            goto L_8033A220;
    }
    // 0x8033A1E4: nop

    // 0x8033A1E8: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8033A1EC: lui         $t3, 0x8034
    ctx->r11 = S32(0X8034 << 16);
    // 0x8033A1F0: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8033A1F4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033A1F8: lw          $t3, -0x4D2C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4D2C);
    // 0x8033A1FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A200: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033A204: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033A208: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A20C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033A210: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A214: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A218: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033A21C: sh          $t0, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r8;
L_8033A220:
    // 0x8033A220: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x8033A224: nop

    // 0x8033A228: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x8033A22C: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x8033A230: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8033A234: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x8033A238: bne         $at, $zero, L_8033A184
    if (ctx->r1 != 0) {
        // 0x8033A23C: sh          $t6, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r14;
            goto L_8033A184;
    }
    // 0x8033A23C: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    // 0x8033A240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A248: jal         0x8002B0E4
    // 0x8033A24C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033A24C: nop

    after_0:
L_8033A250:
    // 0x8033A250: b           L_8033A258
    // 0x8033A254: nop

        goto L_8033A258;
    // 0x8033A254: nop

L_8033A258:
    // 0x8033A258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A25C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A260: jr          $ra
    // 0x8033A264: nop

    return;
    // 0x8033A264: nop

;}
RECOMP_FUNC void func_803395AC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803395AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803395B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803395B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803395B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803395BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803395C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803395C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803395C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803395CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803395D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803395D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803395D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803395DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803395E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803395E4: nop

    // 0x803395E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803395EC: nop

    // 0x803395F0: bne         $t1, $zero, L_80339670
    if (ctx->r9 != 0) {
        // 0x803395F4: nop
    
            goto L_80339670;
    }
    // 0x803395F4: nop

    // 0x803395F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803395FC: nop

    // 0x80339600: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339604: nop

    // 0x80339608: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033960C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339614: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80339618: addiu       $t5, $t5, -0x5164
    ctx->r13 = ADD32(ctx->r13, -0X5164);
    // 0x8033961C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339620: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80339624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033962C: jal         0x8001C0EC
    // 0x80339630: addiu       $a3, $zero, 0x126
    ctx->r7 = ADD32(0, 0X126);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339630: addiu       $a3, $zero, 0x126
    ctx->r7 = ADD32(0, 0X126);
    after_0:
    // 0x80339634: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033963C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339640: addiu       $a3, $a3, -0x5138
    ctx->r7 = ADD32(ctx->r7, -0X5138);
    // 0x80339644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339648: jal         0x8001ABF4
    // 0x8033964C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033964C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80339650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339654: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339658: addiu       $a3, $a3, -0x5138
    ctx->r7 = ADD32(ctx->r7, -0X5138);
    // 0x8033965C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339660: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339668: jal         0x8001ABF4
    // 0x8033966C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033966C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_80339670:
    // 0x80339670: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033967C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80339680: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80339684: jal         0x800175F0
    // 0x80339688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80339688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8033968C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339694: jal         0x8001B4AC
    // 0x80339698: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80339698: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x8033969C: beq         $v0, $zero, L_803396B4
    if (ctx->r2 == 0) {
        // 0x803396A0: nop
    
            goto L_803396B4;
    }
    // 0x803396A0: nop

    // 0x803396A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803396A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803396AC: jal         0x8002B114
    // 0x803396B0: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x803396B0: nop

    after_5:
L_803396B4:
    // 0x803396B4: b           L_803396BC
    // 0x803396B8: nop

        goto L_803396BC;
    // 0x803396B8: nop

L_803396BC:
    // 0x803396BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803396C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803396C4: jr          $ra
    // 0x803396C8: nop

    return;
    // 0x803396C8: nop

;}
RECOMP_FUNC void func_80339520_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339528: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8033952C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80339530: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80339534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033953C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033954C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033955C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339560: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80339564: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80339568: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8033956C: jal         0x80067748
    // 0x80339570: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80339570: nop

    after_0:
    // 0x80339574: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80339578: lbu         $v0, 0x76E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X76E0);
    // 0x8033957C: nop

    // 0x80339580: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80339584: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80339588: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8033958C: b           L_8033959C
    // 0x80339590: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8033959C;
    // 0x80339590: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80339594: b           L_8033959C
    // 0x80339598: nop

        goto L_8033959C;
    // 0x80339598: nop

L_8033959C:
    // 0x8033959C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803395A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803395A4: jr          $ra
    // 0x803395A8: nop

    return;
    // 0x803395A8: nop

;}
RECOMP_FUNC void func_80332FA4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332FA4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332FA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332FAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332FB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332FB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332FB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332FC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332FC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332FCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332FD0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332FD4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332FD8: nop

    // 0x80332FDC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332FE0: nop

    // 0x80332FE4: bne         $t1, $zero, L_80333048
    if (ctx->r9 != 0) {
        // 0x80332FE8: nop
    
            goto L_80333048;
    }
    // 0x80332FE8: nop

    // 0x80332FEC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80332FF0: nop

    // 0x80332FF4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332FF8: nop

    // 0x80332FFC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333000: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333004: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80333008: nop

    // 0x8033300C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333010: nop

    // 0x80333014: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333018: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033301C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80333020: nop

    // 0x80333024: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80333028: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033302C: nop

    // 0x80333030: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
    // 0x80333034: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80333038: nop

    // 0x8033303C: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80333040: nop

    // 0x80333044: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
L_80333048:
    // 0x80333048: b           L_80333050
    // 0x8033304C: nop

        goto L_80333050;
    // 0x8033304C: nop

L_80333050:
    // 0x80333050: jr          $ra
    // 0x80333054: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80333054: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033AAC8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AAC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AAD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033AAD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AAD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AADC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AAE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AAE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AAE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AAEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AAF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AAF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AAF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AAFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033AB00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB04: nop

    // 0x8033AB08: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x8033AB0C: nop

    // 0x8033AB10: beq         $t1, $zero, L_8033AB34
    if (ctx->r9 == 0) {
        // 0x8033AB14: nop
    
            goto L_8033AB34;
    }
    // 0x8033AB14: nop

    // 0x8033AB18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB1C: nop

    // 0x8033AB20: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x8033AB24: nop

    // 0x8033AB28: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8033AB2C: b           L_8033AB40
    // 0x8033AB30: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
        goto L_8033AB40;
    // 0x8033AB30: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
L_8033AB34:
    // 0x8033AB34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB38: nop

    // 0x8033AB3C: sh          $zero, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = 0;
L_8033AB40:
    // 0x8033AB40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AB48: lh          $s0, 0xA4($t6)
    ctx->r16 = MEM_H(ctx->r14, 0XA4);
    // 0x8033AB4C: nop

    // 0x8033AB50: beq         $s0, $at, L_8033AB78
    if (ctx->r16 == ctx->r1) {
        // 0x8033AB54: nop
    
            goto L_8033AB78;
    }
    // 0x8033AB54: nop

    // 0x8033AB58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033AB5C: beq         $s0, $at, L_8033AB88
    if (ctx->r16 == ctx->r1) {
        // 0x8033AB60: nop
    
            goto L_8033AB88;
    }
    // 0x8033AB60: nop

    // 0x8033AB64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033AB68: beq         $s0, $at, L_8033AB98
    if (ctx->r16 == ctx->r1) {
        // 0x8033AB6C: nop
    
            goto L_8033AB98;
    }
    // 0x8033AB6C: nop

    // 0x8033AB70: b           L_8033ABA8
    // 0x8033AB74: nop

        goto L_8033ABA8;
    // 0x8033AB74: nop

L_8033AB78:
    // 0x8033AB78: jal         0x8033A268
    // 0x8033AB7C: nop

    func_8033A268_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x8033AB7C: nop

    after_0:
    // 0x8033AB80: b           L_8033ABB0
    // 0x8033AB84: nop

        goto L_8033ABB0;
    // 0x8033AB84: nop

L_8033AB88:
    // 0x8033AB88: jal         0x8033A394
    // 0x8033AB8C: nop

    func_8033A394_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033AB8C: nop

    after_1:
    // 0x8033AB90: b           L_8033ABB0
    // 0x8033AB94: nop

        goto L_8033ABB0;
    // 0x8033AB94: nop

L_8033AB98:
    // 0x8033AB98: jal         0x8033A538
    // 0x8033AB9C: nop

    func_8033A538_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x8033AB9C: nop

    after_2:
    // 0x8033ABA0: b           L_8033ABB0
    // 0x8033ABA4: nop

        goto L_8033ABB0;
    // 0x8033ABA4: nop

L_8033ABA8:
    // 0x8033ABA8: b           L_8033ABB0
    // 0x8033ABAC: nop

        goto L_8033ABB0;
    // 0x8033ABAC: nop

L_8033ABB0:
    // 0x8033ABB0: b           L_8033ABB8
    // 0x8033ABB4: nop

        goto L_8033ABB8;
    // 0x8033ABB4: nop

L_8033ABB8:
    // 0x8033ABB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ABBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033ABC0: jr          $ra
    // 0x8033ABC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033ABC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033B1AC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B1AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B1B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B1B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033B1B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B1BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B1C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B1C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B1C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B1CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B1D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B1D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B1D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B1DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B1E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B1E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B1EC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033B1F0: nop

    // 0x8033B1F4: beq         $s0, $at, L_8033B210
    if (ctx->r16 == ctx->r1) {
        // 0x8033B1F8: nop
    
            goto L_8033B210;
    }
    // 0x8033B1F8: nop

    // 0x8033B1FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033B200: beq         $s0, $at, L_8033B220
    if (ctx->r16 == ctx->r1) {
        // 0x8033B204: nop
    
            goto L_8033B220;
    }
    // 0x8033B204: nop

    // 0x8033B208: b           L_8033B230
    // 0x8033B20C: nop

        goto L_8033B230;
    // 0x8033B20C: nop

L_8033B210:
    // 0x8033B210: jal         0x8033ADA8
    // 0x8033B214: nop

    func_8033ADA8_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x8033B214: nop

    after_0:
    // 0x8033B218: b           L_8033B238
    // 0x8033B21C: nop

        goto L_8033B238;
    // 0x8033B21C: nop

L_8033B220:
    // 0x8033B220: jal         0x8033AF44
    // 0x8033B224: nop

    func_8033AF44_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033B224: nop

    after_1:
    // 0x8033B228: b           L_8033B238
    // 0x8033B22C: nop

        goto L_8033B238;
    // 0x8033B22C: nop

L_8033B230:
    // 0x8033B230: b           L_8033B238
    // 0x8033B234: nop

        goto L_8033B238;
    // 0x8033B234: nop

L_8033B238:
    // 0x8033B238: b           L_8033B240
    // 0x8033B23C: nop

        goto L_8033B240;
    // 0x8033B23C: nop

L_8033B240:
    // 0x8033B240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033B248: jr          $ra
    // 0x8033B24C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033B24C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033739C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033739C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803373A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803373A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803373A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803373AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803373B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803373B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803373B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803373BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803373C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803373C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803373C8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803373CC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803373D0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x803373D4: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x803373D8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803373DC: nop

    // 0x803373E0: sh          $zero, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = 0;
    // 0x803373E4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803373E8: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x803373EC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803373F0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x803373F4: nop

    // 0x803373F8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x803373FC: b           L_80337404
    // 0x80337400: nop

        goto L_80337404;
    // 0x80337400: nop

L_80337404:
    // 0x80337404: jr          $ra
    // 0x80337408: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80337408: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803360CC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803360CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803360D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803360D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x803360D8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x803360DC: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x803360E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803360E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803360E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803360EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803360F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803360F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803360F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803360FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336100: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336104: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336108: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033610C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80336110: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336114: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80336118: jal         0x80067748
    // 0x8033611C: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8033611C: nop

    after_0:
    // 0x80336120: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336124: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80336128: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8033612C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80336130: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80336134: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80336138: lbu         $v0, 0x7743($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7743);
    // 0x8033613C: b           L_8033614C
    // 0x80336140: nop

        goto L_8033614C;
    // 0x80336140: nop

    // 0x80336144: b           L_8033614C
    // 0x80336148: nop

        goto L_8033614C;
    // 0x80336148: nop

L_8033614C:
    // 0x8033614C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80336154: jr          $ra
    // 0x80336158: nop

    return;
    // 0x80336158: nop

;}
RECOMP_FUNC void func_80330038_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330038: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8033003C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330040: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80330044: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330048: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033004C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330050: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330054: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330058: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033005C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330060: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330068: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033006C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330070: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330074: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80330078: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033007C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330080: lh          $s0, 0xC2($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XC2);
    // 0x80330084: nop

    // 0x80330088: beq         $s0, $at, L_803300BC
    if (ctx->r16 == ctx->r1) {
        // 0x8033008C: nop
    
            goto L_803300BC;
    }
    // 0x8033008C: nop

    // 0x80330090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330094: beq         $s0, $at, L_803302EC
    if (ctx->r16 == ctx->r1) {
        // 0x80330098: nop
    
            goto L_803302EC;
    }
    // 0x80330098: nop

    // 0x8033009C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803300A0: beq         $s0, $at, L_80330530
    if (ctx->r16 == ctx->r1) {
        // 0x803300A4: nop
    
            goto L_80330530;
    }
    // 0x803300A4: nop

    // 0x803300A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803300AC: beq         $s0, $at, L_80330D38
    if (ctx->r16 == ctx->r1) {
        // 0x803300B0: nop
    
            goto L_80330D38;
    }
    // 0x803300B0: nop

    // 0x803300B4: b           L_803315A4
    // 0x803300B8: nop

        goto L_803315A4;
    // 0x803300B8: nop

L_803300BC:
    // 0x803300BC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x803300C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803300C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803300C8: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803300CC: jal         0x80015538
    // 0x803300D0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803300D0: nop

    after_0:
    // 0x803300D4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803300D8: lwc1        $f7, -0x4CF0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4CF0);
    // 0x803300DC: lwc1        $f6, -0x4CEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4CEC);
    // 0x803300E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803300E4: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x803300E8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803300EC: jal         0x80034970
    // 0x803300F0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x803300F0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_1:
    // 0x803300F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803300F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803300FC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80330100: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330104: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80330108: nop

    // 0x8033010C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330110: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80330114: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80330118: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033011C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330120: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80330124: jal         0x80015538
    // 0x80330128: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80330128: nop

    after_2:
    // 0x8033012C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330130: lwc1        $f9, -0x4CE8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4CE8);
    // 0x80330134: lwc1        $f8, -0x4CE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4CE4);
    // 0x80330138: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8033013C: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x80330140: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330144: jal         0x80036570
    // 0x80330148: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80330148: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x8033014C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330150: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330154: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80330158: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8033015C: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330160: nop

    // 0x80330164: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330168: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8033016C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330170: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033017C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80330180: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80330184: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330188: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033018C: jal         0x800295C0
    // 0x80330190: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x80330190: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80330194: beq         $v0, $zero, L_803301A8
    if (ctx->r2 == 0) {
        // 0x80330198: nop
    
            goto L_803301A8;
    }
    // 0x80330198: nop

    // 0x8033019C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803301A0: b           L_803301B4
    // 0x803301A4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
        goto L_803301B4;
    // 0x803301A4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
L_803301A8:
    // 0x803301A8: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803301AC: nop

    // 0x803301B0: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
L_803301B4:
    // 0x803301B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803301B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803301BC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x803301C0: nop

    // 0x803301C4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803301C8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x803301CC: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x803301D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803301D4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x803301D8: nop

    // 0x803301DC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803301E0: nop

    // 0x803301E4: bc1f        L_803302E4
    if (!c1cs) {
        // 0x803301E8: nop
    
            goto L_803302E4;
    }
    // 0x803301E8: nop

    // 0x803301EC: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803301F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803301F4: nop

    // 0x803301F8: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803301FC: nop

    // 0x80330200: bc1f        L_803302E4
    if (!c1cs) {
        // 0x80330204: nop
    
            goto L_803302E4;
    }
    // 0x80330204: nop

    // 0x80330208: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033020C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330210: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330214: nop

    // 0x80330218: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8033021C: nop

    // 0x80330220: bc1f        L_803302E4
    if (!c1cs) {
        // 0x80330224: nop
    
            goto L_803302E4;
    }
    // 0x80330224: nop

    // 0x80330228: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x8033022C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330230: nop

    // 0x80330234: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80330238: nop

    // 0x8033023C: bc1f        L_803302E4
    if (!c1cs) {
        // 0x80330240: nop
    
            goto L_803302E4;
    }
    // 0x80330240: nop

    // 0x80330244: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330248: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033024C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330250: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80330254: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80330258: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x8033025C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330260: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80330264: jal         0x80027464
    // 0x80330268: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80330268: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8033026C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80330270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330278: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8033027C: jal         0x80026F10
    // 0x80330280: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80330280: nop

    after_6:
    // 0x80330284: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80330288: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033028C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330290: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330294: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330298: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033029C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803302A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803302A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302A8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803302AC: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x803302B0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x803302B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803302BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803302C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803302C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803302C8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803302CC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803302D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803302D4: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x803302D8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x803302DC: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x803302E0: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
L_803302E4:
    // 0x803302E4: b           L_803315AC
    // 0x803302E8: nop

        goto L_803315AC;
    // 0x803302E8: nop

L_803302EC:
    // 0x803302EC: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x803302F0: lw          $t2, -0x4D30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4D30);
    // 0x803302F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803302F8: bne         $t2, $at, L_80330528
    if (ctx->r10 != ctx->r1) {
        // 0x803302FC: nop
    
            goto L_80330528;
    }
    // 0x803302FC: nop

    // 0x80330300: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80330304: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330308: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033030C: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80330310: jal         0x80015538
    // 0x80330314: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80330314: nop

    after_7:
    // 0x80330318: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033031C: lwc1        $f5, -0x4CE0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4CE0);
    // 0x80330320: lwc1        $f4, -0x4CDC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CDC);
    // 0x80330324: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330328: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x8033032C: mul.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80330330: jal         0x80034970
    // 0x80330334: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80330334: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_8:
    // 0x80330338: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033033C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330340: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80330344: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330348: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033034C: nop

    // 0x80330350: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80330354: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80330358: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8033035C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330360: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330364: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330368: jal         0x80015538
    // 0x8033036C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033036C: nop

    after_9:
    // 0x80330370: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330374: lwc1        $f9, -0x4CD8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4CD8);
    // 0x80330378: lwc1        $f8, -0x4CD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4CD4);
    // 0x8033037C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330380: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x80330384: mul.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80330388: jal         0x80036570
    // 0x8033038C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_10;
    // 0x8033038C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_10:
    // 0x80330390: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330394: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330398: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8033039C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x803303A0: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803303A4: nop

    // 0x803303A8: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x803303AC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x803303B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803303B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803303B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303C0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x803303C4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x803303C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803303CC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803303D0: jal         0x800295C0
    // 0x803303D4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x803303D4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x803303D8: beq         $v0, $zero, L_803303EC
    if (ctx->r2 == 0) {
        // 0x803303DC: nop
    
            goto L_803303EC;
    }
    // 0x803303DC: nop

    // 0x803303E0: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803303E4: b           L_803303F8
    // 0x803303E8: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
        goto L_803303F8;
    // 0x803303E8: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
L_803303EC:
    // 0x803303EC: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803303F0: nop

    // 0x803303F4: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
L_803303F8:
    // 0x803303F8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803303FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330400: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330404: nop

    // 0x80330408: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8033040C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80330410: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330414: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330418: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033041C: nop

    // 0x80330420: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80330424: nop

    // 0x80330428: bc1f        L_80330528
    if (!c1cs) {
        // 0x8033042C: nop
    
            goto L_80330528;
    }
    // 0x8033042C: nop

    // 0x80330430: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330434: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330438: nop

    // 0x8033043C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330440: nop

    // 0x80330444: bc1f        L_80330528
    if (!c1cs) {
        // 0x80330448: nop
    
            goto L_80330528;
    }
    // 0x80330448: nop

    // 0x8033044C: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330454: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330458: nop

    // 0x8033045C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80330460: nop

    // 0x80330464: bc1f        L_80330528
    if (!c1cs) {
        // 0x80330468: nop
    
            goto L_80330528;
    }
    // 0x80330468: nop

    // 0x8033046C: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330470: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330474: nop

    // 0x80330478: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033047C: nop

    // 0x80330480: bc1f        L_80330528
    if (!c1cs) {
        // 0x80330484: nop
    
            goto L_80330528;
    }
    // 0x80330484: nop

    // 0x80330488: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033048C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330490: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330494: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80330498: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8033049C: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x803304A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803304A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803304A8: jal         0x80027464
    // 0x803304AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x803304AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x803304B0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x803304B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304BC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x803304C0: jal         0x80026F10
    // 0x803304C4: nop

    func_80026F10(rdram, ctx);
        goto after_13;
    // 0x803304C4: nop

    after_13:
    // 0x803304C8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x803304CC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803304D0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803304D4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803304D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803304E0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803304E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803304F0: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x803304F4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x803304F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330500: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330504: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330508: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033050C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330510: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330514: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330518: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x8033051C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80330520: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80330524: sh          $t2, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r10;
L_80330528:
    // 0x80330528: b           L_803315AC
    // 0x8033052C: nop

        goto L_803315AC;
    // 0x8033052C: nop

L_80330530:
    // 0x80330530: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80330534: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330538: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033053C: lwc1        $f9, -0x4CD0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4CD0);
    // 0x80330540: lwc1        $f8, -0x4CCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4CCC);
    // 0x80330544: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80330548: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033054C: jal         0x80034970
    // 0x80330550: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_14;
    // 0x80330550: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_14:
    // 0x80330554: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80330558: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033055C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80330560: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330564: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80330568: nop

    // 0x8033056C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330570: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80330574: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80330578: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033057C: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80330580: lwc1        $f17, -0x4CC8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4CC8);
    // 0x80330584: lwc1        $f16, -0x4CC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4CC4);
    // 0x80330588: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033058C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80330590: jal         0x80036570
    // 0x80330594: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_15;
    // 0x80330594: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_15:
    // 0x80330598: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8033059C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803305A0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x803305A4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803305A8: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803305AC: nop

    // 0x803305B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803305B4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x803305B8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803305BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803305C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305C8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x803305CC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x803305D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803305D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803305D8: jal         0x800295C0
    // 0x803305DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_16;
    // 0x803305DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x803305E0: beq         $v0, $zero, L_803305F4
    if (ctx->r2 == 0) {
        // 0x803305E4: nop
    
            goto L_803305F4;
    }
    // 0x803305E4: nop

    // 0x803305E8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803305EC: b           L_80330600
    // 0x803305F0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
        goto L_80330600;
    // 0x803305F0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_803305F4:
    // 0x803305F4: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803305F8: nop

    // 0x803305FC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
L_80330600:
    // 0x80330600: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330604: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330608: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033060C: nop

    // 0x80330610: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330614: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x80330618: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033061C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330620: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330624: nop

    // 0x80330628: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033062C: nop

    // 0x80330630: bc1f        L_80330730
    if (!c1cs) {
        // 0x80330634: nop
    
            goto L_80330730;
    }
    // 0x80330634: nop

    // 0x80330638: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x8033063C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330640: nop

    // 0x80330644: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80330648: nop

    // 0x8033064C: bc1f        L_80330730
    if (!c1cs) {
        // 0x80330650: nop
    
            goto L_80330730;
    }
    // 0x80330650: nop

    // 0x80330654: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330658: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033065C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330660: nop

    // 0x80330664: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80330668: nop

    // 0x8033066C: bc1f        L_80330730
    if (!c1cs) {
        // 0x80330670: nop
    
            goto L_80330730;
    }
    // 0x80330670: nop

    // 0x80330674: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330678: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033067C: nop

    // 0x80330680: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80330684: nop

    // 0x80330688: bc1f        L_80330730
    if (!c1cs) {
        // 0x8033068C: nop
    
            goto L_80330730;
    }
    // 0x8033068C: nop

    // 0x80330690: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330694: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330698: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033069C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x803306A0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x803306A4: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x803306A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803306AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803306B0: jal         0x80027464
    // 0x803306B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_17;
    // 0x803306B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x803306B8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x803306BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803306C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803306C4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x803306C8: jal         0x80026F10
    // 0x803306CC: nop

    func_80026F10(rdram, ctx);
        goto after_18;
    // 0x803306CC: nop

    after_18:
    // 0x803306D0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x803306D4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803306D8: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x803306DC: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803306E0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803306E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803306E8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803306EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803306F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306F4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803306F8: swc1        $f6, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f6.u32l;
    // 0x803306FC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80330700: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330704: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330708: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033070C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330710: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330714: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330718: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033071C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330720: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330724: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80330728: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x8033072C: sh          $t3, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r11;
L_80330730:
    // 0x80330730: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80330734: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330738: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033073C: lwc1        $f17, -0x4CC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4CC0);
    // 0x80330740: lwc1        $f16, -0x4CBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4CBC);
    // 0x80330744: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80330748: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8033074C: jal         0x80034970
    // 0x80330750: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_19;
    // 0x80330750: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_19:
    // 0x80330754: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80330758: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033075C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80330760: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80330764: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80330768: nop

    // 0x8033076C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80330770: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80330774: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80330778: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033077C: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330780: lwc1        $f19, -0x4CB8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4CB8);
    // 0x80330784: lwc1        $f18, -0x4CB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4CB4);
    // 0x80330788: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8033078C: mul.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x80330790: jal         0x80036570
    // 0x80330794: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_20;
    // 0x80330794: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_20:
    // 0x80330798: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x8033079C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803307A0: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x803307A4: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x803307A8: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803307AC: nop

    // 0x803307B0: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x803307B4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x803307B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803307BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803307C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307C8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x803307CC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x803307D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803307D4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803307D8: jal         0x800295C0
    // 0x803307DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_21;
    // 0x803307DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x803307E0: beq         $v0, $zero, L_803307F4
    if (ctx->r2 == 0) {
        // 0x803307E4: nop
    
            goto L_803307F4;
    }
    // 0x803307E4: nop

    // 0x803307E8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803307EC: b           L_80330800
    // 0x803307F0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
        goto L_80330800;
    // 0x803307F0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
L_803307F4:
    // 0x803307F4: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803307F8: nop

    // 0x803307FC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
L_80330800:
    // 0x80330800: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330808: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033080C: nop

    // 0x80330810: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80330814: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80330818: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033081C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330820: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330824: nop

    // 0x80330828: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8033082C: nop

    // 0x80330830: bc1f        L_80330930
    if (!c1cs) {
        // 0x80330834: nop
    
            goto L_80330930;
    }
    // 0x80330834: nop

    // 0x80330838: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x8033083C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330840: nop

    // 0x80330844: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80330848: nop

    // 0x8033084C: bc1f        L_80330930
    if (!c1cs) {
        // 0x80330850: nop
    
            goto L_80330930;
    }
    // 0x80330850: nop

    // 0x80330854: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033085C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330860: nop

    // 0x80330864: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80330868: nop

    // 0x8033086C: bc1f        L_80330930
    if (!c1cs) {
        // 0x80330870: nop
    
            goto L_80330930;
    }
    // 0x80330870: nop

    // 0x80330874: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330878: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033087C: nop

    // 0x80330880: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330884: nop

    // 0x80330888: bc1f        L_80330930
    if (!c1cs) {
        // 0x8033088C: nop
    
            goto L_80330930;
    }
    // 0x8033088C: nop

    // 0x80330890: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330894: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330898: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033089C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x803308A0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x803308A4: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x803308A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803308AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803308B0: jal         0x80027464
    // 0x803308B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_22;
    // 0x803308B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x803308B8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x803308BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308C4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x803308C8: jal         0x80026F10
    // 0x803308CC: nop

    func_80026F10(rdram, ctx);
        goto after_23;
    // 0x803308CC: nop

    after_23:
    // 0x803308D0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x803308D4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803308D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803308DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803308E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803308E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803308E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803308EC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803308F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308F4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803308F8: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x803308FC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80330900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330904: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330908: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033090C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330910: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330914: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330918: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033091C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330920: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330924: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80330928: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x8033092C: sh          $t4, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r12;
L_80330930:
    // 0x80330930: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80330934: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330938: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033093C: lwc1        $f19, -0x4CB0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4CB0);
    // 0x80330940: lwc1        $f18, -0x4CAC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4CAC);
    // 0x80330944: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80330948: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033094C: jal         0x80034970
    // 0x80330950: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_24;
    // 0x80330950: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_24:
    // 0x80330954: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80330958: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033095C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80330960: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330964: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80330968: nop

    // 0x8033096C: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80330970: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80330974: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80330978: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033097C: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330980: lwc1        $f7, -0x4CA8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4CA8);
    // 0x80330984: lwc1        $f6, -0x4CA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4CA4);
    // 0x80330988: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x8033098C: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x80330990: jal         0x80036570
    // 0x80330994: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_25;
    // 0x80330994: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_25:
    // 0x80330998: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x8033099C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803309A0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x803309A4: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803309A8: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803309AC: nop

    // 0x803309B0: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803309B4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x803309B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803309BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803309C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309C8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x803309CC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x803309D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803309D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803309D8: jal         0x800295C0
    // 0x803309DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_26;
    // 0x803309DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_26:
    // 0x803309E0: beq         $v0, $zero, L_803309F4
    if (ctx->r2 == 0) {
        // 0x803309E4: nop
    
            goto L_803309F4;
    }
    // 0x803309E4: nop

    // 0x803309E8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803309EC: b           L_80330A00
    // 0x803309F0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
        goto L_80330A00;
    // 0x803309F0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_803309F4:
    // 0x803309F4: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803309F8: nop

    // 0x803309FC: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
L_80330A00:
    // 0x80330A00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330A04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A08: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330A0C: nop

    // 0x80330A10: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80330A14: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80330A18: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330A1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330A20: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330A24: nop

    // 0x80330A28: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80330A2C: nop

    // 0x80330A30: bc1f        L_80330B30
    if (!c1cs) {
        // 0x80330A34: nop
    
            goto L_80330B30;
    }
    // 0x80330A34: nop

    // 0x80330A38: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330A3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330A40: nop

    // 0x80330A44: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80330A48: nop

    // 0x80330A4C: bc1f        L_80330B30
    if (!c1cs) {
        // 0x80330A50: nop
    
            goto L_80330B30;
    }
    // 0x80330A50: nop

    // 0x80330A54: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330A58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A5C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330A60: nop

    // 0x80330A64: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80330A68: nop

    // 0x80330A6C: bc1f        L_80330B30
    if (!c1cs) {
        // 0x80330A70: nop
    
            goto L_80330B30;
    }
    // 0x80330A70: nop

    // 0x80330A74: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330A78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330A7C: nop

    // 0x80330A80: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80330A84: nop

    // 0x80330A88: bc1f        L_80330B30
    if (!c1cs) {
        // 0x80330A8C: nop
    
            goto L_80330B30;
    }
    // 0x80330A8C: nop

    // 0x80330A90: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330A94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330A98: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330A9C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80330AA0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80330AA4: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x80330AA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330AAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330AB0: jal         0x80027464
    // 0x80330AB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_27;
    // 0x80330AB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_27:
    // 0x80330AB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80330ABC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AC4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80330AC8: jal         0x80026F10
    // 0x80330ACC: nop

    func_80026F10(rdram, ctx);
        goto after_28;
    // 0x80330ACC: nop

    after_28:
    // 0x80330AD0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80330AD4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330AD8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330ADC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330AE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330AE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330AE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330AEC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330AF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AF4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330AF8: swc1        $f16, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f16.u32l;
    // 0x80330AFC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80330B00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B04: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330B08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B0C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330B10: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B14: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330B18: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330B1C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330B20: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330B24: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80330B28: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80330B2C: sh          $t5, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r13;
L_80330B30:
    // 0x80330B30: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80330B34: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330B38: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330B3C: lwc1        $f7, -0x4CA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4CA0);
    // 0x80330B40: lwc1        $f6, -0x4C9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C9C);
    // 0x80330B44: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80330B48: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x80330B4C: jal         0x80034970
    // 0x80330B50: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_29;
    // 0x80330B50: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_29:
    // 0x80330B54: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x80330B58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B5C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80330B60: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80330B64: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330B68: nop

    // 0x80330B6C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80330B70: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x80330B74: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80330B78: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330B7C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330B80: lwc1        $f9, -0x4C98($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4C98);
    // 0x80330B84: lwc1        $f8, -0x4C94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4C94);
    // 0x80330B88: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80330B8C: mul.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80330B90: jal         0x80036570
    // 0x80330B94: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_30;
    // 0x80330B94: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_30:
    // 0x80330B98: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x80330B9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330BA0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80330BA4: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330BA8: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330BAC: nop

    // 0x80330BB0: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80330BB4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80330BB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330BBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BC8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80330BCC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80330BD0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330BD4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330BD8: jal         0x800295C0
    // 0x80330BDC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_31;
    // 0x80330BDC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_31:
    // 0x80330BE0: beq         $v0, $zero, L_80330BF4
    if (ctx->r2 == 0) {
        // 0x80330BE4: nop
    
            goto L_80330BF4;
    }
    // 0x80330BE4: nop

    // 0x80330BE8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330BEC: b           L_80330C00
    // 0x80330BF0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
        goto L_80330C00;
    // 0x80330BF0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
L_80330BF4:
    // 0x80330BF4: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80330BF8: nop

    // 0x80330BFC: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
L_80330C00:
    // 0x80330C00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330C08: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330C0C: nop

    // 0x80330C10: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80330C14: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80330C18: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330C1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330C20: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330C24: nop

    // 0x80330C28: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80330C2C: nop

    // 0x80330C30: bc1f        L_80330D30
    if (!c1cs) {
        // 0x80330C34: nop
    
            goto L_80330D30;
    }
    // 0x80330C34: nop

    // 0x80330C38: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330C3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330C40: nop

    // 0x80330C44: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330C48: nop

    // 0x80330C4C: bc1f        L_80330D30
    if (!c1cs) {
        // 0x80330C50: nop
    
            goto L_80330D30;
    }
    // 0x80330C50: nop

    // 0x80330C54: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330C5C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330C60: nop

    // 0x80330C64: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80330C68: nop

    // 0x80330C6C: bc1f        L_80330D30
    if (!c1cs) {
        // 0x80330C70: nop
    
            goto L_80330D30;
    }
    // 0x80330C70: nop

    // 0x80330C74: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330C78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330C7C: nop

    // 0x80330C80: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80330C84: nop

    // 0x80330C88: bc1f        L_80330D30
    if (!c1cs) {
        // 0x80330C8C: nop
    
            goto L_80330D30;
    }
    // 0x80330C8C: nop

    // 0x80330C90: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330C94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330C98: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330C9C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80330CA0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80330CA4: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x80330CA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330CAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330CB0: jal         0x80027464
    // 0x80330CB4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_32;
    // 0x80330CB4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_32:
    // 0x80330CB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80330CBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CC4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80330CC8: jal         0x80026F10
    // 0x80330CCC: nop

    func_80026F10(rdram, ctx);
        goto after_33;
    // 0x80330CCC: nop

    after_33:
    // 0x80330CD0: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80330CD4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330CD8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330CDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330CE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330CE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330CE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330CEC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CF4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330CF8: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x80330CFC: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80330D00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D04: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330D08: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D0C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330D10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D14: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330D18: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330D1C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330D20: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330D24: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80330D28: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80330D2C: sh          $t6, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r14;
L_80330D30:
    // 0x80330D30: b           L_803315AC
    // 0x80330D34: nop

        goto L_803315AC;
    // 0x80330D34: nop

L_80330D38:
    // 0x80330D38: lui         $t7, 0x8034
    ctx->r15 = S32(0X8034 << 16);
    // 0x80330D3C: lw          $t7, -0x4D30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D30);
    // 0x80330D40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330D44: bne         $t7, $at, L_8033159C
    if (ctx->r15 != ctx->r1) {
        // 0x80330D48: nop
    
            goto L_8033159C;
    }
    // 0x80330D48: nop

    // 0x80330D4C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80330D50: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80330D54: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330D58: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330D5C: jal         0x80015538
    // 0x80330D60: nop

    Math_WrapAngle(rdram, ctx);
        goto after_34;
    // 0x80330D60: nop

    after_34:
    // 0x80330D64: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80330D68: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330D6C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330D70: lwc1        $f9, -0x4C90($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4C90);
    // 0x80330D74: lwc1        $f8, -0x4C8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4C8C);
    // 0x80330D78: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80330D7C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330D80: jal         0x80034970
    // 0x80330D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_35;
    // 0x80330D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_35:
    // 0x80330D88: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330D8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330D90: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80330D94: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80330D98: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80330D9C: nop

    // 0x80330DA0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330DA4: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80330DA8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330DAC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330DB0: lwc1        $f17, -0x4C88($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4C88);
    // 0x80330DB4: lwc1        $f16, -0x4C84($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4C84);
    // 0x80330DB8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80330DBC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80330DC0: jal         0x80036570
    // 0x80330DC4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_36;
    // 0x80330DC4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_36:
    // 0x80330DC8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330DCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330DD0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80330DD4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80330DD8: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330DDC: nop

    // 0x80330DE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330DE4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80330DE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330DEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330DF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DF8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80330DFC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80330E00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330E04: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80330E08: jal         0x800295C0
    // 0x80330E0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_37;
    // 0x80330E0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_37:
    // 0x80330E10: beq         $v0, $zero, L_80330E24
    if (ctx->r2 == 0) {
        // 0x80330E14: nop
    
            goto L_80330E24;
    }
    // 0x80330E14: nop

    // 0x80330E18: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330E1C: b           L_80330E30
    // 0x80330E20: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
        goto L_80330E30;
    // 0x80330E20: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_80330E24:
    // 0x80330E24: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80330E28: nop

    // 0x80330E2C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
L_80330E30:
    // 0x80330E30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330E34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330E38: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330E3C: nop

    // 0x80330E40: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330E44: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x80330E48: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330E4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330E50: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330E54: nop

    // 0x80330E58: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80330E5C: nop

    // 0x80330E60: bc1f        L_80330F60
    if (!c1cs) {
        // 0x80330E64: nop
    
            goto L_80330F60;
    }
    // 0x80330E64: nop

    // 0x80330E68: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330E6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330E70: nop

    // 0x80330E74: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80330E78: nop

    // 0x80330E7C: bc1f        L_80330F60
    if (!c1cs) {
        // 0x80330E80: nop
    
            goto L_80330F60;
    }
    // 0x80330E80: nop

    // 0x80330E84: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80330E88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330E8C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330E90: nop

    // 0x80330E94: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80330E98: nop

    // 0x80330E9C: bc1f        L_80330F60
    if (!c1cs) {
        // 0x80330EA0: nop
    
            goto L_80330F60;
    }
    // 0x80330EA0: nop

    // 0x80330EA4: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80330EA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330EAC: nop

    // 0x80330EB0: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80330EB4: nop

    // 0x80330EB8: bc1f        L_80330F60
    if (!c1cs) {
        // 0x80330EBC: nop
    
            goto L_80330F60;
    }
    // 0x80330EBC: nop

    // 0x80330EC0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330EC4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330EC8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330ECC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80330ED0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80330ED4: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x80330ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330EDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330EE0: jal         0x80027464
    // 0x80330EE4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_38;
    // 0x80330EE4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_38:
    // 0x80330EE8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80330EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EF4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80330EF8: jal         0x80026F10
    // 0x80330EFC: nop

    func_80026F10(rdram, ctx);
        goto after_39;
    // 0x80330EFC: nop

    after_39:
    // 0x80330F00: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80330F04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330F08: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330F0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330F10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330F14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330F18: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330F1C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F24: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330F28: swc1        $f6, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f6.u32l;
    // 0x80330F2C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80330F30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F34: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330F38: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330F3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330F40: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330F44: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330F48: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330F4C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80330F50: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330F54: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80330F58: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80330F5C: sh          $t8, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r24;
L_80330F60:
    // 0x80330F60: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80330F64: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330F68: lwc1        $f14, -0x4C80($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4C80);
    // 0x80330F6C: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330F70: jal         0x80015538
    // 0x80330F74: nop

    Math_WrapAngle(rdram, ctx);
        goto after_40;
    // 0x80330F74: nop

    after_40:
    // 0x80330F78: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80330F7C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330F80: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330F84: lwc1        $f17, -0x4C78($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4C78);
    // 0x80330F88: lwc1        $f16, -0x4C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4C74);
    // 0x80330F8C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80330F90: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80330F94: jal         0x80034970
    // 0x80330F98: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_41;
    // 0x80330F98: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_41:
    // 0x80330F9C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330FA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330FA4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80330FA8: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80330FAC: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80330FB0: nop

    // 0x80330FB4: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80330FB8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80330FBC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330FC0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330FC4: lwc1        $f19, -0x4C70($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4C70);
    // 0x80330FC8: lwc1        $f18, -0x4C6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4C6C);
    // 0x80330FCC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80330FD0: mul.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x80330FD4: jal         0x80036570
    // 0x80330FD8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_42;
    // 0x80330FD8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_42:
    // 0x80330FDC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330FE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330FE4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80330FE8: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330FEC: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330FF0: nop

    // 0x80330FF4: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80330FF8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80330FFC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331000: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033100C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80331010: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80331014: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331018: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033101C: jal         0x800295C0
    // 0x80331020: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_43;
    // 0x80331020: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_43:
    // 0x80331024: beq         $v0, $zero, L_80331038
    if (ctx->r2 == 0) {
        // 0x80331028: nop
    
            goto L_80331038;
    }
    // 0x80331028: nop

    // 0x8033102C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80331030: b           L_80331044
    // 0x80331034: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
        goto L_80331044;
    // 0x80331034: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
L_80331038:
    // 0x80331038: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8033103C: nop

    // 0x80331040: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
L_80331044:
    // 0x80331044: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033104C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331050: nop

    // 0x80331054: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80331058: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x8033105C: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80331060: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331064: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80331068: nop

    // 0x8033106C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80331070: nop

    // 0x80331074: bc1f        L_80331174
    if (!c1cs) {
        // 0x80331078: nop
    
            goto L_80331174;
    }
    // 0x80331078: nop

    // 0x8033107C: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80331080: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331084: nop

    // 0x80331088: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033108C: nop

    // 0x80331090: bc1f        L_80331174
    if (!c1cs) {
        // 0x80331094: nop
    
            goto L_80331174;
    }
    // 0x80331094: nop

    // 0x80331098: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033109C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803310A0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803310A4: nop

    // 0x803310A8: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x803310AC: nop

    // 0x803310B0: bc1f        L_80331174
    if (!c1cs) {
        // 0x803310B4: nop
    
            goto L_80331174;
    }
    // 0x803310B4: nop

    // 0x803310B8: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803310BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803310C0: nop

    // 0x803310C4: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803310C8: nop

    // 0x803310CC: bc1f        L_80331174
    if (!c1cs) {
        // 0x803310D0: nop
    
            goto L_80331174;
    }
    // 0x803310D0: nop

    // 0x803310D4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803310D8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803310DC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803310E0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x803310E4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x803310E8: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x803310EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803310F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803310F4: jal         0x80027464
    // 0x803310F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_44;
    // 0x803310F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_44:
    // 0x803310FC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80331100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331108: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8033110C: jal         0x80026F10
    // 0x80331110: nop

    func_80026F10(rdram, ctx);
        goto after_45;
    // 0x80331110: nop

    after_45:
    // 0x80331114: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80331118: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033111C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331120: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331124: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331128: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033112C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331130: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331134: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331138: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033113C: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x80331140: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80331144: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331148: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033114C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331150: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331154: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331158: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033115C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331160: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80331164: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x80331168: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8033116C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80331170: sh          $t8, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r24;
L_80331174:
    // 0x80331174: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80331178: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033117C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331180: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331184: jal         0x80015538
    // 0x80331188: nop

    Math_WrapAngle(rdram, ctx);
        goto after_46;
    // 0x80331188: nop

    after_46:
    // 0x8033118C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80331190: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331194: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331198: lwc1        $f19, -0x4C68($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4C68);
    // 0x8033119C: lwc1        $f18, -0x4C64($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4C64);
    // 0x803311A0: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x803311A4: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803311A8: jal         0x80034970
    // 0x803311AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_47;
    // 0x803311AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_47:
    // 0x803311B0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803311B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803311B8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x803311BC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x803311C0: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803311C4: nop

    // 0x803311C8: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x803311CC: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x803311D0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803311D4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803311D8: lwc1        $f7, -0x4C60($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4C60);
    // 0x803311DC: lwc1        $f6, -0x4C5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C5C);
    // 0x803311E0: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x803311E4: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x803311E8: jal         0x80036570
    // 0x803311EC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_48;
    // 0x803311EC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_48:
    // 0x803311F0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803311F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803311F8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x803311FC: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331200: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331204: nop

    // 0x80331208: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033120C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80331210: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331214: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033121C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331220: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80331224: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80331228: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033122C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331230: jal         0x800295C0
    // 0x80331234: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_49;
    // 0x80331234: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_49:
    // 0x80331238: beq         $v0, $zero, L_8033124C
    if (ctx->r2 == 0) {
        // 0x8033123C: nop
    
            goto L_8033124C;
    }
    // 0x8033123C: nop

    // 0x80331240: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80331244: b           L_80331258
    // 0x80331248: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
        goto L_80331258;
    // 0x80331248: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_8033124C:
    // 0x8033124C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80331250: nop

    // 0x80331254: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
L_80331258:
    // 0x80331258: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033125C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331260: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331264: nop

    // 0x80331268: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8033126C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80331270: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80331274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331278: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033127C: nop

    // 0x80331280: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80331284: nop

    // 0x80331288: bc1f        L_80331388
    if (!c1cs) {
        // 0x8033128C: nop
    
            goto L_80331388;
    }
    // 0x8033128C: nop

    // 0x80331290: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80331294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331298: nop

    // 0x8033129C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x803312A0: nop

    // 0x803312A4: bc1f        L_80331388
    if (!c1cs) {
        // 0x803312A8: nop
    
            goto L_80331388;
    }
    // 0x803312A8: nop

    // 0x803312AC: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x803312B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803312B4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803312B8: nop

    // 0x803312BC: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x803312C0: nop

    // 0x803312C4: bc1f        L_80331388
    if (!c1cs) {
        // 0x803312C8: nop
    
            goto L_80331388;
    }
    // 0x803312C8: nop

    // 0x803312CC: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803312D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803312D4: nop

    // 0x803312D8: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x803312DC: nop

    // 0x803312E0: bc1f        L_80331388
    if (!c1cs) {
        // 0x803312E4: nop
    
            goto L_80331388;
    }
    // 0x803312E4: nop

    // 0x803312E8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803312EC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803312F0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803312F4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x803312F8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x803312FC: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x80331300: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331304: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331308: jal         0x80027464
    // 0x8033130C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_50;
    // 0x8033130C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_50:
    // 0x80331310: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80331314: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331318: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033131C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80331320: jal         0x80026F10
    // 0x80331324: nop

    func_80026F10(rdram, ctx);
        goto after_51;
    // 0x80331324: nop

    after_51:
    // 0x80331328: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8033132C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80331330: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331334: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331338: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033133C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331340: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331344: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331348: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033134C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331350: swc1        $f16, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f16.u32l;
    // 0x80331354: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80331358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033135C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331360: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331364: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331368: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033136C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331370: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331374: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80331378: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x8033137C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80331380: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80331384: sh          $t8, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r24;
L_80331388:
    // 0x80331388: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033138C: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80331390: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331394: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331398: jal         0x80015538
    // 0x8033139C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_52;
    // 0x8033139C: nop

    after_52:
    // 0x803313A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x803313A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803313A8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803313AC: lwc1        $f7, -0x4C58($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4C58);
    // 0x803313B0: lwc1        $f6, -0x4C54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C54);
    // 0x803313B4: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x803313B8: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x803313BC: jal         0x80034970
    // 0x803313C0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_53;
    // 0x803313C0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_53:
    // 0x803313C4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803313C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803313CC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x803313D0: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x803313D4: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803313D8: nop

    // 0x803313DC: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x803313E0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x803313E4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803313E8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803313EC: lwc1        $f9, -0x4C50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4C50);
    // 0x803313F0: lwc1        $f8, -0x4C4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4C4C);
    // 0x803313F4: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x803313F8: mul.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x803313FC: jal         0x80036570
    // 0x80331400: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_54;
    // 0x80331400: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_54:
    // 0x80331404: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80331408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033140C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80331410: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80331414: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331418: nop

    // 0x8033141C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80331420: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80331424: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331428: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033142C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331434: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80331438: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x8033143C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331440: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331444: jal         0x800295C0
    // 0x80331448: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_55;
    // 0x80331448: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_55:
    // 0x8033144C: beq         $v0, $zero, L_80331460
    if (ctx->r2 == 0) {
        // 0x80331450: nop
    
            goto L_80331460;
    }
    // 0x80331450: nop

    // 0x80331454: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80331458: b           L_8033146C
    // 0x8033145C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
        goto L_8033146C;
    // 0x8033145C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
L_80331460:
    // 0x80331460: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80331464: nop

    // 0x80331468: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
L_8033146C:
    // 0x8033146C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331470: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331474: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331478: nop

    // 0x8033147C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80331480: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80331484: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80331488: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033148C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80331490: nop

    // 0x80331494: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80331498: nop

    // 0x8033149C: bc1f        L_8033159C
    if (!c1cs) {
        // 0x803314A0: nop
    
            goto L_8033159C;
    }
    // 0x803314A0: nop

    // 0x803314A4: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803314A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803314AC: nop

    // 0x803314B0: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803314B4: nop

    // 0x803314B8: bc1f        L_8033159C
    if (!c1cs) {
        // 0x803314BC: nop
    
            goto L_8033159C;
    }
    // 0x803314BC: nop

    // 0x803314C0: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x803314C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803314C8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803314CC: nop

    // 0x803314D0: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x803314D4: nop

    // 0x803314D8: bc1f        L_8033159C
    if (!c1cs) {
        // 0x803314DC: nop
    
            goto L_8033159C;
    }
    // 0x803314DC: nop

    // 0x803314E0: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803314E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803314E8: nop

    // 0x803314EC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x803314F0: nop

    // 0x803314F4: bc1f        L_8033159C
    if (!c1cs) {
        // 0x803314F8: nop
    
            goto L_8033159C;
    }
    // 0x803314F8: nop

    // 0x803314FC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80331500: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331504: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331508: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8033150C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80331510: addiu       $a1, $a1, -0x4D44
    ctx->r5 = ADD32(ctx->r5, -0X4D44);
    // 0x80331514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331518: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033151C: jal         0x80027464
    // 0x80331520: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_56;
    // 0x80331520: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_56:
    // 0x80331524: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80331528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033152C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331530: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80331534: jal         0x80026F10
    // 0x80331538: nop

    func_80026F10(rdram, ctx);
        goto after_57;
    // 0x80331538: nop

    after_57:
    // 0x8033153C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80331540: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80331544: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331548: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033154C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331550: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331554: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331558: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033155C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331560: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331564: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x80331568: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8033156C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331570: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80331574: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331578: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033157C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331580: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331584: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331588: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033158C: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x80331590: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80331594: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80331598: sh          $t8, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r24;
L_8033159C:
    // 0x8033159C: b           L_803315AC
    // 0x803315A0: nop

        goto L_803315AC;
    // 0x803315A0: nop

L_803315A4:
    // 0x803315A4: b           L_803315AC
    // 0x803315A8: nop

        goto L_803315AC;
    // 0x803315A8: nop

L_803315AC:
    // 0x803315AC: b           L_803315B4
    // 0x803315B0: nop

        goto L_803315B4;
    // 0x803315B0: nop

L_803315B4:
    // 0x803315B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803315B8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803315BC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803315C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803315C4: jr          $ra
    // 0x803315C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803315C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80335758_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335758: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033575C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335760: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335764: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335768: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033576C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335774: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033577C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335780: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335784: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335788: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033578C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335790: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335794: jal         0x8001B4AC
    // 0x80335798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80335798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033579C: beq         $v0, $zero, L_80335800
    if (ctx->r2 == 0) {
        // 0x803357A0: nop
    
            goto L_80335800;
    }
    // 0x803357A0: nop

    // 0x803357A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803357A8: nop

    // 0x803357AC: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x803357B0: nop

    // 0x803357B4: bne         $t1, $zero, L_803357CC
    if (ctx->r9 != 0) {
        // 0x803357B8: nop
    
            goto L_803357CC;
    }
    // 0x803357B8: nop

    // 0x803357BC: jal         0x80337F68
    // 0x803357C0: nop

    func_80337F68_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803357C0: nop

    after_1:
    // 0x803357C4: b           L_80335800
    // 0x803357C8: nop

        goto L_80335800;
    // 0x803357C8: nop

L_803357CC:
    // 0x803357CC: jal         0x80336B9C
    // 0x803357D0: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x803357D0: nop

    after_2:
    // 0x803357D4: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x803357D8: lh          $t2, -0x4D14($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X4D14);
    // 0x803357DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803357E0: bne         $t2, $at, L_803357F4
    if (ctx->r10 != ctx->r1) {
        // 0x803357E4: nop
    
            goto L_803357F4;
    }
    // 0x803357E4: nop

    // 0x803357E8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803357EC: b           L_80335800
    // 0x803357F0: sh          $zero, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = 0;
        goto L_80335800;
    // 0x803357F0: sh          $zero, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = 0;
L_803357F4:
    // 0x803357F4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803357F8: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x803357FC: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80335800:
    // 0x80335800: b           L_80335808
    // 0x80335804: nop

        goto L_80335808;
    // 0x80335804: nop

L_80335808:
    // 0x80335808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033580C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335810: jr          $ra
    // 0x80335814: nop

    return;
    // 0x80335814: nop

;}
RECOMP_FUNC void func_803329F8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803329F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803329FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332A28: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332A2C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A30: nop

    // 0x80332A34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332A38: nop

    // 0x80332A3C: bne         $t1, $zero, L_80332A94
    if (ctx->r9 != 0) {
        // 0x80332A40: nop
    
            goto L_80332A94;
    }
    // 0x80332A40: nop

    // 0x80332A44: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A48: nop

    // 0x80332A4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332A50: nop

    // 0x80332A54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332A58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332A5C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A60: nop

    // 0x80332A64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332A68: nop

    // 0x80332A6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332A70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332A74: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A78: nop

    // 0x80332A7C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332A80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A88: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80332A8C: jal         0x80029EF8
    // 0x80332A90: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80332A90: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
L_80332A94:
    // 0x80332A94: b           L_80332A9C
    // 0x80332A98: nop

        goto L_80332A9C;
    // 0x80332A98: nop

L_80332A9C:
    // 0x80332A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332AA4: jr          $ra
    // 0x80332AA8: nop

    return;
    // 0x80332AA8: nop

;}
RECOMP_FUNC void func_803342D0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803342D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803342D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803342D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803342DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803342E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803342E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803342E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803342F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803342F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803342FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334300: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334304: jal         0x80335F28
    // 0x80334308: nop

    func_80335F28_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80334308: nop

    after_0:
    // 0x8033430C: b           L_80334314
    // 0x80334310: nop

        goto L_80334314;
    // 0x80334310: nop

L_80334314:
    // 0x80334314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033431C: jr          $ra
    // 0x80334320: nop

    return;
    // 0x80334320: nop

;}
RECOMP_FUNC void func_80336B9C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336B9C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336BA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336BA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336BA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336BAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336BB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336BB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336BC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336BC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336BC8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336BCC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80336BD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336BD4: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80336BD8: nop

    // 0x80336BDC: bne         $t1, $at, L_80336C04
    if (ctx->r9 != ctx->r1) {
        // 0x80336BE0: nop
    
            goto L_80336C04;
    }
    // 0x80336BE0: nop

    // 0x80336BE4: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x80336BE8: lw          $t2, -0x4D30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4D30);
    // 0x80336BEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336BF0: bne         $t2, $at, L_80336C04
    if (ctx->r10 != ctx->r1) {
        // 0x80336BF4: nop
    
            goto L_80336C04;
    }
    // 0x80336BF4: nop

    // 0x80336BF8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80336BFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80336C00: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80336C04:
    // 0x80336C04: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80336C08: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80336C0C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80336C10: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80336C14: nop

    // 0x80336C18: sh          $zero, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = 0;
    // 0x80336C1C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80336C20: nop

    // 0x80336C24: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x80336C28: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80336C2C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80336C30: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80336C34: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336C38: nop

    // 0x80336C3C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80336C40: b           L_80336C48
    // 0x80336C44: nop

        goto L_80336C48;
    // 0x80336C44: nop

L_80336C48:
    // 0x80336C48: jr          $ra
    // 0x80336C4C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336C4C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80337D90_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337D98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337D9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337DA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337DA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337DA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337DAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337DB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337DB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337DB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337DBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337DC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337DC8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80337DCC: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80337DD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337DD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80337DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337DDC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80337DE0: jal         0x8001C0EC
    // 0x80337DE4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337DE4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80337DE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337DEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337DF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337DF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80337DFC: jal         0x800175F0
    // 0x80337E00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80337E00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80337E04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E0C: jal         0x8001BBDC
    // 0x80337E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80337E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80337E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E18: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337E1C: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80337E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E24: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80337E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337E2C: jal         0x8001ABF4
    // 0x80337E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80337E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80337E34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337E38: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x80337E3C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80337E40: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80337E44: nop

    // 0x80337E48: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80337E4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337E50: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80337E54: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80337E58: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337E5C: nop

    // 0x80337E60: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x80337E64: b           L_80337E6C
    // 0x80337E68: nop

        goto L_80337E6C;
    // 0x80337E68: nop

L_80337E6C:
    // 0x80337E6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337E70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337E74: jr          $ra
    // 0x80337E78: nop

    return;
    // 0x80337E78: nop

;}
RECOMP_FUNC void func_8033475C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033475C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334768: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033476C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334770: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334774: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334778: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033477C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334780: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334784: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334788: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033478C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334798: jal         0x8001B4AC
    // 0x8033479C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x8033479C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803347A0: beq         $v0, $zero, L_803347BC
    if (ctx->r2 == 0) {
        // 0x803347A4: nop
    
            goto L_803347BC;
    }
    // 0x803347A4: nop

    // 0x803347A8: jal         0x80336B9C
    // 0x803347AC: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803347AC: nop

    after_1:
    // 0x803347B0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803347B4: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x803347B8: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_803347BC:
    // 0x803347BC: b           L_803347C4
    // 0x803347C0: nop

        goto L_803347C4;
    // 0x803347C0: nop

L_803347C4:
    // 0x803347C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803347C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803347CC: jr          $ra
    // 0x803347D0: nop

    return;
    // 0x803347D0: nop

;}
RECOMP_FUNC void func_80332C6C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332C74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332C78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332C7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332C80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332C84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332C98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C9C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332CA0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CA4: nop

    // 0x80332CA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CAC: nop

    // 0x80332CB0: bne         $t1, $zero, L_80332D08
    if (ctx->r9 != 0) {
        // 0x80332CB4: nop
    
            goto L_80332D08;
    }
    // 0x80332CB4: nop

    // 0x80332CB8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CBC: nop

    // 0x80332CC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332CC4: nop

    // 0x80332CC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332CCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332CD0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CD4: nop

    // 0x80332CD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332CDC: nop

    // 0x80332CE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332CE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332CE8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CEC: nop

    // 0x80332CF0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332CF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CFC: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x80332D00: jal         0x80029EF8
    // 0x80332D04: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80332D04: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
L_80332D08:
    // 0x80332D08: b           L_80332D10
    // 0x80332D0C: nop

        goto L_80332D10;
    // 0x80332D0C: nop

L_80332D10:
    // 0x80332D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332D18: jr          $ra
    // 0x80332D1C: nop

    return;
    // 0x80332D1C: nop

;}
RECOMP_FUNC void func_80338738_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033873C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338740: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338744: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338748: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033874C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338754: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338758: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033875C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338760: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338764: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338768: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033876C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80338770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338774: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80338778: nop

    // 0x8033877C: bne         $t1, $at, L_8033879C
    if (ctx->r9 != ctx->r1) {
        // 0x80338780: nop
    
            goto L_8033879C;
    }
    // 0x80338780: nop

    // 0x80338784: b           L_8033878C
    // 0x80338788: nop

        goto L_8033878C;
    // 0x80338788: nop

L_8033878C:
    // 0x8033878C: jal         0x80338500
    // 0x80338790: nop

    func_80338500_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80338790: nop

    after_0:
    // 0x80338794: b           L_803387A4
    // 0x80338798: nop

        goto L_803387A4;
    // 0x80338798: nop

L_8033879C:
    // 0x8033879C: b           L_803387A4
    // 0x803387A0: nop

        goto L_803387A4;
    // 0x803387A0: nop

L_803387A4:
    // 0x803387A4: b           L_803387AC
    // 0x803387A8: nop

        goto L_803387AC;
    // 0x803387A8: nop

L_803387AC:
    // 0x803387AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803387B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803387B4: jr          $ra
    // 0x803387B8: nop

    return;
    // 0x803387B8: nop

;}
RECOMP_FUNC void func_803327B4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803327B4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803327B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803327BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803327C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803327C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803327C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803327D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803327D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803327DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803327E0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803327E4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803327E8: nop

    // 0x803327EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803327F0: nop

    // 0x803327F4: bne         $t1, $zero, L_80332834
    if (ctx->r9 != 0) {
        // 0x803327F8: nop
    
            goto L_80332834;
    }
    // 0x803327F8: nop

    // 0x803327FC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80332800: nop

    // 0x80332804: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332808: nop

    // 0x8033280C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332810: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332814: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80332818: nop

    // 0x8033281C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332820: nop

    // 0x80332824: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332828: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033282C: b           L_80332898
    // 0x80332830: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
        goto L_80332898;
    // 0x80332830: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
L_80332834:
    // 0x80332834: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80332838: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033283C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80332840: nop

    // 0x80332844: bne         $t9, $at, L_80332898
    if (ctx->r25 != ctx->r1) {
        // 0x80332848: nop
    
            goto L_80332898;
    }
    // 0x80332848: nop

    // 0x8033284C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332854: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332858: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8033285C: nop

    // 0x80332860: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332864: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x80332868: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033286C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332870: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332874: nop

    // 0x80332878: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033287C: nop

    // 0x80332880: bc1f        L_80332898
    if (!c1cs) {
        // 0x80332884: nop
    
            goto L_80332898;
    }
    // 0x80332884: nop

    // 0x80332888: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033288C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80332890: nop

    // 0x80332894: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
L_80332898:
    // 0x80332898: b           L_803328A0
    // 0x8033289C: nop

        goto L_803328A0;
    // 0x8033289C: nop

L_803328A0:
    // 0x803328A0: jr          $ra
    // 0x803328A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803328A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80336DDC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336DDC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80336DE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80336DE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80336DE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336DEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336DF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336DF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336DF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336DFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336E00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336E08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336E0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336E10: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80336E14: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E18: nop

    // 0x80336E1C: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80336E20: nop

    // 0x80336E24: bne         $t1, $zero, L_80336F24
    if (ctx->r9 != 0) {
        // 0x80336E28: nop
    
            goto L_80336F24;
    }
    // 0x80336E28: nop

    // 0x80336E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336E30: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80336E34: addiu       $t2, $t2, -0x52A0
    ctx->r10 = ADD32(ctx->r10, -0X52A0);
    // 0x80336E38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336E3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80336E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336E44: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x80336E48: jal         0x8001C0EC
    // 0x80336E4C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336E4C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80336E50: lui         $t3, 0x8034
    ctx->r11 = S32(0X8034 << 16);
    // 0x80336E54: lh          $t3, -0x4D18($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X4D18);
    // 0x80336E58: nop

    // 0x80336E5C: bne         $t3, $zero, L_80336F14
    if (ctx->r11 != 0) {
        // 0x80336E60: nop
    
            goto L_80336F14;
    }
    // 0x80336E60: nop

    // 0x80336E64: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E68: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80336E6C: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80336E70: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80336E74: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x80336E78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336E7C: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80336E80: addiu       $a1, $a1, -0x4D50
    ctx->r5 = ADD32(ctx->r5, -0X4D50);
    // 0x80336E84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80336E88: jal         0x80027464
    // 0x80336E8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80336E8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80336E90: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80336E94: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80336E98: addiu       $t5, $t5, -0x4F68
    ctx->r13 = ADD32(ctx->r13, -0X4F68);
    // 0x80336E9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EA0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80336EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336EA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336EAC: jal         0x8001C0EC
    // 0x80336EB0: addiu       $a3, $zero, 0x134
    ctx->r7 = ADD32(0, 0X134);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80336EB0: addiu       $a3, $zero, 0x134
    ctx->r7 = ADD32(0, 0X134);
    after_2:
    // 0x80336EB4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336EBC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80336EC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336EC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80336EC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336ECC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336ED0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80336ED4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336ED8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80336EDC: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80336EE0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336EE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80336EEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80336EF0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80336EF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80336EF8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80336EFC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80336F00: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80336F04: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80336F08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336F0C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80336F10: sh          $t2, -0x4D18($at)
    MEM_H(-0X4D18, ctx->r1) = ctx->r10;
L_80336F14:
    // 0x80336F14: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336F18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80336F1C: b           L_80337384
    // 0x80336F20: sh          $t3, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r11;
        goto L_80337384;
    // 0x80336F20: sh          $t3, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r11;
L_80336F24:
    // 0x80336F24: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80336F28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336F2C: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x80336F30: nop

    // 0x80336F34: bne         $t7, $at, L_80336F88
    if (ctx->r15 != ctx->r1) {
        // 0x80336F38: nop
    
            goto L_80336F88;
    }
    // 0x80336F38: nop

    // 0x80336F3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F44: jal         0x8001B62C
    // 0x80336F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80336F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80336F4C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80336F50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336F54: nop

    // 0x80336F58: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80336F5C: nop

    // 0x80336F60: bc1f        L_80336F80
    if (!c1cs) {
        // 0x80336F64: nop
    
            goto L_80336F80;
    }
    // 0x80336F64: nop

    // 0x80336F68: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80336F6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80336F70: sb          $t6, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r14;
    // 0x80336F74: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80336F78: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80336F7C: sh          $t0, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r8;
L_80336F80:
    // 0x80336F80: b           L_80337384
    // 0x80336F84: nop

        goto L_80337384;
    // 0x80336F84: nop

L_80336F88:
    // 0x80336F88: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x80336F8C: lh          $t1, -0x4D20($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X4D20);
    // 0x80336F90: nop

    // 0x80336F94: bne         $t1, $zero, L_8033716C
    if (ctx->r9 != 0) {
        // 0x80336F98: nop
    
            goto L_8033716C;
    }
    // 0x80336F98: nop

    // 0x80336F9C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FA0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80336FA4: lh          $t3, 0x106($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X106);
    // 0x80336FA8: nop

    // 0x80336FAC: bne         $t3, $at, L_8033716C
    if (ctx->r11 != ctx->r1) {
        // 0x80336FB0: nop
    
            goto L_8033716C;
    }
    // 0x80336FB0: nop

    // 0x80336FB4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FB8: nop

    // 0x80336FBC: lh          $t5, 0x104($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X104);
    // 0x80336FC0: nop

    // 0x80336FC4: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80336FC8: beq         $at, $zero, L_80336FDC
    if (ctx->r1 == 0) {
        // 0x80336FCC: nop
    
            goto L_80336FDC;
    }
    // 0x80336FCC: nop

    // 0x80336FD0: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x80336FD4: beq         $at, $zero, L_8033716C
    if (ctx->r1 == 0) {
        // 0x80336FD8: nop
    
            goto L_8033716C;
    }
    // 0x80336FD8: nop

L_80336FDC:
    // 0x80336FDC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FE0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80336FE4: lh          $t6, 0x104($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X104);
    // 0x80336FE8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80336FEC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80336FF0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80336FF4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80336FF8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80336FFC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80337000: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80337004: lh          $t0, 0x4254($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4254);
    // 0x80337008: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033700C: nop

    // 0x80337010: bne         $t0, $t9, L_8033716C
    if (ctx->r8 != ctx->r25) {
        // 0x80337014: nop
    
            goto L_8033716C;
    }
    // 0x80337014: nop

    // 0x80337018: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033701C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80337020: lh          $t2, 0x104($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X104);
    // 0x80337024: nop

    // 0x80337028: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033702C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80337030: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80337034: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80337038: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033703C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337040: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x80337044: nop

    // 0x80337048: addiu       $t5, $t4, -0x26
    ctx->r13 = ADD32(ctx->r12, -0X26);
    // 0x8033704C: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x80337050: beq         $at, $zero, L_80337164
    if (ctx->r1 == 0) {
        // 0x80337054: nop
    
            goto L_80337164;
    }
    // 0x80337054: nop

    // 0x80337058: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033705C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337060: addu        $at, $at, $t5
    gpr jr_addend_8033706C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80337064: lw          $t5, -0x4B30($at)
    ctx->r13 = ADD32(ctx->r1, -0X4B30);
    // 0x80337068: nop

    // 0x8033706C: jr          $t5
    // 0x80337070: nop

    switch (jr_addend_8033706C >> 2) {
        case 0: goto L_80337074; break;
        case 1: goto L_80337074; break;
        case 2: goto L_803370C4; break;
        case 3: goto L_803370C4; break;
        case 4: goto L_80337114; break;
        default: switch_error(__func__, 0x8033706C, 0x8033B4D0);
    }
    // 0x80337070: nop

L_80337074:
    // 0x80337074: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337078: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033707C: lh          $a0, 0x104($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X104);
    // 0x80337080: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80337084: jal         0x8007BBD8
    // 0x80337088: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8007BBD8(rdram, ctx);
        goto after_4;
    // 0x80337088: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_4:
    // 0x8033708C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337090: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337098: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033709C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803370A0: jal         0x800175F0
    // 0x803370A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x803370A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x803370A8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x803370AC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803370B0: sh          $t6, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r14;
    // 0x803370B4: jal         0x8033688C
    // 0x803370B8: nop

    func_8033688C_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x803370B8: nop

    after_6:
    // 0x803370BC: b           L_8033716C
    // 0x803370C0: nop

        goto L_8033716C;
    // 0x803370C0: nop

L_803370C4:
    // 0x803370C4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803370C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803370CC: lh          $a0, 0x104($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X104);
    // 0x803370D0: lw          $a3, 0x3C($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X3C);
    // 0x803370D4: jal         0x8007BBD8
    // 0x803370D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8007BBD8(rdram, ctx);
        goto after_7;
    // 0x803370D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x803370DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803370E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803370E8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803370EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803370F0: jal         0x800175F0
    // 0x803370F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x803370F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x803370F8: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x803370FC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337100: sh          $t0, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r8;
    // 0x80337104: jal         0x8033688C
    // 0x80337108: nop

    func_8033688C_unk_bin_16(rdram, ctx);
        goto after_9;
    // 0x80337108: nop

    after_9:
    // 0x8033710C: b           L_8033716C
    // 0x80337110: nop

        goto L_8033716C;
    // 0x80337110: nop

L_80337114:
    // 0x80337114: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337118: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x8033711C: lh          $a0, 0x104($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X104);
    // 0x80337120: lw          $a3, 0x3C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X3C);
    // 0x80337124: jal         0x8007BBD8
    // 0x80337128: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8007BBD8(rdram, ctx);
        goto after_10;
    // 0x80337128: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_10:
    // 0x8033712C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337138: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033713C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80337140: jal         0x800175F0
    // 0x80337144: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x80337144: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80337148: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x8033714C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337150: sh          $t1, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r9;
    // 0x80337154: jal         0x8033688C
    // 0x80337158: nop

    func_8033688C_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x80337158: nop

    after_12:
    // 0x8033715C: b           L_8033716C
    // 0x80337160: nop

        goto L_8033716C;
    // 0x80337160: nop

L_80337164:
    // 0x80337164: b           L_8033716C
    // 0x80337168: nop

        goto L_8033716C;
    // 0x80337168: nop

L_8033716C:
    // 0x8033716C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337174: jal         0x8001B4AC
    // 0x80337178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x80337178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8033717C: beq         $v0, $zero, L_80337384
    if (ctx->r2 == 0) {
        // 0x80337180: nop
    
            goto L_80337384;
    }
    // 0x80337180: nop

    // 0x80337184: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337188: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033718C: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x80337190: nop

    // 0x80337194: bne         $t3, $at, L_803371BC
    if (ctx->r11 != ctx->r1) {
        // 0x80337198: nop
    
            goto L_803371BC;
    }
    // 0x80337198: nop

    // 0x8033719C: lui         $t4, 0x8034
    ctx->r12 = S32(0X8034 << 16);
    // 0x803371A0: lw          $t4, -0x4D30($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4D30);
    // 0x803371A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803371A8: bne         $t4, $at, L_803371BC
    if (ctx->r12 != ctx->r1) {
        // 0x803371AC: nop
    
            goto L_803371BC;
    }
    // 0x803371AC: nop

    // 0x803371B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803371B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803371B8: sh          $t5, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r13;
L_803371BC:
    // 0x803371BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803371C0: nop

    // 0x803371C4: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803371C8: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803371CC: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x803371D0: jal         0x803360CC
    // 0x803371D4: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x803371D4: nop

    after_14:
    // 0x803371D8: sb          $v0, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r2;
    // 0x803371DC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803371E0: nop

    // 0x803371E4: lh          $t0, 0xB8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB8);
    // 0x803371E8: nop

    // 0x803371EC: bne         $t0, $zero, L_8033737C
    if (ctx->r8 != 0) {
        // 0x803371F0: nop
    
            goto L_8033737C;
    }
    // 0x803371F0: nop

    // 0x803371F4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803371F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803371FC: lh          $t1, 0x108($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X108);
    // 0x80337200: nop

    // 0x80337204: bne         $t1, $at, L_803372C4
    if (ctx->r9 != ctx->r1) {
        // 0x80337208: nop
    
            goto L_803372C4;
    }
    // 0x80337208: nop

    // 0x8033720C: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x80337210: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80337214: beq         $s0, $at, L_80337248
    if (ctx->r16 == ctx->r1) {
        // 0x80337218: nop
    
            goto L_80337248;
    }
    // 0x80337218: nop

    // 0x8033721C: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80337220: beq         $s0, $at, L_8033729C
    if (ctx->r16 == ctx->r1) {
        // 0x80337224: nop
    
            goto L_8033729C;
    }
    // 0x80337224: nop

    // 0x80337228: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x8033722C: beq         $s0, $at, L_8033729C
    if (ctx->r16 == ctx->r1) {
        // 0x80337230: nop
    
            goto L_8033729C;
    }
    // 0x80337230: nop

    // 0x80337234: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80337238: beq         $s0, $at, L_8033729C
    if (ctx->r16 == ctx->r1) {
        // 0x8033723C: nop
    
            goto L_8033729C;
    }
    // 0x8033723C: nop

    // 0x80337240: b           L_803372AC
    // 0x80337244: nop

        goto L_803372AC;
    // 0x80337244: nop

L_80337248:
    // 0x80337248: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033724C: nop

    // 0x80337250: lh          $t3, 0xBA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBA);
    // 0x80337254: nop

    // 0x80337258: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8033725C: beq         $at, $zero, L_80337274
    if (ctx->r1 == 0) {
        // 0x80337260: nop
    
            goto L_80337274;
    }
    // 0x80337260: nop

    // 0x80337264: jal         0x80336284
    // 0x80337268: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_15;
    // 0x80337268: nop

    after_15:
    // 0x8033726C: b           L_80337294
    // 0x80337270: nop

        goto L_80337294;
    // 0x80337270: nop

L_80337274:
    // 0x80337274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033727C: jal         0x8001B4AC
    // 0x80337280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_16;
    // 0x80337280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80337284: beq         $v0, $zero, L_80337294
    if (ctx->r2 == 0) {
        // 0x80337288: nop
    
            goto L_80337294;
    }
    // 0x80337288: nop

    // 0x8033728C: jal         0x80336B9C
    // 0x80337290: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_17;
    // 0x80337290: nop

    after_17:
L_80337294:
    // 0x80337294: b           L_803372BC
    // 0x80337298: nop

        goto L_803372BC;
    // 0x80337298: nop

L_8033729C:
    // 0x8033729C: jal         0x80336284
    // 0x803372A0: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_18;
    // 0x803372A0: nop

    after_18:
    // 0x803372A4: b           L_803372BC
    // 0x803372A8: nop

        goto L_803372BC;
    // 0x803372A8: nop

L_803372AC:
    // 0x803372AC: jal         0x80336B9C
    // 0x803372B0: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_19;
    // 0x803372B0: nop

    after_19:
    // 0x803372B4: b           L_803372BC
    // 0x803372B8: nop

        goto L_803372BC;
    // 0x803372B8: nop

L_803372BC:
    // 0x803372BC: b           L_80337374
    // 0x803372C0: nop

        goto L_80337374;
    // 0x803372C0: nop

L_803372C4:
    // 0x803372C4: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x803372C8: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x803372CC: beq         $s0, $at, L_80337300
    if (ctx->r16 == ctx->r1) {
        // 0x803372D0: nop
    
            goto L_80337300;
    }
    // 0x803372D0: nop

    // 0x803372D4: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x803372D8: beq         $s0, $at, L_80337354
    if (ctx->r16 == ctx->r1) {
        // 0x803372DC: nop
    
            goto L_80337354;
    }
    // 0x803372DC: nop

    // 0x803372E0: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x803372E4: beq         $s0, $at, L_80337354
    if (ctx->r16 == ctx->r1) {
        // 0x803372E8: nop
    
            goto L_80337354;
    }
    // 0x803372E8: nop

    // 0x803372EC: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x803372F0: beq         $s0, $at, L_80337354
    if (ctx->r16 == ctx->r1) {
        // 0x803372F4: nop
    
            goto L_80337354;
    }
    // 0x803372F4: nop

    // 0x803372F8: b           L_80337364
    // 0x803372FC: nop

        goto L_80337364;
    // 0x803372FC: nop

L_80337300:
    // 0x80337300: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337304: nop

    // 0x80337308: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x8033730C: nop

    // 0x80337310: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80337314: beq         $at, $zero, L_8033732C
    if (ctx->r1 == 0) {
        // 0x80337318: nop
    
            goto L_8033732C;
    }
    // 0x80337318: nop

    // 0x8033731C: jal         0x80336284
    // 0x80337320: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_20;
    // 0x80337320: nop

    after_20:
    // 0x80337324: b           L_8033734C
    // 0x80337328: nop

        goto L_8033734C;
    // 0x80337328: nop

L_8033732C:
    // 0x8033732C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337334: jal         0x8001B4AC
    // 0x80337338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_21;
    // 0x80337338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x8033733C: beq         $v0, $zero, L_8033734C
    if (ctx->r2 == 0) {
        // 0x80337340: nop
    
            goto L_8033734C;
    }
    // 0x80337340: nop

    // 0x80337344: jal         0x80336B9C
    // 0x80337348: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_22;
    // 0x80337348: nop

    after_22:
L_8033734C:
    // 0x8033734C: b           L_80337374
    // 0x80337350: nop

        goto L_80337374;
    // 0x80337350: nop

L_80337354:
    // 0x80337354: jal         0x80336284
    // 0x80337358: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_23;
    // 0x80337358: nop

    after_23:
    // 0x8033735C: b           L_80337374
    // 0x80337360: nop

        goto L_80337374;
    // 0x80337360: nop

L_80337364:
    // 0x80337364: jal         0x80336B9C
    // 0x80337368: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_24;
    // 0x80337368: nop

    after_24:
    // 0x8033736C: b           L_80337374
    // 0x80337370: nop

        goto L_80337374;
    // 0x80337370: nop

L_80337374:
    // 0x80337374: b           L_80337384
    // 0x80337378: nop

        goto L_80337384;
    // 0x80337378: nop

L_8033737C:
    // 0x8033737C: jal         0x80336B9C
    // 0x80337380: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_25;
    // 0x80337380: nop

    after_25:
L_80337384:
    // 0x80337384: b           L_8033738C
    // 0x80337388: nop

        goto L_8033738C;
    // 0x80337388: nop

L_8033738C:
    // 0x8033738C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80337390: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80337394: jr          $ra
    // 0x80337398: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80337398: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80334200_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334208: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033420C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334210: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334214: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033421C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334220: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334224: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334228: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033422C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334230: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334234: jal         0x803374AC
    // 0x80334238: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80334238: nop

    after_0:
    // 0x8033423C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80334240: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334244: nop

    // 0x80334248: bne         $t0, $zero, L_803342B0
    if (ctx->r8 != 0) {
        // 0x8033424C: nop
    
            goto L_803342B0;
    }
    // 0x8033424C: nop

    // 0x80334250: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334254: nop

    // 0x80334258: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x8033425C: nop

    // 0x80334260: bne         $t2, $zero, L_803342A0
    if (ctx->r10 != 0) {
        // 0x80334264: nop
    
            goto L_803342A0;
    }
    // 0x80334264: nop

    // 0x80334268: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8033426C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80334270: jal         0x80338044
    // 0x80334274: nop

    func_80338044_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80334274: nop

    after_1:
    // 0x80334278: beq         $v0, $zero, L_80334290
    if (ctx->r2 == 0) {
        // 0x8033427C: nop
    
            goto L_80334290;
    }
    // 0x8033427C: nop

    // 0x80334280: jal         0x8033739C
    // 0x80334284: nop

    func_8033739C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80334284: nop

    after_2:
    // 0x80334288: b           L_80334298
    // 0x8033428C: nop

        goto L_80334298;
    // 0x8033428C: nop

L_80334290:
    // 0x80334290: jal         0x80335E10
    // 0x80334294: nop

    func_80335E10_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80334294: nop

    after_3:
L_80334298:
    // 0x80334298: b           L_803342A8
    // 0x8033429C: nop

        goto L_803342A8;
    // 0x8033429C: nop

L_803342A0:
    // 0x803342A0: jal         0x80335E10
    // 0x803342A4: nop

    func_80335E10_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x803342A4: nop

    after_4:
L_803342A8:
    // 0x803342A8: b           L_803342B8
    // 0x803342AC: nop

        goto L_803342B8;
    // 0x803342AC: nop

L_803342B0:
    // 0x803342B0: jal         0x80335E10
    // 0x803342B4: nop

    func_80335E10_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x803342B4: nop

    after_5:
L_803342B8:
    // 0x803342B8: b           L_803342C0
    // 0x803342BC: nop

        goto L_803342C0;
    // 0x803342BC: nop

L_803342C0:
    // 0x803342C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803342C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803342C8: jr          $ra
    // 0x803342CC: nop

    return;
    // 0x803342CC: nop

;}
