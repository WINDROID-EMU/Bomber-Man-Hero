#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void alSeqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004629C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800462A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800462A4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x800462A8: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x800462AC: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x800462B0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800462B4: jal         0x80046218
    // 0x800462B8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    static_0_80046218(rdram, ctx);
        goto after_0;
    // 0x800462B8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    after_0:
    // 0x800462BC: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x800462C0: ori         $at, $at, 0x6864
    ctx->r1 = ctx->r1 | 0X6864;
    // 0x800462C4: bnel        $v0, $at, L_80046364
    if (ctx->r2 != ctx->r1) {
        // 0x800462C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046364;
    }
    goto skip_0;
    // 0x800462C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800462CC: jal         0x80046218
    // 0x800462D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_0_80046218(rdram, ctx);
        goto after_1;
    // 0x800462D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x800462D4: jal         0x80046268
    // 0x800462D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_0_80046268(rdram, ctx);
        goto after_2;
    // 0x800462D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x800462DC: bnel        $v0, $zero, L_80046364
    if (ctx->r2 != 0) {
        // 0x800462E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046364;
    }
    goto skip_1;
    // 0x800462E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800462E4: jal         0x80046268
    // 0x800462E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_0_80046268(rdram, ctx);
        goto after_3;
    // 0x800462E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x800462EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800462F0: bnel        $v0, $at, L_80046364
    if (ctx->r2 != ctx->r1) {
        // 0x800462F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046364;
    }
    goto skip_2;
    // 0x800462F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800462F8: jal         0x80046268
    // 0x800462FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_0_80046268(rdram, ctx);
        goto after_4;
    // 0x800462FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80046300: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80046304: lh          $v1, 0x18($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X18);
    // 0x80046308: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x8004630C: bnel        $t6, $zero, L_80046364
    if (ctx->r14 != 0) {
        // 0x80046310: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046364;
    }
    goto skip_3;
    // 0x80046310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80046314: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80046318: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004631C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80046320: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80046324: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80046328: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8004632C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80046330: div.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x80046334: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80046338: jal         0x80046218
    // 0x8004633C: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    static_0_80046218(rdram, ctx);
        goto after_5;
    // 0x8004633C: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    after_5:
    // 0x80046340: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x80046344: ori         $at, $at, 0x726B
    ctx->r1 = ctx->r1 | 0X726B;
    // 0x80046348: bnel        $v0, $at, L_80046364
    if (ctx->r2 != ctx->r1) {
        // 0x8004634C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80046364;
    }
    goto skip_4;
    // 0x8004634C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80046350: jal         0x80046218
    // 0x80046354: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_0_80046218(rdram, ctx);
        goto after_6;
    // 0x80046354: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
    // 0x80046358: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x8004635C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80046360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80046364:
    // 0x80046364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046368: jr          $ra
    // 0x8004636C: nop

    return;
    // 0x8004636C: nop

;}
RECOMP_FUNC void func_800162F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800162F0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800162F4: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800162F8: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x800162FC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80016300: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80016304: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80016308: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001630C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016310: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80016314: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80016318: sub.s       $f16, $f12, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8001631C: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80016320: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80016324: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80016328: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8001632C: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80016330: swc1        $f7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x80016334: lwc1        $f9, 0x0($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x80016338: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001633C: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80016340: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80016344: nop

    // 0x80016348: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8001634C: nop

    // 0x80016350: bc1f        L_80016368
    if (!c1cs) {
        // 0x80016354: nop
    
            goto L_80016368;
    }
    // 0x80016354: nop

    // 0x80016358: b           L_800163A4
    // 0x8001635C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800163A4;
    // 0x8001635C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80016360: b           L_80016394
    // 0x80016364: nop

        goto L_80016394;
    // 0x80016364: nop

L_80016368:
    // 0x80016368: lwc1        $f19, 0x0($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x8001636C: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80016370: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80016374: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80016378: nop

    // 0x8001637C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80016380: nop

    // 0x80016384: bc1f        L_80016394
    if (!c1cs) {
        // 0x80016388: nop
    
            goto L_80016394;
    }
    // 0x80016388: nop

    // 0x8001638C: b           L_800163A4
    // 0x80016390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800163A4;
    // 0x80016390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80016394:
    // 0x80016394: b           L_800163A4
    // 0x80016398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800163A4;
    // 0x80016398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001639C: b           L_800163A4
    // 0x800163A0: nop

        goto L_800163A4;
    // 0x800163A0: nop

L_800163A4:
    // 0x800163A4: jr          $ra
    // 0x800163A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800163A8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8000CD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CD28: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000CD2C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000CD30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000CD34: slti        $at, $a0, 0x4B1
    ctx->r1 = SIGNED(ctx->r4) < 0X4B1 ? 1 : 0;
    // 0x8000CD38: bne         $at, $zero, L_8000CD44
    if (ctx->r1 != 0) {
        // 0x8000CD3C: nop
    
            goto L_8000CD44;
    }
    // 0x8000CD3C: nop

    // 0x8000CD40: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
L_8000CD44:
    // 0x8000CD44: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000CD48: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000CD4C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8000CD50: blez        $t6, L_8000CE0C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000CD54: nop
    
            goto L_8000CE0C;
    }
    // 0x8000CD54: nop

L_8000CD58:
    // 0x8000CD58: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8000CD5C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000CD60: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000CD64: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CD68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CD6C: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000CD70: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CD74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CD78: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000CD7C: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8000CD80: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000CD84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CD88: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000CD8C: nop

    // 0x8000CD90: beq         $t2, $at, L_8000CDA0
    if (ctx->r10 == ctx->r1) {
        // 0x8000CD94: nop
    
            goto L_8000CDA0;
    }
    // 0x8000CD94: nop

    // 0x8000CD98: b           L_8000CDF0
    // 0x8000CD9C: nop

        goto L_8000CDF0;
    // 0x8000CD9C: nop

L_8000CDA0:
    // 0x8000CDA0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000CDA4: nop

    // 0x8000CDA8: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000CDAC: nop

    // 0x8000CDB0: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8000CDB4: bne         $t5, $zero, L_8000CDE4
    if (ctx->r13 != 0) {
        // 0x8000CDB8: nop
    
            goto L_8000CDE4;
    }
    // 0x8000CDB8: nop

    // 0x8000CDBC: lh          $t6, 0x1A($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X1A);
    // 0x8000CDC0: nop

    // 0x8000CDC4: beq         $t6, $a0, L_8000CDE4
    if (ctx->r14 == ctx->r4) {
        // 0x8000CDC8: nop
    
            goto L_8000CDE4;
    }
    // 0x8000CDC8: nop

    // 0x8000CDCC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8000CDD0: nop

    // 0x8000CDD4: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000CDD8: nop

    // 0x8000CDDC: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8000CDE0: sw          $t9, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r25;
L_8000CDE4:
    // 0x8000CDE4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8000CDE8: nop

    // 0x8000CDEC: sh          $a0, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r4;
L_8000CDF0:
    // 0x8000CDF0: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8000CDF4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000CDF8: lw          $t4, -0x5CF4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CF4);
    // 0x8000CDFC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8000CE00: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8000CE04: bne         $at, $zero, L_8000CD58
    if (ctx->r1 != 0) {
        // 0x8000CE08: sw          $t2, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r10;
            goto L_8000CD58;
    }
    // 0x8000CE08: sw          $t2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r10;
L_8000CE0C:
    // 0x8000CE0C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CE10: sh          $a0, 0x2D78($at)
    MEM_H(0X2D78, ctx->r1) = ctx->r4;
    // 0x8000CE14: b           L_8000CE1C
    // 0x8000CE18: nop

        goto L_8000CE1C;
    // 0x8000CE18: nop

L_8000CE1C:
    // 0x8000CE1C: jr          $ra
    // 0x8000CE20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000CE20: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _saveBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046580: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80046584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004658C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80046590: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80046594: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80046598: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8004659C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800465A0: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800465A4: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x800465A8: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x800465AC: beq         $at, $zero, L_800465B8
    if (ctx->r1 == 0) {
        // 0x800465B0: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_800465B8;
    }
    // 0x800465B0: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x800465B4: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_800465B8:
    // 0x800465B8: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x800465BC: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x800465C0: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x800465C4: beq         $at, $zero, L_800466B8
    if (ctx->r1 == 0) {
        // 0x800465C8: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_800466B8;
    }
    // 0x800465C8: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x800465CC: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x800465D0: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x800465D4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x800465D8: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800465DC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x800465E0: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x800465E4: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x800465E8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x800465EC: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x800465F0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800465F4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x800465F8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800465FC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80046600: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80046604: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80046608: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8004660C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80046610: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80046614: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80046618: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8004661C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80046620: jal         0x800358D0
    // 0x80046624: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80046624: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80046628: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8004662C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80046630: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80046634: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80046638: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8004663C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80046640: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80046644: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80046648: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x8004664C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80046650: subu        $t7, $a3, $t1
    ctx->r15 = SUB32(ctx->r7, ctx->r9);
    // 0x80046654: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80046658: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8004665C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80046660: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80046664: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x80046668: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8004666C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80046670: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80046674: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80046678: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8004667C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80046680: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80046684: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80046688: jal         0x800358D0
    // 0x8004668C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8004668C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80046690: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80046694: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80046698: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8004669C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x800466A0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800466A4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x800466A8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800466AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800466B0: b           L_800466F4
    // 0x800466B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_800466F4;
    // 0x800466B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800466B8:
    // 0x800466B8: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x800466BC: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x800466C0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800466C4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x800466C8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800466CC: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x800466D0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800466D4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x800466D8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800466DC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x800466E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800466E4: jal         0x800358D0
    // 0x800466E8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800466E8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x800466EC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x800466F0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800466F4:
    // 0x800466F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800466F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800466FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046700: jr          $ra
    // 0x80046704: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80046704: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void Debug_SaveMode_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EF08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EF0C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EF10: addiu       $a1, $a1, -0x4068
    ctx->r5 = ADD32(ctx->r5, -0X4068);
    // 0x8002EF14: jal         0x80036BE4
    // 0x8002EF18: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8002EF18: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x8002EF1C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EF20: jal         0x8005F9EC
    // 0x8002EF24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x8002EF24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8002EF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EF2C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EF30: addiu       $a1, $a1, -0x405C
    ctx->r5 = ADD32(ctx->r5, -0X405C);
    // 0x8002EF34: jal         0x80036BE4
    // 0x8002EF38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x8002EF38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_2:
    // 0x8002EF3C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x8002EF40: jal         0x8005F9EC
    // 0x8002EF44: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x8002EF44: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_3:
    // 0x8002EF48: b           L_8002EF50
    // 0x8002EF4C: nop

        goto L_8002EF50;
    // 0x8002EF4C: nop

L_8002EF50:
    // 0x8002EF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EF54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EF58: jr          $ra
    // 0x8002EF5C: nop

    return;
    // 0x8002EF5C: nop

;}
RECOMP_FUNC void func_8001AD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AD6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001AD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001AD74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001AD78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8001AD7C:
    // 0x8001AD7C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001AD80: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001AD84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001AD88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001AD8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001AD90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001AD94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001AD98: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001AD9C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001ADA0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001ADA4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8001ADA8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8001ADAC: lh          $t3, 0x148($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X148);
    // 0x8001ADB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001ADB4: beq         $t3, $at, L_8001AFE4
    if (ctx->r11 == ctx->r1) {
        // 0x8001ADB8: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_8001AFE4;
    }
    // 0x8001ADB8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8001ADBC: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8001ADC0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8001ADC4: addu        $t5, $t7, $t1
    ctx->r13 = ADD32(ctx->r15, ctx->r9);
    // 0x8001ADC8: lbu         $t6, 0x130($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X130);
    // 0x8001ADCC: lbu         $t4, -0x5A20($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X5A20);
    // 0x8001ADD0: nop

    // 0x8001ADD4: and         $t9, $t4, $t6
    ctx->r25 = ctx->r12 & ctx->r14;
    // 0x8001ADD8: bne         $t9, $zero, L_8001AFE4
    if (ctx->r25 != 0) {
        // 0x8001ADDC: nop
    
            goto L_8001AFE4;
    }
    // 0x8001ADDC: nop

    // 0x8001ADE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001ADE4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001ADE8: addiu       $t3, $t3, -0x3D68
    ctx->r11 = ADD32(ctx->r11, -0X3D68);
    // 0x8001ADEC: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x8001ADF0: addu        $t8, $t2, $t3
    ctx->r24 = ADD32(ctx->r10, ctx->r11);
    // 0x8001ADF4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8001ADF8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001ADFC: addiu       $at, $zero, -0xD
    ctx->r1 = ADD32(0, -0XD);
    // 0x8001AE00: lbu         $t1, 0x6($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X6);
    // 0x8001AE04: nop

    // 0x8001AE08: and         $t5, $t1, $at
    ctx->r13 = ctx->r9 & ctx->r1;
    // 0x8001AE0C: sb          $t5, 0x6($t7)
    MEM_B(0X6, ctx->r15) = ctx->r13;
    // 0x8001AE10: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE14: nop

    // 0x8001AE18: lbu         $t6, 0x6($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X6);
    // 0x8001AE1C: nop

    // 0x8001AE20: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8001AE24: beq         $t9, $zero, L_8001AFE4
    if (ctx->r25 == 0) {
        // 0x8001AE28: nop
    
            goto L_8001AFE4;
    }
    // 0x8001AE28: nop

    // 0x8001AE2C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE30: nop

    // 0x8001AE34: lbu         $t2, 0x4($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X4);
    // 0x8001AE38: nop

    // 0x8001AE3C: beq         $t2, $zero, L_8001AE60
    if (ctx->r10 == 0) {
        // 0x8001AE40: nop
    
            goto L_8001AE60;
    }
    // 0x8001AE40: nop

    // 0x8001AE44: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE48: nop

    // 0x8001AE4C: lbu         $t8, 0x4($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X4);
    // 0x8001AE50: nop

    // 0x8001AE54: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x8001AE58: b           L_8001AFE4
    // 0x8001AE5C: sb          $t1, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r9;
        goto L_8001AFE4;
    // 0x8001AE5C: sb          $t1, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r9;
L_8001AE60:
    // 0x8001AE60: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE64: nop

    // 0x8001AE68: lbu         $t7, 0x6($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X6);
    // 0x8001AE6C: nop

    // 0x8001AE70: ori         $t4, $t7, 0x4
    ctx->r12 = ctx->r15 | 0X4;
    // 0x8001AE74: sb          $t4, 0x6($t5)
    MEM_B(0X6, ctx->r13) = ctx->r12;
    // 0x8001AE78: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE7C: nop

    // 0x8001AE80: lbu         $t9, 0x5($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X5);
    // 0x8001AE84: nop

    // 0x8001AE88: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001AE8C: sb          $t0, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r8;
    // 0x8001AE90: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001AE94: nop

    // 0x8001AE98: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8001AE9C: nop

    // 0x8001AEA0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001AEA4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001AEA8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001AEAC: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8001AEB0: lbu         $t4, 0x5($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X5);
    // 0x8001AEB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8001AEB8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001AEBC: lbu         $t9, 0x0($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X0);
    // 0x8001AEC0: nop

    // 0x8001AEC4: bne         $t9, $at, L_8001AF28
    if (ctx->r25 != ctx->r1) {
        // 0x8001AEC8: nop
    
            goto L_8001AF28;
    }
    // 0x8001AEC8: nop

    // 0x8001AECC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8001AED0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001AED4: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x8001AED8: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8001AEDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001AEE0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8001AEE4: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8001AEE8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001AEEC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8001AEF0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001AEF4: addu        $t8, $t6, $t2
    ctx->r24 = ADD32(ctx->r14, ctx->r10);
    // 0x8001AEF8: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8001AEFC: lbu         $t3, -0x5A20($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X5A20);
    // 0x8001AF00: lbu         $t1, 0x130($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X130);
    // 0x8001AF04: nop

    // 0x8001AF08: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8001AF0C: sb          $t4, 0x130($t8)
    MEM_B(0X130, ctx->r24) = ctx->r12;
    // 0x8001AF10: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF14: nop

    // 0x8001AF18: lbu         $t9, 0x5($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X5);
    // 0x8001AF1C: nop

    // 0x8001AF20: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8001AF24: sb          $t0, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r8;
L_8001AF28:
    // 0x8001AF28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AF2C: jal         0x8001AB94
    // 0x8001AF30: nop

    func_8001AB94(rdram, ctx);
        goto after_0;
    // 0x8001AF30: nop

    after_0:
    // 0x8001AF34: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF38: nop

    // 0x8001AF3C: lbu         $t2, 0x5($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X5);
    // 0x8001AF40: nop

    // 0x8001AF44: bne         $v0, $t2, L_8001AFCC
    if (ctx->r2 != ctx->r10) {
        // 0x8001AF48: nop
    
            goto L_8001AFCC;
    }
    // 0x8001AF48: nop

    // 0x8001AF4C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF50: nop

    // 0x8001AF54: lbu         $t1, 0x6($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X6);
    // 0x8001AF58: nop

    // 0x8001AF5C: ori         $t3, $t1, 0x8
    ctx->r11 = ctx->r9 | 0X8;
    // 0x8001AF60: sb          $t3, 0x6($t7)
    MEM_B(0X6, ctx->r15) = ctx->r11;
    // 0x8001AF64: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF68: nop

    // 0x8001AF6C: lbu         $t8, 0x6($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X6);
    // 0x8001AF70: nop

    // 0x8001AF74: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8001AF78: beq         $t9, $zero, L_8001AFB4
    if (ctx->r25 == 0) {
        // 0x8001AF7C: nop
    
            goto L_8001AFB4;
    }
    // 0x8001AF7C: nop

    // 0x8001AF80: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF84: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001AF88: lbu         $t5, 0x6($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X6);
    // 0x8001AF8C: nop

    // 0x8001AF90: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8001AF94: sb          $t6, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r14;
    // 0x8001AF98: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001AF9C: nop

    // 0x8001AFA0: lbu         $t1, 0x5($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X5);
    // 0x8001AFA4: nop

    // 0x8001AFA8: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8001AFAC: b           L_8001AFCC
    // 0x8001AFB0: sb          $t3, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r11;
        goto L_8001AFCC;
    // 0x8001AFB0: sb          $t3, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r11;
L_8001AFB4:
    // 0x8001AFB4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AFB8: jal         0x8001ABC4
    // 0x8001AFBC: nop

    func_8001ABC4(rdram, ctx);
        goto after_1;
    // 0x8001AFBC: nop

    after_1:
    // 0x8001AFC0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001AFC4: nop

    // 0x8001AFC8: sb          $v0, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r2;
L_8001AFCC:
    // 0x8001AFCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AFD0: jal         0x8001AB30
    // 0x8001AFD4: nop

    func_8001AB30(rdram, ctx);
        goto after_2;
    // 0x8001AFD4: nop

    after_2:
    // 0x8001AFD8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8001AFDC: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8001AFE0: sb          $t4, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r12;
L_8001AFE4:
    // 0x8001AFE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001AFE8: nop

    // 0x8001AFEC: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8001AFF0: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x8001AFF4: bne         $at, $zero, L_8001AD7C
    if (ctx->r1 != 0) {
        // 0x8001AFF8: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_8001AD7C;
    }
    // 0x8001AFF8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8001AFFC: b           L_8001B004
    // 0x8001B000: nop

        goto L_8001B004;
    // 0x8001B000: nop

L_8001B004:
    // 0x8001B004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001B00C: jr          $ra
    // 0x8001B010: nop

    return;
    // 0x8001B010: nop

;}
RECOMP_FUNC void func_800018D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800018D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800018DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800018E0: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x800018E4: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x800018E8: addiu       $t7, $t7, -0x5330
    ctx->r15 = ADD32(ctx->r15, -0X5330);
    // 0x800018EC: addiu       $t6, $t6, -0x7290
    ctx->r14 = ADD32(ctx->r14, -0X7290);
    // 0x800018F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800018F4: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800018F8: jal         0x8000068C
    // 0x800018FC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800018FC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001900: b           L_80001908
    // 0x80001904: nop

        goto L_80001908;
    // 0x80001904: nop

L_80001908:
    // 0x80001908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000190C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001910: jr          $ra
    // 0x80001914: nop

    return;
    // 0x80001914: nop

;}
RECOMP_FUNC void func_80017B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80017B10: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80017B14: jal         0x8000B404
    // 0x80017B18: nop

    func_8000B404(rdram, ctx);
        goto after_0;
    // 0x80017B18: nop

    after_0:
    // 0x80017B1C: b           L_80017B2C
    // 0x80017B20: nop

        goto L_80017B2C;
    // 0x80017B20: nop

    // 0x80017B24: b           L_80017B2C
    // 0x80017B28: nop

        goto L_80017B2C;
    // 0x80017B28: nop

L_80017B2C:
    // 0x80017B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017B34: jr          $ra
    // 0x80017B38: nop

    return;
    // 0x80017B38: nop

;}
RECOMP_FUNC void Write2Eeprom(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020368: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002036C: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80020370: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020374: nop

    // 0x80020378: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8002037C: beq         $t8, $zero, L_800203A8
    if (ctx->r24 == 0) {
        // 0x80020380: nop
    
            goto L_800203A8;
    }
    // 0x80020380: nop

    // 0x80020384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020388: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002038C: addiu       $a1, $a1, -0x59F0
    ctx->r5 = ADD32(ctx->r5, -0X59F0);
    // 0x80020390: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80020394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80020398: jal         0x8001F798
    // 0x8002039C: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    Eeprom_Write(rdram, ctx);
        goto after_0;
    // 0x8002039C: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x800203A0: beq         $v0, $zero, L_800203A8
    if (ctx->r2 == 0) {
        // 0x800203A4: nop
    
            goto L_800203A8;
    }
    // 0x800203A4: nop

L_800203A8:
    // 0x800203A8: b           L_800203B0
    // 0x800203AC: nop

        goto L_800203B0;
    // 0x800203AC: nop

L_800203B0:
    // 0x800203B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800203B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800203B8: jr          $ra
    // 0x800203BC: nop

    return;
    // 0x800203BC: nop

;}
RECOMP_FUNC void PlayTrack_WithVolLoop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016F40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80016F48: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80016F4C: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80016F50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80016F54: bne         $t6, $at, L_80016F70
    if (ctx->r14 != ctx->r1) {
        // 0x80016F58: nop
    
            goto L_80016F70;
    }
    // 0x80016F58: nop

    // 0x80016F5C: jal         0x80004284
    // 0x80016F60: nop

    func_80004284(rdram, ctx);
        goto after_0;
    // 0x80016F60: nop

    after_0:
    // 0x80016F64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016F68: b           L_80016FB0
    // 0x80016F6C: sh          $zero, 0x76DE($at)
    MEM_H(0X76DE, ctx->r1) = 0;
        goto L_80016FB0;
    // 0x80016F6C: sh          $zero, 0x76DE($at)
    MEM_H(0X76DE, ctx->r1) = 0;
L_80016F70:
    // 0x80016F70: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80016F74: jal         0x8000401C
    // 0x80016F78: nop

    func_8000401C(rdram, ctx);
        goto after_1;
    // 0x80016F78: nop

    after_1:
    // 0x80016F7C: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80016F80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80016F84: beq         $t7, $at, L_80016F98
    if (ctx->r15 == ctx->r1) {
        // 0x80016F88: nop
    
            goto L_80016F98;
    }
    // 0x80016F88: nop

    // 0x80016F8C: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80016F90: jal         0x8000435C
    // 0x80016F94: nop

    func_8000435C(rdram, ctx);
        goto after_2;
    // 0x80016F94: nop

    after_2:
L_80016F98:
    // 0x80016F98: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x80016F9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016FA0: sh          $t8, 0x76E2($at)
    MEM_H(0X76E2, ctx->r1) = ctx->r24;
    // 0x80016FA4: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x80016FA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016FAC: sh          $t9, 0x76DE($at)
    MEM_H(0X76DE, ctx->r1) = ctx->r25;
L_80016FB0:
    // 0x80016FB0: b           L_80016FB8
    // 0x80016FB4: nop

        goto L_80016FB8;
    // 0x80016FB4: nop

L_80016FB8:
    // 0x80016FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016FC0: jr          $ra
    // 0x80016FC4: nop

    return;
    // 0x80016FC4: nop

;}
RECOMP_FUNC void alCSPGetTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800347F0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x800347F4: bnel        $v1, $zero, L_80034808
    if (ctx->r3 != 0) {
        // 0x800347F8: lw          $t6, 0x24($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X24);
            goto L_80034808;
    }
    goto skip_0;
    // 0x800347F8: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    skip_0:
    // 0x800347FC: jr          $ra
    // 0x80034800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80034800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80034804: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
L_80034808:
    // 0x80034808: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8003480C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80034810: nop

    // 0x80034814: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80034818: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8003481C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80034820: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80034824: nop

    // 0x80034828: jr          $ra
    // 0x8003482C: nop

    return;
    // 0x8003482C: nop

;}
RECOMP_FUNC void alSeqTicksToSec(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004616C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80046170: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80046174: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80046178: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004617C: bgez        $a2, L_80046190
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80046180: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80046190;
    }
    // 0x80046180: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80046184: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80046188: nop

    // 0x8004618C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80046190:
    // 0x80046190: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80046194: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80046198: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8004619C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800461A0: ldc1        $f10, -0x3768($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3768);
    // 0x800461A4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800461A8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800461AC: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x800461B0: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x800461B4: div.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x800461B8: jr          $ra
    // 0x800461BC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    return;
    // 0x800461BC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void func_8000CF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CF60: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000CF64: lbu         $v0, 0x2D7B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D7B);
    // 0x8000CF68: jr          $ra
    // 0x8000CF6C: nop

    return;
    // 0x8000CF6C: nop

    // 0x8000CF70: jr          $ra
    // 0x8000CF74: nop

    return;
    // 0x8000CF74: nop

    // 0x8000CF78: jr          $ra
    // 0x8000CF7C: nop

    return;
    // 0x8000CF7C: nop

;}
RECOMP_FUNC void func_80029C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029C40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029C48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80029C4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80029C50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029C54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029C58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029C5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029C64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029C68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029C6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029C70: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029C74: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029C78: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029C7C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80029C80: lwc1        $f9, -0x4208($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4208);
    // 0x80029C84: lwc1        $f8, -0x4204($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4204);
    // 0x80029C88: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80029C8C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80029C90: jal         0x80034970
    // 0x80029C94: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80029C94: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80029C98: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80029C9C: nop

    // 0x80029CA0: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80029CA4: nop

    // 0x80029CA8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80029CAC: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x80029CB0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80029CB4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029CB8: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80029CBC: lwc1        $f9, -0x4200($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4200);
    // 0x80029CC0: lwc1        $f8, -0x41FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X41FC);
    // 0x80029CC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80029CC8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80029CCC: jal         0x80036570
    // 0x80029CD0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80029CD0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80029CD4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80029CD8: nop

    // 0x80029CDC: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80029CE0: nop

    // 0x80029CE4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80029CE8: swc1        $f18, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f18.u32l;
    // 0x80029CEC: b           L_80029CF4
    // 0x80029CF0: nop

        goto L_80029CF4;
    // 0x80029CF0: nop

L_80029CF4:
    // 0x80029CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80029CFC: jr          $ra
    // 0x80029D00: nop

    return;
    // 0x80029D00: nop

;}
RECOMP_FUNC void func_8001B930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B938: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B93C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B940: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001B944: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001B948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001B94C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001B954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001B95C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001B960: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001B964: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001B968: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001B96C: lh          $t1, 0x4298($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4298);
    // 0x8001B970: nop

    // 0x8001B974: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8001B978: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001B97C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001B980: addiu       $t4, $t4, -0x3D68
    ctx->r12 = ADD32(ctx->r12, -0X3D68);
    // 0x8001B984: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001B988: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001B98C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8001B990: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001B998: lbu         $t8, 0x4($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X4);
    // 0x8001B99C: nop

    // 0x8001B9A0: bne         $t8, $at, L_8001B9D8
    if (ctx->r24 != ctx->r1) {
        // 0x8001B9A4: nop
    
            goto L_8001B9D8;
    }
    // 0x8001B9A4: nop

    // 0x8001B9A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001B9AC: jal         0x8001AB94
    // 0x8001B9B0: nop

    func_8001AB94(rdram, ctx);
        goto after_0;
    // 0x8001B9B0: nop

    after_0:
    // 0x8001B9B4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B9B8: nop

    // 0x8001B9BC: lbu         $t9, 0x5($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X5);
    // 0x8001B9C0: nop

    // 0x8001B9C4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001B9C8: bne         $v0, $t0, L_8001B9D8
    if (ctx->r2 != ctx->r8) {
        // 0x8001B9CC: nop
    
            goto L_8001B9D8;
    }
    // 0x8001B9CC: nop

    // 0x8001B9D0: b           L_8001B9E8
    // 0x8001B9D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001B9E8;
    // 0x8001B9D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001B9D8:
    // 0x8001B9D8: b           L_8001B9E8
    // 0x8001B9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001B9E8;
    // 0x8001B9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001B9E0: b           L_8001B9E8
    // 0x8001B9E4: nop

        goto L_8001B9E8;
    // 0x8001B9E4: nop

L_8001B9E8:
    // 0x8001B9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B9EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B9F0: jr          $ra
    // 0x8001B9F4: nop

    return;
    // 0x8001B9F4: nop

;}
RECOMP_FUNC void func_8001B580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B588: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B58C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B590: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001B594: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001B598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001B59C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B5A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001B5A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B5A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001B5AC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001B5B0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001B5B4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001B5B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001B5BC: lh          $t1, 0x4290($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4290);
    // 0x8001B5C0: nop

    // 0x8001B5C4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001B5C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B5CC: jal         0x8001A488
    // 0x8001B5D0: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001B5D0: nop

    after_0:
    // 0x8001B5D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B5D8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8001B5DC: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001B5E0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001B5E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001B5E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001B5EC: lbu         $t5, 0x52A5($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X52A5);
    // 0x8001B5F0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001B5F4: lw          $t2, 0x5D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D5C);
    // 0x8001B5F8: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8001B5FC: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x8001B600: lw          $t7, 0xC($t8)
    ctx->r15 = MEM_W(ctx->r24, 0XC);
    // 0x8001B604: nop

    // 0x8001B608: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8001B60C: b           L_8001B61C
    // 0x8001B610: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
        goto L_8001B61C;
    // 0x8001B610: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001B614: b           L_8001B61C
    // 0x8001B618: nop

        goto L_8001B61C;
    // 0x8001B618: nop

L_8001B61C:
    // 0x8001B61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B620: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B624: jr          $ra
    // 0x8001B628: nop

    return;
    // 0x8001B628: nop

;}
RECOMP_FUNC void func_8000ABB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ABB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000ABB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000ABBC: jal         0x8000B5DC
    // 0x8000ABC0: nop

    func_8000B5DC(rdram, ctx);
        goto after_0;
    // 0x8000ABC0: nop

    after_0:
    // 0x8000ABC4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000ABC8: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000ABCC: jal         0x80035620
    // 0x8000ABD0: nop

    alSndpDelete(rdram, ctx);
        goto after_1;
    // 0x8000ABD0: nop

    after_1:
    // 0x8000ABD4: b           L_8000ABDC
    // 0x8000ABD8: nop

        goto L_8000ABDC;
    // 0x8000ABD8: nop

L_8000ABDC:
    // 0x8000ABDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ABE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000ABE4: jr          $ra
    // 0x8000ABE8: nop

    return;
    // 0x8000ABE8: nop

;}
RECOMP_FUNC void __alCSeqNextDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800344AC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800344B0: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x800344B4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800344B8: bne         $t6, $zero, L_800344C8
    if (ctx->r14 != 0) {
        // 0x800344BC: lw          $v0, 0x10($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X10);
            goto L_800344C8;
    }
    // 0x800344BC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800344C0: jr          $ra
    // 0x800344C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800344C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800344C8:
    // 0x800344C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800344CC: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x800344D0: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_800344D4:
    // 0x800344D4: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x800344D8: srlv        $t7, $a1, $a2
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r6 & 31));
    // 0x800344DC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800344E0: beql        $t8, $zero, L_80034524
    if (ctx->r24 == 0) {
        // 0x800344E4: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_80034524;
    }
    goto skip_0;
    // 0x800344E4: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_0:
    // 0x800344E8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x800344EC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800344F0: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x800344F4: beql        $t3, $zero, L_80034510
    if (ctx->r11 == 0) {
        // 0x800344F8: lw          $t0, 0xB8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XB8);
            goto L_80034510;
    }
    goto skip_1;
    // 0x800344F8: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
    skip_1:
    // 0x800344FC: lw          $t4, 0xB8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XB8);
    // 0x80034500: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80034504: sw          $t5, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->r13;
    // 0x80034508: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8003450C: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
L_80034510:
    // 0x80034510: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x80034514: beql        $at, $zero, L_80034524
    if (ctx->r1 == 0) {
        // 0x80034518: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_80034524;
    }
    goto skip_2;
    // 0x80034518: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_2:
    // 0x8003451C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80034520: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_80034524:
    // 0x80034524: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80034528: beq         $t8, $zero, L_80034568
    if (ctx->r24 == 0) {
        // 0x8003452C: addiu       $t6, $a2, 0x2
        ctx->r14 = ADD32(ctx->r6, 0X2);
            goto L_80034568;
    }
    // 0x8003452C: addiu       $t6, $a2, 0x2
    ctx->r14 = ADD32(ctx->r6, 0X2);
    // 0x80034530: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80034534: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80034538: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x8003453C: beql        $t3, $zero, L_80034558
    if (ctx->r11 == 0) {
        // 0x80034540: lw          $t0, 0xBC($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XBC);
            goto L_80034558;
    }
    goto skip_3;
    // 0x80034540: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
    skip_3:
    // 0x80034544: lw          $t4, 0xBC($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XBC);
    // 0x80034548: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x8003454C: sw          $t5, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r13;
    // 0x80034550: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80034554: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
L_80034558:
    // 0x80034558: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8003455C: beql        $at, $zero, L_8003456C
    if (ctx->r1 == 0) {
        // 0x80034560: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_8003456C;
    }
    goto skip_4;
    // 0x80034560: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_4:
    // 0x80034564: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80034568:
    // 0x80034568: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_8003456C:
    // 0x8003456C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80034570: beq         $t8, $zero, L_800345B0
    if (ctx->r24 == 0) {
        // 0x80034574: addiu       $t6, $a2, 0x3
        ctx->r14 = ADD32(ctx->r6, 0X3);
            goto L_800345B0;
    }
    // 0x80034574: addiu       $t6, $a2, 0x3
    ctx->r14 = ADD32(ctx->r6, 0X3);
    // 0x80034578: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8003457C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80034580: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x80034584: beql        $t3, $zero, L_800345A0
    if (ctx->r11 == 0) {
        // 0x80034588: lw          $t0, 0xC0($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XC0);
            goto L_800345A0;
    }
    goto skip_5;
    // 0x80034588: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
    skip_5:
    // 0x8003458C: lw          $t4, 0xC0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC0);
    // 0x80034590: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80034594: sw          $t5, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->r13;
    // 0x80034598: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8003459C: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
L_800345A0:
    // 0x800345A0: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x800345A4: beql        $at, $zero, L_800345B4
    if (ctx->r1 == 0) {
        // 0x800345A8: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_800345B4;
    }
    goto skip_6;
    // 0x800345A8: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_6:
    // 0x800345AC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_800345B0:
    // 0x800345B0: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_800345B4:
    // 0x800345B4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800345B8: beql        $t8, $zero, L_800345F8
    if (ctx->r24 == 0) {
        // 0x800345BC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800345F8;
    }
    goto skip_7;
    // 0x800345BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_7:
    // 0x800345C0: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x800345C4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800345C8: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x800345CC: beql        $t3, $zero, L_800345E4
    if (ctx->r11 == 0) {
        // 0x800345D0: lw          $a1, 0xC4($a3)
        ctx->r5 = MEM_W(ctx->r7, 0XC4);
            goto L_800345E4;
    }
    goto skip_8;
    // 0x800345D0: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
    skip_8:
    // 0x800345D4: lw          $t4, 0xC4($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC4);
    // 0x800345D8: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x800345DC: sw          $t5, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->r13;
    // 0x800345E0: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
L_800345E4:
    // 0x800345E4: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800345E8: beql        $at, $zero, L_800345F8
    if (ctx->r1 == 0) {
        // 0x800345EC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800345F8;
    }
    goto skip_9;
    // 0x800345EC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_9:
    // 0x800345F0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800345F4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_800345F8:
    // 0x800345F8: bnel        $a2, $t2, L_800344D4
    if (ctx->r6 != ctx->r10) {
        // 0x800345FC: lw          $a1, 0x4($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X4);
            goto L_800344D4;
    }
    goto skip_10;
    // 0x800345FC: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    skip_10:
    // 0x80034600: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80034604: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x80034608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003460C: jr          $ra
    // 0x80034610: nop

    return;
    // 0x80034610: nop

;}
RECOMP_FUNC void func_80019BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019BC8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80019BCC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80019BD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019BD4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80019BD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019BDC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80019BE0: swc1        $f4, 0x52B4($at)
    MEM_W(0X52B4, ctx->r1) = ctx->f4.u32l;
    // 0x80019BE4: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80019BE8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80019BEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019BF0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019BF4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80019BF8: sw          $zero, 0x52A8($at)
    MEM_W(0X52A8, ctx->r1) = 0;
    // 0x80019BFC: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80019C00: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80019C04: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80019C08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019C0C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80019C10: sw          $zero, 0x52AC($at)
    MEM_W(0X52AC, ctx->r1) = 0;
    // 0x80019C14: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80019C18: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80019C1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80019C20: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019C24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80019C28: sw          $zero, 0x52B0($at)
    MEM_W(0X52B0, ctx->r1) = 0;
    // 0x80019C2C: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80019C30: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80019C34: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80019C38: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019C3C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80019C40: sb          $zero, 0x52A6($at)
    MEM_B(0X52A6, ctx->r1) = 0;
    // 0x80019C44: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x80019C48: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80019C4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80019C50: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019C54: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80019C58: sb          $zero, 0x52A5($at)
    MEM_B(0X52A5, ctx->r1) = 0;
    // 0x80019C5C: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x80019C60: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x80019C64: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80019C68: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019C6C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80019C70: sb          $zero, 0x52A4($at)
    MEM_B(0X52A4, ctx->r1) = 0;
    // 0x80019C74: jr          $ra
    // 0x80019C78: nop

    return;
    // 0x80019C78: nop

    // 0x80019C7C: jr          $ra
    // 0x80019C80: nop

    return;
    // 0x80019C80: nop

;}
RECOMP_FUNC void func_800272E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800272E8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800272EC: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_800272F0:
    // 0x800272F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800272F4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800272F8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800272FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80027300: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80027304: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80027308: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8002730C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80027310: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80027314: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80027318: lh          $t0, 0x425E($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X425E);
    // 0x8002731C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027320: beq         $t0, $at, L_800273F0
    if (ctx->r8 == ctx->r1) {
        // 0x80027324: nop
    
            goto L_800273F0;
    }
    // 0x80027324: nop

    // 0x80027328: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8002732C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80027330: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80027334: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027338: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8002733C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027340: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80027344: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80027348: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002734C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80027350: lh          $t5, 0x425E($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X425E);
    // 0x80027354: nop

    // 0x80027358: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x8002735C: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_80027360:
    // 0x80027360: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80027364: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80027368: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8002736C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80027370: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80027374: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80027378: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002737C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80027380: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80027384: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80027388: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8002738C: lh          $t2, 0x425E($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X425E);
    // 0x80027390: nop

    // 0x80027394: bne         $t2, $a0, L_800273D8
    if (ctx->r10 != ctx->r4) {
        // 0x80027398: nop
    
            goto L_800273D8;
    }
    // 0x80027398: nop

    // 0x8002739C: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x800273A0: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800273A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800273A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800273AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800273B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800273B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800273B8: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x800273BC: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x800273C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800273C4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800273C8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800273CC: sh          $t1, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r9;
    // 0x800273D0: b           L_800273F0
    // 0x800273D4: nop

        goto L_800273F0;
    // 0x800273D4: nop

L_800273D8:
    // 0x800273D8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x800273DC: nop

    // 0x800273E0: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x800273E4: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x800273E8: bne         $at, $zero, L_80027360
    if (ctx->r1 != 0) {
        // 0x800273EC: sw          $t9, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r25;
            goto L_80027360;
    }
    // 0x800273EC: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
L_800273F0:
    // 0x800273F0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800273F4: nop

    // 0x800273F8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800273FC: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x80027400: bne         $at, $zero, L_800272F0
    if (ctx->r1 != 0) {
        // 0x80027404: sw          $t2, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r10;
            goto L_800272F0;
    }
    // 0x80027404: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x80027408: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_8002740C:
    // 0x8002740C: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80027410: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x80027414: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80027418: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002741C: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x80027420: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80027424: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x80027428: addu        $t1, $t5, $t7
    ctx->r9 = ADD32(ctx->r13, ctx->r15);
    // 0x8002742C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027430: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80027434: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80027438: sh          $t3, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r11;
    // 0x8002743C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80027440: nop

    // 0x80027444: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80027448: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8002744C: bne         $at, $zero, L_8002740C
    if (ctx->r1 != 0) {
        // 0x80027450: sw          $t6, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r14;
            goto L_8002740C;
    }
    // 0x80027450: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80027454: b           L_8002745C
    // 0x80027458: nop

        goto L_8002745C;
    // 0x80027458: nop

L_8002745C:
    // 0x8002745C: jr          $ra
    // 0x80027460: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80027460: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alSeqNewMarker(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045F68: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80045F6C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80045F70: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80045F74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80045F78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80045F7C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80045F80: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80045F84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80045F88: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80045F8C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80045F90: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80045F94: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80045F98: bne         $a2, $zero, L_80045FB8
    if (ctx->r6 != 0) {
        // 0x80045F9C: sw          $s2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r18;
            goto L_80045FB8;
    }
    // 0x80045F9C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80045FA0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80045FA4: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
    // 0x80045FA8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80045FAC: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80045FB0: b           L_8004605C
    // 0x80045FB4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_8004605C;
    // 0x80045FB4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80045FB8:
    // 0x80045FB8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80045FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80045FC0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80045FC4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80045FC8: lh          $t8, 0x1A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1A);
    // 0x80045FCC: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80045FD0: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x80045FD4: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80045FD8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80045FDC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80045FE0: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80045FE4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80045FE8: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x80045FEC: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
L_80045FF0:
    // 0x80045FF0: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80045FF4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80045FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80045FFC: jal         0x80045DE4
    // 0x80046000: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x80046000: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80046004: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80046008: bnel        $t1, $s3, L_80046024
    if (ctx->r9 != ctx->r19) {
        // 0x8004600C: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_80046024;
    }
    goto skip_0;
    // 0x8004600C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x80046010: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    // 0x80046014: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80046018: b           L_80046030
    // 0x8004601C: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
        goto L_80046030;
    // 0x8004601C: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
    // 0x80046020: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_80046024:
    // 0x80046024: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80046028: bnel        $at, $zero, L_80045FF0
    if (ctx->r1 != 0) {
        // 0x8004602C: lw          $s4, 0x8($s0)
        ctx->r20 = MEM_W(ctx->r16, 0X8);
            goto L_80045FF0;
    }
    goto skip_1;
    // 0x8004602C: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80046030:
    // 0x80046030: sw          $s4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r20;
    // 0x80046034: sh          $s5, 0xC($s7)
    MEM_H(0XC, ctx->r23) = ctx->r21;
    // 0x80046038: sw          $s6, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r22;
    // 0x8004603C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80046040: sw          $t2, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r10;
    // 0x80046044: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80046048: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x8004604C: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80046050: sh          $t4, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r12;
    // 0x80046054: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80046058: sw          $t5, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r13;
L_8004605C:
    // 0x8004605C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80046064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80046068: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004606C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80046070: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80046074: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80046078: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8004607C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80046080: jr          $ra
    // 0x80046084: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80046084: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800060AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800060AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800060B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800060B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800060B8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800060BC: nop

    // 0x800060C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800060C4: beq         $t7, $zero, L_800060DC
    if (ctx->r15 == 0) {
        // 0x800060C8: nop
    
            goto L_800060DC;
    }
    // 0x800060C8: nop

    // 0x800060CC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800060D0: nop

    // 0x800060D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800060D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800060DC:
    // 0x800060DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800060E0: jal         0x8000D84C
    // 0x800060E4: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800060E4: nop

    after_0:
    // 0x800060E8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800060EC: sw          $v0, 0x2D58($at)
    MEM_W(0X2D58, ctx->r1) = ctx->r2;
    // 0x800060F0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800060F4: lw          $t0, 0x2D58($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D58);
    // 0x800060F8: nop

    // 0x800060FC: bne         $t0, $zero, L_8000610C
    if (ctx->r8 != 0) {
        // 0x80006100: nop
    
            goto L_8000610C;
    }
    // 0x80006100: nop

    // 0x80006104: b           L_8000615C
    // 0x80006108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000615C;
    // 0x80006108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000610C:
    // 0x8000610C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80006110: lw          $t1, -0x5CAC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CAC);
    // 0x80006114: nop

    // 0x80006118: bne         $t1, $zero, L_80006130
    if (ctx->r9 != 0) {
        // 0x8000611C: nop
    
            goto L_80006130;
    }
    // 0x8000611C: nop

    // 0x80006120: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80006124: lw          $t2, 0x2D58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D58);
    // 0x80006128: b           L_8000614C
    // 0x8000612C: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
        goto L_8000614C;
    // 0x8000612C: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
L_80006130:
    // 0x80006130: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006134: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80006138: lw          $a1, 0x2D58($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2D58);
    // 0x8000613C: lw          $a0, -0x5CAC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5CAC);
    // 0x80006140: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80006144: jal         0x80002CD0
    // 0x80006148: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x80006148: nop

    after_1:
L_8000614C:
    // 0x8000614C: b           L_8000615C
    // 0x80006150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000615C;
    // 0x80006150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006154: b           L_8000615C
    // 0x80006158: nop

        goto L_8000615C;
    // 0x80006158: nop

L_8000615C:
    // 0x8000615C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006164: jr          $ra
    // 0x80006168: nop

    return;
    // 0x80006168: nop

;}
RECOMP_FUNC void func_8001ABC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ABC4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8001ABC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001ABCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001ABD0: lw          $t7, -0x3D68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D68);
    // 0x8001ABD4: nop

    // 0x8001ABD8: lbu         $v0, 0x19($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X19);
    // 0x8001ABDC: jr          $ra
    // 0x8001ABE0: nop

    return;
    // 0x8001ABE0: nop

    // 0x8001ABE4: jr          $ra
    // 0x8001ABE8: nop

    return;
    // 0x8001ABE8: nop

    // 0x8001ABEC: jr          $ra
    // 0x8001ABF0: nop

    return;
    // 0x8001ABF0: nop

;}
RECOMP_FUNC void func_80007690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007698: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000769C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800076A0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800076A4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800076A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800076AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800076B0: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800076B4: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x800076B8: nop

    // 0x800076BC: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800076C0: beq         $at, $zero, L_80007878
    if (ctx->r1 == 0) {
        // 0x800076C4: nop
    
            goto L_80007878;
    }
    // 0x800076C4: nop

    // 0x800076C8: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x800076CC: nop

    // 0x800076D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800076D4: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x800076D8: nop

    // 0x800076DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800076E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800076E4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800076E8: nop

    // 0x800076EC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800076F0: beq         $at, $zero, L_80007848
    if (ctx->r1 == 0) {
        // 0x800076F4: nop
    
            goto L_80007848;
    }
    // 0x800076F4: nop

L_800076F8:
    // 0x800076F8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800076FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007700: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80007704: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80007708: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8000770C: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80007710: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80007714: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x80007718: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8000771C: nop

    // 0x80007720: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80007724: beq         $at, $zero, L_800077FC
    if (ctx->r1 == 0) {
        // 0x80007728: nop
    
            goto L_800077FC;
    }
    // 0x80007728: nop

    // 0x8000772C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007730: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80007734: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80007738: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8000773C: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x80007740: nop

    // 0x80007744: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    // 0x80007748: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8000774C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80007750: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007754: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80007758: addu        $t7, $t3, $t0
    ctx->r15 = ADD32(ctx->r11, ctx->r8);
    // 0x8000775C: lh          $t1, 0x0($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X0);
    // 0x80007760: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80007764: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x80007768: sh          $t1, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r9;
    // 0x8000776C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80007770: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80007774: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80007778: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8000777C: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x80007780: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80007784: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80007788: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8000778C: sll         $t2, $t3, 1
    ctx->r10 = S32(ctx->r11 << 1);
    // 0x80007790: addu        $t1, $t4, $t2
    ctx->r9 = ADD32(ctx->r12, ctx->r10);
    // 0x80007794: lh          $t5, 0x0($t1)
    ctx->r13 = MEM_H(ctx->r9, 0X0);
    // 0x80007798: nop

    // 0x8000779C: sh          $t5, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r13;
    // 0x800077A0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800077A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800077A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800077AC: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x800077B0: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x800077B4: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x800077B8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800077BC: addu        $t2, $t9, $t4
    ctx->r10 = ADD32(ctx->r25, ctx->r12);
    // 0x800077C0: sh          $t7, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r15;
    // 0x800077C4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800077C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800077CC: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x800077D0: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x800077D4: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x800077D8: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x800077DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800077E0: nop

    // 0x800077E4: beq         $t3, $zero, L_800077F4
    if (ctx->r11 == 0) {
        // 0x800077E8: nop
    
            goto L_800077F4;
    }
    // 0x800077E8: nop

    // 0x800077EC: b           L_800077FC
    // 0x800077F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
        goto L_800077FC;
    // 0x800077F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800077F4:
    // 0x800077F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800077F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_800077FC:
    // 0x800077FC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80007800: nop

    // 0x80007804: beq         $t4, $zero, L_80007820
    if (ctx->r12 == 0) {
        // 0x80007808: nop
    
            goto L_80007820;
    }
    // 0x80007808: nop

    // 0x8000780C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80007810: nop

    // 0x80007814: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x80007818: b           L_80007830
    // 0x8000781C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
        goto L_80007830;
    // 0x8000781C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_80007820:
    // 0x80007820: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80007824: nop

    // 0x80007828: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x8000782C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80007830:
    // 0x80007830: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80007834: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80007838: nop

    // 0x8000783C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80007840: bne         $at, $zero, L_800076F8
    if (ctx->r1 != 0) {
        // 0x80007844: nop
    
            goto L_800076F8;
    }
    // 0x80007844: nop

L_80007848:
    // 0x80007848: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8000784C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80007850: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80007854: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80007858: jal         0x80007690
    // 0x8000785C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_80007690(rdram, ctx);
        goto after_0;
    // 0x8000785C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x80007860: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80007864: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80007868: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000786C: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80007870: jal         0x80007690
    // 0x80007874: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_80007690(rdram, ctx);
        goto after_1;
    // 0x80007874: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_1:
L_80007878:
    // 0x80007878: b           L_80007880
    // 0x8000787C: nop

        goto L_80007880;
    // 0x8000787C: nop

L_80007880:
    // 0x80007880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007884: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80007888: jr          $ra
    // 0x8000788C: nop

    return;
    // 0x8000788C: nop

;}
RECOMP_FUNC void func_8000A724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A72C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000A730: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000A734: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8000A738: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x8000A73C: jal         0x80002DD4
    // 0x8000A740: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_80002DD4(rdram, ctx);
        goto after_0;
    // 0x8000A740: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8000A744: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000A748: nop

    // 0x8000A74C: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    // 0x8000A750: jal         0x80002D90
    // 0x8000A754: nop

    func_80002D90(rdram, ctx);
        goto after_1;
    // 0x8000A754: nop

    after_1:
    // 0x8000A758: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8000A75C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8000A760: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x8000A764: lh          $t8, 0x20($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X20);
    // 0x8000A768: nop

    // 0x8000A76C: beq         $t8, $t9, L_8000A79C
    if (ctx->r24 == ctx->r25) {
        // 0x8000A770: nop
    
            goto L_8000A79C;
    }
    // 0x8000A770: nop

    // 0x8000A774: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x8000A778: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8000A77C: nop

    // 0x8000A780: sh          $t0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r8;
    // 0x8000A784: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8000A788: nop

    // 0x8000A78C: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000A790: nop

    // 0x8000A794: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x8000A798: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
L_8000A79C:
    // 0x8000A79C: b           L_8000A7A4
    // 0x8000A7A0: nop

        goto L_8000A7A4;
    // 0x8000A7A0: nop

L_8000A7A4:
    // 0x8000A7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A7A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000A7AC: jr          $ra
    // 0x8000A7B0: nop

    return;
    // 0x8000A7B0: nop

;}
RECOMP_FUNC void func_8001B880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B880: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B884: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B888: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B88C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B890: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B894: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B898: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B89C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B8A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B8A4: lh          $t9, 0x4290($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4290);
    // 0x8001B8A8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8001B8AC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001B8B0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001B8B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001B8B8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8001B8BC: lbu         $v0, 0x52A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52A4);
    // 0x8001B8C0: jr          $ra
    // 0x8001B8C4: nop

    return;
    // 0x8001B8C4: nop

    // 0x8001B8C8: jr          $ra
    // 0x8001B8CC: nop

    return;
    // 0x8001B8CC: nop

    // 0x8001B8D0: jr          $ra
    // 0x8001B8D4: nop

    return;
    // 0x8001B8D4: nop

;}
RECOMP_FUNC void func_80001610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001618: lui         $t6, 0x1D
    ctx->r14 = S32(0X1D << 16);
    // 0x8000161C: lui         $t7, 0x1D
    ctx->r15 = S32(0X1D << 16);
    // 0x80001620: addiu       $t7, $t7, 0x1D0
    ctx->r15 = ADD32(ctx->r15, 0X1D0);
    // 0x80001624: addiu       $t6, $t6, -0x3320
    ctx->r14 = ADD32(ctx->r14, -0X3320);
    // 0x80001628: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000162C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001630: jal         0x8000068C
    // 0x80001634: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001634: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001638: b           L_80001640
    // 0x8000163C: nop

        goto L_80001640;
    // 0x8000163C: nop

L_80001640:
    // 0x80001640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001648: jr          $ra
    // 0x8000164C: nop

    return;
    // 0x8000164C: nop

;}
RECOMP_FUNC void func_8002E8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E8B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002E8B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002E8BC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E8C0: jal         0x80017FD8
    // 0x8002E8C4: addiu       $a0, $a0, -0x414C
    ctx->r4 = ADD32(ctx->r4, -0X414C);
    printf_stub(rdram, ctx);
        goto after_0;
    // 0x8002E8C4: addiu       $a0, $a0, -0x414C
    ctx->r4 = ADD32(ctx->r4, -0X414C);
    after_0:
    // 0x8002E8C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8002E8CC:
    // 0x8002E8CC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8002E8D0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002E8D4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002E8D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002E8DC: lh          $t8, 0x76A8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X76A8);
    // 0x8002E8E0: nop

    // 0x8002E8E4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8002E8E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E8EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E8F0: beq         $t9, $at, L_8002EA38
    if (ctx->r25 == ctx->r1) {
        // 0x8002E8F4: nop
    
            goto L_8002EA38;
    }
    // 0x8002E8F4: nop

    // 0x8002E8F8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8002E8FC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002E900: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8002E904: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002E908: lh          $t2, 0x76AA($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X76AA);
    // 0x8002E90C: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E910: beq         $t2, $at, L_8002EA38
    if (ctx->r10 == ctx->r1) {
        // 0x8002E914: nop
    
            goto L_8002EA38;
    }
    // 0x8002E914: nop

    // 0x8002E918: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E91C: jal         0x80017FD8
    // 0x8002E920: addiu       $a0, $a0, -0x4144
    ctx->r4 = ADD32(ctx->r4, -0X4144);
    printf_stub(rdram, ctx);
        goto after_1;
    // 0x8002E920: addiu       $a0, $a0, -0x4144
    ctx->r4 = ADD32(ctx->r4, -0X4144);
    after_1:
    // 0x8002E924: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8002E928:
    // 0x8002E928: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E92C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8002E930: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002E934: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002E938: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x8002E93C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002E940: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8002E944: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002E948: lbu         $t7, 0x4DD8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4DD8);
    // 0x8002E94C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8002E950: bne         $t7, $at, L_8002E960
    if (ctx->r15 != ctx->r1) {
        // 0x8002E954: nop
    
            goto L_8002E960;
    }
    // 0x8002E954: nop

    // 0x8002E958: b           L_8002E9A8
    // 0x8002E95C: nop

        goto L_8002E9A8;
    // 0x8002E95C: nop

L_8002E960:
    // 0x8002E960: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E964: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8002E968: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002E96C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8002E970: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x8002E974: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8002E978: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8002E97C: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x8002E980: lbu         $a1, 0x4DD8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4DD8);
    // 0x8002E984: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E988: jal         0x80017FD8
    // 0x8002E98C: addiu       $a0, $a0, -0x4140
    ctx->r4 = ADD32(ctx->r4, -0X4140);
    printf_stub(rdram, ctx);
        goto after_2;
    // 0x8002E98C: addiu       $a0, $a0, -0x4140
    ctx->r4 = ADD32(ctx->r4, -0X4140);
    after_2:
    // 0x8002E990: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8002E994: nop

    // 0x8002E998: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8002E99C: slti        $at, $t3, 0x14
    ctx->r1 = SIGNED(ctx->r11) < 0X14 ? 1 : 0;
    // 0x8002E9A0: bne         $at, $zero, L_8002E928
    if (ctx->r1 != 0) {
        // 0x8002E9A4: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_8002E928;
    }
    // 0x8002E9A4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
L_8002E9A8:
    // 0x8002E9A8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E9AC: jal         0x80017FD8
    // 0x8002E9B0: addiu       $a0, $a0, -0x413C
    ctx->r4 = ADD32(ctx->r4, -0X413C);
    printf_stub(rdram, ctx);
        goto after_3;
    // 0x8002E9B0: addiu       $a0, $a0, -0x413C
    ctx->r4 = ADD32(ctx->r4, -0X413C);
    after_3:
    // 0x8002E9B4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8002E9B8: nop

    // 0x8002E9BC: slti        $at, $t4, 0x14
    ctx->r1 = SIGNED(ctx->r12) < 0X14 ? 1 : 0;
    // 0x8002E9C0: beq         $at, $zero, L_8002E9EC
    if (ctx->r1 == 0) {
        // 0x8002E9C4: nop
    
            goto L_8002E9EC;
    }
    // 0x8002E9C4: nop

L_8002E9C8:
    // 0x8002E9C8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E9CC: jal         0x80017FD8
    // 0x8002E9D0: addiu       $a0, $a0, -0x4138
    ctx->r4 = ADD32(ctx->r4, -0X4138);
    printf_stub(rdram, ctx);
        goto after_4;
    // 0x8002E9D0: addiu       $a0, $a0, -0x4138
    ctx->r4 = ADD32(ctx->r4, -0X4138);
    after_4:
    // 0x8002E9D4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8002E9D8: nop

    // 0x8002E9DC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002E9E0: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x8002E9E4: bne         $at, $zero, L_8002E9C8
    if (ctx->r1 != 0) {
        // 0x8002E9E8: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_8002E9C8;
    }
    // 0x8002E9E8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_8002E9EC:
    // 0x8002E9EC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8002E9F0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002E9F4: addiu       $t9, $t9, 0x76A8
    ctx->r25 = ADD32(ctx->r25, 0X76A8);
    // 0x8002E9F8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8002E9FC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002EA00: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x8002EA04: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8002EA08: lh          $a2, 0x4($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X4);
    // 0x8002EA0C: lh          $a3, 0x6($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X6);
    // 0x8002EA10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8002EA14: lh          $t2, 0xA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA);
    // 0x8002EA18: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002EA1C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8002EA20: lh          $t3, 0xC($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XC);
    // 0x8002EA24: addiu       $a0, $a0, -0x4134
    ctx->r4 = ADD32(ctx->r4, -0X4134);
    // 0x8002EA28: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8002EA2C: lh          $t4, 0xE($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XE);
    // 0x8002EA30: jal         0x80017FD8
    // 0x8002EA34: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    printf_stub(rdram, ctx);
        goto after_5;
    // 0x8002EA34: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_5:
L_8002EA38:
    // 0x8002EA38: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8002EA3C: nop

    // 0x8002EA40: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002EA44: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x8002EA48: bne         $at, $zero, L_8002E8CC
    if (ctx->r1 != 0) {
        // 0x8002EA4C: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_8002E8CC;
    }
    // 0x8002EA4C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8002EA50: b           L_8002EA58
    // 0x8002EA54: nop

        goto L_8002EA58;
    // 0x8002EA54: nop

L_8002EA58:
    // 0x8002EA58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002EA5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002EA60: jr          $ra
    // 0x8002EA64: nop

    return;
    // 0x8002EA64: nop

;}
RECOMP_FUNC void func_80002F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F94: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80002F98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002F9C: sw          $t6, -0x5D5C($at)
    MEM_W(-0X5D5C, ctx->r1) = ctx->r14;
    // 0x80002FA0: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x80002FA4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FA8: sw          $t7, -0x5D58($at)
    MEM_W(-0X5D58, ctx->r1) = ctx->r15;
    // 0x80002FAC: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80002FB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FB4: sw          $t8, -0x5D54($at)
    MEM_W(-0X5D54, ctx->r1) = ctx->r24;
    // 0x80002FB8: lbu         $t9, 0x10($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X10);
    // 0x80002FBC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FC0: sb          $t9, -0x5D40($at)
    MEM_B(-0X5D40, ctx->r1) = ctx->r25;
    // 0x80002FC4: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
    // 0x80002FC8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FCC: sw          $t0, -0x5D3C($at)
    MEM_W(-0X5D3C, ctx->r1) = ctx->r8;
    // 0x80002FD0: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x80002FD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FD8: sw          $t1, -0x5D18($at)
    MEM_W(-0X5D18, ctx->r1) = ctx->r9;
    // 0x80002FDC: lw          $t2, 0x1C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1C);
    // 0x80002FE0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FE4: sw          $t2, -0x5D14($at)
    MEM_W(-0X5D14, ctx->r1) = ctx->r10;
    // 0x80002FE8: lw          $t3, 0x20($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X20);
    // 0x80002FEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FF0: sw          $t3, -0x5CFC($at)
    MEM_W(-0X5CFC, ctx->r1) = ctx->r11;
    // 0x80002FF4: lw          $t4, 0x24($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X24);
    // 0x80002FF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002FFC: sw          $t4, -0x5CF8($at)
    MEM_W(-0X5CF8, ctx->r1) = ctx->r12;
    // 0x80003000: lw          $t5, 0x28($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X28);
    // 0x80003004: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003008: sw          $t5, -0x5CF0($at)
    MEM_W(-0X5CF0, ctx->r1) = ctx->r13;
    // 0x8000300C: lhu         $t6, 0x2C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2C);
    // 0x80003010: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003014: sh          $t6, -0x5D38($at)
    MEM_H(-0X5D38, ctx->r1) = ctx->r14;
    // 0x80003018: lw          $t7, 0x30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X30);
    // 0x8000301C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003020: sw          $t7, -0x5D34($at)
    MEM_W(-0X5D34, ctx->r1) = ctx->r15;
    // 0x80003024: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    // 0x80003028: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000302C: sw          $t8, -0x5D30($at)
    MEM_W(-0X5D30, ctx->r1) = ctx->r24;
    // 0x80003030: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x80003034: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003038: sw          $t9, -0x5D2C($at)
    MEM_W(-0X5D2C, ctx->r1) = ctx->r25;
    // 0x8000303C: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x80003040: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003044: sw          $t0, -0x5D60($at)
    MEM_W(-0X5D60, ctx->r1) = ctx->r8;
    // 0x80003048: jr          $ra
    // 0x8000304C: nop

    return;
    // 0x8000304C: nop

    // 0x80003050: jr          $ra
    // 0x80003054: nop

    return;
    // 0x80003054: nop

;}
RECOMP_FUNC void func_80004284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000428C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004290: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004294: jal         0x80034710
    // 0x80004298: nop

    alSeqpGetState(rdram, ctx);
        goto after_0;
    // 0x80004298: nop

    after_0:
    // 0x8000429C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800042A0: bne         $v0, $at, L_800042B8
    if (ctx->r2 != ctx->r1) {
        // 0x800042A4: nop
    
            goto L_800042B8;
    }
    // 0x800042A4: nop

    // 0x800042A8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800042AC: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x800042B0: jal         0x80034720
    // 0x800042B4: nop

    alSeqpStop(rdram, ctx);
        goto after_1;
    // 0x800042B4: nop

    after_1:
L_800042B8:
    // 0x800042B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800042BC: sw          $zero, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = 0;
    // 0x800042C0: b           L_800042C8
    // 0x800042C4: nop

        goto L_800042C8;
    // 0x800042C4: nop

L_800042C8:
    // 0x800042C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800042CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800042D0: jr          $ra
    // 0x800042D4: nop

    return;
    // 0x800042D4: nop

;}
RECOMP_FUNC void Init_Obj(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019D74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019D7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80019D80: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80019D84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80019D88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80019D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019D90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80019D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019D98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019D9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80019DA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80019DA4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80019DA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DAC: nop

    // 0x80019DB0: sh          $zero, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = 0;
    // 0x80019DB4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DB8: nop

    // 0x80019DBC: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x80019DC0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DC4: nop

    // 0x80019DC8: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
    // 0x80019DCC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DD0: nop

    // 0x80019DD4: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
    // 0x80019DD8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DDC: nop

    // 0x80019DE0: sh          $zero, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = 0;
    // 0x80019DE4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DE8: nop

    // 0x80019DEC: sh          $zero, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = 0;
    // 0x80019DF0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019DF4: nop

    // 0x80019DF8: sh          $zero, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = 0;
    // 0x80019DFC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E00: nop

    // 0x80019E04: sh          $zero, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = 0;
    // 0x80019E08: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E0C: nop

    // 0x80019E10: sh          $zero, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = 0;
    // 0x80019E14: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E18: nop

    // 0x80019E1C: sh          $zero, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = 0;
    // 0x80019E20: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E24: nop

    // 0x80019E28: sh          $zero, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = 0;
    // 0x80019E2C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E30: nop

    // 0x80019E34: sh          $zero, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = 0;
    // 0x80019E38: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E3C: nop

    // 0x80019E40: sh          $zero, 0xBC($t2)
    MEM_H(0XBC, ctx->r10) = 0;
    // 0x80019E44: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E48: nop

    // 0x80019E4C: sh          $zero, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = 0;
    // 0x80019E50: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E54: nop

    // 0x80019E58: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
    // 0x80019E5C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E60: nop

    // 0x80019E64: sh          $zero, 0xC2($t5)
    MEM_H(0XC2, ctx->r13) = 0;
    // 0x80019E68: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E6C: nop

    // 0x80019E70: sw          $zero, 0xC4($t6)
    MEM_W(0XC4, ctx->r14) = 0;
    // 0x80019E74: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E78: nop

    // 0x80019E7C: sw          $zero, 0xC8($t7)
    MEM_W(0XC8, ctx->r15) = 0;
    // 0x80019E80: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E84: nop

    // 0x80019E88: sw          $zero, 0xCC($t8)
    MEM_W(0XCC, ctx->r24) = 0;
    // 0x80019E8C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80019E90: nop

    // 0x80019E94: sw          $zero, 0xD0($t9)
    MEM_W(0XD0, ctx->r25) = 0;
    // 0x80019E98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019E9C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EA0: nop

    // 0x80019EA4: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x80019EA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80019EAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EB0: nop

    // 0x80019EB4: swc1        $f6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f6.u32l;
    // 0x80019EB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80019EBC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EC0: nop

    // 0x80019EC4: swc1        $f8, 0xDC($t2)
    MEM_W(0XDC, ctx->r10) = ctx->f8.u32l;
    // 0x80019EC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80019ECC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019ED0: nop

    // 0x80019ED4: swc1        $f10, 0xE0($t3)
    MEM_W(0XE0, ctx->r11) = ctx->f10.u32l;
    // 0x80019ED8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EDC: nop

    // 0x80019EE0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80019EE4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EE8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80019EEC: sh          $t5, 0xFC($t6)
    MEM_H(0XFC, ctx->r14) = ctx->r13;
    // 0x80019EF0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019EF4: nop

    // 0x80019EF8: sh          $zero, 0xE4($t7)
    MEM_H(0XE4, ctx->r15) = 0;
    // 0x80019EFC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F00: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80019F04: sh          $t8, 0xE6($t9)
    MEM_H(0XE6, ctx->r25) = ctx->r24;
    // 0x80019F08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80019F0C:
    // 0x80019F0C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80019F10: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F14: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80019F18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80019F1C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80019F20: sh          $t0, 0xE8($t4)
    MEM_H(0XE8, ctx->r12) = ctx->r8;
    // 0x80019F24: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80019F28: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F2C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80019F30: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80019F34: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80019F38: sh          $t5, 0x10E($t9)
    MEM_H(0X10E, ctx->r25) = ctx->r13;
    // 0x80019F3C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80019F40: nop

    // 0x80019F44: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80019F48: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x80019F4C: bne         $at, $zero, L_80019F0C
    if (ctx->r1 != 0) {
        // 0x80019F50: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_80019F0C;
    }
    // 0x80019F50: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80019F54: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F58: nop

    // 0x80019F5C: sh          $zero, 0xFE($t3)
    MEM_H(0XFE, ctx->r11) = 0;
    // 0x80019F60: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F64: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80019F68: sh          $t0, 0x100($t4)
    MEM_H(0X100, ctx->r12) = ctx->r8;
    // 0x80019F6C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80019F74: sb          $t7, 0x102($t6)
    MEM_B(0X102, ctx->r14) = ctx->r15;
    // 0x80019F78: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F7C: nop

    // 0x80019F80: sb          $zero, 0x103($t8)
    MEM_B(0X103, ctx->r24) = 0;
    // 0x80019F84: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F88: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80019F8C: sh          $t5, 0x104($t9)
    MEM_H(0X104, ctx->r25) = ctx->r13;
    // 0x80019F90: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F94: nop

    // 0x80019F98: sh          $zero, 0x108($t2)
    MEM_H(0X108, ctx->r10) = 0;
    // 0x80019F9C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FA0: nop

    // 0x80019FA4: sb          $zero, 0x10A($t1)
    MEM_B(0X10A, ctx->r9) = 0;
    // 0x80019FA8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FAC: nop

    // 0x80019FB0: sb          $zero, 0x10B($t3)
    MEM_B(0X10B, ctx->r11) = 0;
    // 0x80019FB4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FB8: nop

    // 0x80019FBC: sb          $zero, 0x10C($t0)
    MEM_B(0X10C, ctx->r8) = 0;
    // 0x80019FC0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FC4: nop

    // 0x80019FC8: sh          $zero, 0x106($t4)
    MEM_H(0X106, ctx->r12) = 0;
    // 0x80019FCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80019FD0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FD4: nop

    // 0x80019FD8: swc1        $f16, 0x124($t7)
    MEM_W(0X124, ctx->r15) = ctx->f16.u32l;
    // 0x80019FDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80019FE0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FE4: nop

    // 0x80019FE8: swc1        $f18, 0x128($t6)
    MEM_W(0X128, ctx->r14) = ctx->f18.u32l;
    // 0x80019FEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019FF0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019FF4: nop

    // 0x80019FF8: swc1        $f4, 0x12C($t8)
    MEM_W(0X12C, ctx->r24) = ctx->f4.u32l;
    // 0x80019FFC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A000: nop

    // 0x8001A004: sb          $zero, 0x130($t5)
    MEM_B(0X130, ctx->r13) = 0;
    // 0x8001A008: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A00C: nop

    // 0x8001A010: sb          $zero, 0x131($t9)
    MEM_B(0X131, ctx->r25) = 0;
    // 0x8001A014: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001A018: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A01C: nop

    // 0x8001A020: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x8001A024: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001A028: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A02C: nop

    // 0x8001A030: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
    // 0x8001A034: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A038: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A03C: nop

    // 0x8001A040: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x8001A044: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A048: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001A04C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A050: nop

    // 0x8001A054: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x8001A058: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A05C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001A060: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A064: nop

    // 0x8001A068: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
    // 0x8001A06C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001A074: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A078: nop

    // 0x8001A07C: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x8001A080: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001A084: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A088: nop

    // 0x8001A08C: swc1        $f6, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f6.u32l;
    // 0x8001A090: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001A094: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A098: nop

    // 0x8001A09C: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x8001A0A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A0A4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0A8: nop

    // 0x8001A0AC: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    // 0x8001A0B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001A0B4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0B8: nop

    // 0x8001A0BC: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
    // 0x8001A0C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001A0C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0C8: nop

    // 0x8001A0CC: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x8001A0D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001A0D4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0D8: nop

    // 0x8001A0DC: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x8001A0E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001A0E4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0E8: nop

    // 0x8001A0EC: swc1        $f6, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f6.u32l;
    // 0x8001A0F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001A0F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0F8: nop

    // 0x8001A0FC: swc1        $f8, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f8.u32l;
    // 0x8001A100: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A104: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A108: nop

    // 0x8001A10C: swc1        $f10, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->f10.u32l;
    // 0x8001A110: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001A114: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A118: nop

    // 0x8001A11C: swc1        $f16, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f16.u32l;
    // 0x8001A120: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001A124: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A128: nop

    // 0x8001A12C: swc1        $f18, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f18.u32l;
    // 0x8001A130: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001A134: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A138: nop

    // 0x8001A13C: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8001A140: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001A144: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A148: nop

    // 0x8001A14C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8001A150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001A154: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A158: nop

    // 0x8001A15C: swc1        $f8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->f8.u32l;
    // 0x8001A160: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A164: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A168: nop

    // 0x8001A16C: swc1        $f10, 0x5C($t2)
    MEM_W(0X5C, ctx->r10) = ctx->f10.u32l;
    // 0x8001A170: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001A174: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A178: nop

    // 0x8001A17C: swc1        $f16, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->f16.u32l;
    // 0x8001A180: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A184: nop

    // 0x8001A188: sb          $zero, 0x13A($t3)
    MEM_B(0X13A, ctx->r11) = 0;
    // 0x8001A18C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A190: nop

    // 0x8001A194: sb          $zero, 0x139($t0)
    MEM_B(0X139, ctx->r8) = 0;
    // 0x8001A198: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8001A19C:
    // 0x8001A19C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001A1A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A1A4: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8001A1A8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8001A1AC: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x8001A1B0: sh          $t4, 0x13C($t5)
    MEM_H(0X13C, ctx->r13) = ctx->r12;
    // 0x8001A1B4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001A1B8: nop

    // 0x8001A1BC: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x8001A1C0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x8001A1C4: bne         $at, $zero, L_8001A19C
    if (ctx->r1 != 0) {
        // 0x8001A1C8: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_8001A19C;
    }
    // 0x8001A1C8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8001A1CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8001A1D0:
    // 0x8001A1D0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001A1D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A1D8: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x8001A1DC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8001A1E0: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x8001A1E4: sh          $t1, 0x140($t7)
    MEM_H(0X140, ctx->r15) = ctx->r9;
    // 0x8001A1E8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001A1EC: nop

    // 0x8001A1F0: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x8001A1F4: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8001A1F8: bne         $at, $zero, L_8001A1D0
    if (ctx->r1 != 0) {
        // 0x8001A1FC: sw          $t4, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r12;
            goto L_8001A1D0;
    }
    // 0x8001A1FC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8001A200: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8001A204:
    // 0x8001A204: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001A208: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A20C: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x8001A210: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8001A214: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x8001A218: sh          $t5, 0x148($t3)
    MEM_H(0X148, ctx->r11) = ctx->r13;
    // 0x8001A21C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001A220: nop

    // 0x8001A224: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8001A228: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8001A22C: bne         $at, $zero, L_8001A204
    if (ctx->r1 != 0) {
        // 0x8001A230: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_8001A204;
    }
    // 0x8001A230: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8001A234: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001A238: jal         0x800194C4
    // 0x8001A23C: nop

    func_800194C4(rdram, ctx);
        goto after_0;
    // 0x8001A23C: nop

    after_0:
    // 0x8001A240: b           L_8001A248
    // 0x8001A244: nop

        goto L_8001A248;
    // 0x8001A244: nop

L_8001A248:
    // 0x8001A248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A24C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A250: jr          $ra
    // 0x8001A254: nop

    return;
    // 0x8001A254: nop

;}
RECOMP_FUNC void func_80021158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002115C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021160: jal         0x8001ECB8
    // 0x80021164: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80021164: nop

    after_0:
    // 0x80021168: lui         $t6, 0x8002
    ctx->r14 = S32(0X8002 << 16);
    // 0x8002116C: addiu       $t6, $t6, 0xF18
    ctx->r14 = ADD32(ctx->r14, 0XF18);
    // 0x80021170: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80021174: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80021178: lui         $t7, 0x8002
    ctx->r15 = S32(0X8002 << 16);
    // 0x8002117C: addiu       $t7, $t7, 0xC44
    ctx->r15 = ADD32(ctx->r15, 0XC44);
    // 0x80021180: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80021184: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80021188: jal         0x8001F9DC
    // 0x8002118C: nop

    Check_PakState(rdram, ctx);
        goto after_1;
    // 0x8002118C: nop

    after_1:
    // 0x80021190: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80021194: jal         0x8001E954
    // 0x80021198: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_2;
    // 0x80021198: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_2:
    // 0x8002119C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x800211A0: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x800211A4: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x800211A8: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x800211AC: jal         0x8001E98C
    // 0x800211B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_3;
    // 0x800211B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800211B4: jal         0x80019C84
    // 0x800211B8: nop

    func_80019C84(rdram, ctx);
        goto after_4;
    // 0x800211B8: nop

    after_4:
    // 0x800211BC: jal         0x80019D2C
    // 0x800211C0: nop

    func_80019D2C(rdram, ctx);
        goto after_5;
    // 0x800211C0: nop

    after_5:
    // 0x800211C4: jal         0x8001A258
    // 0x800211C8: nop

    func_8001A258(rdram, ctx);
        goto after_6;
    // 0x800211C8: nop

    after_6:
    // 0x800211CC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800211D0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800211D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x800211D8: jal         0x8001D244
    // 0x800211DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x800211DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x800211E0: jal         0x8001D284
    // 0x800211E4: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x800211E4: nop

    after_8:
    // 0x800211E8: jal         0x80000964
    // 0x800211EC: nop

    func_80000964(rdram, ctx);
        goto after_9;
    // 0x800211EC: nop

    after_9:
    // 0x800211F0: b           L_800211F8
    // 0x800211F4: nop

        goto L_800211F8;
    // 0x800211F4: nop

L_800211F8:
    // 0x800211F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800211FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80021200: jr          $ra
    // 0x80021204: nop

    return;
    // 0x80021204: nop

;}
RECOMP_FUNC void func_80027464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027464: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80027468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002746C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80027470: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80027474: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80027478: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8002747C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80027480:
    // 0x80027480: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80027484: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80027488: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002748C: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x80027490: sw          $t6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r14;
    // 0x80027494: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80027498: nop

    // 0x8002749C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800274A0: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x800274A4: bne         $at, $zero, L_80027480
    if (ctx->r1 != 0) {
        // 0x800274A8: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80027480;
    }
    // 0x800274A8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800274AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800274B0: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x800274B4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_800274B8:
    // 0x800274B8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800274BC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800274C0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800274C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800274C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800274CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800274D0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800274D4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800274D8: lh          $t5, 0x41F4($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F4);
    // 0x800274DC: nop

    // 0x800274E0: bne         $t5, $zero, L_80027528
    if (ctx->r13 != 0) {
        // 0x800274E4: nop
    
            goto L_80027528;
    }
    // 0x800274E4: nop

    // 0x800274E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800274EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800274F0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800274F4: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x800274F8: sw          $t7, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r15;
    // 0x800274FC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80027500: nop

    // 0x80027504: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80027508: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8002750C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80027510: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80027514: nop

    // 0x80027518: bne         $t2, $t3, L_80027528
    if (ctx->r10 != ctx->r11) {
        // 0x8002751C: nop
    
            goto L_80027528;
    }
    // 0x8002751C: nop

    // 0x80027520: b           L_80027540
    // 0x80027524: nop

        goto L_80027540;
    // 0x80027524: nop

L_80027528:
    // 0x80027528: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8002752C: nop

    // 0x80027530: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80027534: slti        $at, $t5, 0x4E
    ctx->r1 = SIGNED(ctx->r13) < 0X4E ? 1 : 0;
    // 0x80027538: bne         $at, $zero, L_800274B8
    if (ctx->r1 != 0) {
        // 0x8002753C: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_800274B8;
    }
    // 0x8002753C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_80027540:
    // 0x80027540: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80027544: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x80027548: bne         $t6, $at, L_80027560
    if (ctx->r14 != ctx->r1) {
        // 0x8002754C: nop
    
            goto L_80027560;
    }
    // 0x8002754C: nop

    // 0x80027550: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80027554: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x80027558: b           L_800279BC
    // 0x8002755C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_800279BC;
    // 0x8002755C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80027560:
    // 0x80027560: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80027564: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80027568: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8002756C: nop

    // 0x80027570: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80027574: beq         $at, $zero, L_800279BC
    if (ctx->r1 == 0) {
        // 0x80027578: nop
    
            goto L_800279BC;
    }
    // 0x80027578: nop

L_8002757C:
    // 0x8002757C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80027580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027584: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80027588: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x8002758C: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x80027590: nop

    // 0x80027594: bne         $t3, $at, L_800275A4
    if (ctx->r11 != ctx->r1) {
        // 0x80027598: nop
    
            goto L_800275A4;
    }
    // 0x80027598: nop

    // 0x8002759C: b           L_800279BC
    // 0x800275A0: nop

        goto L_800279BC;
    // 0x800275A0: nop

L_800275A4:
    // 0x800275A4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800275A8: nop

    // 0x800275AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800275B0: addu        $a0, $sp, $t5
    ctx->r4 = ADD32(ctx->r29, ctx->r13);
    // 0x800275B4: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x800275B8: jal         0x8001A928
    // 0x800275BC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x800275BC: nop

    after_0:
    // 0x800275C0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800275C4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800275C8: lh          $t9, 0x4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4);
    // 0x800275CC: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x800275D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800275D4: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800275D8: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x800275DC: addu        $a0, $sp, $t7
    ctx->r4 = ADD32(ctx->r29, ctx->r15);
    // 0x800275E0: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x800275E4: lw          $a3, -0x3560($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3560);
    // 0x800275E8: lb          $a1, 0x0($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X0);
    // 0x800275EC: lb          $a2, 0x6($t8)
    ctx->r6 = MEM_B(ctx->r24, 0X6);
    // 0x800275F0: jal         0x8001BD44
    // 0x800275F4: nop

    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x800275F4: nop

    after_1:
    // 0x800275F8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800275FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027600: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80027604: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80027608: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x8002760C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80027610: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80027614: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027618: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002761C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027620: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027624: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027628: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002762C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80027630: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80027634: swc1        $f4, 0x41A0($at)
    MEM_W(0X41A0, ctx->r1) = ctx->f4.u32l;
    // 0x80027638: lw          $t7, 0x24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X24);
    // 0x8002763C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80027640: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027644: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027648: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002764C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027650: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80027654: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80027658: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002765C: lwc1        $f6, 0x50($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X50);
    // 0x80027660: nop

    // 0x80027664: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80027668: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8002766C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027670: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80027674: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80027678: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x8002767C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80027680: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80027684: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027688: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002768C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027690: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027694: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027698: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002769C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800276A0: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x800276A4: swc1        $f8, 0x41A4($at)
    MEM_W(0X41A4, ctx->r1) = ctx->f8.u32l;
    // 0x800276A8: lw          $t7, 0x24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X24);
    // 0x800276AC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800276B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800276B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800276B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800276BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800276C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800276C4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800276C8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800276CC: lwc1        $f10, 0x54($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X54);
    // 0x800276D0: nop

    // 0x800276D4: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x800276D8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800276DC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800276E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800276E4: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x800276E8: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x800276EC: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800276F0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800276F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800276F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800276FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027700: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027708: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002770C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80027710: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80027714: swc1        $f16, 0x41A8($at)
    MEM_W(0X41A8, ctx->r1) = ctx->f16.u32l;
    // 0x80027718: lw          $t7, 0x24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X24);
    // 0x8002771C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80027720: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027724: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027728: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002772C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027730: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80027734: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80027738: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002773C: lwc1        $f18, 0x58($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X58);
    // 0x80027740: nop

    // 0x80027744: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x80027748: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8002774C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80027750: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80027754: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80027758: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x8002775C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027760: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80027764: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027768: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002776C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027770: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027774: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80027778: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x8002777C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027780: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80027784: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80027788: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x8002778C: lw          $t7, 0x24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X24);
    // 0x80027790: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027794: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027798: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002779C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800277A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800277A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800277A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800277AC: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x800277B0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800277B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800277B8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800277BC: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x800277C0: lw          $t2, 0x24($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X24);
    // 0x800277C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800277C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800277CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800277D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800277D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800277D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800277DC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800277E0: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x800277E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800277E8: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800277EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800277F0: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x800277F4: lw          $t8, 0x24($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X24);
    // 0x800277F8: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x800277FC: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80027800: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80027804: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80027808: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002780C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80027810: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027814: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80027818: sh          $t5, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r13;
    // 0x8002781C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80027820: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80027824: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80027828: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x8002782C: lw          $t4, 0x24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X24);
    // 0x80027830: lb          $t2, 0x7($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X7);
    // 0x80027834: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80027838: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8002783C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80027840: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80027844: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80027848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002784C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80027850: sh          $t2, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r10;
    // 0x80027854: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027858: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8002785C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80027860: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x80027864: lw          $t1, 0x24($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X24);
    // 0x80027868: lb          $t8, 0x8($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X8);
    // 0x8002786C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80027870: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80027874: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80027878: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8002787C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80027880: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027884: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80027888: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x8002788C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80027890: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80027894: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80027898: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x8002789C: lw          $t7, 0x24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X24);
    // 0x800278A0: lb          $t4, 0x9($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X9);
    // 0x800278A4: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800278A8: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800278AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800278B0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800278B4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800278B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800278BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800278C0: sb          $t4, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = ctx->r12;
    // 0x800278C4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800278C8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x800278CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800278D0: addu        $t3, $sp, $t9
    ctx->r11 = ADD32(ctx->r29, ctx->r25);
    // 0x800278D4: lw          $t3, 0x24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X24);
    // 0x800278D8: lbu         $t1, 0xA($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XA);
    // 0x800278DC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800278E0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800278E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800278E8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800278EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800278F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800278F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800278F8: sb          $t1, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r9;
    // 0x800278FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80027900: nop

    // 0x80027904: blez        $t6, L_80027984
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80027908: nop
    
            goto L_80027984;
    }
    // 0x80027908: nop

    // 0x8002790C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027910: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x80027914: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80027918: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x8002791C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80027920: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x80027924: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80027928: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8002792C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80027930: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80027934: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80027938: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002793C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80027940: sh          $t4, 0x4236($at)
    MEM_H(0X4236, ctx->r1) = ctx->r12;
    // 0x80027944: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x80027948: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8002794C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80027950: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027954: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027958: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002795C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027960: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80027964: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x80027968: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002796C: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x80027970: lw          $t0, 0x0($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X0);
    // 0x80027974: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x80027978: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002797C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80027980: sh          $t0, 0x4236($at)
    MEM_H(0X4236, ctx->r1) = ctx->r8;
L_80027984:
    // 0x80027984: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80027988: nop

    // 0x8002798C: addiu       $t2, $t3, 0xC
    ctx->r10 = ADD32(ctx->r11, 0XC);
    // 0x80027990: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80027994: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80027998: nop

    // 0x8002799C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800279A0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800279A4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800279A8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800279AC: nop

    // 0x800279B0: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800279B4: bne         $at, $zero, L_8002757C
    if (ctx->r1 != 0) {
        // 0x800279B8: nop
    
            goto L_8002757C;
    }
    // 0x800279B8: nop

L_800279BC:
    // 0x800279BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800279C0: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x800279C4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800279C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800279CC: beq         $t9, $at, L_80027AE8
    if (ctx->r25 == ctx->r1) {
        // 0x800279D0: nop
    
            goto L_80027AE8;
    }
    // 0x800279D0: nop

L_800279D4:
    // 0x800279D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800279D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800279DC: addiu       $t0, $sp, 0x24
    ctx->r8 = ADD32(ctx->r29, 0X24);
    // 0x800279E0: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x800279E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800279E8: beq         $t4, $at, L_80027AB4
    if (ctx->r12 == ctx->r1) {
        // 0x800279EC: nop
    
            goto L_80027AB4;
    }
    // 0x800279EC: nop

L_800279F0:
    // 0x800279F0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800279F4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800279F8: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x800279FC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80027A00: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80027A04: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x80027A08: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x80027A0C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80027A10: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80027A14: nop

    // 0x80027A18: beq         $t7, $t0, L_80027A80
    if (ctx->r15 == ctx->r8) {
        // 0x80027A1C: nop
    
            goto L_80027A80;
    }
    // 0x80027A1C: nop

    // 0x80027A20: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80027A24: addiu       $t2, $sp, 0x24
    ctx->r10 = ADD32(ctx->r29, 0X24);
    // 0x80027A28: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80027A2C: addu        $t9, $t5, $t2
    ctx->r25 = ADD32(ctx->r13, ctx->r10);
    // 0x80027A30: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80027A34: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80027A38: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80027A3C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80027A40: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80027A44: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80027A48: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80027A4C: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x80027A50: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80027A54: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x80027A58: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80027A5C: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x80027A60: addu        $t6, $t0, $t3
    ctx->r14 = ADD32(ctx->r8, ctx->r11);
    // 0x80027A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027A68: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80027A6C: sh          $t1, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r9;
    // 0x80027A70: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80027A74: nop

    // 0x80027A78: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80027A7C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
L_80027A80:
    // 0x80027A80: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80027A84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027A88: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80027A8C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80027A90: addu        $t4, $sp, $t7
    ctx->r12 = ADD32(ctx->r29, ctx->r15);
    // 0x80027A94: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80027A98: lw          $t4, 0x24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X24);
    // 0x80027A9C: nop

    // 0x80027AA0: beq         $t4, $at, L_80027AB4
    if (ctx->r12 == ctx->r1) {
        // 0x80027AA4: nop
    
            goto L_80027AB4;
    }
    // 0x80027AA4: nop

    // 0x80027AA8: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x80027AAC: bne         $at, $zero, L_800279F0
    if (ctx->r1 != 0) {
        // 0x80027AB0: nop
    
            goto L_800279F0;
    }
    // 0x80027AB0: nop

L_80027AB4:
    // 0x80027AB4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80027AB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027ABC: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80027AC0: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80027AC4: addu        $t6, $sp, $t1
    ctx->r14 = ADD32(ctx->r29, ctx->r9);
    // 0x80027AC8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80027ACC: lw          $t6, 0x24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X24);
    // 0x80027AD0: nop

    // 0x80027AD4: beq         $t6, $at, L_80027AE8
    if (ctx->r14 == ctx->r1) {
        // 0x80027AD8: nop
    
            goto L_80027AE8;
    }
    // 0x80027AD8: nop

    // 0x80027ADC: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x80027AE0: bne         $at, $zero, L_800279D4
    if (ctx->r1 != 0) {
        // 0x80027AE4: nop
    
            goto L_800279D4;
    }
    // 0x80027AE4: nop

L_80027AE8:
    // 0x80027AE8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80027AEC: lw          $t8, 0x5198($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5198);
    // 0x80027AF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027AF4: bne         $t8, $at, L_80027B0C
    if (ctx->r24 != ctx->r1) {
        // 0x80027AF8: nop
    
            goto L_80027B0C;
    }
    // 0x80027AF8: nop

    // 0x80027AFC: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x80027B00: lw          $t2, 0x0($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X0);
    // 0x80027B04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80027B08: sw          $t2, 0x5198($at)
    MEM_W(0X5198, ctx->r1) = ctx->r10;
L_80027B0C:
    // 0x80027B0C: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x80027B10: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80027B14: b           L_80027B24
    // 0x80027B18: nop

        goto L_80027B24;
    // 0x80027B18: nop

    // 0x80027B1C: b           L_80027B24
    // 0x80027B20: nop

        goto L_80027B24;
    // 0x80027B20: nop

L_80027B24:
    // 0x80027B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027B28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80027B2C: jr          $ra
    // 0x80027B30: nop

    return;
    // 0x80027B30: nop

;}
RECOMP_FUNC void __initChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E4F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003E4F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E4FC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003E500: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003E504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E508: lbu         $t6, 0x34($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X34);
    // 0x8003E50C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8003E510: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E514: blez        $t6, L_8003E54C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003E518: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8003E54C;
    }
    // 0x8003E518: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003E51C: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_8003E520:
    // 0x8003E520: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003E524: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003E528: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x8003E52C: jal         0x8003CE04
    // 0x8003E530: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    __resetPerfChanState(rdram, ctx);
        goto after_0;
    // 0x8003E530: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_0:
    // 0x8003E534: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x8003E538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E53C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x8003E540: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003E544: bnel        $at, $zero, L_8003E520
    if (ctx->r1 != 0) {
        // 0x8003E548: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_8003E520;
    }
    goto skip_0;
    // 0x8003E548: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_0:
L_8003E54C:
    // 0x8003E54C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E554: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E558: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003E55C: jr          $ra
    // 0x8003E560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003E560: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002629C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800262A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800262A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800262A8:
    // 0x800262A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800262AC: jal         0x800260E0
    // 0x800262B0: nop

    func_800260E0(rdram, ctx);
        goto after_0;
    // 0x800262B0: nop

    after_0:
    // 0x800262B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800262B8: nop

    // 0x800262BC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800262C0: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x800262C4: bne         $at, $zero, L_800262A8
    if (ctx->r1 != 0) {
        // 0x800262C8: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_800262A8;
    }
    // 0x800262C8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800262CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800262D0:
    // 0x800262D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800262D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800262D8: lw          $t8, 0x796C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X796C);
    // 0x800262DC: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x800262E0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800262E4: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x800262E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800262EC: bne         $t2, $at, L_800262FC
    if (ctx->r10 != ctx->r1) {
        // 0x800262F0: nop
    
            goto L_800262FC;
    }
    // 0x800262F0: nop

    // 0x800262F4: b           L_80026530
    // 0x800262F8: nop

        goto L_80026530;
    // 0x800262F8: nop

L_800262FC:
    // 0x800262FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80026300: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80026304: lw          $t3, 0x796C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X796C);
    // 0x80026308: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8002630C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80026310: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80026314: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x80026318: beq         $t7, $at, L_80026518
    if (ctx->r15 == ctx->r1) {
        // 0x8002631C: nop
    
            goto L_80026518;
    }
    // 0x8002631C: nop

    // 0x80026320: lh          $t9, 0x4($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X4);
    // 0x80026324: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x80026328: beq         $t9, $at, L_80026518
    if (ctx->r25 == ctx->r1) {
        // 0x8002632C: nop
    
            goto L_80026518;
    }
    // 0x8002632C: nop

    // 0x80026330: lh          $t8, 0x6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X6);
    // 0x80026334: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x80026338: beq         $t8, $at, L_80026518
    if (ctx->r24 == ctx->r1) {
        // 0x8002633C: nop
    
            goto L_80026518;
    }
    // 0x8002633C: nop

    // 0x80026340: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80026344: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80026348: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002634C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80026350: lw          $t1, 0x796C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X796C);
    // 0x80026354: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x80026358: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x8002635C: lh          $t5, 0x0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X0);
    // 0x80026360: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x80026364: bne         $t5, $at, L_800263A8
    if (ctx->r13 != ctx->r1) {
        // 0x80026368: nop
    
            goto L_800263A8;
    }
    // 0x80026368: nop

    // 0x8002636C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80026370: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80026374: lw          $t7, 0x796C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X796C);
    // 0x80026378: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8002637C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80026380: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80026384: lh          $a1, 0xA($t8)
    ctx->r5 = MEM_H(ctx->r24, 0XA);
    // 0x80026388: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8002638C: jal         0x80025460
    // 0x80026390: nop

    func_80025460(rdram, ctx);
        goto after_1;
    // 0x80026390: nop

    after_1:
    // 0x80026394: beq         $v0, $zero, L_800263A0
    if (ctx->r2 == 0) {
        // 0x80026398: nop
    
            goto L_800263A0;
    }
    // 0x80026398: nop

    // 0x8002639C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800263A0:
    // 0x800263A0: b           L_800264FC
    // 0x800263A4: nop

        goto L_800264FC;
    // 0x800263A4: nop

L_800263A8:
    // 0x800263A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800263AC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800263B0: lw          $t0, 0x796C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X796C);
    // 0x800263B4: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x800263B8: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800263BC: lh          $t3, 0x0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X0);
    // 0x800263C0: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x800263C4: bne         $t3, $at, L_8002641C
    if (ctx->r11 != ctx->r1) {
        // 0x800263C8: nop
    
            goto L_8002641C;
    }
    // 0x800263C8: nop

    // 0x800263CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800263D0: lb          $t5, 0x7630($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7630);
    // 0x800263D4: nop

    // 0x800263D8: beq         $t5, $zero, L_80026410
    if (ctx->r13 == 0) {
        // 0x800263DC: nop
    
            goto L_80026410;
    }
    // 0x800263DC: nop

    // 0x800263E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800263E4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800263E8: lw          $t9, 0x796C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X796C);
    // 0x800263EC: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x800263F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800263F4: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800263F8: lh          $a2, 0xA($t8)
    ctx->r6 = MEM_H(ctx->r24, 0XA);
    // 0x800263FC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80026400: jal         0x800256E0
    // 0x80026404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800256E0(rdram, ctx);
        goto after_2;
    // 0x80026404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80026408: beq         $v0, $zero, L_80026414
    if (ctx->r2 == 0) {
        // 0x8002640C: nop
    
            goto L_80026414;
    }
    // 0x8002640C: nop

L_80026410:
    // 0x80026410: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80026414:
    // 0x80026414: b           L_800264FC
    // 0x80026418: nop

        goto L_800264FC;
    // 0x80026418: nop

L_8002641C:
    // 0x8002641C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80026420: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80026424: lw          $t2, 0x796C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X796C);
    // 0x80026428: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8002642C: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x80026430: lh          $t3, 0x0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X0);
    // 0x80026434: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x80026438: bne         $t3, $at, L_80026490
    if (ctx->r11 != ctx->r1) {
        // 0x8002643C: nop
    
            goto L_80026490;
    }
    // 0x8002643C: nop

    // 0x80026440: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80026444: lb          $t5, 0x7630($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7630);
    // 0x80026448: nop

    // 0x8002644C: beq         $t5, $zero, L_80026484
    if (ctx->r13 == 0) {
        // 0x80026450: nop
    
            goto L_80026484;
    }
    // 0x80026450: nop

    // 0x80026454: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80026458: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002645C: lw          $t7, 0x796C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X796C);
    // 0x80026460: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80026464: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80026468: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8002646C: lh          $a2, 0xA($t8)
    ctx->r6 = MEM_H(ctx->r24, 0XA);
    // 0x80026470: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80026474: jal         0x800256E0
    // 0x80026478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800256E0(rdram, ctx);
        goto after_3;
    // 0x80026478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8002647C: beq         $v0, $zero, L_80026488
    if (ctx->r2 == 0) {
        // 0x80026480: nop
    
            goto L_80026488;
    }
    // 0x80026480: nop

L_80026484:
    // 0x80026484: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80026488:
    // 0x80026488: b           L_800264FC
    // 0x8002648C: nop

        goto L_800264FC;
    // 0x8002648C: nop

L_80026490:
    // 0x80026490: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80026494: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80026498: lw          $t0, 0x796C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X796C);
    // 0x8002649C: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x800264A0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800264A4: lh          $t3, 0x0($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X0);
    // 0x800264A8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x800264AC: bne         $t3, $at, L_800264FC
    if (ctx->r11 != ctx->r1) {
        // 0x800264B0: nop
    
            goto L_800264FC;
    }
    // 0x800264B0: nop

    // 0x800264B4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800264B8: lb          $t5, 0x7630($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7630);
    // 0x800264BC: nop

    // 0x800264C0: beq         $t5, $zero, L_800264F8
    if (ctx->r13 == 0) {
        // 0x800264C4: nop
    
            goto L_800264F8;
    }
    // 0x800264C4: nop

    // 0x800264C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800264CC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800264D0: lw          $t9, 0x796C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X796C);
    // 0x800264D4: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x800264D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800264DC: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800264E0: lh          $a2, 0xA($t8)
    ctx->r6 = MEM_H(ctx->r24, 0XA);
    // 0x800264E4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800264E8: jal         0x800256E0
    // 0x800264EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800256E0(rdram, ctx);
        goto after_4;
    // 0x800264EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x800264F0: beq         $v0, $zero, L_800264FC
    if (ctx->r2 == 0) {
        // 0x800264F4: nop
    
            goto L_800264FC;
    }
    // 0x800264F4: nop

L_800264F8:
    // 0x800264F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800264FC:
    // 0x800264FC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80026500: nop

    // 0x80026504: beq         $t2, $zero, L_80026518
    if (ctx->r10 == 0) {
        // 0x80026508: nop
    
            goto L_80026518;
    }
    // 0x80026508: nop

    // 0x8002650C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80026510: jal         0x800260FC
    // 0x80026514: nop

    func_800260FC(rdram, ctx);
        goto after_5;
    // 0x80026514: nop

    after_5:
L_80026518:
    // 0x80026518: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002651C: nop

    // 0x80026520: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80026524: slti        $at, $t1, 0x80
    ctx->r1 = SIGNED(ctx->r9) < 0X80 ? 1 : 0;
    // 0x80026528: bne         $at, $zero, L_800262D0
    if (ctx->r1 != 0) {
        // 0x8002652C: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_800262D0;
    }
    // 0x8002652C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80026530:
    // 0x80026530: b           L_80026538
    // 0x80026534: nop

        goto L_80026538;
    // 0x80026534: nop

L_80026538:
    // 0x80026538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002653C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80026540: jr          $ra
    // 0x80026544: nop

    return;
    // 0x80026544: nop

;}
RECOMP_FUNC void func_800069D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800069D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800069D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800069D8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800069DC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800069E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800069E4: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x800069E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800069EC: nop

    // 0x800069F0: sh          $t6, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r14;
    // 0x800069F4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800069F8: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x800069FC: sh          $t8, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r24;
    // 0x80006A00: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A04: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x80006A08: sb          $t0, 0x12($t1)
    MEM_B(0X12, ctx->r9) = ctx->r8;
    // 0x80006A0C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A10: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80006A14: sh          $t2, 0xE($t3)
    MEM_H(0XE, ctx->r11) = ctx->r10;
    // 0x80006A18: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A1C: nop

    // 0x80006A20: sw          $zero, 0x8($t4)
    MEM_W(0X8, ctx->r12) = 0;
    // 0x80006A24: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A28: nop

    // 0x80006A2C: sb          $zero, 0x15($t5)
    MEM_B(0X15, ctx->r13) = 0;
    // 0x80006A30: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A34: nop

    // 0x80006A38: sb          $zero, 0x16($t6)
    MEM_B(0X16, ctx->r14) = 0;
    // 0x80006A3C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80006A40: nop

    // 0x80006A44: sb          $zero, 0x14($t7)
    MEM_B(0X14, ctx->r15) = 0;
    // 0x80006A48: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006A4C: lw          $t8, 0x2D58($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D58);
    // 0x80006A50: addiu       $at, $zero, 0x5431
    ctx->r1 = ADD32(0, 0X5431);
    // 0x80006A54: lh          $s0, 0x0($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X0);
    // 0x80006A58: nop

    // 0x80006A5C: beq         $s0, $at, L_80006A84
    if (ctx->r16 == ctx->r1) {
        // 0x80006A60: nop
    
            goto L_80006A84;
    }
    // 0x80006A60: nop

    // 0x80006A64: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80006A68: beq         $s0, $at, L_80006B3C
    if (ctx->r16 == ctx->r1) {
        // 0x80006A6C: nop
    
            goto L_80006B3C;
    }
    // 0x80006A6C: nop

    // 0x80006A70: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x80006A74: beq         $s0, $at, L_80006B3C
    if (ctx->r16 == ctx->r1) {
        // 0x80006A78: nop
    
            goto L_80006B3C;
    }
    // 0x80006A78: nop

    // 0x80006A7C: b           L_80006D8C
    // 0x80006A80: nop

        goto L_80006D8C;
    // 0x80006A80: nop

L_80006A84:
    // 0x80006A84: lh          $t0, 0x3A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3A);
    // 0x80006A88: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80006A8C: lw          $t9, 0x2D58($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D58);
    // 0x80006A90: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80006A94: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80006A98: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x80006A9C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80006AA0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80006AA4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80006AA8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006AAC: lw          $a0, 0x2D50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D50);
    // 0x80006AB0: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80006AB4: lbu         $a2, 0x1($t4)
    ctx->r6 = MEM_BU(ctx->r12, 0X1);
    // 0x80006AB8: lbu         $a3, 0x2($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X2);
    // 0x80006ABC: jal         0x80006EE8
    // 0x80006AC0: nop

    func_80006EE8(rdram, ctx);
        goto after_0;
    // 0x80006AC0: nop

    after_0:
    // 0x80006AC4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80006AC8: nop

    // 0x80006ACC: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80006AD0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80006AD4: nop

    // 0x80006AD8: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x80006ADC: nop

    // 0x80006AE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80006AE4: bgez        $t7, L_80006AFC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80006AE8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80006AFC;
    }
    // 0x80006AE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80006AEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80006AF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80006AF4: nop

    // 0x80006AF8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80006AFC:
    // 0x80006AFC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006B00: lw          $t8, -0x5D28($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5D28);
    // 0x80006B04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80006B08: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80006B0C: nop

    // 0x80006B10: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80006B14: nop

    // 0x80006B18: div.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80006B1C: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x80006B20: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80006B24: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80006B28: lbu         $t1, 0x3($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X3);
    // 0x80006B2C: nop

    // 0x80006B30: sb          $t1, 0x13($t2)
    MEM_B(0X13, ctx->r10) = ctx->r9;
    // 0x80006B34: b           L_80006DD0
    // 0x80006B38: nop

        goto L_80006DD0;
    // 0x80006B38: nop

L_80006B3C:
    // 0x80006B3C: lh          $t4, 0x3A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3A);
    // 0x80006B40: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80006B44: lw          $t3, 0x2D58($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D58);
    // 0x80006B48: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80006B4C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80006B50: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80006B54: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80006B58: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80006B5C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80006B60: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006B64: lhu         $t9, 0x4($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X4);
    // 0x80006B68: lw          $t8, 0x2D50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D50);
    // 0x80006B6C: andi        $t1, $t9, 0x1FFF
    ctx->r9 = ctx->r25 & 0X1FFF;
    // 0x80006B70: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80006B74: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80006B78: addu        $t4, $t8, $t2
    ctx->r12 = ADD32(ctx->r24, ctx->r10);
    // 0x80006B7C: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x80006B80: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80006B84: nop

    // 0x80006B88: lhu         $t6, 0x4($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X4);
    // 0x80006B8C: nop

    // 0x80006B90: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80006B94: beq         $t7, $zero, L_80006BB4
    if (ctx->r15 == 0) {
        // 0x80006B98: nop
    
            goto L_80006BB4;
    }
    // 0x80006B98: nop

    // 0x80006B9C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80006BA0: nop

    // 0x80006BA4: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x80006BA8: nop

    // 0x80006BAC: ori         $t1, $t9, 0x10
    ctx->r9 = ctx->r25 | 0X10;
    // 0x80006BB0: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
L_80006BB4:
    // 0x80006BB4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80006BB8: nop

    // 0x80006BBC: lhu         $t2, 0x4($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X4);
    // 0x80006BC0: nop

    // 0x80006BC4: andi        $t4, $t2, 0x4000
    ctx->r12 = ctx->r10 & 0X4000;
    // 0x80006BC8: beq         $t4, $zero, L_80006BE8
    if (ctx->r12 == 0) {
        // 0x80006BCC: nop
    
            goto L_80006BE8;
    }
    // 0x80006BCC: nop

    // 0x80006BD0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80006BD4: nop

    // 0x80006BD8: lw          $t5, 0x8($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X8);
    // 0x80006BDC: nop

    // 0x80006BE0: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x80006BE4: sw          $t6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r14;
L_80006BE8:
    // 0x80006BE8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80006BEC: nop

    // 0x80006BF0: lhu         $t9, 0x4($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X4);
    // 0x80006BF4: nop

    // 0x80006BF8: andi        $t1, $t9, 0x2000
    ctx->r9 = ctx->r25 & 0X2000;
    // 0x80006BFC: beq         $t1, $zero, L_80006C1C
    if (ctx->r9 == 0) {
        // 0x80006C00: nop
    
            goto L_80006C1C;
    }
    // 0x80006C00: nop

    // 0x80006C04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80006C08: nop

    // 0x80006C0C: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x80006C10: nop

    // 0x80006C14: ori         $t2, $t8, 0x80
    ctx->r10 = ctx->r24 | 0X80;
    // 0x80006C18: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
L_80006C1C:
    // 0x80006C1C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80006C20: nop

    // 0x80006C24: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x80006C28: nop

    // 0x80006C2C: bltz        $t5, L_80006C60
    if (SIGNED(ctx->r13) < 0) {
        // 0x80006C30: nop
    
            goto L_80006C60;
    }
    // 0x80006C30: nop

    // 0x80006C34: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80006C38: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80006C3C: lb          $t3, 0x1($t6)
    ctx->r11 = MEM_B(ctx->r14, 0X1);
    // 0x80006C40: nop

    // 0x80006C44: andi        $t7, $t3, 0x7F
    ctx->r15 = ctx->r11 & 0X7F;
    // 0x80006C48: sh          $t7, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r15;
    // 0x80006C4C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80006C50: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80006C54: lb          $t8, 0x0($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X0);
    // 0x80006C58: b           L_80006C94
    // 0x80006C5C: sb          $t8, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r24;
        goto L_80006C94;
    // 0x80006C5C: sb          $t8, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r24;
L_80006C60:
    // 0x80006C60: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80006C64: lw          $t0, 0x2D80($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D80);
    // 0x80006C68: nop

    // 0x80006C6C: beq         $t0, $zero, L_80006C94
    if (ctx->r8 == 0) {
        // 0x80006C70: nop
    
            goto L_80006C94;
    }
    // 0x80006C70: nop

    // 0x80006C74: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80006C78: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80006C7C: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x80006C80: lbu         $t7, 0x1($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X1);
    // 0x80006C84: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x80006C88: sll         $t3, $t6, 8
    ctx->r11 = S32(ctx->r14 << 8);
    // 0x80006C8C: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x80006C90: sh          $t9, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r25;
L_80006C94:
    // 0x80006C94: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80006C98: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80006C9C: lb          $t2, 0x2($t8)
    ctx->r10 = MEM_B(ctx->r24, 0X2);
    // 0x80006CA0: nop

    // 0x80006CA4: sb          $t2, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r10;
    // 0x80006CA8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80006CAC: nop

    // 0x80006CB0: lhu         $t6, 0x6($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X6);
    // 0x80006CB4: nop

    // 0x80006CB8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80006CBC: bgez        $t6, L_80006CD4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80006CC0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80006CD4;
    }
    // 0x80006CC0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80006CC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80006CC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80006CCC: nop

    // 0x80006CD0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80006CD4:
    // 0x80006CD4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80006CD8: lw          $t4, -0x5D28($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5D28);
    // 0x80006CDC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80006CE0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80006CE4: nop

    // 0x80006CE8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80006CEC: nop

    // 0x80006CF0: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80006CF4: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x80006CF8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80006CFC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80006D00: lbu         $t9, 0x3($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X3);
    // 0x80006D04: nop

    // 0x80006D08: sb          $t9, 0x13($t1)
    MEM_B(0X13, ctx->r9) = ctx->r25;
    // 0x80006D0C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006D10: lw          $t8, 0x2D58($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D58);
    // 0x80006D14: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80006D18: lh          $t2, 0x0($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X0);
    // 0x80006D1C: nop

    // 0x80006D20: bne         $t2, $at, L_80006D30
    if (ctx->r10 != ctx->r1) {
        // 0x80006D24: nop
    
            goto L_80006D30;
    }
    // 0x80006D24: nop

    // 0x80006D28: b           L_80006DD0
    // 0x80006D2C: nop

        goto L_80006DD0;
    // 0x80006D2C: nop

L_80006D30:
    // 0x80006D30: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80006D34: lw          $t0, 0x2D60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D60);
    // 0x80006D38: nop

    // 0x80006D3C: beq         $t0, $zero, L_80006D84
    if (ctx->r8 == 0) {
        // 0x80006D40: nop
    
            goto L_80006D84;
    }
    // 0x80006D40: nop

    // 0x80006D44: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x80006D48: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80006D4C: lw          $t5, 0x2D60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D60);
    // 0x80006D50: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x80006D54: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80006D58: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80006D5C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80006D60: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80006D64: lb          $t9, 0x0($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X0);
    // 0x80006D68: nop

    // 0x80006D6C: sb          $t9, 0x15($t1)
    MEM_B(0X15, ctx->r9) = ctx->r25;
    // 0x80006D70: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80006D74: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80006D78: lb          $t2, 0x1($t8)
    ctx->r10 = MEM_B(ctx->r24, 0X1);
    // 0x80006D7C: nop

    // 0x80006D80: sb          $t2, 0x16($t0)
    MEM_B(0X16, ctx->r8) = ctx->r10;
L_80006D84:
    // 0x80006D84: b           L_80006DD0
    // 0x80006D88: nop

        goto L_80006DD0;
    // 0x80006D88: nop

L_80006D8C:
    // 0x80006D8C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80006D90: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006D94: lw          $a0, 0x2D50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D50);
    // 0x80006D98: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x80006D9C: jal         0x80006FD4
    // 0x80006DA0: nop

    func_80006FD4(rdram, ctx);
        goto after_1;
    // 0x80006DA0: nop

    after_1:
    // 0x80006DA4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80006DA8: nop

    // 0x80006DAC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80006DB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80006DB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80006DB8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80006DBC: nop

    // 0x80006DC0: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x80006DC4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80006DC8: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80006DCC: sb          $t4, 0x13($t3)
    MEM_B(0X13, ctx->r11) = ctx->r12;
L_80006DD0:
    // 0x80006DD0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80006DD4: b           L_80006DE4
    // 0x80006DD8: nop

        goto L_80006DE4;
    // 0x80006DD8: nop

    // 0x80006DDC: b           L_80006DE4
    // 0x80006DE0: nop

        goto L_80006DE4;
    // 0x80006DE0: nop

L_80006DE4:
    // 0x80006DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80006DE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80006DEC: jr          $ra
    // 0x80006DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80006DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800212DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800212DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800212E0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800212E4: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800212E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800212EC: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800212F0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800212F4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800212F8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800212FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021300: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80021304: nop

    // 0x80021308: beq         $t9, $zero, L_80021400
    if (ctx->r25 == 0) {
        // 0x8002130C: nop
    
            goto L_80021400;
    }
    // 0x8002130C: nop

    // 0x80021310: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x80021314: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x80021318: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002131C: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x80021320: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021324: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x80021328: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x8002132C: nop

    // 0x80021330: bgtz        $t2, L_80021360
    if (SIGNED(ctx->r10) > 0) {
        // 0x80021334: nop
    
            goto L_80021360;
    }
    // 0x80021334: nop

    // 0x80021338: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x8002133C: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x80021340: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80021344: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x80021348: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002134C: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80021350: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80021354: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021358: bne         $t5, $at, L_80021400
    if (ctx->r13 != ctx->r1) {
        // 0x8002135C: nop
    
            goto L_80021400;
    }
    // 0x8002135C: nop

L_80021360:
    // 0x80021360: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80021364: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80021368: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002136C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80021370: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80021374: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80021378: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8002137C: lh          $t8, 0x4254($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4254);
    // 0x80021380: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021384: bne         $t8, $at, L_80021400
    if (ctx->r24 != ctx->r1) {
        // 0x80021388: nop
    
            goto L_80021400;
    }
    // 0x80021388: nop

    // 0x8002138C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80021390:
    // 0x80021390: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80021394: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80021398: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8002139C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800213A0: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x800213A4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800213A8: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800213AC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800213B0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800213B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800213B8: lh          $t3, 0x425E($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X425E);
    // 0x800213BC: nop

    // 0x800213C0: bne         $t3, $a1, L_800213D0
    if (ctx->r11 != ctx->r5) {
        // 0x800213C4: nop
    
            goto L_800213D0;
    }
    // 0x800213C4: nop

    // 0x800213C8: b           L_800213E8
    // 0x800213CC: nop

        goto L_800213E8;
    // 0x800213CC: nop

L_800213D0:
    // 0x800213D0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800213D4: nop

    // 0x800213D8: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x800213DC: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x800213E0: bne         $at, $zero, L_80021390
    if (ctx->r1 != 0) {
        // 0x800213E4: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_80021390;
    }
    // 0x800213E4: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_800213E8:
    // 0x800213E8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800213EC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800213F0: bne         $t5, $at, L_80021400
    if (ctx->r13 != ctx->r1) {
        // 0x800213F4: nop
    
            goto L_80021400;
    }
    // 0x800213F4: nop

    // 0x800213F8: b           L_80021410
    // 0x800213FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80021410;
    // 0x800213FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80021400:
    // 0x80021400: b           L_80021410
    // 0x80021404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80021410;
    // 0x80021404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80021408: b           L_80021410
    // 0x8002140C: nop

        goto L_80021410;
    // 0x8002140C: nop

L_80021410:
    // 0x80021410: jr          $ra
    // 0x80021414: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80021414: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Debug_ResetMode_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EEB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EEC0: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002EEC4: lh          $a2, 0x7692($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7692);
    // 0x8002EEC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002EECC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002EED0: addiu       $a1, $a1, -0x4080
    ctx->r5 = ADD32(ctx->r5, -0X4080);
    // 0x8002EED4: jal         0x80036BE4
    // 0x8002EED8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8002EED8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x8002EEDC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8002EEE0: jal         0x8005F9EC
    // 0x8002EEE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x8002EEE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8002EEE8: b           L_8002EEF0
    // 0x8002EEEC: nop

        goto L_8002EEF0;
    // 0x8002EEEC: nop

L_8002EEF0:
    // 0x8002EEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EEF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EEF8: jr          $ra
    // 0x8002EEFC: nop

    return;
    // 0x8002EEFC: nop

;}
RECOMP_FUNC void hputc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B6C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80014B70: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80014B74: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80014B78: nop

    // 0x80014B7C: sb          $a0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r4;
    // 0x80014B80: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80014B84: nop

    // 0x80014B88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80014B8C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80014B90: jr          $ra
    // 0x80014B94: nop

    return;
    // 0x80014B94: nop

    // 0x80014B98: jr          $ra
    // 0x80014B9C: nop

    return;
    // 0x80014B9C: nop

;}
RECOMP_FUNC void func_80019B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019B7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019B84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80019B88: lb          $t6, -0x1ECC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1ECC);
    // 0x80019B8C: nop

    // 0x80019B90: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    // 0x80019B94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019B98: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80019B9C: jal         0x8001994C
    // 0x80019BA0: nop

    func_8001994C(rdram, ctx);
        goto after_0;
    // 0x80019BA0: nop

    after_0:
    // 0x80019BA4: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x80019BA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019BAC: sb          $t7, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = ctx->r15;
    // 0x80019BB0: b           L_80019BB8
    // 0x80019BB4: nop

        goto L_80019BB8;
    // 0x80019BB4: nop

L_80019BB8:
    // 0x80019BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019BBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019BC0: jr          $ra
    // 0x80019BC4: nop

    return;
    // 0x80019BC4: nop

;}
RECOMP_FUNC void alSndpDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035624: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80035628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003562C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80035630: jal         0x8003F040
    // 0x80035634: lw          $a0, -0x4AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AF0);
    alSynRemovePlayer(rdram, ctx);
        goto after_0;
    // 0x80035634: lw          $a0, -0x4AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AF0);
    after_0:
    // 0x80035638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003563C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035640: jr          $ra
    // 0x80035644: nop

    return;
    // 0x80035644: nop

;}
RECOMP_FUNC void func_800105D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800105D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800105DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800105E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800105E4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800105E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800105EC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800105F0: nop

    // 0x800105F4: bne         $t7, $at, L_80010610
    if (ctx->r15 != ctx->r1) {
        // 0x800105F8: nop
    
            goto L_80010610;
    }
    // 0x800105F8: nop

    // 0x800105FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80010600: nop

    // 0x80010604: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    // 0x80010608: jal         0x80010350
    // 0x8001060C: nop

    func_80010350(rdram, ctx);
        goto after_0;
    // 0x8001060C: nop

    after_0:
L_80010610:
    // 0x80010610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80010614: jal         0x800309D0
    // 0x80010618: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x80010618: nop

    after_1:
    // 0x8001061C: b           L_80010624
    // 0x80010620: nop

        goto L_80010624;
    // 0x80010620: nop

L_80010624:
    // 0x80010624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001062C: jr          $ra
    // 0x80010630: nop

    return;
    // 0x80010630: nop

;}
RECOMP_FUNC void func_800225D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800225D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800225DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800225E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800225E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800225E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800225EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800225F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800225F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800225F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800225FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80022600: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80022604: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80022608: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x8002260C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022610: beq         $t8, $at, L_800226E0
    if (ctx->r24 == ctx->r1) {
        // 0x80022614: nop
    
            goto L_800226E0;
    }
    // 0x80022614: nop

    // 0x80022618: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8002261C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80022620: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80022624: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80022628: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002262C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80022630: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80022634: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80022638: lbu         $t1, 0x4253($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4253);
    // 0x8002263C: nop

    // 0x80022640: bne         $t1, $zero, L_800226A0
    if (ctx->r9 != 0) {
        // 0x80022644: nop
    
            goto L_800226A0;
    }
    // 0x80022644: nop

    // 0x80022648: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8002264C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80022650: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80022654: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80022658: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002265C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80022660: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80022664: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80022668: lh          $t4, 0x4236($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4236);
    // 0x8002266C: nop

    // 0x80022670: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80022674: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80022678: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002267C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80022680: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80022684: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80022688: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002268C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80022690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80022694: lh          $t7, 0x4236($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4236);
    // 0x80022698: b           L_800226D8
    // 0x8002269C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_800226D8;
    // 0x8002269C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_800226A0:
    // 0x800226A0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800226A4: nop

    // 0x800226A8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800226AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800226B0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800226B4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800226B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800226BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800226C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800226C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800226C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800226CC: lh          $t1, 0x4236($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4236);
    // 0x800226D0: nop

    // 0x800226D4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_800226D8:
    // 0x800226D8: b           L_800226F8
    // 0x800226DC: nop

        goto L_800226F8;
    // 0x800226DC: nop

L_800226E0:
    // 0x800226E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800226E4: nop

    // 0x800226E8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x800226EC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800226F0: nop

    // 0x800226F4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_800226F8:
    // 0x800226F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800226FC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80022700: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80022704: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80022708: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002270C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80022710: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80022714: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80022718: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8002271C: lh          $t8, 0x100($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X100);
    // 0x80022720: nop

    // 0x80022724: beq         $t8, $zero, L_80022B34
    if (ctx->r24 == 0) {
        // 0x80022728: nop
    
            goto L_80022B34;
    }
    // 0x80022728: nop

    // 0x8002272C: lh          $t9, 0x108($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X108);
    // 0x80022730: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022734: beq         $t9, $at, L_80022B34
    if (ctx->r25 == ctx->r1) {
        // 0x80022738: nop
    
            goto L_80022B34;
    }
    // 0x80022738: nop

    // 0x8002273C: lh          $t1, 0xE4($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XE4);
    // 0x80022740: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80022744: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80022748: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8002274C: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x80022750: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80022754: lbu         $t3, 0x4D93($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4D93);
    // 0x80022758: lbu         $t0, 0x10B($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X10B);
    // 0x8002275C: nop

    // 0x80022760: slt         $at, $t3, $t0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80022764: bne         $at, $zero, L_80022B34
    if (ctx->r1 != 0) {
        // 0x80022768: nop
    
            goto L_80022B34;
    }
    // 0x80022768: nop

    // 0x8002276C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80022770: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80022774: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80022778: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002277C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80022780: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80022784: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80022788: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8002278C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80022790: lh          $t6, 0x4234($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4234);
    // 0x80022794: nop

    // 0x80022798: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8002279C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800227A0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800227A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800227A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800227AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800227B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800227B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800227B8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800227BC: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x800227C0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800227C4: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x800227C8: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x800227CC: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x800227D0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800227D4: lbu         $t2, 0x4D95($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X4D95);
    // 0x800227D8: nop

    // 0x800227DC: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    // 0x800227E0: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x800227E4: nop

    // 0x800227E8: andi        $t3, $t0, 0x8
    ctx->r11 = ctx->r8 & 0X8;
    // 0x800227EC: beq         $t3, $zero, L_80022844
    if (ctx->r11 == 0) {
        // 0x800227F0: nop
    
            goto L_80022844;
    }
    // 0x800227F0: nop

    // 0x800227F4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800227F8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800227FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80022800: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80022804: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80022808: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002280C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80022810: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80022814: lh          $t6, 0x4234($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4234);
    // 0x80022818: addiu       $at, $zero, 0x141
    ctx->r1 = ADD32(0, 0X141);
    // 0x8002281C: bne         $t6, $at, L_8002283C
    if (ctx->r14 != ctx->r1) {
        // 0x80022820: nop
    
            goto L_8002283C;
    }
    // 0x80022820: nop

    // 0x80022824: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80022828: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8002282C: beq         $t8, $at, L_8002283C
    if (ctx->r24 == ctx->r1) {
        // 0x80022830: nop
    
            goto L_8002283C;
    }
    // 0x80022830: nop

    // 0x80022834: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80022838: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8002283C:
    // 0x8002283C: b           L_800228E0
    // 0x80022840: nop

        goto L_800228E0;
    // 0x80022840: nop

L_80022844:
    // 0x80022844: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80022848: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8002284C: beq         $t7, $at, L_80022860
    if (ctx->r15 == ctx->r1) {
        // 0x80022850: nop
    
            goto L_80022860;
    }
    // 0x80022850: nop

    // 0x80022854: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80022858: bne         $t7, $at, L_80022884
    if (ctx->r15 != ctx->r1) {
        // 0x8002285C: nop
    
            goto L_80022884;
    }
    // 0x8002285C: nop

L_80022860:
    // 0x80022860: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x80022864: nop

    // 0x80022868: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8002286C: beq         $t2, $zero, L_8002287C
    if (ctx->r10 == 0) {
        // 0x80022870: nop
    
            goto L_8002287C;
    }
    // 0x80022870: nop

    // 0x80022874: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80022878: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8002287C:
    // 0x8002287C: b           L_800228E0
    // 0x80022880: nop

        goto L_800228E0;
    // 0x80022880: nop

L_80022884:
    // 0x80022884: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80022888: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8002288C: beq         $t3, $at, L_800228A0
    if (ctx->r11 == ctx->r1) {
        // 0x80022890: nop
    
            goto L_800228A0;
    }
    // 0x80022890: nop

    // 0x80022894: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80022898: bne         $t3, $at, L_800228C4
    if (ctx->r11 != ctx->r1) {
        // 0x8002289C: nop
    
            goto L_800228C4;
    }
    // 0x8002289C: nop

L_800228A0:
    // 0x800228A0: lbu         $t4, 0x1F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1F);
    // 0x800228A4: nop

    // 0x800228A8: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x800228AC: beq         $t5, $zero, L_800228BC
    if (ctx->r13 == 0) {
        // 0x800228B0: nop
    
            goto L_800228BC;
    }
    // 0x800228B0: nop

    // 0x800228B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800228B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_800228BC:
    // 0x800228BC: b           L_800228E0
    // 0x800228C0: nop

        goto L_800228E0;
    // 0x800228C0: nop

L_800228C4:
    // 0x800228C4: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x800228C8: nop

    // 0x800228CC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800228D0: beq         $t9, $zero, L_800228E0
    if (ctx->r25 == 0) {
        // 0x800228D4: nop
    
            goto L_800228E0;
    }
    // 0x800228D4: nop

    // 0x800228D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800228DC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_800228E0:
    // 0x800228E0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800228E4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x800228E8: bne         $t1, $at, L_8002292C
    if (ctx->r9 != ctx->r1) {
        // 0x800228EC: nop
    
            goto L_8002292C;
    }
    // 0x800228EC: nop

    // 0x800228F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800228F4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800228F8: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x800228FC: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80022900: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80022904: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80022908: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8002290C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80022910: lh          $t3, 0x4234($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4234);
    // 0x80022914: addiu       $at, $zero, 0x20A
    ctx->r1 = ADD32(0, 0X20A);
    // 0x80022918: bne         $t3, $at, L_80022924
    if (ctx->r11 != ctx->r1) {
        // 0x8002291C: nop
    
            goto L_80022924;
    }
    // 0x8002291C: nop

    // 0x80022920: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80022924:
    // 0x80022924: b           L_80022970
    // 0x80022928: nop

        goto L_80022970;
    // 0x80022928: nop

L_8002292C:
    // 0x8002292C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80022930: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80022934: bne         $t4, $at, L_80022970
    if (ctx->r12 != ctx->r1) {
        // 0x80022938: nop
    
            goto L_80022970;
    }
    // 0x80022938: nop

    // 0x8002293C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80022940: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80022944: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80022948: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002294C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80022950: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80022954: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80022958: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8002295C: lh          $t8, 0x4234($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4234);
    // 0x80022960: addiu       $at, $zero, 0x1C8
    ctx->r1 = ADD32(0, 0X1C8);
    // 0x80022964: bne         $t8, $at, L_80022970
    if (ctx->r24 != ctx->r1) {
        // 0x80022968: nop
    
            goto L_80022970;
    }
    // 0x80022968: nop

    // 0x8002296C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80022970:
    // 0x80022970: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80022974: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80022978: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8002297C: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80022980: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80022984: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80022988: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002298C: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80022990: lh          $t1, 0x4250($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4250);
    // 0x80022994: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022998: beq         $t1, $at, L_800229E4
    if (ctx->r9 == ctx->r1) {
        // 0x8002299C: nop
    
            goto L_800229E4;
    }
    // 0x8002299C: nop

    // 0x800229A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800229A4: nop

    // 0x800229A8: beq         $t2, $zero, L_800229E4
    if (ctx->r10 == 0) {
        // 0x800229AC: nop
    
            goto L_800229E4;
    }
    // 0x800229AC: nop

    // 0x800229B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800229B4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800229B8: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800229BC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800229C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800229C4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800229C8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800229CC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800229D0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800229D4: lh          $t6, 0x100($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X100);
    // 0x800229D8: nop

    // 0x800229DC: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x800229E0: sh          $t8, 0x100($t5)
    MEM_H(0X100, ctx->r13) = ctx->r24;
L_800229E4:
    // 0x800229E4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800229E8: nop

    // 0x800229EC: beq         $t9, $zero, L_80022B34
    if (ctx->r25 == 0) {
        // 0x800229F0: nop
    
            goto L_80022B34;
    }
    // 0x800229F0: nop

    // 0x800229F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800229F8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800229FC: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80022A00: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80022A04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80022A08: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80022A0C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80022A10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80022A14: lh          $t2, 0x4250($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4250);
    // 0x80022A18: nop

    // 0x80022A1C: bne         $t2, $zero, L_80022AD4
    if (ctx->r10 != 0) {
        // 0x80022A20: nop
    
            goto L_80022AD4;
    }
    // 0x80022A20: nop

    // 0x80022A24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80022A28: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80022A2C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80022A30: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80022A34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80022A38: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80022A3C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80022A40: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80022A44: lh          $t4, 0x4234($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4234);
    // 0x80022A48: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80022A4C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80022A50: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x80022A54: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x80022A58: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80022A5C: lbu         $a0, 0x4D96($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4D96);
    // 0x80022A60: jal         0x8006AF18
    // 0x80022A64: nop

    Score_Update(rdram, ctx);
        goto after_0;
    // 0x80022A64: nop

    after_0:
    // 0x80022A68: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80022A6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80022A70: sw          $t8, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r24;
    // 0x80022A74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80022A78: sw          $zero, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = 0;
    // 0x80022A7C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80022A80: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80022A84: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80022A88: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80022A8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80022A90: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80022A94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80022A98: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80022A9C: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x80022AA0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80022AA4: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80022AA8: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x80022AAC: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80022AB0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80022AB4: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x80022AB8: nop

    // 0x80022ABC: jalr        $t9
    // 0x80022AC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80022AC0: nop

    after_1:
    // 0x80022AC4: b           L_80022B44
    // 0x80022AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80022B44;
    // 0x80022AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80022ACC: b           L_80022B34
    // 0x80022AD0: nop

        goto L_80022B34;
    // 0x80022AD0: nop

L_80022AD4:
    // 0x80022AD4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80022AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80022ADC: sw          $t2, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r10;
    // 0x80022AE0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80022AE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80022AE8: sw          $t0, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r8;
    // 0x80022AEC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80022AF0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80022AF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80022AF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80022AFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80022B00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80022B04: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80022B08: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80022B0C: lh          $t6, 0x4234($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4234);
    // 0x80022B10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80022B14: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80022B18: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80022B1C: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80022B20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80022B24: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x80022B28: nop

    // 0x80022B2C: jalr        $t9
    // 0x80022B30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80022B30: nop

    after_2:
L_80022B34:
    // 0x80022B34: b           L_80022B44
    // 0x80022B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80022B44;
    // 0x80022B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80022B3C: b           L_80022B44
    // 0x80022B40: nop

        goto L_80022B44;
    // 0x80022B40: nop

L_80022B44:
    // 0x80022B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80022B48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80022B4C: jr          $ra
    // 0x80022B50: nop

    return;
    // 0x80022B50: nop

;}
RECOMP_FUNC void func_80017CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017CFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017D04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80017D08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80017D0C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80017D10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80017D14: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80017D18: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80017D1C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80017D20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80017D24: lh          $t8, 0x76E8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X76E8);
    // 0x80017D28: nop

    // 0x80017D2C: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x80017D30: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80017D34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017D38: bne         $t9, $at, L_80017D48
    if (ctx->r25 != ctx->r1) {
        // 0x80017D3C: nop
    
            goto L_80017D48;
    }
    // 0x80017D3C: nop

    // 0x80017D40: b           L_80017DEC
    // 0x80017D44: nop

        goto L_80017DEC;
    // 0x80017D44: nop

L_80017D48:
    // 0x80017D48: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017D4C: jal         0x8000B4EC
    // 0x80017D50: nop

    func_8000B4EC(rdram, ctx);
        goto after_0;
    // 0x80017D50: nop

    after_0:
    // 0x80017D54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80017D58: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80017D5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80017D60: beq         $t0, $at, L_80017D70
    if (ctx->r8 == ctx->r1) {
        // 0x80017D64: nop
    
            goto L_80017D70;
    }
    // 0x80017D64: nop

    // 0x80017D68: bne         $t0, $zero, L_80017DE4
    if (ctx->r8 != 0) {
        // 0x80017D6C: nop
    
            goto L_80017DE4;
    }
    // 0x80017D6C: nop

L_80017D70:
    // 0x80017D70: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80017D74: nop

    // 0x80017D78: bne         $t1, $zero, L_80017DCC
    if (ctx->r9 != 0) {
        // 0x80017D7C: nop
    
            goto L_80017DCC;
    }
    // 0x80017D7C: nop

    // 0x80017D80: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80017D84: jal         0x8000AC1C
    // 0x80017D88: nop

    func_8000AC1C(rdram, ctx);
        goto after_1;
    // 0x80017D88: nop

    after_1:
    // 0x80017D8C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80017D90: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x80017D94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017D98: beq         $t2, $at, L_80017DB0
    if (ctx->r10 == ctx->r1) {
        // 0x80017D9C: nop
    
            goto L_80017DB0;
    }
    // 0x80017D9C: nop

    // 0x80017DA0: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017DA4: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80017DA8: jal         0x8000C6F8
    // 0x80017DAC: nop

    func_8000C6F8(rdram, ctx);
        goto after_2;
    // 0x80017DAC: nop

    after_2:
L_80017DB0:
    // 0x80017DB0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80017DB4: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80017DB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017DBC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80017DC0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80017DC4: b           L_80017DE4
    // 0x80017DC8: sh          $t3, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r11;
        goto L_80017DE4;
    // 0x80017DC8: sh          $t3, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r11;
L_80017DCC:
    // 0x80017DCC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80017DD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017DD4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80017DD8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80017DDC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80017DE0: sh          $t6, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r14;
L_80017DE4:
    // 0x80017DE4: b           L_80017DEC
    // 0x80017DE8: nop

        goto L_80017DEC;
    // 0x80017DE8: nop

L_80017DEC:
    // 0x80017DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80017DF4: jr          $ra
    // 0x80017DF8: nop

    return;
    // 0x80017DF8: nop

;}
RECOMP_FUNC void InitControllers(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001DFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001DFD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DFD4: sb          $zero, -0x1D84($at)
    MEM_B(-0X1D84, ctx->r1) = 0;
    // 0x8001DFD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001DFDC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001DFE0: addiu       $a1, $a1, 0x76CC
    ctx->r5 = ADD32(ctx->r5, 0X76CC);
    // 0x8001DFE4: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001DFE8: jal         0x800319C0
    // 0x8001DFEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8001DFEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001DFF0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001DFF4: addiu       $a1, $a1, 0x76B0
    ctx->r5 = ADD32(ctx->r5, 0X76B0);
    // 0x8001DFF8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8001DFFC: jal         0x80031E90
    // 0x8001E000: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E000: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001E004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001E008: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001E00C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8001E010: addiu       $a2, $a2, 0x7650
    ctx->r6 = ADD32(ctx->r6, 0X7650);
    // 0x8001E014: addiu       $a1, $a1, -0x1D84
    ctx->r5 = ADD32(ctx->r5, -0X1D84);
    // 0x8001E018: jal         0x800376F0
    // 0x8001E01C: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    osContInit_recomp(rdram, ctx);
        goto after_2;
    // 0x8001E01C: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    after_2:
    // 0x8001E020: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001E024: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E028: nop

    // 0x8001E02C: beq         $t6, $zero, L_8001E034
    if (ctx->r14 == 0) {
        // 0x8001E030: nop
    
            goto L_8001E034;
    }
    // 0x8001E030: nop

L_8001E034:
    // 0x8001E034: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_8001E038:
    // 0x8001E038: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E03C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E040: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001E044: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E048: sh          $zero, -0x1D00($at)
    MEM_H(-0X1D00, ctx->r1) = 0;
    // 0x8001E04C: lhu         $t9, 0x1A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E050: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E054: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001E058: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E05C: sh          $zero, -0x1CE0($at)
    MEM_H(-0X1CE0, ctx->r1) = 0;
    // 0x8001E060: lhu         $t1, 0x1A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E064: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E068: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E06C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E070: sh          $zero, -0x1CF0($at)
    MEM_H(-0X1CF0, ctx->r1) = 0;
    // 0x8001E074: lhu         $t3, 0x1A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E078: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E07C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8001E080: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001E084: sh          $zero, -0x1CD0($at)
    MEM_H(-0X1CD0, ctx->r1) = 0;
    // 0x8001E088: lhu         $t5, 0x1A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E08C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E090: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001E094: sb          $zero, -0x1CC4($at)
    MEM_B(-0X1CC4, ctx->r1) = 0;
    // 0x8001E098: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E09C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E0A0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001E0A4: sb          $zero, -0x1CBC($at)
    MEM_B(-0X1CBC, ctx->r1) = 0;
    // 0x8001E0A8: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E0AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E0B0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001E0B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E0B8: sh          $zero, -0x1CB0($at)
    MEM_H(-0X1CB0, ctx->r1) = 0;
    // 0x8001E0BC: lhu         $t9, 0x1A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E0C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E0C4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001E0C8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E0CC: sh          $zero, -0x1CA0($at)
    MEM_H(-0X1CA0, ctx->r1) = 0;
    // 0x8001E0D0: lhu         $t1, 0x1A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E0D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E0D8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E0DC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E0E0: sh          $zero, -0x1C90($at)
    MEM_H(-0X1C90, ctx->r1) = 0;
    // 0x8001E0E4: lhu         $t3, 0x1A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E0E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E0EC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8001E0F0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001E0F4: sh          $zero, -0x1D60($at)
    MEM_H(-0X1D60, ctx->r1) = 0;
    // 0x8001E0F8: lhu         $t5, 0x1A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E0FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E100: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001E104: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001E108: sh          $zero, -0x1D70($at)
    MEM_H(-0X1D70, ctx->r1) = 0;
    // 0x8001E10C: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E114: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001E118: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E11C: sh          $zero, -0x1D50($at)
    MEM_H(-0X1D50, ctx->r1) = 0;
    // 0x8001E120: lhu         $t9, 0x1A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E128: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001E12C: sb          $zero, -0x1D44($at)
    MEM_B(-0X1D44, ctx->r1) = 0;
    // 0x8001E130: lhu         $t0, 0x1A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E134: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E138: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E13C: sb          $zero, -0x1D3C($at)
    MEM_B(-0X1D3C, ctx->r1) = 0;
    // 0x8001E140: lhu         $t1, 0x1A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E148: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E14C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E150: sh          $zero, -0x1D30($at)
    MEM_H(-0X1D30, ctx->r1) = 0;
    // 0x8001E154: lhu         $t3, 0x1A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E158: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E15C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8001E160: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8001E164: sh          $zero, -0x1D20($at)
    MEM_H(-0X1D20, ctx->r1) = 0;
    // 0x8001E168: lhu         $t5, 0x1A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E16C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E170: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001E174: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001E178: sh          $zero, -0x1D10($at)
    MEM_H(-0X1D10, ctx->r1) = 0;
    // 0x8001E17C: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001E180: nop

    // 0x8001E184: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8001E188: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8001E18C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8001E190: bne         $at, $zero, L_8001E038
    if (ctx->r1 != 0) {
        // 0x8001E194: sh          $t8, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r24;
            goto L_8001E038;
    }
    // 0x8001E194: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    // 0x8001E198: jal         0x8001DEDC
    // 0x8001E19C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    UpdateActiveController(rdram, ctx);
        goto after_3;
    // 0x8001E19C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8001E1A0: jal         0x8001DC78
    // 0x8001E1A4: nop

    func_8001DC78(rdram, ctx);
        goto after_4;
    // 0x8001E1A4: nop

    after_4:
    // 0x8001E1A8: b           L_8001E1B0
    // 0x8001E1AC: nop

        goto L_8001E1B0;
    // 0x8001E1AC: nop

L_8001E1B0:
    // 0x8001E1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E1B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001E1B8: jr          $ra
    // 0x8001E1BC: nop

    return;
    // 0x8001E1BC: nop

;}
RECOMP_FUNC void func_80007890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007898: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000789C: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x800078A0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800078A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800078A8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800078AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800078B0: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x800078B4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800078B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800078BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800078C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800078C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800078C8: nop

    // 0x800078CC: lh          $t1, 0x16($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X16);
    // 0x800078D0: nop

    // 0x800078D4: bgez        $t1, L_800078E4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800078D8: nop
    
            goto L_800078E4;
    }
    // 0x800078D8: nop

    // 0x800078DC: b           L_80007BB4
    // 0x800078E0: nop

        goto L_80007BB4;
    // 0x800078E0: nop

L_800078E4:
    // 0x800078E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800078E8: nop

    // 0x800078EC: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x800078F0: nop

    // 0x800078F4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800078F8: beq         $t4, $zero, L_80007984
    if (ctx->r12 == 0) {
        // 0x800078FC: nop
    
            goto L_80007984;
    }
    // 0x800078FC: nop

    // 0x80007900: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80007904: nop

    // 0x80007908: lh          $t6, 0x18($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X18);
    // 0x8000790C: lh          $t7, 0x1A($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X1A);
    // 0x80007910: jal         0x80034920
    // 0x80007914: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    alCents2Ratio(rdram, ctx);
        goto after_0;
    // 0x80007914: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80007918: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8000791C: nop

    // 0x80007920: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80007924: nop

    // 0x80007928: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8000792C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80007930: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80007934: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007938: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000793C: lh          $a1, 0x16($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X16);
    // 0x80007940: jal         0x80035310
    // 0x80007944: nop

    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x80007944: nop

    after_1:
    // 0x80007948: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000794C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80007950: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80007954: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007958: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000795C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007960: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80007964: jal         0x800353A0
    // 0x80007968: nop

    alSndpSetPitch(rdram, ctx);
        goto after_2;
    // 0x80007968: nop

    after_2:
    // 0x8000796C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80007970: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80007974: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80007978: nop

    // 0x8000797C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80007980: sw          $t3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r11;
L_80007984:
    // 0x80007984: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007988: nop

    // 0x8000798C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80007990: nop

    // 0x80007994: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x80007998: beq         $t6, $zero, L_80007A50
    if (ctx->r14 == 0) {
        // 0x8000799C: nop
    
            goto L_80007A50;
    }
    // 0x8000799C: nop

    // 0x800079A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800079A4: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x800079A8: lh          $t8, 0x20($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X20);
    // 0x800079AC: lb          $t9, 0x22($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X22);
    // 0x800079B0: lb          $t2, 0x23($t7)
    ctx->r10 = MEM_B(ctx->r15, 0X23);
    // 0x800079B4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800079B8: mflo        $t0
    ctx->r8 = lo;
    // 0x800079BC: nop

    // 0x800079C0: nop

    // 0x800079C4: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800079C8: mflo        $t3
    ctx->r11 = lo;
    // 0x800079CC: nop

    // 0x800079D0: nop

    // 0x800079D4: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x800079D8: mflo        $t1
    ctx->r9 = lo;
    // 0x800079DC: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x800079E0: nop

    // 0x800079E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800079E8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800079EC: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800079F0: lh          $a1, 0x16($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X16);
    // 0x800079F4: jal         0x80035310
    // 0x800079F8: nop

    alSndpSetSound(rdram, ctx);
        goto after_3;
    // 0x800079F8: nop

    after_3:
    // 0x800079FC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80007A00: lh          $t6, 0x2D76($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D76);
    // 0x80007A04: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80007A08: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80007A0C: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80007A10: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007A14: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007A18: mflo        $a1
    ctx->r5 = lo;
    // 0x80007A1C: nop

    // 0x80007A20: nop

    // 0x80007A24: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80007A28: mflo        $t8
    ctx->r24 = lo;
    // 0x80007A2C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80007A30: jal         0x80035400
    // 0x80007A34: nop

    alSndpSetVol(rdram, ctx);
        goto after_4;
    // 0x80007A34: nop

    after_4:
    // 0x80007A38: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80007A3C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80007A40: lw          $t7, 0x8($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X8);
    // 0x80007A44: nop

    // 0x80007A48: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x80007A4C: sw          $t0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r8;
L_80007A50:
    // 0x80007A50: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80007A54: nop

    // 0x80007A58: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80007A5C: nop

    // 0x80007A60: andi        $t1, $t3, 0x8
    ctx->r9 = ctx->r11 & 0X8;
    // 0x80007A64: beq         $t1, $zero, L_80007AB4
    if (ctx->r9 == 0) {
        // 0x80007A68: nop
    
            goto L_80007AB4;
    }
    // 0x80007A68: nop

    // 0x80007A6C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007A70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007A74: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007A78: lh          $a1, 0x16($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X16);
    // 0x80007A7C: jal         0x80035310
    // 0x80007A80: nop

    alSndpSetSound(rdram, ctx);
        goto after_5;
    // 0x80007A80: nop

    after_5:
    // 0x80007A84: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80007A88: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007A8C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007A90: lbu         $a1, 0x28($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X28);
    // 0x80007A94: jal         0x80035460
    // 0x80007A98: nop

    alSndpSetFXMix(rdram, ctx);
        goto after_6;
    // 0x80007A98: nop

    after_6:
    // 0x80007A9C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80007AA0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x80007AA4: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x80007AA8: nop

    // 0x80007AAC: and         $t7, $t8, $at
    ctx->r15 = ctx->r24 & ctx->r1;
    // 0x80007AB0: sw          $t7, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r15;
L_80007AB4:
    // 0x80007AB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80007AB8: nop

    // 0x80007ABC: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x80007AC0: nop

    // 0x80007AC4: andi        $t2, $t9, 0x4
    ctx->r10 = ctx->r25 & 0X4;
    // 0x80007AC8: beq         $t2, $zero, L_80007BAC
    if (ctx->r10 == 0) {
        // 0x80007ACC: nop
    
            goto L_80007BAC;
    }
    // 0x80007ACC: nop

    // 0x80007AD0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80007AD4: lbu         $t3, 0x2DB7($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X2DB7);
    // 0x80007AD8: nop

    // 0x80007ADC: andi        $t1, $t3, 0x1
    ctx->r9 = ctx->r11 & 0X1;
    // 0x80007AE0: beq         $t1, $zero, L_80007B18
    if (ctx->r9 == 0) {
        // 0x80007AE4: nop
    
            goto L_80007B18;
    }
    // 0x80007AE4: nop

    // 0x80007AE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007AEC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007AF0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007AF4: lh          $a1, 0x16($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X16);
    // 0x80007AF8: jal         0x80035310
    // 0x80007AFC: nop

    alSndpSetSound(rdram, ctx);
        goto after_7;
    // 0x80007AFC: nop

    after_7:
    // 0x80007B00: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007B04: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007B08: jal         0x800354C0
    // 0x80007B0C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    alSndpSetPan(rdram, ctx);
        goto after_8;
    // 0x80007B0C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_8:
    // 0x80007B10: b           L_80007B94
    // 0x80007B14: nop

        goto L_80007B94;
    // 0x80007B14: nop

L_80007B18:
    // 0x80007B18: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80007B1C: nop

    // 0x80007B20: lbu         $t8, 0x25($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X25);
    // 0x80007B24: lbu         $t7, 0x24($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X24);
    // 0x80007B28: nop

    // 0x80007B2C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80007B30: addiu       $t0, $t6, -0x40
    ctx->r8 = ADD32(ctx->r14, -0X40);
    // 0x80007B34: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x80007B38: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80007B3C: nop

    // 0x80007B40: bgez        $t9, L_80007B4C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80007B44: nop
    
            goto L_80007B4C;
    }
    // 0x80007B44: nop

    // 0x80007B48: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_80007B4C:
    // 0x80007B4C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80007B50: nop

    // 0x80007B54: slti        $at, $t2, 0x80
    ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
    // 0x80007B58: bne         $at, $zero, L_80007B68
    if (ctx->r1 != 0) {
        // 0x80007B5C: nop
    
            goto L_80007B68;
    }
    // 0x80007B5C: nop

    // 0x80007B60: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80007B64: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
L_80007B68:
    // 0x80007B68: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80007B6C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007B70: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007B74: lh          $a1, 0x16($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X16);
    // 0x80007B78: jal         0x80035310
    // 0x80007B7C: nop

    alSndpSetSound(rdram, ctx);
        goto after_9;
    // 0x80007B7C: nop

    after_9:
    // 0x80007B80: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007B84: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007B88: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x80007B8C: jal         0x800354C0
    // 0x80007B90: nop

    alSndpSetPan(rdram, ctx);
        goto after_10;
    // 0x80007B90: nop

    after_10:
L_80007B94:
    // 0x80007B94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80007B98: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80007B9C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80007BA0: nop

    // 0x80007BA4: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x80007BA8: sw          $t8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r24;
L_80007BAC:
    // 0x80007BAC: b           L_80007BB4
    // 0x80007BB0: nop

        goto L_80007BB4;
    // 0x80007BB0: nop

L_80007BB4:
    // 0x80007BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80007BBC: jr          $ra
    // 0x80007BC0: nop

    return;
    // 0x80007BC0: nop

;}
RECOMP_FUNC void func_80025810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025810: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80025814: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025818: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8002581C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025820: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80025824: addiu       $t7, $a1, 0x48
    ctx->r15 = ADD32(ctx->r5, 0X48);
    // 0x80025828: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8002582C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80025830: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80025834: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80025838: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002583C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80025840: lbu         $t1, 0x7450($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7450);
    // 0x80025844: nop

    // 0x80025848: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
    // 0x8002584C: lbu         $t2, 0x7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7);
    // 0x80025850: bgez        $a2, L_80025864
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80025854: andi        $t3, $a2, 0x7
        ctx->r11 = ctx->r6 & 0X7;
            goto L_80025864;
    }
    // 0x80025854: andi        $t3, $a2, 0x7
    ctx->r11 = ctx->r6 & 0X7;
    // 0x80025858: beq         $t3, $zero, L_80025864
    if (ctx->r11 == 0) {
        // 0x8002585C: nop
    
            goto L_80025864;
    }
    // 0x8002585C: nop

    // 0x80025860: addiu       $t3, $t3, -0x8
    ctx->r11 = ADD32(ctx->r11, -0X8);
L_80025864:
    // 0x80025864: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80025868: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x8002586C: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x80025870: sb          $t6, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r14;
    // 0x80025874: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80025878: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8002587C: lbu         $t7, 0x7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X7);
    // 0x80025880: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025884: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80025888: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002588C: sb          $t7, 0x7450($at)
    MEM_B(0X7450, ctx->r1) = ctx->r15;
    // 0x80025890: b           L_80025898
    // 0x80025894: nop

        goto L_80025898;
    // 0x80025894: nop

L_80025898:
    // 0x80025898: jr          $ra
    // 0x8002589C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8002589C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void load_game_section(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000BF0: lui         $t6, 0x5
    ctx->r14 = S32(0X5 << 16);
    // 0x80000BF4: lui         $t7, 0x12
    ctx->r15 = S32(0X12 << 16);
    // 0x80000BF8: addiu       $t7, $t7, 0x6CB0
    ctx->r15 = ADD32(ctx->r15, 0X6CB0);
    // 0x80000BFC: addiu       $t6, $t6, -0x2010
    ctx->r14 = ADD32(ctx->r14, -0X2010);
    // 0x80000C00: lui         $a1, 0x8006
    ctx->r5 = S32(0X8006 << 16);
    // 0x80000C04: addiu       $a1, $a1, -0x4530
    ctx->r5 = ADD32(ctx->r5, -0X4530);
    // 0x80000C08: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000C0C: jal         0x8000068C
    // 0x80000C10: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000C10: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x80000C14: b           L_80000C1C
    // 0x80000C18: nop

        goto L_80000C1C;
    // 0x80000C18: nop

L_80000C1C:
    // 0x80000C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000C24: jr          $ra
    // 0x80000C28: nop

    return;
    // 0x80000C28: nop

;}
RECOMP_FUNC void alSaveNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F278: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F27C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F280: addiu       $a2, $a2, 0x17C0
    ctx->r6 = ADD32(ctx->r6, 0X17C0);
    // 0x8003F284: addiu       $a1, $a1, 0x17F4
    ctx->r5 = ADD32(ctx->r5, 0X17F4);
    // 0x8003F288: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F28C: jal         0x80046400
    // 0x8003F290: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F290: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x8003F294: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003F298: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003F29C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8003F2A0: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8003F2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F2AC: jr          $ra
    // 0x8003F2B0: nop

    return;
    // 0x8003F2B0: nop

;}
RECOMP_FUNC void func_800251D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800251D4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800251D8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800251DC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800251E0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800251E4: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x800251E8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800251EC: addiu       $t7, $t7, 0x4808
    ctx->r15 = ADD32(ctx->r15, 0X4808);
    // 0x800251F0: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x800251F4: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_800251F8:
    // 0x800251F8: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800251FC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80025200: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80025204: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80025208: lbu         $t9, 0x7450($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7450);
    // 0x8002520C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80025210: srav        $t2, $t9, $t1
    ctx->r10 = S32(SIGNED(ctx->r25) >> (ctx->r9 & 31));
    // 0x80025214: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x80025218: sb          $t3, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r11;
    // 0x8002521C: lbu         $t4, 0x3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3);
    // 0x80025220: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80025224: nop

    // 0x80025228: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x8002522C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80025230: nop

    // 0x80025234: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80025238: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8002523C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80025240: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80025244: addiu       $t0, $t0, 0x4808
    ctx->r8 = ADD32(ctx->r8, 0X4808);
    // 0x80025248: addiu       $t9, $t0, 0x7D
    ctx->r25 = ADD32(ctx->r8, 0X7D);
    // 0x8002524C: sltu        $at, $t9, $t8
    ctx->r1 = ctx->r25 < ctx->r24 ? 1 : 0;
    // 0x80025250: beq         $at, $zero, L_80025260
    if (ctx->r1 == 0) {
        // 0x80025254: nop
    
            goto L_80025260;
    }
    // 0x80025254: nop

    // 0x80025258: b           L_8002529C
    // 0x8002525C: nop

        goto L_8002529C;
    // 0x8002525C: nop

L_80025260:
    // 0x80025260: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x80025264: nop

    // 0x80025268: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8002526C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x80025270: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80025274: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80025278: bne         $t3, $at, L_80025294
    if (ctx->r11 != ctx->r1) {
        // 0x8002527C: nop
    
            goto L_80025294;
    }
    // 0x8002527C: nop

    // 0x80025280: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x80025284: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80025288: nop

    // 0x8002528C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80025290: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_80025294:
    // 0x80025294: b           L_800251F8
    // 0x80025298: nop

        goto L_800251F8;
    // 0x80025298: nop

L_8002529C:
    // 0x8002529C: b           L_800252A4
    // 0x800252A0: nop

        goto L_800252A4;
    // 0x800252A0: nop

L_800252A4:
    // 0x800252A4: jr          $ra
    // 0x800252A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800252A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
