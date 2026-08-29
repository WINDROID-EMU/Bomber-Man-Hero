#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80285E54_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285E5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285E60: jal         0x8001B62C
    // 0x80285E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80285E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80285E68: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80285E6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80285E70: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80285E74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285E78: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80285E7C: sw          $t7, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r15;
    // 0x80285E80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285E84: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80285E88: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285E8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285E90: nop

    // 0x80285E94: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80285E98: nop

    // 0x80285E9C: bc1f        L_80285ED8
    if (!c1cs) {
        // 0x80285EA0: nop
    
            goto L_80285ED8;
    }
    // 0x80285EA0: nop

    // 0x80285EA4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285EA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285EAC: nop

    // 0x80285EB0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285EB4: nop

    // 0x80285EB8: bc1f        L_80285ED8
    if (!c1cs) {
        // 0x80285EBC: nop
    
            goto L_80285ED8;
    }
    // 0x80285EBC: nop

    // 0x80285EC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285EC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285EC8: jal         0x802804B8
    // 0x80285ECC: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285ECC: nop

    after_1:
    // 0x80285ED0: b           L_80285EE8
    // 0x80285ED4: nop

        goto L_80285EE8;
    // 0x80285ED4: nop

L_80285ED8:
    // 0x80285ED8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285EDC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285EE0: jal         0x802807D8
    // 0x80285EE4: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285EE4: nop

    after_2:
L_80285EE8:
    // 0x80285EE8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285EEC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80285EF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285EF4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80285EF8: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80285EFC: jal         0x80015538
    // 0x80285F00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80285F00: nop

    after_3:
    // 0x80285F04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285F08: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80285F0C: nop

    // 0x80285F10: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80285F14: b           L_80285F1C
    // 0x80285F18: nop

        goto L_80285F1C;
    // 0x80285F18: nop

L_80285F1C:
    // 0x80285F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285F24: jr          $ra
    // 0x80285F28: nop

    return;
    // 0x80285F28: nop

;}
RECOMP_FUNC void func_80285690_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285698: jal         0x80282168
    // 0x8028569C: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028569C: nop

    after_0:
    // 0x802856A0: b           L_802856A8
    // 0x802856A4: nop

        goto L_802856A8;
    // 0x802856A4: nop

L_802856A8:
    // 0x802856A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802856AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802856B0: jr          $ra
    // 0x802856B4: nop

    return;
    // 0x802856B4: nop

;}
RECOMP_FUNC void func_80284550_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284558: jal         0x80283A2C
    // 0x8028455C: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028455C: nop

    after_0:
    // 0x80284560: beq         $v0, $zero, L_80284570
    if (ctx->r2 == 0) {
        // 0x80284564: nop
    
            goto L_80284570;
    }
    // 0x80284564: nop

    // 0x80284568: b           L_802845FC
    // 0x8028456C: nop

        goto L_802845FC;
    // 0x8028456C: nop

L_80284570:
    // 0x80284570: jal         0x80085D54
    // 0x80284574: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284574: nop

    after_1:
    // 0x80284578: beq         $v0, $zero, L_80284588
    if (ctx->r2 == 0) {
        // 0x8028457C: nop
    
            goto L_80284588;
    }
    // 0x8028457C: nop

    // 0x80284580: b           L_802845FC
    // 0x80284584: nop

        goto L_802845FC;
    // 0x80284584: nop

L_80284588:
    // 0x80284588: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028458C: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80284590: nop

    // 0x80284594: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284598: bne         $t7, $zero, L_802845B0
    if (ctx->r15 != 0) {
        // 0x8028459C: nop
    
            goto L_802845B0;
    }
    // 0x8028459C: nop

    // 0x802845A0: jal         0x80282B2C
    // 0x802845A4: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802845A4: nop

    after_2:
    // 0x802845A8: b           L_802845FC
    // 0x802845AC: nop

        goto L_802845FC;
    // 0x802845AC: nop

L_802845B0:
    // 0x802845B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802845B4: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802845B8: nop

    // 0x802845BC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802845C0: beq         $t9, $zero, L_802845D8
    if (ctx->r25 == 0) {
        // 0x802845C4: nop
    
            goto L_802845D8;
    }
    // 0x802845C4: nop

    // 0x802845C8: jal         0x80282E78
    // 0x802845CC: nop

    func_80282E78_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802845CC: nop

    after_3:
    // 0x802845D0: b           L_802845FC
    // 0x802845D4: nop

        goto L_802845FC;
    // 0x802845D4: nop

L_802845D8:
    // 0x802845D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802845DC: jal         0x8001B44C
    // 0x802845E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x802845E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802845E4: beq         $v0, $zero, L_802845F4
    if (ctx->r2 == 0) {
        // 0x802845E8: nop
    
            goto L_802845F4;
    }
    // 0x802845E8: nop

    // 0x802845EC: jal         0x80282E08
    // 0x802845F0: nop

    func_80282E08_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x802845F0: nop

    after_5:
L_802845F4:
    // 0x802845F4: b           L_802845FC
    // 0x802845F8: nop

        goto L_802845FC;
    // 0x802845F8: nop

L_802845FC:
    // 0x802845FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284604: jr          $ra
    // 0x80284608: nop

    return;
    // 0x80284608: nop

;}
RECOMP_FUNC void func_80284324_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028432C: jal         0x80283A2C
    // 0x80284330: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284330: nop

    after_0:
    // 0x80284334: beq         $v0, $zero, L_80284350
    if (ctx->r2 == 0) {
        // 0x80284338: nop
    
            goto L_80284350;
    }
    // 0x80284338: nop

    // 0x8028433C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284340: jal         0x8001BBDC
    // 0x80284344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80284344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80284348: b           L_802844AC
    // 0x8028434C: nop

        goto L_802844AC;
    // 0x8028434C: nop

L_80284350:
    // 0x80284350: jal         0x80085D54
    // 0x80284354: nop

    func_80085D54(rdram, ctx);
        goto after_2;
    // 0x80284354: nop

    after_2:
    // 0x80284358: beq         $v0, $zero, L_80284374
    if (ctx->r2 == 0) {
        // 0x8028435C: nop
    
            goto L_80284374;
    }
    // 0x8028435C: nop

    // 0x80284360: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284364: jal         0x8001BBDC
    // 0x80284368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80284368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8028436C: b           L_802844AC
    // 0x80284370: nop

        goto L_802844AC;
    // 0x80284370: nop

L_80284374:
    // 0x80284374: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284378: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x8028437C: nop

    // 0x80284380: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284384: bne         $t7, $zero, L_802843A8
    if (ctx->r15 != 0) {
        // 0x80284388: nop
    
            goto L_802843A8;
    }
    // 0x80284388: nop

    // 0x8028438C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284390: jal         0x8001BBDC
    // 0x80284394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80284394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80284398: jal         0x80282B2C
    // 0x8028439C: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x8028439C: nop

    after_5:
    // 0x802843A0: b           L_802844AC
    // 0x802843A4: nop

        goto L_802844AC;
    // 0x802843A4: nop

L_802843A8:
    // 0x802843A8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802843AC: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802843B0: nop

    // 0x802843B4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802843B8: beq         $t9, $zero, L_802843DC
    if (ctx->r25 == 0) {
        // 0x802843BC: nop
    
            goto L_802843DC;
    }
    // 0x802843BC: nop

    // 0x802843C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802843C4: jal         0x8001BBDC
    // 0x802843C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x802843C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x802843CC: jal         0x80282A98
    // 0x802843D0: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x802843D0: nop

    after_7:
    // 0x802843D4: b           L_802844AC
    // 0x802843D8: nop

        goto L_802844AC;
    // 0x802843D8: nop

L_802843DC:
    // 0x802843DC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802843E0: lh          $t0, 0x7538($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7538);
    // 0x802843E4: nop

    // 0x802843E8: bne         $t0, $zero, L_80284478
    if (ctx->r8 != 0) {
        // 0x802843EC: nop
    
            goto L_80284478;
    }
    // 0x802843EC: nop

    // 0x802843F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802843F4: jal         0x8001B62C
    // 0x802843F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_8;
    // 0x802843F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802843FC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80284400: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80284404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284408: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028440C: nop

    // 0x80284410: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80284414: nop

    // 0x80284418: bc1f        L_80284470
    if (!c1cs) {
        // 0x8028441C: nop
    
            goto L_80284470;
    }
    // 0x8028441C: nop

    // 0x80284420: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80284424: lb          $t1, 0x65E8($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X65E8);
    // 0x80284428: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028442C: bne         $t1, $at, L_80284450
    if (ctx->r9 != ctx->r1) {
        // 0x80284430: nop
    
            goto L_80284450;
    }
    // 0x80284430: nop

    // 0x80284434: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284438: jal         0x8001BBDC
    // 0x8028443C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x8028443C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80284440: b           L_802844AC
    // 0x80284444: nop

        goto L_802844AC;
    // 0x80284444: nop

    // 0x80284448: b           L_80284470
    // 0x8028444C: nop

        goto L_80284470;
    // 0x8028444C: nop

L_80284450:
    // 0x80284450: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284454: jal         0x8001BBDC
    // 0x80284458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80284458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8028445C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80284460: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284464: sh          $t2, 0x7538($at)
    MEM_H(0X7538, ctx->r1) = ctx->r10;
    // 0x80284468: b           L_802844AC
    // 0x8028446C: nop

        goto L_802844AC;
    // 0x8028446C: nop

L_80284470:
    // 0x80284470: b           L_802844A4
    // 0x80284474: nop

        goto L_802844A4;
    // 0x80284474: nop

L_80284478:
    // 0x80284478: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028447C: jal         0x8001B44C
    // 0x80284480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_11;
    // 0x80284480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80284484: beq         $v0, $zero, L_802844A4
    if (ctx->r2 == 0) {
        // 0x80284488: nop
    
            goto L_802844A4;
    }
    // 0x80284488: nop

    // 0x8028448C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284490: sh          $zero, 0x7538($at)
    MEM_H(0X7538, ctx->r1) = 0;
    // 0x80284494: jal         0x80282854
    // 0x80284498: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_12;
    // 0x80284498: nop

    after_12:
    // 0x8028449C: b           L_802844AC
    // 0x802844A0: nop

        goto L_802844AC;
    // 0x802844A0: nop

L_802844A4:
    // 0x802844A4: b           L_802844AC
    // 0x802844A8: nop

        goto L_802844AC;
    // 0x802844A8: nop

L_802844AC:
    // 0x802844AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802844B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802844B4: jr          $ra
    // 0x802844B8: nop

    return;
    // 0x802844B8: nop

;}
RECOMP_FUNC void func_80285B20_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285B28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285B2C: jal         0x8001B62C
    // 0x80285B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80285B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80285B34: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80285B38: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80285B3C: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80285B40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285B44: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80285B48: sw          $t7, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r15;
    // 0x80285B4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285B50: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80285B54: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285B5C: nop

    // 0x80285B60: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80285B64: nop

    // 0x80285B68: bc1f        L_80285BA4
    if (!c1cs) {
        // 0x80285B6C: nop
    
            goto L_80285BA4;
    }
    // 0x80285B6C: nop

    // 0x80285B70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285B78: nop

    // 0x80285B7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285B80: nop

    // 0x80285B84: bc1f        L_80285BA4
    if (!c1cs) {
        // 0x80285B88: nop
    
            goto L_80285BA4;
    }
    // 0x80285B88: nop

    // 0x80285B8C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80285B90: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285B94: jal         0x802804B8
    // 0x80285B98: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285B98: nop

    after_1:
    // 0x80285B9C: b           L_80285BB4
    // 0x80285BA0: nop

        goto L_80285BB4;
    // 0x80285BA0: nop

L_80285BA4:
    // 0x80285BA4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285BA8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285BAC: jal         0x802807D8
    // 0x80285BB0: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285BB0: nop

    after_2:
L_80285BB4:
    // 0x80285BB4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285BB8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80285BBC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285BC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80285BC4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80285BC8: jal         0x80015538
    // 0x80285BCC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80285BCC: nop

    after_3:
    // 0x80285BD0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285BD4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80285BD8: nop

    // 0x80285BDC: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80285BE0: b           L_80285BE8
    // 0x80285BE4: nop

        goto L_80285BE8;
    // 0x80285BE4: nop

L_80285BE8:
    // 0x80285BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285BF0: jr          $ra
    // 0x80285BF4: nop

    return;
    // 0x80285BF4: nop

;}
RECOMP_FUNC void func_80280150_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280158: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028015C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280160: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280164: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280168: lwc1        $f9, 0x67C0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X67C0);
    // 0x8028016C: lwc1        $f8, 0x67C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X67C4);
    // 0x80280170: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280174: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280178: jal         0x80034970
    // 0x8028017C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8028017C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80280180: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280184: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280188: nop

    // 0x8028018C: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280190: nop

    // 0x80280194: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280198: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x8028019C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802801A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802801A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802801A8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x802801AC: lwc1        $f9, 0x67C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X67C8);
    // 0x802801B0: lwc1        $f8, 0x67CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X67CC);
    // 0x802801B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802801B8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802801BC: jal         0x80036570
    // 0x802801C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x802801C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x802801C4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802801C8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802801CC: nop

    // 0x802801D0: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x802801D4: nop

    // 0x802801D8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802801DC: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x802801E0: b           L_802801E8
    // 0x802801E4: nop

        goto L_802801E8;
    // 0x802801E4: nop

L_802801E8:
    // 0x802801E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802801EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802801F0: jr          $ra
    // 0x802801F4: nop

    return;
    // 0x802801F4: nop

;}
RECOMP_FUNC void func_80283004_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028300C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80283010: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283014: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283018: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028301C: addiu       $t7, $zero, 0x204
    ctx->r15 = ADD32(0, 0X204);
    // 0x80283020: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283024: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283028: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x8028302C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283030: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028303C: jal         0x8001C0EC
    // 0x80283040: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283040: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283044: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283048: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x8028304C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283050: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283054: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283058: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x8028305C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283064: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80283068: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028306C: jal         0x800178D4
    // 0x80283070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80283070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80283074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028307C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283080: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283084: jal         0x800178D4
    // 0x80283088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80283088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8028308C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283090: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283094: jal         0x8001FB3C
    // 0x80283098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80283098: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x8028309C: b           L_802830A4
    // 0x802830A0: nop

        goto L_802830A4;
    // 0x802830A0: nop

L_802830A4:
    // 0x802830A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802830A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802830AC: jr          $ra
    // 0x802830B0: nop

    return;
    // 0x802830B0: nop

;}
RECOMP_FUNC void func_80284A98_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284AA0: jal         0x80085D54
    // 0x80284AA4: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80284AA4: nop

    after_0:
    // 0x80284AA8: beq         $v0, $zero, L_80284AB8
    if (ctx->r2 == 0) {
        // 0x80284AAC: nop
    
            goto L_80284AB8;
    }
    // 0x80284AAC: nop

    // 0x80284AB0: b           L_80284AE4
    // 0x80284AB4: nop

        goto L_80284AE4;
    // 0x80284AB4: nop

L_80284AB8:
    // 0x80284AB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284ABC: jal         0x8001B44C
    // 0x80284AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80284AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80284AC4: beq         $v0, $zero, L_80284ADC
    if (ctx->r2 == 0) {
        // 0x80284AC8: nop
    
            goto L_80284ADC;
    }
    // 0x80284AC8: nop

    // 0x80284ACC: jal         0x80283400
    // 0x80284AD0: nop

    func_80283400_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284AD0: nop

    after_2:
    // 0x80284AD4: b           L_80284AE4
    // 0x80284AD8: nop

        goto L_80284AE4;
    // 0x80284AD8: nop

L_80284ADC:
    // 0x80284ADC: b           L_80284AE4
    // 0x80284AE0: nop

        goto L_80284AE4;
    // 0x80284AE0: nop

L_80284AE4:
    // 0x80284AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284AEC: jr          $ra
    // 0x80284AF0: nop

    return;
    // 0x80284AF0: nop

;}
RECOMP_FUNC void func_80281440_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281448: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028144C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281450: addiu       $t6, $zero, 0x269
    ctx->r14 = ADD32(0, 0X269);
    // 0x80281454: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80281458: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028145C: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281460: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80281464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028146C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80281470: jal         0x8001C0EC
    // 0x80281474: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281474: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281478: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028147C: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281480: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281484: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028148C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80281490: jal         0x8001C0EC
    // 0x80281494: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281494: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281498: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028149C: jal         0x8001B754
    // 0x802814A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802814A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802814A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802814A8: jal         0x8001B754
    // 0x802814AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x802814AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802814B0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802814B4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802814B8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802814BC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802814C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802814C4: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802814C8: b           L_802814D0
    // 0x802814CC: nop

        goto L_802814D0;
    // 0x802814CC: nop

L_802814D0:
    // 0x802814D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802814D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802814D8: jr          $ra
    // 0x802814DC: nop

    return;
    // 0x802814DC: nop

;}
RECOMP_FUNC void func_80282288_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028228C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282290: jal         0x80281990
    // 0x80282294: nop

    func_80281990_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282294: nop

    after_0:
    // 0x80282298: beq         $v0, $zero, L_802822A8
    if (ctx->r2 == 0) {
        // 0x8028229C: nop
    
            goto L_802822A8;
    }
    // 0x8028229C: nop

    // 0x802822A0: b           L_80282314
    // 0x802822A4: nop

        goto L_80282314;
    // 0x802822A4: nop

L_802822A8:
    // 0x802822A8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802822AC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x802822B0: nop

    // 0x802822B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802822B8: beq         $t7, $zero, L_8028230C
    if (ctx->r15 == 0) {
        // 0x802822BC: nop
    
            goto L_8028230C;
    }
    // 0x802822BC: nop

    // 0x802822C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802822C4: lb          $t8, 0x7590($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7590);
    // 0x802822C8: nop

    // 0x802822CC: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x802822D0: bne         $t9, $zero, L_802822FC
    if (ctx->r25 != 0) {
        // 0x802822D4: nop
    
            goto L_802822FC;
    }
    // 0x802822D4: nop

    // 0x802822D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802822DC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802822E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802822E4: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x802822E8: nop

    // 0x802822EC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802822F0: nop

    // 0x802822F4: bc1f        L_8028230C
    if (!c1cs) {
        // 0x802822F8: nop
    
            goto L_8028230C;
    }
    // 0x802822F8: nop

L_802822FC:
    // 0x802822FC: jal         0x802812F0
    // 0x80282300: nop

    func_802812F0_code_extra_6(rdram, ctx);
        goto after_1;
    // 0x80282300: nop

    after_1:
    // 0x80282304: b           L_80282314
    // 0x80282308: nop

        goto L_80282314;
    // 0x80282308: nop

L_8028230C:
    // 0x8028230C: b           L_80282314
    // 0x80282310: nop

        goto L_80282314;
    // 0x80282310: nop

L_80282314:
    // 0x80282314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028231C: jr          $ra
    // 0x80282320: nop

    return;
    // 0x80282320: nop

;}
RECOMP_FUNC void func_80280260_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280268: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8028026C: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x80280270: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80280274:
    // 0x80280274: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80280278: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8028027C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80280280: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280284: lw          $t8, 0x3620($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3620);
    // 0x80280288: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028028C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80280290: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280294: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80280298: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8028029C: nop

    // 0x802802A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802802A4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802802A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802802AC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802802B0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802802B4: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x802802B8: nop

    // 0x802802BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802802C0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802802C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802802C8: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802802CC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x802802D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802802D4: lw          $t3, 0x3624($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3624);
    // 0x802802D8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802802DC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802802E0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802802E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802802E8: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x802802EC: nop

    // 0x802802F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802802F4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x802802F8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802802FC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80280300: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80280304: jal         0x800843CC
    // 0x80280308: nop

    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80280308: nop

    after_0:
    // 0x8028030C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280310: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80280314: nop

    // 0x80280318: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8028031C: beq         $t6, $zero, L_80280344
    if (ctx->r14 == 0) {
        // 0x80280320: nop
    
            goto L_80280344;
    }
    // 0x80280320: nop

    // 0x80280324: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80280328: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8028032C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280330: lbu         $t8, 0x3640($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3640);
    // 0x80280334: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x80280338: nop

    // 0x8028033C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80280340: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
L_80280344:
    // 0x80280344: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80280348: nop

    // 0x8028034C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80280350: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80280354: bne         $at, $zero, L_80280274
    if (ctx->r1 != 0) {
        // 0x80280358: sw          $t2, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r10;
            goto L_80280274;
    }
    // 0x80280358: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8028035C: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x80280360: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280364: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80280368: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8028036C: lwc1        $f0, 0x3644($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3644);
    // 0x80280370: b           L_80280380
    // 0x80280374: nop

        goto L_80280380;
    // 0x80280374: nop

    // 0x80280378: b           L_80280380
    // 0x8028037C: nop

        goto L_80280380;
    // 0x8028037C: nop

L_80280380:
    // 0x80280380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80280388: jr          $ra
    // 0x8028038C: nop

    return;
    // 0x8028038C: nop

;}
RECOMP_FUNC void func_802810E8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802810EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802810F0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802810F4: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x802810F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802810FC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281100: addiu       $t7, $zero, 0x263
    ctx->r15 = ADD32(0, 0X263);
    // 0x80281104: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80281108: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028110C: addiu       $t9, $t9, 0x6164
    ctx->r25 = ADD32(ctx->r25, 0X6164);
    // 0x80281110: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281114: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281118: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028111C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281120: jal         0x8001C0EC
    // 0x80281124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281128: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8028112C: addiu       $t0, $t0, 0x6294
    ctx->r8 = ADD32(ctx->r8, 0X6294);
    // 0x80281130: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281134: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80281138: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028113C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281140: jal         0x8001C0EC
    // 0x80281144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281148: b           L_80281150
    // 0x8028114C: nop

        goto L_80281150;
    // 0x8028114C: nop

L_80281150:
    // 0x80281150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281158: jr          $ra
    // 0x8028115C: nop

    return;
    // 0x8028115C: nop

;}
RECOMP_FUNC void func_80282188_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028218C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282190: jal         0x80281860
    // 0x80282194: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282194: nop

    after_0:
    // 0x80282198: beq         $v0, $zero, L_802821A8
    if (ctx->r2 == 0) {
        // 0x8028219C: nop
    
            goto L_802821A8;
    }
    // 0x8028219C: nop

    // 0x802821A0: b           L_80282268
    // 0x802821A4: nop

        goto L_80282268;
    // 0x802821A4: nop

L_802821A8:
    // 0x802821A8: jal         0x80085D54
    // 0x802821AC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802821AC: nop

    after_1:
    // 0x802821B0: beq         $v0, $zero, L_802821C0
    if (ctx->r2 == 0) {
        // 0x802821B4: nop
    
            goto L_802821C0;
    }
    // 0x802821B4: nop

    // 0x802821B8: b           L_80282268
    // 0x802821BC: nop

        goto L_80282268;
    // 0x802821BC: nop

L_802821C0:
    // 0x802821C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802821C4: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x802821C8: nop

    // 0x802821CC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802821D0: bne         $t7, $zero, L_802821E8
    if (ctx->r15 != 0) {
        // 0x802821D4: nop
    
            goto L_802821E8;
    }
    // 0x802821D4: nop

    // 0x802821D8: jal         0x80280E6C
    // 0x802821DC: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x802821DC: nop

    after_2:
    // 0x802821E0: b           L_80282268
    // 0x802821E4: nop

        goto L_80282268;
    // 0x802821E4: nop

L_802821E8:
    // 0x802821E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802821EC: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802821F0: nop

    // 0x802821F4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802821F8: beq         $t9, $zero, L_80282210
    if (ctx->r25 == 0) {
        // 0x802821FC: nop
    
            goto L_80282210;
    }
    // 0x802821FC: nop

    // 0x80282200: jal         0x80280D2C
    // 0x80282204: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80282204: nop

    after_3:
    // 0x80282208: b           L_80282268
    // 0x8028220C: nop

        goto L_80282268;
    // 0x8028220C: nop

L_80282210:
    // 0x80282210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282214: jal         0x8001B44C
    // 0x80282218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80282218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8028221C: beq         $v0, $zero, L_80282260
    if (ctx->r2 == 0) {
        // 0x80282220: nop
    
            goto L_80282260;
    }
    // 0x80282220: nop

    // 0x80282224: jal         0x80280A20
    // 0x80282228: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_5;
    // 0x80282228: nop

    after_5:
    // 0x8028222C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282230: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282234: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282238: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028223C: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80282240: jal         0x80015538
    // 0x80282244: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80282244: nop

    after_6:
    // 0x80282248: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028224C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282250: nop

    // 0x80282254: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80282258: b           L_80282268
    // 0x8028225C: nop

        goto L_80282268;
    // 0x8028225C: nop

L_80282260:
    // 0x80282260: b           L_80282268
    // 0x80282264: nop

        goto L_80282268;
    // 0x80282264: nop

L_80282268:
    // 0x80282268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028226C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282270: jr          $ra
    // 0x80282274: nop

    return;
    // 0x80282274: nop

    // 0x80282278: jr          $ra
    // 0x8028227C: nop

    return;
    // 0x8028227C: nop

    // 0x80282280: jr          $ra
    // 0x80282284: nop

    return;
    // 0x80282284: nop

;}
RECOMP_FUNC void func_8028275C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028275C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282764: jal         0x80281860
    // 0x80282768: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282768: nop

    after_0:
    // 0x8028276C: beq         $v0, $zero, L_8028277C
    if (ctx->r2 == 0) {
        // 0x80282770: nop
    
            goto L_8028277C;
    }
    // 0x80282770: nop

    // 0x80282774: b           L_802827E8
    // 0x80282778: nop

        goto L_802827E8;
    // 0x80282778: nop

L_8028277C:
    // 0x8028277C: jal         0x80085D54
    // 0x80282780: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282780: nop

    after_1:
    // 0x80282784: beq         $v0, $zero, L_80282794
    if (ctx->r2 == 0) {
        // 0x80282788: nop
    
            goto L_80282794;
    }
    // 0x80282788: nop

    // 0x8028278C: b           L_802827E8
    // 0x80282790: nop

        goto L_802827E8;
    // 0x80282790: nop

L_80282794:
    // 0x80282794: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282798: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8028279C: nop

    // 0x802827A0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x802827A4: beq         $t7, $zero, L_802827BC
    if (ctx->r15 == 0) {
        // 0x802827A8: nop
    
            goto L_802827BC;
    }
    // 0x802827A8: nop

    // 0x802827AC: jal         0x80280D2C
    // 0x802827B0: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x802827B0: nop

    after_2:
    // 0x802827B4: b           L_802827E8
    // 0x802827B8: nop

        goto L_802827E8;
    // 0x802827B8: nop

L_802827BC:
    // 0x802827BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802827C0: lb          $t8, 0x7548($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7548);
    // 0x802827C4: nop

    // 0x802827C8: beq         $t8, $zero, L_802827E0
    if (ctx->r24 == 0) {
        // 0x802827CC: nop
    
            goto L_802827E0;
    }
    // 0x802827CC: nop

    // 0x802827D0: jal         0x80280A20
    // 0x802827D4: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x802827D4: nop

    after_3:
    // 0x802827D8: b           L_802827E8
    // 0x802827DC: nop

        goto L_802827E8;
    // 0x802827DC: nop

L_802827E0:
    // 0x802827E0: b           L_802827E8
    // 0x802827E4: nop

        goto L_802827E8;
    // 0x802827E4: nop

L_802827E8:
    // 0x802827E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802827EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802827F0: jr          $ra
    // 0x802827F4: nop

    return;
    // 0x802827F4: nop

;}
RECOMP_FUNC void func_80282C18_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282C20: jal         0x8028066C
    // 0x80282C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80282C28: b           L_80282C30
    // 0x80282C2C: nop

        goto L_80282C30;
    // 0x80282C2C: nop

L_80282C30:
    // 0x80282C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282C38: jr          $ra
    // 0x80282C3C: nop

    return;
    // 0x80282C3C: nop

;}
RECOMP_FUNC void func_80282324_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028232C: jal         0x80281990
    // 0x80282330: nop

    func_80281990_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282330: nop

    after_0:
    // 0x80282334: beq         $v0, $zero, L_80282344
    if (ctx->r2 == 0) {
        // 0x80282338: nop
    
            goto L_80282344;
    }
    // 0x80282338: nop

    // 0x8028233C: b           L_802823BC
    // 0x80282340: nop

        goto L_802823BC;
    // 0x80282340: nop

L_80282344:
    // 0x80282344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282348: jal         0x8001B44C
    // 0x8028234C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x8028234C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282350: beq         $v0, $zero, L_802823B4
    if (ctx->r2 == 0) {
        // 0x80282354: nop
    
            goto L_802823B4;
    }
    // 0x80282354: nop

    // 0x80282358: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028235C: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80282360: nop

    // 0x80282364: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80282368: beq         $t7, $zero, L_802823B4
    if (ctx->r15 == 0) {
        // 0x8028236C: nop
    
            goto L_802823B4;
    }
    // 0x8028236C: nop

    // 0x80282370: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282374: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282378: nop

    // 0x8028237C: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80282380: nop

    // 0x80282384: bne         $t9, $zero, L_802823A4
    if (ctx->r25 != 0) {
        // 0x80282388: nop
    
            goto L_802823A4;
    }
    // 0x80282388: nop

    // 0x8028238C: jal         0x802814E0
    // 0x80282390: nop

    func_802814E0_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80282390: nop

    after_2:
    // 0x80282394: b           L_802823BC
    // 0x80282398: nop

        goto L_802823BC;
    // 0x80282398: nop

    // 0x8028239C: b           L_802823B4
    // 0x802823A0: nop

        goto L_802823B4;
    // 0x802823A0: nop

L_802823A4:
    // 0x802823A4: jal         0x8028138C
    // 0x802823A8: nop

    func_8028138C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x802823A8: nop

    after_3:
    // 0x802823AC: b           L_802823BC
    // 0x802823B0: nop

        goto L_802823BC;
    // 0x802823B0: nop

L_802823B4:
    // 0x802823B4: b           L_802823BC
    // 0x802823B8: nop

        goto L_802823BC;
    // 0x802823B8: nop

L_802823BC:
    // 0x802823BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802823C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802823C4: jr          $ra
    // 0x802823C8: nop

    return;
    // 0x802823C8: nop

;}
RECOMP_FUNC void func_802816CC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802816CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802816D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802816D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802816D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802816DC: addiu       $t6, $zero, 0x26D
    ctx->r14 = ADD32(0, 0X26D);
    // 0x802816E0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802816E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802816E8: addiu       $t8, $t8, 0x6294
    ctx->r24 = ADD32(ctx->r24, 0X6294);
    // 0x802816EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802816F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802816F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802816F8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802816FC: jal         0x8001C0EC
    // 0x80281700: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281700: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80281704: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281708: jal         0x8001B754
    // 0x8028170C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x8028170C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281710: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80281714: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80281718: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028171C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80281720: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80281724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281728: jal         0x8001BB04
    // 0x8028172C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x8028172C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80281730: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281734: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80281738: b           L_80281740
    // 0x8028173C: nop

        goto L_80281740;
    // 0x8028173C: nop

L_80281740:
    // 0x80281740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281748: jr          $ra
    // 0x8028174C: nop

    return;
    // 0x8028174C: nop

;}
RECOMP_FUNC void func_80282C40_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282C48: jal         0x8028066C
    // 0x80282C4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282C4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80282C50: b           L_80282C58
    // 0x80282C54: nop

        goto L_80282C58;
    // 0x80282C54: nop

L_80282C58:
    // 0x80282C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282C60: jr          $ra
    // 0x80282C64: nop

    return;
    // 0x80282C64: nop

;}
RECOMP_FUNC void func_80280000_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280008: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028000C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280010: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280014: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280018: lwc1        $f9, 0x3760($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3760);
    // 0x8028001C: lwc1        $f8, 0x3764($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3764);
    // 0x80280020: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280024: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280028: jal         0x80034970
    // 0x8028002C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8028002C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80280030: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280034: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280038: nop

    // 0x8028003C: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280040: nop

    // 0x80280044: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280048: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x8028004C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280050: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280054: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280058: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8028005C: lwc1        $f9, 0x3768($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3768);
    // 0x80280060: lwc1        $f8, 0x376C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X376C);
    // 0x80280064: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280068: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8028006C: jal         0x80036570
    // 0x80280070: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80280070: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80280074: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280078: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028007C: nop

    // 0x80280080: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280084: nop

    // 0x80280088: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028008C: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x80280090: b           L_80280098
    // 0x80280094: nop

        goto L_80280098;
    // 0x80280094: nop

L_80280098:
    // 0x80280098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028009C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802800A0: jr          $ra
    // 0x802800A4: nop

    return;
    // 0x802800A4: nop

;}
RECOMP_FUNC void func_8028057C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028057C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280588: lb          $t6, 0x7548($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7548);
    // 0x8028058C: nop

    // 0x80280590: bne         $t6, $zero, L_802805A0
    if (ctx->r14 != 0) {
        // 0x80280594: nop
    
            goto L_802805A0;
    }
    // 0x80280594: nop

    // 0x80280598: b           L_8028065C
    // 0x8028059C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028065C;
    // 0x8028059C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802805A0:
    // 0x802805A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802805A4: lwc1        $f12, 0x51D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51D0);
    // 0x802805A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802805AC: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802805B0: jal         0x80015538
    // 0x802805B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x802805B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x802805B8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802805BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802805C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802805C4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802805C8: nop

    // 0x802805CC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802805D0: nop

    // 0x802805D4: bc1t        L_802805F8
    if (c1cs) {
        // 0x802805D8: nop
    
            goto L_802805F8;
    }
    // 0x802805D8: nop

    // 0x802805DC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x802805E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802805E4: nop

    // 0x802805E8: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802805EC: nop

    // 0x802805F0: bc1f        L_80280608
    if (!c1cs) {
        // 0x802805F4: nop
    
            goto L_80280608;
    }
    // 0x802805F4: nop

L_802805F8:
    // 0x802805F8: b           L_8028065C
    // 0x802805FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028065C;
    // 0x802805FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80280600: b           L_8028064C
    // 0x80280604: nop

        goto L_8028064C;
    // 0x80280604: nop

L_80280608:
    // 0x80280608: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028060C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280610: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280614: nop

    // 0x80280618: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8028061C: nop

    // 0x80280620: bc1t        L_80280644
    if (c1cs) {
        // 0x80280624: nop
    
            goto L_80280644;
    }
    // 0x80280624: nop

    // 0x80280628: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8028062C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280630: nop

    // 0x80280634: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80280638: nop

    // 0x8028063C: bc1f        L_8028064C
    if (!c1cs) {
        // 0x80280640: nop
    
            goto L_8028064C;
    }
    // 0x80280640: nop

L_80280644:
    // 0x80280644: b           L_8028065C
    // 0x80280648: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8028065C;
    // 0x80280648: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8028064C:
    // 0x8028064C: b           L_8028065C
    // 0x80280650: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8028065C;
    // 0x80280650: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80280654: b           L_8028065C
    // 0x80280658: nop

        goto L_8028065C;
    // 0x80280658: nop

L_8028065C:
    // 0x8028065C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280664: jr          $ra
    // 0x80280668: nop

    return;
    // 0x80280668: nop

;}
RECOMP_FUNC void func_802829A8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802829AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802829B0: jal         0x802808B8
    // 0x802829B4: nop

    func_802808B8_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x802829B4: nop

    after_0:
    // 0x802829B8: b           L_802829C0
    // 0x802829BC: nop

        goto L_802829C0;
    // 0x802829BC: nop

L_802829C0:
    // 0x802829C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802829C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802829C8: jr          $ra
    // 0x802829CC: nop

    return;
    // 0x802829CC: nop

;}
RECOMP_FUNC void func_80282C68_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282C70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C74: jal         0x8001B62C
    // 0x80282C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282C7C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282C80: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80282C84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282C88: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282C8C: nop

    // 0x80282C90: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80282C94: nop

    // 0x80282C98: bc1f        L_80282CD0
    if (!c1cs) {
        // 0x80282C9C: nop
    
            goto L_80282CD0;
    }
    // 0x80282C9C: nop

    // 0x80282CA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282CA4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282CA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80282CAC: nop

    // 0x80282CB0: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80282CB4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80282CB8: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80282CBC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282CC0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80282CC4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282CC8: b           L_80282D5C
    // 0x80282CCC: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
        goto L_80282D5C;
    // 0x80282CCC: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_80282CD0:
    // 0x80282CD0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80282CD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80282CD8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282CDC: nop

    // 0x80282CE0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80282CE4: nop

    // 0x80282CE8: bc1f        L_80282D5C
    if (!c1cs) {
        // 0x80282CEC: nop
    
            goto L_80282D5C;
    }
    // 0x80282CEC: nop

    // 0x80282CF0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80282CF4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282CF8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282CFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282D00: nop

    // 0x80282D04: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x80282D08: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282D0C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282D10: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282D14: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80282D18: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282D1C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80282D20: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282D24: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282D2C: nop

    // 0x80282D30: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80282D34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282D3C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80282D40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282D44: jal         0x800178D4
    // 0x80282D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80282D4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80282D50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80282D54: jal         0x8001FB3C
    // 0x80282D58: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80282D58: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_80282D5C:
    // 0x80282D5C: b           L_80282D64
    // 0x80282D60: nop

        goto L_80282D64;
    // 0x80282D60: nop

L_80282D64:
    // 0x80282D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282D68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282D6C: jr          $ra
    // 0x80282D70: nop

    return;
    // 0x80282D70: nop

;}
RECOMP_FUNC void func_8028066C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028066C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280670: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80280674: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280678: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8028067C: lwc1        $f4, 0x3684($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3684);
    // 0x80280680: nop

    // 0x80280684: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80280688: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028068C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280690: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280694: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80280698: nop

    // 0x8028069C: bne         $t8, $at, L_802806E8
    if (ctx->r24 != ctx->r1) {
        // 0x802806A0: nop
    
            goto L_802806E8;
    }
    // 0x802806A0: nop

    // 0x802806A4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802806A8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802806AC: addiu       $at, $zero, 0x263
    ctx->r1 = ADD32(0, 0X263);
    // 0x802806B0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x802806B4: nop

    // 0x802806B8: bne         $t0, $at, L_802806D0
    if (ctx->r8 != ctx->r1) {
        // 0x802806BC: nop
    
            goto L_802806D0;
    }
    // 0x802806BC: nop

    // 0x802806C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802806C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802806C8: b           L_802806E0
    // 0x802806CC: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
        goto L_802806E0;
    // 0x802806CC: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
L_802806D0:
    // 0x802806D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802806D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802806D8: nop

    // 0x802806DC: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
L_802806E0:
    // 0x802806E0: b           L_802806F8
    // 0x802806E4: nop

        goto L_802806F8;
    // 0x802806E4: nop

L_802806E8:
    // 0x802806E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802806EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802806F0: nop

    // 0x802806F4: swc1        $f10, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f10.u32l;
L_802806F8:
    // 0x802806F8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802806FC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280700: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280704: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280708: nop

    // 0x8028070C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80280710: nop

    // 0x80280714: bc1f        L_80280778
    if (!c1cs) {
        // 0x80280718: nop
    
            goto L_80280778;
    }
    // 0x80280718: nop

    // 0x8028071C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280720: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280724: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80280728: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028072C: nop

    // 0x80280730: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80280734: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x80280738: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028073C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280740: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280744: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80280748: nop

    // 0x8028074C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80280750: nop

    // 0x80280754: bc1f        L_80280770
    if (!c1cs) {
        // 0x80280758: nop
    
            goto L_80280770;
    }
    // 0x80280758: nop

    // 0x8028075C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280760: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280764: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280768: nop

    // 0x8028076C: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_80280770:
    // 0x80280770: b           L_802807F0
    // 0x80280774: nop

        goto L_802807F0;
    // 0x80280774: nop

L_80280778:
    // 0x80280778: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028077C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280780: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280784: lwc1        $f4, 0x44($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80280788: nop

    // 0x8028078C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80280790: nop

    // 0x80280794: bc1f        L_802807F0
    if (!c1cs) {
        // 0x80280798: nop
    
            goto L_802807F0;
    }
    // 0x80280798: nop

    // 0x8028079C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802807A0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802807A4: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x802807A8: lwc1        $f8, 0x44($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X44);
    // 0x802807AC: nop

    // 0x802807B0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802807B4: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x802807B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802807BC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802807C0: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802807C4: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x802807C8: nop

    // 0x802807CC: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x802807D0: nop

    // 0x802807D4: bc1f        L_802807F0
    if (!c1cs) {
        // 0x802807D8: nop
    
            goto L_802807F0;
    }
    // 0x802807D8: nop

    // 0x802807DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802807E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802807E4: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802807E8: nop

    // 0x802807EC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
L_802807F0:
    // 0x802807F0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802807F4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802807F8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x802807FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280800: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280804: nop

    // 0x80280808: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8028080C: nop

    // 0x80280810: bc1f        L_80280830
    if (!c1cs) {
        // 0x80280814: nop
    
            goto L_80280830;
    }
    // 0x80280814: nop

    // 0x80280818: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8028081C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280820: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280824: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280828: b           L_80280868
    // 0x8028082C: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
        goto L_80280868;
    // 0x8028082C: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
L_80280830:
    // 0x80280830: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280834: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028083C: lwc1        $f18, 0x44($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280840: nop

    // 0x80280844: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280848: nop

    // 0x8028084C: bc1f        L_80280868
    if (!c1cs) {
        // 0x80280850: nop
    
            goto L_80280868;
    }
    // 0x80280850: nop

    // 0x80280854: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280858: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028085C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280860: nop

    // 0x80280864: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
L_80280868:
    // 0x80280868: b           L_80280870
    // 0x8028086C: nop

        goto L_80280870;
    // 0x8028086C: nop

L_80280870:
    // 0x80280870: jr          $ra
    // 0x80280874: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280874: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802828BC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802828BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802828C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802828C4: jal         0x80280878
    // 0x802828C8: nop

    func_80280878_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x802828C8: nop

    after_0:
    // 0x802828CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802828D0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802828D4: nop

    // 0x802828D8: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802828DC: nop

    // 0x802828E0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x802828E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802828E8: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x802828EC: jal         0x8028066C
    // 0x802828F0: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_1;
    // 0x802828F0: nop

    after_1:
    // 0x802828F4: b           L_802828FC
    // 0x802828F8: nop

        goto L_802828FC;
    // 0x802828F8: nop

L_802828FC:
    // 0x802828FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282904: jr          $ra
    // 0x80282908: nop

    return;
    // 0x80282908: nop

;}
RECOMP_FUNC void func_80280FC8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280FC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280FCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280FD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280FD4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280FD8: nop

    // 0x80280FDC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280FE0: nop

    // 0x80280FE4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80280FE8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280FEC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280FF0: addiu       $at, $zero, 0x261
    ctx->r1 = ADD32(0, 0X261);
    // 0x80280FF4: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80280FF8: nop

    // 0x80280FFC: bne         $t9, $at, L_80281018
    if (ctx->r25 != ctx->r1) {
        // 0x80281000: nop
    
            goto L_80281018;
    }
    // 0x80281000: nop

    // 0x80281004: addiu       $t0, $zero, 0x262
    ctx->r8 = ADD32(0, 0X262);
    // 0x80281008: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    // 0x8028100C: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x80281010: b           L_80281028
    // 0x80281014: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
        goto L_80281028;
    // 0x80281014: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
L_80281018:
    // 0x80281018: addiu       $t2, $zero, 0x25F
    ctx->r10 = ADD32(0, 0X25F);
    // 0x8028101C: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x80281020: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80281024: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
L_80281028:
    // 0x80281028: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028102C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281030: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80281034: nop

    // 0x80281038: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8028103C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281040: jal         0x8001B62C
    // 0x80281044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80281044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281048: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8028104C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80281050: addiu       $t6, $t6, 0x6164
    ctx->r14 = ADD32(ctx->r14, 0X6164);
    // 0x80281054: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80281058: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028105C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281064: jal         0x8001C0EC
    // 0x80281068: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281068: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028106C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80281070: addiu       $t7, $t7, 0x6294
    ctx->r15 = ADD32(ctx->r15, 0X6294);
    // 0x80281074: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80281078: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028107C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281084: jal         0x8001C0EC
    // 0x80281088: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80281088: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8028108C: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80281090: addiu       $at, $zero, 0x25F
    ctx->r1 = ADD32(0, 0X25F);
    // 0x80281094: beq         $t8, $at, L_802810A8
    if (ctx->r24 == ctx->r1) {
        // 0x80281098: nop
    
            goto L_802810A8;
    }
    // 0x80281098: nop

    // 0x8028109C: addiu       $at, $zero, 0x262
    ctx->r1 = ADD32(0, 0X262);
    // 0x802810A0: bne         $t8, $at, L_802810B8
    if (ctx->r24 != ctx->r1) {
        // 0x802810A4: nop
    
            goto L_802810B8;
    }
    // 0x802810A4: nop

L_802810A8:
    // 0x802810A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802810AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802810B0: jal         0x8001B6BC
    // 0x802810B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x802810B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_802810B8:
    // 0x802810B8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x802810BC: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x802810C0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802810C4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x802810C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802810CC: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x802810D0: b           L_802810D8
    // 0x802810D4: nop

        goto L_802810D8;
    // 0x802810D4: nop

L_802810D8:
    // 0x802810D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802810DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802810E0: jr          $ra
    // 0x802810E4: nop

    return;
    // 0x802810E4: nop

;}
RECOMP_FUNC void func_80281DEC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281DF4: jal         0x80281860
    // 0x80281DF8: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281DF8: nop

    after_0:
    // 0x80281DFC: beq         $v0, $zero, L_80281E0C
    if (ctx->r2 == 0) {
        // 0x80281E00: nop
    
            goto L_80281E0C;
    }
    // 0x80281E00: nop

    // 0x80281E04: b           L_80281EA8
    // 0x80281E08: nop

        goto L_80281EA8;
    // 0x80281E08: nop

L_80281E0C:
    // 0x80281E0C: jal         0x80085D54
    // 0x80281E10: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281E10: nop

    after_1:
    // 0x80281E14: beq         $v0, $zero, L_80281E24
    if (ctx->r2 == 0) {
        // 0x80281E18: nop
    
            goto L_80281E24;
    }
    // 0x80281E18: nop

    // 0x80281E1C: b           L_80281EA8
    // 0x80281E20: nop

        goto L_80281EA8;
    // 0x80281E20: nop

L_80281E24:
    // 0x80281E24: jal         0x80281AE8
    // 0x80281E28: nop

    func_80281AE8_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281E28: nop

    after_2:
    // 0x80281E2C: beq         $v0, $zero, L_80281E3C
    if (ctx->r2 == 0) {
        // 0x80281E30: nop
    
            goto L_80281E3C;
    }
    // 0x80281E30: nop

    // 0x80281E34: b           L_80281EA8
    // 0x80281E38: nop

        goto L_80281EA8;
    // 0x80281E38: nop

L_80281E3C:
    // 0x80281E3C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80281E40: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80281E44: nop

    // 0x80281E48: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80281E4C: beq         $t7, $zero, L_80281EA0
    if (ctx->r15 == 0) {
        // 0x80281E50: nop
    
            goto L_80281EA0;
    }
    // 0x80281E50: nop

    // 0x80281E54: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281E58: lb          $t8, 0x7590($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7590);
    // 0x80281E5C: nop

    // 0x80281E60: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80281E64: bne         $t9, $zero, L_80281E90
    if (ctx->r25 != 0) {
        // 0x80281E68: nop
    
            goto L_80281E90;
    }
    // 0x80281E68: nop

    // 0x80281E6C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281E70: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281E74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281E78: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80281E7C: nop

    // 0x80281E80: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80281E84: nop

    // 0x80281E88: bc1f        L_80281EA0
    if (!c1cs) {
        // 0x80281E8C: nop
    
            goto L_80281EA0;
    }
    // 0x80281E8C: nop

L_80281E90:
    // 0x80281E90: jal         0x80280E6C
    // 0x80281E94: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80281E94: nop

    after_3:
    // 0x80281E98: b           L_80281EA8
    // 0x80281E9C: nop

        goto L_80281EA8;
    // 0x80281E9C: nop

L_80281EA0:
    // 0x80281EA0: b           L_80281EA8
    // 0x80281EA4: nop

        goto L_80281EA8;
    // 0x80281EA4: nop

L_80281EA8:
    // 0x80281EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281EB0: jr          $ra
    // 0x80281EB4: nop

    return;
    // 0x80281EB4: nop

;}
RECOMP_FUNC void func_80281CC4_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281CCC: jal         0x80281860
    // 0x80281CD0: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281CD0: nop

    after_0:
    // 0x80281CD4: beq         $v0, $zero, L_80281CE4
    if (ctx->r2 == 0) {
        // 0x80281CD8: nop
    
            goto L_80281CE4;
    }
    // 0x80281CD8: nop

    // 0x80281CDC: b           L_80281DDC
    // 0x80281CE0: nop

        goto L_80281DDC;
    // 0x80281CE0: nop

L_80281CE4:
    // 0x80281CE4: jal         0x80085D54
    // 0x80281CE8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281CE8: nop

    after_1:
    // 0x80281CEC: beq         $v0, $zero, L_80281CFC
    if (ctx->r2 == 0) {
        // 0x80281CF0: nop
    
            goto L_80281CFC;
    }
    // 0x80281CF0: nop

    // 0x80281CF4: b           L_80281DDC
    // 0x80281CF8: nop

        goto L_80281DDC;
    // 0x80281CF8: nop

L_80281CFC:
    // 0x80281CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281D00: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80281D04: nop

    // 0x80281D08: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80281D0C: bne         $t7, $zero, L_80281D24
    if (ctx->r15 != 0) {
        // 0x80281D10: nop
    
            goto L_80281D24;
    }
    // 0x80281D10: nop

    // 0x80281D14: jal         0x80280E6C
    // 0x80281D18: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281D18: nop

    after_2:
    // 0x80281D1C: b           L_80281DDC
    // 0x80281D20: nop

        goto L_80281DDC;
    // 0x80281D20: nop

L_80281D24:
    // 0x80281D24: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281D28: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80281D2C: nop

    // 0x80281D30: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80281D34: beq         $t9, $zero, L_80281D4C
    if (ctx->r25 == 0) {
        // 0x80281D38: nop
    
            goto L_80281D4C;
    }
    // 0x80281D38: nop

    // 0x80281D3C: jal         0x80280D2C
    // 0x80281D40: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80281D40: nop

    after_3:
    // 0x80281D44: b           L_80281DDC
    // 0x80281D48: nop

        goto L_80281DDC;
    // 0x80281D48: nop

L_80281D4C:
    // 0x80281D4C: jal         0x80281A74
    // 0x80281D50: nop

    func_80281A74_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x80281D50: nop

    after_4:
    // 0x80281D54: beq         $v0, $zero, L_80281D64
    if (ctx->r2 == 0) {
        // 0x80281D58: nop
    
            goto L_80281D64;
    }
    // 0x80281D58: nop

    // 0x80281D5C: b           L_80281DDC
    // 0x80281D60: nop

        goto L_80281DDC;
    // 0x80281D60: nop

L_80281D64:
    // 0x80281D64: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281D68: lw          $t0, -0x1EE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1EE0);
    // 0x80281D6C: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
    // 0x80281D70: bne         $t0, $at, L_80281D88
    if (ctx->r8 != ctx->r1) {
        // 0x80281D74: nop
    
            goto L_80281D88;
    }
    // 0x80281D74: nop

    // 0x80281D78: jal         0x802817D8
    // 0x80281D7C: nop

    func_802817D8_code_extra_6(rdram, ctx);
        goto after_5;
    // 0x80281D7C: nop

    after_5:
    // 0x80281D80: b           L_80281DDC
    // 0x80281D84: nop

        goto L_80281DDC;
    // 0x80281D84: nop

L_80281D88:
    // 0x80281D88: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281D8C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281D90: addiu       $at, $zero, 0x259
    ctx->r1 = ADD32(0, 0X259);
    // 0x80281D94: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80281D98: nop

    // 0x80281D9C: bne         $t2, $at, L_80281DCC
    if (ctx->r10 != ctx->r1) {
        // 0x80281DA0: nop
    
            goto L_80281DCC;
    }
    // 0x80281DA0: nop

    // 0x80281DA4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281DA8: lw          $t3, -0x1EE8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1EE8);
    // 0x80281DAC: nop

    // 0x80281DB0: slti        $at, $t3, 0xF0
    ctx->r1 = SIGNED(ctx->r11) < 0XF0 ? 1 : 0;
    // 0x80281DB4: bne         $at, $zero, L_80281DCC
    if (ctx->r1 != 0) {
        // 0x80281DB8: nop
    
            goto L_80281DCC;
    }
    // 0x80281DB8: nop

    // 0x80281DBC: jal         0x80281750
    // 0x80281DC0: nop

    func_80281750_code_extra_6(rdram, ctx);
        goto after_6;
    // 0x80281DC0: nop

    after_6:
    // 0x80281DC4: b           L_80281DDC
    // 0x80281DC8: nop

        goto L_80281DDC;
    // 0x80281DC8: nop

L_80281DCC:
    // 0x80281DCC: jal         0x80280A20
    // 0x80281DD0: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_7;
    // 0x80281DD0: nop

    after_7:
    // 0x80281DD4: b           L_80281DDC
    // 0x80281DD8: nop

        goto L_80281DDC;
    // 0x80281DD8: nop

L_80281DDC:
    // 0x80281DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281DE4: jr          $ra
    // 0x80281DE8: nop

    return;
    // 0x80281DE8: nop

;}
RECOMP_FUNC void func_80281A74_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281A7C: jal         0x8028057C
    // 0x80281A80: nop

    func_8028057C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281A80: nop

    after_0:
    // 0x80281A84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281A88: bne         $v0, $at, L_80281AC8
    if (ctx->r2 != ctx->r1) {
        // 0x80281A8C: nop
    
            goto L_80281AC8;
    }
    // 0x80281A8C: nop

    // 0x80281A90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281A94: lw          $t6, -0x1CB8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1CB8);
    // 0x80281A98: nop

    // 0x80281A9C: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x80281AA0: bne         $at, $zero, L_80281AC0
    if (ctx->r1 != 0) {
        // 0x80281AA4: nop
    
            goto L_80281AC0;
    }
    // 0x80281AA4: nop

    // 0x80281AA8: jal         0x802810E8
    // 0x80281AAC: nop

    func_802810E8_code_extra_6(rdram, ctx);
        goto after_1;
    // 0x80281AAC: nop

    after_1:
    // 0x80281AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281AB4: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
    // 0x80281AB8: b           L_80281AD8
    // 0x80281ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281AD8;
    // 0x80281ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281AC0:
    // 0x80281AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281AC4: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
L_80281AC8:
    // 0x80281AC8: b           L_80281AD8
    // 0x80281ACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281AD8;
    // 0x80281ACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281AD0: b           L_80281AD8
    // 0x80281AD4: nop

        goto L_80281AD8;
    // 0x80281AD4: nop

L_80281AD8:
    // 0x80281AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281AE0: jr          $ra
    // 0x80281AE4: nop

    return;
    // 0x80281AE4: nop

;}
RECOMP_FUNC void func_80282440_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282448: jal         0x80281990
    // 0x8028244C: nop

    func_80281990_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x8028244C: nop

    after_0:
    // 0x80282450: beq         $v0, $zero, L_80282460
    if (ctx->r2 == 0) {
        // 0x80282454: nop
    
            goto L_80282460;
    }
    // 0x80282454: nop

    // 0x80282458: b           L_802824B4
    // 0x8028245C: nop

        goto L_802824B4;
    // 0x8028245C: nop

L_80282460:
    // 0x80282460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282464: jal         0x8001B44C
    // 0x80282468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80282468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8028246C: beq         $v0, $zero, L_802824AC
    if (ctx->r2 == 0) {
        // 0x80282470: nop
    
            goto L_802824AC;
    }
    // 0x80282470: nop

    // 0x80282474: jal         0x80280A20
    // 0x80282478: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80282478: nop

    after_2:
    // 0x8028247C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282480: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282484: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80282488: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x8028248C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282490: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282494: nop

    // 0x80282498: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8028249C: nop

    // 0x802824A0: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x802824A4: b           L_802824B4
    // 0x802824A8: nop

        goto L_802824B4;
    // 0x802824A8: nop

L_802824AC:
    // 0x802824AC: b           L_802824B4
    // 0x802824B0: nop

        goto L_802824B4;
    // 0x802824B0: nop

L_802824B4:
    // 0x802824B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802824B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802824BC: jr          $ra
    // 0x802824C0: nop

    return;
    // 0x802824C0: nop

;}
RECOMP_FUNC void func_802812F0_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802812F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802812F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802812F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802812FC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281300: addiu       $t6, $zero, 0x267
    ctx->r14 = ADD32(0, 0X267);
    // 0x80281304: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80281308: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028130C: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281310: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80281314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028131C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80281320: jal         0x8001C0EC
    // 0x80281324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281328: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028132C: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281330: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281334: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028133C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80281340: jal         0x8001C0EC
    // 0x80281344: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281344: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281348: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028134C: jal         0x8001B754
    // 0x80281350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281354: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281358: jal         0x8001B754
    // 0x8028135C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x8028135C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281360: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80281364: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80281368: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028136C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80281370: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80281374: b           L_8028137C
    // 0x80281378: nop

        goto L_8028137C;
    // 0x80281378: nop

L_8028137C:
    // 0x8028137C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281384: jr          $ra
    // 0x80281388: nop

    return;
    // 0x80281388: nop

;}
RECOMP_FUNC void func_80281860_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281868: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028186C: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x80281870: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80281874: bne         $t6, $at, L_802818D4
    if (ctx->r14 != ctx->r1) {
        // 0x80281878: nop
    
            goto L_802818D4;
    }
    // 0x80281878: nop

    // 0x8028187C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281880: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281884: nop

    // 0x80281888: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x8028188C: nop

    // 0x80281890: beq         $t8, $zero, L_802818D4
    if (ctx->r24 == 0) {
        // 0x80281894: nop
    
            goto L_802818D4;
    }
    // 0x80281894: nop

    // 0x80281898: jal         0x80281624
    // 0x8028189C: nop

    func_80281624_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x8028189C: nop

    after_0:
    // 0x802818A0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802818A4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802818A8: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x802818AC: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x802818B0: nop

    // 0x802818B4: bne         $t0, $at, L_802818CC
    if (ctx->r8 != ctx->r1) {
        // 0x802818B8: nop
    
            goto L_802818CC;
    }
    // 0x802818B8: nop

    // 0x802818BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802818C0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802818C4: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x802818C8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
L_802818CC:
    // 0x802818CC: b           L_80281980
    // 0x802818D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281980;
    // 0x802818D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802818D4:
    // 0x802818D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802818D8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802818DC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x802818E0: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x802818E4: nop

    // 0x802818E8: beq         $t4, $at, L_802818F8
    if (ctx->r12 == ctx->r1) {
        // 0x802818EC: nop
    
            goto L_802818F8;
    }
    // 0x802818EC: nop

    // 0x802818F0: bne         $t4, $zero, L_80281970
    if (ctx->r12 != 0) {
        // 0x802818F4: nop
    
            goto L_80281970;
    }
    // 0x802818F4: nop

L_802818F8:
    // 0x802818F8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802818FC: lbu         $t5, -0x1F78($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1F78);
    // 0x80281900: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281904: bne         $t5, $at, L_80281958
    if (ctx->r13 != ctx->r1) {
        // 0x80281908: nop
    
            goto L_80281958;
    }
    // 0x80281908: nop

    // 0x8028190C: b           L_80281914
    // 0x80281910: nop

        goto L_80281914;
    // 0x80281910: nop

L_80281914:
    // 0x80281914: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281918: lbu         $t6, -0x1F80($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F80);
    // 0x8028191C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281920: bne         $t6, $at, L_80281950
    if (ctx->r14 != ctx->r1) {
        // 0x80281924: nop
    
            goto L_80281950;
    }
    // 0x80281924: nop

    // 0x80281928: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028192C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281930: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80281934: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281938: jal         0x800178D4
    // 0x8028193C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8028193C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80281940: jal         0x802816CC
    // 0x80281944: nop

    func_802816CC_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281944: nop

    after_2:
    // 0x80281948: b           L_80281980
    // 0x8028194C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281980;
    // 0x8028194C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281950:
    // 0x80281950: b           L_80281970
    // 0x80281954: nop

        goto L_80281970;
    // 0x80281954: nop

L_80281958:
    // 0x80281958: jal         0x802811F8
    // 0x8028195C: nop

    func_802811F8_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x8028195C: nop

    after_3:
    // 0x80281960: b           L_80281980
    // 0x80281964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281980;
    // 0x80281964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80281968: b           L_80281970
    // 0x8028196C: nop

        goto L_80281970;
    // 0x8028196C: nop

L_80281970:
    // 0x80281970: b           L_80281980
    // 0x80281974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281980;
    // 0x80281974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281978: b           L_80281980
    // 0x8028197C: nop

        goto L_80281980;
    // 0x8028197C: nop

L_80281980:
    // 0x80281980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281984: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281988: jr          $ra
    // 0x8028198C: nop

    return;
    // 0x8028198C: nop

;}
RECOMP_FUNC void func_802814E0_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802814E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802814E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802814E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802814EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802814F0: addiu       $t6, $zero, 0x26A
    ctx->r14 = ADD32(0, 0X26A);
    // 0x802814F4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802814F8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802814FC: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281500: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80281504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028150C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80281510: jal         0x8001C0EC
    // 0x80281514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281518: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028151C: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281520: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281524: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028152C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80281530: jal         0x8001C0EC
    // 0x80281534: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281534: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281538: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028153C: jal         0x8001B754
    // 0x80281540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281544: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281548: jal         0x8001B754
    // 0x8028154C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x8028154C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281550: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80281554: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80281558: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028155C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80281560: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281564: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80281568: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028156C: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80281570: b           L_80281578
    // 0x80281574: nop

        goto L_80281578;
    // 0x80281574: nop

L_80281578:
    // 0x80281578: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028157C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281580: jr          $ra
    // 0x80281584: nop

    return;
    // 0x80281584: nop

;}
RECOMP_FUNC void func_80282060_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282068: jal         0x80281860
    // 0x8028206C: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x8028206C: nop

    after_0:
    // 0x80282070: beq         $v0, $zero, L_80282080
    if (ctx->r2 == 0) {
        // 0x80282074: nop
    
            goto L_80282080;
    }
    // 0x80282074: nop

    // 0x80282078: b           L_80282178
    // 0x8028207C: nop

        goto L_80282178;
    // 0x8028207C: nop

L_80282080:
    // 0x80282080: jal         0x80085D54
    // 0x80282084: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282084: nop

    after_1:
    // 0x80282088: beq         $v0, $zero, L_80282098
    if (ctx->r2 == 0) {
        // 0x8028208C: nop
    
            goto L_80282098;
    }
    // 0x8028208C: nop

    // 0x80282090: b           L_80282178
    // 0x80282094: nop

        goto L_80282178;
    // 0x80282094: nop

L_80282098:
    // 0x80282098: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028209C: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x802820A0: nop

    // 0x802820A4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802820A8: bne         $t7, $zero, L_802820C0
    if (ctx->r15 != 0) {
        // 0x802820AC: nop
    
            goto L_802820C0;
    }
    // 0x802820AC: nop

    // 0x802820B0: jal         0x80280E6C
    // 0x802820B4: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x802820B4: nop

    after_2:
    // 0x802820B8: b           L_80282178
    // 0x802820BC: nop

        goto L_80282178;
    // 0x802820BC: nop

L_802820C0:
    // 0x802820C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802820C4: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802820C8: nop

    // 0x802820CC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802820D0: beq         $t9, $zero, L_802820E8
    if (ctx->r25 == 0) {
        // 0x802820D4: nop
    
            goto L_802820E8;
    }
    // 0x802820D4: nop

    // 0x802820D8: jal         0x80280D2C
    // 0x802820DC: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x802820DC: nop

    after_3:
    // 0x802820E0: b           L_80282178
    // 0x802820E4: nop

        goto L_80282178;
    // 0x802820E4: nop

L_802820E8:
    // 0x802820E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802820EC: jal         0x8001B62C
    // 0x802820F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x802820F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802820F4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x802820F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802820FC: nop

    // 0x80282100: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80282104: nop

    // 0x80282108: bc1f        L_80282134
    if (!c1cs) {
        // 0x8028210C: nop
    
            goto L_80282134;
    }
    // 0x8028210C: nop

    // 0x80282110: jal         0x8028057C
    // 0x80282114: nop

    func_8028057C_code_extra_6(rdram, ctx);
        goto after_5;
    // 0x80282114: nop

    after_5:
    // 0x80282118: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028211C: bne         $v0, $at, L_80282134
    if (ctx->r2 != ctx->r1) {
        // 0x80282120: nop
    
            goto L_80282134;
    }
    // 0x80282120: nop

    // 0x80282124: jal         0x80281160
    // 0x80282128: nop

    func_80281160_code_extra_6(rdram, ctx);
        goto after_6;
    // 0x80282128: nop

    after_6:
    // 0x8028212C: b           L_80282178
    // 0x80282130: nop

        goto L_80282178;
    // 0x80282130: nop

L_80282134:
    // 0x80282134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282138: jal         0x8001B44C
    // 0x8028213C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x8028213C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80282140: beq         $v0, $zero, L_80282170
    if (ctx->r2 == 0) {
        // 0x80282144: nop
    
            goto L_80282170;
    }
    // 0x80282144: nop

    // 0x80282148: jal         0x80280A20
    // 0x8028214C: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_8;
    // 0x8028214C: nop

    after_8:
    // 0x80282150: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282154: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282158: nop

    // 0x8028215C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80282160: nop

    // 0x80282164: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80282168: b           L_80282178
    // 0x8028216C: nop

        goto L_80282178;
    // 0x8028216C: nop

L_80282170:
    // 0x80282170: b           L_80282178
    // 0x80282174: nop

        goto L_80282178;
    // 0x80282174: nop

L_80282178:
    // 0x80282178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028217C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282180: jr          $ra
    // 0x80282184: nop

    return;
    // 0x80282184: nop

;}
RECOMP_FUNC void func_802823CC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802823CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802823D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802823D4: jal         0x80281990
    // 0x802823D8: nop

    func_80281990_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x802823D8: nop

    after_0:
    // 0x802823DC: beq         $v0, $zero, L_802823EC
    if (ctx->r2 == 0) {
        // 0x802823E0: nop
    
            goto L_802823EC;
    }
    // 0x802823E0: nop

    // 0x802823E4: b           L_80282430
    // 0x802823E8: nop

        goto L_80282430;
    // 0x802823E8: nop

L_802823EC:
    // 0x802823EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802823F0: jal         0x8001B44C
    // 0x802823F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x802823F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802823F8: beq         $v0, $zero, L_80282428
    if (ctx->r2 == 0) {
        // 0x802823FC: nop
    
            goto L_80282428;
    }
    // 0x802823FC: nop

    // 0x80282400: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282404: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80282408: nop

    // 0x8028240C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80282410: beq         $t7, $zero, L_80282428
    if (ctx->r15 == 0) {
        // 0x80282414: nop
    
            goto L_80282428;
    }
    // 0x80282414: nop

    // 0x80282418: jal         0x80281440
    // 0x8028241C: nop

    func_80281440_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x8028241C: nop

    after_2:
    // 0x80282420: b           L_80282430
    // 0x80282424: nop

        goto L_80282430;
    // 0x80282424: nop

L_80282428:
    // 0x80282428: b           L_80282430
    // 0x8028242C: nop

        goto L_80282430;
    // 0x8028242C: nop

L_80282430:
    // 0x80282430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282438: jr          $ra
    // 0x8028243C: nop

    return;
    // 0x8028243C: nop

;}
RECOMP_FUNC void func_80282524_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028252C: jal         0x80281860
    // 0x80282530: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282530: nop

    after_0:
    // 0x80282534: beq         $v0, $zero, L_80282544
    if (ctx->r2 == 0) {
        // 0x80282538: nop
    
            goto L_80282544;
    }
    // 0x80282538: nop

    // 0x8028253C: b           L_802825E0
    // 0x80282540: nop

        goto L_802825E0;
    // 0x80282540: nop

L_80282544:
    // 0x80282544: jal         0x80085D54
    // 0x80282548: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282548: nop

    after_1:
    // 0x8028254C: beq         $v0, $zero, L_8028255C
    if (ctx->r2 == 0) {
        // 0x80282550: nop
    
            goto L_8028255C;
    }
    // 0x80282550: nop

    // 0x80282554: b           L_802825E0
    // 0x80282558: nop

        goto L_802825E0;
    // 0x80282558: nop

L_8028255C:
    // 0x8028255C: jal         0x80281AE8
    // 0x80282560: nop

    func_80281AE8_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80282560: nop

    after_2:
    // 0x80282564: beq         $v0, $zero, L_80282574
    if (ctx->r2 == 0) {
        // 0x80282568: nop
    
            goto L_80282574;
    }
    // 0x80282568: nop

    // 0x8028256C: b           L_802825E0
    // 0x80282570: nop

        goto L_802825E0;
    // 0x80282570: nop

L_80282574:
    // 0x80282574: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80282578: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x8028257C: nop

    // 0x80282580: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80282584: beq         $t7, $zero, L_802825D8
    if (ctx->r15 == 0) {
        // 0x80282588: nop
    
            goto L_802825D8;
    }
    // 0x80282588: nop

    // 0x8028258C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282590: lb          $t8, 0x7590($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7590);
    // 0x80282594: nop

    // 0x80282598: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x8028259C: bne         $t9, $zero, L_802825C8
    if (ctx->r25 != 0) {
        // 0x802825A0: nop
    
            goto L_802825C8;
    }
    // 0x802825A0: nop

    // 0x802825A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802825A8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802825AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802825B0: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x802825B4: nop

    // 0x802825B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802825BC: nop

    // 0x802825C0: bc1f        L_802825D8
    if (!c1cs) {
        // 0x802825C4: nop
    
            goto L_802825D8;
    }
    // 0x802825C4: nop

L_802825C8:
    // 0x802825C8: jal         0x80280E6C
    // 0x802825CC: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x802825CC: nop

    after_3:
    // 0x802825D0: b           L_802825E0
    // 0x802825D4: nop

        goto L_802825E0;
    // 0x802825D4: nop

L_802825D8:
    // 0x802825D8: b           L_802825E0
    // 0x802825DC: nop

        goto L_802825E0;
    // 0x802825DC: nop

L_802825E0:
    // 0x802825E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802825E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802825E8: jr          $ra
    // 0x802825EC: nop

    return;
    // 0x802825EC: nop

;}
RECOMP_FUNC void func_80282D74_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282D74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282D80: jal         0x8001B62C
    // 0x80282D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282D88: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282D8C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282D90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282D94: nop

    // 0x80282D98: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80282D9C: nop

    // 0x80282DA0: bc1f        L_80282DFC
    if (!c1cs) {
        // 0x80282DA4: nop
    
            goto L_80282DFC;
    }
    // 0x80282DA4: nop

    // 0x80282DA8: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80282DAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282DB0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282DB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80282DB8: nop

    // 0x80282DBC: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x80282DC0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80282DC4: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80282DC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282DCC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80282DD0: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
    // 0x80282DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282DDC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80282DE0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282DE4: jal         0x800178D4
    // 0x80282DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80282DEC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80282DF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80282DF4: jal         0x8001FB3C
    // 0x80282DF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80282DF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_80282DFC:
    // 0x80282DFC: jal         0x802808B8
    // 0x80282E00: nop

    func_802808B8_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80282E00: nop

    after_3:
    // 0x80282E04: b           L_80282E0C
    // 0x80282E08: nop

        goto L_80282E0C;
    // 0x80282E08: nop

L_80282E0C:
    // 0x80282E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282E10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282E14: jr          $ra
    // 0x80282E18: nop

    return;
    // 0x80282E18: nop

;}
RECOMP_FUNC void func_80282E40_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282E44: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282E48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282E4C: nop

    // 0x80282E50: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80282E54: jr          $ra
    // 0x80282E58: nop

    return;
    // 0x80282E58: nop

    // 0x80282E5C: jr          $ra
    // 0x80282E60: nop

    return;
    // 0x80282E60: nop

;}
RECOMP_FUNC void func_802824C4_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802824C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802824C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802824CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802824D0: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x802824D4: nop

    // 0x802824D8: slti        $at, $t6, 0xB4
    ctx->r1 = SIGNED(ctx->r14) < 0XB4 ? 1 : 0;
    // 0x802824DC: bne         $at, $zero, L_802824F8
    if (ctx->r1 != 0) {
        // 0x802824E0: nop
    
            goto L_802824F8;
    }
    // 0x802824E0: nop

    // 0x802824E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802824E8: jal         0x80069A54
    // 0x802824EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x802824EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802824F0: b           L_8028250C
    // 0x802824F4: nop

        goto L_8028250C;
    // 0x802824F4: nop

L_802824F8:
    // 0x802824F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802824FC: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x80282500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282504: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80282508: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
L_8028250C:
    // 0x8028250C: b           L_80282514
    // 0x80282510: nop

        goto L_80282514;
    // 0x80282510: nop

L_80282514:
    // 0x80282514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028251C: jr          $ra
    // 0x80282520: nop

    return;
    // 0x80282520: nop

;}
RECOMP_FUNC void func_802831BC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802831BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802831C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802831C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802831C8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802831CC: nop

    // 0x802831D0: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x802831D4: nop

    // 0x802831D8: bne         $t7, $zero, L_8028331C
    if (ctx->r15 != 0) {
        // 0x802831DC: nop
    
            goto L_8028331C;
    }
    // 0x802831DC: nop

    // 0x802831E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802831E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802831E8: nop

    // 0x802831EC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x802831F0: nop

    // 0x802831F4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802831F8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x802831FC: jal         0x8001819C
    // 0x80283200: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x80283200: nop

    after_0:
    // 0x80283204: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283208: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028320C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80283210: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80283214: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80283218: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028321C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80283220: nop

    // 0x80283224: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80283228: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028322C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283230: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80283234: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283238: nop

    // 0x8028323C: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80283240: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80283244: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80283248: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028324C: nop

    // 0x80283250: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x80283254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283258: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028325C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80283260: nop

    // 0x80283264: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80283268: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028326C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283270: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283274: lwc1        $f16, 0x3784($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3784);
    // 0x80283278: nop

    // 0x8028327C: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x80283280: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283284: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283288: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028328C: nop

    // 0x80283290: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x80283294: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80283298: addiu       $t0, $t0, 0x6164
    ctx->r8 = ADD32(ctx->r8, 0X6164);
    // 0x8028329C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802832A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802832A8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x802832AC: jal         0x8001C0EC
    // 0x802832B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802832B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802832B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832B8: jal         0x8001B754
    // 0x802832BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802832BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802832C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832C4: jal         0x8001BBDC
    // 0x802832C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x802832C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802832CC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802832D0: addiu       $a3, $a3, 0x6224
    ctx->r7 = ADD32(ctx->r7, 0X6224);
    // 0x802832D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802832DC: jal         0x8001ABF4
    // 0x802832E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x802832E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802832E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802832E8: addiu       $t8, $t8, 0x6294
    ctx->r24 = ADD32(ctx->r24, 0X6294);
    // 0x802832EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802832F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802832F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802832F8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x802832FC: jal         0x8001C0EC
    // 0x80283300: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80283300: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_5:
    // 0x80283304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283308: jal         0x8001B754
    // 0x8028330C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x8028330C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80283310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283314: jal         0x8001BBDC
    // 0x80283318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x80283318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8028331C:
    // 0x8028331C: jal         0x8001CD20
    // 0x80283320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_8;
    // 0x80283320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80283324: jal         0x8001AD6C
    // 0x80283328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_9;
    // 0x80283328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x8028332C: b           L_80283334
    // 0x80283330: nop

        goto L_80283334;
    // 0x80283330: nop

L_80283334:
    // 0x80283334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028333C: jr          $ra
    // 0x80283340: nop

    return;
    // 0x80283340: nop

;}
RECOMP_FUNC void func_80281750_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281758: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028175C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281760: addiu       $t6, $zero, 0x26E
    ctx->r14 = ADD32(0, 0X26E);
    // 0x80281764: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80281768: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028176C: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281770: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80281774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028177C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80281780: jal         0x8001C0EC
    // 0x80281784: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281784: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281788: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028178C: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281790: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028179C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x802817A0: jal         0x8001C0EC
    // 0x802817A4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802817A4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x802817A8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802817AC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802817B0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802817B4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802817B8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802817BC: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802817C0: b           L_802817C8
    // 0x802817C4: nop

        goto L_802817C8;
    // 0x802817C4: nop

L_802817C8:
    // 0x802817C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802817CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802817D0: jr          $ra
    // 0x802817D4: nop

    return;
    // 0x802817D4: nop

;}
RECOMP_FUNC void func_8028049C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028049C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802804A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802804A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802804A8: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802804AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802804B0: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802804B4: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802804B8: nop

    // 0x802804BC: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x802804C0: jal         0x800366E0
    // 0x802804C4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x802804C4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_0:
    // 0x802804C8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802804CC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802804D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802804D4: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802804D8: nop

    // 0x802804DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802804E0: nop

    // 0x802804E4: bc1f        L_802804F8
    if (!c1cs) {
        // 0x802804E8: nop
    
            goto L_802804F8;
    }
    // 0x802804E8: nop

    // 0x802804EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802804F0: b           L_80280564
    // 0x802804F4: sb          $zero, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = 0;
        goto L_80280564;
    // 0x802804F4: sb          $zero, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = 0;
L_802804F8:
    // 0x802804F8: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802804FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280500: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280504: nop

    // 0x80280508: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8028050C: nop

    // 0x80280510: bc1f        L_80280528
    if (!c1cs) {
        // 0x80280514: nop
    
            goto L_80280528;
    }
    // 0x80280514: nop

    // 0x80280518: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028051C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280520: b           L_80280564
    // 0x80280524: sb          $t6, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = ctx->r14;
        goto L_80280564;
    // 0x80280524: sb          $t6, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = ctx->r14;
L_80280528:
    // 0x80280528: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028052C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280530: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280534: nop

    // 0x80280538: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8028053C: nop

    // 0x80280540: bc1f        L_80280558
    if (!c1cs) {
        // 0x80280544: nop
    
            goto L_80280558;
    }
    // 0x80280544: nop

    // 0x80280548: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8028054C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280550: b           L_80280564
    // 0x80280554: sb          $t7, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = ctx->r15;
        goto L_80280564;
    // 0x80280554: sb          $t7, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = ctx->r15;
L_80280558:
    // 0x80280558: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8028055C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280560: sb          $t8, 0x7548($at)
    MEM_B(0X7548, ctx->r1) = ctx->r24;
L_80280564:
    // 0x80280564: b           L_8028056C
    // 0x80280568: nop

        goto L_8028056C;
    // 0x80280568: nop

L_8028056C:
    // 0x8028056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280574: jr          $ra
    // 0x80280578: nop

    return;
    // 0x80280578: nop

;}
RECOMP_FUNC void func_80280E6C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280E70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280E74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280E78: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280E7C: nop

    // 0x80280E80: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280E84: nop

    // 0x80280E88: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80280E8C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280E90: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280E94: addiu       $at, $zero, 0x260
    ctx->r1 = ADD32(0, 0X260);
    // 0x80280E98: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80280E9C: nop

    // 0x80280EA0: beq         $t9, $at, L_80280EC0
    if (ctx->r25 == ctx->r1) {
        // 0x80280EA4: nop
    
            goto L_80280EC0;
    }
    // 0x80280EA4: nop

    // 0x80280EA8: addiu       $at, $zero, 0x261
    ctx->r1 = ADD32(0, 0X261);
    // 0x80280EAC: beq         $t9, $at, L_80280EC0
    if (ctx->r25 == ctx->r1) {
        // 0x80280EB0: nop
    
            goto L_80280EC0;
    }
    // 0x80280EB0: nop

    // 0x80280EB4: addiu       $at, $zero, 0x26B
    ctx->r1 = ADD32(0, 0X26B);
    // 0x80280EB8: bne         $t9, $at, L_80280ED4
    if (ctx->r25 != ctx->r1) {
        // 0x80280EBC: nop
    
            goto L_80280ED4;
    }
    // 0x80280EBC: nop

L_80280EC0:
    // 0x80280EC0: addiu       $t0, $zero, 0x261
    ctx->r8 = ADD32(0, 0X261);
    // 0x80280EC4: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    // 0x80280EC8: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80280ECC: b           L_80280EE4
    // 0x80280ED0: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
        goto L_80280EE4;
    // 0x80280ED0: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
L_80280ED4:
    // 0x80280ED4: addiu       $t2, $zero, 0x25E
    ctx->r10 = ADD32(0, 0X25E);
    // 0x80280ED8: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x80280EDC: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80280EE0: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
L_80280EE4:
    // 0x80280EE4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280EE8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280EEC: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80280EF0: nop

    // 0x80280EF4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80280EF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280EFC: jal         0x8001B62C
    // 0x80280F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80280F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280F04: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80280F08: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80280F0C: addiu       $t6, $t6, 0x6164
    ctx->r14 = ADD32(ctx->r14, 0X6164);
    // 0x80280F10: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80280F14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80280F18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280F20: jal         0x8001C0EC
    // 0x80280F24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80280F24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80280F28: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80280F2C: addiu       $t7, $t7, 0x6294
    ctx->r15 = ADD32(ctx->r15, 0X6294);
    // 0x80280F30: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80280F34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80280F38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280F40: jal         0x8001C0EC
    // 0x80280F44: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80280F44: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80280F48: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80280F4C: addiu       $at, $zero, 0x25E
    ctx->r1 = ADD32(0, 0X25E);
    // 0x80280F50: beq         $t8, $at, L_80280F64
    if (ctx->r24 == ctx->r1) {
        // 0x80280F54: nop
    
            goto L_80280F64;
    }
    // 0x80280F54: nop

    // 0x80280F58: addiu       $at, $zero, 0x261
    ctx->r1 = ADD32(0, 0X261);
    // 0x80280F5C: bne         $t8, $at, L_80280F7C
    if (ctx->r24 != ctx->r1) {
        // 0x80280F60: nop
    
            goto L_80280F7C;
    }
    // 0x80280F60: nop

L_80280F64:
    // 0x80280F64: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80280F68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280F6C: jal         0x8001B6BC
    // 0x80280F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x80280F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80280F74: b           L_80280FA4
    // 0x80280F78: nop

        goto L_80280FA4;
    // 0x80280F78: nop

L_80280F7C:
    // 0x80280F7C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80280F80: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80280F84: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280F88: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80280F8C: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80280F90: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280F94: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280F98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280F9C: nop

    // 0x80280FA0: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_80280FA4:
    // 0x80280FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280FA8: jal         0x8001B754
    // 0x80280FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x80280FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80280FB0: b           L_80280FB8
    // 0x80280FB4: nop

        goto L_80280FB8;
    // 0x80280FB4: nop

L_80280FB8:
    // 0x80280FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280FBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80280FC0: jr          $ra
    // 0x80280FC4: nop

    return;
    // 0x80280FC4: nop

;}
RECOMP_FUNC void func_8028290C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028290C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282914: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282918: jal         0x8001B62C
    // 0x8028291C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8028291C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282920: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282924: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80282928: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028292C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282930: nop

    // 0x80282934: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80282938: nop

    // 0x8028293C: bc1f        L_80282988
    if (!c1cs) {
        // 0x80282940: nop
    
            goto L_80282988;
    }
    // 0x80282940: nop

    // 0x80282944: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80282948: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028294C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282950: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80282954: nop

    // 0x80282958: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x8028295C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80282960: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80282964: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282968: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8028296C: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
    // 0x80282970: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282978: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8028297C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282980: jal         0x800178D4
    // 0x80282984: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282984: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80282988:
    // 0x80282988: jal         0x802808B8
    // 0x8028298C: nop

    func_802808B8_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x8028298C: nop

    after_2:
    // 0x80282990: b           L_80282998
    // 0x80282994: nop

        goto L_80282998;
    // 0x80282994: nop

L_80282998:
    // 0x80282998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028299C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802829A0: jr          $ra
    // 0x802829A4: nop

    return;
    // 0x802829A4: nop

;}
RECOMP_FUNC void func_80281160_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281168: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8028116C: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80281170: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281174: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281178: addiu       $t7, $zero, 0x264
    ctx->r15 = ADD32(0, 0X264);
    // 0x8028117C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80281180: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80281184: addiu       $t9, $t9, 0x6164
    ctx->r25 = ADD32(ctx->r25, 0X6164);
    // 0x80281188: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8028118C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281198: jal         0x8001C0EC
    // 0x8028119C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028119C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802811A0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802811A4: addiu       $t0, $t0, 0x6294
    ctx->r8 = ADD32(ctx->r8, 0X6294);
    // 0x802811A8: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x802811AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802811B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802811B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802811B8: jal         0x8001C0EC
    // 0x802811BC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802811BC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x802811C0: b           L_802811C8
    // 0x802811C4: nop

        goto L_802811C8;
    // 0x802811C4: nop

L_802811C8:
    // 0x802811C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802811CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802811D0: jr          $ra
    // 0x802811D4: nop

    return;
    // 0x802811D4: nop

;}
RECOMP_FUNC void func_802811D8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811D8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802811DC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802811E0: addiu       $t6, $zero, 0x265
    ctx->r14 = ADD32(0, 0X265);
    // 0x802811E4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802811E8: jr          $ra
    // 0x802811EC: nop

    return;
    // 0x802811EC: nop

    // 0x802811F0: jr          $ra
    // 0x802811F4: nop

    return;
    // 0x802811F4: nop

;}
RECOMP_FUNC void func_802829D0_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802829D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802829D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802829DC: jal         0x8001B62C
    // 0x802829E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x802829E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802829E4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802829E8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802829EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802829F0: nop

    // 0x802829F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802829F8: nop

    // 0x802829FC: bc1f        L_80282A3C
    if (!c1cs) {
        // 0x80282A00: nop
    
            goto L_80282A3C;
    }
    // 0x80282A00: nop

    // 0x80282A04: jal         0x8028066C
    // 0x80282A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_1;
    // 0x80282A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80282A0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282A14: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80282A18: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282A1C: jal         0x800178D4
    // 0x80282A20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282A20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282A24: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80282A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80282A2C: jal         0x8001FB3C
    // 0x80282A30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80282A30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80282A34: b           L_80282A4C
    // 0x80282A38: nop

        goto L_80282A4C;
    // 0x80282A38: nop

L_80282A3C:
    // 0x80282A3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80282A40: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x80282A44: jal         0x8028066C
    // 0x80282A48: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x80282A48: nop

    after_4:
L_80282A4C:
    // 0x80282A4C: b           L_80282A54
    // 0x80282A50: nop

        goto L_80282A54;
    // 0x80282A50: nop

L_80282A54:
    // 0x80282A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282A5C: jr          $ra
    // 0x80282A60: nop

    return;
    // 0x80282A60: nop

;}
RECOMP_FUNC void func_80281F48_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281F50: jal         0x80281860
    // 0x80281F54: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281F54: nop

    after_0:
    // 0x80281F58: beq         $v0, $zero, L_80281F68
    if (ctx->r2 == 0) {
        // 0x80281F5C: nop
    
            goto L_80281F68;
    }
    // 0x80281F5C: nop

    // 0x80281F60: b           L_80282050
    // 0x80281F64: nop

        goto L_80282050;
    // 0x80281F64: nop

L_80281F68:
    // 0x80281F68: jal         0x80085D54
    // 0x80281F6C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281F6C: nop

    after_1:
    // 0x80281F70: beq         $v0, $zero, L_80281F80
    if (ctx->r2 == 0) {
        // 0x80281F74: nop
    
            goto L_80281F80;
    }
    // 0x80281F74: nop

    // 0x80281F78: b           L_80282050
    // 0x80281F7C: nop

        goto L_80282050;
    // 0x80281F7C: nop

L_80281F80:
    // 0x80281F80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281F84: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80281F88: nop

    // 0x80281F8C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80281F90: bne         $t7, $zero, L_80281FA8
    if (ctx->r15 != 0) {
        // 0x80281F94: nop
    
            goto L_80281FA8;
    }
    // 0x80281F94: nop

    // 0x80281F98: jal         0x80280E6C
    // 0x80281F9C: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281F9C: nop

    after_2:
    // 0x80281FA0: b           L_80282050
    // 0x80281FA4: nop

        goto L_80282050;
    // 0x80281FA4: nop

L_80281FA8:
    // 0x80281FA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281FAC: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80281FB0: nop

    // 0x80281FB4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80281FB8: beq         $t9, $zero, L_80281FD0
    if (ctx->r25 == 0) {
        // 0x80281FBC: nop
    
            goto L_80281FD0;
    }
    // 0x80281FBC: nop

    // 0x80281FC0: jal         0x80280D2C
    // 0x80281FC4: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80281FC4: nop

    after_3:
    // 0x80281FC8: b           L_80282050
    // 0x80281FCC: nop

        goto L_80282050;
    // 0x80281FCC: nop

L_80281FD0:
    // 0x80281FD0: jal         0x80281A74
    // 0x80281FD4: nop

    func_80281A74_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x80281FD4: nop

    after_4:
    // 0x80281FD8: beq         $v0, $zero, L_80281FE8
    if (ctx->r2 == 0) {
        // 0x80281FDC: nop
    
            goto L_80281FE8;
    }
    // 0x80281FDC: nop

    // 0x80281FE0: b           L_80282050
    // 0x80281FE4: nop

        goto L_80282050;
    // 0x80281FE4: nop

L_80281FE8:
    // 0x80281FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281FEC: jal         0x8001B44C
    // 0x80281FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80281FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80281FF4: beq         $v0, $zero, L_80282048
    if (ctx->r2 == 0) {
        // 0x80281FF8: nop
    
            goto L_80282048;
    }
    // 0x80281FF8: nop

    // 0x80281FFC: jal         0x80280A20
    // 0x80282000: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_6;
    // 0x80282000: nop

    after_6:
    // 0x80282004: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282008: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028200C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282010: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80282014: nop

    // 0x80282018: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028201C: nop

    // 0x80282020: bc1f        L_80282040
    if (!c1cs) {
        // 0x80282024: nop
    
            goto L_80282040;
    }
    // 0x80282024: nop

    // 0x80282028: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028202C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282030: nop

    // 0x80282034: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80282038: nop

    // 0x8028203C: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
L_80282040:
    // 0x80282040: b           L_80282050
    // 0x80282044: nop

        goto L_80282050;
    // 0x80282044: nop

L_80282048:
    // 0x80282048: b           L_80282050
    // 0x8028204C: nop

        goto L_80282050;
    // 0x8028204C: nop

L_80282050:
    // 0x80282050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282058: jr          $ra
    // 0x8028205C: nop

    return;
    // 0x8028205C: nop

;}
RECOMP_FUNC void func_8028138C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028138C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281394: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281398: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028139C: addiu       $t6, $zero, 0x268
    ctx->r14 = ADD32(0, 0X268);
    // 0x802813A0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802813A4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802813A8: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x802813AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802813B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802813B8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x802813BC: jal         0x8001C0EC
    // 0x802813C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802813C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802813C4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802813C8: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x802813CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802813D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802813D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802813D8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x802813DC: jal         0x8001C0EC
    // 0x802813E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802813E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x802813E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813E8: jal         0x8001B754
    // 0x802813EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802813EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802813F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802813F4: jal         0x8001B754
    // 0x802813F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x802813F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802813FC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80281400: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281404: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028140C: nop

    // 0x80281410: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x80281414: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80281418: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x8028141C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281420: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80281424: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x80281428: b           L_80281430
    // 0x8028142C: nop

        goto L_80281430;
    // 0x8028142C: nop

L_80281430:
    // 0x80281430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281438: jr          $ra
    // 0x8028143C: nop

    return;
    // 0x8028143C: nop

;}
RECOMP_FUNC void func_80282B4C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282B4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B58: jal         0x8001B62C
    // 0x80282B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282B60: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282B64: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282B68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282B6C: nop

    // 0x80282B70: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80282B74: nop

    // 0x80282B78: bc1f        L_80282BA8
    if (!c1cs) {
        // 0x80282B7C: nop
    
            goto L_80282BA8;
    }
    // 0x80282B7C: nop

    // 0x80282B80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80282B8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282B90: jal         0x800178D4
    // 0x80282B94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282B94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80282B98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80282B9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80282BA0: jal         0x8001FB3C
    // 0x80282BA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80282BA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_80282BA8:
    // 0x80282BA8: jal         0x8028066C
    // 0x80282BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80282BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80282BB0: b           L_80282BB8
    // 0x80282BB4: nop

        goto L_80282BB8;
    // 0x80282BB4: nop

L_80282BB8:
    // 0x80282BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282BC0: jr          $ra
    // 0x80282BC4: nop

    return;
    // 0x80282BC4: nop

;}
RECOMP_FUNC void func_80282E64_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E70: jal         0x8001B62C
    // 0x80282E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282E78: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80282E7C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80282E80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282E84: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80282E88: nop

    // 0x80282E8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80282E90: nop

    // 0x80282E94: bc1f        L_80282EAC
    if (!c1cs) {
        // 0x80282E98: nop
    
            goto L_80282EAC;
    }
    // 0x80282E98: nop

    // 0x80282E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282EA4: jal         0x8001B6BC
    // 0x80282EA8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x80282EA8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_1:
L_80282EAC:
    // 0x80282EAC: jal         0x80280878
    // 0x80282EB0: nop

    func_80280878_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80282EB0: nop

    after_2:
    // 0x80282EB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282EB8: lw          $t6, -0x1ED8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1ED8);
    // 0x80282EBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80282EC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80282EC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80282EC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80282ECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80282ED0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80282ED4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80282ED8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80282EDC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282EE0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282EE4: jal         0x80015538
    // 0x80282EE8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80282EE8: nop

    after_3:
    // 0x80282EEC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282EF0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282EF4: nop

    // 0x80282EF8: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80282EFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80282F00: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x80282F04: jal         0x8028066C
    // 0x80282F08: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x80282F08: nop

    after_4:
    // 0x80282F0C: b           L_80282F14
    // 0x80282F10: nop

        goto L_80282F14;
    // 0x80282F10: nop

L_80282F14:
    // 0x80282F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282F1C: jr          $ra
    // 0x80282F20: nop

    return;
    // 0x80282F20: nop

;}
