#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80281800_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028180C: jal         0x8001B880
    // 0x80281810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281814: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80281818: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028181C: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80281820: nop

    // 0x80281824: beq         $t6, $zero, L_80281838
    if (ctx->r14 == 0) {
        // 0x80281828: nop
    
            goto L_80281838;
    }
    // 0x80281828: nop

    // 0x8028182C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80281830: b           L_80281840
    // 0x80281834: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80281840;
    // 0x80281834: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80281838:
    // 0x80281838: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8028183C: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80281840:
    // 0x80281840: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80281844: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80281848: nop

    // 0x8028184C: beq         $t9, $t0, L_80281874
    if (ctx->r25 == ctx->r8) {
        // 0x80281850: nop
    
            goto L_80281874;
    }
    // 0x80281850: nop

    // 0x80281854: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80281858: addiu       $t1, $t1, 0x5CF8
    ctx->r9 = ADD32(ctx->r9, 0X5CF8);
    // 0x8028185C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281860: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80281864: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281868: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028186C: jal         0x8001C0EC
    // 0x80281870: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281870: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80281874:
    // 0x80281874: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281878: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028187C: addiu       $t2, $zero, 0x66
    ctx->r10 = ADD32(0, 0X66);
    // 0x80281880: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281884: b           L_8028188C
    // 0x80281888: nop

        goto L_8028188C;
    // 0x80281888: nop

L_8028188C:
    // 0x8028188C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281894: jr          $ra
    // 0x80281898: nop

    return;
    // 0x80281898: nop

;}
RECOMP_FUNC void func_802813C0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802813C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802813C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802813C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813CC: lwc1        $f4, -0x1C98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C98);
    // 0x802813D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802813D4: nop

    // 0x802813D8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802813DC: nop

    // 0x802813E0: bc1t        L_802814C8
    if (c1cs) {
        // 0x802813E4: nop
    
            goto L_802814C8;
    }
    // 0x802813E4: nop

    // 0x802813E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813EC: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802813F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802813F4: nop

    // 0x802813F8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802813FC: nop

    // 0x80281400: bc1f        L_80281468
    if (!c1cs) {
        // 0x80281404: nop
    
            goto L_80281468;
    }
    // 0x80281404: nop

    // 0x80281408: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028140C: lb          $t6, -0x1C84($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C84);
    // 0x80281410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80281414: bne         $t6, $at, L_8028142C
    if (ctx->r14 != ctx->r1) {
        // 0x80281418: nop
    
            goto L_8028142C;
    }
    // 0x80281418: nop

    // 0x8028141C: jal         0x80280BA0
    // 0x80281420: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80281420: nop

    after_0:
    // 0x80281424: b           L_80281460
    // 0x80281428: nop

        goto L_80281460;
    // 0x80281428: nop

L_8028142C:
    // 0x8028142C: jal         0x80280CA0
    // 0x80281430: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80281430: nop

    after_1:
    // 0x80281434: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281438: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x8028143C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281440: nop

    // 0x80281444: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80281448: nop

    // 0x8028144C: bc1f        L_80281460
    if (!c1cs) {
        // 0x80281450: nop
    
            goto L_80281460;
    }
    // 0x80281450: nop

    // 0x80281454: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80281458: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028145C: sb          $t7, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r15;
L_80281460:
    // 0x80281460: b           L_802814C0
    // 0x80281464: nop

        goto L_802814C0;
    // 0x80281464: nop

L_80281468:
    // 0x80281468: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028146C: lb          $t8, -0x1C84($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C84);
    // 0x80281470: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80281474: bne         $t8, $at, L_8028148C
    if (ctx->r24 != ctx->r1) {
        // 0x80281478: nop
    
            goto L_8028148C;
    }
    // 0x80281478: nop

    // 0x8028147C: jal         0x80280BA0
    // 0x80281480: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80281480: nop

    after_2:
    // 0x80281484: b           L_802814C0
    // 0x80281488: nop

        goto L_802814C0;
    // 0x80281488: nop

L_8028148C:
    // 0x8028148C: jal         0x80280CA0
    // 0x80281490: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80281490: nop

    after_3:
    // 0x80281494: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281498: lwc1        $f4, -0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x8028149C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802814A0: nop

    // 0x802814A4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802814A8: nop

    // 0x802814AC: bc1f        L_802814C0
    if (!c1cs) {
        // 0x802814B0: nop
    
            goto L_802814C0;
    }
    // 0x802814B0: nop

    // 0x802814B4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802814B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814BC: sb          $t9, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r25;
L_802814C0:
    // 0x802814C0: b           L_802814D0
    // 0x802814C4: nop

        goto L_802814D0;
    // 0x802814C4: nop

L_802814C8:
    // 0x802814C8: jal         0x80280BA0
    // 0x802814CC: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x802814CC: nop

    after_4:
L_802814D0:
    // 0x802814D0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802814D4: lb          $t0, -0x1C84($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C84);
    // 0x802814D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814DC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802814E0: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x802814E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802814E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802814EC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802814F0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802814F4: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x802814F8: b           L_80281500
    // 0x802814FC: nop

        goto L_80281500;
    // 0x802814FC: nop

L_80281500:
    // 0x80281500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281508: jr          $ra
    // 0x8028150C: nop

    return;
    // 0x8028150C: nop

;}
RECOMP_FUNC void func_80280EF4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280EF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280EF8: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280EFC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280F00: lwc1        $f9, 0x3EA8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3EA8);
    // 0x80280F04: lwc1        $f8, 0x3EAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3EAC);
    // 0x80280F08: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280F0C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280F10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F14: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280F18: swc1        $f16, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f16.u32l;
    // 0x80280F1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F20: lwc1        $f18, -0x1C70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280F24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280F28: nop

    // 0x80280F2C: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280F30: nop

    // 0x80280F34: bc1f        L_80280F48
    if (!c1cs) {
        // 0x80280F38: nop
    
            goto L_80280F48;
    }
    // 0x80280F38: nop

    // 0x80280F3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280F40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F44: swc1        $f6, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f6.u32l;
L_80280F48:
    // 0x80280F48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F4C: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280F50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280F54: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280F58: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80280F5C: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x80280F60: jr          $ra
    // 0x80280F64: nop

    return;
    // 0x80280F64: nop

    // 0x80280F68: jr          $ra
    // 0x80280F6C: nop

    return;
    // 0x80280F6C: nop

;}
RECOMP_FUNC void func_80280D04_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280D04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280D08: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80280D0C: nop

    // 0x80280D10: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80280D14: beq         $t7, $zero, L_80280D80
    if (ctx->r15 == 0) {
        // 0x80280D18: nop
    
            goto L_80280D80;
    }
    // 0x80280D18: nop

    // 0x80280D1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D20: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280D24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280D28: lwc1        $f9, 0x3E88($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E88);
    // 0x80280D2C: lwc1        $f8, 0x3E8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E8C);
    // 0x80280D30: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280D34: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80280D38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D3C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280D40: swc1        $f16, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f16.u32l;
    // 0x80280D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D48: lwc1        $f18, -0x1C70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280D4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280D50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280D54: nop

    // 0x80280D58: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80280D5C: nop

    // 0x80280D60: bc1f        L_80280D78
    if (!c1cs) {
        // 0x80280D64: nop
    
            goto L_80280D78;
    }
    // 0x80280D64: nop

    // 0x80280D68: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280D6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280D70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D74: swc1        $f6, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f6.u32l;
L_80280D78:
    // 0x80280D78: b           L_80280DD4
    // 0x80280D7C: nop

        goto L_80280DD4;
    // 0x80280D7C: nop

L_80280D80:
    // 0x80280D80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D84: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280D88: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280D8C: lwc1        $f17, 0x3E90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3E90);
    // 0x80280D90: lwc1        $f16, 0x3E94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3E94);
    // 0x80280D94: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80280D98: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80280D9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DA0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80280DA4: swc1        $f4, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f4.u32l;
    // 0x80280DA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DAC: lwc1        $f6, -0x1C70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280DB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280DB4: nop

    // 0x80280DB8: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80280DBC: nop

    // 0x80280DC0: bc1f        L_80280DD4
    if (!c1cs) {
        // 0x80280DC4: nop
    
            goto L_80280DD4;
    }
    // 0x80280DC4: nop

    // 0x80280DC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280DCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DD0: swc1        $f10, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f10.u32l;
L_80280DD4:
    // 0x80280DD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DD8: lwc1        $f16, -0x1C70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280DDC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280DE0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280DE4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80280DE8: swc1        $f18, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f18.u32l;
    // 0x80280DEC: jr          $ra
    // 0x80280DF0: nop

    return;
    // 0x80280DF0: nop

    // 0x80280DF4: jr          $ra
    // 0x80280DF8: nop

    return;
    // 0x80280DF8: nop

;}
RECOMP_FUNC void func_80281660_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028166C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281670: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281674: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281678: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028167C: lwc1        $f9, 0x3EC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3EC8);
    // 0x80281680: lwc1        $f8, 0x3ECC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3ECC);
    // 0x80281684: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80281688: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8028168C: jal         0x80034970
    // 0x80281690: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80281690: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80281694: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281698: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028169C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802816A4: swc1        $f18, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f18.u32l;
    // 0x802816A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816AC: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x802816B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802816B4: nop

    // 0x802816B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802816BC: nop

    // 0x802816C0: bc1f        L_802816DC
    if (!c1cs) {
        // 0x802816C4: nop
    
            goto L_802816DC;
    }
    // 0x802816C4: nop

    // 0x802816C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816CC: lwc1        $f8, -0x1C80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x802816D0: nop

    // 0x802816D4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802816D8: swc1        $f10, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f10.u32l;
L_802816DC:
    // 0x802816DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802816E0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802816E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802816E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802816EC: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x802816F0: nop

    // 0x802816F4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802816F8: nop

    // 0x802816FC: bc1f        L_80281714
    if (!c1cs) {
        // 0x80281700: nop
    
            goto L_80281714;
    }
    // 0x80281700: nop

    // 0x80281704: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80281708: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028170C: b           L_80281720
    // 0x80281710: sb          $t8, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r24;
        goto L_80281720;
    // 0x80281710: sb          $t8, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r24;
L_80281714:
    // 0x80281714: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80281718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028171C: sb          $t9, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r25;
L_80281720:
    // 0x80281720: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80281724: nop

    // 0x80281728: beq         $t0, $zero, L_80281744
    if (ctx->r8 == 0) {
        // 0x8028172C: nop
    
            goto L_80281744;
    }
    // 0x8028172C: nop

    // 0x80281730: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281734: lb          $t1, -0x1C88($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C88);
    // 0x80281738: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028173C: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x80281740: sb          $t2, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r10;
L_80281744:
    // 0x80281744: b           L_8028174C
    // 0x80281748: nop

        goto L_8028174C;
    // 0x80281748: nop

L_8028174C:
    // 0x8028174C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281754: jr          $ra
    // 0x80281758: nop

    return;
    // 0x80281758: nop

;}
RECOMP_FUNC void func_802830D4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802830D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802830D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802830DC: jal         0x80280D04
    // 0x802830E0: nop

    func_80280D04_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802830E0: nop

    after_0:
    // 0x802830E4: jal         0x80281184
    // 0x802830E8: nop

    func_80281184_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x802830E8: nop

    after_1:
    // 0x802830EC: jal         0x802813C0
    // 0x802830F0: nop

    func_802813C0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x802830F0: nop

    after_2:
    // 0x802830F4: jal         0x802807D4
    // 0x802830F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x802830F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x802830FC: jal         0x802805D8
    // 0x80283100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80283104: jal         0x802802EC
    // 0x80283108: nop

    func_802802EC_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80283108: nop

    after_5:
    // 0x8028310C: b           L_80283114
    // 0x80283110: nop

        goto L_80283114;
    // 0x80283110: nop

L_80283114:
    // 0x80283114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028311C: jr          $ra
    // 0x80283120: nop

    return;
    // 0x80283120: nop

;}
RECOMP_FUNC void func_80282D30_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282D38: jal         0x802825C4
    // 0x80282D3C: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282D3C: nop

    after_0:
    // 0x80282D40: beq         $v0, $zero, L_80282D50
    if (ctx->r2 == 0) {
        // 0x80282D44: nop
    
            goto L_80282D50;
    }
    // 0x80282D44: nop

    // 0x80282D48: b           L_80282E50
    // 0x80282D4C: nop

        goto L_80282E50;
    // 0x80282D4C: nop

L_80282D50:
    // 0x80282D50: jal         0x80085D54
    // 0x80282D54: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282D54: nop

    after_1:
    // 0x80282D58: beq         $v0, $zero, L_80282D68
    if (ctx->r2 == 0) {
        // 0x80282D5C: nop
    
            goto L_80282D68;
    }
    // 0x80282D5C: nop

    // 0x80282D60: b           L_80282E50
    // 0x80282D64: nop

        goto L_80282E50;
    // 0x80282D64: nop

L_80282D68:
    // 0x80282D68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282D6C: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80282D70: nop

    // 0x80282D74: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282D78: beq         $t7, $zero, L_80282D90
    if (ctx->r15 == 0) {
        // 0x80282D7C: nop
    
            goto L_80282D90;
    }
    // 0x80282D7C: nop

    // 0x80282D80: jal         0x80281C68
    // 0x80282D84: nop

    func_80281C68_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282D84: nop

    after_2:
    // 0x80282D88: b           L_80282E50
    // 0x80282D8C: nop

        goto L_80282E50;
    // 0x80282D8C: nop

L_80282D90:
    // 0x80282D90: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282D94: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x80282D98: nop

    // 0x80282D9C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80282DA0: beq         $t9, $zero, L_80282DF8
    if (ctx->r25 == 0) {
        // 0x80282DA4: nop
    
            goto L_80282DF8;
    }
    // 0x80282DA4: nop

    // 0x80282DA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282DAC: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80282DB0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80282DB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282DB8: nop

    // 0x80282DBC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80282DC0: nop

    // 0x80282DC4: bc1f        L_80282DF8
    if (!c1cs) {
        // 0x80282DC8: nop
    
            goto L_80282DF8;
    }
    // 0x80282DC8: nop

    // 0x80282DCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282DD0: jal         0x8001B44C
    // 0x80282DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80282DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80282DD8: beq         $v0, $zero, L_80282DF8
    if (ctx->r2 == 0) {
        // 0x80282DDC: nop
    
            goto L_80282DF8;
    }
    // 0x80282DDC: nop

    // 0x80282DE0: jal         0x8028189C
    // 0x80282DE4: nop

    func_8028189C_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282DE4: nop

    after_4:
    // 0x80282DE8: jal         0x80281660
    // 0x80282DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281660_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80282DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80282DF0: b           L_80282E50
    // 0x80282DF4: nop

        goto L_80282E50;
    // 0x80282DF4: nop

L_80282DF8:
    // 0x80282DF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282DFC: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80282E00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80282E04: nop

    // 0x80282E08: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80282E0C: nop

    // 0x80282E10: bc1f        L_80282E28
    if (!c1cs) {
        // 0x80282E14: nop
    
            goto L_80282E28;
    }
    // 0x80282E14: nop

    // 0x80282E18: jal         0x8028175C
    // 0x80282E1C: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80282E1C: nop

    after_6:
    // 0x80282E20: b           L_80282E50
    // 0x80282E24: nop

        goto L_80282E50;
    // 0x80282E24: nop

L_80282E28:
    // 0x80282E28: jal         0x802822E0
    // 0x80282E2C: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x80282E2C: nop

    after_7:
    // 0x80282E30: beq         $v0, $zero, L_80282E40
    if (ctx->r2 == 0) {
        // 0x80282E34: nop
    
            goto L_80282E40;
    }
    // 0x80282E34: nop

    // 0x80282E38: b           L_80282E50
    // 0x80282E3C: nop

        goto L_80282E50;
    // 0x80282E3C: nop

L_80282E40:
    // 0x80282E40: jal         0x80281DAC
    // 0x80282E44: nop

    func_80281DAC_code_extra_1(rdram, ctx);
        goto after_8;
    // 0x80282E44: nop

    after_8:
    // 0x80282E48: b           L_80282E50
    // 0x80282E4C: nop

        goto L_80282E50;
    // 0x80282E4C: nop

L_80282E50:
    // 0x80282E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282E58: jr          $ra
    // 0x80282E5C: nop

    return;
    // 0x80282E5C: nop

;}
RECOMP_FUNC void func_802836F8_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802836F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802836FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283700: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80283704: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80283708: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028370C: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x80283710: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80283714: addiu       $t7, $t6, 0xA
    ctx->r15 = ADD32(ctx->r14, 0XA);
    // 0x80283718: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8028371C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80283720: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80283724: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283728: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028372C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80283730: swc1        $f10, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
    // 0x80283734: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283738: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028373C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80283740: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80283744: lwc1        $f16, 0xC($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80283748: nop

    // 0x8028374C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80283750: nop

    // 0x80283754: bc1f        L_80283774
    if (!c1cs) {
        // 0x80283758: nop
    
            goto L_80283774;
    }
    // 0x80283758: nop

    // 0x8028375C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80283760: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283764: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028376C: nop

    // 0x80283770: swc1        $f4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f4.u32l;
L_80283774:
    // 0x80283774: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283778: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028377C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283780: lwc1        $f20, 0xC($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80283784: nop

    // 0x80283788: swc1        $f20, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f20.u32l;
    // 0x8028378C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283790: nop

    // 0x80283794: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x80283798: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028379C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802837A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802837A4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802837A8: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
    // 0x802837AC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802837B0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802837B4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x802837B8: nop

    // 0x802837BC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x802837C0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802837C4: nop

    // 0x802837C8: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x802837CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802837D0: lb          $t6, -0x1DD8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1DD8);
    // 0x802837D4: nop

    // 0x802837D8: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x802837DC: bne         $t7, $zero, L_802838C0
    if (ctx->r15 != 0) {
        // 0x802837E0: nop
    
            goto L_802838C0;
    }
    // 0x802837E0: nop

    // 0x802837E4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802837E8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802837EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802837F0: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x802837F4: lwc1        $f17, 0x3F08($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3F08);
    // 0x802837F8: lwc1        $f16, 0x3F0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3F0C);
    // 0x802837FC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80283800: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80283804: jal         0x80034970
    // 0x80283808: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80283808: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x8028380C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80283810: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283814: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283818: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028381C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283820: nop

    // 0x80283824: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80283828: nop

    // 0x8028382C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80283830: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80283834: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283838: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028383C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283840: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80283844: lwc1        $f5, 0x3F10($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X3F10);
    // 0x80283848: lwc1        $f4, 0x3F14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F14);
    // 0x8028384C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80283850: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80283854: jal         0x80034970
    // 0x80283858: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80283858: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x8028385C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80283860: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80283864: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283868: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8028386C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283870: nop

    // 0x80283874: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80283878: nop

    // 0x8028387C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80283880: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80283884: jal         0x80014E80
    // 0x80283888: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80283888: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_2:
    // 0x8028388C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80283890: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283894: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283898: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028389C: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x802838A0: nop

    // 0x802838A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802838A8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802838AC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802838B0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802838B4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802838B8: jal         0x80081468
    // 0x802838BC: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    func_80081468(rdram, ctx);
        goto after_3;
    // 0x802838BC: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    after_3:
L_802838C0:
    // 0x802838C0: b           L_802838C8
    // 0x802838C4: nop

        goto L_802838C8;
    // 0x802838C4: nop

L_802838C8:
    // 0x802838C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802838CC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802838D0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802838D4: jr          $ra
    // 0x802838D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802838D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802809D8_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802809D8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802809DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802809E0: lwc1        $f4, -0x1CA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1CA8);
    // 0x802809E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802809E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802809EC: nop

    // 0x802809F0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802809F4: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x802809F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802809FC: lwc1        $f10, -0x1C80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280A00: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280A04: nop

    // 0x80280A08: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80280A0C: nop

    // 0x80280A10: bc1f        L_80280A74
    if (!c1cs) {
        // 0x80280A14: nop
    
            goto L_80280A74;
    }
    // 0x80280A14: nop

    // 0x80280A18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A1C: lwc1        $f18, -0x1C80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280A20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280A24: lwc1        $f7, 0x3E50($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3E50);
    // 0x80280A28: lwc1        $f6, 0x3E54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3E54);
    // 0x80280A2C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80280A30: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80280A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80280A3C: swc1        $f10, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f10.u32l;
    // 0x80280A40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A44: lwc1        $f16, -0x1C80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280A48: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280A4C: nop

    // 0x80280A50: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80280A54: nop

    // 0x80280A58: bc1f        L_80280A6C
    if (!c1cs) {
        // 0x80280A5C: nop
    
            goto L_80280A6C;
    }
    // 0x80280A5C: nop

    // 0x80280A60: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A68: swc1        $f4, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f4.u32l;
L_80280A6C:
    // 0x80280A6C: b           L_80280AC8
    // 0x80280A70: nop

        goto L_80280AC8;
    // 0x80280A70: nop

L_80280A74:
    // 0x80280A74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A78: lwc1        $f6, -0x1C80($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280A7C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280A80: lwc1        $f11, 0x3E58($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3E58);
    // 0x80280A84: lwc1        $f10, 0x3E5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3E5C);
    // 0x80280A88: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280A8C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80280A90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A94: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280A98: swc1        $f18, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f18.u32l;
    // 0x80280A9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AA0: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280AA4: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280AA8: nop

    // 0x80280AAC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280AB0: nop

    // 0x80280AB4: bc1f        L_80280AC8
    if (!c1cs) {
        // 0x80280AB8: nop
    
            goto L_80280AC8;
    }
    // 0x80280AB8: nop

    // 0x80280ABC: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AC4: swc1        $f8, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f8.u32l;
L_80280AC8:
    // 0x80280AC8: b           L_80280AD0
    // 0x80280ACC: nop

        goto L_80280AD0;
    // 0x80280ACC: nop

L_80280AD0:
    // 0x80280AD0: jr          $ra
    // 0x80280AD4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280AD4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80282908_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028290C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282910: jal         0x802825C4
    // 0x80282914: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282914: nop

    after_0:
    // 0x80282918: beq         $v0, $zero, L_80282928
    if (ctx->r2 == 0) {
        // 0x8028291C: nop
    
            goto L_80282928;
    }
    // 0x8028291C: nop

    // 0x80282920: b           L_802829DC
    // 0x80282924: nop

        goto L_802829DC;
    // 0x80282924: nop

L_80282928:
    // 0x80282928: jal         0x80085D54
    // 0x8028292C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028292C: nop

    after_1:
    // 0x80282930: beq         $v0, $zero, L_80282940
    if (ctx->r2 == 0) {
        // 0x80282934: nop
    
            goto L_80282940;
    }
    // 0x80282934: nop

    // 0x80282938: b           L_802829DC
    // 0x8028293C: nop

        goto L_802829DC;
    // 0x8028293C: nop

L_80282940:
    // 0x80282940: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282944: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80282948: nop

    // 0x8028294C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282950: beq         $t7, $zero, L_80282968
    if (ctx->r15 == 0) {
        // 0x80282954: nop
    
            goto L_80282968;
    }
    // 0x80282954: nop

    // 0x80282958: jal         0x80281B24
    // 0x8028295C: nop

    func_80281B24_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x8028295C: nop

    after_2:
    // 0x80282960: b           L_802829DC
    // 0x80282964: nop

        goto L_802829DC;
    // 0x80282964: nop

L_80282968:
    // 0x80282968: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028296C: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x80282970: nop

    // 0x80282974: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80282978: bne         $t9, $zero, L_80282990
    if (ctx->r25 != 0) {
        // 0x8028297C: nop
    
            goto L_80282990;
    }
    // 0x8028297C: nop

    // 0x80282980: jal         0x802819E0
    // 0x80282984: nop

    func_802819E0_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80282984: nop

    after_3:
    // 0x80282988: b           L_802829DC
    // 0x8028298C: nop

        goto L_802829DC;
    // 0x8028298C: nop

L_80282990:
    // 0x80282990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282994: jal         0x8001B44C
    // 0x80282998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80282998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8028299C: beq         $v0, $zero, L_802829B4
    if (ctx->r2 == 0) {
        // 0x802829A0: nop
    
            goto L_802829B4;
    }
    // 0x802829A0: nop

    // 0x802829A4: jal         0x80281800
    // 0x802829A8: nop

    func_80281800_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x802829A8: nop

    after_5:
    // 0x802829AC: b           L_802829DC
    // 0x802829B0: nop

        goto L_802829DC;
    // 0x802829B0: nop

L_802829B4:
    // 0x802829B4: jal         0x802822E0
    // 0x802829B8: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x802829B8: nop

    after_6:
    // 0x802829BC: beq         $v0, $zero, L_802829CC
    if (ctx->r2 == 0) {
        // 0x802829C0: nop
    
            goto L_802829CC;
    }
    // 0x802829C0: nop

    // 0x802829C4: b           L_802829DC
    // 0x802829C8: nop

        goto L_802829DC;
    // 0x802829C8: nop

L_802829CC:
    // 0x802829CC: jal         0x8028189C
    // 0x802829D0: nop

    func_8028189C_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x802829D0: nop

    after_7:
    // 0x802829D4: b           L_802829DC
    // 0x802829D8: nop

        goto L_802829DC;
    // 0x802829D8: nop

L_802829DC:
    // 0x802829DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802829E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802829E4: jr          $ra
    // 0x802829E8: nop

    return;
    // 0x802829E8: nop

;}
RECOMP_FUNC void func_80283020_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283028: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028302C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283030: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80283034: nop

    // 0x80283038: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x8028303C: jal         0x802810EC
    // 0x80283040: nop

    func_802810EC_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283040: nop

    after_0:
    // 0x80283044: jal         0x802812D4
    // 0x80283048: nop

    func_802812D4_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283048: nop

    after_1:
    // 0x8028304C: jal         0x802807D4
    // 0x80283050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80283054: jal         0x802805D8
    // 0x80283058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80283058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8028305C: jal         0x802803A4
    // 0x80283060: nop

    func_802803A4_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283060: nop

    after_4:
    // 0x80283064: b           L_8028306C
    // 0x80283068: nop

        goto L_8028306C;
    // 0x80283068: nop

L_8028306C:
    // 0x8028306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283074: jr          $ra
    // 0x80283078: nop

    return;
    // 0x80283078: nop

;}
RECOMP_FUNC void func_80282AE4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282AEC: jal         0x802825C4
    // 0x80282AF0: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282AF0: nop

    after_0:
    // 0x80282AF4: beq         $v0, $zero, L_80282B04
    if (ctx->r2 == 0) {
        // 0x80282AF8: nop
    
            goto L_80282B04;
    }
    // 0x80282AF8: nop

    // 0x80282AFC: b           L_80282B88
    // 0x80282B00: nop

        goto L_80282B88;
    // 0x80282B00: nop

L_80282B04:
    // 0x80282B04: jal         0x80085D54
    // 0x80282B08: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282B08: nop

    after_1:
    // 0x80282B0C: beq         $v0, $zero, L_80282B1C
    if (ctx->r2 == 0) {
        // 0x80282B10: nop
    
            goto L_80282B1C;
    }
    // 0x80282B10: nop

    // 0x80282B14: b           L_80282B88
    // 0x80282B18: nop

        goto L_80282B88;
    // 0x80282B18: nop

L_80282B1C:
    // 0x80282B1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B20: jal         0x8001B44C
    // 0x80282B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80282B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80282B28: beq         $v0, $zero, L_80282B80
    if (ctx->r2 == 0) {
        // 0x80282B2C: nop
    
            goto L_80282B80;
    }
    // 0x80282B2C: nop

    // 0x80282B30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282B34: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80282B38: nop

    // 0x80282B3C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282B40: beq         $t7, $zero, L_80282B68
    if (ctx->r15 == 0) {
        // 0x80282B44: nop
    
            goto L_80282B68;
    }
    // 0x80282B44: nop

    // 0x80282B48: jal         0x80281BCC
    // 0x80282B4C: nop

    func_80281BCC_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80282B4C: nop

    after_3:
    // 0x80282B50: jal         0x80281660
    // 0x80282B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80281660_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80282B58: b           L_80282B88
    // 0x80282B5C: nop

        goto L_80282B88;
    // 0x80282B5C: nop

    // 0x80282B60: b           L_80282B80
    // 0x80282B64: nop

        goto L_80282B80;
    // 0x80282B64: nop

L_80282B68:
    // 0x80282B68: jal         0x80281DAC
    // 0x80282B6C: nop

    func_80281DAC_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80282B6C: nop

    after_5:
    // 0x80282B70: jal         0x80281660
    // 0x80282B74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80281660_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80282B74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80282B78: b           L_80282B88
    // 0x80282B7C: nop

        goto L_80282B88;
    // 0x80282B7C: nop

L_80282B80:
    // 0x80282B80: b           L_80282B88
    // 0x80282B84: nop

        goto L_80282B88;
    // 0x80282B84: nop

L_80282B88:
    // 0x80282B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282B90: jr          $ra
    // 0x80282B94: nop

    return;
    // 0x80282B94: nop

;}
RECOMP_FUNC void func_80281DAC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281DAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80281DB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80281DB4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80281DB8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80281DBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281DC0: jal         0x8001B880
    // 0x80281DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281DC8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80281DCC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80281DD0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80281DD4: beq         $t6, $at, L_80281DE8
    if (ctx->r14 == ctx->r1) {
        // 0x80281DD8: nop
    
            goto L_80281DE8;
    }
    // 0x80281DD8: nop

    // 0x80281DDC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80281DE0: bne         $t6, $at, L_80281DFC
    if (ctx->r14 != ctx->r1) {
        // 0x80281DE4: nop
    
            goto L_80281DFC;
    }
    // 0x80281DE4: nop

L_80281DE8:
    // 0x80281DE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281DEC: jal         0x8001B62C
    // 0x80281DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80281DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281DF4: b           L_80281E4C
    // 0x80281DF8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_80281E4C;
    // 0x80281DF8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_80281DFC:
    // 0x80281DFC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80281E00: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80281E04: beq         $t7, $at, L_80281E18
    if (ctx->r15 == ctx->r1) {
        // 0x80281E08: nop
    
            goto L_80281E18;
    }
    // 0x80281E08: nop

    // 0x80281E0C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80281E10: bne         $t7, $at, L_80281E40
    if (ctx->r15 != ctx->r1) {
        // 0x80281E14: nop
    
            goto L_80281E40;
    }
    // 0x80281E14: nop

L_80281E18:
    // 0x80281E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281E1C: jal         0x8001B580
    // 0x80281E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80281E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281E24: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80281E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281E2C: jal         0x8001B62C
    // 0x80281E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80281E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281E34: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x80281E38: b           L_80281E4C
    // 0x80281E3C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
        goto L_80281E4C;
    // 0x80281E3C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_80281E40:
    // 0x80281E40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281E44: nop

    // 0x80281E48: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_80281E4C:
    // 0x80281E4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281E50: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80281E54: nop

    // 0x80281E58: beq         $t8, $zero, L_80281E6C
    if (ctx->r24 == 0) {
        // 0x80281E5C: nop
    
            goto L_80281E6C;
    }
    // 0x80281E5C: nop

    // 0x80281E60: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80281E64: b           L_80281E74
    // 0x80281E68: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
        goto L_80281E74;
    // 0x80281E68: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_80281E6C:
    // 0x80281E6C: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80281E70: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
L_80281E74:
    // 0x80281E74: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x80281E78: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80281E7C: nop

    // 0x80281E80: beq         $t1, $t2, L_80281EC4
    if (ctx->r9 == ctx->r10) {
        // 0x80281E84: nop
    
            goto L_80281EC4;
    }
    // 0x80281E84: nop

    // 0x80281E88: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80281E8C: addiu       $t3, $t3, 0x5CF8
    ctx->r11 = ADD32(ctx->r11, 0X5CF8);
    // 0x80281E90: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80281E94: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80281E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281EA0: jal         0x8001C0EC
    // 0x80281EA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80281EA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80281EA8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80281EAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281EB0: jal         0x8001B6BC
    // 0x80281EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_5;
    // 0x80281EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80281EB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281EBC: jal         0x8001B754
    // 0x80281EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x80281EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80281EC4:
    // 0x80281EC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281EC8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281ECC: addiu       $t4, $zero, 0x6C
    ctx->r12 = ADD32(0, 0X6C);
    // 0x80281ED0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80281ED4: b           L_80281EDC
    // 0x80281ED8: nop

        goto L_80281EDC;
    // 0x80281ED8: nop

L_80281EDC:
    // 0x80281EDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80281EE0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80281EE4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281EE8: jr          $ra
    // 0x80281EEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80281EEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80281184_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028118C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281190: lwc1        $f4, -0x1CA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1CA8);
    // 0x80281194: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281198: nop

    // 0x8028119C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802811A0: nop

    // 0x802811A4: bc1t        L_8028128C
    if (c1cs) {
        // 0x802811A8: nop
    
            goto L_8028128C;
    }
    // 0x802811A8: nop

    // 0x802811AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802811B0: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802811B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802811B8: nop

    // 0x802811BC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802811C0: nop

    // 0x802811C4: bc1f        L_8028122C
    if (!c1cs) {
        // 0x802811C8: nop
    
            goto L_8028122C;
    }
    // 0x802811C8: nop

    // 0x802811CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802811D0: lb          $t6, -0x1C88($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C88);
    // 0x802811D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802811D8: bne         $t6, $at, L_802811F0
    if (ctx->r14 != ctx->r1) {
        // 0x802811DC: nop
    
            goto L_802811F0;
    }
    // 0x802811DC: nop

    // 0x802811E0: jal         0x802809D8
    // 0x802811E4: nop

    func_802809D8_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802811E4: nop

    after_0:
    // 0x802811E8: b           L_80281224
    // 0x802811EC: nop

        goto L_80281224;
    // 0x802811EC: nop

L_802811F0:
    // 0x802811F0: jal         0x80280AD8
    // 0x802811F4: nop

    func_80280AD8_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x802811F4: nop

    after_1:
    // 0x802811F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802811FC: lwc1        $f16, -0x1C80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80281200: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281204: nop

    // 0x80281208: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8028120C: nop

    // 0x80281210: bc1f        L_80281224
    if (!c1cs) {
        // 0x80281214: nop
    
            goto L_80281224;
    }
    // 0x80281214: nop

    // 0x80281218: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028121C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281220: sb          $t7, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r15;
L_80281224:
    // 0x80281224: b           L_80281284
    // 0x80281228: nop

        goto L_80281284;
    // 0x80281228: nop

L_8028122C:
    // 0x8028122C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281230: lb          $t8, -0x1C88($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C88);
    // 0x80281234: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80281238: bne         $t8, $at, L_80281250
    if (ctx->r24 != ctx->r1) {
        // 0x8028123C: nop
    
            goto L_80281250;
    }
    // 0x8028123C: nop

    // 0x80281240: jal         0x802809D8
    // 0x80281244: nop

    func_802809D8_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80281244: nop

    after_2:
    // 0x80281248: b           L_80281284
    // 0x8028124C: nop

        goto L_80281284;
    // 0x8028124C: nop

L_80281250:
    // 0x80281250: jal         0x80280AD8
    // 0x80281254: nop

    func_80280AD8_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80281254: nop

    after_3:
    // 0x80281258: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028125C: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80281260: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281264: nop

    // 0x80281268: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028126C: nop

    // 0x80281270: bc1f        L_80281284
    if (!c1cs) {
        // 0x80281274: nop
    
            goto L_80281284;
    }
    // 0x80281274: nop

    // 0x80281278: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8028127C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281280: sb          $t9, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = ctx->r25;
L_80281284:
    // 0x80281284: b           L_80281294
    // 0x80281288: nop

        goto L_80281294;
    // 0x80281288: nop

L_8028128C:
    // 0x8028128C: jal         0x802809D8
    // 0x80281290: nop

    func_802809D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80281290: nop

    after_4:
L_80281294:
    // 0x80281294: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281298: lb          $t0, -0x1C88($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C88);
    // 0x8028129C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802812A0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802812A4: lwc1        $f16, -0x1C80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x802812A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802812AC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802812B0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802812B4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802812B8: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x802812BC: b           L_802812C4
    // 0x802812C0: nop

        goto L_802812C4;
    // 0x802812C0: nop

L_802812C4:
    // 0x802812C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802812C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802812CC: jr          $ra
    // 0x802812D0: nop

    return;
    // 0x802812D0: nop

;}
RECOMP_FUNC void func_80281B24_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281B2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281B30: jal         0x8001B880
    // 0x80281B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281B38: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80281B3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281B40: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80281B44: nop

    // 0x80281B48: beq         $t6, $zero, L_80281B5C
    if (ctx->r14 == 0) {
        // 0x80281B4C: nop
    
            goto L_80281B5C;
    }
    // 0x80281B4C: nop

    // 0x80281B50: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80281B54: b           L_80281B64
    // 0x80281B58: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80281B64;
    // 0x80281B58: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80281B5C:
    // 0x80281B5C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80281B60: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80281B64:
    // 0x80281B64: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80281B68: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80281B6C: nop

    // 0x80281B70: beq         $t9, $t0, L_80281BA4
    if (ctx->r25 == ctx->r8) {
        // 0x80281B74: nop
    
            goto L_80281BA4;
    }
    // 0x80281B74: nop

    // 0x80281B78: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80281B7C: addiu       $t1, $t1, 0x5CF8
    ctx->r9 = ADD32(ctx->r9, 0X5CF8);
    // 0x80281B80: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281B84: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80281B88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281B90: jal         0x8001C0EC
    // 0x80281B94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281B94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281B98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281B9C: jal         0x8001B754
    // 0x80281BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80281BA4:
    // 0x80281BA4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281BA8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281BAC: addiu       $t2, $zero, 0x69
    ctx->r10 = ADD32(0, 0X69);
    // 0x80281BB0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281BB4: b           L_80281BBC
    // 0x80281BB8: nop

        goto L_80281BBC;
    // 0x80281BB8: nop

L_80281BBC:
    // 0x80281BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281BC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281BC4: jr          $ra
    // 0x80281BC8: nop

    return;
    // 0x80281BC8: nop

;}
RECOMP_FUNC void func_80282158_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028215C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282160: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282164: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x80282168: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028216C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282174: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80282178: jal         0x8001C0EC
    // 0x8028217C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028217C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282180: b           L_80282188
    // 0x80282184: nop

        goto L_80282188;
    // 0x80282184: nop

L_80282188:
    // 0x80282188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282190: jr          $ra
    // 0x80282194: nop

    return;
    // 0x80282194: nop

;}
RECOMP_FUNC void func_80280CA0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280CA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CA4: lwc1        $f4, -0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280CA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280CAC: lwc1        $f9, 0x3E80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E80);
    // 0x80280CB0: lwc1        $f8, 0x3E84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E84);
    // 0x80280CB4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280CB8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280CBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CC0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280CC4: swc1        $f16, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f16.u32l;
    // 0x80280CC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CCC: lwc1        $f18, -0x1C78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280CD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280CD4: nop

    // 0x80280CD8: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280CDC: nop

    // 0x80280CE0: bc1f        L_80280CF4
    if (!c1cs) {
        // 0x80280CE4: nop
    
            goto L_80280CF4;
    }
    // 0x80280CE4: nop

    // 0x80280CE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280CEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CF0: swc1        $f6, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f6.u32l;
L_80280CF4:
    // 0x80280CF4: jr          $ra
    // 0x80280CF8: nop

    return;
    // 0x80280CF8: nop

    // 0x80280CFC: jr          $ra
    // 0x80280D00: nop

    return;
    // 0x80280D00: nop

;}
RECOMP_FUNC void func_802805D8_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802805D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802805DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802805E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802805E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802805E8: nop

    // 0x802805EC: bne         $t6, $zero, L_80280664
    if (ctx->r14 != 0) {
        // 0x802805F0: nop
    
            goto L_80280664;
    }
    // 0x802805F0: nop

    // 0x802805F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802805F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802805FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280600: lwc1        $f6, -0x1C98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C98);
    // 0x80280604: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80280608: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028060C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280610: nop

    // 0x80280614: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80280618: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8028061C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280620: lwc1        $f18, -0x1C6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280624: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280628: nop

    // 0x8028062C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80280630: nop

    // 0x80280634: bc1f        L_80280654
    if (!c1cs) {
        // 0x80280638: nop
    
            goto L_80280654;
    }
    // 0x80280638: nop

    // 0x8028063C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80280640: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80280644: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80280648: jal         0x80015538
    // 0x8028064C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8028064C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x80280650: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80280654:
    // 0x80280654: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280658: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028065C: b           L_80280760
    // 0x80280660: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
        goto L_80280760;
    // 0x80280660: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_80280664:
    // 0x80280664: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80280668: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028066C: bne         $t7, $at, L_80280698
    if (ctx->r15 != ctx->r1) {
        // 0x80280670: nop
    
            goto L_80280698;
    }
    // 0x80280670: nop

    // 0x80280674: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280678: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028067C: nop

    // 0x80280680: lwc1        $f14, 0x2C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80280684: lwc1        $f12, 0x28($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80280688: jal         0x800155A8
    // 0x8028068C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_CalcAngle2D(rdram, ctx);
        goto after_1;
    // 0x8028068C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80280690: b           L_802806B8
    // 0x80280694: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_802806B8;
    // 0x80280694: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80280698:
    // 0x80280698: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028069C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802806A0: nop

    // 0x802806A4: lwc1        $f12, 0x28($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X28);
    // 0x802806A8: lwc1        $f14, 0x2C($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x802806AC: jal         0x800155A8
    // 0x802806B0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    Math_CalcAngle2D(rdram, ctx);
        goto after_2;
    // 0x802806B0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x802806B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_802806B8:
    // 0x802806B8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802806BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802806C0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802806C4: nop

    // 0x802806C8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802806CC: nop

    // 0x802806D0: bc1f        L_80280704
    if (!c1cs) {
        // 0x802806D4: nop
    
            goto L_80280704;
    }
    // 0x802806D4: nop

    // 0x802806D8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802806DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802806E0: nop

    // 0x802806E4: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x802806E8: nop

    // 0x802806EC: bc1f        L_80280704
    if (!c1cs) {
        // 0x802806F0: nop
    
            goto L_80280704;
    }
    // 0x802806F0: nop

    // 0x802806F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802806F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802806FC: b           L_80280750
    // 0x80280700: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
        goto L_80280750;
    // 0x80280700: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_80280704:
    // 0x80280704: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028070C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80280710: nop

    // 0x80280714: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80280718: nop

    // 0x8028071C: bc1f        L_80280750
    if (!c1cs) {
        // 0x80280720: nop
    
            goto L_80280750;
    }
    // 0x80280720: nop

    // 0x80280724: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80280728: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028072C: nop

    // 0x80280730: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80280734: nop

    // 0x80280738: bc1f        L_80280750
    if (!c1cs) {
        // 0x8028073C: nop
    
            goto L_80280750;
    }
    // 0x8028073C: nop

    // 0x80280740: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80280744: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280748: nop

    // 0x8028074C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_80280750:
    // 0x80280750: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280754: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280758: nop

    // 0x8028075C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
L_80280760:
    // 0x80280760: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280764: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280768: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028076C: lwc1        $f12, 0x18($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80280770: jal         0x80084120
    // 0x80280774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80084120(rdram, ctx);
        goto after_3;
    // 0x80280774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80280778: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8028077C: nop

    // 0x80280780: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80280784: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80280788: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028078C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280790: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280794: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280798: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8028079C: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x802807A0: mul.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802807A4: jal         0x80015538
    // 0x802807A8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x802807A8: nop

    after_4:
    // 0x802807AC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802807B0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802807B4: nop

    // 0x802807B8: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x802807BC: b           L_802807C4
    // 0x802807C0: nop

        goto L_802807C4;
    // 0x802807C0: nop

L_802807C4:
    // 0x802807C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802807C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802807CC: jr          $ra
    // 0x802807D0: nop

    return;
    // 0x802807D0: nop

;}
RECOMP_FUNC void func_8028307C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028307C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283084: jal         0x80280D04
    // 0x80283088: nop

    func_80280D04_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283088: nop

    after_0:
    // 0x8028308C: jal         0x80281184
    // 0x80283090: nop

    func_80281184_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283090: nop

    after_1:
    // 0x80283094: jal         0x802813C0
    // 0x80283098: nop

    func_802813C0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283098: nop

    after_2:
    // 0x8028309C: jal         0x802807D4
    // 0x802830A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x802830A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x802830A4: jal         0x802805D8
    // 0x802830A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x802830A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802830AC: jal         0x802804B0
    // 0x802830B0: nop

    func_802804B0_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x802830B0: nop

    after_5:
    // 0x802830B4: jal         0x802802EC
    // 0x802830B8: nop

    func_802802EC_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x802830B8: nop

    after_6:
    // 0x802830BC: b           L_802830C4
    // 0x802830C0: nop

        goto L_802830C4;
    // 0x802830C0: nop

L_802830C4:
    // 0x802830C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802830C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802830CC: jr          $ra
    // 0x802830D0: nop

    return;
    // 0x802830D0: nop

;}
RECOMP_FUNC void func_8028189C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028189C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802818A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802818A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802818A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802818AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802818B0: jal         0x8001B880
    // 0x802818B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x802818B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802818B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x802818BC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802818C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802818C4: beq         $t6, $at, L_802818D8
    if (ctx->r14 == ctx->r1) {
        // 0x802818C8: nop
    
            goto L_802818D8;
    }
    // 0x802818C8: nop

    // 0x802818CC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802818D0: bne         $t6, $at, L_802818EC
    if (ctx->r14 != ctx->r1) {
        // 0x802818D4: nop
    
            goto L_802818EC;
    }
    // 0x802818D4: nop

L_802818D8:
    // 0x802818D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802818DC: jal         0x8001B62C
    // 0x802818E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x802818E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802818E4: b           L_8028193C
    // 0x802818E8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_8028193C;
    // 0x802818E8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_802818EC:
    // 0x802818EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802818F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802818F4: beq         $t7, $at, L_80281908
    if (ctx->r15 == ctx->r1) {
        // 0x802818F8: nop
    
            goto L_80281908;
    }
    // 0x802818F8: nop

    // 0x802818FC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80281900: bne         $t7, $at, L_80281930
    if (ctx->r15 != ctx->r1) {
        // 0x80281904: nop
    
            goto L_80281930;
    }
    // 0x80281904: nop

L_80281908:
    // 0x80281908: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028190C: jal         0x8001B580
    // 0x80281910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80281910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281914: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80281918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028191C: jal         0x8001B62C
    // 0x80281920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80281920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281924: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x80281928: b           L_8028193C
    // 0x8028192C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
        goto L_8028193C;
    // 0x8028192C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_80281930:
    // 0x80281930: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281934: nop

    // 0x80281938: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_8028193C:
    // 0x8028193C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281940: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80281944: nop

    // 0x80281948: beq         $t8, $zero, L_8028195C
    if (ctx->r24 == 0) {
        // 0x8028194C: nop
    
            goto L_8028195C;
    }
    // 0x8028194C: nop

    // 0x80281950: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80281954: b           L_80281964
    // 0x80281958: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
        goto L_80281964;
    // 0x80281958: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_8028195C:
    // 0x8028195C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80281960: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
L_80281964:
    // 0x80281964: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x80281968: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8028196C: nop

    // 0x80281970: beq         $t1, $t2, L_802819B4
    if (ctx->r9 == ctx->r10) {
        // 0x80281974: nop
    
            goto L_802819B4;
    }
    // 0x80281974: nop

    // 0x80281978: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8028197C: addiu       $t3, $t3, 0x5CF8
    ctx->r11 = ADD32(ctx->r11, 0X5CF8);
    // 0x80281980: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80281984: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80281988: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028198C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281990: jal         0x8001C0EC
    // 0x80281994: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80281994: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80281998: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8028199C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802819A0: jal         0x8001B6BC
    // 0x802819A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_5;
    // 0x802819A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x802819A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802819AC: jal         0x8001B754
    // 0x802819B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x802819B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_802819B4:
    // 0x802819B4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802819B8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802819BC: addiu       $t4, $zero, 0x67
    ctx->r12 = ADD32(0, 0X67);
    // 0x802819C0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x802819C4: b           L_802819CC
    // 0x802819C8: nop

        goto L_802819CC;
    // 0x802819C8: nop

L_802819CC:
    // 0x802819CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802819D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802819D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802819D8: jr          $ra
    // 0x802819DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802819DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80283A40_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283A40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80283A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80283A48: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80283A4C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80283A50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283A54: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283A58: nop

    // 0x80283A5C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80283A60: nop

    // 0x80283A64: bne         $t7, $zero, L_80283BA8
    if (ctx->r15 != 0) {
        // 0x80283A68: nop
    
            goto L_80283BA8;
    }
    // 0x80283A68: nop

    // 0x80283A6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283A70: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283A74: nop

    // 0x80283A78: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80283A7C: nop

    // 0x80283A80: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80283A84: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80283A88: jal         0x8001819C
    // 0x80283A8C: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x80283A8C: nop

    after_0:
    // 0x80283A90: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283A94: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283A98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80283A9C: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80283AA0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80283AA4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80283AA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80283AAC: nop

    // 0x80283AB0: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80283AB4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80283AB8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283ABC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80283AC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283AC4: nop

    // 0x80283AC8: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80283ACC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80283AD0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80283AD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80283AD8: nop

    // 0x80283ADC: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x80283AE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283AE4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283AE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80283AEC: nop

    // 0x80283AF0: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80283AF4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283AF8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283AFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80283B00: nop

    // 0x80283B04: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x80283B08: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283B0C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283B10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80283B14: nop

    // 0x80283B18: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x80283B1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80283B20: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283B24: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283B28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283B2C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283B30: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x80283B34: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283B38: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283B3C: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80283B40: nop

    // 0x80283B44: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80283B48: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283B4C: nop

    // 0x80283B50: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x80283B54: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80283B58: addiu       $t2, $t2, 0x5CF8
    ctx->r10 = ADD32(ctx->r10, 0X5CF8);
    // 0x80283B5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80283B60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283B68: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80283B6C: jal         0x8001C0EC
    // 0x80283B70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283B70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283B74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B78: jal         0x8001B754
    // 0x80283B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80283B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80283B80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B84: jal         0x8001BBDC
    // 0x80283B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80283B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80283B8C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80283B90: addiu       $a3, $a3, 0x5DAC
    ctx->r7 = ADD32(ctx->r7, 0X5DAC);
    // 0x80283B94: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80283B98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283BA0: jal         0x8001ABF4
    // 0x80283BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80283BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80283BA8:
    // 0x80283BA8: jal         0x8001CD20
    // 0x80283BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_5;
    // 0x80283BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80283BB0: jal         0x8001AD6C
    // 0x80283BB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_6;
    // 0x80283BB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80283BB8: b           L_80283BC0
    // 0x80283BBC: nop

        goto L_80283BC0;
    // 0x80283BBC: nop

L_80283BC0:
    // 0x80283BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80283BC4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80283BC8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80283BCC: jr          $ra
    // 0x80283BD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80283BD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8028175C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028175C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281764: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281768: jal         0x8001B880
    // 0x8028176C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x8028176C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281770: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80281774: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281778: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8028177C: nop

    // 0x80281780: beq         $t6, $zero, L_80281794
    if (ctx->r14 == 0) {
        // 0x80281784: nop
    
            goto L_80281794;
    }
    // 0x80281784: nop

    // 0x80281788: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028178C: b           L_80281798
    // 0x80281790: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80281798;
    // 0x80281790: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80281794:
    // 0x80281794: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_80281798:
    // 0x80281798: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x8028179C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802817A0: nop

    // 0x802817A4: beq         $t8, $t9, L_802817D8
    if (ctx->r24 == ctx->r25) {
        // 0x802817A8: nop
    
            goto L_802817D8;
    }
    // 0x802817A8: nop

    // 0x802817AC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802817B0: addiu       $t0, $t0, 0x5CF8
    ctx->r8 = ADD32(ctx->r8, 0X5CF8);
    // 0x802817B4: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x802817B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802817BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802817C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802817C4: jal         0x8001C0EC
    // 0x802817C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802817C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802817CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802817D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817D4: swc1        $f4, -0x1C68($at)
    MEM_W(-0X1C68, ctx->r1) = ctx->f4.u32l;
L_802817D8:
    // 0x802817D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802817DC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802817E0: addiu       $t1, $zero, 0x65
    ctx->r9 = ADD32(0, 0X65);
    // 0x802817E4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x802817E8: b           L_802817F0
    // 0x802817EC: nop

        goto L_802817F0;
    // 0x802817EC: nop

L_802817F0:
    // 0x802817F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802817F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802817F8: jr          $ra
    // 0x802817FC: nop

    return;
    // 0x802817FC: nop

;}
RECOMP_FUNC void func_80280100_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280100: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280104: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280108: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028010C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280110: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280114: nop

    // 0x80280118: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028011C: nop

    // 0x80280120: bc1f        L_80280154
    if (!c1cs) {
        // 0x80280124: nop
    
            goto L_80280154;
    }
    // 0x80280124: nop

    // 0x80280128: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8028012C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280130: nop

    // 0x80280134: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80280138: nop

    // 0x8028013C: bc1f        L_80280154
    if (!c1cs) {
        // 0x80280140: nop
    
            goto L_80280154;
    }
    // 0x80280140: nop

    // 0x80280144: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028014C: b           L_802801F0
    // 0x80280150: swc1        $f10, -0x1CA8($at)
    MEM_W(-0X1CA8, ctx->r1) = ctx->f10.u32l;
        goto L_802801F0;
    // 0x80280150: swc1        $f10, -0x1CA8($at)
    MEM_W(-0X1CA8, ctx->r1) = ctx->f10.u32l;
L_80280154:
    // 0x80280154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280158: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028015C: nop

    // 0x80280160: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x80280164: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280168: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028016C: nop

    // 0x80280170: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80280174: nop

    // 0x80280178: bc1f        L_80280190
    if (!c1cs) {
        // 0x8028017C: nop
    
            goto L_80280190;
    }
    // 0x8028017C: nop

    // 0x80280180: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280184: nop

    // 0x80280188: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x8028018C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_80280190:
    // 0x80280190: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80280194: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280198: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028019C: nop

    // 0x802801A0: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x802801A4: nop

    // 0x802801A8: bc1f        L_802801C0
    if (!c1cs) {
        // 0x802801AC: nop
    
            goto L_802801C0;
    }
    // 0x802801AC: nop

    // 0x802801B0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802801B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802801B8: nop

    // 0x802801BC: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_802801C0:
    // 0x802801C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802801C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802801C8: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802801CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802801D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802801D4: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802801D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802801DC: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802801E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802801E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801E8: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802801EC: swc1        $f6, -0x1CA8($at)
    MEM_W(-0X1CA8, ctx->r1) = ctx->f6.u32l;
L_802801F0:
    // 0x802801F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801F4: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802801F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802801FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280200: nop

    // 0x80280204: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80280208: nop

    // 0x8028020C: bc1f        L_80280240
    if (!c1cs) {
        // 0x80280210: nop
    
            goto L_80280240;
    }
    // 0x80280210: nop

    // 0x80280214: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280218: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028021C: nop

    // 0x80280220: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80280224: nop

    // 0x80280228: bc1f        L_80280240
    if (!c1cs) {
        // 0x8028022C: nop
    
            goto L_80280240;
    }
    // 0x8028022C: nop

    // 0x80280230: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280234: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280238: b           L_802802DC
    // 0x8028023C: swc1        $f16, -0x1C98($at)
    MEM_W(-0X1C98, ctx->r1) = ctx->f16.u32l;
        goto L_802802DC;
    // 0x8028023C: swc1        $f16, -0x1C98($at)
    MEM_W(-0X1C98, ctx->r1) = ctx->f16.u32l;
L_80280240:
    // 0x80280240: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280244: lwc1        $f18, -0x1C6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280248: nop

    // 0x8028024C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80280250: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280254: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280258: nop

    // 0x8028025C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80280260: nop

    // 0x80280264: bc1f        L_8028027C
    if (!c1cs) {
        // 0x80280268: nop
    
            goto L_8028027C;
    }
    // 0x80280268: nop

    // 0x8028026C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280270: nop

    // 0x80280274: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x80280278: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_8028027C:
    // 0x8028027C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80280280: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280284: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280288: nop

    // 0x8028028C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80280290: nop

    // 0x80280294: bc1f        L_802802AC
    if (!c1cs) {
        // 0x80280298: nop
    
            goto L_802802AC;
    }
    // 0x80280298: nop

    // 0x8028029C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802802A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802802A4: nop

    // 0x802802A8: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_802802AC:
    // 0x802802AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802802B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802802B4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802802B8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802802BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802802C0: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802802C4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802802C8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802802CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802802D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802D4: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802802D8: swc1        $f8, -0x1C98($at)
    MEM_W(-0X1C98, ctx->r1) = ctx->f8.u32l;
L_802802DC:
    // 0x802802DC: b           L_802802E4
    // 0x802802E0: nop

        goto L_802802E4;
    // 0x802802E0: nop

L_802802E4:
    // 0x802802E4: jr          $ra
    // 0x802802E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802802E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80282018_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282018: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028201C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282020: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282024: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x80282028: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028202C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282034: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80282038: jal         0x8001C0EC
    // 0x8028203C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028203C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282040: b           L_80282048
    // 0x80282044: nop

        goto L_80282048;
    // 0x80282044: nop

L_80282048:
    // 0x80282048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028204C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282050: jr          $ra
    // 0x80282054: nop

    return;
    // 0x80282054: nop

;}
RECOMP_FUNC void func_80280F70_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F74: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280F78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280F7C: lwc1        $f9, 0x3EB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3EB0);
    // 0x80280F80: lwc1        $f8, 0x3EB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3EB4);
    // 0x80280F84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280F88: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280F8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F90: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280F94: swc1        $f16, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f16.u32l;
    // 0x80280F98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F9C: lwc1        $f18, -0x1C70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280FA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280FA4: nop

    // 0x80280FA8: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280FAC: nop

    // 0x80280FB0: bc1f        L_80280FC4
    if (!c1cs) {
        // 0x80280FB4: nop
    
            goto L_80280FC4;
    }
    // 0x80280FB4: nop

    // 0x80280FB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280FBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280FC0: swc1        $f6, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f6.u32l;
L_80280FC4:
    // 0x80280FC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280FC8: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280FCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280FD0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280FD4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80280FD8: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x80280FDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280FE0: lwc1        $f16, -0x1C80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280FE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280FE8: lwc1        $f5, 0x3EB8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X3EB8);
    // 0x80280FEC: lwc1        $f4, 0x3EBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3EBC);
    // 0x80280FF0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80280FF4: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80280FF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280FFC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80281000: swc1        $f8, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f8.u32l;
    // 0x80281004: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281008: lwc1        $f10, -0x1C80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x8028100C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281010: nop

    // 0x80281014: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80281018: nop

    // 0x8028101C: bc1f        L_80281030
    if (!c1cs) {
        // 0x80281020: nop
    
            goto L_80281030;
    }
    // 0x80281020: nop

    // 0x80281024: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028102C: swc1        $f18, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f18.u32l;
L_80281030:
    // 0x80281030: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281034: lb          $t7, -0x1C88($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C88);
    // 0x80281038: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028103C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80281040: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80281044: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80281048: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028104C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281050: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80281054: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80281058: swc1        $f16, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f16.u32l;
    // 0x8028105C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281060: lwc1        $f18, -0x1C78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80281064: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281068: lwc1        $f9, 0x3EC0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3EC0);
    // 0x8028106C: lwc1        $f8, 0x3EC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3EC4);
    // 0x80281070: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80281074: sub.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d - ctx->f8.d;
    // 0x80281078: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028107C: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x80281080: swc1        $f10, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f10.u32l;
    // 0x80281084: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281088: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x8028108C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281090: nop

    // 0x80281094: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80281098: nop

    // 0x8028109C: bc1f        L_802810B0
    if (!c1cs) {
        // 0x802810A0: nop
    
            goto L_802810B0;
    }
    // 0x802810A0: nop

    // 0x802810A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802810A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810AC: swc1        $f4, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f4.u32l;
L_802810B0:
    // 0x802810B0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802810B4: lb          $t9, -0x1C84($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1C84);
    // 0x802810B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810BC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802810C0: lwc1        $f8, -0x1C78($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x802810C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802810C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802810CC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802810D0: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x802810D4: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x802810D8: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
    // 0x802810DC: jr          $ra
    // 0x802810E0: nop

    return;
    // 0x802810E0: nop

    // 0x802810E4: jr          $ra
    // 0x802810E8: nop

    return;
    // 0x802810E8: nop

;}
RECOMP_FUNC void func_802812D4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802812D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802812D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802812DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802812E0: lb          $t6, -0x1C84($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C84);
    // 0x802812E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802812E8: bne         $t6, $at, L_8028132C
    if (ctx->r14 != ctx->r1) {
        // 0x802812EC: nop
    
            goto L_8028132C;
    }
    // 0x802812EC: nop

    // 0x802812F0: jal         0x80280CA0
    // 0x802812F4: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802812F4: nop

    after_0:
    // 0x802812F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802812FC: lwc1        $f4, -0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80281300: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281304: nop

    // 0x80281308: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028130C: nop

    // 0x80281310: bc1f        L_80281324
    if (!c1cs) {
        // 0x80281314: nop
    
            goto L_80281324;
    }
    // 0x80281314: nop

    // 0x80281318: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8028131C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281320: sb          $t7, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r15;
L_80281324:
    // 0x80281324: b           L_80281380
    // 0x80281328: nop

        goto L_80281380;
    // 0x80281328: nop

L_8028132C:
    // 0x8028132C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281330: lwc1        $f8, -0x1C78($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80281334: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80281338: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8028133C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281340: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80281344: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80281348: nop

    // 0x8028134C: bc1f        L_80281364
    if (!c1cs) {
        // 0x80281350: nop
    
            goto L_80281364;
    }
    // 0x80281350: nop

    // 0x80281354: jal         0x80280CA0
    // 0x80281358: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80281358: nop

    after_1:
    // 0x8028135C: b           L_80281374
    // 0x80281360: nop

        goto L_80281374;
    // 0x80281360: nop

L_80281364:
    // 0x80281364: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80281368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028136C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281370: swc1        $f18, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f18.u32l;
L_80281374:
    // 0x80281374: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80281378: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028137C: sb          $t8, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r24;
L_80281380:
    // 0x80281380: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281384: lb          $t9, -0x1C84($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1C84);
    // 0x80281388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028138C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80281390: lwc1        $f8, -0x1C78($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80281394: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80281398: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028139C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802813A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802813A4: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x802813A8: b           L_802813B0
    // 0x802813AC: nop

        goto L_802813B0;
    // 0x802813AC: nop

L_802813B0:
    // 0x802813B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802813B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802813B8: jr          $ra
    // 0x802813BC: nop

    return;
    // 0x802813BC: nop

;}
RECOMP_FUNC void func_802832A4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802832A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802832A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802832AC: jal         0x80280F70
    // 0x802832B0: nop

    func_80280F70_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802832B0: nop

    after_0:
    // 0x802832B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802832B8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802832BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802832C0: nop

    // 0x802832C4: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x802832C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802832CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802832D0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802832D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802832D8: nop

    // 0x802832DC: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x802832E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802832E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802832E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802832EC: nop

    // 0x802832F0: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x802832F4: b           L_802832FC
    // 0x802832F8: nop

        goto L_802832FC;
    // 0x802832F8: nop

L_802832FC:
    // 0x802832FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283304: jr          $ra
    // 0x80283308: nop

    return;
    // 0x80283308: nop

;}
RECOMP_FUNC void func_802829EC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802829F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802829F4: jal         0x802825C4
    // 0x802829F8: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802829F8: nop

    after_0:
    // 0x802829FC: beq         $v0, $zero, L_80282A0C
    if (ctx->r2 == 0) {
        // 0x80282A00: nop
    
            goto L_80282A0C;
    }
    // 0x80282A00: nop

    // 0x80282A04: b           L_80282AD4
    // 0x80282A08: nop

        goto L_80282AD4;
    // 0x80282A08: nop

L_80282A0C:
    // 0x80282A0C: jal         0x80085D54
    // 0x80282A10: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282A10: nop

    after_1:
    // 0x80282A14: beq         $v0, $zero, L_80282A24
    if (ctx->r2 == 0) {
        // 0x80282A18: nop
    
            goto L_80282A24;
    }
    // 0x80282A18: nop

    // 0x80282A1C: b           L_80282AD4
    // 0x80282A20: nop

        goto L_80282AD4;
    // 0x80282A20: nop

L_80282A24:
    // 0x80282A24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282A28: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80282A2C: nop

    // 0x80282A30: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282A34: beq         $t7, $zero, L_80282A4C
    if (ctx->r15 == 0) {
        // 0x80282A38: nop
    
            goto L_80282A4C;
    }
    // 0x80282A38: nop

    // 0x80282A3C: jal         0x80281B24
    // 0x80282A40: nop

    func_80281B24_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282A40: nop

    after_2:
    // 0x80282A44: b           L_80282AD4
    // 0x80282A48: nop

        goto L_80282AD4;
    // 0x80282A48: nop

L_80282A4C:
    // 0x80282A4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282A50: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x80282A54: nop

    // 0x80282A58: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80282A5C: beq         $t9, $zero, L_80282A7C
    if (ctx->r25 == 0) {
        // 0x80282A60: nop
    
            goto L_80282A7C;
    }
    // 0x80282A60: nop

    // 0x80282A64: jal         0x8028189C
    // 0x80282A68: nop

    func_8028189C_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80282A68: nop

    after_3:
    // 0x80282A6C: jal         0x80281660
    // 0x80282A70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281660_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282A70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80282A74: b           L_80282AD4
    // 0x80282A78: nop

        goto L_80282AD4;
    // 0x80282A78: nop

L_80282A7C:
    // 0x80282A7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282A80: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80282A84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282A88: nop

    // 0x80282A8C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80282A90: nop

    // 0x80282A94: bc1f        L_80282AAC
    if (!c1cs) {
        // 0x80282A98: nop
    
            goto L_80282AAC;
    }
    // 0x80282A98: nop

    // 0x80282A9C: jal         0x8028175C
    // 0x80282AA0: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80282AA0: nop

    after_5:
    // 0x80282AA4: b           L_80282AD4
    // 0x80282AA8: nop

        goto L_80282AD4;
    // 0x80282AA8: nop

L_80282AAC:
    // 0x80282AAC: jal         0x802822E0
    // 0x80282AB0: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80282AB0: nop

    after_6:
    // 0x80282AB4: beq         $v0, $zero, L_80282AC4
    if (ctx->r2 == 0) {
        // 0x80282AB8: nop
    
            goto L_80282AC4;
    }
    // 0x80282AB8: nop

    // 0x80282ABC: b           L_80282AD4
    // 0x80282AC0: nop

        goto L_80282AD4;
    // 0x80282AC0: nop

L_80282AC4:
    // 0x80282AC4: jal         0x802819E0
    // 0x80282AC8: nop

    func_802819E0_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x80282AC8: nop

    after_7:
    // 0x80282ACC: b           L_80282AD4
    // 0x80282AD0: nop

        goto L_80282AD4;
    // 0x80282AD0: nop

L_80282AD4:
    // 0x80282AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282ADC: jr          $ra
    // 0x80282AE0: nop

    return;
    // 0x80282AE0: nop

;}
RECOMP_FUNC void func_80280DFC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280DFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280E00: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80280E04: nop

    // 0x80280E08: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80280E0C: beq         $t7, $zero, L_80280E78
    if (ctx->r15 == 0) {
        // 0x80280E10: nop
    
            goto L_80280E78;
    }
    // 0x80280E10: nop

    // 0x80280E14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E18: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280E1C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280E20: lwc1        $f9, 0x3E98($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E98);
    // 0x80280E24: lwc1        $f8, 0x3E9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E9C);
    // 0x80280E28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280E2C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80280E30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E34: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280E38: swc1        $f16, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f16.u32l;
    // 0x80280E3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E40: lwc1        $f18, -0x1C70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280E44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280E48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280E4C: nop

    // 0x80280E50: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80280E54: nop

    // 0x80280E58: bc1f        L_80280E70
    if (!c1cs) {
        // 0x80280E5C: nop
    
            goto L_80280E70;
    }
    // 0x80280E5C: nop

    // 0x80280E60: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280E64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280E68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E6C: swc1        $f6, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f6.u32l;
L_80280E70:
    // 0x80280E70: b           L_80280ECC
    // 0x80280E74: nop

        goto L_80280ECC;
    // 0x80280E74: nop

L_80280E78:
    // 0x80280E78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E7C: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280E80: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280E84: lwc1        $f17, 0x3EA0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3EA0);
    // 0x80280E88: lwc1        $f16, 0x3EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3EA4);
    // 0x80280E8C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80280E90: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80280E94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E98: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80280E9C: swc1        $f4, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f4.u32l;
    // 0x80280EA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280EA4: lwc1        $f6, -0x1C70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280EA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280EAC: nop

    // 0x80280EB0: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80280EB4: nop

    // 0x80280EB8: bc1f        L_80280ECC
    if (!c1cs) {
        // 0x80280EBC: nop
    
            goto L_80280ECC;
    }
    // 0x80280EBC: nop

    // 0x80280EC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280EC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280EC8: swc1        $f10, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f10.u32l;
L_80280ECC:
    // 0x80280ECC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280ED0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280ED4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280ED8: lwc1        $f16, -0x1C70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80280EDC: nop

    // 0x80280EE0: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x80280EE4: jr          $ra
    // 0x80280EE8: nop

    return;
    // 0x80280EE8: nop

    // 0x80280EEC: jr          $ra
    // 0x80280EF0: nop

    return;
    // 0x80280EF0: nop

;}
RECOMP_FUNC void func_80281BCC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281BCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281BD8: jal         0x8001B880
    // 0x80281BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281BE0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80281BE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281BE8: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80281BEC: nop

    // 0x80281BF0: beq         $t6, $zero, L_80281C04
    if (ctx->r14 == 0) {
        // 0x80281BF4: nop
    
            goto L_80281C04;
    }
    // 0x80281BF4: nop

    // 0x80281BF8: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x80281BFC: b           L_80281C0C
    // 0x80281C00: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80281C0C;
    // 0x80281C00: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80281C04:
    // 0x80281C04: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80281C08: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80281C0C:
    // 0x80281C0C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80281C10: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80281C14: nop

    // 0x80281C18: beq         $t9, $t0, L_80281C40
    if (ctx->r25 == ctx->r8) {
        // 0x80281C1C: nop
    
            goto L_80281C40;
    }
    // 0x80281C1C: nop

    // 0x80281C20: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80281C24: addiu       $t1, $t1, 0x5CF8
    ctx->r9 = ADD32(ctx->r9, 0X5CF8);
    // 0x80281C28: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281C2C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80281C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281C38: jal         0x8001C0EC
    // 0x80281C3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281C3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80281C40:
    // 0x80281C40: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281C44: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281C48: addiu       $t2, $zero, 0x6A
    ctx->r10 = ADD32(0, 0X6A);
    // 0x80281C4C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281C50: b           L_80281C58
    // 0x80281C54: nop

        goto L_80281C58;
    // 0x80281C54: nop

L_80281C58:
    // 0x80281C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281C60: jr          $ra
    // 0x80281C64: nop

    return;
    // 0x80281C64: nop

;}
RECOMP_FUNC void func_802825C4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802825C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802825C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802825CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802825D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802825D4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802825D8: nop

    // 0x802825DC: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x802825E0: nop

    // 0x802825E4: bne         $t7, $zero, L_80282600
    if (ctx->r15 != 0) {
        // 0x802825E8: nop
    
            goto L_80282600;
    }
    // 0x802825E8: nop

    // 0x802825EC: jal         0x80281F70
    // 0x802825F0: nop

    func_80281F70_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802825F0: nop

    after_0:
    // 0x802825F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802825F8: b           L_8028262C
    // 0x802825FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_8028262C;
    // 0x802825FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80282600:
    // 0x80282600: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282604: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282608: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x8028260C: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x80282610: nop

    // 0x80282614: bne         $t0, $at, L_8028262C
    if (ctx->r8 != ctx->r1) {
        // 0x80282618: nop
    
            goto L_8028262C;
    }
    // 0x80282618: nop

    // 0x8028261C: jal         0x80281EF0
    // 0x80282620: nop

    func_80281EF0_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80282620: nop

    after_1:
    // 0x80282624: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80282628: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8028262C:
    // 0x8028262C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80282630: nop

    // 0x80282634: beq         $t2, $zero, L_802826C0
    if (ctx->r10 == 0) {
        // 0x80282638: nop
    
            goto L_802826C0;
    }
    // 0x80282638: nop

    // 0x8028263C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282640: lbu         $t3, -0x1F78($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1F78);
    // 0x80282644: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80282648: bne         $t3, $at, L_80282670
    if (ctx->r11 != ctx->r1) {
        // 0x8028264C: nop
    
            goto L_80282670;
    }
    // 0x8028264C: nop

    // 0x80282650: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282658: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    // 0x8028265C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282660: jal         0x800178D4
    // 0x80282664: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282664: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282668: b           L_8028269C
    // 0x8028266C: nop

        goto L_8028269C;
    // 0x8028266C: nop

L_80282670:
    // 0x80282670: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282674: lbu         $t4, -0x1F78($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F78);
    // 0x80282678: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028267C: bne         $t4, $at, L_8028269C
    if (ctx->r12 != ctx->r1) {
        // 0x80282680: nop
    
            goto L_8028269C;
    }
    // 0x80282680: nop

    // 0x80282684: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028268C: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80282690: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282694: jal         0x800178D4
    // 0x80282698: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80282698: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_8028269C:
    // 0x8028269C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802826A0: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x802826A4: nop

    // 0x802826A8: beq         $t5, $zero, L_802826B8
    if (ctx->r13 == 0) {
        // 0x802826AC: nop
    
            goto L_802826B8;
    }
    // 0x802826AC: nop

    // 0x802826B0: jal         0x8007BF18
    // 0x802826B4: nop

    func_8007BF18(rdram, ctx);
        goto after_4;
    // 0x802826B4: nop

    after_4:
L_802826B8:
    // 0x802826B8: b           L_802826D0
    // 0x802826BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802826D0;
    // 0x802826BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802826C0:
    // 0x802826C0: b           L_802826D0
    // 0x802826C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802826D0;
    // 0x802826C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802826C8: b           L_802826D0
    // 0x802826CC: nop

        goto L_802826D0;
    // 0x802826CC: nop

L_802826D0:
    // 0x802826D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802826D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802826D8: jr          $ra
    // 0x802826DC: nop

    return;
    // 0x802826DC: nop

;}
RECOMP_FUNC void func_802807D4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802807D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802807D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802807DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802807E0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802807E4: nop

    // 0x802807E8: bne         $t6, $zero, L_802808F4
    if (ctx->r14 != 0) {
        // 0x802807EC: nop
    
            goto L_802808F4;
    }
    // 0x802807EC: nop

    // 0x802807F0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802807F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802807F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807FC: lwc1        $f6, -0x1CA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1CA8);
    // 0x80280800: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80280804: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80280808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028080C: nop

    // 0x80280810: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80280814: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80280818: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028081C: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280820: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280824: nop

    // 0x80280828: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8028082C: nop

    // 0x80280830: bc1f        L_80280848
    if (!c1cs) {
        // 0x80280834: nop
    
            goto L_80280848;
    }
    // 0x80280834: nop

    // 0x80280838: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028083C: nop

    // 0x80280840: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80280844: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
L_80280848:
    // 0x80280848: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028084C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280850: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280854: nop

    // 0x80280858: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8028085C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80280860: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280864: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280868: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028086C: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80280870: jal         0x80084120
    // 0x80280874: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80084120(rdram, ctx);
        goto after_0;
    // 0x80280874: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80280878: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8028087C: nop

    // 0x80280880: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80280884: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80280888: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028088C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280890: nop

    // 0x80280894: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280898: nop

    // 0x8028089C: bc1f        L_802808B8
    if (!c1cs) {
        // 0x802808A0: nop
    
            goto L_802808B8;
    }
    // 0x802808A0: nop

    // 0x802808A4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802808A8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802808AC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802808B0: b           L_802808EC
    // 0x802808B4: swc1        $f16, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f16.u32l;
        goto L_802808EC;
    // 0x802808B4: swc1        $f16, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f16.u32l;
L_802808B8:
    // 0x802808B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802808BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802808C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802808C4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802808C8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802808CC: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802808D0: mul.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802808D4: jal         0x80015538
    // 0x802808D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x802808D8: nop

    after_1:
    // 0x802808DC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802808E0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802808E4: nop

    // 0x802808E8: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
L_802808EC:
    // 0x802808EC: b           L_802809C0
    // 0x802808F0: nop

        goto L_802809C0;
    // 0x802808F0: nop

L_802808F4:
    // 0x802808F4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x802808F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802808FC: bne         $t1, $at, L_80280928
    if (ctx->r9 != ctx->r1) {
        // 0x80280900: nop
    
            goto L_80280928;
    }
    // 0x80280900: nop

    // 0x80280904: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280908: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028090C: nop

    // 0x80280910: lwc1        $f12, 0x24($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80280914: lwc1        $f14, 0x2C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80280918: jal         0x80015634
    // 0x8028091C: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_2;
    // 0x8028091C: nop

    after_2:
    // 0x80280920: b           L_8028094C
    // 0x80280924: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8028094C;
    // 0x80280924: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80280928:
    // 0x80280928: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028092C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280930: nop

    // 0x80280934: lwc1        $f12, 0x24($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80280938: lwc1        $f14, 0x2C($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8028093C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80280940: jal         0x80015634
    // 0x80280944: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_3;
    // 0x80280944: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x80280948: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8028094C:
    // 0x8028094C: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80280950: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280954: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280958: nop

    // 0x8028095C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80280960: nop

    // 0x80280964: bc1f        L_8028097C
    if (!c1cs) {
        // 0x80280968: nop
    
            goto L_8028097C;
    }
    // 0x80280968: nop

    // 0x8028096C: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80280970: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280974: b           L_802809AC
    // 0x80280978: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
        goto L_802809AC;
    // 0x80280978: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
L_8028097C:
    // 0x8028097C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80280980: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280984: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280988: nop

    // 0x8028098C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80280990: nop

    // 0x80280994: bc1f        L_802809AC
    if (!c1cs) {
        // 0x80280998: nop
    
            goto L_802809AC;
    }
    // 0x80280998: nop

    // 0x8028099C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x802809A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802809A4: nop

    // 0x802809A8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_802809AC:
    // 0x802809AC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802809B0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802809B4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802809B8: nop

    // 0x802809BC: swc1        $f6, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f6.u32l;
L_802809C0:
    // 0x802809C0: b           L_802809C8
    // 0x802809C4: nop

        goto L_802809C8;
    // 0x802809C4: nop

L_802809C8:
    // 0x802809C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802809CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802809D0: jr          $ra
    // 0x802809D4: nop

    return;
    // 0x802809D4: nop

;}
RECOMP_FUNC void func_80282C74_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282C7C: jal         0x802825C4
    // 0x80282C80: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282C80: nop

    after_0:
    // 0x80282C84: beq         $v0, $zero, L_80282C94
    if (ctx->r2 == 0) {
        // 0x80282C88: nop
    
            goto L_80282C94;
    }
    // 0x80282C88: nop

    // 0x80282C8C: b           L_80282D20
    // 0x80282C90: nop

        goto L_80282D20;
    // 0x80282C90: nop

L_80282C94:
    // 0x80282C94: jal         0x80085D54
    // 0x80282C98: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282C98: nop

    after_1:
    // 0x80282C9C: beq         $v0, $zero, L_80282CAC
    if (ctx->r2 == 0) {
        // 0x80282CA0: nop
    
            goto L_80282CAC;
    }
    // 0x80282CA0: nop

    // 0x80282CA4: b           L_80282D20
    // 0x80282CA8: nop

        goto L_80282D20;
    // 0x80282CA8: nop

L_80282CAC:
    // 0x80282CAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282CB0: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80282CB4: nop

    // 0x80282CB8: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282CBC: bne         $t7, $zero, L_80282CD4
    if (ctx->r15 != 0) {
        // 0x80282CC0: nop
    
            goto L_80282CD4;
    }
    // 0x80282CC0: nop

    // 0x80282CC4: jal         0x80281DAC
    // 0x80282CC8: nop

    func_80281DAC_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282CC8: nop

    after_2:
    // 0x80282CCC: b           L_80282D20
    // 0x80282CD0: nop

        goto L_80282D20;
    // 0x80282CD0: nop

L_80282CD4:
    // 0x80282CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282CD8: jal         0x8001B44C
    // 0x80282CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80282CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80282CE0: beq         $v0, $zero, L_80282CF8
    if (ctx->r2 == 0) {
        // 0x80282CE4: nop
    
            goto L_80282CF8;
    }
    // 0x80282CE4: nop

    // 0x80282CE8: jal         0x80281BCC
    // 0x80282CEC: nop

    func_80281BCC_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282CEC: nop

    after_4:
    // 0x80282CF0: b           L_80282D20
    // 0x80282CF4: nop

        goto L_80282D20;
    // 0x80282CF4: nop

L_80282CF8:
    // 0x80282CF8: jal         0x802822E0
    // 0x80282CFC: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80282CFC: nop

    after_5:
    // 0x80282D00: beq         $v0, $zero, L_80282D10
    if (ctx->r2 == 0) {
        // 0x80282D04: nop
    
            goto L_80282D10;
    }
    // 0x80282D04: nop

    // 0x80282D08: b           L_80282D20
    // 0x80282D0C: nop

        goto L_80282D20;
    // 0x80282D0C: nop

L_80282D10:
    // 0x80282D10: jal         0x80281C68
    // 0x80282D14: nop

    func_80281C68_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80282D14: nop

    after_6:
    // 0x80282D18: b           L_80282D20
    // 0x80282D1C: nop

        goto L_80282D20;
    // 0x80282D1C: nop

L_80282D20:
    // 0x80282D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282D28: jr          $ra
    // 0x80282D2C: nop

    return;
    // 0x80282D2C: nop

;}
RECOMP_FUNC void func_80280BA0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280BA0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280BA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BA8: lwc1        $f4, -0x1C98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C98);
    // 0x80280BAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280BB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280BB4: nop

    // 0x80280BB8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80280BBC: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80280BC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BC4: lwc1        $f10, -0x1C78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280BC8: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280BCC: nop

    // 0x80280BD0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80280BD4: nop

    // 0x80280BD8: bc1f        L_80280C3C
    if (!c1cs) {
        // 0x80280BDC: nop
    
            goto L_80280C3C;
    }
    // 0x80280BDC: nop

    // 0x80280BE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BE4: lwc1        $f18, -0x1C78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280BE8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280BEC: lwc1        $f7, 0x3E70($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3E70);
    // 0x80280BF0: lwc1        $f6, 0x3E74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3E74);
    // 0x80280BF4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80280BF8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80280BFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C00: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80280C04: swc1        $f10, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f10.u32l;
    // 0x80280C08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C0C: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280C10: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280C14: nop

    // 0x80280C18: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80280C1C: nop

    // 0x80280C20: bc1f        L_80280C34
    if (!c1cs) {
        // 0x80280C24: nop
    
            goto L_80280C34;
    }
    // 0x80280C24: nop

    // 0x80280C28: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280C2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C30: swc1        $f4, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f4.u32l;
L_80280C34:
    // 0x80280C34: b           L_80280C90
    // 0x80280C38: nop

        goto L_80280C90;
    // 0x80280C38: nop

L_80280C3C:
    // 0x80280C3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C40: lwc1        $f6, -0x1C78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280C44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280C48: lwc1        $f11, 0x3E78($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3E78);
    // 0x80280C4C: lwc1        $f10, 0x3E7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3E7C);
    // 0x80280C50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280C54: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80280C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C5C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280C60: swc1        $f18, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f18.u32l;
    // 0x80280C64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C68: lwc1        $f4, -0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80280C6C: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280C70: nop

    // 0x80280C74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280C78: nop

    // 0x80280C7C: bc1f        L_80280C90
    if (!c1cs) {
        // 0x80280C80: nop
    
            goto L_80280C90;
    }
    // 0x80280C80: nop

    // 0x80280C84: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280C88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280C8C: swc1        $f8, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f8.u32l;
L_80280C90:
    // 0x80280C90: b           L_80280C98
    // 0x80280C94: nop

        goto L_80280C98;
    // 0x80280C94: nop

L_80280C98:
    // 0x80280C98: jr          $ra
    // 0x80280C9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280C9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80282118_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282118: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028211C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282120: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282124: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x80282128: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028212C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282134: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80282138: jal         0x8001C0EC
    // 0x8028213C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028213C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282140: b           L_80282148
    // 0x80282144: nop

        goto L_80282148;
    // 0x80282144: nop

L_80282148:
    // 0x80282148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028214C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282150: jr          $ra
    // 0x80282154: nop

    return;
    // 0x80282154: nop

;}
RECOMP_FUNC void func_80281510_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028151C: lwc1        $f4, -0x1C98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C98);
    // 0x80281520: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281524: nop

    // 0x80281528: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028152C: nop

    // 0x80281530: bc1t        L_80281618
    if (c1cs) {
        // 0x80281534: nop
    
            goto L_80281618;
    }
    // 0x80281534: nop

    // 0x80281538: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028153C: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80281540: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281544: nop

    // 0x80281548: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8028154C: nop

    // 0x80281550: bc1f        L_802815B8
    if (!c1cs) {
        // 0x80281554: nop
    
            goto L_802815B8;
    }
    // 0x80281554: nop

    // 0x80281558: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028155C: lb          $t6, -0x1C84($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C84);
    // 0x80281560: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80281564: bne         $t6, $at, L_8028157C
    if (ctx->r14 != ctx->r1) {
        // 0x80281568: nop
    
            goto L_8028157C;
    }
    // 0x80281568: nop

    // 0x8028156C: jal         0x80280BA0
    // 0x80281570: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80281570: nop

    after_0:
    // 0x80281574: b           L_802815B0
    // 0x80281578: nop

        goto L_802815B0;
    // 0x80281578: nop

L_8028157C:
    // 0x8028157C: jal         0x80280CA0
    // 0x80281580: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80281580: nop

    after_1:
    // 0x80281584: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281588: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x8028158C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281590: nop

    // 0x80281594: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80281598: nop

    // 0x8028159C: bc1f        L_802815B0
    if (!c1cs) {
        // 0x802815A0: nop
    
            goto L_802815B0;
    }
    // 0x802815A0: nop

    // 0x802815A4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802815A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802815AC: sb          $t7, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r15;
L_802815B0:
    // 0x802815B0: b           L_80281610
    // 0x802815B4: nop

        goto L_80281610;
    // 0x802815B4: nop

L_802815B8:
    // 0x802815B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802815BC: lb          $t8, -0x1C84($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C84);
    // 0x802815C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802815C4: bne         $t8, $at, L_802815DC
    if (ctx->r24 != ctx->r1) {
        // 0x802815C8: nop
    
            goto L_802815DC;
    }
    // 0x802815C8: nop

    // 0x802815CC: jal         0x80280BA0
    // 0x802815D0: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x802815D0: nop

    after_2:
    // 0x802815D4: b           L_80281610
    // 0x802815D8: nop

        goto L_80281610;
    // 0x802815D8: nop

L_802815DC:
    // 0x802815DC: jal         0x80280CA0
    // 0x802815E0: nop

    func_80280CA0_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x802815E0: nop

    after_3:
    // 0x802815E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802815E8: lwc1        $f4, -0x1C78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x802815EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802815F0: nop

    // 0x802815F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802815F8: nop

    // 0x802815FC: bc1f        L_80281610
    if (!c1cs) {
        // 0x80281600: nop
    
            goto L_80281610;
    }
    // 0x80281600: nop

    // 0x80281604: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80281608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028160C: sb          $t9, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = ctx->r25;
L_80281610:
    // 0x80281610: b           L_80281620
    // 0x80281614: nop

        goto L_80281620;
    // 0x80281614: nop

L_80281618:
    // 0x80281618: jal         0x80280BA0
    // 0x8028161C: nop

    func_80280BA0_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x8028161C: nop

    after_4:
L_80281620:
    // 0x80281620: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281624: lb          $t0, -0x1C84($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C84);
    // 0x80281628: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028162C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80281630: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80281634: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80281638: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028163C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281640: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80281644: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x80281648: b           L_80281650
    // 0x8028164C: nop

        goto L_80281650;
    // 0x8028164C: nop

L_80281650:
    // 0x80281650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281658: jr          $ra
    // 0x8028165C: nop

    return;
    // 0x8028165C: nop

;}
RECOMP_FUNC void func_802804B0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802804B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802804B4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802804B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802804BC: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x802804C0: nop

    // 0x802804C4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802804C8: nop

    // 0x802804CC: bc1t        L_802805C8
    if (c1cs) {
        // 0x802804D0: nop
    
            goto L_802805C8;
    }
    // 0x802804D0: nop

    // 0x802804D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802804D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802804DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802804E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802804E4: lwc1        $f8, 0x20($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X20);
    // 0x802804E8: nop

    // 0x802804EC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802804F0: nop

    // 0x802804F4: bc1f        L_80280564
    if (!c1cs) {
        // 0x802804F8: nop
    
            goto L_80280564;
    }
    // 0x802804F8: nop

    // 0x802804FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280500: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280504: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80280508: lwc1        $f16, 0x20($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X20);
    // 0x8028050C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80280510: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280514: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80280518: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x8028051C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80280520: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x80280524: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280528: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028052C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280530: lwc1        $f10, 0x20($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80280534: nop

    // 0x80280538: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8028053C: nop

    // 0x80280540: bc1f        L_8028055C
    if (!c1cs) {
        // 0x80280544: nop
    
            goto L_8028055C;
    }
    // 0x80280544: nop

    // 0x80280548: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028054C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280550: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280554: nop

    // 0x80280558: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
L_8028055C:
    // 0x8028055C: b           L_802805C8
    // 0x80280560: nop

        goto L_802805C8;
    // 0x80280560: nop

L_80280564:
    // 0x80280564: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280568: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028056C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80280570: lwc1        $f4, 0x20($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X20);
    // 0x80280574: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80280578: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028057C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280580: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80280584: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280588: swc1        $f16, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f16.u32l;
    // 0x8028058C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280590: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280594: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80280598: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028059C: lwc1        $f18, 0x20($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X20);
    // 0x802805A0: nop

    // 0x802805A4: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x802805A8: nop

    // 0x802805AC: bc1f        L_802805C8
    if (!c1cs) {
        // 0x802805B0: nop
    
            goto L_802805C8;
    }
    // 0x802805B0: nop

    // 0x802805B4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802805B8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802805BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802805C0: nop

    // 0x802805C4: swc1        $f6, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f6.u32l;
L_802805C8:
    // 0x802805C8: jr          $ra
    // 0x802805CC: nop

    return;
    // 0x802805CC: nop

    // 0x802805D0: jr          $ra
    // 0x802805D4: nop

    return;
    // 0x802805D4: nop

;}
RECOMP_FUNC void func_8028316C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028316C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283174: jal         0x80280EF4
    // 0x80283178: nop

    func_80280EF4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283178: nop

    after_0:
    // 0x8028317C: jal         0x802810EC
    // 0x80283180: nop

    func_802810EC_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283180: nop

    after_1:
    // 0x80283184: jal         0x802812D4
    // 0x80283188: nop

    func_802812D4_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283188: nop

    after_2:
    // 0x8028318C: jal         0x802807D4
    // 0x80283190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80283190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80283194: jal         0x802805D8
    // 0x80283198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8028319C: b           L_802831A4
    // 0x802831A0: nop

        goto L_802831A4;
    // 0x802831A0: nop

L_802831A4:
    // 0x802831A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802831A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802831AC: jr          $ra
    // 0x802831B0: nop

    return;
    // 0x802831B0: nop

;}
RECOMP_FUNC void func_80282B98_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282BA0: jal         0x802825C4
    // 0x80282BA4: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282BA4: nop

    after_0:
    // 0x80282BA8: beq         $v0, $zero, L_80282BB8
    if (ctx->r2 == 0) {
        // 0x80282BAC: nop
    
            goto L_80282BB8;
    }
    // 0x80282BAC: nop

    // 0x80282BB0: b           L_80282C64
    // 0x80282BB4: nop

        goto L_80282C64;
    // 0x80282BB4: nop

L_80282BB8:
    // 0x80282BB8: jal         0x80085D54
    // 0x80282BBC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282BBC: nop

    after_1:
    // 0x80282BC0: beq         $v0, $zero, L_80282BD0
    if (ctx->r2 == 0) {
        // 0x80282BC4: nop
    
            goto L_80282BD0;
    }
    // 0x80282BC4: nop

    // 0x80282BC8: b           L_80282C64
    // 0x80282BCC: nop

        goto L_80282C64;
    // 0x80282BCC: nop

L_80282BD0:
    // 0x80282BD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282BD4: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80282BD8: nop

    // 0x80282BDC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80282BE0: bne         $t7, $zero, L_80282BF8
    if (ctx->r15 != 0) {
        // 0x80282BE4: nop
    
            goto L_80282BF8;
    }
    // 0x80282BE4: nop

    // 0x80282BE8: jal         0x80281DAC
    // 0x80282BEC: nop

    func_80281DAC_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282BEC: nop

    after_2:
    // 0x80282BF0: b           L_80282C64
    // 0x80282BF4: nop

        goto L_80282C64;
    // 0x80282BF4: nop

L_80282BF8:
    // 0x80282BF8: jal         0x802822E0
    // 0x80282BFC: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80282BFC: nop

    after_3:
    // 0x80282C00: beq         $v0, $zero, L_80282C10
    if (ctx->r2 == 0) {
        // 0x80282C04: nop
    
            goto L_80282C10;
    }
    // 0x80282C04: nop

    // 0x80282C08: b           L_80282C64
    // 0x80282C0C: nop

        goto L_80282C64;
    // 0x80282C0C: nop

L_80282C10:
    // 0x80282C10: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282C14: lb          $t8, -0x1C5E($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C5E);
    // 0x80282C18: nop

    // 0x80282C1C: bne         $t8, $zero, L_80282C34
    if (ctx->r24 != 0) {
        // 0x80282C20: nop
    
            goto L_80282C34;
    }
    // 0x80282C20: nop

    // 0x80282C24: jal         0x80281BCC
    // 0x80282C28: nop

    func_80281BCC_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282C28: nop

    after_4:
    // 0x80282C2C: b           L_80282C5C
    // 0x80282C30: nop

        goto L_80282C5C;
    // 0x80282C30: nop

L_80282C34:
    // 0x80282C34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C38: jal         0x8001B44C
    // 0x80282C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80282C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80282C40: beq         $v0, $zero, L_80282C54
    if (ctx->r2 == 0) {
        // 0x80282C44: nop
    
            goto L_80282C54;
    }
    // 0x80282C44: nop

    // 0x80282C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282C4C: b           L_80282C5C
    // 0x80282C50: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
        goto L_80282C5C;
    // 0x80282C50: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
L_80282C54:
    // 0x80282C54: jal         0x80281BCC
    // 0x80282C58: nop

    func_80281BCC_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80282C58: nop

    after_6:
L_80282C5C:
    // 0x80282C5C: b           L_80282C64
    // 0x80282C60: nop

        goto L_80282C64;
    // 0x80282C60: nop

L_80282C64:
    // 0x80282C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282C6C: jr          $ra
    // 0x80282C70: nop

    return;
    // 0x80282C70: nop

;}
RECOMP_FUNC void func_80281F70_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281F78: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x80281F7C: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80281F80: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80281F84: addiu       $t7, $t7, 0x5CF8
    ctx->r15 = ADD32(ctx->r15, 0X5CF8);
    // 0x80281F88: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281F8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80281F90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281F98: jal         0x8001C0EC
    // 0x80281F9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281F9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281FA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281FA4: jal         0x8001B754
    // 0x80281FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80281FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281FAC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80281FB0: addiu       $a3, $a3, 0x5DAC
    ctx->r7 = ADD32(ctx->r7, 0X5DAC);
    // 0x80281FB4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80281FB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281FC0: jal         0x8001ABF4
    // 0x80281FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80281FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80281FC8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281FCC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281FD0: addiu       $t8, $zero, 0x6E
    ctx->r24 = ADD32(0, 0X6E);
    // 0x80281FD4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80281FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281FE0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80281FE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281FE8: jal         0x800178D4
    // 0x80281FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80281FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80281FF0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80281FF4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80281FF8: jal         0x8001FB3C
    // 0x80281FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_4;
    // 0x80281FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80282000: b           L_80282008
    // 0x80282004: nop

        goto L_80282008;
    // 0x80282004: nop

L_80282008:
    // 0x80282008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028200C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282010: jr          $ra
    // 0x80282014: nop

    return;
    // 0x80282014: nop

;}
RECOMP_FUNC void func_80283508_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283508: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028350C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283510: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80283514: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80283518: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028351C: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x80283520: addiu       $t7, $zero, 0x46
    ctx->r15 = ADD32(0, 0X46);
    // 0x80283524: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80283528: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8028352C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80283530: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80283534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80283538: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028353C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80283540: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283544: nop

    // 0x80283548: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x8028354C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283550: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283554: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283558: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8028355C: lwc1        $f5, 0x3EE8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X3EE8);
    // 0x80283560: lwc1        $f4, 0x3EEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3EEC);
    // 0x80283564: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80283568: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8028356C: nop

    // 0x80283570: bc1f        L_80283590
    if (!c1cs) {
        // 0x80283574: nop
    
            goto L_80283590;
    }
    // 0x80283574: nop

    // 0x80283578: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028357C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283580: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283584: lwc1        $f6, 0x3EF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3EF0);
    // 0x80283588: nop

    // 0x8028358C: swc1        $f6, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f6.u32l;
L_80283590:
    // 0x80283590: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283594: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283598: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028359C: lwc1        $f20, 0xC($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0XC);
    // 0x802835A0: nop

    // 0x802835A4: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
    // 0x802835A8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802835AC: nop

    // 0x802835B0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x802835B4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802835B8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802835BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802835C0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802835C4: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x802835C8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802835CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802835D0: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x802835D4: nop

    // 0x802835D8: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x802835DC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802835E0: nop

    // 0x802835E4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x802835E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802835EC: lb          $t6, -0x1DD8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1DD8);
    // 0x802835F0: nop

    // 0x802835F4: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x802835F8: bne         $t8, $zero, L_802836DC
    if (ctx->r24 != 0) {
        // 0x802835FC: nop
    
            goto L_802836DC;
    }
    // 0x802835FC: nop

    // 0x80283600: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283604: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283608: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028360C: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80283610: lwc1        $f19, 0x3EF8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3EF8);
    // 0x80283614: lwc1        $f18, 0x3EFC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3EFC);
    // 0x80283618: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8028361C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80283620: jal         0x80034970
    // 0x80283624: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80283624: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x80283628: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028362C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283630: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283634: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80283638: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028363C: nop

    // 0x80283640: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80283644: nop

    // 0x80283648: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028364C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80283650: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283654: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283658: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028365C: lwc1        $f18, 0x1C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80283660: lwc1        $f7, 0x3F00($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3F00);
    // 0x80283664: lwc1        $f6, 0x3F04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F04);
    // 0x80283668: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8028366C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80283670: jal         0x80034970
    // 0x80283674: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80283674: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_1:
    // 0x80283678: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028367C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283680: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283684: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80283688: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028368C: nop

    // 0x80283690: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80283694: nop

    // 0x80283698: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8028369C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802836A0: jal         0x80014E80
    // 0x802836A4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x802836A4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_2:
    // 0x802836A8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802836AC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802836B0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802836B4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802836B8: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x802836BC: nop

    // 0x802836C0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802836C4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x802836C8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802836CC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802836D0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802836D4: jal         0x80081468
    // 0x802836D8: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    func_80081468(rdram, ctx);
        goto after_3;
    // 0x802836D8: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    after_3:
L_802836DC:
    // 0x802836DC: b           L_802836E4
    // 0x802836E0: nop

        goto L_802836E4;
    // 0x802836E0: nop

L_802836E4:
    // 0x802836E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802836E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802836EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802836F0: jr          $ra
    // 0x802836F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802836F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802819E0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802819E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802819E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802819E8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802819EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802819F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802819F4: jal         0x8001B880
    // 0x802819F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x802819F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802819FC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80281A00: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80281A04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80281A08: beq         $t6, $at, L_80281A1C
    if (ctx->r14 == ctx->r1) {
        // 0x80281A0C: nop
    
            goto L_80281A1C;
    }
    // 0x80281A0C: nop

    // 0x80281A10: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80281A14: bne         $t6, $at, L_80281A30
    if (ctx->r14 != ctx->r1) {
        // 0x80281A18: nop
    
            goto L_80281A30;
    }
    // 0x80281A18: nop

L_80281A1C:
    // 0x80281A1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281A20: jal         0x8001B62C
    // 0x80281A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80281A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281A28: b           L_80281A80
    // 0x80281A2C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_80281A80;
    // 0x80281A2C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_80281A30:
    // 0x80281A30: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80281A34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281A38: beq         $t7, $at, L_80281A4C
    if (ctx->r15 == ctx->r1) {
        // 0x80281A3C: nop
    
            goto L_80281A4C;
    }
    // 0x80281A3C: nop

    // 0x80281A40: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80281A44: bne         $t7, $at, L_80281A74
    if (ctx->r15 != ctx->r1) {
        // 0x80281A48: nop
    
            goto L_80281A74;
    }
    // 0x80281A48: nop

L_80281A4C:
    // 0x80281A4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281A50: jal         0x8001B580
    // 0x80281A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80281A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281A58: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80281A5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281A60: jal         0x8001B62C
    // 0x80281A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80281A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281A68: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x80281A6C: b           L_80281A80
    // 0x80281A70: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
        goto L_80281A80;
    // 0x80281A70: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_80281A74:
    // 0x80281A74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281A78: nop

    // 0x80281A7C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_80281A80:
    // 0x80281A80: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281A84: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80281A88: nop

    // 0x80281A8C: beq         $t8, $zero, L_80281AA0
    if (ctx->r24 == 0) {
        // 0x80281A90: nop
    
            goto L_80281AA0;
    }
    // 0x80281A90: nop

    // 0x80281A94: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80281A98: b           L_80281AA8
    // 0x80281A9C: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
        goto L_80281AA8;
    // 0x80281A9C: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_80281AA0:
    // 0x80281AA0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80281AA4: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
L_80281AA8:
    // 0x80281AA8: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x80281AAC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80281AB0: nop

    // 0x80281AB4: beq         $t1, $t2, L_80281AF8
    if (ctx->r9 == ctx->r10) {
        // 0x80281AB8: nop
    
            goto L_80281AF8;
    }
    // 0x80281AB8: nop

    // 0x80281ABC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80281AC0: addiu       $t3, $t3, 0x5CF8
    ctx->r11 = ADD32(ctx->r11, 0X5CF8);
    // 0x80281AC4: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80281AC8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80281ACC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281AD4: jal         0x8001C0EC
    // 0x80281AD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80281AD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80281ADC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80281AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281AE4: jal         0x8001B6BC
    // 0x80281AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_5;
    // 0x80281AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80281AEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281AF0: jal         0x8001B754
    // 0x80281AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x80281AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80281AF8:
    // 0x80281AF8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281AFC: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281B00: addiu       $t4, $zero, 0x68
    ctx->r12 = ADD32(0, 0X68);
    // 0x80281B04: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80281B08: b           L_80281B10
    // 0x80281B0C: nop

        goto L_80281B10;
    // 0x80281B0C: nop

L_80281B10:
    // 0x80281B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80281B14: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80281B18: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281B1C: jr          $ra
    // 0x80281B20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80281B20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802838DC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802838DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802838E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802838E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802838E8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x802838EC: jal         0x800682E0
    // 0x802838F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_0;
    // 0x802838F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802838F4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x802838F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802838FC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80283900: jal         0x80085B34
    // 0x80283904: nop

    func_80085B34(rdram, ctx);
        goto after_1;
    // 0x80283904: nop

    after_1:
    // 0x80283908: jal         0x80280100
    // 0x8028390C: nop

    func_80280100_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x8028390C: nop

    after_2:
    // 0x80283910: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283914: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283918: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8028391C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80283920: nop

    // 0x80283924: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80283928: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8028392C: lw          $t9, 0x3ABC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3ABC);
    // 0x80283930: nop

    // 0x80283934: jalr        $t9
    // 0x80283938: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80283938: nop

    after_3:
    // 0x8028393C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283940: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283944: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80283948: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8028394C: nop

    // 0x80283950: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80283954: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80283958: lw          $t9, 0x3AB8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3AB8);
    // 0x8028395C: nop

    // 0x80283960: jalr        $t9
    // 0x80283964: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80283964: nop

    after_4:
    // 0x80283968: jal         0x80280000
    // 0x8028396C: nop

    func_80280000_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x8028396C: nop

    after_5:
    // 0x80283970: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80283974: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80283978: nop

    // 0x8028397C: bne         $t3, $zero, L_802839A0
    if (ctx->r11 != 0) {
        // 0x80283980: nop
    
            goto L_802839A0;
    }
    // 0x80283980: nop

    // 0x80283984: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283988: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028398C: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x80283990: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x80283994: nop

    // 0x80283998: bne         $t5, $at, L_802839BC
    if (ctx->r13 != ctx->r1) {
        // 0x8028399C: nop
    
            goto L_802839BC;
    }
    // 0x8028399C: nop

L_802839A0:
    // 0x802839A0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802839A4: addiu       $t6, $t6, 0x3D80
    ctx->r14 = ADD32(ctx->r14, 0X3D80);
    // 0x802839A8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802839AC: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x802839B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802839B4: b           L_802839D4
    // 0x802839B8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
        goto L_802839D4;
    // 0x802839B8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_802839BC:
    // 0x802839BC: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802839C0: addiu       $t7, $t7, 0x3D20
    ctx->r15 = ADD32(ctx->r15, 0X3D20);
    // 0x802839C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802839C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802839CC: nop

    // 0x802839D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
L_802839D4:
    // 0x802839D4: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802839D8: lui         $at, 0xC03D
    ctx->r1 = S32(0XC03D << 16);
    // 0x802839DC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802839E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802839E4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802839E8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802839EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802839F0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802839F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802839F8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802839FC: jal         0x80084BD8
    // 0x80283A00: lui         $a2, 0x428A
    ctx->r6 = S32(0X428A << 16);
    func_80084BD8(rdram, ctx);
        goto after_6;
    // 0x80283A00: lui         $a2, 0x428A
    ctx->r6 = S32(0X428A << 16);
    after_6:
    // 0x80283A04: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283A08: lb          $t8, -0x1DD8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1DD8);
    // 0x80283A0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283A10: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80283A14: sb          $t0, -0x1DD8($at)
    MEM_B(-0X1DD8, ctx->r1) = ctx->r8;
    // 0x80283A18: jal         0x8001CD20
    // 0x80283A1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_7;
    // 0x80283A1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80283A20: jal         0x8001AD6C
    // 0x80283A24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_8;
    // 0x80283A24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80283A28: b           L_80283A30
    // 0x80283A2C: nop

        goto L_80283A30;
    // 0x80283A2C: nop

L_80283A30:
    // 0x80283A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283A34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283A38: jr          $ra
    // 0x80283A3C: nop

    return;
    // 0x80283A3C: nop

;}
RECOMP_FUNC void func_80282220_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282228: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028222C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282230: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x80282234: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80282238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028223C: sh          $zero, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = 0;
    // 0x80282240: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282244: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282248: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8028224C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80282250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282258: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x8028225C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282260: jal         0x800178D4
    // 0x80282264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80282264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80282268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028226C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282270: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282274: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x80282278: nop

    // 0x8028227C: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x80282280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282284: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282288: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028228C: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80282290: nop

    // 0x80282294: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x80282298: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028229C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802822A0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802822A4: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x802822A8: nop

    // 0x802822AC: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x802822B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802822B4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802822B8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802822BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802822C0: nop

    // 0x802822C4: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x802822C8: b           L_802822D0
    // 0x802822CC: nop

        goto L_802822D0;
    // 0x802822CC: nop

L_802822D0:
    // 0x802822D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802822D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802822D8: jr          $ra
    // 0x802822DC: nop

    return;
    // 0x802822DC: nop

;}
RECOMP_FUNC void func_80280FA4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280FA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280FA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280FB0: jal         0x8001B880
    // 0x80280FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80280FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280FB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80280FBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280FC0: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80280FC4: nop

    // 0x80280FC8: beq         $t6, $zero, L_80280FDC
    if (ctx->r14 == 0) {
        // 0x80280FCC: nop
    
            goto L_80280FDC;
    }
    // 0x80280FCC: nop

    // 0x80280FD0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80280FD4: b           L_80280FE4
    // 0x80280FD8: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80280FE4;
    // 0x80280FD8: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80280FDC:
    // 0x80280FDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80280FE0: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80280FE4:
    // 0x80280FE4: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80280FE8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80280FEC: nop

    // 0x80280FF0: beq         $t9, $t0, L_80281024
    if (ctx->r25 == ctx->r8) {
        // 0x80280FF4: nop
    
            goto L_80281024;
    }
    // 0x80280FF4: nop

    // 0x80280FF8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80280FFC: addiu       $t1, $t1, 0x5E00
    ctx->r9 = ADD32(ctx->r9, 0X5E00);
    // 0x80281000: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281004: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80281008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028100C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281010: jal         0x8001C0EC
    // 0x80281014: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281014: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281018: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8028101C: jal         0x80280F0C
    // 0x80281020: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281020: nop

    after_2:
L_80281024:
    // 0x80281024: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281028: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028102C: addiu       $t2, $zero, 0xC9
    ctx->r10 = ADD32(0, 0XC9);
    // 0x80281030: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281034: b           L_8028103C
    // 0x80281038: nop

        goto L_8028103C;
    // 0x80281038: nop

L_8028103C:
    // 0x8028103C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281044: jr          $ra
    // 0x80281048: nop

    return;
    // 0x80281048: nop

;}
RECOMP_FUNC void func_80282698_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028269C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802826A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802826A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802826A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802826AC: jal         0x80019448
    // 0x802826B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x802826B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802826B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802826B8: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x802826BC: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x802826C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802826C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802826C8: jal         0x8001BD44
    // 0x802826CC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x802826CC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_1:
    // 0x802826D0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802826D4: addiu       $a3, $a3, 0x5E88
    ctx->r7 = ADD32(ctx->r7, 0X5E88);
    // 0x802826D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802826DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802826E0: jal         0x8001ABF4
    // 0x802826E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x802826E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802826E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802826EC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802826F0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802826F4: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
    // 0x802826F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802826FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282700: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282704: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282708: nop

    // 0x8028270C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80282710: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80282714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028271C: swc1        $f6, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f6.u32l;
    // 0x80282720: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80282724: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282728: swc1        $f8, -0x1C30($at)
    MEM_W(-0X1C30, ctx->r1) = ctx->f8.u32l;
    // 0x8028272C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80282730: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282734: swc1        $f10, -0x1C28($at)
    MEM_W(-0X1C28, ctx->r1) = ctx->f10.u32l;
    // 0x80282738: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028273C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282740: swc1        $f16, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f16.u32l;
    // 0x80282744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282748: sb          $zero, -0x1C13($at)
    MEM_B(-0X1C13, ctx->r1) = 0;
    // 0x8028274C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282750: sw          $zero, -0x1BE0($at)
    MEM_W(-0X1BE0, ctx->r1) = 0;
    // 0x80282754: jal         0x80280E84
    // 0x80282758: nop

    func_80280E84_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80282758: nop

    after_3:
    // 0x8028275C: jal         0x8028104C
    // 0x80282760: nop

    func_8028104C_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80282760: nop

    after_4:
    // 0x80282764: b           L_8028276C
    // 0x80282768: nop

        goto L_8028276C;
    // 0x80282768: nop

L_8028276C:
    // 0x8028276C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282774: jr          $ra
    // 0x80282778: nop

    return;
    // 0x80282778: nop

    // 0x8028277C: nop

;}
RECOMP_FUNC void func_80282068_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028206C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282070: jal         0x80280430
    // 0x80282074: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80282074: nop

    after_0:
    // 0x80282078: jal         0x802805E0
    // 0x8028207C: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x8028207C: nop

    after_1:
    // 0x80282080: jal         0x802806F4
    // 0x80282084: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80282084: nop

    after_2:
    // 0x80282088: jal         0x802809A0
    // 0x8028208C: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x8028208C: nop

    after_3:
    // 0x80282090: jal         0x80280808
    // 0x80282094: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80282094: nop

    after_4:
    // 0x80282098: b           L_802820A0
    // 0x8028209C: nop

        goto L_802820A0;
    // 0x8028209C: nop

L_802820A0:
    // 0x802820A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802820A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802820A8: jr          $ra
    // 0x802820AC: nop

    return;
    // 0x802820AC: nop

;}
RECOMP_FUNC void func_802821B8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802821B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802821BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802821C0: jal         0x802809F8
    // 0x802821C4: nop

    func_802809F8_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802821C4: nop

    after_0:
    // 0x802821C8: jal         0x80280A50
    // 0x802821CC: nop

    func_80280A50_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x802821CC: nop

    after_1:
    // 0x802821D0: jal         0x80280AFC
    // 0x802821D4: nop

    func_80280AFC_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802821D4: nop

    after_2:
    // 0x802821D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802821DC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802821E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802821E4: nop

    // 0x802821E8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x802821EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802821F0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802821F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802821F8: nop

    // 0x802821FC: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x80282200: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282204: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282208: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028220C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80282210: nop

    // 0x80282214: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x80282218: b           L_80282220
    // 0x8028221C: nop

        goto L_80282220;
    // 0x8028221C: nop

L_80282220:
    // 0x80282220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282228: jr          $ra
    // 0x8028222C: nop

    return;
    // 0x8028222C: nop

;}
RECOMP_FUNC void func_80280AFC_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280AFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280B08: jal         0x8001B62C
    // 0x80280B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80280B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280B10: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80280B14: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280B18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280B1C: nop

    // 0x80280B20: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80280B24: nop

    // 0x80280B28: bc1t        L_80280B84
    if (c1cs) {
        // 0x80280B2C: nop
    
            goto L_80280B84;
    }
    // 0x80280B2C: nop

    // 0x80280B30: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x80280B34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280B38: nop

    // 0x80280B3C: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80280B40: nop

    // 0x80280B44: bc1t        L_80280B84
    if (c1cs) {
        // 0x80280B48: nop
    
            goto L_80280B84;
    }
    // 0x80280B48: nop

    // 0x80280B4C: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x80280B50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280B54: nop

    // 0x80280B58: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x80280B5C: nop

    // 0x80280B60: bc1t        L_80280B84
    if (c1cs) {
        // 0x80280B64: nop
    
            goto L_80280B84;
    }
    // 0x80280B64: nop

    // 0x80280B68: lui         $at, 0x430A
    ctx->r1 = S32(0X430A << 16);
    // 0x80280B6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280B70: nop

    // 0x80280B74: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x80280B78: nop

    // 0x80280B7C: bc1f        L_80280BAC
    if (!c1cs) {
        // 0x80280B80: nop
    
            goto L_80280BAC;
    }
    // 0x80280B80: nop

L_80280B84:
    // 0x80280B84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280B88: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280B8C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280B90: nop

    // 0x80280B94: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x80280B98: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280B9C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280BA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280BA4: b           L_80280D48
    // 0x80280BA8: swc1        $f6, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->f6.u32l;
        goto L_80280D48;
    // 0x80280BA8: swc1        $f6, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->f6.u32l;
L_80280BAC:
    // 0x80280BAC: lui         $at, 0x4284
    ctx->r1 = S32(0X4284 << 16);
    // 0x80280BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280BB4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280BB8: nop

    // 0x80280BBC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280BC0: nop

    // 0x80280BC4: bc1t        L_80280C04
    if (c1cs) {
        // 0x80280BC8: nop
    
            goto L_80280C04;
    }
    // 0x80280BC8: nop

    // 0x80280BCC: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x80280BD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280BD4: nop

    // 0x80280BD8: c.eq.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl == ctx->f4.fl;
    // 0x80280BDC: nop

    // 0x80280BE0: bc1t        L_80280C04
    if (c1cs) {
        // 0x80280BE4: nop
    
            goto L_80280C04;
    }
    // 0x80280BE4: nop

    // 0x80280BE8: lui         $at, 0x4308
    ctx->r1 = S32(0X4308 << 16);
    // 0x80280BEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280BF0: nop

    // 0x80280BF4: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x80280BF8: nop

    // 0x80280BFC: bc1f        L_80280C18
    if (!c1cs) {
        // 0x80280C00: nop
    
            goto L_80280C18;
    }
    // 0x80280C00: nop

L_80280C04:
    // 0x80280C04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280C08: jal         0x8001BBDC
    // 0x80280C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80280C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80280C10: b           L_80280D48
    // 0x80280C14: nop

        goto L_80280D48;
    // 0x80280C14: nop

L_80280C18:
    // 0x80280C18: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80280C1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280C20: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280C24: nop

    // 0x80280C28: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80280C2C: nop

    // 0x80280C30: bc1f        L_80280C80
    if (!c1cs) {
        // 0x80280C34: nop
    
            goto L_80280C80;
    }
    // 0x80280C34: nop

    // 0x80280C38: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280C3C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280C40: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280C44: lwc1        $f10, 0x28A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X28A0);
    // 0x80280C48: nop

    // 0x80280C4C: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x80280C50: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280C54: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280C58: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280C5C: lwc1        $f4, 0x28A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X28A4);
    // 0x80280C60: nop

    // 0x80280C64: swc1        $f4, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->f4.u32l;
    // 0x80280C68: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80280C6C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80280C70: jal         0x8001FB3C
    // 0x80280C74: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80280C74: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80280C78: b           L_80280D48
    // 0x80280C7C: nop

        goto L_80280D48;
    // 0x80280C7C: nop

L_80280C80:
    // 0x80280C80: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x80280C84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280C88: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280C8C: nop

    // 0x80280C90: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x80280C94: nop

    // 0x80280C98: bc1f        L_80280CE8
    if (!c1cs) {
        // 0x80280C9C: nop
    
            goto L_80280CE8;
    }
    // 0x80280C9C: nop

    // 0x80280CA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80280CA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280CA8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280CAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280CB0: nop

    // 0x80280CB4: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
    // 0x80280CB8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280CBC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280CC0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280CC4: lwc1        $f6, 0x28A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X28A8);
    // 0x80280CC8: nop

    // 0x80280CCC: swc1        $f6, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->f6.u32l;
    // 0x80280CD0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80280CD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80280CD8: jal         0x8001FB3C
    // 0x80280CDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80280CDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80280CE0: b           L_80280D48
    // 0x80280CE4: nop

        goto L_80280D48;
    // 0x80280CE4: nop

L_80280CE8:
    // 0x80280CE8: lui         $at, 0x42E8
    ctx->r1 = S32(0X42E8 << 16);
    // 0x80280CEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280CF0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280CF4: nop

    // 0x80280CF8: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x80280CFC: nop

    // 0x80280D00: bc1f        L_80280D48
    if (!c1cs) {
        // 0x80280D04: nop
    
            goto L_80280D48;
    }
    // 0x80280D04: nop

    // 0x80280D08: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80280D0C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280D10: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280D14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280D18: nop

    // 0x80280D1C: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x80280D20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280D24: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280D28: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280D2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280D30: nop

    // 0x80280D34: swc1        $f16, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->f16.u32l;
    // 0x80280D38: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80280D3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80280D40: jal         0x8001FB3C
    // 0x80280D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_4;
    // 0x80280D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
L_80280D48:
    // 0x80280D48: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280D4C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280D50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280D54: lwc1        $f18, 0x4C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4C);
    // 0x80280D58: nop

    // 0x80280D5C: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80280D60: nop

    // 0x80280D64: bc1t        L_80280E6C
    if (c1cs) {
        // 0x80280D68: nop
    
            goto L_80280E6C;
    }
    // 0x80280D68: nop

    // 0x80280D6C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280D70: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280D74: nop

    // 0x80280D78: lwc1        $f10, 0x28($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80280D7C: lwc1        $f4, 0x4C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4C);
    // 0x80280D80: nop

    // 0x80280D84: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80280D88: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80280D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280D90: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280D94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280D98: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80280D9C: nop

    // 0x80280DA0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80280DA4: nop

    // 0x80280DA8: bc1f        L_80280E6C
    if (!c1cs) {
        // 0x80280DAC: nop
    
            goto L_80280E6C;
    }
    // 0x80280DAC: nop

    // 0x80280DB0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80280DB4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80280DB8: lbu         $t8, 0x130($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X130);
    // 0x80280DBC: nop

    // 0x80280DC0: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80280DC4: beq         $t9, $zero, L_80280E6C
    if (ctx->r25 == 0) {
        // 0x80280DC8: nop
    
            goto L_80280E6C;
    }
    // 0x80280DC8: nop

    // 0x80280DCC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280DD0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280DD4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80280DD8: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80280DDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280DE0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80280DE4: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80280DE8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80280DEC: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x80280DF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280DF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280DF8: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80280DFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280E00: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80280E04: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80280E08: sub.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d - ctx->f16.d;
    // 0x80280E0C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80280E10: jal         0x800843CC
    // 0x80280E14: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    func_800843CC(rdram, ctx);
        goto after_5;
    // 0x80280E14: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x80280E18: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280E1C: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x80280E20: nop

    // 0x80280E24: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80280E28: beq         $t2, $zero, L_80280E6C
    if (ctx->r10 == 0) {
        // 0x80280E2C: nop
    
            goto L_80280E6C;
    }
    // 0x80280E2C: nop

    // 0x80280E30: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280E34: addiu       $t3, $t3, 0x7760
    ctx->r11 = ADD32(ctx->r11, 0X7760);
    // 0x80280E38: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80280E3C: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80280E40: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80280E44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280E48: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80280E4C: sub.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d - ctx->f18.d;
    // 0x80280E50: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280E54: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280E58: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x80280E5C: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x80280E60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E64: jal         0x8001BBDC
    // 0x80280E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x80280E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80280E6C:
    // 0x80280E6C: b           L_80280E74
    // 0x80280E70: nop

        goto L_80280E74;
    // 0x80280E70: nop

L_80280E74:
    // 0x80280E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280E78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280E7C: jr          $ra
    // 0x80280E80: nop

    return;
    // 0x80280E80: nop

;}
RECOMP_FUNC void func_802824DC_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802824DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802824E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802824E4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802824E8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802824EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802824F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802824F4: nop

    // 0x802824F8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x802824FC: nop

    // 0x80282500: bne         $t7, $zero, L_8028266C
    if (ctx->r15 != 0) {
        // 0x80282504: nop
    
            goto L_8028266C;
    }
    // 0x80282504: nop

    // 0x80282508: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028250C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282510: nop

    // 0x80282514: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80282518: nop

    // 0x8028251C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80282520: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80282524: jal         0x8001819C
    // 0x80282528: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x80282528: nop

    after_0:
    // 0x8028252C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282530: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282534: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80282538: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8028253C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282540: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80282544: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282548: nop

    // 0x8028254C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80282550: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80282554: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282558: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028255C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282560: nop

    // 0x80282564: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80282568: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028256C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80282570: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80282574: nop

    // 0x80282578: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x8028257C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282580: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282584: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80282588: nop

    // 0x8028258C: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80282590: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282594: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282598: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028259C: nop

    // 0x802825A0: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x802825A4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802825A8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802825AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802825B0: nop

    // 0x802825B4: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x802825B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802825BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802825C0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802825C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802825C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802825CC: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x802825D0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802825D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802825D8: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x802825DC: nop

    // 0x802825E0: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x802825E4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802825E8: nop

    // 0x802825EC: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x802825F0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802825F4: addiu       $t2, $t2, 0x5E00
    ctx->r10 = ADD32(ctx->r10, 0X5E00);
    // 0x802825F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802825FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282604: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80282608: jal         0x8001C0EC
    // 0x8028260C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028260C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80282610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282614: jal         0x8001B754
    // 0x80282618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80282618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8028261C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282620: jal         0x8001BBDC
    // 0x80282624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80282624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80282628: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8028262C: addiu       $a3, $a3, 0x5E88
    ctx->r7 = ADD32(ctx->r7, 0X5E88);
    // 0x80282630: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80282634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028263C: jal         0x8001ABF4
    // 0x80282640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80282640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80282644: jal         0x80280E84
    // 0x80282648: nop

    func_80280E84_code_extra_2(rdram, ctx);
        goto after_5;
    // 0x80282648: nop

    after_5:
    // 0x8028264C: jal         0x80280F0C
    // 0x80282650: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_6;
    // 0x80282650: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x80282654: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80282658: jal         0x8001B754
    // 0x8028265C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B754(rdram, ctx);
        goto after_7;
    // 0x8028265C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80282660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80282664: jal         0x8001BBDC
    // 0x80282668: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80282668: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
L_8028266C:
    // 0x8028266C: jal         0x8001CD20
    // 0x80282670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_9;
    // 0x80282670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80282674: jal         0x8001AD6C
    // 0x80282678: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_10;
    // 0x80282678: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x8028267C: b           L_80282684
    // 0x80282680: nop

        goto L_80282684;
    // 0x80282680: nop

L_80282684:
    // 0x80282684: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80282688: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8028268C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80282690: jr          $ra
    // 0x80282694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80282694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
