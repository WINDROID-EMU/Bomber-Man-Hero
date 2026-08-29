#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802856B8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802856B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802856BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802856C0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802856C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802856C8: jal         0x802804B8
    // 0x802856CC: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802856CC: nop

    after_0:
    // 0x802856D0: jal         0x80282168
    // 0x802856D4: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802856D4: nop

    after_1:
    // 0x802856D8: b           L_802856E0
    // 0x802856DC: nop

        goto L_802856E0;
    // 0x802856DC: nop

L_802856E0:
    // 0x802856E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802856E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802856E8: jr          $ra
    // 0x802856EC: nop

    return;
    // 0x802856EC: nop

;}
RECOMP_FUNC void func_80285A8C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285A94: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285A98: jal         0x802804B8
    // 0x80285A9C: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285A9C: nop

    after_0:
    // 0x80285AA0: jal         0x80282168
    // 0x80285AA4: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285AA4: nop

    after_1:
    // 0x80285AA8: b           L_80285AB0
    // 0x80285AAC: nop

        goto L_80285AB0;
    // 0x80285AAC: nop

L_80285AB0:
    // 0x80285AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285AB8: jr          $ra
    // 0x80285ABC: nop

    return;
    // 0x80285ABC: nop

;}
RECOMP_FUNC void func_80286508_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028650C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80286510: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286514: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80286518: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8028651C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80286524: jal         0x8001BD44
    // 0x80286528: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80286528: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_0:
    // 0x8028652C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80286530: addiu       $t7, $t7, 0x6058
    ctx->r15 = ADD32(ctx->r15, 0X6058);
    // 0x80286534: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80286538: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028653C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80286540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80286544: jal         0x8001C0EC
    // 0x80286548: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80286548: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028654C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80286550: addiu       $a3, $a3, 0x6110
    ctx->r7 = ADD32(ctx->r7, 0X6110);
    // 0x80286554: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028655C: jal         0x8001ABF4
    // 0x80286560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80286560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80286564: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80286568: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028656C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80286570: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x80286574: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286578: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028657C: addiu       $t0, $zero, 0x1F5
    ctx->r8 = ADD32(0, 0X1F5);
    // 0x80286580: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80286584: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286588: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028658C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80286590: nop

    // 0x80286594: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80286598: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028659C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802865A0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802865A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802865A8: nop

    // 0x802865AC: swc1        $f6, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f6.u32l;
    // 0x802865B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802865B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802865B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802865BC: jal         0x80019448
    // 0x802865C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_3;
    // 0x802865C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x802865C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802865C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802865CC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x802865D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802865D4: jal         0x800178D4
    // 0x802865D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x802865D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x802865DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802865E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802865E4: swc1        $f8, 0x65F8($at)
    MEM_W(0X65F8, ctx->r1) = ctx->f8.u32l;
    // 0x802865E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802865EC: sh          $zero, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = 0;
    // 0x802865F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802865F4: sh          $zero, 0x660C($at)
    MEM_H(0X660C, ctx->r1) = 0;
    // 0x802865F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802865FC: sh          $zero, 0x7538($at)
    MEM_H(0X7538, ctx->r1) = 0;
    // 0x80286600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286604: sh          $zero, 0x7540($at)
    MEM_H(0X7540, ctx->r1) = 0;
    // 0x80286608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028660C: sh          $zero, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = 0;
    // 0x80286610: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286614: sh          $zero, 0x6604($at)
    MEM_H(0X6604, ctx->r1) = 0;
    // 0x80286618: b           L_80286620
    // 0x8028661C: nop

        goto L_80286620;
    // 0x8028661C: nop

L_80286620:
    // 0x80286620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80286624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80286628: jr          $ra
    // 0x8028662C: nop

    return;
    // 0x8028662C: nop

;}
RECOMP_FUNC void func_80282F00_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282F08: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x80282F0C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282F10: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282F14: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282F18: addiu       $t7, $zero, 0x202
    ctx->r15 = ADD32(0, 0X202);
    // 0x80282F1C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282F20: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282F24: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282F28: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282F2C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282F30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282F34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282F38: jal         0x8001C0EC
    // 0x80282F3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282F3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282F40: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282F44: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282F48: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282F4C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80282F50: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282F54: b           L_80282F5C
    // 0x80282F58: nop

        goto L_80282F5C;
    // 0x80282F58: nop

L_80282F5C:
    // 0x80282F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282F60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282F64: jr          $ra
    // 0x80282F68: nop

    return;
    // 0x80282F68: nop

;}
RECOMP_FUNC void func_802801F8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802801F8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802801FC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80280200: nop

    // 0x80280204: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80280208: beq         $t7, $zero, L_80280280
    if (ctx->r15 == 0) {
        // 0x8028020C: nop
    
            goto L_80280280;
    }
    // 0x8028020C: nop

    // 0x80280210: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280214: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280218: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028021C: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80280220: lwc1        $f9, 0x67D0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X67D0);
    // 0x80280224: lwc1        $f8, 0x67D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X67D4);
    // 0x80280228: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028022C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280230: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280234: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x80280238: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028023C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280240: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80280244: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280248: lwc1        $f18, 0x28($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X28);
    // 0x8028024C: nop

    // 0x80280250: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280254: nop

    // 0x80280258: bc1f        L_80280278
    if (!c1cs) {
        // 0x8028025C: nop
    
            goto L_80280278;
    }
    // 0x8028025C: nop

    // 0x80280260: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80280264: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280268: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028026C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280270: nop

    // 0x80280274: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
L_80280278:
    // 0x80280278: b           L_802802A8
    // 0x8028027C: nop

        goto L_802802A8;
    // 0x8028027C: nop

L_80280280:
    // 0x80280280: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280284: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280288: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028028C: lwc1        $f8, 0x28($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80280290: lwc1        $f17, 0x67D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X67D8);
    // 0x80280294: lwc1        $f16, 0x67DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X67DC);
    // 0x80280298: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028029C: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x802802A0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802802A4: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_802802A8:
    // 0x802802A8: jr          $ra
    // 0x802802AC: nop

    return;
    // 0x802802AC: nop

    // 0x802802B0: jr          $ra
    // 0x802802B4: nop

    return;
    // 0x802802B4: nop

;}
RECOMP_FUNC void func_80282A28_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282A2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282A30: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80282A34: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282A38: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282A3C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282A40: addiu       $t7, $zero, 0x1F8
    ctx->r15 = ADD32(0, 0X1F8);
    // 0x80282A44: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282A48: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282A4C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282A50: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282A54: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282A58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282A60: jal         0x8001C0EC
    // 0x80282A64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282A64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282A68: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282A6C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282A70: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282A74: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282A78: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282A7C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282A80: b           L_80282A88
    // 0x80282A84: nop

        goto L_80282A88;
    // 0x80282A84: nop

L_80282A88:
    // 0x80282A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282A90: jr          $ra
    // 0x80282A94: nop

    return;
    // 0x80282A94: nop

;}
RECOMP_FUNC void func_80285988_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028598C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285990: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285994: jal         0x802804B8
    // 0x80285998: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285998: nop

    after_0:
    // 0x8028599C: jal         0x80282168
    // 0x802859A0: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802859A0: nop

    after_1:
    // 0x802859A4: b           L_802859AC
    // 0x802859A8: nop

        goto L_802859AC;
    // 0x802859A8: nop

L_802859AC:
    // 0x802859AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802859B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802859B4: jr          $ra
    // 0x802859B8: nop

    return;
    // 0x802859B8: nop

;}
RECOMP_FUNC void func_802851CC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802851CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802851D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802851D4: jal         0x80283A2C
    // 0x802851D8: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802851D8: nop

    after_0:
    // 0x802851DC: beq         $v0, $zero, L_802851EC
    if (ctx->r2 == 0) {
        // 0x802851E0: nop
    
            goto L_802851EC;
    }
    // 0x802851E0: nop

    // 0x802851E4: b           L_80285230
    // 0x802851E8: nop

        goto L_80285230;
    // 0x802851E8: nop

L_802851EC:
    // 0x802851EC: jal         0x80085D54
    // 0x802851F0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802851F0: nop

    after_1:
    // 0x802851F4: beq         $v0, $zero, L_80285204
    if (ctx->r2 == 0) {
        // 0x802851F8: nop
    
            goto L_80285204;
    }
    // 0x802851F8: nop

    // 0x802851FC: b           L_80285230
    // 0x80285200: nop

        goto L_80285230;
    // 0x80285200: nop

L_80285204:
    // 0x80285204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285208: jal         0x8001B44C
    // 0x8028520C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x8028520C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80285210: beq         $v0, $zero, L_80285228
    if (ctx->r2 == 0) {
        // 0x80285214: nop
    
            goto L_80285228;
    }
    // 0x80285214: nop

    // 0x80285218: jal         0x80283928
    // 0x8028521C: nop

    func_80283928_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x8028521C: nop

    after_3:
    // 0x80285220: b           L_80285230
    // 0x80285224: nop

        goto L_80285230;
    // 0x80285224: nop

L_80285228:
    // 0x80285228: b           L_80285230
    // 0x8028522C: nop

        goto L_80285230;
    // 0x8028522C: nop

L_80285230:
    // 0x80285230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285238: jr          $ra
    // 0x8028523C: nop

    return;
    // 0x8028523C: nop

;}
RECOMP_FUNC void func_8028328C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028328C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283294: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80283298: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8028329C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802832A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802832A4: addiu       $t7, $zero, 0x207
    ctx->r15 = ADD32(0, 0X207);
    // 0x802832A8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802832AC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802832B0: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802832B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802832B8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802832BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802832C4: jal         0x8001C0EC
    // 0x802832C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802832C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802832CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832D0: jal         0x8001B754
    // 0x802832D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x802832D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802832D8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802832DC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802832E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802832E4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802832E8: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802832EC: b           L_802832F4
    // 0x802832F0: nop

        goto L_802832F4;
    // 0x802832F0: nop

L_802832F4:
    // 0x802832F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802832F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802832FC: jr          $ra
    // 0x80283300: nop

    return;
    // 0x80283300: nop

;}
RECOMP_FUNC void func_8028535C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028535C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285364: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285368: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028536C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285370: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285374: nop

    // 0x80285378: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028537C: nop

    // 0x80285380: bc1f        L_802853BC
    if (!c1cs) {
        // 0x80285384: nop
    
            goto L_802853BC;
    }
    // 0x80285384: nop

    // 0x80285388: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028538C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285390: nop

    // 0x80285394: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285398: nop

    // 0x8028539C: bc1f        L_802853BC
    if (!c1cs) {
        // 0x802853A0: nop
    
            goto L_802853BC;
    }
    // 0x802853A0: nop

    // 0x802853A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802853A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802853AC: jal         0x802804B8
    // 0x802853B0: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802853B0: nop

    after_0:
    // 0x802853B4: b           L_802853CC
    // 0x802853B8: nop

        goto L_802853CC;
    // 0x802853B8: nop

L_802853BC:
    // 0x802853BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802853C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802853C4: jal         0x802807D8
    // 0x802853C8: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802853C8: nop

    after_1:
L_802853CC:
    // 0x802853CC: jal         0x80281678
    // 0x802853D0: nop

    func_80281678_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802853D0: nop

    after_2:
    // 0x802853D4: b           L_802853DC
    // 0x802853D8: nop

        goto L_802853DC;
    // 0x802853D8: nop

L_802853DC:
    // 0x802853DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802853E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802853E4: jr          $ra
    // 0x802853E8: nop

    return;
    // 0x802853E8: nop

;}
RECOMP_FUNC void func_802836B8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802836B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802836BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802836C0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802836C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802836C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802836CC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802836D0: addiu       $t7, $zero, 0x20E
    ctx->r15 = ADD32(0, 0X20E);
    // 0x802836D4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802836D8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802836DC: lh          $t9, 0x6600($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X6600);
    // 0x802836E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802836E4: bne         $t9, $at, L_80283714
    if (ctx->r25 != ctx->r1) {
        // 0x802836E8: nop
    
            goto L_80283714;
    }
    // 0x802836E8: nop

    // 0x802836EC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802836F0: addiu       $t0, $t0, 0x6058
    ctx->r8 = ADD32(ctx->r8, 0X6058);
    // 0x802836F4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802836F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802836FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283704: jal         0x8001C0EC
    // 0x80283708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8028370C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283710: sh          $zero, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = 0;
L_80283714:
    // 0x80283714: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80283718: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x8028371C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283720: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80283724: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x80283728: b           L_80283730
    // 0x8028372C: nop

        goto L_80283730;
    // 0x8028372C: nop

L_80283730:
    // 0x80283730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283734: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283738: jr          $ra
    // 0x8028373C: nop

    return;
    // 0x8028373C: nop

;}
RECOMP_FUNC void func_80283400_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283404: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283408: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8028340C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283410: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283414: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283418: addiu       $t7, $zero, 0x215
    ctx->r15 = ADD32(0, 0X215);
    // 0x8028341C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283420: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283424: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283428: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028342C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283430: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283438: jal         0x8001C0EC
    // 0x8028343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028343C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283440: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283444: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283448: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028344C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283450: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283454: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283458: b           L_80283460
    // 0x8028345C: nop

        goto L_80283460;
    // 0x8028345C: nop

L_80283460:
    // 0x80283460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283464: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283468: jr          $ra
    // 0x8028346C: nop

    return;
    // 0x8028346C: nop

;}
RECOMP_FUNC void func_80284E0C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284E0C: jr          $ra
    // 0x80284E10: nop

    return;
    // 0x80284E10: nop

    // 0x80284E14: jr          $ra
    // 0x80284E18: nop

    return;
    // 0x80284E18: nop

;}
RECOMP_FUNC void func_80285808_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285808: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028580C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285810: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285814: jal         0x8001B62C
    // 0x80285818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80285818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8028581C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80285820: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80285824: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285828: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028582C: nop

    // 0x80285830: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80285834: nop

    // 0x80285838: bc1f        L_8028586C
    if (!c1cs) {
        // 0x8028583C: nop
    
            goto L_8028586C;
    }
    // 0x8028583C: nop

    // 0x80285840: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80285844: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285848: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028584C: lwc1        $f8, 0x68DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68DC);
    // 0x80285850: nop

    // 0x80285854: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x80285858: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8028585C: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80285860: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285864: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80285868: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_8028586C:
    // 0x8028586C: jal         0x80282168
    // 0x80285870: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285870: nop

    after_1:
    // 0x80285874: b           L_8028587C
    // 0x80285878: nop

        goto L_8028587C;
    // 0x80285878: nop

L_8028587C:
    // 0x8028587C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285884: jr          $ra
    // 0x80285888: nop

    return;
    // 0x80285888: nop

;}
RECOMP_FUNC void func_80285054_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028505C: jal         0x80283A2C
    // 0x80285060: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285060: nop

    after_0:
    // 0x80285064: beq         $v0, $zero, L_80285074
    if (ctx->r2 == 0) {
        // 0x80285068: nop
    
            goto L_80285074;
    }
    // 0x80285068: nop

    // 0x8028506C: b           L_80285108
    // 0x80285070: nop

        goto L_80285108;
    // 0x80285070: nop

L_80285074:
    // 0x80285074: jal         0x80085D54
    // 0x80285078: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80285078: nop

    after_1:
    // 0x8028507C: beq         $v0, $zero, L_8028508C
    if (ctx->r2 == 0) {
        // 0x80285080: nop
    
            goto L_8028508C;
    }
    // 0x80285080: nop

    // 0x80285084: b           L_80285108
    // 0x80285088: nop

        goto L_80285108;
    // 0x80285088: nop

L_8028508C:
    // 0x8028508C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285090: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80285094: nop

    // 0x80285098: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028509C: bne         $t7, $zero, L_802850B4
    if (ctx->r15 != 0) {
        // 0x802850A0: nop
    
            goto L_802850B4;
    }
    // 0x802850A0: nop

    // 0x802850A4: jal         0x80282B2C
    // 0x802850A8: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802850A8: nop

    after_2:
    // 0x802850AC: b           L_80285108
    // 0x802850B0: nop

        goto L_80285108;
    // 0x802850B0: nop

L_802850B4:
    // 0x802850B4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802850B8: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802850BC: nop

    // 0x802850C0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802850C4: beq         $t9, $zero, L_802850DC
    if (ctx->r25 == 0) {
        // 0x802850C8: nop
    
            goto L_802850DC;
    }
    // 0x802850C8: nop

    // 0x802850CC: jal         0x80282A98
    // 0x802850D0: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802850D0: nop

    after_3:
    // 0x802850D4: b           L_80285108
    // 0x802850D8: nop

        goto L_80285108;
    // 0x802850D8: nop

L_802850DC:
    // 0x802850DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802850E0: jal         0x8001B44C
    // 0x802850E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x802850E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802850E8: beq         $v0, $zero, L_80285100
    if (ctx->r2 == 0) {
        // 0x802850EC: nop
    
            goto L_80285100;
    }
    // 0x802850EC: nop

    // 0x802850F0: jal         0x80282854
    // 0x802850F4: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x802850F4: nop

    after_5:
    // 0x802850F8: b           L_80285108
    // 0x802850FC: nop

        goto L_80285108;
    // 0x802850FC: nop

L_80285100:
    // 0x80285100: b           L_80285108
    // 0x80285104: nop

        goto L_80285108;
    // 0x80285104: nop

L_80285108:
    // 0x80285108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028510C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285110: jr          $ra
    // 0x80285114: nop

    return;
    // 0x80285114: nop

;}
RECOMP_FUNC void func_80284B94_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284B9C: jal         0x80283B18
    // 0x80284BA0: nop

    func_80283B18_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284BA0: nop

    after_0:
    // 0x80284BA4: beq         $v0, $zero, L_80284BB4
    if (ctx->r2 == 0) {
        // 0x80284BA8: nop
    
            goto L_80284BB4;
    }
    // 0x80284BA8: nop

    // 0x80284BAC: b           L_80284BF8
    // 0x80284BB0: nop

        goto L_80284BF8;
    // 0x80284BB0: nop

L_80284BB4:
    // 0x80284BB4: jal         0x80085D54
    // 0x80284BB8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284BB8: nop

    after_1:
    // 0x80284BBC: beq         $v0, $zero, L_80284BCC
    if (ctx->r2 == 0) {
        // 0x80284BC0: nop
    
            goto L_80284BCC;
    }
    // 0x80284BC0: nop

    // 0x80284BC4: b           L_80284BF8
    // 0x80284BC8: nop

        goto L_80284BF8;
    // 0x80284BC8: nop

L_80284BCC:
    // 0x80284BCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284BD0: jal         0x8001B44C
    // 0x80284BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80284BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284BD8: beq         $v0, $zero, L_80284BF0
    if (ctx->r2 == 0) {
        // 0x80284BDC: nop
    
            goto L_80284BF0;
    }
    // 0x80284BDC: nop

    // 0x80284BE0: jal         0x8028328C
    // 0x80284BE4: nop

    func_8028328C_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284BE4: nop

    after_3:
    // 0x80284BE8: b           L_80284BF8
    // 0x80284BEC: nop

        goto L_80284BF8;
    // 0x80284BEC: nop

L_80284BF0:
    // 0x80284BF0: b           L_80284BF8
    // 0x80284BF4: nop

        goto L_80284BF8;
    // 0x80284BF4: nop

L_80284BF8:
    // 0x80284BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284C00: jr          $ra
    // 0x80284C04: nop

    return;
    // 0x80284C04: nop

;}
RECOMP_FUNC void func_80283FE0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283FE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283FE8: jal         0x80283A2C
    // 0x80283FEC: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80283FEC: nop

    after_0:
    // 0x80283FF0: beq         $v0, $zero, L_80284000
    if (ctx->r2 == 0) {
        // 0x80283FF4: nop
    
            goto L_80284000;
    }
    // 0x80283FF4: nop

    // 0x80283FF8: b           L_8028408C
    // 0x80283FFC: nop

        goto L_8028408C;
    // 0x80283FFC: nop

L_80284000:
    // 0x80284000: jal         0x80085D54
    // 0x80284004: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284004: nop

    after_1:
    // 0x80284008: beq         $v0, $zero, L_80284018
    if (ctx->r2 == 0) {
        // 0x8028400C: nop
    
            goto L_80284018;
    }
    // 0x8028400C: nop

    // 0x80284010: b           L_8028408C
    // 0x80284014: nop

        goto L_8028408C;
    // 0x80284014: nop

L_80284018:
    // 0x80284018: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028401C: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80284020: nop

    // 0x80284024: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284028: bne         $t7, $zero, L_80284040
    if (ctx->r15 != 0) {
        // 0x8028402C: nop
    
            goto L_80284040;
    }
    // 0x8028402C: nop

    // 0x80284030: jal         0x80282B2C
    // 0x80284034: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284034: nop

    after_2:
    // 0x80284038: b           L_8028408C
    // 0x8028403C: nop

        goto L_8028408C;
    // 0x8028403C: nop

L_80284040:
    // 0x80284040: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284044: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80284048: nop

    // 0x8028404C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80284050: beq         $t9, $zero, L_80284068
    if (ctx->r25 == 0) {
        // 0x80284054: nop
    
            goto L_80284068;
    }
    // 0x80284054: nop

    // 0x80284058: jal         0x80282A98
    // 0x8028405C: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x8028405C: nop

    after_3:
    // 0x80284060: b           L_8028408C
    // 0x80284064: nop

        goto L_8028408C;
    // 0x80284064: nop

L_80284068:
    // 0x80284068: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028406C: jal         0x8001B44C
    // 0x80284070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80284070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80284074: beq         $v0, $zero, L_80284084
    if (ctx->r2 == 0) {
        // 0x80284078: nop
    
            goto L_80284084;
    }
    // 0x80284078: nop

    // 0x8028407C: jal         0x80282854
    // 0x80284080: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80284080: nop

    after_5:
L_80284084:
    // 0x80284084: b           L_8028408C
    // 0x80284088: nop

        goto L_8028408C;
    // 0x80284088: nop

L_8028408C:
    // 0x8028408C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284094: jr          $ra
    // 0x80284098: nop

    return;
    // 0x80284098: nop

;}
RECOMP_FUNC void func_802829B8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802829BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802829C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802829C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802829C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802829CC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802829D0: addiu       $t7, $zero, 0x213
    ctx->r15 = ADD32(0, 0X213);
    // 0x802829D4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802829D8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802829DC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802829E0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802829E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802829E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802829EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802829F0: jal         0x8001C0EC
    // 0x802829F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802829F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802829F8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802829FC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282A00: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282A04: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282A08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282A0C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282A10: b           L_80282A18
    // 0x80282A14: nop

        goto L_80282A18;
    // 0x80282A14: nop

L_80282A18:
    // 0x80282A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282A1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282A20: jr          $ra
    // 0x80282A24: nop

    return;
    // 0x80282A24: nop

;}
RECOMP_FUNC void func_802856F0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802856F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802856F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802856F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802856FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285700: jal         0x802804B8
    // 0x80285704: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285704: nop

    after_0:
    // 0x80285708: jal         0x80281678
    // 0x8028570C: nop

    func_80281678_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x8028570C: nop

    after_1:
    // 0x80285710: b           L_80285718
    // 0x80285714: nop

        goto L_80285718;
    // 0x80285714: nop

L_80285718:
    // 0x80285718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028571C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285720: jr          $ra
    // 0x80285724: nop

    return;
    // 0x80285724: nop

;}
RECOMP_FUNC void func_80285304_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028530C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285310: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80285314: nop

    // 0x80285318: slti        $at, $t6, 0x78
    ctx->r1 = SIGNED(ctx->r14) < 0X78 ? 1 : 0;
    // 0x8028531C: bne         $at, $zero, L_80285330
    if (ctx->r1 != 0) {
        // 0x80285320: nop
    
            goto L_80285330;
    }
    // 0x80285320: nop

    // 0x80285324: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80285328: jal         0x80069A54
    // 0x8028532C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x8028532C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80285330:
    // 0x80285330: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285334: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x80285338: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028533C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80285340: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
    // 0x80285344: b           L_8028534C
    // 0x80285348: nop

        goto L_8028534C;
    // 0x80285348: nop

L_8028534C:
    // 0x8028534C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285354: jr          $ra
    // 0x80285358: nop

    return;
    // 0x80285358: nop

;}
RECOMP_FUNC void func_802859F0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802859F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802859F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802859F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802859FC: jal         0x802804B8
    // 0x80285A00: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285A00: nop

    after_0:
    // 0x80285A04: jal         0x80282168
    // 0x80285A08: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285A08: nop

    after_1:
    // 0x80285A0C: b           L_80285A14
    // 0x80285A10: nop

        goto L_80285A14;
    // 0x80285A10: nop

L_80285A14:
    // 0x80285A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285A1C: jr          $ra
    // 0x80285A20: nop

    return;
    // 0x80285A20: nop

;}
RECOMP_FUNC void func_80285798_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028579C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802857A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802857A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802857A8: jal         0x802804B8
    // 0x802857AC: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802857AC: nop

    after_0:
    // 0x802857B0: jal         0x80280B88
    // 0x802857B4: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802857B4: nop

    after_1:
    // 0x802857B8: b           L_802857C0
    // 0x802857BC: nop

        goto L_802857C0;
    // 0x802857BC: nop

L_802857C0:
    // 0x802857C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802857C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802857C8: jr          $ra
    // 0x802857CC: nop

    return;
    // 0x802857CC: nop

;}
RECOMP_FUNC void func_80284C08_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284C10: jal         0x80283B18
    // 0x80284C14: nop

    func_80283B18_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284C14: nop

    after_0:
    // 0x80284C18: beq         $v0, $zero, L_80284C28
    if (ctx->r2 == 0) {
        // 0x80284C1C: nop
    
            goto L_80284C28;
    }
    // 0x80284C1C: nop

    // 0x80284C20: b           L_80284C84
    // 0x80284C24: nop

        goto L_80284C84;
    // 0x80284C24: nop

L_80284C28:
    // 0x80284C28: jal         0x80085D54
    // 0x80284C2C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284C2C: nop

    after_1:
    // 0x80284C30: beq         $v0, $zero, L_80284C40
    if (ctx->r2 == 0) {
        // 0x80284C34: nop
    
            goto L_80284C40;
    }
    // 0x80284C34: nop

    // 0x80284C38: b           L_80284C84
    // 0x80284C3C: nop

        goto L_80284C84;
    // 0x80284C3C: nop

L_80284C40:
    // 0x80284C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284C44: jal         0x8001B44C
    // 0x80284C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80284C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284C4C: beq         $v0, $zero, L_80284C7C
    if (ctx->r2 == 0) {
        // 0x80284C50: nop
    
            goto L_80284C7C;
    }
    // 0x80284C50: nop

    // 0x80284C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284C58: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80284C5C: nop

    // 0x80284C60: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284C64: beq         $t7, $zero, L_80284C7C
    if (ctx->r15 == 0) {
        // 0x80284C68: nop
    
            goto L_80284C7C;
    }
    // 0x80284C68: nop

    // 0x80284C6C: jal         0x80283304
    // 0x80284C70: nop

    func_80283304_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284C70: nop

    after_3:
    // 0x80284C74: b           L_80284C84
    // 0x80284C78: nop

        goto L_80284C84;
    // 0x80284C78: nop

L_80284C7C:
    // 0x80284C7C: b           L_80284C84
    // 0x80284C80: nop

        goto L_80284C84;
    // 0x80284C80: nop

L_80284C84:
    // 0x80284C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284C8C: jr          $ra
    // 0x80284C90: nop

    return;
    // 0x80284C90: nop

;}
RECOMP_FUNC void func_8028560C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028560C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285618: jal         0x8001B62C
    // 0x8028561C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8028561C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80285620: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80285624: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80285628: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028562C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80285630: nop

    // 0x80285634: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80285638: nop

    // 0x8028563C: bc1f        L_80285670
    if (!c1cs) {
        // 0x80285640: nop
    
            goto L_80285670;
    }
    // 0x80285640: nop

    // 0x80285644: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80285648: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028564C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285650: lwc1        $f8, 0x68D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68D8);
    // 0x80285654: nop

    // 0x80285658: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x8028565C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80285660: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80285664: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285668: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8028566C: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_80285670:
    // 0x80285670: jal         0x80282168
    // 0x80285674: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285674: nop

    after_1:
    // 0x80285678: b           L_80285680
    // 0x8028567C: nop

        goto L_80285680;
    // 0x8028567C: nop

L_80285680:
    // 0x80285680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285688: jr          $ra
    // 0x8028568C: nop

    return;
    // 0x8028568C: nop

;}
RECOMP_FUNC void func_802835CC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802835CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802835D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802835D4: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802835D8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802835DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802835E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802835E4: addiu       $t7, $zero, 0x20C
    ctx->r15 = ADD32(0, 0X20C);
    // 0x802835E8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802835EC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802835F0: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802835F4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802835F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802835FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283604: jal         0x8001C0EC
    // 0x80283608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8028360C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283610: jal         0x8001B754
    // 0x80283614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80283614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283618: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8028361C: addiu       $a3, $a3, 0x6110
    ctx->r7 = ADD32(ctx->r7, 0X6110);
    // 0x80283620: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80283624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028362C: jal         0x8001ABF4
    // 0x80283630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80283630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80283634: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283638: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x8028363C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283640: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283644: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283648: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x8028364C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283650: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80283654: b           L_8028365C
    // 0x80283658: nop

        goto L_8028365C;
    // 0x80283658: nop

L_8028365C:
    // 0x8028365C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283664: jr          $ra
    // 0x80283668: nop

    return;
    // 0x80283668: nop

;}
RECOMP_FUNC void func_80283854_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283854: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80283858: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8028385C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80283860: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283864: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283868: addiu       $t7, $zero, 0x210
    ctx->r15 = ADD32(0, 0X210);
    // 0x8028386C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283870: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80283874: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283878: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028387C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80283880: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80283884: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80283888: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028388C: sh          $t1, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = ctx->r9;
    // 0x80283890: b           L_80283898
    // 0x80283894: nop

        goto L_80283898;
    // 0x80283894: nop

L_80283898:
    // 0x80283898: jr          $ra
    // 0x8028389C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8028389C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80280000_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
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
    // 0x80280018: lwc1        $f9, 0x67B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X67B0);
    // 0x8028001C: lwc1        $f8, 0x67B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X67B4);
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
    // 0x80280030: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80280034: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280038: nop

    // 0x8028003C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280040: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80280044: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280048: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028004C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280050: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80280054: lwc1        $f9, 0x67B8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X67B8);
    // 0x80280058: lwc1        $f8, 0x67BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X67BC);
    // 0x8028005C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280060: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280064: jal         0x80036570
    // 0x80280068: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80280068: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8028006C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80280070: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280074: nop

    // 0x80280078: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028007C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80280080: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280084: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280088: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028008C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80280090: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80280094: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80280098: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8028009C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802800A0: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x802800A4: jal         0x80067748
    // 0x802800A8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_80067748(rdram, ctx);
        goto after_2;
    // 0x802800A8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x802800AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802800B0: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x802800B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802800B8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x802800BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802800C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802800C4: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x802800C8: nop

    // 0x802800CC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x802800D0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802800D4: lh          $t2, 0x7540($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7540);
    // 0x802800D8: nop

    // 0x802800DC: bne         $t2, $zero, L_80280124
    if (ctx->r10 != 0) {
        // 0x802800E0: nop
    
            goto L_80280124;
    }
    // 0x802800E0: nop

    // 0x802800E4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802800E8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802800EC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802800F0: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802800F4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802800F8: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x802800FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80280100: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80280104: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80280108: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8028010C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80280110: jal         0x80081468
    // 0x80280114: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    func_80081468(rdram, ctx);
        goto after_3;
    // 0x80280114: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    after_3:
    // 0x80280118: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8028011C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280120: sh          $t4, 0x7540($at)
    MEM_H(0X7540, ctx->r1) = ctx->r12;
L_80280124:
    // 0x80280124: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280128: lh          $t5, 0x7540($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7540);
    // 0x8028012C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280130: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80280134: sh          $t6, 0x7540($at)
    MEM_H(0X7540, ctx->r1) = ctx->r14;
    // 0x80280138: b           L_80280140
    // 0x8028013C: nop

        goto L_80280140;
    // 0x8028013C: nop

L_80280140:
    // 0x80280140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280148: jr          $ra
    // 0x8028014C: nop

    return;
    // 0x8028014C: nop

;}
RECOMP_FUNC void func_80285BF8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285C04: jal         0x8001B62C
    // 0x80285C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80285C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80285C0C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80285C10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80285C14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285C18: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80285C1C: nop

    // 0x80285C20: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80285C24: nop

    // 0x80285C28: bc1f        L_80285C5C
    if (!c1cs) {
        // 0x80285C2C: nop
    
            goto L_80285C5C;
    }
    // 0x80285C2C: nop

    // 0x80285C30: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80285C34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285C38: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285C40: nop

    // 0x80285C44: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x80285C48: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80285C4C: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80285C50: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80285C54: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80285C58: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_80285C5C:
    // 0x80285C5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285C60: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80285C64: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285C68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80285C6C: nop

    // 0x80285C70: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80285C74: nop

    // 0x80285C78: bc1f        L_80285CB4
    if (!c1cs) {
        // 0x80285C7C: nop
    
            goto L_80285CB4;
    }
    // 0x80285C7C: nop

    // 0x80285C80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285C84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80285C88: nop

    // 0x80285C8C: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80285C90: nop

    // 0x80285C94: bc1f        L_80285CB4
    if (!c1cs) {
        // 0x80285C98: nop
    
            goto L_80285CB4;
    }
    // 0x80285C98: nop

    // 0x80285C9C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80285CA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285CA4: jal         0x802804B8
    // 0x80285CA8: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285CA8: nop

    after_1:
    // 0x80285CAC: b           L_80285CC4
    // 0x80285CB0: nop

        goto L_80285CC4;
    // 0x80285CB0: nop

L_80285CB4:
    // 0x80285CB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285CB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285CBC: jal         0x802807D8
    // 0x80285CC0: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285CC0: nop

    after_2:
L_80285CC4:
    // 0x80285CC4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285CC8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80285CCC: nop

    // 0x80285CD0: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80285CD4: nop

    // 0x80285CD8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80285CDC: jal         0x80282168
    // 0x80285CE0: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80285CE0: nop

    after_3:
    // 0x80285CE4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285CE8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80285CEC: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80285CF0: nop

    // 0x80285CF4: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x80285CF8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80285CFC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80285D00: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80285D04: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80285D08: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80285D0C: jal         0x80015538
    // 0x80285D10: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80285D10: nop

    after_4:
    // 0x80285D14: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80285D18: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80285D1C: nop

    // 0x80285D20: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80285D24: b           L_80285D2C
    // 0x80285D28: nop

        goto L_80285D2C;
    // 0x80285D28: nop

L_80285D2C:
    // 0x80285D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285D30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285D34: jr          $ra
    // 0x80285D38: nop

    return;
    // 0x80285D38: nop

;}
RECOMP_FUNC void func_802831D4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802831D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802831D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802831DC: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x802831E0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802831E4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802831E8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802831EC: addiu       $t7, $zero, 0x206
    ctx->r15 = ADD32(0, 0X206);
    // 0x802831F0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802831F4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802831F8: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802831FC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283200: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028320C: jal         0x8001C0EC
    // 0x80283210: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283210: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283218: jal         0x8001B754
    // 0x8028321C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x8028321C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283220: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283224: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283228: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028322C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80283230: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028323C: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80283240: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283244: jal         0x800178D4
    // 0x80283248: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80283248: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8028324C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283258: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028325C: jal         0x800178D4
    // 0x80283260: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80283260: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80283264: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028326C: jal         0x8001FB3C
    // 0x80283270: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_4;
    // 0x80283270: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80283274: b           L_8028327C
    // 0x80283278: nop

        goto L_8028327C;
    // 0x80283278: nop

L_8028327C:
    // 0x8028327C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283284: jr          $ra
    // 0x80283288: nop

    return;
    // 0x80283288: nop

;}
RECOMP_FUNC void func_80283DE8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283DE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283DF0: jal         0x80283A2C
    // 0x80283DF4: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80283DF4: nop

    after_0:
    // 0x80283DF8: beq         $v0, $zero, L_80283E08
    if (ctx->r2 == 0) {
        // 0x80283DFC: nop
    
            goto L_80283E08;
    }
    // 0x80283DFC: nop

    // 0x80283E00: b           L_80283ED4
    // 0x80283E04: nop

        goto L_80283ED4;
    // 0x80283E04: nop

L_80283E08:
    // 0x80283E08: jal         0x80085D54
    // 0x80283E0C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80283E0C: nop

    after_1:
    // 0x80283E10: beq         $v0, $zero, L_80283E20
    if (ctx->r2 == 0) {
        // 0x80283E14: nop
    
            goto L_80283E20;
    }
    // 0x80283E14: nop

    // 0x80283E18: b           L_80283ED4
    // 0x80283E1C: nop

        goto L_80283ED4;
    // 0x80283E1C: nop

L_80283E20:
    // 0x80283E20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283E24: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80283E28: nop

    // 0x80283E2C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80283E30: bne         $t7, $zero, L_80283E48
    if (ctx->r15 != 0) {
        // 0x80283E34: nop
    
            goto L_80283E48;
    }
    // 0x80283E34: nop

    // 0x80283E38: jal         0x80282B2C
    // 0x80283E3C: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80283E3C: nop

    after_2:
    // 0x80283E40: b           L_80283ED4
    // 0x80283E44: nop

        goto L_80283ED4;
    // 0x80283E44: nop

L_80283E48:
    // 0x80283E48: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283E4C: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80283E50: nop

    // 0x80283E54: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80283E58: beq         $t9, $zero, L_80283E88
    if (ctx->r25 == 0) {
        // 0x80283E5C: nop
    
            goto L_80283E88;
    }
    // 0x80283E5C: nop

    // 0x80283E60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283E68: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80283E6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283E70: jal         0x800178D4
    // 0x80283E74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80283E74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80283E78: jal         0x802837D8
    // 0x80283E7C: nop

    func_802837D8_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80283E7C: nop

    after_4:
    // 0x80283E80: b           L_80283ED4
    // 0x80283E84: nop

        goto L_80283ED4;
    // 0x80283E84: nop

L_80283E88:
    // 0x80283E88: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283E8C: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x80283E90: nop

    // 0x80283E94: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80283E98: beq         $t1, $zero, L_80283EB0
    if (ctx->r9 == 0) {
        // 0x80283E9C: nop
    
            goto L_80283EB0;
    }
    // 0x80283E9C: nop

    // 0x80283EA0: jal         0x80282A98
    // 0x80283EA4: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80283EA4: nop

    after_5:
    // 0x80283EA8: b           L_80283ED4
    // 0x80283EAC: nop

        goto L_80283ED4;
    // 0x80283EAC: nop

L_80283EB0:
    // 0x80283EB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283EB4: jal         0x8001B44C
    // 0x80283EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x80283EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80283EBC: beq         $v0, $zero, L_80283ECC
    if (ctx->r2 == 0) {
        // 0x80283EC0: nop
    
            goto L_80283ECC;
    }
    // 0x80283EC0: nop

    // 0x80283EC4: jal         0x802828D8
    // 0x80283EC8: nop

    func_802828D8_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x80283EC8: nop

    after_7:
L_80283ECC:
    // 0x80283ECC: b           L_80283ED4
    // 0x80283ED0: nop

        goto L_80283ED4;
    // 0x80283ED0: nop

L_80283ED4:
    // 0x80283ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283EDC: jr          $ra
    // 0x80283EE0: nop

    return;
    // 0x80283EE0: nop

;}
RECOMP_FUNC void func_80285F2C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285F34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285F38: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285F3C: jal         0x802804B8
    // 0x80285F40: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285F40: nop

    after_0:
    // 0x80285F44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285F48: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285F4C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285F50: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80285F54: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80285F58: jal         0x80015538
    // 0x80285F5C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80285F5C: nop

    after_1:
    // 0x80285F60: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285F64: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285F68: nop

    // 0x80285F6C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80285F70: b           L_80285F78
    // 0x80285F74: nop

        goto L_80285F78;
    // 0x80285F74: nop

L_80285F78:
    // 0x80285F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285F80: jr          $ra
    // 0x80285F84: nop

    return;
    // 0x80285F84: nop

;}
RECOMP_FUNC void func_80283124_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283124: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028312C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80283130: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283134: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283138: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028313C: addiu       $t7, $zero, 0x205
    ctx->r15 = ADD32(0, 0X205);
    // 0x80283140: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283144: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283148: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x8028314C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283150: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283154: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028315C: jal         0x8001C0EC
    // 0x80283160: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283160: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283164: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283168: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x8028316C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283170: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283174: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283178: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x8028317C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283184: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80283188: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028318C: jal         0x800178D4
    // 0x80283190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80283190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80283194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028319C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802831A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802831A4: jal         0x800178D4
    // 0x802831A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802831A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802831AC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802831B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802831B4: jal         0x8001FB3C
    // 0x802831B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x802831B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x802831BC: b           L_802831C4
    // 0x802831C0: nop

        goto L_802831C4;
    // 0x802831C0: nop

L_802831C4:
    // 0x802831C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802831C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802831CC: jr          $ra
    // 0x802831D0: nop

    return;
    // 0x802831D0: nop

;}
RECOMP_FUNC void func_80284DA0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284DA8: jal         0x80085D54
    // 0x80284DAC: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80284DAC: nop

    after_0:
    // 0x80284DB0: beq         $v0, $zero, L_80284DC0
    if (ctx->r2 == 0) {
        // 0x80284DB4: nop
    
            goto L_80284DC0;
    }
    // 0x80284DB4: nop

    // 0x80284DB8: b           L_80284DEC
    // 0x80284DBC: nop

        goto L_80284DEC;
    // 0x80284DBC: nop

L_80284DC0:
    // 0x80284DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284DC4: jal         0x8001B44C
    // 0x80284DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80284DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80284DCC: beq         $v0, $zero, L_80284DE4
    if (ctx->r2 == 0) {
        // 0x80284DD0: nop
    
            goto L_80284DE4;
    }
    // 0x80284DD0: nop

    // 0x80284DD4: jal         0x80282854
    // 0x80284DD8: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284DD8: nop

    after_2:
    // 0x80284DDC: b           L_80284DEC
    // 0x80284DE0: nop

        goto L_80284DEC;
    // 0x80284DE0: nop

L_80284DE4:
    // 0x80284DE4: b           L_80284DEC
    // 0x80284DE8: nop

        goto L_80284DEC;
    // 0x80284DE8: nop

L_80284DEC:
    // 0x80284DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284DF4: jr          $ra
    // 0x80284DF8: nop

    return;
    // 0x80284DF8: nop

;}
RECOMP_FUNC void func_80284880_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284884: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284888: jal         0x80283A2C
    // 0x8028488C: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028488C: nop

    after_0:
    // 0x80284890: beq         $v0, $zero, L_802848A0
    if (ctx->r2 == 0) {
        // 0x80284894: nop
    
            goto L_802848A0;
    }
    // 0x80284894: nop

    // 0x80284898: b           L_80284924
    // 0x8028489C: nop

        goto L_80284924;
    // 0x8028489C: nop

L_802848A0:
    // 0x802848A0: jal         0x80085D54
    // 0x802848A4: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802848A4: nop

    after_1:
    // 0x802848A8: beq         $v0, $zero, L_802848B8
    if (ctx->r2 == 0) {
        // 0x802848AC: nop
    
            goto L_802848B8;
    }
    // 0x802848AC: nop

    // 0x802848B0: b           L_80284924
    // 0x802848B4: nop

        goto L_80284924;
    // 0x802848B4: nop

L_802848B8:
    // 0x802848B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802848BC: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x802848C0: nop

    // 0x802848C4: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802848C8: beq         $t7, $zero, L_802848F8
    if (ctx->r15 == 0) {
        // 0x802848CC: nop
    
            goto L_802848F8;
    }
    // 0x802848CC: nop

    // 0x802848D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802848D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802848D8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802848DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802848E0: jal         0x800178D4
    // 0x802848E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802848E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802848E8: jal         0x80283854
    // 0x802848EC: nop

    func_80283854_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802848EC: nop

    after_3:
    // 0x802848F0: b           L_80284924
    // 0x802848F4: nop

        goto L_80284924;
    // 0x802848F4: nop

L_802848F8:
    // 0x802848F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802848FC: jal         0x8001B44C
    // 0x80284900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80284900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80284904: beq         $v0, $zero, L_8028491C
    if (ctx->r2 == 0) {
        // 0x80284908: nop
    
            goto L_8028491C;
    }
    // 0x80284908: nop

    // 0x8028490C: jal         0x80282F6C
    // 0x80284910: nop

    func_80282F6C_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80284910: nop

    after_5:
    // 0x80284914: b           L_80284924
    // 0x80284918: nop

        goto L_80284924;
    // 0x80284918: nop

L_8028491C:
    // 0x8028491C: b           L_80284924
    // 0x80284920: nop

        goto L_80284924;
    // 0x80284920: nop

L_80284924:
    // 0x80284924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028492C: jr          $ra
    // 0x80284930: nop

    return;
    // 0x80284930: nop

;}
RECOMP_FUNC void func_80283304_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028330C: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80283310: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283314: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283318: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028331C: addiu       $t7, $zero, 0x208
    ctx->r15 = ADD32(0, 0X208);
    // 0x80283320: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283324: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283328: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x8028332C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283330: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028333C: jal         0x8001C0EC
    // 0x80283340: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283340: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283348: jal         0x8001B754
    // 0x8028334C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x8028334C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283350: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283354: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283358: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028335C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283360: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283364: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283368: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8028336C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80283370: jal         0x8001FB3C
    // 0x80283374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80283374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80283378: b           L_80283380
    // 0x8028337C: nop

        goto L_80283380;
    // 0x8028337C: nop

L_80283380:
    // 0x80283380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283384: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283388: jr          $ra
    // 0x8028338C: nop

    return;
    // 0x8028338C: nop

;}
RECOMP_FUNC void func_80282D28_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282D28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282D2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282D30: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80282D34: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282D38: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282D3C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282D40: addiu       $t7, $zero, 0x1FE
    ctx->r15 = ADD32(0, 0X1FE);
    // 0x80282D44: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282D48: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282D4C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282D50: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282D54: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282D60: jal         0x8001C0EC
    // 0x80282D64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282D64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282D68: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282D6C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282D70: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282D74: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282D78: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282D7C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282D80: b           L_80282D88
    // 0x80282D84: nop

        goto L_80282D88;
    // 0x80282D84: nop

L_80282D88:
    // 0x80282D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282D8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282D90: jr          $ra
    // 0x80282D94: nop

    return;
    // 0x80282D94: nop

;}
RECOMP_FUNC void func_80285728_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028572C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285730: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285734: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285738: jal         0x802804B8
    // 0x8028573C: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028573C: nop

    after_0:
    // 0x80285740: jal         0x80280B88
    // 0x80285744: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285744: nop

    after_1:
    // 0x80285748: b           L_80285750
    // 0x8028574C: nop

        goto L_80285750;
    // 0x8028574C: nop

L_80285750:
    // 0x80285750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285758: jr          $ra
    // 0x8028575C: nop

    return;
    // 0x8028575C: nop

;}
RECOMP_FUNC void func_802837D8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802837D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802837DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802837E0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x802837E4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802837E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802837EC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802837F0: addiu       $t7, $zero, 0x216
    ctx->r15 = ADD32(0, 0X216);
    // 0x802837F4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802837F8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802837FC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283800: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283804: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028380C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283810: jal         0x8001C0EC
    // 0x80283814: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283814: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283818: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8028381C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283820: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283824: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283828: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028382C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283830: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80283834: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283838: sh          $t2, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = ctx->r10;
    // 0x8028383C: b           L_80283844
    // 0x80283840: nop

        goto L_80283844;
    // 0x80283840: nop

L_80283844:
    // 0x80283844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028384C: jr          $ra
    // 0x80283850: nop

    return;
    // 0x80283850: nop

;}
RECOMP_FUNC void func_80283A2C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283A2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283A30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283A34: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80283A38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283A3C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283A40: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80283A44: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80283A48: nop

    // 0x80283A4C: beq         $t7, $at, L_80283A5C
    if (ctx->r15 == ctx->r1) {
        // 0x80283A50: nop
    
            goto L_80283A5C;
    }
    // 0x80283A50: nop

    // 0x80283A54: bne         $t7, $zero, L_80283AF4
    if (ctx->r15 != 0) {
        // 0x80283A58: nop
    
            goto L_80283AF4;
    }
    // 0x80283A58: nop

L_80283A5C:
    // 0x80283A5C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283A60: lbu         $t8, -0x1F78($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F78);
    // 0x80283A64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80283A68: bne         $t8, $at, L_80283AB0
    if (ctx->r24 != ctx->r1) {
        // 0x80283A6C: nop
    
            goto L_80283AB0;
    }
    // 0x80283A6C: nop

    // 0x80283A70: b           L_80283A78
    // 0x80283A74: nop

        goto L_80283A78;
    // 0x80283A74: nop

L_80283A78:
    // 0x80283A78: jal         0x8006AA24
    // 0x80283A7C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006AA24(rdram, ctx);
        goto after_0;
    // 0x80283A7C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80283A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283A88: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80283A8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283A90: jal         0x800178D4
    // 0x80283A94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80283A94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80283A98: jal         0x802839C0
    // 0x80283A9C: nop

    func_802839C0_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80283A9C: nop

    after_2:
    // 0x80283AA0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80283AA4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80283AA8: b           L_80283AF4
    // 0x80283AAC: nop

        goto L_80283AF4;
    // 0x80283AAC: nop

L_80283AB0:
    // 0x80283AB0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283AB4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283AB8: nop

    // 0x80283ABC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80283AC0: bne         $t1, $zero, L_80283ADC
    if (ctx->r9 != 0) {
        // 0x80283AC4: nop
    
            goto L_80283ADC;
    }
    // 0x80283AC4: nop

    // 0x80283AC8: jal         0x80283004
    // 0x80283ACC: nop

    func_80283004_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80283ACC: nop

    after_3:
    // 0x80283AD0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80283AD4: b           L_80283AEC
    // 0x80283AD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
        goto L_80283AEC;
    // 0x80283AD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_80283ADC:
    // 0x80283ADC: jal         0x802831D4
    // 0x80283AE0: nop

    func_802831D4_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80283AE0: nop

    after_4:
    // 0x80283AE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80283AE8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_80283AEC:
    // 0x80283AEC: b           L_80283AF4
    // 0x80283AF0: nop

        goto L_80283AF4;
    // 0x80283AF0: nop

L_80283AF4:
    // 0x80283AF4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80283AF8: b           L_80283B08
    // 0x80283AFC: nop

        goto L_80283B08;
    // 0x80283AFC: nop

    // 0x80283B00: b           L_80283B08
    // 0x80283B04: nop

        goto L_80283B08;
    // 0x80283B04: nop

L_80283B08:
    // 0x80283B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283B10: jr          $ra
    // 0x80283B14: nop

    return;
    // 0x80283B14: nop

;}
RECOMP_FUNC void func_80282CB8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282CC0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80282CC4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282CC8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282CCC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282CD0: addiu       $t7, $zero, 0x1FD
    ctx->r15 = ADD32(0, 0X1FD);
    // 0x80282CD4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282CD8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282CDC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282CE0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282CE4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282CE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282CF0: jal         0x8001C0EC
    // 0x80282CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282CF8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282CFC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282D00: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282D04: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282D08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282D0C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282D10: b           L_80282D18
    // 0x80282D14: nop

        goto L_80282D18;
    // 0x80282D14: nop

L_80282D18:
    // 0x80282D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282D20: jr          $ra
    // 0x80282D24: nop

    return;
    // 0x80282D24: nop

;}
RECOMP_FUNC void func_80282D98_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282D98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282D9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282DA0: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80282DA4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282DA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282DAC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282DB0: addiu       $t7, $zero, 0x1FF
    ctx->r15 = ADD32(0, 0X1FF);
    // 0x80282DB4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282DB8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282DBC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282DC0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282DC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282DD0: jal         0x8001C0EC
    // 0x80282DD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282DD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282DD8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282DDC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282DE0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282DE4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282DE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282DEC: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282DF0: b           L_80282DF8
    // 0x80282DF4: nop

        goto L_80282DF8;
    // 0x80282DF4: nop

L_80282DF8:
    // 0x80282DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282DFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282E00: jr          $ra
    // 0x80282E04: nop

    return;
    // 0x80282E04: nop

;}
RECOMP_FUNC void func_80285954_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028595C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285960: jal         0x802804B8
    // 0x80285964: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285964: nop

    after_0:
    // 0x80285968: jal         0x80280B88
    // 0x8028596C: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x8028596C: nop

    after_1:
    // 0x80285970: b           L_80285978
    // 0x80285974: nop

        goto L_80285978;
    // 0x80285974: nop

L_80285978:
    // 0x80285978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028597C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285980: jr          $ra
    // 0x80285984: nop

    return;
    // 0x80285984: nop

;}
RECOMP_FUNC void func_80285F88_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285F90: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285F94: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285F98: jal         0x802804B8
    // 0x80285F9C: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285F9C: nop

    after_0:
    // 0x80285FA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285FA4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285FA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80285FAC: nop

    // 0x80285FB0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80285FB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80285FB8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285FBC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285FC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285FC4: nop

    // 0x80285FC8: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x80285FCC: jal         0x80280B88
    // 0x80285FD0: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285FD0: nop

    after_1:
    // 0x80285FD4: b           L_80285FDC
    // 0x80285FD8: nop

        goto L_80285FDC;
    // 0x80285FD8: nop

L_80285FDC:
    // 0x80285FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285FE4: jr          $ra
    // 0x80285FE8: nop

    return;
    // 0x80285FE8: nop

;}
RECOMP_FUNC void func_80282F6C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282F70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282F74: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80282F78: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282F7C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282F80: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282F84: addiu       $t7, $zero, 0x203
    ctx->r15 = ADD32(0, 0X203);
    // 0x80282F88: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282F8C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282F90: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282F94: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282F98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282F9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282FA4: jal         0x8001C0EC
    // 0x80282FA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282FA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282FAC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282FB0: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282FB4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282FB8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282FBC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282FC0: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282FC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282FCC: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80282FD0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282FD4: jal         0x800178D4
    // 0x80282FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80282FDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80282FE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80282FE4: jal         0x8001FB3C
    // 0x80282FE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80282FE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80282FEC: b           L_80282FF4
    // 0x80282FF0: nop

        goto L_80282FF4;
    // 0x80282FF0: nop

L_80282FF4:
    // 0x80282FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282FF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282FFC: jr          $ra
    // 0x80283000: nop

    return;
    // 0x80283000: nop

;}
RECOMP_FUNC void func_80283390_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283390: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283398: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8028339C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802833A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802833A4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802833A8: addiu       $t7, $zero, 0x209
    ctx->r15 = ADD32(0, 0X209);
    // 0x802833AC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802833B0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802833B4: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802833B8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802833BC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802833C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802833C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802833C8: jal         0x8001C0EC
    // 0x802833CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802833CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802833D0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802833D4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802833D8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802833DC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802833E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802833E4: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802833E8: b           L_802833F0
    // 0x802833EC: nop

        goto L_802833F0;
    // 0x802833EC: nop

L_802833F0:
    // 0x802833F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802833F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802833F8: jr          $ra
    // 0x802833FC: nop

    return;
    // 0x802833FC: nop

;}
RECOMP_FUNC void func_802839C0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802839C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802839C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802839C8: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x802839CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802839D0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802839D4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802839D8: addiu       $t7, $zero, 0x217
    ctx->r15 = ADD32(0, 0X217);
    // 0x802839DC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802839E0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802839E4: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802839E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802839EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802839F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802839F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802839F8: jal         0x8001C0EC
    // 0x802839FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802839FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283A00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283A04: jal         0x8001BB04
    // 0x80283A08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x80283A08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80283A0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283A10: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80283A14: b           L_80283A1C
    // 0x80283A18: nop

        goto L_80283A1C;
    // 0x80283A18: nop

L_80283A1C:
    // 0x80283A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283A20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283A24: jr          $ra
    // 0x80283A28: nop

    return;
    // 0x80283A28: nop

;}
RECOMP_FUNC void func_80283470_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283478: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8028347C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283480: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283484: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283488: addiu       $t7, $zero, 0x20A
    ctx->r15 = ADD32(0, 0X20A);
    // 0x8028348C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283490: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283494: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283498: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028349C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802834A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802834A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802834A8: jal         0x8001C0EC
    // 0x802834AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802834AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802834B0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802834B4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802834B8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802834BC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802834C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802834C4: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802834C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802834CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802834D0: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x802834D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802834D8: jal         0x800178D4
    // 0x802834DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x802834DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x802834E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802834E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802834E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802834EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802834F0: jal         0x800178D4
    // 0x802834F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802834F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802834F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802834FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283500: jal         0x8001FB3C
    // 0x80283504: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80283504: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80283508: b           L_80283510
    // 0x8028350C: nop

        goto L_80283510;
    // 0x8028350C: nop

L_80283510:
    // 0x80283510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283518: jr          $ra
    // 0x8028351C: nop

    return;
    // 0x8028351C: nop

;}
RECOMP_FUNC void func_802858EC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802858EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802858F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802858F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802858F8: jal         0x802804B8
    // 0x802858FC: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802858FC: nop

    after_0:
    // 0x80285900: jal         0x80280B88
    // 0x80285904: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285904: nop

    after_1:
    // 0x80285908: b           L_80285910
    // 0x8028590C: nop

        goto L_80285910;
    // 0x8028590C: nop

L_80285910:
    // 0x80285910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285918: jr          $ra
    // 0x8028591C: nop

    return;
    // 0x8028591C: nop

;}
RECOMP_FUNC void func_80283CE4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283CE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283CE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283CEC: jal         0x80283A2C
    // 0x80283CF0: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80283CF0: nop

    after_0:
    // 0x80283CF4: beq         $v0, $zero, L_80283D04
    if (ctx->r2 == 0) {
        // 0x80283CF8: nop
    
            goto L_80283D04;
    }
    // 0x80283CF8: nop

    // 0x80283CFC: b           L_80283DD8
    // 0x80283D00: nop

        goto L_80283DD8;
    // 0x80283D00: nop

L_80283D04:
    // 0x80283D04: jal         0x80085D54
    // 0x80283D08: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80283D08: nop

    after_1:
    // 0x80283D0C: beq         $v0, $zero, L_80283D1C
    if (ctx->r2 == 0) {
        // 0x80283D10: nop
    
            goto L_80283D1C;
    }
    // 0x80283D10: nop

    // 0x80283D14: b           L_80283DD8
    // 0x80283D18: nop

        goto L_80283DD8;
    // 0x80283D18: nop

L_80283D1C:
    // 0x80283D1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283D20: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80283D24: nop

    // 0x80283D28: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80283D2C: bne         $t7, $zero, L_80283D44
    if (ctx->r15 != 0) {
        // 0x80283D30: nop
    
            goto L_80283D44;
    }
    // 0x80283D30: nop

    // 0x80283D34: jal         0x80282B2C
    // 0x80283D38: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80283D38: nop

    after_2:
    // 0x80283D3C: b           L_80283DD8
    // 0x80283D40: nop

        goto L_80283DD8;
    // 0x80283D40: nop

L_80283D44:
    // 0x80283D44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283D48: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80283D4C: nop

    // 0x80283D50: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80283D54: beq         $t9, $zero, L_80283D84
    if (ctx->r25 == 0) {
        // 0x80283D58: nop
    
            goto L_80283D84;
    }
    // 0x80283D58: nop

    // 0x80283D5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283D64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80283D68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283D6C: jal         0x800178D4
    // 0x80283D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80283D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80283D74: jal         0x802837D8
    // 0x80283D78: nop

    func_802837D8_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80283D78: nop

    after_4:
    // 0x80283D7C: b           L_80283DD8
    // 0x80283D80: nop

        goto L_80283DD8;
    // 0x80283D80: nop

L_80283D84:
    // 0x80283D84: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283D88: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x80283D8C: nop

    // 0x80283D90: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80283D94: beq         $t1, $zero, L_80283DAC
    if (ctx->r9 == 0) {
        // 0x80283D98: nop
    
            goto L_80283DAC;
    }
    // 0x80283D98: nop

    // 0x80283D9C: jal         0x80282A98
    // 0x80283DA0: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80283DA0: nop

    after_5:
    // 0x80283DA4: b           L_80283DD8
    // 0x80283DA8: nop

        goto L_80283DD8;
    // 0x80283DA8: nop

L_80283DAC:
    // 0x80283DAC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283DB0: lb          $t2, 0x65E8($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X65E8);
    // 0x80283DB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80283DB8: bne         $t2, $at, L_80283DD0
    if (ctx->r10 != ctx->r1) {
        // 0x80283DBC: nop
    
            goto L_80283DD0;
    }
    // 0x80283DBC: nop

    // 0x80283DC0: jal         0x80282C48
    // 0x80283DC4: nop

    func_80282C48_code_extra_5(rdram, ctx);
        goto after_6;
    // 0x80283DC4: nop

    after_6:
    // 0x80283DC8: b           L_80283DD8
    // 0x80283DCC: nop

        goto L_80283DD8;
    // 0x80283DCC: nop

L_80283DD0:
    // 0x80283DD0: b           L_80283DD8
    // 0x80283DD4: nop

        goto L_80283DD8;
    // 0x80283DD4: nop

L_80283DD8:
    // 0x80283DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283DE0: jr          $ra
    // 0x80283DE4: nop

    return;
    // 0x80283DE4: nop

;}
RECOMP_FUNC void func_802849F8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802849F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802849FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284A00: jal         0x80283B18
    // 0x80284A04: nop

    func_80283B18_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284A04: nop

    after_0:
    // 0x80284A08: beq         $v0, $zero, L_80284A18
    if (ctx->r2 == 0) {
        // 0x80284A0C: nop
    
            goto L_80284A18;
    }
    // 0x80284A0C: nop

    // 0x80284A10: b           L_80284A88
    // 0x80284A14: nop

        goto L_80284A88;
    // 0x80284A14: nop

L_80284A18:
    // 0x80284A18: jal         0x80085D54
    // 0x80284A1C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284A1C: nop

    after_1:
    // 0x80284A20: beq         $v0, $zero, L_80284A30
    if (ctx->r2 == 0) {
        // 0x80284A24: nop
    
            goto L_80284A30;
    }
    // 0x80284A24: nop

    // 0x80284A28: b           L_80284A88
    // 0x80284A2C: nop

        goto L_80284A88;
    // 0x80284A2C: nop

L_80284A30:
    // 0x80284A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284A34: jal         0x8001B44C
    // 0x80284A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80284A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284A3C: beq         $v0, $zero, L_80284A80
    if (ctx->r2 == 0) {
        // 0x80284A40: nop
    
            goto L_80284A80;
    }
    // 0x80284A40: nop

    // 0x80284A44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284A48: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284A4C: nop

    // 0x80284A50: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80284A54: nop

    // 0x80284A58: bne         $t7, $zero, L_80284A70
    if (ctx->r15 != 0) {
        // 0x80284A5C: nop
    
            goto L_80284A70;
    }
    // 0x80284A5C: nop

    // 0x80284A60: jal         0x802835CC
    // 0x80284A64: nop

    func_802835CC_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284A64: nop

    after_3:
    // 0x80284A68: b           L_80284A78
    // 0x80284A6C: nop

        goto L_80284A78;
    // 0x80284A6C: nop

L_80284A70:
    // 0x80284A70: jal         0x80283390
    // 0x80284A74: nop

    func_80283390_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80284A74: nop

    after_4:
L_80284A78:
    // 0x80284A78: b           L_80284A88
    // 0x80284A7C: nop

        goto L_80284A88;
    // 0x80284A7C: nop

L_80284A80:
    // 0x80284A80: b           L_80284A88
    // 0x80284A84: nop

        goto L_80284A88;
    // 0x80284A84: nop

L_80284A88:
    // 0x80284A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284A90: jr          $ra
    // 0x80284A94: nop

    return;
    // 0x80284A94: nop

;}
