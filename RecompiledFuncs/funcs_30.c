#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800FA730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FA734: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA738: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FA73C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA740: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA744: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800FA748: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA74C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA750: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA758: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA75C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800FA760: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800FA764: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FA768: beq         $s0, $at, L_800FA790
    if (ctx->r16 == ctx->r1) {
        // 0x800FA76C: nop
    
            goto L_800FA790;
    }
    // 0x800FA76C: nop

    // 0x800FA770: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FA774: beq         $s0, $at, L_800FA7A0
    if (ctx->r16 == ctx->r1) {
        // 0x800FA778: nop
    
            goto L_800FA7A0;
    }
    // 0x800FA778: nop

    // 0x800FA77C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800FA780: beq         $s0, $at, L_800FA7B0
    if (ctx->r16 == ctx->r1) {
        // 0x800FA784: nop
    
            goto L_800FA7B0;
    }
    // 0x800FA784: nop

    // 0x800FA788: b           L_800FA7C0
    // 0x800FA78C: nop

        goto L_800FA7C0;
    // 0x800FA78C: nop

L_800FA790:
    // 0x800FA790: jal         0x800FA54C
    // 0x800FA794: nop

    func_800FA54C(rdram, ctx);
        goto after_0;
    // 0x800FA794: nop

    after_0:
    // 0x800FA798: b           L_800FA7C0
    // 0x800FA79C: nop

        goto L_800FA7C0;
    // 0x800FA79C: nop

L_800FA7A0:
    // 0x800FA7A0: jal         0x800FA27C
    // 0x800FA7A4: nop

    func_800FA27C(rdram, ctx);
        goto after_1;
    // 0x800FA7A4: nop

    after_1:
    // 0x800FA7A8: b           L_800FA7C0
    // 0x800FA7AC: nop

        goto L_800FA7C0;
    // 0x800FA7AC: nop

L_800FA7B0:
    // 0x800FA7B0: jal         0x800FA4D4
    // 0x800FA7B4: nop

    func_800FA4D4(rdram, ctx);
        goto after_2;
    // 0x800FA7B4: nop

    after_2:
    // 0x800FA7B8: b           L_800FA7C0
    // 0x800FA7BC: nop

        goto L_800FA7C0;
    // 0x800FA7BC: nop

L_800FA7C0:
    // 0x800FA7C0: b           L_800FA7C8
    // 0x800FA7C4: nop

        goto L_800FA7C8;
    // 0x800FA7C4: nop

L_800FA7C8:
    // 0x800FA7C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA7CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FA7D0: jr          $ra
    // 0x800FA7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FA7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80090350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090358: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009035C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090360: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090364: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090368: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009036C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090370: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090374: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090378: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009037C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090380: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090384: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090388: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009038C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090390: addiu       $a1, $a1, 0x13D8
    ctx->r5 = ADD32(ctx->r5, 0X13D8);
    // 0x80090394: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090398: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009039C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800903A0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800903A4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800903A8: jal         0x80027464
    // 0x800903AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800903AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800903B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800903B4: b           L_800903BC
    // 0x800903B8: nop

        goto L_800903BC;
    // 0x800903B8: nop

L_800903BC:
    // 0x800903BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800903C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800903C4: jr          $ra
    // 0x800903C8: nop

    return;
    // 0x800903C8: nop

;}
RECOMP_FUNC void func_800F154C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F154C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F1550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F1554: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F1558: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F155C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1560: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F1564: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1568: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F156C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1570: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F1574: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F1578: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F157C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F1580: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F1584: nop

    // 0x800F1588: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F158C: nop

    // 0x800F1590: bne         $t1, $zero, L_800F15BC
    if (ctx->r9 != 0) {
        // 0x800F1594: nop
    
            goto L_800F15BC;
    }
    // 0x800F1594: nop

    // 0x800F1598: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F159C: nop

    // 0x800F15A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F15A4: nop

    // 0x800F15A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F15AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F15B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F15B4: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x800F15B8: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800F15BC:
    // 0x800F15BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F15C0: nop

    // 0x800F15C4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800F15C8: nop

    // 0x800F15CC: bne         $t8, $zero, L_800F15EC
    if (ctx->r24 != 0) {
        // 0x800F15D0: nop
    
            goto L_800F15EC;
    }
    // 0x800F15D0: nop

    // 0x800F15D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F15D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F15DC: jal         0x8002B114
    // 0x800F15E0: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800F15E0: nop

    after_0:
    // 0x800F15E4: b           L_800F1604
    // 0x800F15E8: nop

        goto L_800F1604;
    // 0x800F15E8: nop

L_800F15EC:
    // 0x800F15EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F15F0: nop

    // 0x800F15F4: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800F15F8: nop

    // 0x800F15FC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800F1600: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800F1604:
    // 0x800F1604: b           L_800F160C
    // 0x800F1608: nop

        goto L_800F160C;
    // 0x800F1608: nop

L_800F160C:
    // 0x800F160C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F1610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F1614: jr          $ra
    // 0x800F1618: nop

    return;
    // 0x800F1618: nop

;}
RECOMP_FUNC void func_8007A3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A3A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A3A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A3A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007A3AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007A3B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007A3B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A3B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A3BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A3C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A3C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007A3C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007A3CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007A3D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007A3D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A3D8: nop

    // 0x8007A3DC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8007A3E0: nop

    // 0x8007A3E4: beq         $t1, $zero, L_8007A470
    if (ctx->r9 == 0) {
        // 0x8007A3E8: nop
    
            goto L_8007A470;
    }
    // 0x8007A3E8: nop

    // 0x8007A3EC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A3F0: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x8007A3F4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8007A3F8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007A3FC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8007A400: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A404: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8007A408: nop

    // 0x8007A40C: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x8007A410: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A414: nop

    // 0x8007A418: sh          $zero, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = 0;
    // 0x8007A41C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007A420: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007A424: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A428: nop

    // 0x8007A42C: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x8007A430: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007A434: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007A438: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A43C: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8007A440: nop

    // 0x8007A444: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
    // 0x8007A448: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007A44C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A450: nop

    // 0x8007A454: swc1        $f10, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f10.u32l;
    // 0x8007A458: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007A45C: jal         0x800799A8
    // 0x8007A460: nop

    func_800799A8(rdram, ctx);
        goto after_0;
    // 0x8007A460: nop

    after_0:
    // 0x8007A464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007A468: jal         0x80079AD8
    // 0x8007A46C: nop

    func_80079AD8(rdram, ctx);
        goto after_1;
    // 0x8007A46C: nop

    after_1:
L_8007A470:
    // 0x8007A470: b           L_8007A478
    // 0x8007A474: nop

        goto L_8007A478;
    // 0x8007A474: nop

L_8007A478:
    // 0x8007A478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A47C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A480: jr          $ra
    // 0x8007A484: nop

    return;
    // 0x8007A484: nop

;}
RECOMP_FUNC void func_8008C66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C66C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008C670: sb          $zero, 0x660A($at)
    MEM_B(0X660A, ctx->r1) = 0;
    // 0x8008C674: jr          $ra
    // 0x8008C678: nop

    return;
    // 0x8008C678: nop

    // 0x8008C67C: jr          $ra
    // 0x8008C680: nop

    return;
    // 0x8008C680: nop

;}
RECOMP_FUNC void func_800D2980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2984: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D2988: nop

    // 0x800D298C: beq         $t6, $zero, L_800D29A0
    if (ctx->r14 == 0) {
        // 0x800D2990: nop
    
            goto L_800D29A0;
    }
    // 0x800D2990: nop

    // 0x800D2994: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D2998: bne         $t6, $at, L_800D29F4
    if (ctx->r14 != ctx->r1) {
        // 0x800D299C: nop
    
            goto L_800D29F4;
    }
    // 0x800D299C: nop

L_800D29A0:
    // 0x800D29A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D29A4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D29A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D29AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D29B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D29B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D29B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D29BC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D29C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D29C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800D29C8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D29CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D29D0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D29D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D29D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D29DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D29E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D29E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D29E8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D29EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D29F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D29F4:
    // 0x800D29F4: jr          $ra
    // 0x800D29F8: nop

    return;
    // 0x800D29F8: nop

    // 0x800D29FC: jr          $ra
    // 0x800D2A00: nop

    return;
    // 0x800D2A00: nop

;}
RECOMP_FUNC void func_800B8DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8DCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B8DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8DD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8DD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8DDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8DE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8DE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8DE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8DEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8DF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8DF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8DF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B8DFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B8E00: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8E04: nop

    // 0x800B8E08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B8E0C: nop

    // 0x800B8E10: bne         $t1, $zero, L_800B8E44
    if (ctx->r9 != 0) {
        // 0x800B8E14: nop
    
            goto L_800B8E44;
    }
    // 0x800B8E14: nop

    // 0x800B8E18: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8E1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B8E20: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B8E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B8E28: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8E2C: nop

    // 0x800B8E30: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B8E34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B8E38: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8E3C: nop

    // 0x800B8E40: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800B8E44:
    // 0x800B8E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8E4C: jal         0x80029C40
    // 0x800B8E50: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B8E50: nop

    after_0:
    // 0x800B8E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8E5C: jal         0x80029D04
    // 0x800B8E60: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B8E60: nop

    after_1:
    // 0x800B8E64: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
L_800B8E68:
    // 0x800B8E68: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x800B8E6C: jal         0x800B8968
    // 0x800B8E70: nop

    func_800B8968(rdram, ctx);
        goto after_2;
    // 0x800B8E70: nop

    after_2:
    // 0x800B8E74: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x800B8E78: nop

    // 0x800B8E7C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800B8E80: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800B8E84: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800B8E88: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x800B8E8C: bne         $at, $zero, L_800B8E68
    if (ctx->r1 != 0) {
        // 0x800B8E90: sb          $t7, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r15;
            goto L_800B8E68;
    }
    // 0x800B8E90: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    // 0x800B8E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8E9C: jal         0x8002B0E4
    // 0x800B8EA0: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800B8EA0: nop

    after_3:
    // 0x800B8EA4: b           L_800B8EAC
    // 0x800B8EA8: nop

        goto L_800B8EAC;
    // 0x800B8EA8: nop

L_800B8EAC:
    // 0x800B8EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B8EB4: jr          $ra
    // 0x800B8EB8: nop

    return;
    // 0x800B8EB8: nop

;}
RECOMP_FUNC void func_800AB460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AB464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AB468: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AB46C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AB470: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AB474: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AB478: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB47C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB484: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB488: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AB48C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800AB490: nop

    // 0x800AB494: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800AB498: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB49C: nop

    // 0x800AB4A0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AB4A4: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x800AB4A8: beq         $at, $zero, L_800AB53C
    if (ctx->r1 == 0) {
        // 0x800AB4AC: nop
    
            goto L_800AB53C;
    }
    // 0x800AB4AC: nop

    // 0x800AB4B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AB4B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AB4B8: addu        $at, $at, $t0
    gpr jr_addend_800AB4C4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AB4BC: lw          $t0, 0x4A50($at)
    ctx->r8 = ADD32(ctx->r1, 0X4A50);
    // 0x800AB4C0: nop

    // 0x800AB4C4: jr          $t0
    // 0x800AB4C8: nop

    switch (jr_addend_800AB4C4 >> 2) {
        case 0: goto L_800AB4CC; break;
        case 1: goto L_800AB4EC; break;
        case 2: goto L_800AB4FC; break;
        case 3: goto L_800AB50C; break;
        case 4: goto L_800AB53C; break;
        case 5: goto L_800AB52C; break;
        case 6: goto L_800AB53C; break;
        case 7: goto L_800AB4DC; break;
        case 8: goto L_800AB51C; break;
        default: switch_error(__func__, 0x800AB4C4, 0x80114A50);
    }
    // 0x800AB4C8: nop

L_800AB4CC:
    // 0x800AB4CC: jal         0x800AA758
    // 0x800AB4D0: nop

    func_800AA758(rdram, ctx);
        goto after_0;
    // 0x800AB4D0: nop

    after_0:
    // 0x800AB4D4: b           L_800AB54C
    // 0x800AB4D8: nop

        goto L_800AB54C;
    // 0x800AB4D8: nop

L_800AB4DC:
    // 0x800AB4DC: jal         0x800AA4CC
    // 0x800AB4E0: nop

    func_800AA4CC(rdram, ctx);
        goto after_1;
    // 0x800AB4E0: nop

    after_1:
    // 0x800AB4E4: b           L_800AB54C
    // 0x800AB4E8: nop

        goto L_800AB54C;
    // 0x800AB4E8: nop

L_800AB4EC:
    // 0x800AB4EC: jal         0x800AAAA0
    // 0x800AB4F0: nop

    func_800AAAA0(rdram, ctx);
        goto after_2;
    // 0x800AB4F0: nop

    after_2:
    // 0x800AB4F4: b           L_800AB54C
    // 0x800AB4F8: nop

        goto L_800AB54C;
    // 0x800AB4F8: nop

L_800AB4FC:
    // 0x800AB4FC: jal         0x800AAC90
    // 0x800AB500: nop

    func_800AAC90(rdram, ctx);
        goto after_3;
    // 0x800AB500: nop

    after_3:
    // 0x800AB504: b           L_800AB54C
    // 0x800AB508: nop

        goto L_800AB54C;
    // 0x800AB508: nop

L_800AB50C:
    // 0x800AB50C: jal         0x800AAF08
    // 0x800AB510: nop

    func_800AAF08(rdram, ctx);
        goto after_4;
    // 0x800AB510: nop

    after_4:
    // 0x800AB514: b           L_800AB54C
    // 0x800AB518: nop

        goto L_800AB54C;
    // 0x800AB518: nop

L_800AB51C:
    // 0x800AB51C: jal         0x800AA8B4
    // 0x800AB520: nop

    func_800AA8B4(rdram, ctx);
        goto after_5;
    // 0x800AB520: nop

    after_5:
    // 0x800AB524: b           L_800AB54C
    // 0x800AB528: nop

        goto L_800AB54C;
    // 0x800AB528: nop

L_800AB52C:
    // 0x800AB52C: jal         0x800AB308
    // 0x800AB530: nop

    func_800AB308(rdram, ctx);
        goto after_6;
    // 0x800AB530: nop

    after_6:
    // 0x800AB534: b           L_800AB54C
    // 0x800AB538: nop

        goto L_800AB54C;
    // 0x800AB538: nop

L_800AB53C:
    // 0x800AB53C: jal         0x800AB0CC
    // 0x800AB540: nop

    func_800AB0CC(rdram, ctx);
        goto after_7;
    // 0x800AB540: nop

    after_7:
    // 0x800AB544: b           L_800AB54C
    // 0x800AB548: nop

        goto L_800AB54C;
    // 0x800AB548: nop

L_800AB54C:
    // 0x800AB54C: b           L_800AB554
    // 0x800AB550: nop

        goto L_800AB554;
    // 0x800AB550: nop

L_800AB554:
    // 0x800AB554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AB558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AB55C: jr          $ra
    // 0x800AB560: nop

    return;
    // 0x800AB560: nop

;}
RECOMP_FUNC void func_8008F6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F6AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008F6B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F6B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008F6B8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008F6BC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008F6C0: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008F6C4: nop

    // 0x8008F6C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008F6CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F6D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F6D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F6D8: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008F6DC: nop

    // 0x8008F6E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008F6E4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008F6E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F6EC: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8008F6F0: jal         0x80017B3C
    // 0x8008F6F4: nop

    func_80017B3C(rdram, ctx);
        goto after_0;
    // 0x8008F6F4: nop

    after_0:
    // 0x8008F6F8: b           L_8008F700
    // 0x8008F6FC: nop

        goto L_8008F700;
    // 0x8008F6FC: nop

L_8008F700:
    // 0x8008F700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F704: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008F708: jr          $ra
    // 0x8008F70C: nop

    return;
    // 0x8008F70C: nop

;}
RECOMP_FUNC void func_80092680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092680: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092684: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092688: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009268C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092690: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092694: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092698: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009269C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800926A0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800926A4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800926A8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800926AC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800926B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800926B4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800926B8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800926BC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800926C0: addiu       $a1, $a1, 0x16E4
    ctx->r5 = ADD32(ctx->r5, 0X16E4);
    // 0x800926C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800926C8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800926CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800926D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800926D4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800926D8: jal         0x80027464
    // 0x800926DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800926DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800926E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800926E4: b           L_800926EC
    // 0x800926E8: nop

        goto L_800926EC;
    // 0x800926E8: nop

L_800926EC:
    // 0x800926EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800926F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800926F4: jr          $ra
    // 0x800926F8: nop

    return;
    // 0x800926F8: nop

;}
RECOMP_FUNC void func_800DD8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD8A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DD8A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD8A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD8AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD8B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD8B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD8B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DD8BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD8C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DD8C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DD8C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DD8CC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DD8D0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DD8D4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800DD8D8: nop

    // 0x800DD8DC: bne         $t0, $zero, L_800DD900
    if (ctx->r8 != 0) {
        // 0x800DD8E0: nop
    
            goto L_800DD900;
    }
    // 0x800DD8E0: nop

    // 0x800DD8E4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DD8E8: nop

    // 0x800DD8EC: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800DD8F0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DD8F4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DD8F8: b           L_800DD90C
    // 0x800DD8FC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800DD90C;
    // 0x800DD8FC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800DD900:
    // 0x800DD900: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DD904: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800DD908: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800DD90C:
    // 0x800DD90C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DD910: nop

    // 0x800DD914: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800DD918: b           L_800DD920
    // 0x800DD91C: nop

        goto L_800DD920;
    // 0x800DD91C: nop

L_800DD920:
    // 0x800DD920: jr          $ra
    // 0x800DD924: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DD924: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007A2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A2C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A2C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A2CC: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007A2D0: nop

    // 0x8007A2D4: bne         $t6, $zero, L_8007A30C
    if (ctx->r14 != 0) {
        // 0x8007A2D8: nop
    
            goto L_8007A30C;
    }
    // 0x8007A2D8: nop

    // 0x8007A2DC: jal         0x8007944C
    // 0x8007A2E0: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007A2E0: nop

    after_0:
    // 0x8007A2E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007A2E8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007A2EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A2F0: beq         $t7, $at, L_8007A304
    if (ctx->r15 == ctx->r1) {
        // 0x8007A2F4: nop
    
            goto L_8007A304;
    }
    // 0x8007A2F4: nop

    // 0x8007A2F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007A2FC: jal         0x80079E9C
    // 0x8007A300: nop

    func_80079E9C(rdram, ctx);
        goto after_1;
    // 0x8007A300: nop

    after_1:
L_8007A304:
    // 0x8007A304: b           L_8007A31C
    // 0x8007A308: nop

        goto L_8007A31C;
    // 0x8007A308: nop

L_8007A30C:
    // 0x8007A30C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007A310: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x8007A314: nop

    // 0x8007A318: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8007A31C:
    // 0x8007A31C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007A320: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A324: beq         $t9, $at, L_8007A380
    if (ctx->r25 == ctx->r1) {
        // 0x8007A328: nop
    
            goto L_8007A380;
    }
    // 0x8007A328: nop

    // 0x8007A32C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007A330: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007A334: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007A338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A33C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007A340: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A344: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007A348: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007A34C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007A350: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007A354: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A358: addiu       $t4, $zero, 0x22
    ctx->r12 = ADD32(0, 0X22);
    // 0x8007A35C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8007A360: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007A364: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A368: sh          $t6, -0x1EF8($at)
    MEM_H(-0X1EF8, ctx->r1) = ctx->r14;
    // 0x8007A36C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8007A370: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8007A374: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A378: b           L_8007A388
    // 0x8007A37C: sh          $t8, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r24;
        goto L_8007A388;
    // 0x8007A37C: sh          $t8, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r24;
L_8007A380:
    // 0x8007A380: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A384: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
L_8007A388:
    // 0x8007A388: b           L_8007A390
    // 0x8007A38C: nop

        goto L_8007A390;
    // 0x8007A38C: nop

L_8007A390:
    // 0x8007A390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A394: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A398: jr          $ra
    // 0x8007A39C: nop

    return;
    // 0x8007A39C: nop

;}
RECOMP_FUNC void func_800B4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4B08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B4B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B4B10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4B14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B4B18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4B1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4B20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4B24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B4B28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4B2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4B30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B4B34: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B4B38: nop

    // 0x800B4B3C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800B4B40: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4B44: nop

    // 0x800B4B48: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800B4B4C: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
    // 0x800B4B50: beq         $at, $zero, L_800B4BE4
    if (ctx->r1 == 0) {
        // 0x800B4B54: nop
    
            goto L_800B4BE4;
    }
    // 0x800B4B54: nop

    // 0x800B4B58: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B4B5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B4B60: addu        $at, $at, $t0
    gpr jr_addend_800B4B6C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B4B64: lw          $t0, 0x4B8C($at)
    ctx->r8 = ADD32(ctx->r1, 0X4B8C);
    // 0x800B4B68: nop

    // 0x800B4B6C: jr          $t0
    // 0x800B4B70: nop

    switch (jr_addend_800B4B6C >> 2) {
        case 0: goto L_800B4B74; break;
        case 1: goto L_800B4B84; break;
        case 2: goto L_800B4BA4; break;
        case 3: goto L_800B4BB4; break;
        case 4: goto L_800B4BE4; break;
        case 5: goto L_800B4BC4; break;
        case 6: goto L_800B4BD4; break;
        case 7: goto L_800B4BE4; break;
        case 8: goto L_800B4BE4; break;
        case 9: goto L_800B4B94; break;
        default: switch_error(__func__, 0x800B4B6C, 0x80114B8C);
    }
    // 0x800B4B70: nop

L_800B4B74:
    // 0x800B4B74: jal         0x800B3C5C
    // 0x800B4B78: nop

    func_800B3C5C(rdram, ctx);
        goto after_0;
    // 0x800B4B78: nop

    after_0:
    // 0x800B4B7C: b           L_800B4BF4
    // 0x800B4B80: nop

        goto L_800B4BF4;
    // 0x800B4B80: nop

L_800B4B84:
    // 0x800B4B84: jal         0x800B3DCC
    // 0x800B4B88: nop

    func_800B3DCC(rdram, ctx);
        goto after_1;
    // 0x800B4B88: nop

    after_1:
    // 0x800B4B8C: b           L_800B4BF4
    // 0x800B4B90: nop

        goto L_800B4BF4;
    // 0x800B4B90: nop

L_800B4B94:
    // 0x800B4B94: jal         0x800B4120
    // 0x800B4B98: nop

    func_800B4120(rdram, ctx);
        goto after_2;
    // 0x800B4B98: nop

    after_2:
    // 0x800B4B9C: b           L_800B4BF4
    // 0x800B4BA0: nop

        goto L_800B4BF4;
    // 0x800B4BA0: nop

L_800B4BA4:
    // 0x800B4BA4: jal         0x800B4258
    // 0x800B4BA8: nop

    func_800B4258(rdram, ctx);
        goto after_3;
    // 0x800B4BA8: nop

    after_3:
    // 0x800B4BAC: b           L_800B4BF4
    // 0x800B4BB0: nop

        goto L_800B4BF4;
    // 0x800B4BB0: nop

L_800B4BB4:
    // 0x800B4BB4: jal         0x800B466C
    // 0x800B4BB8: nop

    func_800B466C(rdram, ctx);
        goto after_4;
    // 0x800B4BB8: nop

    after_4:
    // 0x800B4BBC: b           L_800B4BF4
    // 0x800B4BC0: nop

        goto L_800B4BF4;
    // 0x800B4BC0: nop

L_800B4BC4:
    // 0x800B4BC4: jal         0x800B444C
    // 0x800B4BC8: nop

    func_800B444C(rdram, ctx);
        goto after_5;
    // 0x800B4BC8: nop

    after_5:
    // 0x800B4BCC: b           L_800B4BF4
    // 0x800B4BD0: nop

        goto L_800B4BF4;
    // 0x800B4BD0: nop

L_800B4BD4:
    // 0x800B4BD4: jal         0x800B49C0
    // 0x800B4BD8: nop

    func_800B49C0(rdram, ctx);
        goto after_6;
    // 0x800B4BD8: nop

    after_6:
    // 0x800B4BDC: b           L_800B4BF4
    // 0x800B4BE0: nop

        goto L_800B4BF4;
    // 0x800B4BE0: nop

L_800B4BE4:
    // 0x800B4BE4: jal         0x800B4898
    // 0x800B4BE8: nop

    func_800B4898(rdram, ctx);
        goto after_7;
    // 0x800B4BE8: nop

    after_7:
    // 0x800B4BEC: b           L_800B4BF4
    // 0x800B4BF0: nop

        goto L_800B4BF4;
    // 0x800B4BF0: nop

L_800B4BF4:
    // 0x800B4BF4: b           L_800B4BFC
    // 0x800B4BF8: nop

        goto L_800B4BFC;
    // 0x800B4BF8: nop

L_800B4BFC:
    // 0x800B4BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B4C00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B4C04: jr          $ra
    // 0x800B4C08: nop

    return;
    // 0x800B4C08: nop

;}
RECOMP_FUNC void func_80077458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077458: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007745C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80077460: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80077464: lw          $t6, 0x7924($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7924);
    // 0x80077468: nop

    // 0x8007746C: bne         $t6, $zero, L_8007747C
    if (ctx->r14 != 0) {
        // 0x80077470: nop
    
            goto L_8007747C;
    }
    // 0x80077470: nop

    // 0x80077474: b           L_80077518
    // 0x80077478: nop

        goto L_80077518;
    // 0x80077478: nop

L_8007747C:
    // 0x8007747C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80077480: lbu         $t7, 0x7920($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7920);
    // 0x80077484: nop

    // 0x80077488: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8007748C: beq         $at, $zero, L_8007749C
    if (ctx->r1 == 0) {
        // 0x80077490: nop
    
            goto L_8007749C;
    }
    // 0x80077490: nop

    // 0x80077494: b           L_80077518
    // 0x80077498: nop

        goto L_80077518;
    // 0x80077498: nop

L_8007749C:
    // 0x8007749C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800774A0: lb          $t8, 0x790E($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X790E);
    // 0x800774A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800774A8: beq         $t8, $at, L_800774B8
    if (ctx->r24 == ctx->r1) {
        // 0x800774AC: nop
    
            goto L_800774B8;
    }
    // 0x800774AC: nop

    // 0x800774B0: b           L_80077518
    // 0x800774B4: nop

        goto L_80077518;
    // 0x800774B4: nop

L_800774B8:
    // 0x800774B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800774BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800774C0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x800774C4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x800774C8: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x800774CC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800774D0: jal         0x8006F570
    // 0x800774D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_0;
    // 0x800774D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800774D8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800774DC: lbu         $t9, 0x791A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X791A);
    // 0x800774E0: nop

    // 0x800774E4: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x800774E8: beq         $t0, $zero, L_80077510
    if (ctx->r8 == 0) {
        // 0x800774EC: nop
    
            goto L_80077510;
    }
    // 0x800774EC: nop

    // 0x800774F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800774F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800774F8: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x800774FC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80077500: addiu       $a2, $zero, 0x7B
    ctx->r6 = ADD32(0, 0X7B);
    // 0x80077504: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80077508: jal         0x8006F570
    // 0x8007750C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8006F570(rdram, ctx);
        goto after_1;
    // 0x8007750C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_80077510:
    // 0x80077510: b           L_80077518
    // 0x80077514: nop

        goto L_80077518;
    // 0x80077514: nop

L_80077518:
    // 0x80077518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007751C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80077520: jr          $ra
    // 0x80077524: nop

    return;
    // 0x80077524: nop

;}
RECOMP_FUNC void func_800DB534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB534: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DB538: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB53C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB540: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB544: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB54C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB554: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB558: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB55C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB560: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DB564: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DB568: nop

    // 0x800DB56C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB570: nop

    // 0x800DB574: bne         $t1, $zero, L_800DB5D4
    if (ctx->r9 != 0) {
        // 0x800DB578: nop
    
            goto L_800DB5D4;
    }
    // 0x800DB578: nop

    // 0x800DB57C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DB580: nop

    // 0x800DB584: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB588: nop

    // 0x800DB58C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB590: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB594: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DB598: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800DB59C: sh          $t5, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r13;
    // 0x800DB5A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DB5A4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800DB5A8: nop

    // 0x800DB5AC: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800DB5B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DB5B4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DB5B8: nop

    // 0x800DB5BC: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x800DB5C0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800DB5C4: nop

    // 0x800DB5C8: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800DB5CC: nop

    // 0x800DB5D0: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
L_800DB5D4:
    // 0x800DB5D4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DB5D8: nop

    // 0x800DB5DC: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800DB5E0: nop

    // 0x800DB5E4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800DB5E8: sh          $t3, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r11;
    // 0x800DB5EC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DB5F0: nop

    // 0x800DB5F4: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x800DB5F8: nop

    // 0x800DB5FC: bne         $t2, $zero, L_800DB610
    if (ctx->r10 != 0) {
        // 0x800DB600: nop
    
            goto L_800DB610;
    }
    // 0x800DB600: nop

    // 0x800DB604: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DB608: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800DB60C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800DB610:
    // 0x800DB610: b           L_800DB618
    // 0x800DB614: nop

        goto L_800DB618;
    // 0x800DB614: nop

L_800DB618:
    // 0x800DB618: jr          $ra
    // 0x800DB61C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DB61C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80092108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092108: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009210C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092110: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092114: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092118: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009211C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092120: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092124: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092128: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009212C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092130: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092134: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092138: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009213C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092140: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092144: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092148: addiu       $a1, $a1, 0x166C
    ctx->r5 = ADD32(ctx->r5, 0X166C);
    // 0x8009214C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092150: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092158: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009215C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092160: jal         0x80027464
    // 0x80092164: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092164: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092168: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009216C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092170: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092174: addiu       $a3, $a3, 0x2F8C
    ctx->r7 = ADD32(ctx->r7, 0X2F8C);
    // 0x80092178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009217C: jal         0x8001ABF4
    // 0x80092180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80092184: b           L_8009218C
    // 0x80092188: nop

        goto L_8009218C;
    // 0x80092188: nop

L_8009218C:
    // 0x8009218C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092194: jr          $ra
    // 0x80092198: nop

    return;
    // 0x80092198: nop

;}
RECOMP_FUNC void func_800CBF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBF8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CBF90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CBF94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CBF98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CBF9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CBFA0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CBFA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CBFA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBFAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CBFB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBFB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CBFB8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800CBFBC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CBFC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CBFC4: beq         $s0, $at, L_800CBFEC
    if (ctx->r16 == ctx->r1) {
        // 0x800CBFC8: nop
    
            goto L_800CBFEC;
    }
    // 0x800CBFC8: nop

    // 0x800CBFCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CBFD0: beq         $s0, $at, L_800CBFFC
    if (ctx->r16 == ctx->r1) {
        // 0x800CBFD4: nop
    
            goto L_800CBFFC;
    }
    // 0x800CBFD4: nop

    // 0x800CBFD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CBFDC: beq         $s0, $at, L_800CC00C
    if (ctx->r16 == ctx->r1) {
        // 0x800CBFE0: nop
    
            goto L_800CC00C;
    }
    // 0x800CBFE0: nop

    // 0x800CBFE4: b           L_800CC01C
    // 0x800CBFE8: nop

        goto L_800CC01C;
    // 0x800CBFE8: nop

L_800CBFEC:
    // 0x800CBFEC: jal         0x800CBA40
    // 0x800CBFF0: nop

    func_800CBA40(rdram, ctx);
        goto after_0;
    // 0x800CBFF0: nop

    after_0:
    // 0x800CBFF4: b           L_800CC024
    // 0x800CBFF8: nop

        goto L_800CC024;
    // 0x800CBFF8: nop

L_800CBFFC:
    // 0x800CBFFC: jal         0x800CBB58
    // 0x800CC000: nop

    func_800CBB58(rdram, ctx);
        goto after_1;
    // 0x800CC000: nop

    after_1:
    // 0x800CC004: b           L_800CC024
    // 0x800CC008: nop

        goto L_800CC024;
    // 0x800CC008: nop

L_800CC00C:
    // 0x800CC00C: jal         0x800CBF5C
    // 0x800CC010: nop

    func_800CBF5C(rdram, ctx);
        goto after_2;
    // 0x800CC010: nop

    after_2:
    // 0x800CC014: b           L_800CC024
    // 0x800CC018: nop

        goto L_800CC024;
    // 0x800CC018: nop

L_800CC01C:
    // 0x800CC01C: b           L_800CC024
    // 0x800CC020: nop

        goto L_800CC024;
    // 0x800CC020: nop

L_800CC024:
    // 0x800CC024: b           L_800CC02C
    // 0x800CC028: nop

        goto L_800CC02C;
    // 0x800CC028: nop

L_800CC02C:
    // 0x800CC02C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CC034: jr          $ra
    // 0x800CC038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CC038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A054: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006A058: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006A05C: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8006A060: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A064: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x8006A068: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006A06C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A070: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A074: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8006A078: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8006A07C: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x8006A080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A084: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006A088: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8006A08C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8006A090: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8006A094: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A098: lbu         $t3, 0x4808($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4808);
    // 0x8006A09C: nop

    // 0x8006A0A0: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x8006A0A4: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
    // 0x8006A0A8: lbu         $t5, 0x7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7);
    // 0x8006A0AC: nop

    // 0x8006A0B0: beq         $t5, $zero, L_8006A0C4
    if (ctx->r13 == 0) {
        // 0x8006A0B4: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A0B4: nop

    // 0x8006A0B8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006A0BC: bne         $t5, $at, L_8006A0CC
    if (ctx->r13 != ctx->r1) {
        // 0x8006A0C0: nop
    
            goto L_8006A0CC;
    }
    // 0x8006A0C0: nop

L_8006A0C4:
    // 0x8006A0C4: b           L_8006A0DC
    // 0x8006A0C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A0DC;
    // 0x8006A0C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A0CC:
    // 0x8006A0CC: b           L_8006A0DC
    // 0x8006A0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A0DC;
    // 0x8006A0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A0D4: b           L_8006A0DC
    // 0x8006A0D8: nop

        goto L_8006A0DC;
    // 0x8006A0D8: nop

L_8006A0DC:
    // 0x8006A0DC: jr          $ra
    // 0x8006A0E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006A0E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800928B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800928B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800928BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800928C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800928C4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800928C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800928CC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800928D0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800928D4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800928D8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800928DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800928E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800928E4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800928E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800928EC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800928F0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800928F4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800928F8: addiu       $a1, $a1, 0x1714
    ctx->r5 = ADD32(ctx->r5, 0X1714);
    // 0x800928FC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092900: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092904: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092908: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009290C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092910: jal         0x80027464
    // 0x80092914: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092914: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092918: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009291C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092920: addiu       $t1, $t1, 0x319C
    ctx->r9 = ADD32(ctx->r9, 0X319C);
    // 0x80092924: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092928: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009292C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80092930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092934: jal         0x8001C0EC
    // 0x80092938: addiu       $a3, $zero, 0x278
    ctx->r7 = ADD32(0, 0X278);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092938: addiu       $a3, $zero, 0x278
    ctx->r7 = ADD32(0, 0X278);
    after_1:
    // 0x8009293C: b           L_80092944
    // 0x80092940: nop

        goto L_80092944;
    // 0x80092940: nop

L_80092944:
    // 0x80092944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092948: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009294C: jr          $ra
    // 0x80092950: nop

    return;
    // 0x80092950: nop

;}
RECOMP_FUNC void func_8007D768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D768: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007D76C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007D770: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007D774: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007D778: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007D77C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007D780: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007D784: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007D788: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007D78C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007D790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007D798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D79C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007D7A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007D7A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D7A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007D7AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007D7B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007D7B4: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x8007D7B8: jal         0x8006828C
    // 0x8007D7BC: nop

    func_8006828C(rdram, ctx);
        goto after_0;
    // 0x8007D7BC: nop

    after_0:
    // 0x8007D7C0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D7C4: jal         0x8007897C
    // 0x8007D7C8: nop

    func_8007897C(rdram, ctx);
        goto after_1;
    // 0x8007D7C8: nop

    after_1:
    // 0x8007D7CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D7D0: jal         0x800799A8
    // 0x8007D7D4: nop

    func_800799A8(rdram, ctx);
        goto after_2;
    // 0x8007D7D4: nop

    after_2:
    // 0x8007D7D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D7DC: jal         0x80079AD8
    // 0x8007D7E0: nop

    func_80079AD8(rdram, ctx);
        goto after_3;
    // 0x8007D7E0: nop

    after_3:
    // 0x8007D7E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D7E8: jal         0x80078AEC
    // 0x8007D7EC: nop

    func_80078AEC(rdram, ctx);
        goto after_4;
    // 0x8007D7EC: nop

    after_4:
    // 0x8007D7F0: beq         $v0, $zero, L_8007D80C
    if (ctx->r2 == 0) {
        // 0x8007D7F4: nop
    
            goto L_8007D80C;
    }
    // 0x8007D7F4: nop

    // 0x8007D7F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D7FC: jal         0x800795C8
    // 0x8007D800: nop

    func_800795C8(rdram, ctx);
        goto after_5;
    // 0x8007D800: nop

    after_5:
    // 0x8007D804: b           L_8007D928
    // 0x8007D808: nop

        goto L_8007D928;
    // 0x8007D808: nop

L_8007D80C:
    // 0x8007D80C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007D810: nop

    // 0x8007D814: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8007D818: nop

    // 0x8007D81C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8007D820: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x8007D824: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007D828: nop

    // 0x8007D82C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8007D830: nop

    // 0x8007D834: bne         $t6, $zero, L_8007D850
    if (ctx->r14 != 0) {
        // 0x8007D838: nop
    
            goto L_8007D850;
    }
    // 0x8007D838: nop

    // 0x8007D83C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D840: jal         0x800795C8
    // 0x8007D844: nop

    func_800795C8(rdram, ctx);
        goto after_6;
    // 0x8007D844: nop

    after_6:
    // 0x8007D848: b           L_8007D928
    // 0x8007D84C: nop

        goto L_8007D928;
    // 0x8007D84C: nop

L_8007D850:
    // 0x8007D850: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007D854: nop

    // 0x8007D858: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x8007D85C: nop

    // 0x8007D860: bne         $t8, $zero, L_8007D908
    if (ctx->r24 != 0) {
        // 0x8007D864: nop
    
            goto L_8007D908;
    }
    // 0x8007D864: nop

    // 0x8007D868: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007D86C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007D870: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8007D874: lwc1        $f9, -0x35C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X35C8);
    // 0x8007D878: lwc1        $f8, -0x35C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35C4);
    // 0x8007D87C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007D880: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007D884: jal         0x80034970
    // 0x8007D888: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x8007D888: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_7:
    // 0x8007D88C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007D890: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007D894: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8007D898: lwc1        $f5, -0x35C0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X35C0);
    // 0x8007D89C: lwc1        $f4, -0x35BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X35BC);
    // 0x8007D8A0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007D8A4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8007D8A8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8007D8AC: jal         0x80036570
    // 0x8007D8B0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_8;
    // 0x8007D8B0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_8:
    // 0x8007D8B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007D8B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007D8BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007D8C0: mul.s       $f16, $f22, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x8007D8C4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007D8C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007D8CC: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8007D8D0: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8007D8D4: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8007D8D8: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x8007D8DC: addiu       $a0, $zero, 0x2C5
    ctx->r4 = ADD32(0, 0X2C5);
    // 0x8007D8E0: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8007D8E4: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8007D8E8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8007D8EC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8007D8F0: jal         0x80081468
    // 0x8007D8F4: nop

    func_80081468(rdram, ctx);
        goto after_9;
    // 0x8007D8F4: nop

    after_9:
    // 0x8007D8F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007D8FC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007D900: b           L_8007D920
    // 0x8007D904: sh          $t3, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r11;
        goto L_8007D920;
    // 0x8007D904: sh          $t3, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r11;
L_8007D908:
    // 0x8007D908: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007D90C: nop

    // 0x8007D910: lh          $t5, 0xB2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB2);
    // 0x8007D914: nop

    // 0x8007D918: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8007D91C: sh          $t6, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r14;
L_8007D920:
    // 0x8007D920: b           L_8007D928
    // 0x8007D924: nop

        goto L_8007D928;
    // 0x8007D924: nop

L_8007D928:
    // 0x8007D928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007D92C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007D930: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007D934: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007D938: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007D93C: jr          $ra
    // 0x8007D940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007D940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009FE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FE10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009FE14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FE18: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009FE1C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009FE20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FE24: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009FE28: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009FE2C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009FE30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009FE34: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009FE38: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009FE3C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009FE40: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009FE44: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009FE48: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009FE4C: addiu       $a1, $a1, 0x36F4
    ctx->r5 = ADD32(ctx->r5, 0X36F4);
    // 0x8009FE50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009FE54: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009FE58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009FE5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009FE60: jal         0x80027464
    // 0x8009FE64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009FE64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8009FE68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009FE6C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009FE70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009FE74: beq         $t0, $at, L_800A001C
    if (ctx->r8 == ctx->r1) {
        // 0x8009FE78: nop
    
            goto L_800A001C;
    }
    // 0x8009FE78: nop

    // 0x8009FE7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009FE80: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8009FE84: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x8009FE88: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009FE8C: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x8009FE90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009FE94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009FE98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009FE9C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8009FEA0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009FEA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FEA8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8009FEAC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009FEB0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009FEB4: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x8009FEB8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8009FEBC: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x8009FEC0: nop

    // 0x8009FEC4: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x8009FEC8: nop

    // 0x8009FECC: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x8009FED0: beq         $at, $zero, L_8009FF48
    if (ctx->r1 == 0) {
        // 0x8009FED4: nop
    
            goto L_8009FF48;
    }
    // 0x8009FED4: nop

    // 0x8009FED8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009FEDC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009FEE0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009FEE4: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x8009FEE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009FEEC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8009FEF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009FEF4: lh          $t1, 0x48B4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X48B4);
    // 0x8009FEF8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8009FEFC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8009FF00: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8009FF04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009FF08: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8009FF0C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8009FF10: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009FF14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FF18: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009FF1C: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x8009FF20: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009FF24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FF28: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8009FF2C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8009FF30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009FF34: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8009FF38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009FF3C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009FF40: b           L_800A0004
    // 0x8009FF44: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
        goto L_800A0004;
    // 0x8009FF44: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
L_8009FF48:
    // 0x8009FF48: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8009FF4C: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x8009FF50: nop

    // 0x8009FF54: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x8009FF58: nop

    // 0x8009FF5C: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8009FF60: beq         $at, $zero, L_8009FFDC
    if (ctx->r1 == 0) {
        // 0x8009FF64: nop
    
            goto L_8009FFDC;
    }
    // 0x8009FF64: nop

    // 0x8009FF68: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009FF6C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009FF70: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009FF74: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x8009FF78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009FF7C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8009FF80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009FF84: lh          $t1, 0x48B4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X48B4);
    // 0x8009FF88: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8009FF8C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8009FF90: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8009FF94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009FF98: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009FF9C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8009FFA0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009FFA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FFA8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009FFAC: swc1        $f8, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f8.u32l;
    // 0x8009FFB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009FFB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FFB8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8009FFBC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8009FFC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009FFC4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8009FFC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009FFCC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8009FFD0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8009FFD4: b           L_800A0004
    // 0x8009FFD8: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
        goto L_800A0004;
    // 0x8009FFD8: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
L_8009FFDC:
    // 0x8009FFDC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009FFE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009FFE4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8009FFE8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8009FFEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009FFF0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8009FFF4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009FFF8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009FFFC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800A0000: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
L_800A0004:
    // 0x800A0004: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0008: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A000C: addiu       $a3, $a3, 0x6F20
    ctx->r7 = ADD32(ctx->r7, 0X6F20);
    // 0x800A0010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A0014: jal         0x8001ABF4
    // 0x800A0018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A0018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800A001C:
    // 0x800A001C: b           L_800A0024
    // 0x800A0020: nop

        goto L_800A0024;
    // 0x800A0020: nop

L_800A0024:
    // 0x800A0024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A002C: jr          $ra
    // 0x800A0030: nop

    return;
    // 0x800A0030: nop

;}
RECOMP_FUNC void func_800628C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800628C0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800628C4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x800628C8: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
L_800628CC:
    // 0x800628CC: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x800628D0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x800628D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800628D8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800628DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800628E0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800628E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800628E8: sh          $t6, 0x4998($at)
    MEM_H(0X4998, ctx->r1) = ctx->r14;
    // 0x800628EC: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x800628F0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800628F4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800628F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800628FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062900: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80062904: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80062908: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006290C: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x80062910: nop

    // 0x80062914: bne         $t1, $zero, L_80062924
    if (ctx->r9 != 0) {
        // 0x80062918: nop
    
            goto L_80062924;
    }
    // 0x80062918: nop

    // 0x8006291C: b           L_800629F0
    // 0x80062920: nop

        goto L_800629F0;
    // 0x80062920: nop

L_80062924:
    // 0x80062924: lh          $t3, 0x2($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2);
    // 0x80062928: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x8006292C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80062930: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80062934: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80062938: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x8006293C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80062940: sh          $t2, 0x4998($at)
    MEM_H(0X4998, ctx->r1) = ctx->r10;
    // 0x80062944: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x80062948: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8006294C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80062950: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80062954: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062958: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8006295C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80062960: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80062964: lh          $t8, 0x4234($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4234);
    // 0x80062968: lh          $t3, 0x2($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2);
    // 0x8006296C: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80062970: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80062974: lw          $t5, 0x4994($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4994);
    // 0x80062978: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006297C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062980: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80062984: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x80062988: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x8006298C: lb          $t1, 0xC($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XC);
    // 0x80062990: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80062994: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062998: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8006299C: sh          $t1, 0x49A0($at)
    MEM_H(0X49A0, ctx->r1) = ctx->r9;
    // 0x800629A0: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x800629A4: lh          $t6, 0x2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2);
    // 0x800629A8: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800629AC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800629B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800629B4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800629B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800629BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800629C0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800629C4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800629C8: lwc1        $f4, 0x4158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x800629CC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x800629D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800629D4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x800629D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800629DC: swc1        $f4, 0x499C($at)
    MEM_W(0X499C, ctx->r1) = ctx->f4.u32l;
    // 0x800629E0: lh          $t5, 0x2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2);
    // 0x800629E4: nop

    // 0x800629E8: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x800629EC: sh          $t9, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r25;
L_800629F0:
    // 0x800629F0: lh          $t0, 0x6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6);
    // 0x800629F4: nop

    // 0x800629F8: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x800629FC: sll         $t1, $t3, 16
    ctx->r9 = S32(ctx->r11 << 16);
    // 0x80062A00: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80062A04: slti        $at, $t2, 0x64
    ctx->r1 = SIGNED(ctx->r10) < 0X64 ? 1 : 0;
    // 0x80062A08: bne         $at, $zero, L_800628CC
    if (ctx->r1 != 0) {
        // 0x80062A0C: sh          $t3, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r11;
            goto L_800628CC;
    }
    // 0x80062A0C: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
    // 0x80062A10: lh          $t4, 0x2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2);
    // 0x80062A14: nop

    // 0x80062A18: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x80062A1C: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80062A20: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80062A24: bltz        $t8, L_80062C18
    if (SIGNED(ctx->r24) < 0) {
        // 0x80062A28: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_80062C18;
    }
    // 0x80062A28: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
L_80062A2C:
    // 0x80062A2C: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x80062A30: nop

    // 0x80062A34: bltz        $t5, L_80062BFC
    if (SIGNED(ctx->r13) < 0) {
        // 0x80062A38: sh          $t5, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r13;
            goto L_80062BFC;
    }
    // 0x80062A38: sh          $t5, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r13;
L_80062A3C:
    // 0x80062A3C: lh          $t9, 0x4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4);
    // 0x80062A40: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80062A44: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80062A48: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80062A4C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062A50: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80062A54: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80062A58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80062A5C: bne         $t3, $at, L_80062BE0
    if (ctx->r11 != ctx->r1) {
        // 0x80062A60: nop
    
            goto L_80062BE0;
    }
    // 0x80062A60: nop

    // 0x80062A64: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x80062A68: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80062A6C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80062A70: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80062A74: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80062A78: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80062A7C: lh          $t4, 0x4998($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4998);
    // 0x80062A80: nop

    // 0x80062A84: sh          $t4, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r12;
    // 0x80062A88: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x80062A8C: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80062A90: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80062A94: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80062A98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062A9C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80062AA0: lh          $t8, 0x49A0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X49A0);
    // 0x80062AA4: nop

    // 0x80062AA8: sh          $t8, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r24;
    // 0x80062AAC: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x80062AB0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062AB4: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80062AB8: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x80062ABC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062AC0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80062AC4: lwc1        $f6, 0x499C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X499C);
    // 0x80062AC8: nop

    // 0x80062ACC: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x80062AD0: lh          $t0, 0x4($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4);
    // 0x80062AD4: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x80062AD8: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80062ADC: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x80062AE0: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x80062AE4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80062AE8: addiu       $t1, $t1, 0x4998
    ctx->r9 = ADD32(ctx->r9, 0X4998);
    // 0x80062AEC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80062AF0: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x80062AF4: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80062AF8: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x80062AFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062B00: addu        $t8, $t6, $t1
    ctx->r24 = ADD32(ctx->r14, ctx->r9);
    // 0x80062B04: sh          $t4, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r12;
    // 0x80062B08: lh          $t5, 0x4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4);
    // 0x80062B0C: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x80062B10: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80062B14: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80062B18: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x80062B1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062B20: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x80062B24: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80062B28: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x80062B2C: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80062B30: lh          $t2, 0x8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X8);
    // 0x80062B34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062B38: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80062B3C: sh          $t2, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r10;
    // 0x80062B40: lh          $t4, 0x4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4);
    // 0x80062B44: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x80062B48: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80062B4C: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80062B50: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x80062B54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80062B58: addiu       $t5, $t5, 0x4998
    ctx->r13 = ADD32(ctx->r13, 0X4998);
    // 0x80062B5C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062B60: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x80062B64: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062B68: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80062B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062B70: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x80062B74: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x80062B78: lh          $t2, 0x4($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4);
    // 0x80062B7C: lh          $t0, 0xA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XA);
    // 0x80062B80: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80062B84: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80062B88: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80062B8C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062B90: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80062B94: sh          $t0, 0x4998($at)
    MEM_H(0X4998, ctx->r1) = ctx->r8;
    // 0x80062B98: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x80062B9C: lh          $t4, 0x8($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8);
    // 0x80062BA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80062BA4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80062BA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062BAC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062BB0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80062BB4: sh          $t4, 0x49A0($at)
    MEM_H(0X49A0, ctx->r1) = ctx->r12;
    // 0x80062BB8: lh          $t3, 0x4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4);
    // 0x80062BBC: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80062BC0: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062BC4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062BC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062BCC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062BD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80062BD4: swc1        $f10, 0x499C($at)
    MEM_W(0X499C, ctx->r1) = ctx->f10.u32l;
    // 0x80062BD8: b           L_80062BFC
    // 0x80062BDC: nop

        goto L_80062BFC;
    // 0x80062BDC: nop

L_80062BE0:
    // 0x80062BE0: lh          $t5, 0x4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4);
    // 0x80062BE4: nop

    // 0x80062BE8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80062BEC: sll         $t2, $t6, 16
    ctx->r10 = S32(ctx->r14 << 16);
    // 0x80062BF0: sra         $t0, $t2, 16
    ctx->r8 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80062BF4: bgez        $t0, L_80062A3C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80062BF8: sh          $t6, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r14;
            goto L_80062A3C;
    }
    // 0x80062BF8: sh          $t6, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r14;
L_80062BFC:
    // 0x80062BFC: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x80062C00: nop

    // 0x80062C04: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x80062C08: sll         $t4, $t8, 16
    ctx->r12 = S32(ctx->r24 << 16);
    // 0x80062C0C: sra         $t9, $t4, 16
    ctx->r25 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80062C10: bgez        $t9, L_80062A2C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80062C14: sh          $t8, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r24;
            goto L_80062A2C;
    }
    // 0x80062C14: sh          $t8, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r24;
L_80062C18:
    // 0x80062C18: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_80062C1C:
    // 0x80062C1C: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x80062C20: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80062C24: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062C28: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062C2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062C30: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80062C34: lh          $t5, 0x4998($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4998);
    // 0x80062C38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80062C3C: bne         $t5, $at, L_80062C4C
    if (ctx->r13 != ctx->r1) {
        // 0x80062C40: nop
    
            goto L_80062C4C;
    }
    // 0x80062C40: nop

    // 0x80062C44: b           L_80062E9C
    // 0x80062C48: nop

        goto L_80062E9C;
    // 0x80062C48: nop

L_80062C4C:
    // 0x80062C4C: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x80062C50: nop

    // 0x80062C54: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x80062C58: sll         $t0, $t2, 16
    ctx->r8 = S32(ctx->r10 << 16);
    // 0x80062C5C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80062C60: slti        $at, $t1, 0x64
    ctx->r1 = SIGNED(ctx->r9) < 0X64 ? 1 : 0;
    // 0x80062C64: beq         $at, $zero, L_80062E7C
    if (ctx->r1 == 0) {
        // 0x80062C68: sh          $t2, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r10;
            goto L_80062E7C;
    }
    // 0x80062C68: sh          $t2, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r10;
L_80062C6C:
    // 0x80062C6C: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x80062C70: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80062C74: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80062C78: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x80062C7C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80062C80: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80062C84: lh          $t9, 0x4998($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4998);
    // 0x80062C88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80062C8C: bne         $t9, $at, L_80062C9C
    if (ctx->r25 != ctx->r1) {
        // 0x80062C90: nop
    
            goto L_80062C9C;
    }
    // 0x80062C90: nop

    // 0x80062C94: b           L_80062E7C
    // 0x80062C98: nop

        goto L_80062E7C;
    // 0x80062C98: nop

L_80062C9C:
    // 0x80062C9C: lh          $t3, 0x4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4);
    // 0x80062CA0: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x80062CA4: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80062CA8: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062CAC: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80062CB0: addiu       $t5, $t5, 0x4998
    ctx->r13 = ADD32(ctx->r13, 0X4998);
    // 0x80062CB4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062CB8: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x80062CBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062CC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062CC4: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x80062CC8: addu        $t1, $t0, $t5
    ctx->r9 = ADD32(ctx->r8, ctx->r13);
    // 0x80062CCC: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80062CD0: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80062CD4: nop

    // 0x80062CD8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80062CDC: nop

    // 0x80062CE0: bc1f        L_80062E5C
    if (!c1cs) {
        // 0x80062CE4: nop
    
            goto L_80062E5C;
    }
    // 0x80062CE4: nop

    // 0x80062CE8: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x80062CEC: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80062CF0: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80062CF4: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x80062CF8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80062CFC: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80062D00: lh          $t9, 0x4998($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4998);
    // 0x80062D04: nop

    // 0x80062D08: sh          $t9, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r25;
    // 0x80062D0C: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x80062D10: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80062D14: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062D18: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062D1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062D20: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80062D24: lh          $t6, 0x49A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X49A0);
    // 0x80062D28: nop

    // 0x80062D2C: sh          $t6, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r14;
    // 0x80062D30: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x80062D34: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062D38: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80062D3C: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x80062D40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062D44: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80062D48: lwc1        $f4, 0x499C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X499C);
    // 0x80062D4C: nop

    // 0x80062D50: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x80062D54: lh          $t5, 0x4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4);
    // 0x80062D58: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x80062D5C: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80062D60: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80062D64: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x80062D68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80062D6C: addiu       $t8, $t8, 0x4998
    ctx->r24 = ADD32(ctx->r24, 0X4998);
    // 0x80062D70: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062D74: addu        $t4, $t1, $t8
    ctx->r12 = ADD32(ctx->r9, ctx->r24);
    // 0x80062D78: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062D7C: lh          $t9, 0x0($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X0);
    // 0x80062D80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062D84: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80062D88: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x80062D8C: lh          $t2, 0x4($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4);
    // 0x80062D90: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x80062D94: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80062D98: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80062D9C: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x80062DA0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062DA4: addiu       $t5, $t5, 0x4998
    ctx->r13 = ADD32(ctx->r13, 0X4998);
    // 0x80062DA8: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80062DAC: addu        $t1, $t0, $t5
    ctx->r9 = ADD32(ctx->r8, ctx->r13);
    // 0x80062DB0: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80062DB4: lh          $t4, 0x8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X8);
    // 0x80062DB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80062DBC: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x80062DC0: sh          $t4, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r12;
    // 0x80062DC4: lh          $t9, 0x4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4);
    // 0x80062DC8: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x80062DCC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80062DD0: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80062DD4: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80062DD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062DDC: addiu       $t2, $t2, 0x4998
    ctx->r10 = ADD32(ctx->r10, 0X4998);
    // 0x80062DE0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80062DE4: addu        $t0, $t6, $t2
    ctx->r8 = ADD32(ctx->r14, ctx->r10);
    // 0x80062DE8: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x80062DEC: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80062DF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80062DF4: addu        $t7, $t3, $t2
    ctx->r15 = ADD32(ctx->r11, ctx->r10);
    // 0x80062DF8: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80062DFC: lh          $t4, 0x4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4);
    // 0x80062E00: lh          $t5, 0xA($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XA);
    // 0x80062E04: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80062E08: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x80062E0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80062E10: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062E14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80062E18: sh          $t5, 0x4998($at)
    MEM_H(0X4998, ctx->r1) = ctx->r13;
    // 0x80062E1C: lh          $t6, 0x4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4);
    // 0x80062E20: lh          $t9, 0x8($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X8);
    // 0x80062E24: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80062E28: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80062E2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80062E30: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062E34: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80062E38: sh          $t9, 0x49A0($at)
    MEM_H(0X49A0, ctx->r1) = ctx->r25;
    // 0x80062E3C: lh          $t1, 0x4($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4);
    // 0x80062E40: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80062E44: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80062E48: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x80062E4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80062E50: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80062E54: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80062E58: swc1        $f8, 0x499C($at)
    MEM_W(0X499C, ctx->r1) = ctx->f8.u32l;
L_80062E5C:
    // 0x80062E5C: lh          $t2, 0x4($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4);
    // 0x80062E60: nop

    // 0x80062E64: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x80062E68: sll         $t4, $t7, 16
    ctx->r12 = S32(ctx->r15 << 16);
    // 0x80062E6C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80062E70: slti        $at, $t5, 0x64
    ctx->r1 = SIGNED(ctx->r13) < 0X64 ? 1 : 0;
    // 0x80062E74: bne         $at, $zero, L_80062C6C
    if (ctx->r1 != 0) {
        // 0x80062E78: sh          $t7, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r15;
            goto L_80062C6C;
    }
    // 0x80062E78: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
L_80062E7C:
    // 0x80062E7C: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x80062E80: nop

    // 0x80062E84: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80062E88: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x80062E8C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80062E90: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x80062E94: bne         $at, $zero, L_80062C1C
    if (ctx->r1 != 0) {
        // 0x80062E98: sh          $t6, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r14;
            goto L_80062C1C;
    }
    // 0x80062E98: sh          $t6, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r14;
L_80062E9C:
    // 0x80062E9C: b           L_80062EA4
    // 0x80062EA0: nop

        goto L_80062EA4;
    // 0x80062EA0: nop

L_80062EA4:
    // 0x80062EA4: jr          $ra
    // 0x80062EA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80062EA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80090E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090E50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090E58: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090E5C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090E60: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090E64: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090E68: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090E6C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090E70: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090E74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090E78: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090E7C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090E80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090E84: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090E88: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090E8C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090E90: addiu       $a1, $a1, 0x14C8
    ctx->r5 = ADD32(ctx->r5, 0X14C8);
    // 0x80090E94: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090E98: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090E9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090EA0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090EA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090EA8: jal         0x80027464
    // 0x80090EAC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090EAC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090EB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090EB4: b           L_80090EBC
    // 0x80090EB8: nop

        goto L_80090EBC;
    // 0x80090EB8: nop

L_80090EBC:
    // 0x80090EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090EC4: jr          $ra
    // 0x80090EC8: nop

    return;
    // 0x80090EC8: nop

;}
RECOMP_FUNC void func_800E38D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E38D8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E38DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E38E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E38E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E38E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E38EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E38F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E38F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E38F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E38FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3900: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3904: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E3908: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E390C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800E3910: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E3914: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E3918: nop

    // 0x800E391C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800E3920: b           L_800E3928
    // 0x800E3924: nop

        goto L_800E3928;
    // 0x800E3924: nop

L_800E3928:
    // 0x800E3928: jr          $ra
    // 0x800E392C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E392C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80088338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088338: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8008833C: lbu         $t6, 0x5238($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5238);
    // 0x80088340: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088344: sb          $t6, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r14;
    // 0x80088348: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8008834C: lb          $t7, 0x5239($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5239);
    // 0x80088350: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088354: sb          $t7, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r15;
    // 0x80088358: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8008835C: lb          $t8, 0x523A($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X523A);
    // 0x80088360: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088364: sb          $t8, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r24;
    // 0x80088368: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8008836C: lb          $t9, 0x523B($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523B);
    // 0x80088370: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088374: sb          $t9, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r25;
    // 0x80088378: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8008837C: lb          $t0, 0x523C($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523C);
    // 0x80088380: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088384: sb          $t0, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r8;
    // 0x80088388: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8008838C: lbu         $t1, 0x523D($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X523D);
    // 0x80088390: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088394: sb          $t1, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = ctx->r9;
    // 0x80088398: jr          $ra
    // 0x8008839C: nop

    return;
    // 0x8008839C: nop

    // 0x800883A0: jr          $ra
    // 0x800883A4: nop

    return;
    // 0x800883A4: nop

;}
RECOMP_FUNC void func_8009BCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BCBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009BCC0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009BCC4: nop

    // 0x8009BCC8: bne         $t6, $zero, L_8009BCD8
    if (ctx->r14 != 0) {
        // 0x8009BCCC: nop
    
            goto L_8009BCD8;
    }
    // 0x8009BCCC: nop

    // 0x8009BCD0: b           L_8009BD48
    // 0x8009BCD4: nop

        goto L_8009BD48;
    // 0x8009BCD4: nop

L_8009BCD8:
    // 0x8009BCD8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009BCDC: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x8009BCE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009BCE4: bne         $t7, $at, L_8009BCF4
    if (ctx->r15 != ctx->r1) {
        // 0x8009BCE8: nop
    
            goto L_8009BCF4;
    }
    // 0x8009BCE8: nop

    // 0x8009BCEC: b           L_8009BD48
    // 0x8009BCF0: nop

        goto L_8009BD48;
    // 0x8009BCF0: nop

L_8009BCF4:
    // 0x8009BCF4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8009BCF8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8009BCFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009BD00: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8009BD04: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009BD08: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009BD0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009BD10: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009BD14: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8009BD18: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8009BD1C: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x8009BD20: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8009BD24: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8009BD28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009BD2C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8009BD30: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009BD34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009BD38: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009BD3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009BD40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009BD44: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009BD48:
    // 0x8009BD48: jr          $ra
    // 0x8009BD4C: nop

    return;
    // 0x8009BD4C: nop

    // 0x8009BD50: jr          $ra
    // 0x8009BD54: nop

    return;
    // 0x8009BD54: nop

;}
RECOMP_FUNC void func_800D9520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D9524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D9528: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D952C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9530: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9534: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D9538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D953C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9540: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9544: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D9548: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D954C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D9550: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D9554: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D9558: nop

    // 0x800D955C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D9560: nop

    // 0x800D9564: bne         $t1, $zero, L_800D9584
    if (ctx->r9 != 0) {
        // 0x800D9568: nop
    
            goto L_800D9584;
    }
    // 0x800D9568: nop

    // 0x800D956C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D9570: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D9574: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D9578: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D957C: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800D9580: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_800D9584:
    // 0x800D9584: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D9588: nop

    // 0x800D958C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D9590: nop

    // 0x800D9594: bne         $t7, $zero, L_800D95F0
    if (ctx->r15 != 0) {
        // 0x800D9598: nop
    
            goto L_800D95F0;
    }
    // 0x800D9598: nop

    // 0x800D959C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D95A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800D95A4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800D95A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D95AC: nop

    // 0x800D95B0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800D95B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D95B8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800D95BC: addiu       $t1, $t1, -0x7424
    ctx->r9 = ADD32(ctx->r9, -0X7424);
    // 0x800D95C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D95C4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800D95C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D95CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D95D0: jal         0x8001C0EC
    // 0x800D95D4: addiu       $a3, $zero, 0x184
    ctx->r7 = ADD32(0, 0X184);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D95D4: addiu       $a3, $zero, 0x184
    ctx->r7 = ADD32(0, 0X184);
    after_0:
    // 0x800D95D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D95DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D95E0: jal         0x8001BBDC
    // 0x800D95E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D95E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800D95E8: b           L_800D9608
    // 0x800D95EC: nop

        goto L_800D9608;
    // 0x800D95EC: nop

L_800D95F0:
    // 0x800D95F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D95F4: nop

    // 0x800D95F8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800D95FC: nop

    // 0x800D9600: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D9604: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_800D9608:
    // 0x800D9608: b           L_800D9610
    // 0x800D960C: nop

        goto L_800D9610;
    // 0x800D960C: nop

L_800D9610:
    // 0x800D9610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D9618: jr          $ra
    // 0x800D961C: nop

    return;
    // 0x800D961C: nop

;}
RECOMP_FUNC void func_8008B624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B624: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008B628: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8008B62C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008B630: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8008B634: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B638: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B63C: lwc1        $f8, 0x4F28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8008B640: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B648: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8008B64C: nop

    // 0x8008B650: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008B654: swc1        $f4, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f4.u32l;
    // 0x8008B658: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x8008B65C: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x8008B660: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008B664: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8008B668: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B66C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B670: lwc1        $f16, 0x4F2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F2C);
    // 0x8008B674: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008B678: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B67C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8008B680: nop

    // 0x8008B684: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008B688: swc1        $f6, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f6.u32l;
    // 0x8008B68C: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x8008B690: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8008B694: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008B698: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8008B69C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008B6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B6A4: lwc1        $f18, 0x4F30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F30);
    // 0x8008B6A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B6AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B6B0: sub.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8008B6B4: nop

    // 0x8008B6B8: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8008B6BC: swc1        $f8, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f8.u32l;
    // 0x8008B6C0: lh          $t2, 0x6($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6);
    // 0x8008B6C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B6C8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8008B6CC: sh          $t3, 0x4C1C($at)
    MEM_H(0X4C1C, ctx->r1) = ctx->r11;
    // 0x8008B6D0: jr          $ra
    // 0x8008B6D4: nop

    return;
    // 0x8008B6D4: nop

    // 0x8008B6D8: jr          $ra
    // 0x8008B6DC: nop

    return;
    // 0x8008B6DC: nop

;}
RECOMP_FUNC void func_800BE3B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE3B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE3B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BE3BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BE3C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BE3C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BE3C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BE3CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE3D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BE3D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE3D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BE3DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BE3E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BE3E4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BE3E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE3EC: nop

    // 0x800BE3F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BE3F4: nop

    // 0x800BE3F8: bne         $t1, $zero, L_800BE4B4
    if (ctx->r9 != 0) {
        // 0x800BE3FC: nop
    
            goto L_800BE4B4;
    }
    // 0x800BE3FC: nop

    // 0x800BE400: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE404: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BE408: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BE40C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BE410: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BE414: nop

    // 0x800BE418: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BE41C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BE420: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE424: nop

    // 0x800BE428: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BE42C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE430: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x800BE434: sh          $t6, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r14;
    // 0x800BE438: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE43C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BE440: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800BE444: nop

    // 0x800BE448: bne         $t9, $at, L_800BE484
    if (ctx->r25 != ctx->r1) {
        // 0x800BE44C: nop
    
            goto L_800BE484;
    }
    // 0x800BE44C: nop

    // 0x800BE450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE454: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800BE458: addiu       $t0, $t0, 0x7E64
    ctx->r8 = ADD32(ctx->r8, 0X7E64);
    // 0x800BE45C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE460: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800BE464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE468: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800BE46C: jal         0x8001C0EC
    // 0x800BE470: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800BE470: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_0:
    // 0x800BE474: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BE478: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800BE47C: b           L_800BE4B4
    // 0x800BE480: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
        goto L_800BE4B4;
    // 0x800BE480: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
L_800BE484:
    // 0x800BE484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE488: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800BE48C: addiu       $t3, $t3, 0x7E64
    ctx->r11 = ADD32(ctx->r11, 0X7E64);
    // 0x800BE490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE494: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800BE498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE49C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800BE4A0: jal         0x8001C0EC
    // 0x800BE4A4: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800BE4A4: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_1:
    // 0x800BE4A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE4AC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800BE4B0: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
L_800BE4B4:
    // 0x800BE4B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE4B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE4BC: jal         0x80029C40
    // 0x800BE4C0: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BE4C0: nop

    after_2:
    // 0x800BE4C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE4C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE4CC: jal         0x80029D04
    // 0x800BE4D0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BE4D0: nop

    after_3:
    // 0x800BE4D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE4D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE4DC: jal         0x8001B44C
    // 0x800BE4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800BE4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800BE4E4: beq         $v0, $zero, L_800BE5B4
    if (ctx->r2 == 0) {
        // 0x800BE4E8: nop
    
            goto L_800BE5B4;
    }
    // 0x800BE4E8: nop

    // 0x800BE4EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE4F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800BE4F4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800BE4F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE4FC: nop

    // 0x800BE500: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800BE504: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BE508: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800BE50C: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800BE510: nop

    // 0x800BE514: bne         $t0, $at, L_800BE550
    if (ctx->r8 != ctx->r1) {
        // 0x800BE518: nop
    
            goto L_800BE550;
    }
    // 0x800BE518: nop

    // 0x800BE51C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE520: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800BE524: addiu       $t1, $t1, 0x7E64
    ctx->r9 = ADD32(ctx->r9, 0X7E64);
    // 0x800BE528: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE52C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800BE530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BE538: jal         0x8001C0EC
    // 0x800BE53C: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800BE53C: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_5:
    // 0x800BE540: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE544: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BE548: b           L_800BE580
    // 0x800BE54C: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
        goto L_800BE580;
    // 0x800BE54C: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_800BE550:
    // 0x800BE550: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE554: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800BE558: addiu       $t4, $t4, 0x7E64
    ctx->r12 = ADD32(ctx->r12, 0X7E64);
    // 0x800BE55C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE560: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800BE564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE568: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BE56C: jal         0x8001C0EC
    // 0x800BE570: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800BE570: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_6:
    // 0x800BE574: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE578: nop

    // 0x800BE57C: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_800BE580:
    // 0x800BE580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE588: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BE58C: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BE590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE594: jal         0x8001ABF4
    // 0x800BE598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800BE598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800BE59C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE5A0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800BE5A4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800BE5A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE5AC: nop

    // 0x800BE5B0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800BE5B4:
    // 0x800BE5B4: b           L_800BE5BC
    // 0x800BE5B8: nop

        goto L_800BE5BC;
    // 0x800BE5B8: nop

L_800BE5BC:
    // 0x800BE5BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE5C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE5C4: jr          $ra
    // 0x800BE5C8: nop

    return;
    // 0x800BE5C8: nop

;}
RECOMP_FUNC void func_8009EC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EC44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009EC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009EC4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009EC50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009EC54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009EC58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009EC5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009EC60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009EC64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009EC68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009EC6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009EC70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009EC74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009EC78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009EC7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009EC80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009EC84: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8009EC88: nop

    // 0x8009EC8C: beq         $s0, $at, L_8009ECA8
    if (ctx->r16 == ctx->r1) {
        // 0x8009EC90: nop
    
            goto L_8009ECA8;
    }
    // 0x8009EC90: nop

    // 0x8009EC94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009EC98: beq         $s0, $at, L_8009ECBC
    if (ctx->r16 == ctx->r1) {
        // 0x8009EC9C: nop
    
            goto L_8009ECBC;
    }
    // 0x8009EC9C: nop

    // 0x8009ECA0: b           L_8009ECD0
    // 0x8009ECA4: nop

        goto L_8009ECD0;
    // 0x8009ECA4: nop

L_8009ECA8:
    // 0x8009ECA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009ECAC: jal         0x8009EA00
    // 0x8009ECB0: nop

    func_8009EA00(rdram, ctx);
        goto after_0;
    // 0x8009ECB0: nop

    after_0:
    // 0x8009ECB4: b           L_8009ECD0
    // 0x8009ECB8: nop

        goto L_8009ECD0;
    // 0x8009ECB8: nop

L_8009ECBC:
    // 0x8009ECBC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009ECC0: jal         0x8009EAEC
    // 0x8009ECC4: nop

    func_8009EAEC(rdram, ctx);
        goto after_1;
    // 0x8009ECC4: nop

    after_1:
    // 0x8009ECC8: b           L_8009ECD0
    // 0x8009ECCC: nop

        goto L_8009ECD0;
    // 0x8009ECCC: nop

L_8009ECD0:
    // 0x8009ECD0: b           L_8009ECD8
    // 0x8009ECD4: nop

        goto L_8009ECD8;
    // 0x8009ECD4: nop

L_8009ECD8:
    // 0x8009ECD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009ECDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009ECE0: jr          $ra
    // 0x8009ECE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009ECE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80092458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009245C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092460: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092464: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092468: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009246C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092470: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092474: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092478: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009247C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092480: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092484: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092488: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009248C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092490: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092494: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092498: addiu       $a1, $a1, 0x16B4
    ctx->r5 = ADD32(ctx->r5, 0X16B4);
    // 0x8009249C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800924A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800924A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800924A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800924AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800924B0: jal         0x80027464
    // 0x800924B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800924B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800924B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800924BC: b           L_800924C4
    // 0x800924C0: nop

        goto L_800924C4;
    // 0x800924C0: nop

L_800924C4:
    // 0x800924C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800924C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800924CC: jr          $ra
    // 0x800924D0: nop

    return;
    // 0x800924D0: nop

;}
RECOMP_FUNC void func_800D9420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9420: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D9424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D9428: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D942C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9430: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9434: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D9438: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D943C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9444: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D9448: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D944C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D9450: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D9454: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D9458: nop

    // 0x800D945C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D9460: nop

    // 0x800D9464: bne         $t1, $zero, L_800D9488
    if (ctx->r9 != 0) {
        // 0x800D9468: nop
    
            goto L_800D9488;
    }
    // 0x800D9468: nop

    // 0x800D946C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D9470: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D9474: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D9478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D947C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9480: jal         0x8001BBDC
    // 0x800D9484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800D9484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800D9488:
    // 0x800D9488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D948C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9490: jal         0x8001B44C
    // 0x800D9494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800D9494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800D9498: beq         $v0, $zero, L_800D9508
    if (ctx->r2 == 0) {
        // 0x800D949C: nop
    
            goto L_800D9508;
    }
    // 0x800D949C: nop

    // 0x800D94A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D94A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D94A8: jal         0x8001BBDC
    // 0x800D94AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D94AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800D94B0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D94B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800D94B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D94BC: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800D94C0: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800D94C4: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x800D94C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800D94CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D94D0: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800D94D4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800D94D8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D94DC: addiu       $a1, $a1, 0x4288
    ctx->r5 = ADD32(ctx->r5, 0X4288);
    // 0x800D94E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D94E4: jal         0x80027464
    // 0x800D94E8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800D94E8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800D94EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800D94F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D94F4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800D94F8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800D94FC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D9500: nop

    // 0x800D9504: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800D9508:
    // 0x800D9508: b           L_800D9510
    // 0x800D950C: nop

        goto L_800D9510;
    // 0x800D950C: nop

L_800D9510:
    // 0x800D9510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D9518: jr          $ra
    // 0x800D951C: nop

    return;
    // 0x800D951C: nop

;}
RECOMP_FUNC void func_8006B3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B3BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006B3C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B3C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B3C8: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B3CC: nop

    // 0x8006B3D0: bne         $t6, $zero, L_8006B3EC
    if (ctx->r14 != 0) {
        // 0x8006B3D4: nop
    
            goto L_8006B3EC;
    }
    // 0x8006B3D4: nop

    // 0x8006B3D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B3DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B3E0: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B3E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B3E8: sh          $zero, 0x793C($at)
    MEM_H(0X793C, ctx->r1) = 0;
L_8006B3EC:
    // 0x8006B3EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B3F0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8006B3F4: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x8006B3F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006B3FC: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8006B400: nop

    // 0x8006B404: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8006B408: nop

    // 0x8006B40C: bc1f        L_8006B58C
    if (!c1cs) {
        // 0x8006B410: nop
    
            goto L_8006B58C;
    }
    // 0x8006B410: nop

    // 0x8006B414: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006B418: lhu         $t9, 0x793C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X793C);
    // 0x8006B41C: nop

    // 0x8006B420: bne         $t9, $zero, L_8006B578
    if (ctx->r25 != 0) {
        // 0x8006B424: nop
    
            goto L_8006B578;
    }
    // 0x8006B424: nop

    // 0x8006B428: jal         0x80014E80
    // 0x8006B42C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8006B42C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8006B430: addiu       $t0, $v0, 0xF
    ctx->r8 = ADD32(ctx->r2, 0XF);
    // 0x8006B434: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B438: sh          $t0, 0x793C($at)
    MEM_H(0X793C, ctx->r1) = ctx->r8;
    // 0x8006B43C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006B440: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8006B444: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006B448: lwc1        $f8, 0x24($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X24);
    // 0x8006B44C: nop

    // 0x8006B450: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8006B454: nop

    // 0x8006B458: bc1f        L_8006B4A8
    if (!c1cs) {
        // 0x8006B45C: nop
    
            goto L_8006B4A8;
    }
    // 0x8006B45C: nop

    // 0x8006B460: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8006B464: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006B468: nop

    // 0x8006B46C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8006B470: nop

    // 0x8006B474: bc1f        L_8006B4A8
    if (!c1cs) {
        // 0x8006B478: nop
    
            goto L_8006B4A8;
    }
    // 0x8006B478: nop

    // 0x8006B47C: jal         0x80014E80
    // 0x8006B480: addiu       $a0, $zero, -0x1E0
    ctx->r4 = ADD32(0, -0X1E0);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x8006B480: addiu       $a0, $zero, -0x1E0
    ctx->r4 = ADD32(0, -0X1E0);
    after_1:
    // 0x8006B484: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8006B488: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006B48C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8006B490: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006B494: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8006B498: nop

    // 0x8006B49C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006B4A0: b           L_8006B4D0
    // 0x8006B4A4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_8006B4D0;
    // 0x8006B4A4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_8006B4A8:
    // 0x8006B4A8: jal         0x80014E80
    // 0x8006B4AC: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8006B4AC: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_2:
    // 0x8006B4B0: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8006B4B4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006B4B8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8006B4BC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006B4C0: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8006B4C4: nop

    // 0x8006B4C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006B4CC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_8006B4D0:
    // 0x8006B4D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006B4D4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8006B4D8: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8006B4DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006B4E0: lwc1        $f8, 0x4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8006B4E4: nop

    // 0x8006B4E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006B4EC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8006B4F0: jal         0x80014E80
    // 0x8006B4F4: addiu       $a0, $zero, -0xF0
    ctx->r4 = ADD32(0, -0XF0);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8006B4F4: addiu       $a0, $zero, -0xF0
    ctx->r4 = ADD32(0, -0XF0);
    after_3:
    // 0x8006B4F8: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8006B4FC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006B500: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8006B504: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8006B508: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8006B50C: nop

    // 0x8006B510: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006B514: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8006B518: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8006B51C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006B520: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8006B524: jal         0x80067748
    // 0x8006B528: nop

    func_80067748(rdram, ctx);
        goto after_4;
    // 0x8006B528: nop

    after_4:
    // 0x8006B52C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B530: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x8006B534: nop

    // 0x8006B538: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8006B53C: bne         $t7, $zero, L_8006B570
    if (ctx->r15 != 0) {
        // 0x8006B540: nop
    
            goto L_8006B570;
    }
    // 0x8006B540: nop

    // 0x8006B544: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8006B548: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006B54C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8006B550: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8006B554: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8006B558: addiu       $a1, $a1, 0x472C
    ctx->r5 = ADD32(ctx->r5, 0X472C);
    // 0x8006B55C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006B560: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8006B564: jal         0x80027464
    // 0x8006B568: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x8006B568: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x8006B56C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_8006B570:
    // 0x8006B570: b           L_8006B58C
    // 0x8006B574: nop

        goto L_8006B58C;
    // 0x8006B574: nop

L_8006B578:
    // 0x8006B578: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B57C: lhu         $t8, 0x793C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X793C);
    // 0x8006B580: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B584: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006B588: sh          $t9, 0x793C($at)
    MEM_H(0X793C, ctx->r1) = ctx->r25;
L_8006B58C:
    // 0x8006B58C: b           L_8006B594
    // 0x8006B590: nop

        goto L_8006B594;
    // 0x8006B590: nop

L_8006B594:
    // 0x8006B594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B598: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8006B59C: jr          $ra
    // 0x8006B5A0: nop

    return;
    // 0x8006B5A0: nop

;}
RECOMP_FUNC void func_80070934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070934: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80070938: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007093C: lb          $a0, 0x7A18($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7A18);
    // 0x80070940: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070944: beq         $a0, $at, L_80070978
    if (ctx->r4 == ctx->r1) {
        // 0x80070948: nop
    
            goto L_80070978;
    }
    // 0x80070948: nop

    // 0x8007094C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80070950: beq         $a0, $at, L_800709B8
    if (ctx->r4 == ctx->r1) {
        // 0x80070954: nop
    
            goto L_800709B8;
    }
    // 0x80070954: nop

    // 0x80070958: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007095C: beq         $a0, $at, L_800709F8
    if (ctx->r4 == ctx->r1) {
        // 0x80070960: nop
    
            goto L_800709F8;
    }
    // 0x80070960: nop

    // 0x80070964: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80070968: beq         $a0, $at, L_80070A38
    if (ctx->r4 == ctx->r1) {
        // 0x8007096C: nop
    
            goto L_80070A38;
    }
    // 0x8007096C: nop

    // 0x80070970: b           L_80070A5C
    // 0x80070974: nop

        goto L_80070A5C;
    // 0x80070974: nop

L_80070978:
    // 0x80070978: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007097C: lb          $t6, 0x7A1C($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A1C);
    // 0x80070980: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070984: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80070988: sb          $t7, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r15;
    // 0x8007098C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070990: lb          $t8, 0x7A1C($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7A1C);
    // 0x80070994: nop

    // 0x80070998: bne         $t8, $zero, L_800709B0
    if (ctx->r24 != 0) {
        // 0x8007099C: nop
    
            goto L_800709B0;
    }
    // 0x8007099C: nop

    // 0x800709A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800709A4: sb          $zero, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = 0;
    // 0x800709A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800709AC: sh          $zero, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = 0;
L_800709B0:
    // 0x800709B0: b           L_80070A5C
    // 0x800709B4: nop

        goto L_80070A5C;
    // 0x800709B4: nop

L_800709B8:
    // 0x800709B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800709BC: lb          $t9, 0x7A1C($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7A1C);
    // 0x800709C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800709C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800709C8: sb          $t0, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r8;
    // 0x800709CC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800709D0: lb          $t1, 0x7A1C($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7A1C);
    // 0x800709D4: nop

    // 0x800709D8: bne         $t1, $zero, L_800709F0
    if (ctx->r9 != 0) {
        // 0x800709DC: nop
    
            goto L_800709F0;
    }
    // 0x800709DC: nop

    // 0x800709E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800709E4: sb          $zero, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = 0;
    // 0x800709E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800709EC: sb          $zero, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = 0;
L_800709F0:
    // 0x800709F0: b           L_80070A5C
    // 0x800709F4: nop

        goto L_80070A5C;
    // 0x800709F4: nop

L_800709F8:
    // 0x800709F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800709FC: lb          $t2, 0x7A1C($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7A1C);
    // 0x80070A00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A04: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80070A08: sb          $t3, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r11;
    // 0x80070A0C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80070A10: lb          $t4, 0x7A1C($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7A1C);
    // 0x80070A14: nop

    // 0x80070A18: bne         $t4, $zero, L_80070A30
    if (ctx->r12 != 0) {
        // 0x80070A1C: nop
    
            goto L_80070A30;
    }
    // 0x80070A1C: nop

    // 0x80070A20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A24: sb          $zero, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = 0;
    // 0x80070A28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A2C: sb          $zero, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = 0;
L_80070A30:
    // 0x80070A30: b           L_80070A5C
    // 0x80070A34: nop

        goto L_80070A5C;
    // 0x80070A34: nop

L_80070A38:
    // 0x80070A38: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80070A3C: lh          $t5, 0x7618($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7618);
    // 0x80070A40: nop

    // 0x80070A44: bne         $t5, $zero, L_80070A54
    if (ctx->r13 != 0) {
        // 0x80070A48: nop
    
            goto L_80070A54;
    }
    // 0x80070A48: nop

    // 0x80070A4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A50: sb          $zero, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = 0;
L_80070A54:
    // 0x80070A54: b           L_80070A5C
    // 0x80070A58: nop

        goto L_80070A5C;
    // 0x80070A58: nop

L_80070A5C:
    // 0x80070A5C: b           L_80070A64
    // 0x80070A60: nop

        goto L_80070A64;
    // 0x80070A60: nop

L_80070A64:
    // 0x80070A64: jr          $ra
    // 0x80070A68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80070A68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DA158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA158: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DA15C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA160: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800DA164: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA168: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA16C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800DA170: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA174: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA178: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA17C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA180: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA184: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800DA188: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800DA18C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA190: beq         $s0, $at, L_800DA1AC
    if (ctx->r16 == ctx->r1) {
        // 0x800DA194: nop
    
            goto L_800DA1AC;
    }
    // 0x800DA194: nop

    // 0x800DA198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800DA19C: beq         $s0, $at, L_800DA1BC
    if (ctx->r16 == ctx->r1) {
        // 0x800DA1A0: nop
    
            goto L_800DA1BC;
    }
    // 0x800DA1A0: nop

    // 0x800DA1A4: b           L_800DA1CC
    // 0x800DA1A8: nop

        goto L_800DA1CC;
    // 0x800DA1A8: nop

L_800DA1AC:
    // 0x800DA1AC: jal         0x800D9BD4
    // 0x800DA1B0: nop

    func_800D9BD4(rdram, ctx);
        goto after_0;
    // 0x800DA1B0: nop

    after_0:
    // 0x800DA1B4: b           L_800DA1D4
    // 0x800DA1B8: nop

        goto L_800DA1D4;
    // 0x800DA1B8: nop

L_800DA1BC:
    // 0x800DA1BC: jal         0x800DA128
    // 0x800DA1C0: nop

    func_800DA128(rdram, ctx);
        goto after_1;
    // 0x800DA1C0: nop

    after_1:
    // 0x800DA1C4: b           L_800DA1D4
    // 0x800DA1C8: nop

        goto L_800DA1D4;
    // 0x800DA1C8: nop

L_800DA1CC:
    // 0x800DA1CC: b           L_800DA1D4
    // 0x800DA1D0: nop

        goto L_800DA1D4;
    // 0x800DA1D0: nop

L_800DA1D4:
    // 0x800DA1D4: b           L_800DA1DC
    // 0x800DA1D8: nop

        goto L_800DA1DC;
    // 0x800DA1D8: nop

L_800DA1DC:
    // 0x800DA1DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA1E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800DA1E4: jr          $ra
    // 0x800DA1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800DA1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007C6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C6D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007C6D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007C6DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007C6E0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007C6E4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007C6E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007C6EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007C6F0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007C6F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007C6F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007C6FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C700: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C704: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C708: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007C70C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007C710: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007C714: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007C718: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007C71C: jal         0x8007C39C
    // 0x8007C720: nop

    func_8007C39C(rdram, ctx);
        goto after_0;
    // 0x8007C720: nop

    after_0:
    // 0x8007C724: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007C728: lh          $t0, -0x1D08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D08);
    // 0x8007C72C: nop

    // 0x8007C730: beq         $t0, $zero, L_8007C87C
    if (ctx->r8 == 0) {
        // 0x8007C734: nop
    
            goto L_8007C87C;
    }
    // 0x8007C734: nop

    // 0x8007C738: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007C73C: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x8007C740: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007C744: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8007C748: mflo        $t2
    ctx->r10 = lo;
    // 0x8007C74C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007C750: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8007C754: nop

    // 0x8007C758: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007C75C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8007C760: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007C764: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007C768: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007C76C: nop

    // 0x8007C770: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8007C774: nop

    // 0x8007C778: bc1f        L_8007C790
    if (!c1cs) {
        // 0x8007C77C: nop
    
            goto L_8007C790;
    }
    // 0x8007C77C: nop

    // 0x8007C780: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007C784: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007C788: nop

    // 0x8007C78C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_8007C790:
    // 0x8007C790: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007C794: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8007C798: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007C79C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007C7A0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007C7A4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007C7A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007C7AC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007C7B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007C7B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007C7B8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8007C7BC: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    // 0x8007C7C0: swc1        $f22, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f22.u32l;
    // 0x8007C7C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007C7C8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007C7CC: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8007C7D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007C7D4: nop

    // 0x8007C7D8: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x8007C7DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007C7E0: lh          $t7, -0x1D08($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D08);
    // 0x8007C7E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007C7E8: bne         $t7, $at, L_8007C814
    if (ctx->r15 != ctx->r1) {
        // 0x8007C7EC: nop
    
            goto L_8007C814;
    }
    // 0x8007C7EC: nop

    // 0x8007C7F0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007C7F4: addiu       $a3, $a3, 0x649C
    ctx->r7 = ADD32(ctx->r7, 0X649C);
    // 0x8007C7F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007C7FC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007C800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C804: jal         0x8001ABF4
    // 0x8007C808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8007C808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007C80C: b           L_8007C87C
    // 0x8007C810: nop

        goto L_8007C87C;
    // 0x8007C810: nop

L_8007C814:
    // 0x8007C814: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007C818: lh          $t8, -0x1D08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D08);
    // 0x8007C81C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007C820: bne         $t8, $at, L_8007C84C
    if (ctx->r24 != ctx->r1) {
        // 0x8007C824: nop
    
            goto L_8007C84C;
    }
    // 0x8007C824: nop

    // 0x8007C828: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007C82C: addiu       $a3, $a3, 0x649C
    ctx->r7 = ADD32(ctx->r7, 0X649C);
    // 0x8007C830: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007C834: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007C838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C83C: jal         0x8001ABF4
    // 0x8007C840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8007C840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8007C844: b           L_8007C87C
    // 0x8007C848: nop

        goto L_8007C87C;
    // 0x8007C848: nop

L_8007C84C:
    // 0x8007C84C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007C850: lh          $t9, -0x1D08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D08);
    // 0x8007C854: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8007C858: bne         $t9, $at, L_8007C87C
    if (ctx->r25 != ctx->r1) {
        // 0x8007C85C: nop
    
            goto L_8007C87C;
    }
    // 0x8007C85C: nop

    // 0x8007C860: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007C864: addiu       $a3, $a3, 0x649C
    ctx->r7 = ADD32(ctx->r7, 0X649C);
    // 0x8007C868: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007C86C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8007C870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C874: jal         0x8001ABF4
    // 0x8007C878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007C878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8007C87C:
    // 0x8007C87C: b           L_8007C884
    // 0x8007C880: nop

        goto L_8007C884;
    // 0x8007C880: nop

L_8007C884:
    // 0x8007C884: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007C888: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007C88C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007C890: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007C894: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007C898: jr          $ra
    // 0x8007C89C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007C89C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008057C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008057C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80080580: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80080584: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080588: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008058C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80080590: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80080594: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80080598: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008059C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800805A0: addiu       $t6, $zero, 0x2C4
    ctx->r14 = ADD32(0, 0X2C4);
    // 0x800805A4: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x800805A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800805AC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800805B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800805B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800805B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800805BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800805C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800805C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800805C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800805CC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800805D0: sh          $t9, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r25;
    // 0x800805D4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800805D8: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800805DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800805E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800805E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800805E8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800805EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800805F0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800805F4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800805F8: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x800805FC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80080600: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80080604: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080608: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8008060C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80080610: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080614: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80080618: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008061C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80080620: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x80080624: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80080628: jr          $ra
    // 0x8008062C: nop

    return;
    // 0x8008062C: nop

    // 0x80080630: jr          $ra
    // 0x80080634: nop

    return;
    // 0x80080634: nop

;}
RECOMP_FUNC void func_800781D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800781D4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800781D8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800781DC: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x800781E0: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x800781E4: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x800781E8: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x800781EC: lwc1        $f14, 0xB4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x800781F0: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x800781F4: jal         0x80078168
    // 0x800781F8: nop

    func_80078168(rdram, ctx);
        goto after_0;
    // 0x800781F8: nop

    after_0:
    // 0x800781FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80078200: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80078204: nop

    // 0x80078208: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8007820C: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80078210: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80078214: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80078218: nop

    // 0x8007821C: sb          $t8, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r24;
    // 0x80078220: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80078224: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80078228: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007822C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80078230: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x80078234: nop

    // 0x80078238: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x8007823C: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80078240: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80078244: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80078248: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007824C: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x80078250: nop

    // 0x80078254: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x80078258: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8007825C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80078260: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80078264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80078268: lw          $t7, 0x7710($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7710);
    // 0x8007826C: nop

    // 0x80078270: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x80078274: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80078278: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007827C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80078280: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80078284: lw          $t0, 0x7720($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7720);
    // 0x80078288: nop

    // 0x8007828C: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x80078290: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x80078294: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80078298: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007829C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800782A0: lw          $t3, 0x7730($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7730);
    // 0x800782A4: nop

    // 0x800782A8: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x800782AC: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x800782B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800782B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800782B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800782BC: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800782C0: nop

    // 0x800782C4: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x800782C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800782CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800782D0: lw          $t7, 0x7970($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7970);
    // 0x800782D4: lw          $t6, 0x7968($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7968);
    // 0x800782D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800782DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800782E0: lw          $t9, 0x7980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7980);
    // 0x800782E4: lw          $t8, 0x7978($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7978);
    // 0x800782E8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800782EC: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x800782F0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800782F4: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800782F8: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x800782FC: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x80078300: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x80078304: addiu       $t5, $sp, 0x88
    ctx->r13 = ADD32(ctx->r29, 0X88);
    // 0x80078308: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x8007830C: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80078310: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80078314: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80078318: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007831C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80078320: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80078324: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80078328: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8007832C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80078330: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80078334: jal         0x80016A80
    // 0x80078338: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80016A80(rdram, ctx);
        goto after_1;
    // 0x80078338: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_1:
    // 0x8007833C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80078340: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80078344: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80078348: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8007834C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80078350: sra         $a0, $t8, 31
    ctx->r4 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80078354: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80078358: sra         $a2, $t0, 31
    ctx->r6 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8007835C: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x80078360: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x80078364: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x80078368: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x8007836C: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x80078370: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80078374: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80078378: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8007837C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80078380: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80078384: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80078388: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8007838C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80078390: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80078394: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80078398: jal         0x80016A80
    // 0x8007839C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80016A80(rdram, ctx);
        goto after_2;
    // 0x8007839C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x800783A0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800783A4: lw          $t1, 0x7968($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7968);
    // 0x800783A8: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x800783AC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800783B0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800783B4: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800783B8: lw          $t3, 0x7978($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7978);
    // 0x800783BC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800783C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800783C4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800783C8: lw          $t2, 0x7970($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7970);
    // 0x800783CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800783D0: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x800783D4: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x800783D8: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x800783DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800783E0: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800783E4: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x800783E8: lw          $t9, 0x7980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7980);
    // 0x800783EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800783F0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800783F4: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800783F8: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x800783FC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80078400: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80078404: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80078408: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8007840C: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x80078410: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80078414: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x80078418: lw          $t5, 0x7710($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7710);
    // 0x8007841C: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x80078420: or          $t7, $t9, $zero
    ctx->r15 = ctx->r25 | 0;
    // 0x80078424: sra         $t6, $t9, 31
    ctx->r14 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80078428: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8007842C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80078430: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80078434: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80078438: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8007843C: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x80078440: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x80078444: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80078448: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8007844C: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80078450: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80078454: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80078458: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8007845C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80078460: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80078464: jal         0x8001608C
    // 0x80078468: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    Math_ComparePlanes(rdram, ctx);
        goto after_3;
    // 0x80078468: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_3:
    // 0x8007846C: beq         $v0, $zero, L_8007849C
    if (ctx->r2 == 0) {
        // 0x80078470: nop
    
            goto L_8007849C;
    }
    // 0x80078470: nop

    // 0x80078474: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80078478: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007847C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80078480: nop

    // 0x80078484: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80078488: nop

    // 0x8007848C: bc1f        L_8007849C
    if (!c1cs) {
        // 0x80078490: nop
    
            goto L_8007849C;
    }
    // 0x80078490: nop

    // 0x80078494: b           L_8007896C
    // 0x80078498: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007896C;
    // 0x80078498: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007849C:
    // 0x8007849C: lbu         $t4, 0x93($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X93);
    // 0x800784A0: nop

    // 0x800784A4: bne         $t4, $zero, L_8007870C
    if (ctx->r12 != 0) {
        // 0x800784A8: nop
    
            goto L_8007870C;
    }
    // 0x800784A8: nop

    // 0x800784AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800784B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800784B4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800784B8: nop

    // 0x800784BC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800784C0: nop

    // 0x800784C4: bc1f        L_800786FC
    if (!c1cs) {
        // 0x800784C8: nop
    
            goto L_800786FC;
    }
    // 0x800784C8: nop

    // 0x800784CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800784D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800784D4: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800784D8: nop

    // 0x800784DC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800784E0: nop

    // 0x800784E4: bc1f        L_800786FC
    if (!c1cs) {
        // 0x800784E8: nop
    
            goto L_800786FC;
    }
    // 0x800784E8: nop

    // 0x800784EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800784F0: lwc1        $f6, 0x7990($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7990);
    // 0x800784F4: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800784F8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800784FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80078500: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80078504: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80078508: nop

    // 0x8007850C: bc1f        L_8007851C
    if (!c1cs) {
        // 0x80078510: nop
    
            goto L_8007851C;
    }
    // 0x80078510: nop

    // 0x80078514: b           L_8007896C
    // 0x80078518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007896C;
    // 0x80078518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007851C:
    // 0x8007851C: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80078520: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80078524: nop

    // 0x80078528: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8007852C: nop

    // 0x80078530: bc1f        L_80078554
    if (!c1cs) {
        // 0x80078534: nop
    
            goto L_80078554;
    }
    // 0x80078534: nop

    // 0x80078538: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8007853C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80078540: nop

    // 0x80078544: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80078548: nop

    // 0x8007854C: bc1t        L_800786FC
    if (c1cs) {
        // 0x80078550: nop
    
            goto L_800786FC;
    }
    // 0x80078550: nop

L_80078554:
    // 0x80078554: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80078558: lw          $t6, 0x7968($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7968);
    // 0x8007855C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80078560: lw          $t5, 0x7978($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7978);
    // 0x80078564: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80078568: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007856C: lw          $t0, 0x7980($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7980);
    // 0x80078570: lw          $t7, 0x7970($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7970);
    // 0x80078574: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80078578: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x8007857C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80078580: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x80078584: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x80078588: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8007858C: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80078590: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80078594: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80078598: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8007859C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800785A0: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x800785A4: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x800785A8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x800785AC: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x800785B0: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x800785B4: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800785B8: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x800785BC: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800785C0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800785C4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800785C8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800785CC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800785D0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800785D4: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x800785D8: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x800785DC: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x800785E0: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x800785E4: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x800785E8: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x800785EC: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x800785F0: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x800785F4: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x800785F8: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x800785FC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80078600: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80078604: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80078608: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8007860C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80078610: jal         0x80016714
    // 0x80078614: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    func_80016714(rdram, ctx);
        goto after_4;
    // 0x80078614: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    after_4:
    // 0x80078618: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8007861C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80078620: nop

    // 0x80078624: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80078628: nop

    // 0x8007862C: bc1f        L_80078688
    if (!c1cs) {
        // 0x80078630: nop
    
            goto L_80078688;
    }
    // 0x80078630: nop

    // 0x80078634: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80078638: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007863C: nop

    // 0x80078640: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80078644: nop

    // 0x80078648: bc1f        L_80078688
    if (!c1cs) {
        // 0x8007864C: nop
    
            goto L_80078688;
    }
    // 0x8007864C: nop

    // 0x80078650: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80078654: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80078658: nop

    // 0x8007865C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80078660: nop

    // 0x80078664: bc1f        L_80078688
    if (!c1cs) {
        // 0x80078668: nop
    
            goto L_80078688;
    }
    // 0x80078668: nop

    // 0x8007866C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80078670: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80078674: nop

    // 0x80078678: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8007867C: nop

    // 0x80078680: bc1t        L_800786FC
    if (c1cs) {
        // 0x80078684: nop
    
            goto L_800786FC;
    }
    // 0x80078684: nop

L_80078688:
    // 0x80078688: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007868C: lwc1        $f12, 0x7998($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7998);
    // 0x80078690: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80078694: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80078698: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007869C: lwc1        $f14, 0x79A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X79A8);
    // 0x800786A0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x800786A4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x800786A8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800786AC: jal         0x800162F0
    // 0x800786B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_5;
    // 0x800786B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800786B4: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x800786B8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800786BC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800786C0: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x800786C4: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x800786C8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x800786CC: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x800786D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800786D4: jal         0x800162F0
    // 0x800786D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_6;
    // 0x800786D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800786DC: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x800786E0: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x800786E4: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x800786E8: nop

    // 0x800786EC: beq         $t7, $t0, L_800786FC
    if (ctx->r15 == ctx->r8) {
        // 0x800786F0: nop
    
            goto L_800786FC;
    }
    // 0x800786F0: nop

    // 0x800786F4: b           L_8007896C
    // 0x800786F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007896C;
    // 0x800786F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800786FC:
    // 0x800786FC: b           L_8007896C
    // 0x80078700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8007896C;
    // 0x80078700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80078704: b           L_80078964
    // 0x80078708: nop

        goto L_80078964;
    // 0x80078708: nop

L_8007870C:
    // 0x8007870C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80078710: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80078714: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80078718: nop

    // 0x8007871C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80078720: nop

    // 0x80078724: bc1f        L_8007895C
    if (!c1cs) {
        // 0x80078728: nop
    
            goto L_8007895C;
    }
    // 0x80078728: nop

    // 0x8007872C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80078730: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80078734: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80078738: nop

    // 0x8007873C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80078740: nop

    // 0x80078744: bc1f        L_8007895C
    if (!c1cs) {
        // 0x80078748: nop
    
            goto L_8007895C;
    }
    // 0x80078748: nop

    // 0x8007874C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078750: lwc1        $f8, 0x7990($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7990);
    // 0x80078754: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80078758: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007875C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80078760: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80078764: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80078768: nop

    // 0x8007876C: bc1f        L_8007877C
    if (!c1cs) {
        // 0x80078770: nop
    
            goto L_8007877C;
    }
    // 0x80078770: nop

    // 0x80078774: b           L_8007896C
    // 0x80078778: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8007896C;
    // 0x80078778: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8007877C:
    // 0x8007877C: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80078780: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80078784: nop

    // 0x80078788: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8007878C: nop

    // 0x80078790: bc1f        L_800787B4
    if (!c1cs) {
        // 0x80078794: nop
    
            goto L_800787B4;
    }
    // 0x80078794: nop

    // 0x80078798: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8007879C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800787A0: nop

    // 0x800787A4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800787A8: nop

    // 0x800787AC: bc1t        L_8007895C
    if (c1cs) {
        // 0x800787B0: nop
    
            goto L_8007895C;
    }
    // 0x800787B0: nop

L_800787B4:
    // 0x800787B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800787B8: lw          $t2, 0x7970($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7970);
    // 0x800787BC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800787C0: lw          $t4, 0x7978($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7978);
    // 0x800787C4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800787C8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800787CC: lw          $t5, 0x7980($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7980);
    // 0x800787D0: lw          $t1, 0x7968($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7968);
    // 0x800787D4: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800787D8: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x800787DC: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800787E0: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x800787E4: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x800787E8: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x800787EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800787F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800787F4: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x800787F8: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x800787FC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80078800: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80078804: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80078808: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8007880C: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x80078810: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80078814: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x80078818: sra         $t0, $t3, 31
    ctx->r8 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8007881C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80078820: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80078824: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80078828: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8007882C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80078830: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80078834: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x80078838: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x8007883C: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x80078840: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80078844: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80078848: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8007884C: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80078850: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80078854: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80078858: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007885C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80078860: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80078864: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80078868: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8007886C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x80078870: jal         0x80016714
    // 0x80078874: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    func_80016714(rdram, ctx);
        goto after_7;
    // 0x80078874: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    after_7:
    // 0x80078878: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8007887C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80078880: nop

    // 0x80078884: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80078888: nop

    // 0x8007888C: bc1f        L_800788E8
    if (!c1cs) {
        // 0x80078890: nop
    
            goto L_800788E8;
    }
    // 0x80078890: nop

    // 0x80078894: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80078898: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007889C: nop

    // 0x800788A0: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800788A4: nop

    // 0x800788A8: bc1f        L_800788E8
    if (!c1cs) {
        // 0x800788AC: nop
    
            goto L_800788E8;
    }
    // 0x800788AC: nop

    // 0x800788B0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800788B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800788B8: nop

    // 0x800788BC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800788C0: nop

    // 0x800788C4: bc1f        L_800788E8
    if (!c1cs) {
        // 0x800788C8: nop
    
            goto L_800788E8;
    }
    // 0x800788C8: nop

    // 0x800788CC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800788D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800788D4: nop

    // 0x800788D8: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800788DC: nop

    // 0x800788E0: bc1t        L_8007895C
    if (c1cs) {
        // 0x800788E4: nop
    
            goto L_8007895C;
    }
    // 0x800788E4: nop

L_800788E8:
    // 0x800788E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800788EC: lwc1        $f12, 0x7998($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7998);
    // 0x800788F0: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800788F4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800788F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800788FC: lwc1        $f14, 0x79A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X79A8);
    // 0x80078900: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80078904: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80078908: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8007890C: jal         0x800162F0
    // 0x80078910: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_8;
    // 0x80078910: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80078914: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80078918: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007891C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80078920: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80078924: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80078928: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8007892C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80078930: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80078934: jal         0x800162F0
    // 0x80078938: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_9;
    // 0x80078938: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x8007893C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80078940: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80078944: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80078948: nop

    // 0x8007894C: beq         $t6, $t8, L_8007895C
    if (ctx->r14 == ctx->r24) {
        // 0x80078950: nop
    
            goto L_8007895C;
    }
    // 0x80078950: nop

    // 0x80078954: b           L_8007896C
    // 0x80078958: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8007896C;
    // 0x80078958: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8007895C:
    // 0x8007895C: b           L_8007896C
    // 0x80078960: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8007896C;
    // 0x80078960: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80078964:
    // 0x80078964: b           L_8007896C
    // 0x80078968: nop

        goto L_8007896C;
    // 0x80078968: nop

L_8007896C:
    // 0x8007896C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80078970: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80078974: jr          $ra
    // 0x80078978: nop

    return;
    // 0x80078978: nop

;}
RECOMP_FUNC void func_800EE444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE444: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EE448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EE44C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800EE450: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800EE454: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EE458: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EE45C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EE460: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EE464: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EE468: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EE46C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EE470: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EE474: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EE478: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EE47C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EE480: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EE484: addiu       $a1, $a1, 0x43D8
    ctx->r5 = ADD32(ctx->r5, 0X43D8);
    // 0x800EE488: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EE48C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EE490: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800EE494: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EE498: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EE49C: jal         0x80027464
    // 0x800EE4A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EE4A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EE4A4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800EE4A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE4AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EE4B0: beq         $t1, $at, L_800EE6E0
    if (ctx->r9 == ctx->r1) {
        // 0x800EE4B4: nop
    
            goto L_800EE6E0;
    }
    // 0x800EE4B4: nop

    // 0x800EE4B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EE4BC: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EE4C0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE4C4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EE4C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EE4CC: jal         0x8001ABF4
    // 0x800EE4D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800EE4D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800EE4D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE4D8: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x800EE4DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EE4E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE4E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EE4E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE4EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EE4F0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x800EE4F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EE4F8: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EE4FC: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x800EE500: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EE504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EE508: jal         0x8001ABF4
    // 0x800EE50C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EE50C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800EE510: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE514: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EE518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE51C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE520: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EE524: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EE528: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EE52C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EE530: jal         0x800295C0
    // 0x800EE534: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800EE534: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800EE538: beq         $v0, $zero, L_800EE56C
    if (ctx->r2 == 0) {
        // 0x800EE53C: nop
    
            goto L_800EE56C;
    }
    // 0x800EE53C: nop

    // 0x800EE540: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE544: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE548: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800EE54C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EE550: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EE554: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EE558: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EE55C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE560: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EE564: b           L_800EE594
    // 0x800EE568: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_800EE594;
    // 0x800EE568: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_800EE56C:
    // 0x800EE56C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE570: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EE574: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EE578: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE57C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EE580: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE584: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EE588: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE58C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EE590: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_800EE594:
    // 0x800EE594: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE598: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EE59C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800EE5A0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800EE5A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EE5A8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800EE5AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EE5B0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EE5B4: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800EE5B8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800EE5BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EE5C0: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800EE5C4: nop

    // 0x800EE5C8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EE5CC: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x800EE5D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE5D4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800EE5D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EE5DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE5E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EE5E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE5E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EE5EC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800EE5F0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800EE5F4: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x800EE5F8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EE5FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EE600: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE604: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EE608: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EE60C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EE610: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x800EE614: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800EE618: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE61C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE620: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EE624: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EE628: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EE62C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EE630: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EE634: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EE638: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EE63C: sb          $t6, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r14;
    // 0x800EE640: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE644: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800EE648: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EE64C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE650: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EE654: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800EE658: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EE65C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EE660: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800EE664: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800EE668: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800EE66C: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x800EE670: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800EE674: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800EE678: nop

    // 0x800EE67C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800EE680: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800EE684: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800EE688: sh          $t4, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r12;
    // 0x800EE68C: nop

    // 0x800EE690: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE694: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800EE698: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EE69C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EE6A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EE6A4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800EE6A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EE6AC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EE6B0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800EE6B4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800EE6B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800EE6BC: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x800EE6C0: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800EE6C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800EE6C8: nop

    // 0x800EE6CC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800EE6D0: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800EE6D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800EE6D8: sh          $t3, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r11;
    // 0x800EE6DC: nop

L_800EE6E0:
    // 0x800EE6E0: b           L_800EE6E8
    // 0x800EE6E4: nop

        goto L_800EE6E8;
    // 0x800EE6E4: nop

L_800EE6E8:
    // 0x800EE6E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE6EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EE6F0: jr          $ra
    // 0x800EE6F4: nop

    return;
    // 0x800EE6F4: nop

;}
RECOMP_FUNC void func_8008F078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F078: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008F07C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008F080: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008F084: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008F088: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F08C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F090: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F094: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008F098: nop

    // 0x8008F09C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008F0A0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008F0A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008F0A8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008F0AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008F0B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008F0B4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008F0B8: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x8008F0BC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008F0C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008F0C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008F0C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008F0CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8008F0D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008F0D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008F0D8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008F0DC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8008F0E0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008F0E4: lwc1        $f16, 0xC($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0XC);
    // 0x8008F0E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008F0EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8008F0F0: nop

    // 0x8008F0F4: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8008F0F8: swc1        $f8, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f8.u32l;
    // 0x8008F0FC: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x8008F100: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008F104: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8008F108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008F10C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008F110: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008F114: lh          $t0, 0x8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X8);
    // 0x8008F118: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8008F11C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008F120: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F124: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F128: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008F12C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F130: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008F134: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008F138: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8008F13C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008F140: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8008F144: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008F148: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8008F14C: nop

    // 0x8008F150: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8008F154: swc1        $f4, 0xDC($t9)
    MEM_W(0XDC, ctx->r25) = ctx->f4.u32l;
    // 0x8008F158: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8008F15C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008F160: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8008F164: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008F168: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008F16C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8008F170: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8008F174: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8008F178: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8008F17C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008F180: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008F184: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008F188: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008F18C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008F190: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8008F194: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8008F198: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8008F19C: lwc1        $f16, 0x14($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X14);
    // 0x8008F1A0: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008F1A4: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8008F1A8: nop

    // 0x8008F1AC: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8008F1B0: swc1        $f10, 0xE0($t5)
    MEM_W(0XE0, ctx->r13) = ctx->f10.u32l;
    // 0x8008F1B4: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x8008F1B8: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8008F1BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F1C0: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x8008F1C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008F1C8: sh          $t7, 0x4CE8($at)
    MEM_H(0X4CE8, ctx->r1) = ctx->r15;
    // 0x8008F1CC: b           L_8008F1D4
    // 0x8008F1D0: nop

        goto L_8008F1D4;
    // 0x8008F1D0: nop

L_8008F1D4:
    // 0x8008F1D4: jr          $ra
    // 0x8008F1D8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008F1D8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80093714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009371C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093720: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093724: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093728: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009372C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093730: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093734: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093738: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009373C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80093740: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093744: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80093748: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009374C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093750: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093754: addiu       $a1, $a1, 0x1850
    ctx->r5 = ADD32(ctx->r5, 0X1850);
    // 0x80093758: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009375C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093760: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80093764: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093768: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009376C: jal         0x80027464
    // 0x80093770: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093770: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093774: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093778: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009377C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80093780: beq         $t1, $at, L_800937F8
    if (ctx->r9 == ctx->r1) {
        // 0x80093784: nop
    
            goto L_800937F8;
    }
    // 0x80093784: nop

    // 0x80093788: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009378C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093790: jal         0x80027B34
    // 0x80093794: addiu       $a1, $a1, 0x1828
    ctx->r5 = ADD32(ctx->r5, 0X1828);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x80093794: addiu       $a1, $a1, 0x1828
    ctx->r5 = ADD32(ctx->r5, 0X1828);
    after_1:
    // 0x80093798: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009379C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800937A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800937A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800937A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800937AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800937B0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800937B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800937B8: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800937BC: nop

    // 0x800937C0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800937C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800937C8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800937CC: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x800937D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800937D4: jal         0x8001ABF4
    // 0x800937D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800937D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800937DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800937E0: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x800937E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800937E8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800937EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800937F0: jal         0x8001ABF4
    // 0x800937F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800937F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800937F8:
    // 0x800937F8: b           L_80093800
    // 0x800937FC: nop

        goto L_80093800;
    // 0x800937FC: nop

L_80093800:
    // 0x80093800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093804: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093808: jr          $ra
    // 0x8009380C: nop

    return;
    // 0x8009380C: nop

;}
RECOMP_FUNC void func_800989E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800989E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800989E4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800989E8: nop

    // 0x800989EC: bne         $t6, $zero, L_80098A24
    if (ctx->r14 != 0) {
        // 0x800989F0: nop
    
            goto L_80098A24;
    }
    // 0x800989F0: nop

    // 0x800989F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800989F8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800989FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098A00: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80098A04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80098A08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80098A0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80098A10: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80098A14: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80098A18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80098A1C: b           L_80098A94
    // 0x80098A20: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
        goto L_80098A94;
    // 0x80098A20: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
L_80098A24:
    // 0x80098A24: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80098A28: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80098A2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098A30: bne         $t0, $at, L_80098A68
    if (ctx->r8 != ctx->r1) {
        // 0x80098A34: nop
    
            goto L_80098A68;
    }
    // 0x80098A34: nop

    // 0x80098A38: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80098A3C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80098A40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098A44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80098A48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80098A4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80098A50: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80098A54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80098A58: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80098A5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80098A60: b           L_80098A94
    // 0x80098A64: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
        goto L_80098A94;
    // 0x80098A64: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
L_80098A68:
    // 0x80098A68: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80098A6C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80098A70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098A74: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80098A78: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80098A7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80098A80: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80098A84: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80098A88: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80098A8C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80098A90: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
L_80098A94:
    // 0x80098A94: jr          $ra
    // 0x80098A98: nop

    return;
    // 0x80098A98: nop

    // 0x80098A9C: jr          $ra
    // 0x80098AA0: nop

    return;
    // 0x80098AA0: nop

;}
RECOMP_FUNC void func_800B9EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9EA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B9EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B9EA8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B9EAC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B9EB0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B9EB4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B9EB8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B9EBC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B9EC0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B9EC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B9EC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B9ECC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B9ED0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B9ED4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B9ED8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9EDC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B9EE0: addiu       $a1, $a1, 0x3ACC
    ctx->r5 = ADD32(ctx->r5, 0X3ACC);
    // 0x800B9EE4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B9EE8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B9EEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B9EF0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B9EF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B9EF8: jal         0x80027464
    // 0x800B9EFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B9EFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B9F00: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800B9F04: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B9F08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B9F0C: beq         $t1, $at, L_800B9FE4
    if (ctx->r9 == ctx->r1) {
        // 0x800B9F10: nop
    
            goto L_800B9FE4;
    }
    // 0x800B9F10: nop

    // 0x800B9F14: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800B9F18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9F1C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B9F20: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B9F24: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B9F28: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B9F2C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B9F30: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B9F34: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B9F38: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B9F3C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800B9F40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9F44: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B9F48: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B9F4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B9F50: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B9F54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B9F58: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B9F5C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B9F60: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x800B9F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9F68: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800B9F6C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800B9F70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800B9F74: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800B9F78: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800B9F7C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800B9F80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B9F84: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x800B9F88: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B9F8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9F90: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800B9F94: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800B9F98: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B9F9C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800B9FA0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B9FA4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B9FA8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800B9FAC: sh          $t0, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r8;
    // 0x800B9FB0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800B9FB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9FB8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800B9FBC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800B9FC0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800B9FC4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800B9FC8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800B9FCC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800B9FD0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800B9FD4: sb          $t2, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = ctx->r10;
    // 0x800B9FD8: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B9FDC: jal         0x8001BB34
    // 0x800B9FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800B9FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800B9FE4:
    // 0x800B9FE4: b           L_800B9FEC
    // 0x800B9FE8: nop

        goto L_800B9FEC;
    // 0x800B9FE8: nop

L_800B9FEC:
    // 0x800B9FEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9FF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B9FF4: jr          $ra
    // 0x800B9FF8: nop

    return;
    // 0x800B9FF8: nop

;}
RECOMP_FUNC void func_800DAA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAA2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DAA30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DAA34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DAA38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DAA3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DAA40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAA44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DAA48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAA4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DAA50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DAA54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DAA58: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DAA5C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DAA60: nop

    // 0x800DAA64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DAA68: nop

    // 0x800DAA6C: bne         $t1, $zero, L_800DAA8C
    if (ctx->r9 != 0) {
        // 0x800DAA70: nop
    
            goto L_800DAA8C;
    }
    // 0x800DAA70: nop

    // 0x800DAA74: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DAA78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DAA7C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800DAA80: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DAA84: nop

    // 0x800DAA88: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_800DAA8C:
    // 0x800DAA8C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DAA90: nop

    // 0x800DAA94: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800DAA98: nop

    // 0x800DAA9C: slti        $at, $t6, 0xC
    ctx->r1 = SIGNED(ctx->r14) < 0XC ? 1 : 0;
    // 0x800DAAA0: beq         $at, $zero, L_800DAB18
    if (ctx->r1 == 0) {
        // 0x800DAAA4: nop
    
            goto L_800DAB18;
    }
    // 0x800DAAA4: nop

    // 0x800DAAA8: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800DAAAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAAB0: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800DAAB4: lwc1        $f9, 0x5148($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5148);
    // 0x800DAAB8: lwc1        $f8, 0x514C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X514C);
    // 0x800DAABC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800DAAC0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800DAAC4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800DAAC8: swc1        $f16, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f16.u32l;
    // 0x800DAACC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DAAD0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAAD4: lwc1        $f18, 0x10($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X10);
    // 0x800DAAD8: lwc1        $f7, 0x5150($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5150);
    // 0x800DAADC: lwc1        $f6, 0x5154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5154);
    // 0x800DAAE0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800DAAE4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800DAAE8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800DAAEC: swc1        $f10, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f10.u32l;
    // 0x800DAAF0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800DAAF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAAF8: lwc1        $f16, 0x14($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800DAAFC: lwc1        $f5, 0x5158($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5158);
    // 0x800DAB00: lwc1        $f4, 0x515C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X515C);
    // 0x800DAB04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800DAB08: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800DAB0C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800DAB10: b           L_800DAB84
    // 0x800DAB14: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
        goto L_800DAB84;
    // 0x800DAB14: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
L_800DAB18:
    // 0x800DAB18: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DAB1C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAB20: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800DAB24: lwc1        $f19, 0x5160($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5160);
    // 0x800DAB28: lwc1        $f18, 0x5164($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5164);
    // 0x800DAB2C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800DAB30: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x800DAB34: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800DAB38: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x800DAB3C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DAB40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAB44: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x800DAB48: lwc1        $f17, 0x5168($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5168);
    // 0x800DAB4C: lwc1        $f16, 0x516C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X516C);
    // 0x800DAB50: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800DAB54: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x800DAB58: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800DAB5C: swc1        $f4, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f4.u32l;
    // 0x800DAB60: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DAB64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DAB68: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800DAB6C: lwc1        $f11, 0x5170($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5170);
    // 0x800DAB70: lwc1        $f10, 0x5174($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5174);
    // 0x800DAB74: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800DAB78: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x800DAB7C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800DAB80: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
L_800DAB84:
    // 0x800DAB84: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DAB88: nop

    // 0x800DAB8C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800DAB90: nop

    // 0x800DAB94: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800DAB98: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800DAB9C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DABA0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800DABA4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800DABA8: nop

    // 0x800DABAC: bne         $t7, $at, L_800DABC0
    if (ctx->r15 != ctx->r1) {
        // 0x800DABB0: nop
    
            goto L_800DABC0;
    }
    // 0x800DABB0: nop

    // 0x800DABB4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DABB8: nop

    // 0x800DABBC: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800DABC0:
    // 0x800DABC0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800DABC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DABC8: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800DABCC: nop

    // 0x800DABD0: bne         $t0, $at, L_800DAC2C
    if (ctx->r8 != ctx->r1) {
        // 0x800DABD4: nop
    
            goto L_800DAC2C;
    }
    // 0x800DABD4: nop

    // 0x800DABD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DABDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DABE0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DABE4: nop

    // 0x800DABE8: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x800DABEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DABF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DABF4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DABF8: nop

    // 0x800DABFC: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800DAC00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DAC04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DAC08: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DAC0C: nop

    // 0x800DAC10: swc1        $f8, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f8.u32l;
    // 0x800DAC14: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DAC18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800DAC1C: sh          $t5, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r13;
    // 0x800DAC20: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DAC24: nop

    // 0x800DAC28: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800DAC2C:
    // 0x800DAC2C: b           L_800DAC34
    // 0x800DAC30: nop

        goto L_800DAC34;
    // 0x800DAC30: nop

L_800DAC34:
    // 0x800DAC34: jr          $ra
    // 0x800DAC38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DAC38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008EB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EB9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008EBA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EBA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008EBA8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008EBAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008EBB0: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008EBB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008EBB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EBBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EBC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EBC4: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8008EBC8: lw          $a0, 0x4D48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4D48);
    // 0x8008EBCC: jal         0x8001BBDC
    // 0x8008EBD0: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8008EBD0: nop

    after_0:
    // 0x8008EBD4: b           L_8008EBDC
    // 0x8008EBD8: nop

        goto L_8008EBDC;
    // 0x8008EBD8: nop

L_8008EBDC:
    // 0x8008EBDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008EBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008EBE4: jr          $ra
    // 0x8008EBE8: nop

    return;
    // 0x8008EBE8: nop

;}
RECOMP_FUNC void Skybox_MoveDpad(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D7A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006D7A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D7A8: lwc1        $f4, 0x759C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X759C);
    // 0x8006D7AC: nop

    // 0x8006D7B0: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8006D7B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D7B8: lwc1        $f6, 0x75A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75A4);
    // 0x8006D7BC: nop

    // 0x8006D7C0: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x8006D7C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006D7C8: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8006D7CC: nop

    // 0x8006D7D0: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x8006D7D4: beq         $t7, $zero, L_8006D7F8
    if (ctx->r15 == 0) {
        // 0x8006D7D8: nop
    
            goto L_8006D7F8;
    }
    // 0x8006D7D8: nop

    // 0x8006D7DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006D7E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006D7E4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006D7E8: nop

    // 0x8006D7EC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8006D7F0: b           L_8006D828
    // 0x8006D7F4: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
        goto L_8006D828;
    // 0x8006D7F4: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
L_8006D7F8:
    // 0x8006D7F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006D7FC: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x8006D800: nop

    // 0x8006D804: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x8006D808: beq         $t9, $zero, L_8006D828
    if (ctx->r25 == 0) {
        // 0x8006D80C: nop
    
            goto L_8006D828;
    }
    // 0x8006D80C: nop

    // 0x8006D810: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006D814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006D818: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006D81C: nop

    // 0x8006D820: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006D824: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_8006D828:
    // 0x8006D828: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006D82C: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x8006D830: nop

    // 0x8006D834: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x8006D838: beq         $t1, $zero, L_8006D85C
    if (ctx->r9 == 0) {
        // 0x8006D83C: nop
    
            goto L_8006D85C;
    }
    // 0x8006D83C: nop

    // 0x8006D840: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006D844: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006D848: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8006D84C: nop

    // 0x8006D850: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8006D854: b           L_8006D88C
    // 0x8006D858: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
        goto L_8006D88C;
    // 0x8006D858: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
L_8006D85C:
    // 0x8006D85C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006D860: lhu         $t2, -0x1C82($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C82);
    // 0x8006D864: nop

    // 0x8006D868: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x8006D86C: beq         $t3, $zero, L_8006D88C
    if (ctx->r11 == 0) {
        // 0x8006D870: nop
    
            goto L_8006D88C;
    }
    // 0x8006D870: nop

    // 0x8006D874: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006D878: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006D87C: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8006D880: nop

    // 0x8006D884: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006D888: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
L_8006D88C:
    // 0x8006D88C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006D890: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006D894: nop

    // 0x8006D898: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8006D89C: nop

    // 0x8006D8A0: bc1f        L_8006D8B4
    if (!c1cs) {
        // 0x8006D8A4: nop
    
            goto L_8006D8B4;
    }
    // 0x8006D8A4: nop

    // 0x8006D8A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006D8AC: b           L_8006D8E4
    // 0x8006D8B0: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
        goto L_8006D8E4;
    // 0x8006D8B0: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
L_8006D8B4:
    // 0x8006D8B4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D8B8: lwc1        $f4, 0x55A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55A8);
    // 0x8006D8BC: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006D8C0: nop

    // 0x8006D8C4: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8006D8C8: nop

    // 0x8006D8CC: bc1f        L_8006D8E4
    if (!c1cs) {
        // 0x8006D8D0: nop
    
            goto L_8006D8E4;
    }
    // 0x8006D8D0: nop

    // 0x8006D8D4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D8D8: lwc1        $f6, 0x55AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55AC);
    // 0x8006D8DC: nop

    // 0x8006D8E0: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_8006D8E4:
    // 0x8006D8E4: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8006D8E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006D8EC: nop

    // 0x8006D8F0: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8006D8F4: nop

    // 0x8006D8F8: bc1f        L_8006D90C
    if (!c1cs) {
        // 0x8006D8FC: nop
    
            goto L_8006D90C;
    }
    // 0x8006D8FC: nop

    // 0x8006D900: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006D904: b           L_8006D93C
    // 0x8006D908: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
        goto L_8006D93C;
    // 0x8006D908: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
L_8006D90C:
    // 0x8006D90C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D910: lwc1        $f4, 0x55B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55B0);
    // 0x8006D914: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8006D918: nop

    // 0x8006D91C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8006D920: nop

    // 0x8006D924: bc1f        L_8006D93C
    if (!c1cs) {
        // 0x8006D928: nop
    
            goto L_8006D93C;
    }
    // 0x8006D928: nop

    // 0x8006D92C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D930: lwc1        $f6, 0x55B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55B4);
    // 0x8006D934: nop

    // 0x8006D938: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
L_8006D93C:
    // 0x8006D93C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006D940: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D944: swc1        $f8, 0x759C($at)
    MEM_W(0X759C, ctx->r1) = ctx->f8.u32l;
    // 0x8006D948: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8006D94C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D950: swc1        $f10, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f10.u32l;
    // 0x8006D954: b           L_8006D95C
    // 0x8006D958: nop

        goto L_8006D95C;
    // 0x8006D958: nop

L_8006D95C:
    // 0x8006D95C: jr          $ra
    // 0x8006D960: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006D960: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80069700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069700: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80069704: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069708: sh          $zero, 0x75FA($at)
    MEM_H(0X75FA, ctx->r1) = 0;
    // 0x8006970C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069710: sh          $zero, 0x75F6($at)
    MEM_H(0X75F6, ctx->r1) = 0;
    // 0x80069714: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069718: lw          $t6, 0x796C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X796C);
    // 0x8006971C: nop

    // 0x80069720: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80069724: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80069728: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006972C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80069730: nop

    // 0x80069734: beq         $t8, $at, L_800697E0
    if (ctx->r24 == ctx->r1) {
        // 0x80069738: nop
    
            goto L_800697E0;
    }
    // 0x80069738: nop

L_8006973C:
    // 0x8006973C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80069740: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x80069744: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x80069748: nop

    // 0x8006974C: beq         $t0, $at, L_800697B8
    if (ctx->r8 == ctx->r1) {
        // 0x80069750: nop
    
            goto L_800697B8;
    }
    // 0x80069750: nop

    // 0x80069754: lh          $t1, 0x4($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X4);
    // 0x80069758: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8006975C: beq         $t1, $at, L_800697B8
    if (ctx->r9 == ctx->r1) {
        // 0x80069760: nop
    
            goto L_800697B8;
    }
    // 0x80069760: nop

    // 0x80069764: lh          $t2, 0x6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X6);
    // 0x80069768: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8006976C: beq         $t2, $at, L_800697B8
    if (ctx->r10 == ctx->r1) {
        // 0x80069770: nop
    
            goto L_800697B8;
    }
    // 0x80069770: nop

    // 0x80069774: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80069778: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006977C: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80069780: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80069784: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80069788: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8006978C: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x80069790: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80069794: lbu         $t6, 0x4D92($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4D92);
    // 0x80069798: nop

    // 0x8006979C: bne         $t6, $at, L_800697B8
    if (ctx->r14 != ctx->r1) {
        // 0x800697A0: nop
    
            goto L_800697B8;
    }
    // 0x800697A0: nop

    // 0x800697A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800697A8: lh          $t7, 0x75F6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X75F6);
    // 0x800697AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800697B0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800697B4: sh          $t8, 0x75F6($at)
    MEM_H(0X75F6, ctx->r1) = ctx->r24;
L_800697B8:
    // 0x800697B8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800697BC: nop

    // 0x800697C0: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800697C4: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x800697C8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800697CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800697D0: lh          $t2, 0x0($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X0);
    // 0x800697D4: nop

    // 0x800697D8: bne         $t2, $at, L_8006973C
    if (ctx->r10 != ctx->r1) {
        // 0x800697DC: nop
    
            goto L_8006973C;
    }
    // 0x800697DC: nop

L_800697E0:
    // 0x800697E0: b           L_800697E8
    // 0x800697E4: nop

        goto L_800697E8;
    // 0x800697E4: nop

L_800697E8:
    // 0x800697E8: jr          $ra
    // 0x800697EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800697EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80090158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090158: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009015C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090160: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090164: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090168: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009016C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090170: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090174: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090178: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009017C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090180: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090184: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090188: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009018C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090190: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090194: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090198: addiu       $a1, $a1, 0x13B4
    ctx->r5 = ADD32(ctx->r5, 0X13B4);
    // 0x8009019C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800901A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800901A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800901A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800901AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800901B0: jal         0x80027464
    // 0x800901B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800901B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800901B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800901BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800901C0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800901C4: addiu       $a3, $a3, 0x2064
    ctx->r7 = ADD32(ctx->r7, 0X2064);
    // 0x800901C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800901CC: jal         0x8001ABF4
    // 0x800901D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800901D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800901D4: b           L_800901DC
    // 0x800901D8: nop

        goto L_800901DC;
    // 0x800901D8: nop

L_800901DC:
    // 0x800901DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800901E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800901E4: jr          $ra
    // 0x800901E8: nop

    return;
    // 0x800901E8: nop

;}
RECOMP_FUNC void func_800CFC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFC8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CFC90: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800CFC94: nop

    // 0x800CFC98: bne         $t6, $zero, L_800CFD28
    if (ctx->r14 != 0) {
        // 0x800CFC9C: nop
    
            goto L_800CFD28;
    }
    // 0x800CFC9C: nop

    // 0x800CFCA0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800CFCA4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800CFCA8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800CFCAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CFCB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CFCB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CFCB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CFCBC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CFCC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CFCC4: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800CFCC8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800CFCCC: beq         $t9, $at, L_800CFD28
    if (ctx->r25 == ctx->r1) {
        // 0x800CFCD0: nop
    
            goto L_800CFD28;
    }
    // 0x800CFCD0: nop

    // 0x800CFCD4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CFCD8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CFCDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CFCE0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CFCE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CFCE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CFCEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CFCF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CFCF4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CFCF8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800CFCFC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CFD00: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CFD04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CFD08: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CFD0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CFD10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CFD14: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CFD18: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CFD1C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CFD20: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x800CFD24: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_800CFD28:
    // 0x800CFD28: jr          $ra
    // 0x800CFD2C: nop

    return;
    // 0x800CFD2C: nop

    // 0x800CFD30: jr          $ra
    // 0x800CFD34: nop

    return;
    // 0x800CFD34: nop

;}
RECOMP_FUNC void func_800979EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800979EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800979F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800979F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800979F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800979FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80097A00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80097A04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80097A08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097A0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80097A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097A14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80097A18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80097A1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80097A20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80097A24: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80097A28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80097A2C: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80097A30: nop

    // 0x80097A34: beq         $s0, $at, L_80097A50
    if (ctx->r16 == ctx->r1) {
        // 0x80097A38: nop
    
            goto L_80097A50;
    }
    // 0x80097A38: nop

    // 0x80097A3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80097A40: beq         $s0, $at, L_80097A64
    if (ctx->r16 == ctx->r1) {
        // 0x80097A44: nop
    
            goto L_80097A64;
    }
    // 0x80097A44: nop

    // 0x80097A48: b           L_80097A78
    // 0x80097A4C: nop

        goto L_80097A78;
    // 0x80097A4C: nop

L_80097A50:
    // 0x80097A50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80097A54: jal         0x800977EC
    // 0x80097A58: nop

    func_800977EC(rdram, ctx);
        goto after_0;
    // 0x80097A58: nop

    after_0:
    // 0x80097A5C: b           L_80097A78
    // 0x80097A60: nop

        goto L_80097A78;
    // 0x80097A60: nop

L_80097A64:
    // 0x80097A64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80097A68: jal         0x80097888
    // 0x80097A6C: nop

    func_80097888(rdram, ctx);
        goto after_1;
    // 0x80097A6C: nop

    after_1:
    // 0x80097A70: b           L_80097A78
    // 0x80097A74: nop

        goto L_80097A78;
    // 0x80097A74: nop

L_80097A78:
    // 0x80097A78: b           L_80097A80
    // 0x80097A7C: nop

        goto L_80097A80;
    // 0x80097A7C: nop

L_80097A80:
    // 0x80097A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097A84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097A88: jr          $ra
    // 0x80097A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80097A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
