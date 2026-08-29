#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802813EC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802813EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802813F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802813F4: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x802813F8: nop

    // 0x802813FC: bne         $t6, $zero, L_80281414
    if (ctx->r14 != 0) {
        // 0x80281400: nop
    
            goto L_80281414;
    }
    // 0x80281400: nop

    // 0x80281404: b           L_80281504
    // 0x80281408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281504;
    // 0x80281408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028140C: b           L_802814FC
    // 0x80281410: nop

        goto L_802814FC;
    // 0x80281410: nop

L_80281414:
    // 0x80281414: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281418: lwc1        $f4, 0x51D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D0);
    // 0x8028141C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281420: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80281424: nop

    // 0x80281428: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028142C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80281430: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281434: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281438: nop

    // 0x8028143C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80281440: nop

    // 0x80281444: bc1f        L_80281464
    if (!c1cs) {
        // 0x80281448: nop
    
            goto L_80281464;
    }
    // 0x80281448: nop

    // 0x8028144C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281454: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281458: nop

    // 0x8028145C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80281460: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_80281464:
    // 0x80281464: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281468: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028146C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80281470: nop

    // 0x80281474: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281478: nop

    // 0x8028147C: bc1t        L_802814A0
    if (c1cs) {
        // 0x80281480: nop
    
            goto L_802814A0;
    }
    // 0x80281480: nop

    // 0x80281484: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80281488: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028148C: nop

    // 0x80281490: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80281494: nop

    // 0x80281498: bc1f        L_802814B0
    if (!c1cs) {
        // 0x8028149C: nop
    
            goto L_802814B0;
    }
    // 0x8028149C: nop

L_802814A0:
    // 0x802814A0: b           L_80281504
    // 0x802814A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281504;
    // 0x802814A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802814A8: b           L_802814F4
    // 0x802814AC: nop

        goto L_802814F4;
    // 0x802814AC: nop

L_802814B0:
    // 0x802814B0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802814B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802814B8: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802814BC: nop

    // 0x802814C0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802814C4: nop

    // 0x802814C8: bc1t        L_802814EC
    if (c1cs) {
        // 0x802814CC: nop
    
            goto L_802814EC;
    }
    // 0x802814CC: nop

    // 0x802814D0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802814D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802814D8: nop

    // 0x802814DC: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x802814E0: nop

    // 0x802814E4: bc1f        L_802814F4
    if (!c1cs) {
        // 0x802814E8: nop
    
            goto L_802814F4;
    }
    // 0x802814E8: nop

L_802814EC:
    // 0x802814EC: b           L_80281504
    // 0x802814F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80281504;
    // 0x802814F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802814F4:
    // 0x802814F4: b           L_80281504
    // 0x802814F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80281504;
    // 0x802814F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802814FC:
    // 0x802814FC: b           L_80281504
    // 0x80281500: nop

        goto L_80281504;
    // 0x80281500: nop

L_80281504:
    // 0x80281504: jr          $ra
    // 0x80281508: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80281508: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80284D18_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284D20: jal         0x8001A928
    // 0x80284D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284D28: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284D2C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284D30: addiu       $t6, $zero, 0x35
    ctx->r14 = ADD32(0, 0X35);
    // 0x80284D34: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284D38: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284D3C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284D40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284D4C: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x80284D50: jal         0x8001C0EC
    // 0x80284D54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284D54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284D58: jal         0x80280000
    // 0x80284D5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284D5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80284D60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80284D64: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284D68: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284D6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284D70: nop

    // 0x80284D74: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80284D78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80284D7C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80284D80: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80284D84: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80284D88: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284D8C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80284D90: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80284D94: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80284D98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284D9C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80284DA0: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80284DA4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284DA8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80284DAC: nop

    // 0x80284DB0: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x80284DB4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80284DB8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80284DBC: nop

    // 0x80284DC0: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x80284DC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284DC8: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80284DCC: nop

    // 0x80284DD0: beq         $t6, $zero, L_80284DE0
    if (ctx->r14 == 0) {
        // 0x80284DD4: nop
    
            goto L_80284DE0;
    }
    // 0x80284DD4: nop

    // 0x80284DD8: jal         0x8007A6DC
    // 0x80284DDC: nop

    func_8007A6DC(rdram, ctx);
        goto after_3;
    // 0x80284DDC: nop

    after_3:
L_80284DE0:
    // 0x80284DE0: b           L_80284DE8
    // 0x80284DE4: nop

        goto L_80284DE8;
    // 0x80284DE4: nop

L_80284DE8:
    // 0x80284DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284DF0: jr          $ra
    // 0x80284DF4: nop

    return;
    // 0x80284DF4: nop

;}
RECOMP_FUNC void func_80289E38_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289E38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289E3C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289E40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289E44: nop

    // 0x80289E48: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289E4C: jr          $ra
    // 0x80289E50: nop

    return;
    // 0x80289E50: nop

    // 0x80289E54: jr          $ra
    // 0x80289E58: nop

    return;
    // 0x80289E58: nop

;}
RECOMP_FUNC void func_80288660_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80288664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288668: jal         0x802858D8
    // 0x8028866C: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028866C: nop

    after_0:
    // 0x80288670: beq         $v0, $zero, L_80288680
    if (ctx->r2 == 0) {
        // 0x80288674: nop
    
            goto L_80288680;
    }
    // 0x80288674: nop

    // 0x80288678: b           L_80288728
    // 0x8028867C: nop

        goto L_80288728;
    // 0x8028867C: nop

L_80288680:
    // 0x80288680: jal         0x80085D54
    // 0x80288684: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288684: nop

    after_1:
    // 0x80288688: beq         $v0, $zero, L_80288698
    if (ctx->r2 == 0) {
        // 0x8028868C: nop
    
            goto L_80288698;
    }
    // 0x8028868C: nop

    // 0x80288690: b           L_80288728
    // 0x80288694: nop

        goto L_80288728;
    // 0x80288694: nop

L_80288698:
    // 0x80288698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028869C: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x802886A0: nop

    // 0x802886A4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802886A8: bne         $t7, $zero, L_802886C0
    if (ctx->r15 != 0) {
        // 0x802886AC: nop
    
            goto L_802886C0;
    }
    // 0x802886AC: nop

    // 0x802886B0: jal         0x80282AC4
    // 0x802886B4: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802886B4: nop

    after_2:
    // 0x802886B8: b           L_80288728
    // 0x802886BC: nop

        goto L_80288728;
    // 0x802886BC: nop

L_802886C0:
    // 0x802886C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802886C4: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802886C8: nop

    // 0x802886CC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802886D0: beq         $t9, $zero, L_802886E8
    if (ctx->r25 == 0) {
        // 0x802886D4: nop
    
            goto L_802886E8;
    }
    // 0x802886D4: nop

    // 0x802886D8: jal         0x802828C0
    // 0x802886DC: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802886DC: nop

    after_3:
    // 0x802886E0: b           L_80288728
    // 0x802886E4: nop

        goto L_80288728;
    // 0x802886E4: nop

L_802886E8:
    // 0x802886E8: jal         0x80285EB4
    // 0x802886EC: nop

    func_80285EB4_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802886EC: nop

    after_4:
    // 0x802886F0: beq         $v0, $zero, L_80288700
    if (ctx->r2 == 0) {
        // 0x802886F4: nop
    
            goto L_80288700;
    }
    // 0x802886F4: nop

    // 0x802886F8: b           L_80288728
    // 0x802886FC: nop

        goto L_80288728;
    // 0x802886FC: nop

L_80288700:
    // 0x80288700: jal         0x802867FC
    // 0x80288704: nop

    func_802867FC_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80288704: nop

    after_5:
    // 0x80288708: bne         $v0, $zero, L_80288720
    if (ctx->r2 != 0) {
        // 0x8028870C: nop
    
            goto L_80288720;
    }
    // 0x8028870C: nop

    // 0x80288710: jal         0x8028236C
    // 0x80288714: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80288714: nop

    after_6:
    // 0x80288718: b           L_80288728
    // 0x8028871C: nop

        goto L_80288728;
    // 0x8028871C: nop

L_80288720:
    // 0x80288720: b           L_80288728
    // 0x80288724: nop

        goto L_80288728;
    // 0x80288724: nop

L_80288728:
    // 0x80288728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028872C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80288730: jr          $ra
    // 0x80288734: nop

    return;
    // 0x80288734: nop

;}
RECOMP_FUNC void func_80287D8C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287D94: jal         0x80285D4C
    // 0x80287D98: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287D98: nop

    after_0:
    // 0x80287D9C: beq         $v0, $zero, L_80287DAC
    if (ctx->r2 == 0) {
        // 0x80287DA0: nop
    
            goto L_80287DAC;
    }
    // 0x80287DA0: nop

    // 0x80287DA4: b           L_80287E34
    // 0x80287DA8: nop

        goto L_80287E34;
    // 0x80287DA8: nop

L_80287DAC:
    // 0x80287DAC: jal         0x80085D54
    // 0x80287DB0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287DB0: nop

    after_1:
    // 0x80287DB4: beq         $v0, $zero, L_80287DC4
    if (ctx->r2 == 0) {
        // 0x80287DB8: nop
    
            goto L_80287DC4;
    }
    // 0x80287DB8: nop

    // 0x80287DBC: b           L_80287E34
    // 0x80287DC0: nop

        goto L_80287E34;
    // 0x80287DC0: nop

L_80287DC4:
    // 0x80287DC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287DC8: jal         0x8001B44C
    // 0x80287DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80287DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80287DD0: beq         $v0, $zero, L_80287E2C
    if (ctx->r2 == 0) {
        // 0x80287DD4: nop
    
            goto L_80287E2C;
    }
    // 0x80287DD4: nop

    // 0x80287DD8: jal         0x8028236C
    // 0x80287DDC: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287DDC: nop

    after_3:
    // 0x80287DE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287DE4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80287DE8: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80287DEC: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80287DF0: nop

    // 0x80287DF4: bne         $t7, $at, L_80287E0C
    if (ctx->r15 != ctx->r1) {
        // 0x80287DF8: nop
    
            goto L_80287E0C;
    }
    // 0x80287DF8: nop

    // 0x80287DFC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80287E00: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80287E04: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80287E08: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_80287E0C:
    // 0x80287E0C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80287E10: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80287E14: nop

    // 0x80287E18: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80287E1C: nop

    // 0x80287E20: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x80287E24: b           L_80287E34
    // 0x80287E28: nop

        goto L_80287E34;
    // 0x80287E28: nop

L_80287E2C:
    // 0x80287E2C: b           L_80287E34
    // 0x80287E30: nop

        goto L_80287E34;
    // 0x80287E30: nop

L_80287E34:
    // 0x80287E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287E3C: jr          $ra
    // 0x80287E40: nop

    return;
    // 0x80287E40: nop

;}
RECOMP_FUNC void func_80283C28_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283C28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283C30: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283C34: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283C38: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80283C3C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283C40: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283C44: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283C48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283C4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283C54: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80283C58: jal         0x8001C0EC
    // 0x80283C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283C60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283C64: jal         0x8001B754
    // 0x80283C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80283C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283C6C: jal         0x80280000
    // 0x80283C70: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283C70: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80283C74: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80283C78: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283C7C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283C80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283C84: nop

    // 0x80283C88: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80283C8C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283C90: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283C94: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80283C98: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283C9C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283CA0: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283CA4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80283CA8: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80283CAC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283CB0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80283CB4: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80283CB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80283CBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80283CC0: jal         0x8001FB3C
    // 0x80283CC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80283CC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80283CC8: b           L_80283CD0
    // 0x80283CCC: nop

        goto L_80283CD0;
    // 0x80283CCC: nop

L_80283CD0:
    // 0x80283CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283CD8: jr          $ra
    // 0x80283CDC: nop

    return;
    // 0x80283CDC: nop

;}
RECOMP_FUNC void func_8028AA0C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028AA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028AA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028AA14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AA18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028AA1C: jal         0x8001B6BC
    // 0x8028AA20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x8028AA20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x8028AA24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028AA28: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028AA2C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8028AA30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028AA34: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8028AA38: nop

    // 0x8028AA3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028AA40: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8028AA44: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028AA48: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028AA4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028AA50: nop

    // 0x8028AA54: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x8028AA58: b           L_8028AA60
    // 0x8028AA5C: nop

        goto L_8028AA60;
    // 0x8028AA5C: nop

L_8028AA60:
    // 0x8028AA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028AA64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028AA68: jr          $ra
    // 0x8028AA6C: nop

    return;
    // 0x8028AA6C: nop

;}
RECOMP_FUNC void func_8028A0BC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A0BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A0C0: lbu         $t6, -0x1D38($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1D38);
    // 0x8028A0C4: nop

    // 0x8028A0C8: bne         $t6, $zero, L_8028A0F0
    if (ctx->r14 != 0) {
        // 0x8028A0CC: nop
    
            goto L_8028A0F0;
    }
    // 0x8028A0CC: nop

    // 0x8028A0D0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A0D4: lh          $t7, -0x1D68($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D68);
    // 0x8028A0D8: nop

    // 0x8028A0DC: bne         $t7, $zero, L_8028A0F0
    if (ctx->r15 != 0) {
        // 0x8028A0E0: nop
    
            goto L_8028A0F0;
    }
    // 0x8028A0E0: nop

    // 0x8028A0E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028A0E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028A0EC: sb          $t8, -0x1D38($at)
    MEM_B(-0X1D38, ctx->r1) = ctx->r24;
L_8028A0F0:
    // 0x8028A0F0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028A0F4: lbu         $t9, -0x1D40($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1D40);
    // 0x8028A0F8: nop

    // 0x8028A0FC: beq         $t9, $zero, L_8028A118
    if (ctx->r25 == 0) {
        // 0x8028A100: nop
    
            goto L_8028A118;
    }
    // 0x8028A100: nop

    // 0x8028A104: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028A108: lbu         $t0, -0x1D40($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1D40);
    // 0x8028A10C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028A110: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8028A114: sb          $t1, -0x1D40($at)
    MEM_B(-0X1D40, ctx->r1) = ctx->r9;
L_8028A118:
    // 0x8028A118: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A11C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A120: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028A124: nop

    // 0x8028A128: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x8028A12C: jr          $ra
    // 0x8028A130: nop

    return;
    // 0x8028A130: nop

    // 0x8028A134: jr          $ra
    // 0x8028A138: nop

    return;
    // 0x8028A138: nop

;}
RECOMP_FUNC void func_8028A930_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028A934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A938: jal         0x80281E50
    // 0x8028A93C: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028A93C: nop

    after_0:
    // 0x8028A940: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A944: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A948: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028A94C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A950: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A954: jal         0x80015538
    // 0x8028A958: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8028A958: nop

    after_1:
    // 0x8028A95C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A960: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A964: nop

    // 0x8028A968: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A96C: b           L_8028A974
    // 0x8028A970: nop

        goto L_8028A974;
    // 0x8028A970: nop

L_8028A974:
    // 0x8028A974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028A97C: jr          $ra
    // 0x8028A980: nop

    return;
    // 0x8028A980: nop

;}
RECOMP_FUNC void func_80289E5C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289E5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289E60: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289E64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289E68: nop

    // 0x80289E6C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289E70: jr          $ra
    // 0x80289E74: nop

    return;
    // 0x80289E74: nop

    // 0x80289E78: jr          $ra
    // 0x80289E7C: nop

    return;
    // 0x80289E7C: nop

;}
RECOMP_FUNC void func_802811FC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281204: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80281208: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8028120C: lw          $t7, 0x51AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51AC);
    // 0x80281210: lw          $t6, 0x51B4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51B4);
    // 0x80281214: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80281218: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8028121C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80281220: jal         0x80014F50
    // 0x80281224: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_Atan2f(rdram, ctx);
        goto after_0;
    // 0x80281224: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80281228: b           L_80281238
    // 0x8028122C: nop

        goto L_80281238;
    // 0x8028122C: nop

    // 0x80281230: b           L_80281238
    // 0x80281234: nop

        goto L_80281238;
    // 0x80281234: nop

L_80281238:
    // 0x80281238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028123C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281240: jr          $ra
    // 0x80281244: nop

    return;
    // 0x80281244: nop

;}
RECOMP_FUNC void func_80286EC8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286EC8: jr          $ra
    // 0x80286ECC: nop

    return;
    // 0x80286ECC: nop

    // 0x80286ED0: jr          $ra
    // 0x80286ED4: nop

    return;
    // 0x80286ED4: nop

;}
RECOMP_FUNC void func_80289A10_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289A10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289A14: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289A18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289A1C: nop

    // 0x80289A20: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289A24: jr          $ra
    // 0x80289A28: nop

    return;
    // 0x80289A28: nop

    // 0x80289A2C: jr          $ra
    // 0x80289A30: nop

    return;
    // 0x80289A30: nop

;}
RECOMP_FUNC void func_80287F28_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287F28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80287F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287F30: jal         0x80285D4C
    // 0x80287F34: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287F34: nop

    after_0:
    // 0x80287F38: beq         $v0, $zero, L_80287F48
    if (ctx->r2 == 0) {
        // 0x80287F3C: nop
    
            goto L_80287F48;
    }
    // 0x80287F3C: nop

    // 0x80287F40: b           L_80287FC0
    // 0x80287F44: nop

        goto L_80287FC0;
    // 0x80287F44: nop

L_80287F48:
    // 0x80287F48: jal         0x80085D54
    // 0x80287F4C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287F4C: nop

    after_1:
    // 0x80287F50: beq         $v0, $zero, L_80287F60
    if (ctx->r2 == 0) {
        // 0x80287F54: nop
    
            goto L_80287F60;
    }
    // 0x80287F54: nop

    // 0x80287F58: b           L_80287FC0
    // 0x80287F5C: nop

        goto L_80287FC0;
    // 0x80287F5C: nop

L_80287F60:
    // 0x80287F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287F64: jal         0x8001B62C
    // 0x80287F68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80287F68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80287F6C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80287F70: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80287F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80287F78: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80287F7C: nop

    // 0x80287F80: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80287F84: nop

    // 0x80287F88: bc1f        L_80287FB8
    if (!c1cs) {
        // 0x80287F8C: nop
    
            goto L_80287FB8;
    }
    // 0x80287F8C: nop

    // 0x80287F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287F94: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287F98: nop

    // 0x80287F9C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287FA0: beq         $t7, $zero, L_80287FB8
    if (ctx->r15 == 0) {
        // 0x80287FA4: nop
    
            goto L_80287FB8;
    }
    // 0x80287FA4: nop

    // 0x80287FA8: jal         0x80283C28
    // 0x80287FAC: nop

    func_80283C28_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287FAC: nop

    after_3:
    // 0x80287FB0: b           L_80287FC0
    // 0x80287FB4: nop

        goto L_80287FC0;
    // 0x80287FB4: nop

L_80287FB8:
    // 0x80287FB8: b           L_80287FC0
    // 0x80287FBC: nop

        goto L_80287FC0;
    // 0x80287FBC: nop

L_80287FC0:
    // 0x80287FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287FC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80287FC8: jr          $ra
    // 0x80287FCC: nop

    return;
    // 0x80287FCC: nop

;}
RECOMP_FUNC void func_80288090_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288098: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028809C: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x802880A0: nop

    // 0x802880A4: slti        $at, $t6, 0x5A
    ctx->r1 = SIGNED(ctx->r14) < 0X5A ? 1 : 0;
    // 0x802880A8: beq         $at, $zero, L_802880D8
    if (ctx->r1 == 0) {
        // 0x802880AC: nop
    
            goto L_802880D8;
    }
    // 0x802880AC: nop

    // 0x802880B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802880B4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802880B8: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802880BC: lwc1        $f6, -0x4940($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4940);
    // 0x802880C0: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x802880C4: nop

    // 0x802880C8: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802880CC: nop

    // 0x802880D0: bc1f        L_802880EC
    if (!c1cs) {
        // 0x802880D4: nop
    
            goto L_802880EC;
    }
    // 0x802880D4: nop

L_802880D8:
    // 0x802880D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802880DC: jal         0x80069A54
    // 0x802880E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x802880E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802880E4: b           L_80288100
    // 0x802880E8: nop

        goto L_80288100;
    // 0x802880E8: nop

L_802880EC:
    // 0x802880EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802880F0: lbu         $t8, -0x1F70($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F70);
    // 0x802880F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802880F8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802880FC: sb          $t9, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r25;
L_80288100:
    // 0x80288100: b           L_80288108
    // 0x80288104: nop

        goto L_80288108;
    // 0x80288104: nop

L_80288108:
    // 0x80288108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028810C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288110: jr          $ra
    // 0x80288114: nop

    return;
    // 0x80288114: nop

;}
RECOMP_FUNC void func_802858D8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802858D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802858DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802858E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802858E4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x802858E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802858EC: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x802858F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802858F4: bne         $t6, $at, L_80285970
    if (ctx->r14 != ctx->r1) {
        // 0x802858F8: nop
    
            goto L_80285970;
    }
    // 0x802858F8: nop

    // 0x802858FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285900: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285904: addiu       $at, $zero, 0x13E
    ctx->r1 = ADD32(0, 0X13E);
    // 0x80285908: lh          $t8, 0x106($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X106);
    // 0x8028590C: nop

    // 0x80285910: bne         $t8, $at, L_80285928
    if (ctx->r24 != ctx->r1) {
        // 0x80285914: nop
    
            goto L_80285928;
    }
    // 0x80285914: nop

    // 0x80285918: jal         0x80284BA4
    // 0x8028591C: nop

    func_80284BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028591C: nop

    after_0:
    // 0x80285920: b           L_80285964
    // 0x80285924: nop

        goto L_80285964;
    // 0x80285924: nop

L_80285928:
    // 0x80285928: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028592C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80285930: addiu       $at, $zero, 0x1B1
    ctx->r1 = ADD32(0, 0X1B1);
    // 0x80285934: lh          $t0, 0x106($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X106);
    // 0x80285938: nop

    // 0x8028593C: beq         $t0, $at, L_8028595C
    if (ctx->r8 == ctx->r1) {
        // 0x80285940: nop
    
            goto L_8028595C;
    }
    // 0x80285940: nop

    // 0x80285944: addiu       $at, $zero, 0x1B4
    ctx->r1 = ADD32(0, 0X1B4);
    // 0x80285948: beq         $t0, $at, L_8028595C
    if (ctx->r8 == ctx->r1) {
        // 0x8028594C: nop
    
            goto L_8028595C;
    }
    // 0x8028594C: nop

    // 0x80285950: addiu       $at, $zero, 0x1B5
    ctx->r1 = ADD32(0, 0X1B5);
    // 0x80285954: bne         $t0, $at, L_80285964
    if (ctx->r8 != ctx->r1) {
        // 0x80285958: nop
    
            goto L_80285964;
    }
    // 0x80285958: nop

L_8028595C:
    // 0x8028595C: jal         0x80284D18
    // 0x80285960: nop

    func_80284D18_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80285960: nop

    after_1:
L_80285964:
    // 0x80285964: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80285968: b           L_80285CFC
    // 0x8028596C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_80285CFC;
    // 0x8028596C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80285970:
    // 0x80285970: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80285974: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80285978: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x8028597C: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x80285980: nop

    // 0x80285984: beq         $t3, $at, L_80285994
    if (ctx->r11 == ctx->r1) {
        // 0x80285988: nop
    
            goto L_80285994;
    }
    // 0x80285988: nop

    // 0x8028598C: bne         $t3, $zero, L_80285CFC
    if (ctx->r11 != 0) {
        // 0x80285990: nop
    
            goto L_80285CFC;
    }
    // 0x80285990: nop

L_80285994:
    // 0x80285994: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80285998: lbu         $s0, -0x1F78($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1F78);
    // 0x8028599C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802859A0: beq         $s0, $at, L_802859D4
    if (ctx->r16 == ctx->r1) {
        // 0x802859A4: nop
    
            goto L_802859D4;
    }
    // 0x802859A4: nop

    // 0x802859A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802859AC: beq         $s0, $at, L_802859D4
    if (ctx->r16 == ctx->r1) {
        // 0x802859B0: nop
    
            goto L_802859D4;
    }
    // 0x802859B0: nop

    // 0x802859B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802859B8: beq         $s0, $at, L_80285B4C
    if (ctx->r16 == ctx->r1) {
        // 0x802859BC: nop
    
            goto L_80285B4C;
    }
    // 0x802859BC: nop

    // 0x802859C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802859C4: beq         $s0, $at, L_80285B08
    if (ctx->r16 == ctx->r1) {
        // 0x802859C8: nop
    
            goto L_80285B08;
    }
    // 0x802859C8: nop

    // 0x802859CC: b           L_80285CE4
    // 0x802859D0: nop

        goto L_80285CE4;
    // 0x802859D0: nop

L_802859D4:
    // 0x802859D4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802859D8: lbu         $t4, -0x1F78($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F78);
    // 0x802859DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802859E0: bne         $t4, $at, L_80285A08
    if (ctx->r12 != ctx->r1) {
        // 0x802859E4: nop
    
            goto L_80285A08;
    }
    // 0x802859E4: nop

    // 0x802859E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802859EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802859F0: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    // 0x802859F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802859F8: jal         0x800178D4
    // 0x802859FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802859FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80285A00: b           L_80285A20
    // 0x80285A04: nop

        goto L_80285A20;
    // 0x80285A04: nop

L_80285A08:
    // 0x80285A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285A10: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80285A14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285A18: jal         0x800178D4
    // 0x80285A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80285A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_80285A20:
    // 0x80285A20: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80285A24: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80285A28: addiu       $at, $zero, 0x13D
    ctx->r1 = ADD32(0, 0X13D);
    // 0x80285A2C: lh          $t6, 0x106($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X106);
    // 0x80285A30: nop

    // 0x80285A34: bne         $t6, $at, L_80285A50
    if (ctx->r14 != ctx->r1) {
        // 0x80285A38: nop
    
            goto L_80285A50;
    }
    // 0x80285A38: nop

    // 0x80285A3C: jal         0x80284A94
    // 0x80285A40: nop

    func_80284A94_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80285A40: nop

    after_4:
    // 0x80285A44: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80285A48: b           L_80285B00
    // 0x80285A4C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
        goto L_80285B00;
    // 0x80285A4C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_80285A50:
    // 0x80285A50: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80285A54: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80285A58: nop

    // 0x80285A5C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80285A60: bne         $t9, $zero, L_80285AF0
    if (ctx->r25 != 0) {
        // 0x80285A64: nop
    
            goto L_80285AF0;
    }
    // 0x80285A64: nop

    // 0x80285A68: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285A6C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80285A70: nop

    // 0x80285A74: lwc1        $f14, 0x1C($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80285A78: lwc1        $f12, 0x128($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X128);
    // 0x80285A7C: jal         0x80015538
    // 0x80285A80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80285A80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x80285A84: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80285A88: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80285A8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285A90: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80285A94: nop

    // 0x80285A98: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80285A9C: nop

    // 0x80285AA0: bc1t        L_80285AC4
    if (c1cs) {
        // 0x80285AA4: nop
    
            goto L_80285AC4;
    }
    // 0x80285AA4: nop

    // 0x80285AA8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80285AAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285AB0: nop

    // 0x80285AB4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80285AB8: nop

    // 0x80285ABC: bc1f        L_80285AD8
    if (!c1cs) {
        // 0x80285AC0: nop
    
            goto L_80285AD8;
    }
    // 0x80285AC0: nop

L_80285AC4:
    // 0x80285AC4: jal         0x80283954
    // 0x80285AC8: nop

    func_80283954_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80285AC8: nop

    after_6:
    // 0x80285ACC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80285AD0: b           L_80285AE8
    // 0x80285AD4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_80285AE8;
    // 0x80285AD4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80285AD8:
    // 0x80285AD8: jal         0x80283A40
    // 0x80285ADC: nop

    func_80283A40_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x80285ADC: nop

    after_7:
    // 0x80285AE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80285AE4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_80285AE8:
    // 0x80285AE8: b           L_80285B00
    // 0x80285AEC: nop

        goto L_80285B00;
    // 0x80285AEC: nop

L_80285AF0:
    // 0x80285AF0: jal         0x80283B18
    // 0x80285AF4: nop

    func_80283B18_code_extra_0(rdram, ctx);
        goto after_8;
    // 0x80285AF4: nop

    after_8:
    // 0x80285AF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80285AFC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
L_80285B00:
    // 0x80285B00: b           L_80285CFC
    // 0x80285B04: nop

        goto L_80285CFC;
    // 0x80285B04: nop

L_80285B08:
    // 0x80285B08: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80285B0C: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x80285B10: nop

    // 0x80285B14: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80285B18: bne         $t5, $zero, L_80285B34
    if (ctx->r13 != 0) {
        // 0x80285B1C: nop
    
            goto L_80285B34;
    }
    // 0x80285B1C: nop

    // 0x80285B20: jal         0x80283F9C
    // 0x80285B24: nop

    func_80283F9C_code_extra_0(rdram, ctx);
        goto after_9;
    // 0x80285B24: nop

    after_9:
    // 0x80285B28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80285B2C: b           L_80285B44
    // 0x80285B30: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
        goto L_80285B44;
    // 0x80285B30: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_80285B34:
    // 0x80285B34: jal         0x80283B18
    // 0x80285B38: nop

    func_80283B18_code_extra_0(rdram, ctx);
        goto after_10;
    // 0x80285B38: nop

    after_10:
    // 0x80285B3C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80285B40: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_80285B44:
    // 0x80285B44: b           L_80285CFC
    // 0x80285B48: nop

        goto L_80285CFC;
    // 0x80285B48: nop

L_80285B4C:
    // 0x80285B4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285B50: lbu         $t8, -0x1F80($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F80);
    // 0x80285B54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80285B58: bne         $t8, $at, L_80285B74
    if (ctx->r24 != ctx->r1) {
        // 0x80285B5C: nop
    
            goto L_80285B74;
    }
    // 0x80285B5C: nop

    // 0x80285B60: jal         0x80283DF8
    // 0x80285B64: nop

    func_80283DF8_code_extra_0(rdram, ctx);
        goto after_11;
    // 0x80285B64: nop

    after_11:
    // 0x80285B68: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80285B6C: b           L_80285CDC
    // 0x80285B70: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_80285CDC;
    // 0x80285B70: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_80285B74:
    // 0x80285B74: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285B78: lbu         $t0, -0x1F80($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1F80);
    // 0x80285B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285B80: bne         $t0, $at, L_80285BB4
    if (ctx->r8 != ctx->r1) {
        // 0x80285B84: nop
    
            goto L_80285BB4;
    }
    // 0x80285B84: nop

    // 0x80285B88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285B90: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    // 0x80285B94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285B98: jal         0x800178D4
    // 0x80285B9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x80285B9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80285BA0: jal         0x80283D5C
    // 0x80285BA4: nop

    func_80283D5C_code_extra_0(rdram, ctx);
        goto after_13;
    // 0x80285BA4: nop

    after_13:
    // 0x80285BA8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80285BAC: b           L_80285CDC
    // 0x80285BB0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_80285CDC;
    // 0x80285BB0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80285BB4:
    // 0x80285BB4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80285BB8: lbu         $t2, -0x1F80($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1F80);
    // 0x80285BBC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80285BC0: bne         $t2, $at, L_80285BF4
    if (ctx->r10 != ctx->r1) {
        // 0x80285BC4: nop
    
            goto L_80285BF4;
    }
    // 0x80285BC4: nop

    // 0x80285BC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285BD0: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80285BD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285BD8: jal         0x800178D4
    // 0x80285BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_14;
    // 0x80285BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x80285BE0: jal         0x80284140
    // 0x80285BE4: nop

    func_80284140_code_extra_0(rdram, ctx);
        goto after_15;
    // 0x80285BE4: nop

    after_15:
    // 0x80285BE8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80285BEC: b           L_80285CDC
    // 0x80285BF0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
        goto L_80285CDC;
    // 0x80285BF0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
L_80285BF4:
    // 0x80285BF4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80285BF8: lbu         $t4, -0x1F80($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F80);
    // 0x80285BFC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80285C00: beq         $t4, $at, L_80285C14
    if (ctx->r12 == ctx->r1) {
        // 0x80285C04: nop
    
            goto L_80285C14;
    }
    // 0x80285C04: nop

    // 0x80285C08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80285C0C: bne         $t4, $at, L_80285CDC
    if (ctx->r12 != ctx->r1) {
        // 0x80285C10: nop
    
            goto L_80285CDC;
    }
    // 0x80285C10: nop

L_80285C14:
    // 0x80285C14: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80285C18: lbu         $t5, -0x1F80($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1F80);
    // 0x80285C1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80285C20: bne         $t5, $at, L_80285C5C
    if (ctx->r13 != ctx->r1) {
        // 0x80285C24: nop
    
            goto L_80285C5C;
    }
    // 0x80285C24: nop

    // 0x80285C28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285C2C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285C30: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80285C34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80285C38: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80285C3C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80285C40: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80285C44: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80285C48: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80285C4C: jal         0x80081468
    // 0x80285C50: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    func_80081468(rdram, ctx);
        goto after_16;
    // 0x80285C50: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    after_16:
    // 0x80285C54: b           L_80285C88
    // 0x80285C58: nop

        goto L_80285C88;
    // 0x80285C58: nop

L_80285C5C:
    // 0x80285C5C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285C60: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285C64: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80285C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80285C6C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80285C70: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80285C74: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80285C78: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80285C7C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80285C80: jal         0x80081468
    // 0x80285C84: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    func_80081468(rdram, ctx);
        goto after_17;
    // 0x80285C84: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    after_17:
L_80285C88:
    // 0x80285C88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285C90: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    // 0x80285C94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285C98: jal         0x800178D4
    // 0x80285C9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_18;
    // 0x80285C9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x80285CA0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285CA4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80285CA8: nop

    // 0x80285CAC: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80285CB0: nop

    // 0x80285CB4: beq         $t9, $zero, L_80285CCC
    if (ctx->r25 == 0) {
        // 0x80285CB8: nop
    
            goto L_80285CCC;
    }
    // 0x80285CB8: nop

    // 0x80285CBC: jal         0x80283EFC
    // 0x80285CC0: nop

    func_80283EFC_code_extra_0(rdram, ctx);
        goto after_19;
    // 0x80285CC0: nop

    after_19:
    // 0x80285CC4: b           L_80285CD4
    // 0x80285CC8: nop

        goto L_80285CD4;
    // 0x80285CC8: nop

L_80285CCC:
    // 0x80285CCC: jal         0x802841B8
    // 0x80285CD0: nop

    func_802841B8_code_extra_0(rdram, ctx);
        goto after_20;
    // 0x80285CD0: nop

    after_20:
L_80285CD4:
    // 0x80285CD4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80285CD8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_80285CDC:
    // 0x80285CDC: b           L_80285CFC
    // 0x80285CE0: nop

        goto L_80285CFC;
    // 0x80285CE0: nop

L_80285CE4:
    // 0x80285CE4: jal         0x80283954
    // 0x80285CE8: nop

    func_80283954_code_extra_0(rdram, ctx);
        goto after_21;
    // 0x80285CE8: nop

    after_21:
    // 0x80285CEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80285CF0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80285CF4: b           L_80285CFC
    // 0x80285CF8: nop

        goto L_80285CFC;
    // 0x80285CF8: nop

L_80285CFC:
    // 0x80285CFC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80285D00: nop

    // 0x80285D04: beq         $t2, $zero, L_80285D28
    if (ctx->r10 == 0) {
        // 0x80285D08: nop
    
            goto L_80285D28;
    }
    // 0x80285D08: nop

    // 0x80285D0C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80285D10: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80285D14: nop

    // 0x80285D18: beq         $t3, $zero, L_80285D28
    if (ctx->r11 == 0) {
        // 0x80285D1C: nop
    
            goto L_80285D28;
    }
    // 0x80285D1C: nop

    // 0x80285D20: jal         0x8007A6DC
    // 0x80285D24: nop

    func_8007A6DC(rdram, ctx);
        goto after_22;
    // 0x80285D24: nop

    after_22:
L_80285D28:
    // 0x80285D28: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80285D2C: b           L_80285D3C
    // 0x80285D30: nop

        goto L_80285D3C;
    // 0x80285D30: nop

    // 0x80285D34: b           L_80285D3C
    // 0x80285D38: nop

        goto L_80285D3C;
    // 0x80285D38: nop

L_80285D3C:
    // 0x80285D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80285D40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80285D44: jr          $ra
    // 0x80285D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80285D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80284840_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284848: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028484C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284850: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80284854: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80284858: nop

    // 0x8028485C: beq         $t7, $at, L_80284904
    if (ctx->r15 == ctx->r1) {
        // 0x80284860: nop
    
            goto L_80284904;
    }
    // 0x80284860: nop

    // 0x80284864: jal         0x8001A928
    // 0x80284868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8028486C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284870: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284874: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80284878: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8028487C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80284880: addiu       $t0, $t0, 0x5808
    ctx->r8 = ADD32(ctx->r8, 0X5808);
    // 0x80284884: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80284888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028488C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284890: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x80284894: jal         0x8001C0EC
    // 0x80284898: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284898: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028489C: jal         0x80280000
    // 0x802848A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802848A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802848A4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802848A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802848AC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802848B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802848B4: nop

    // 0x802848B8: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x802848BC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x802848C0: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x802848C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802848C8: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x802848CC: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x802848D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802848D4: lh          $t4, -0x1F00($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1F00);
    // 0x802848D8: nop

    // 0x802848DC: beq         $t4, $zero, L_802848EC
    if (ctx->r12 == 0) {
        // 0x802848E0: nop
    
            goto L_802848EC;
    }
    // 0x802848E0: nop

    // 0x802848E4: jal         0x8007A6DC
    // 0x802848E8: nop

    func_8007A6DC(rdram, ctx);
        goto after_3;
    // 0x802848E8: nop

    after_3:
L_802848EC:
    // 0x802848EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802848F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802848F4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x802848F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802848FC: jal         0x800178D4
    // 0x80284900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80284900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80284904:
    // 0x80284904: b           L_8028490C
    // 0x80284908: nop

        goto L_8028490C;
    // 0x80284908: nop

L_8028490C:
    // 0x8028490C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284914: jr          $ra
    // 0x80284918: nop

    return;
    // 0x80284918: nop

;}
RECOMP_FUNC void func_802842B0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802842B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802842B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802842B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802842BC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802842C0: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x802842C4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802842C8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802842CC: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802842D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802842D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802842D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802842DC: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x802842E0: jal         0x8001C0EC
    // 0x802842E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802842E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802842E8: jal         0x80280000
    // 0x802842EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802842EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802842F0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802842F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802842F8: sb          $t9, -0x1D40($at)
    MEM_B(-0X1D40, ctx->r1) = ctx->r25;
    // 0x802842FC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80284300: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80284304: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80284308: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8028430C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284310: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80284314: jal         0x8001A928
    // 0x80284318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_2;
    // 0x80284318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8028431C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80284320: lh          $t2, -0x1F00($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F00);
    // 0x80284324: nop

    // 0x80284328: beq         $t2, $zero, L_80284344
    if (ctx->r10 == 0) {
        // 0x8028432C: nop
    
            goto L_80284344;
    }
    // 0x8028432C: nop

    // 0x80284330: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80284334: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80284338: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8028433C: jal         0x8007A7B4
    // 0x80284340: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8007A7B4(rdram, ctx);
        goto after_3;
    // 0x80284340: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
L_80284344:
    // 0x80284344: b           L_8028434C
    // 0x80284348: nop

        goto L_8028434C;
    // 0x80284348: nop

L_8028434C:
    // 0x8028434C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284354: jr          $ra
    // 0x80284358: nop

    return;
    // 0x80284358: nop

;}
RECOMP_FUNC void func_80285D4C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285D4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80285D50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80285D54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285D58: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x80285D5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80285D60: bne         $t6, $at, L_80285E94
    if (ctx->r14 != ctx->r1) {
        // 0x80285D64: nop
    
            goto L_80285E94;
    }
    // 0x80285D64: nop

    // 0x80285D68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285D6C: lbu         $t7, -0x1F80($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F80);
    // 0x80285D70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80285D74: bne         $t7, $at, L_80285DAC
    if (ctx->r15 != ctx->r1) {
        // 0x80285D78: nop
    
            goto L_80285DAC;
    }
    // 0x80285D78: nop

    // 0x80285D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285D80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285D84: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80285D88: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285D8C: jal         0x800178D4
    // 0x80285D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80285D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80285D94: jal         0x80284140
    // 0x80285D98: nop

    func_80284140_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80285D98: nop

    after_1:
    // 0x80285D9C: b           L_80285EA4
    // 0x80285DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285EA4;
    // 0x80285DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80285DA4: b           L_80285E94
    // 0x80285DA8: nop

        goto L_80285E94;
    // 0x80285DA8: nop

L_80285DAC:
    // 0x80285DAC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80285DB0: lbu         $t8, -0x1F80($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F80);
    // 0x80285DB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80285DB8: beq         $t8, $at, L_80285DCC
    if (ctx->r24 == ctx->r1) {
        // 0x80285DBC: nop
    
            goto L_80285DCC;
    }
    // 0x80285DBC: nop

    // 0x80285DC0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80285DC4: bne         $t8, $at, L_80285E94
    if (ctx->r24 != ctx->r1) {
        // 0x80285DC8: nop
    
            goto L_80285E94;
    }
    // 0x80285DC8: nop

L_80285DCC:
    // 0x80285DCC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80285DD0: lbu         $t9, -0x1F80($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1F80);
    // 0x80285DD4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80285DD8: bne         $t9, $at, L_80285E14
    if (ctx->r25 != ctx->r1) {
        // 0x80285DDC: nop
    
            goto L_80285E14;
    }
    // 0x80285DDC: nop

    // 0x80285DE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285DE4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80285DE8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80285DEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285DF0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80285DF4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80285DF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80285DFC: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80285E00: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80285E04: jal         0x80081468
    // 0x80285E08: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    func_80081468(rdram, ctx);
        goto after_2;
    // 0x80285E08: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    after_2:
    // 0x80285E0C: b           L_80285E40
    // 0x80285E10: nop

        goto L_80285E40;
    // 0x80285E10: nop

L_80285E14:
    // 0x80285E14: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80285E18: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80285E1C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80285E20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80285E24: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80285E28: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80285E2C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80285E30: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x80285E34: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80285E38: jal         0x80081468
    // 0x80285E3C: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    func_80081468(rdram, ctx);
        goto after_3;
    // 0x80285E3C: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    after_3:
L_80285E40:
    // 0x80285E40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285E48: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    // 0x80285E4C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80285E50: jal         0x800178D4
    // 0x80285E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80285E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80285E58: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80285E5C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80285E60: nop

    // 0x80285E64: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x80285E68: nop

    // 0x80285E6C: beq         $t3, $zero, L_80285E84
    if (ctx->r11 == 0) {
        // 0x80285E70: nop
    
            goto L_80285E84;
    }
    // 0x80285E70: nop

    // 0x80285E74: jal         0x80283EFC
    // 0x80285E78: nop

    func_80283EFC_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80285E78: nop

    after_5:
    // 0x80285E7C: b           L_80285E8C
    // 0x80285E80: nop

        goto L_80285E8C;
    // 0x80285E80: nop

L_80285E84:
    // 0x80285E84: jal         0x802841B8
    // 0x80285E88: nop

    func_802841B8_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80285E88: nop

    after_6:
L_80285E8C:
    // 0x80285E8C: b           L_80285EA4
    // 0x80285E90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285EA4;
    // 0x80285E90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285E94:
    // 0x80285E94: b           L_80285EA4
    // 0x80285E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80285EA4;
    // 0x80285E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80285E9C: b           L_80285EA4
    // 0x80285EA0: nop

        goto L_80285EA4;
    // 0x80285EA0: nop

L_80285EA4:
    // 0x80285EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80285EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80285EAC: jr          $ra
    // 0x80285EB0: nop

    return;
    // 0x80285EB0: nop

;}
RECOMP_FUNC void func_80283024_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283024: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80283028: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028302C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80283030: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80283034: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283038: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028303C: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x80283040: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283044: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283048: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028304C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80283050: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80283054: nop

    // 0x80283058: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x8028305C: nop

    // 0x80283060: bc1f        L_80283074
    if (!c1cs) {
        // 0x80283064: nop
    
            goto L_80283074;
    }
    // 0x80283064: nop

    // 0x80283068: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x8028306C: b           L_802830E4
    // 0x80283070: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
        goto L_802830E4;
    // 0x80283070: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
L_80283074:
    // 0x80283074: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283078: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028307C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80283080: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283084: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80283088: nop

    // 0x8028308C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80283090: nop

    // 0x80283094: bc1f        L_802830A8
    if (!c1cs) {
        // 0x80283098: nop
    
            goto L_802830A8;
    }
    // 0x80283098: nop

    // 0x8028309C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x802830A0: b           L_802830E4
    // 0x802830A4: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
        goto L_802830E4;
    // 0x802830A4: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_802830A8:
    // 0x802830A8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802830AC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802830B0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802830B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802830B8: lwc1        $f16, 0x44($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X44);
    // 0x802830BC: nop

    // 0x802830C0: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802830C4: nop

    // 0x802830C8: bc1f        L_802830DC
    if (!c1cs) {
        // 0x802830CC: nop
    
            goto L_802830DC;
    }
    // 0x802830CC: nop

    // 0x802830D0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x802830D4: b           L_802830E4
    // 0x802830D8: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
        goto L_802830E4;
    // 0x802830D8: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
L_802830DC:
    // 0x802830DC: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x802830E0: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
L_802830E4:
    // 0x802830E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802830E8: jal         0x8001B880
    // 0x802830EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x802830EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802830F0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802830F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802830F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802830FC: nop

    // 0x80283100: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80283104: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80283108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028310C: beq         $t5, $at, L_80283150
    if (ctx->r13 == ctx->r1) {
        // 0x80283110: nop
    
            goto L_80283150;
    }
    // 0x80283110: nop

    // 0x80283114: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80283118: beq         $t5, $at, L_80283150
    if (ctx->r13 == ctx->r1) {
        // 0x8028311C: nop
    
            goto L_80283150;
    }
    // 0x8028311C: nop

    // 0x80283120: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80283124: beq         $t5, $at, L_80283150
    if (ctx->r13 == ctx->r1) {
        // 0x80283128: nop
    
            goto L_80283150;
    }
    // 0x80283128: nop

    // 0x8028312C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80283130: beq         $t5, $at, L_80283150
    if (ctx->r13 == ctx->r1) {
        // 0x80283134: nop
    
            goto L_80283150;
    }
    // 0x80283134: nop

    // 0x80283138: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8028313C: beq         $t5, $at, L_80283150
    if (ctx->r13 == ctx->r1) {
        // 0x80283140: nop
    
            goto L_80283150;
    }
    // 0x80283140: nop

    // 0x80283144: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80283148: bne         $t5, $at, L_8028318C
    if (ctx->r13 != ctx->r1) {
        // 0x8028314C: nop
    
            goto L_8028318C;
    }
    // 0x8028314C: nop

L_80283150:
    // 0x80283150: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x80283154: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80283158: nop

    // 0x8028315C: beq         $t6, $t7, L_8028318C
    if (ctx->r14 == ctx->r15) {
        // 0x80283160: nop
    
            goto L_8028318C;
    }
    // 0x80283160: nop

    // 0x80283164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283168: jal         0x8001B62C
    // 0x8028316C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8028316C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283170: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80283174: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283178: jal         0x8001B580
    // 0x8028317C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x8028317C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80283180: nop

    // 0x80283184: div.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80283188: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_8028318C:
    // 0x8028318C: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x80283190: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80283194: nop

    // 0x80283198: beq         $t8, $t9, L_802831D0
    if (ctx->r24 == ctx->r25) {
        // 0x8028319C: nop
    
            goto L_802831D0;
    }
    // 0x8028319C: nop

    // 0x802831A0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802831A4: addiu       $t0, $t0, 0x5808
    ctx->r8 = ADD32(ctx->r8, 0X5808);
    // 0x802831A8: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x802831AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802831B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802831B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802831B8: jal         0x8001C0EC
    // 0x802831BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x802831BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x802831C0: jal         0x80280000
    // 0x802831C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802831C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802831C8: b           L_802831E8
    // 0x802831CC: nop

        goto L_802831E8;
    // 0x802831CC: nop

L_802831D0:
    // 0x802831D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802831D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802831D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802831DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802831E0: jal         0x800178D4
    // 0x802831E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x802831E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_802831E8:
    // 0x802831E8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802831EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802831F0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802831F4: nop

    // 0x802831F8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802831FC: nop

    // 0x80283200: bc1t        L_80283278
    if (c1cs) {
        // 0x80283204: nop
    
            goto L_80283278;
    }
    // 0x80283204: nop

    // 0x80283208: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028320C: jal         0x8001B580
    // 0x80283210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_6;
    // 0x80283210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80283214: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80283218: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8028321C: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80283220: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283228: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8028322C: nop

    // 0x80283230: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80283234: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80283238: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8028323C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283240: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80283244: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80283248: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8028324C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80283250: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80283254: bgez        $t3, L_8028326C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80283258: cvt.s.w     $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8028326C;
    }
    // 0x80283258: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028325C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80283260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80283264: nop

    // 0x80283268: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8028326C:
    // 0x8028326C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80283270: jal         0x8001B6BC
    // 0x80283274: nop

    func_8001B6BC(rdram, ctx);
        goto after_7;
    // 0x80283274: nop

    after_7:
L_80283278:
    // 0x80283278: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8028327C: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x80283280: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283284: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80283288: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028328C: sw          $t5, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r13;
    // 0x80283290: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80283294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283298: swc1        $f10, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f10.u32l;
    // 0x8028329C: b           L_802832A4
    // 0x802832A0: nop

        goto L_802832A4;
    // 0x802832A0: nop

L_802832A4:
    // 0x802832A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802832A8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802832AC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802832B0: jr          $ra
    // 0x802832B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802832B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80289C94_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289C94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289C98: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289C9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289CA0: nop

    // 0x80289CA4: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289CA8: jr          $ra
    // 0x80289CAC: nop

    return;
    // 0x80289CAC: nop

    // 0x80289CB0: jr          $ra
    // 0x80289CB4: nop

    return;
    // 0x80289CB4: nop

;}
RECOMP_FUNC void func_80289A6C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289A6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289A70: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289A74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80289A78: nop

    // 0x80289A7C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80289A80: jr          $ra
    // 0x80289A84: nop

    return;
    // 0x80289A84: nop

    // 0x80289A88: jr          $ra
    // 0x80289A8C: nop

    return;
    // 0x80289A8C: nop

;}
RECOMP_FUNC void func_80283B18_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283B18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283B1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283B20: jal         0x8001A928
    // 0x80283B24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283B24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283B28: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283B2C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283B30: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x80283B34: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283B38: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283B3C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283B40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283B44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283B4C: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x80283B50: jal         0x8001C0EC
    // 0x80283B54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283B54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283B58: jal         0x80280000
    // 0x80283B5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283B5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80283B60: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80283B64: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283B68: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283B6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283B70: nop

    // 0x80283B74: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80283B78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283B7C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283B80: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80283B84: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283B88: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283B8C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283B90: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80283B94: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80283B98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283B9C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80283BA0: sw          $t3, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r11;
    // 0x80283BA4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283BA8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80283BAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80283BB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80283BB4: lwc1        $f12, 0x128($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X128);
    // 0x80283BB8: jal         0x80015538
    // 0x80283BBC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80283BBC: nop

    after_3:
    // 0x80283BC0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80283BC4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80283BC8: nop

    // 0x80283BCC: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x80283BD0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80283BD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283BD8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283BDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283BE0: nop

    // 0x80283BE4: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x80283BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283BF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283BF4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283BF8: jal         0x800178D4
    // 0x80283BFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80283BFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80283C00: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283C04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283C08: jal         0x8001FB3C
    // 0x80283C0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_5;
    // 0x80283C0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80283C10: b           L_80283C18
    // 0x80283C14: nop

        goto L_80283C18;
    // 0x80283C14: nop

L_80283C18:
    // 0x80283C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283C20: jr          $ra
    // 0x80283C24: nop

    return;
    // 0x80283C24: nop

;}
RECOMP_FUNC void func_80284FAC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284FAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80284FB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284FB4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284FB8: nop

    // 0x80284FBC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80284FC0: nop

    // 0x80284FC4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80284FC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284FCC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284FD0: nop

    // 0x80284FD4: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80284FD8: nop

    // 0x80284FDC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80284FE0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284FE4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80284FE8: nop

    // 0x80284FEC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80284FF0: nop

    // 0x80284FF4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80284FF8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80284FFC: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
L_80285000:
    // 0x80285000: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80285004: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80285008: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8028500C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285010: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80285014: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80285018: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8028501C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80285020: lh          $t2, 0x41F4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F4);
    // 0x80285024: nop

    // 0x80285028: beq         $t2, $zero, L_8028514C
    if (ctx->r10 == 0) {
        // 0x8028502C: nop
    
            goto L_8028514C;
    }
    // 0x8028502C: nop

    // 0x80285030: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80285034: beq         $t2, $at, L_8028514C
    if (ctx->r10 == ctx->r1) {
        // 0x80285038: nop
    
            goto L_8028514C;
    }
    // 0x80285038: nop

    // 0x8028503C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x80285040: beq         $t2, $at, L_8028514C
    if (ctx->r10 == ctx->r1) {
        // 0x80285044: nop
    
            goto L_8028514C;
    }
    // 0x80285044: nop

    // 0x80285048: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8028504C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80285050: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80285054: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80285058: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8028505C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80285060: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80285064: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80285068: lwc1        $f10, 0x4150($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8028506C: nop

    // 0x80285070: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80285074: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x80285078: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8028507C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80285080: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80285084: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80285088: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8028508C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80285090: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80285094: lwc1        $f16, 0x4154($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80285098: nop

    // 0x8028509C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x802850A0: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x802850A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x802850A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802850AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802850B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802850B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802850B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802850BC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802850C0: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x802850C4: nop

    // 0x802850C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802850CC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802850D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802850D4: nop

    // 0x802850D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802850DC: swc1        $f8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f8.u32l;
    // 0x802850E0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802850E4: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802850E8: nop

    // 0x802850EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802850F0: swc1        $f18, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f18.u32l;
    // 0x802850F4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802850F8: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802850FC: nop

    // 0x80285100: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80285104: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80285108: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8028510C: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80285110: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80285114: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80285118: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028511C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80285120: nop

    // 0x80285124: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80285128: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8028512C: lwc1        $f16, -0x4960($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4960);
    // 0x80285130: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80285134: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80285138: nop

    // 0x8028513C: bc1f        L_8028514C
    if (!c1cs) {
        // 0x80285140: nop
    
            goto L_8028514C;
    }
    // 0x80285140: nop

    // 0x80285144: b           L_80285174
    // 0x80285148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285174;
    // 0x80285148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028514C:
    // 0x8028514C: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80285150: nop

    // 0x80285154: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80285158: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x8028515C: bne         $at, $zero, L_80285000
    if (ctx->r1 != 0) {
        // 0x80285160: sw          $t0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r8;
            goto L_80285000;
    }
    // 0x80285160: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x80285164: b           L_80285174
    // 0x80285168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80285174;
    // 0x80285168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028516C: b           L_80285174
    // 0x80285170: nop

        goto L_80285174;
    // 0x80285170: nop

L_80285174:
    // 0x80285174: jr          $ra
    // 0x80285178: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80285178: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80283CE0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283CE8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283CEC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283CF0: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x80283CF4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283CF8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283CFC: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283D00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283D0C: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x80283D10: jal         0x8001C0EC
    // 0x80283D14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283D14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283D18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283D1C: jal         0x8001B754
    // 0x80283D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80283D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80283D24: jal         0x80280000
    // 0x80283D28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283D28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80283D2C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80283D30: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283D34: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80283D38: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80283D3C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283D40: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80283D44: b           L_80283D4C
    // 0x80283D48: nop

        goto L_80283D4C;
    // 0x80283D48: nop

L_80283D4C:
    // 0x80283D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283D50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283D54: jr          $ra
    // 0x80283D58: nop

    return;
    // 0x80283D58: nop

;}
RECOMP_FUNC void func_802894D4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802894D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802894D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802894DC: jal         0x80282034
    // 0x802894E0: nop

    func_80282034_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802894E0: nop

    after_0:
    // 0x802894E4: jal         0x80281BA4
    // 0x802894E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802894E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802894EC: b           L_802894F4
    // 0x802894F0: nop

        goto L_802894F4;
    // 0x802894F0: nop

L_802894F4:
    // 0x802894F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802894F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802894FC: jr          $ra
    // 0x80289500: nop

    return;
    // 0x80289500: nop

;}
RECOMP_FUNC void func_80283A40_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283A40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283A48: jal         0x8001A928
    // 0x80283A4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283A4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283A50: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80283A54: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80283A58: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x80283A5C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283A60: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283A64: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283A68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283A6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283A74: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x80283A78: jal         0x8001C0EC
    // 0x80283A7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283A7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283A84: jal         0x8001B754
    // 0x80283A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80283A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80283A8C: jal         0x80280000
    // 0x80283A90: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80283A90: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x80283A94: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283A98: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283A9C: nop

    // 0x80283AA0: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80283AA4: nop

    // 0x80283AA8: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80283AAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80283AB0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283AB4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283AB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283ABC: nop

    // 0x80283AC0: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x80283AC4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283AC8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283ACC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80283AD0: nop

    // 0x80283AD4: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x80283AD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283AE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283AE8: jal         0x800178D4
    // 0x80283AEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80283AEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80283AF0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283AF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283AF8: jal         0x8001FB3C
    // 0x80283AFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_5;
    // 0x80283AFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80283B00: b           L_80283B08
    // 0x80283B04: nop

        goto L_80283B08;
    // 0x80283B04: nop

L_80283B08:
    // 0x80283B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283B10: jr          $ra
    // 0x80283B14: nop

    return;
    // 0x80283B14: nop

;}
RECOMP_FUNC void func_80280894_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280894: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028089C: lb          $t6, -0x1D83($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1D83);
    // 0x802808A0: nop

    // 0x802808A4: bne         $t6, $zero, L_802808B4
    if (ctx->r14 != 0) {
        // 0x802808A8: nop
    
            goto L_802808B4;
    }
    // 0x802808A8: nop

    // 0x802808AC: b           L_80280A94
    // 0x802808B0: nop

        goto L_80280A94;
    // 0x802808B0: nop

L_802808B4:
    // 0x802808B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802808B8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802808BC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x802808C0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x802808C4: nop

    // 0x802808C8: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x802808CC: nop
    
            goto L_80280918;
    }
    // 0x802808CC: nop

    // 0x802808D0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802808D4: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x802808D8: nop
    
            goto L_80280918;
    }
    // 0x802808D8: nop

    // 0x802808DC: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x802808E0: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x802808E4: nop
    
            goto L_80280918;
    }
    // 0x802808E4: nop

    // 0x802808E8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x802808EC: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x802808F0: nop
    
            goto L_80280918;
    }
    // 0x802808F0: nop

    // 0x802808F4: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x802808F8: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x802808FC: nop
    
            goto L_80280918;
    }
    // 0x802808FC: nop

    // 0x80280900: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80280904: beq         $t8, $at, L_80280918
    if (ctx->r24 == ctx->r1) {
        // 0x80280908: nop
    
            goto L_80280918;
    }
    // 0x80280908: nop

    // 0x8028090C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80280910: bne         $t8, $at, L_80280928
    if (ctx->r24 != ctx->r1) {
        // 0x80280914: nop
    
            goto L_80280928;
    }
    // 0x80280914: nop

L_80280918:
    // 0x80280918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028091C: sb          $zero, -0x1D83($at)
    MEM_B(-0X1D83, ctx->r1) = 0;
    // 0x80280920: b           L_80280A94
    // 0x80280924: nop

        goto L_80280A94;
    // 0x80280924: nop

L_80280928:
    // 0x80280928: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028092C: lb          $t9, -0x1D83($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1D83);
    // 0x80280930: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280934: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80280938: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8028093C: lbu         $t1, 0x65D7($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X65D7);
    // 0x80280940: nop

    // 0x80280944: sb          $t1, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r9;
    // 0x80280948: lbu         $t2, 0x6($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6);
    // 0x8028094C: nop

    // 0x80280950: beq         $t2, $zero, L_80280A6C
    if (ctx->r10 == 0) {
        // 0x80280954: nop
    
            goto L_80280A6C;
    }
    // 0x80280954: nop

    // 0x80280958: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8028095C: lw          $t3, 0x51A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51A4);
    // 0x80280960: nop

    // 0x80280964: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80280968: beq         $t4, $zero, L_80280980
    if (ctx->r12 == 0) {
        // 0x8028096C: nop
    
            goto L_80280980;
    }
    // 0x8028096C: nop

    // 0x80280970: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280978: b           L_80280990
    // 0x8028097C: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
        goto L_80280990;
    // 0x8028097C: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
L_80280980:
    // 0x80280980: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80280984: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280988: nop

    // 0x8028098C: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
L_80280990:
    // 0x80280990: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280994: lb          $t5, -0x1D83($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1D83);
    // 0x80280998: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028099C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x802809A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802809A4: lbu         $t7, 0x65D6($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X65D6);
    // 0x802809A8: nop

    // 0x802809AC: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
    // 0x802809B0: lbu         $t8, 0x7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7);
    // 0x802809B4: nop

    // 0x802809B8: bne         $t8, $zero, L_802809E0
    if (ctx->r24 != 0) {
        // 0x802809BC: nop
    
            goto L_802809E0;
    }
    // 0x802809BC: nop

    // 0x802809C0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802809C4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802809C8: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x802809CC: lwc1        $f8, 0x24($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X24);
    // 0x802809D0: nop

    // 0x802809D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802809D8: b           L_80280A6C
    // 0x802809DC: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
        goto L_80280A6C;
    // 0x802809DC: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
L_802809E0:
    // 0x802809E0: lbu         $t0, 0x7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7);
    // 0x802809E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802809E8: bne         $t0, $at, L_80280A10
    if (ctx->r8 != ctx->r1) {
        // 0x802809EC: nop
    
            goto L_80280A10;
    }
    // 0x802809EC: nop

    // 0x802809F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802809F4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802809F8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x802809FC: lwc1        $f18, 0x24($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X24);
    // 0x80280A00: nop

    // 0x80280A04: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280A08: b           L_80280A6C
    // 0x80280A0C: swc1        $f6, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f6.u32l;
        goto L_80280A6C;
    // 0x80280A0C: swc1        $f6, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f6.u32l;
L_80280A10:
    // 0x80280A10: lbu         $t2, 0x7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7);
    // 0x80280A14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280A18: bne         $t2, $at, L_80280A40
    if (ctx->r10 != ctx->r1) {
        // 0x80280A1C: nop
    
            goto L_80280A40;
    }
    // 0x80280A1C: nop

    // 0x80280A20: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280A24: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280A28: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80280A2C: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80280A30: nop

    // 0x80280A34: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80280A38: b           L_80280A6C
    // 0x80280A3C: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
        goto L_80280A6C;
    // 0x80280A3C: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
L_80280A40:
    // 0x80280A40: lbu         $t4, 0x7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7);
    // 0x80280A44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80280A48: bne         $t4, $at, L_80280A6C
    if (ctx->r12 != ctx->r1) {
        // 0x80280A4C: nop
    
            goto L_80280A6C;
    }
    // 0x80280A4C: nop

    // 0x80280A50: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280A54: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280A58: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80280A5C: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80280A60: nop

    // 0x80280A64: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80280A68: swc1        $f6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f6.u32l;
L_80280A6C:
    // 0x80280A6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80280A70: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80280A74: nop

    // 0x80280A78: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80280A7C: bne         $t7, $zero, L_80280A8C
    if (ctx->r15 != 0) {
        // 0x80280A80: nop
    
            goto L_80280A8C;
    }
    // 0x80280A80: nop

    // 0x80280A84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A88: sb          $zero, -0x1D83($at)
    MEM_B(-0X1D83, ctx->r1) = 0;
L_80280A8C:
    // 0x80280A8C: b           L_80280A94
    // 0x80280A90: nop

        goto L_80280A94;
    // 0x80280A90: nop

L_80280A94:
    // 0x80280A94: jr          $ra
    // 0x80280A98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280A98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80288F28_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288F28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80288F2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80288F30: jal         0x802858D8
    // 0x80288F34: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288F34: nop

    after_0:
    // 0x80288F38: beq         $v0, $zero, L_80288F48
    if (ctx->r2 == 0) {
        // 0x80288F3C: nop
    
            goto L_80288F48;
    }
    // 0x80288F3C: nop

    // 0x80288F40: b           L_80289120
    // 0x80288F44: nop

        goto L_80289120;
    // 0x80288F44: nop

L_80288F48:
    // 0x80288F48: jal         0x80085D54
    // 0x80288F4C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288F4C: nop

    after_1:
    // 0x80288F50: beq         $v0, $zero, L_80288F60
    if (ctx->r2 == 0) {
        // 0x80288F54: nop
    
            goto L_80288F60;
    }
    // 0x80288F54: nop

    // 0x80288F58: b           L_80289120
    // 0x80288F5C: nop

        goto L_80289120;
    // 0x80288F5C: nop

L_80288F60:
    // 0x80288F60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288F64: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80288F68: nop

    // 0x80288F6C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80288F70: nop

    // 0x80288F74: bne         $t7, $zero, L_80289024
    if (ctx->r15 != 0) {
        // 0x80288F78: nop
    
            goto L_80289024;
    }
    // 0x80288F78: nop

    // 0x80288F7C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288F80: lw          $t8, -0x1DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DA8);
    // 0x80288F84: nop

    // 0x80288F88: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80288F8C: beq         $t9, $zero, L_80289014
    if (ctx->r25 == 0) {
        // 0x80288F90: nop
    
            goto L_80289014;
    }
    // 0x80288F90: nop

    // 0x80288F94: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80288F98: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80288F9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80288FA0: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x80288FA4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80288FA8: addiu       $t2, $t2, 0x5808
    ctx->r10 = ADD32(ctx->r10, 0X5808);
    // 0x80288FAC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80288FB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80288FB8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80288FBC: jal         0x8001C0EC
    // 0x80288FC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80288FC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80288FC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288FC8: jal         0x8001B754
    // 0x80288FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x80288FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80288FD0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80288FD4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80288FD8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80288FDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80288FE0: nop

    // 0x80288FE4: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x80288FE8: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80288FEC: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x80288FF0: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x80288FF4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80288FF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80288FFC: sw          $t5, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r13;
    // 0x80289000: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80289004: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80289008: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028900C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80289010: sw          $t7, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r15;
L_80289014:
    // 0x80289014: jal         0x80281E50
    // 0x80289018: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80289018: nop

    after_4:
    // 0x8028901C: b           L_80289118
    // 0x80289020: nop

        goto L_80289118;
    // 0x80289020: nop

L_80289024:
    // 0x80289024: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80289028: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028902C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80289030: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80289034: nop

    // 0x80289038: bne         $t9, $at, L_80289080
    if (ctx->r25 != ctx->r1) {
        // 0x8028903C: nop
    
            goto L_80289080;
    }
    // 0x8028903C: nop

    // 0x80289040: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80289044: lw          $t0, -0x1DA8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1DA8);
    // 0x80289048: nop

    // 0x8028904C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80289050: beq         $t1, $zero, L_80289070
    if (ctx->r9 == 0) {
        // 0x80289054: nop
    
            goto L_80289070;
    }
    // 0x80289054: nop

    // 0x80289058: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028905C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80289060: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80289064: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80289068: jal         0x80280000
    // 0x8028906C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x8028906C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_5:
L_80289070:
    // 0x80289070: jal         0x80281E50
    // 0x80289074: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80289074: nop

    after_6:
    // 0x80289078: b           L_80289118
    // 0x8028907C: nop

        goto L_80289118;
    // 0x8028907C: nop

L_80289080:
    // 0x80289080: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80289084: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80289088: nop

    // 0x8028908C: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80289090: nop

    // 0x80289094: slti        $at, $t5, 0x96
    ctx->r1 = SIGNED(ctx->r13) < 0X96 ? 1 : 0;
    // 0x80289098: bne         $at, $zero, L_802890B8
    if (ctx->r1 != 0) {
        // 0x8028909C: nop
    
            goto L_802890B8;
    }
    // 0x8028909C: nop

    // 0x802890A0: jal         0x802838FC
    // 0x802890A4: nop

    func_802838FC_code_extra_0(rdram, ctx);
        goto after_7;
    // 0x802890A4: nop

    after_7:
    // 0x802890A8: b           L_80289120
    // 0x802890AC: nop

        goto L_80289120;
    // 0x802890AC: nop

    // 0x802890B0: b           L_80289104
    // 0x802890B4: nop

        goto L_80289104;
    // 0x802890B4: nop

L_802890B8:
    // 0x802890B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802890BC: lhu         $t6, -0x1C60($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C60);
    // 0x802890C0: nop

    // 0x802890C4: beq         $t6, $zero, L_802890E8
    if (ctx->r14 == 0) {
        // 0x802890C8: nop
    
            goto L_802890E8;
    }
    // 0x802890C8: nop

    // 0x802890CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802890D0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802890D4: nop

    // 0x802890D8: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x802890DC: nop

    // 0x802890E0: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x802890E4: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
L_802890E8:
    // 0x802890E8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802890EC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802890F0: nop

    // 0x802890F4: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x802890F8: nop

    // 0x802890FC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80289100: sh          $t2, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r10;
L_80289104:
    // 0x80289104: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80289108: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028910C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289110: nop

    // 0x80289114: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
L_80289118:
    // 0x80289118: b           L_80289120
    // 0x8028911C: nop

        goto L_80289120;
    // 0x8028911C: nop

L_80289120:
    // 0x80289120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80289124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80289128: jr          $ra
    // 0x8028912C: nop

    return;
    // 0x8028912C: nop

;}
RECOMP_FUNC void func_802828A0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802828A0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x802828A4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x802828A8: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x802828AC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802828B0: jr          $ra
    // 0x802828B4: nop

    return;
    // 0x802828B4: nop

    // 0x802828B8: jr          $ra
    // 0x802828BC: nop

    return;
    // 0x802828BC: nop

;}
RECOMP_FUNC void func_80282E5C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282E60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282E64: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282E68: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282E6C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80282E70: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80282E74: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80282E78: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80282E7C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80282E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282E88: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80282E8C: jal         0x8001C0EC
    // 0x80282E90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282E90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282E94: jal         0x80280000
    // 0x80282E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80282E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80282E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282EA4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80282EA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282EAC: jal         0x800178D4
    // 0x80282EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282EB4: b           L_80282EBC
    // 0x80282EB8: nop

        goto L_80282EBC;
    // 0x80282EB8: nop

L_80282EBC:
    // 0x80282EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282EC4: jr          $ra
    // 0x80282EC8: nop

    return;
    // 0x80282EC8: nop

;}
RECOMP_FUNC void func_802891C0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802891C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802891C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802891C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802891CC: jal         0x8001B62C
    // 0x802891D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x802891D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802891D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802891D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802891DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802891E0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802891E4: nop

    // 0x802891E8: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802891EC: nop

    // 0x802891F0: bc1f        L_80289228
    if (!c1cs) {
        // 0x802891F4: nop
    
            goto L_80289228;
    }
    // 0x802891F4: nop

    // 0x802891F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802891FC: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80289200: nop

    // 0x80289204: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80289208: bne         $t7, $zero, L_80289228
    if (ctx->r15 != 0) {
        // 0x8028920C: nop
    
            goto L_80289228;
    }
    // 0x8028920C: nop

    // 0x80289210: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80289214: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80289218: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8028921C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80289220: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289224: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
L_80289228:
    // 0x80289228: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028922C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80289230: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289234: nop

    // 0x80289238: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8028923C: nop

    // 0x80289240: bc1f        L_80289278
    if (!c1cs) {
        // 0x80289244: nop
    
            goto L_80289278;
    }
    // 0x80289244: nop

    // 0x80289248: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028924C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80289250: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80289254: lwc1        $f16, -0x4928($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4928);
    // 0x80289258: nop

    // 0x8028925C: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
    // 0x80289260: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80289264: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x80289268: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028926C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80289270: b           L_802892E0
    // 0x80289274: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
        goto L_802892E0;
    // 0x80289274: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
L_80289278:
    // 0x80289278: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8028927C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80289280: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289284: nop

    // 0x80289288: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8028928C: nop

    // 0x80289290: bc1f        L_802892A8
    if (!c1cs) {
        // 0x80289294: nop
    
            goto L_802892A8;
    }
    // 0x80289294: nop

    // 0x80289298: jal         0x802807F8
    // 0x8028929C: nop

    func_802807F8_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028929C: nop

    after_1:
    // 0x802892A0: b           L_802892E0
    // 0x802892A4: nop

        goto L_802892E0;
    // 0x802892A4: nop

L_802892A8:
    // 0x802892A8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802892AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802892B0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802892B4: nop

    // 0x802892B8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x802892BC: nop

    // 0x802892C0: bc1f        L_802892E0
    if (!c1cs) {
        // 0x802892C4: nop
    
            goto L_802892E0;
    }
    // 0x802892C4: nop

    // 0x802892C8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x802892CC: lw          $t3, 0x51A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51A4);
    // 0x802892D0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x802892D4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x802892D8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802892DC: sw          $t4, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r12;
L_802892E0:
    // 0x802892E0: jal         0x80281E50
    // 0x802892E4: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802892E4: nop

    after_2:
    // 0x802892E8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802892EC: lh          $t5, -0x1D68($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1D68);
    // 0x802892F0: nop

    // 0x802892F4: beq         $t5, $zero, L_80289304
    if (ctx->r13 == 0) {
        // 0x802892F8: nop
    
            goto L_80289304;
    }
    // 0x802892F8: nop

    // 0x802892FC: jal         0x80282250
    // 0x80289300: nop

    func_80282250_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80289300: nop

    after_3:
L_80289304:
    // 0x80289304: b           L_8028930C
    // 0x80289308: nop

        goto L_8028930C;
    // 0x80289308: nop

L_8028930C:
    // 0x8028930C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80289314: jr          $ra
    // 0x80289318: nop

    return;
    // 0x80289318: nop

;}
RECOMP_FUNC void func_802845C4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802845C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802845C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802845CC: jal         0x8001A928
    // 0x802845D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x802845D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802845D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802845D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802845DC: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x802845E0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802845E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802845E8: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802845EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802845F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802845F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802845F8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802845FC: jal         0x8001C0EC
    // 0x80284600: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284600: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284604: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284608: sh          $zero, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = 0;
    // 0x8028460C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284610: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80284614: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80284618: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x8028461C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284624: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x80284628: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028462C: jal         0x800178D4
    // 0x80284630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80284630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80284634: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80284638: lh          $t1, -0x1F00($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F00);
    // 0x8028463C: nop

    // 0x80284640: beq         $t1, $zero, L_80284650
    if (ctx->r9 == 0) {
        // 0x80284644: nop
    
            goto L_80284650;
    }
    // 0x80284644: nop

    // 0x80284648: jal         0x8007A6DC
    // 0x8028464C: nop

    func_8007A6DC(rdram, ctx);
        goto after_3;
    // 0x8028464C: nop

    after_3:
L_80284650:
    // 0x80284650: b           L_80284658
    // 0x80284654: nop

        goto L_80284658;
    // 0x80284654: nop

L_80284658:
    // 0x80284658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028465C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284660: jr          $ra
    // 0x80284664: nop

    return;
    // 0x80284664: nop

;}
RECOMP_FUNC void func_802883BC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802883BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802883C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802883C4: jal         0x802858D8
    // 0x802883C8: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802883C8: nop

    after_0:
    // 0x802883CC: beq         $v0, $zero, L_802883F4
    if (ctx->r2 == 0) {
        // 0x802883D0: nop
    
            goto L_802883F4;
    }
    // 0x802883D0: nop

    // 0x802883D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802883D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802883DC: sh          $t6, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r14;
    // 0x802883E0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802883E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802883E8: sh          $t7, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r15;
    // 0x802883EC: b           L_80288650
    // 0x802883F0: nop

        goto L_80288650;
    // 0x802883F0: nop

L_802883F4:
    // 0x802883F4: jal         0x80085D54
    // 0x802883F8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802883F8: nop

    after_1:
    // 0x802883FC: beq         $v0, $zero, L_80288424
    if (ctx->r2 == 0) {
        // 0x80288400: nop
    
            goto L_80288424;
    }
    // 0x80288400: nop

    // 0x80288404: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80288408: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028840C: sh          $t8, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r24;
    // 0x80288410: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80288414: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288418: sh          $t9, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r25;
    // 0x8028841C: b           L_80288650
    // 0x80288420: nop

        goto L_80288650;
    // 0x80288420: nop

L_80288424:
    // 0x80288424: jal         0x80286748
    // 0x80288428: nop

    func_80286748_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80288428: nop

    after_2:
    // 0x8028842C: beq         $v0, $zero, L_8028843C
    if (ctx->r2 == 0) {
        // 0x80288430: nop
    
            goto L_8028843C;
    }
    // 0x80288430: nop

    // 0x80288434: b           L_80288650
    // 0x80288438: nop

        goto L_80288650;
    // 0x80288438: nop

L_8028843C:
    // 0x8028843C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288440: jal         0x8001B44C
    // 0x80288444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80288444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80288448: beq         $v0, $zero, L_80288648
    if (ctx->r2 == 0) {
        // 0x8028844C: nop
    
            goto L_80288648;
    }
    // 0x8028844C: nop

    // 0x80288450: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80288454: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80288458: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028845C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288460: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80288464: nop

    // 0x80288468: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028846C: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
    // 0x80288470: jal         0x8028236C
    // 0x80288474: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288474: nop

    after_4:
    // 0x80288478: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8028847C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288480: sh          $t1, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r9;
    // 0x80288484: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80288488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028848C: sh          $t2, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r10;
    // 0x80288490: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80288494:
    // 0x80288494: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80288498: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028849C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802884A0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802884A4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802884A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802884AC: lwc1        $f14, -0x4E10($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4E10);
    // 0x802884B0: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x802884B4: jal         0x80015538
    // 0x802884B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x802884B8: nop

    after_5:
    // 0x802884BC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802884C0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802884C4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802884C8: lwc1        $f19, -0x4938($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4938);
    // 0x802884CC: lwc1        $f18, -0x4934($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4934);
    // 0x802884D0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802884D4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x802884D8: jal         0x80034970
    // 0x802884DC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x802884DC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x802884E0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802884E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802884E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802884EC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802884F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802884F4: nop

    // 0x802884F8: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802884FC: nop

    // 0x80288500: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80288504: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80288508: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028850C: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80288510: lwc1        $f7, -0x4930($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4930);
    // 0x80288514: lwc1        $f6, -0x492C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X492C);
    // 0x80288518: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8028851C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80288520: jal         0x80036570
    // 0x80288524: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x80288524: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_7:
    // 0x80288528: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028852C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80288530: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288534: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80288538: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028853C: nop

    // 0x80288540: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80288544: nop

    // 0x80288548: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8028854C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80288550: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288554: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80288558: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028855C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80288560: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80288564: jal         0x800843CC
    // 0x80288568: nop

    func_800843CC(rdram, ctx);
        goto after_8;
    // 0x80288568: nop

    after_8:
    // 0x8028856C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80288570: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80288574: nop

    // 0x80288578: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8028857C: beq         $t0, $zero, L_802885BC
    if (ctx->r8 == 0) {
        // 0x80288580: nop
    
            goto L_802885BC;
    }
    // 0x80288580: nop

    // 0x80288584: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80288588: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028858C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80288590: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80288594: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80288598: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028859C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x802885A0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x802885A4: lwc1        $f16, 0x7760($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x802885A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802885AC: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x802885B0: nop

    // 0x802885B4: bc1f        L_80288630
    if (!c1cs) {
        // 0x802885B8: nop
    
            goto L_80288630;
    }
    // 0x802885B8: nop

L_802885BC:
    // 0x802885BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802885C0: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x802885C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802885C8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x802885CC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802885D0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802885D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802885D8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802885DC: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x802885E0: nop

    // 0x802885E4: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x802885E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802885EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802885F0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802885F4: nop

    // 0x802885F8: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x802885FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288600: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80288604: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80288608: nop

    // 0x8028860C: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x80288610: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80288614: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80288618: jal         0x80085B34
    // 0x8028861C: nop

    func_80085B34(rdram, ctx);
        goto after_9;
    // 0x8028861C: nop

    after_9:
    // 0x80288620: b           L_80288650
    // 0x80288624: nop

        goto L_80288650;
    // 0x80288624: nop

    // 0x80288628: b           L_80288648
    // 0x8028862C: nop

        goto L_80288648;
    // 0x8028862C: nop

L_80288630:
    // 0x80288630: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80288634: nop

    // 0x80288638: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8028863C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80288640: bne         $at, $zero, L_80288494
    if (ctx->r1 != 0) {
        // 0x80288644: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_80288494;
    }
    // 0x80288644: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80288648:
    // 0x80288648: b           L_80288650
    // 0x8028864C: nop

        goto L_80288650;
    // 0x8028864C: nop

L_80288650:
    // 0x80288650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80288658: jr          $ra
    // 0x8028865C: nop

    return;
    // 0x8028865C: nop

;}
RECOMP_FUNC void func_80285F30_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285F30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80285F34: b           L_80285F44
    // 0x80285F38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80285F44;
    // 0x80285F38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80285F3C: b           L_80285F44
    // 0x80285F40: nop

        goto L_80285F44;
    // 0x80285F40: nop

L_80285F44:
    // 0x80285F44: jr          $ra
    // 0x80285F48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80285F48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8028A414_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A414: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028A418: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028A41C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028A420: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8028A424: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A428: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A42C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8028A430: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A434: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A438: jal         0x80015538
    // 0x8028A43C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8028A43C: nop

    after_0:
    // 0x8028A440: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A444: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A448: nop

    // 0x8028A44C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A450: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A454: lh          $t8, -0x1CE8($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1CE8);
    // 0x8028A458: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x8028A45C: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x8028A460: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8028A464: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8028A468: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028A46C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028A470: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028A474: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028A478: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028A47C: nop

    // 0x8028A480: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x8028A484: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A488: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A48C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A490: lwc1        $f16, 0xC($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8028A494: lwc1        $f5, -0x4918($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4918);
    // 0x8028A498: lwc1        $f4, -0x4914($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4914);
    // 0x8028A49C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8028A4A0: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8028A4A4: nop

    // 0x8028A4A8: bc1f        L_8028A4C8
    if (!c1cs) {
        // 0x8028A4AC: nop
    
            goto L_8028A4C8;
    }
    // 0x8028A4AC: nop

    // 0x8028A4B0: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A4B4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A4B8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A4BC: lwc1        $f6, -0x4910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4910);
    // 0x8028A4C0: nop

    // 0x8028A4C4: swc1        $f6, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f6.u32l;
L_8028A4C8:
    // 0x8028A4C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028A4CC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028A4D0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028A4D4: lwc1        $f20, 0xC($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0XC);
    // 0x8028A4D8: nop

    // 0x8028A4DC: swc1        $f20, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f20.u32l;
    // 0x8028A4E0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028A4E4: nop

    // 0x8028A4E8: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8028A4EC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8028A4F0: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x8028A4F4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028A4F8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8028A4FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028A500: sw          $t7, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r15;
    // 0x8028A504: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028A508: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028A50C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028A510: nop

    // 0x8028A514: swc1        $f8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f8.u32l;
    // 0x8028A518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A51C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028A520: jal         0x8001B6BC
    // 0x8028A524: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x8028A524: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x8028A528: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A52C: lb          $t8, -0x1DD8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1DD8);
    // 0x8028A530: nop

    // 0x8028A534: andi        $t0, $t8, 0x7
    ctx->r8 = ctx->r24 & 0X7;
    // 0x8028A538: bne         $t0, $zero, L_8028A61C
    if (ctx->r8 != 0) {
        // 0x8028A53C: nop
    
            goto L_8028A61C;
    }
    // 0x8028A53C: nop

    // 0x8028A540: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028A544: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028A548: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A54C: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8028A550: lwc1        $f19, -0x4908($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4908);
    // 0x8028A554: lwc1        $f18, -0x4904($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4904);
    // 0x8028A558: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8028A55C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8028A560: jal         0x80034970
    // 0x8028A564: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x8028A564: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x8028A568: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028A56C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028A570: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A574: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028A578: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A57C: nop

    // 0x8028A580: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8028A584: nop

    // 0x8028A588: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028A58C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8028A590: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A594: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A598: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A59C: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8028A5A0: lwc1        $f7, -0x4900($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4900);
    // 0x8028A5A4: lwc1        $f6, -0x48FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X48FC);
    // 0x8028A5A8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8028A5AC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8028A5B0: jal         0x80034970
    // 0x8028A5B4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x8028A5B4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x8028A5B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028A5BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028A5C0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028A5C4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8028A5C8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028A5CC: nop

    // 0x8028A5D0: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8028A5D4: nop

    // 0x8028A5D8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8028A5DC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8028A5E0: jal         0x80014E80
    // 0x8028A5E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x8028A5E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_4:
    // 0x8028A5E8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8028A5EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028A5F0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028A5F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8028A5F8: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8028A5FC: nop

    // 0x8028A600: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028A604: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8028A608: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8028A60C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8028A610: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8028A614: jal         0x80081468
    // 0x8028A618: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    func_80081468(rdram, ctx);
        goto after_5;
    // 0x8028A618: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    after_5:
L_8028A61C:
    // 0x8028A61C: b           L_8028A624
    // 0x8028A620: nop

        goto L_8028A624;
    // 0x8028A620: nop

L_8028A624:
    // 0x8028A624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028A628: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8028A62C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8028A630: jr          $ra
    // 0x8028A634: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8028A634: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802872F0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802872F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802872F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802872F8: jal         0x802858D8
    // 0x802872FC: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802872FC: nop

    after_0:
    // 0x80287300: beq         $v0, $zero, L_80287310
    if (ctx->r2 == 0) {
        // 0x80287304: nop
    
            goto L_80287310;
    }
    // 0x80287304: nop

    // 0x80287308: b           L_80287384
    // 0x8028730C: nop

        goto L_80287384;
    // 0x8028730C: nop

L_80287310:
    // 0x80287310: jal         0x80085D54
    // 0x80287314: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287314: nop

    after_1:
    // 0x80287318: beq         $v0, $zero, L_80287328
    if (ctx->r2 == 0) {
        // 0x8028731C: nop
    
            goto L_80287328;
    }
    // 0x8028731C: nop

    // 0x80287320: b           L_80287384
    // 0x80287324: nop

        goto L_80287384;
    // 0x80287324: nop

L_80287328:
    // 0x80287328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028732C: jal         0x8001B44C
    // 0x80287330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80287330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80287334: beq         $v0, $zero, L_8028737C
    if (ctx->r2 == 0) {
        // 0x80287338: nop
    
            goto L_8028737C;
    }
    // 0x80287338: nop

    // 0x8028733C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287340: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287344: nop

    // 0x80287348: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028734C: bne         $t7, $zero, L_8028736C
    if (ctx->r15 != 0) {
        // 0x80287350: nop
    
            goto L_8028736C;
    }
    // 0x80287350: nop

    // 0x80287354: jal         0x80282AC4
    // 0x80287358: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287358: nop

    after_3:
    // 0x8028735C: b           L_80287384
    // 0x80287360: nop

        goto L_80287384;
    // 0x80287360: nop

    // 0x80287364: b           L_8028737C
    // 0x80287368: nop

        goto L_8028737C;
    // 0x80287368: nop

L_8028736C:
    // 0x8028736C: jal         0x8028236C
    // 0x80287370: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287370: nop

    after_4:
    // 0x80287374: b           L_80287384
    // 0x80287378: nop

        goto L_80287384;
    // 0x80287378: nop

L_8028737C:
    // 0x8028737C: b           L_80287384
    // 0x80287380: nop

        goto L_80287384;
    // 0x80287380: nop

L_80287384:
    // 0x80287384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028738C: jr          $ra
    // 0x80287390: nop

    return;
    // 0x80287390: nop

;}
RECOMP_FUNC void func_8028A208_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028A20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A214: jal         0x8001B62C
    // 0x8028A218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8028A218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8028A21C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A220: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028A224: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028A228: nop

    // 0x8028A22C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8028A230: nop

    // 0x8028A234: bc1f        L_8028A280
    if (!c1cs) {
        // 0x8028A238: nop
    
            goto L_8028A280;
    }
    // 0x8028A238: nop

    // 0x8028A23C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A240: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A244: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028A248: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A24C: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A250: jal         0x80015538
    // 0x8028A254: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8028A254: nop

    after_1:
    // 0x8028A258: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A25C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A260: nop

    // 0x8028A264: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A268: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028A26C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A270: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028A274: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028A278: b           L_8028A2B4
    // 0x8028A27C: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
        goto L_8028A2B4;
    // 0x8028A27C: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
L_8028A280:
    // 0x8028A280: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8028A284: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028A288: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028A28C: nop

    // 0x8028A290: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8028A294: nop

    // 0x8028A298: bc1f        L_8028A2B4
    if (!c1cs) {
        // 0x8028A29C: nop
    
            goto L_8028A2B4;
    }
    // 0x8028A29C: nop

    // 0x8028A2A0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028A2A4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028A2A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028A2AC: nop

    // 0x8028A2B0: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
L_8028A2B4:
    // 0x8028A2B4: b           L_8028A2BC
    // 0x8028A2B8: nop

        goto L_8028A2BC;
    // 0x8028A2B8: nop

L_8028A2BC:
    // 0x8028A2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028A2C4: jr          $ra
    // 0x8028A2C8: nop

    return;
    // 0x8028A2C8: nop

;}
RECOMP_FUNC void func_80289C2C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289C2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289C30: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80289C34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80289C38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80289C3C: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80289C40: nop

    // 0x80289C44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80289C48: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80289C4C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80289C50: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80289C54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80289C58: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80289C5C: nop

    // 0x80289C60: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80289C64: nop

    // 0x80289C68: bc1f        L_80289C84
    if (!c1cs) {
        // 0x80289C6C: nop
    
            goto L_80289C84;
    }
    // 0x80289C6C: nop

    // 0x80289C70: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80289C74: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80289C78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80289C7C: nop

    // 0x80289C80: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
L_80289C84:
    // 0x80289C84: jr          $ra
    // 0x80289C88: nop

    return;
    // 0x80289C88: nop

    // 0x80289C8C: jr          $ra
    // 0x80289C90: nop

    return;
    // 0x80289C90: nop

;}
RECOMP_FUNC void func_80289C04_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289C0C: jal         0x80281E50
    // 0x80289C10: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289C10: nop

    after_0:
    // 0x80289C14: b           L_80289C1C
    // 0x80289C18: nop

        goto L_80289C1C;
    // 0x80289C18: nop

L_80289C1C:
    // 0x80289C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289C24: jr          $ra
    // 0x80289C28: nop

    return;
    // 0x80289C28: nop

;}
RECOMP_FUNC void func_8028AA70_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028AA70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028AA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028AA78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028AA7C: lb          $t6, 0x7628($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7628);
    // 0x8028AA80: nop

    // 0x8028AA84: beq         $t6, $zero, L_8028AAA8
    if (ctx->r14 == 0) {
        // 0x8028AA88: nop
    
            goto L_8028AAA8;
    }
    // 0x8028AA88: nop

    // 0x8028AA8C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028AA90: lh          $t7, 0x7618($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7618);
    // 0x8028AA94: nop

    // 0x8028AA98: beq         $t7, $zero, L_8028AAA8
    if (ctx->r15 == 0) {
        // 0x8028AA9C: nop
    
            goto L_8028AAA8;
    }
    // 0x8028AA9C: nop

    // 0x8028AAA0: jal         0x8001E1C0
    // 0x8028AAA4: nop

    ResetActiveController(rdram, ctx);
        goto after_0;
    // 0x8028AAA4: nop

    after_0:
L_8028AAA8:
    // 0x8028AAA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028AAAC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028AAB0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8028AAB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028AAB8: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8028AABC: nop

    // 0x8028AAC0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8028AAC4: nop

    // 0x8028AAC8: bc1f        L_8028AB04
    if (!c1cs) {
        // 0x8028AACC: nop
    
            goto L_8028AB04;
    }
    // 0x8028AACC: nop

    // 0x8028AAD0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028AAD4: lw          $t9, -0x1CB8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1CB8);
    // 0x8028AAD8: nop

    // 0x8028AADC: slti        $at, $t9, 0x3E8
    ctx->r1 = SIGNED(ctx->r25) < 0X3E8 ? 1 : 0;
    // 0x8028AAE0: beq         $at, $zero, L_8028AAFC
    if (ctx->r1 == 0) {
        // 0x8028AAE4: nop
    
            goto L_8028AAFC;
    }
    // 0x8028AAE4: nop

    // 0x8028AAE8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028AAEC: lw          $t0, -0x1CB8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1CB8);
    // 0x8028AAF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AAF4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8028AAF8: sw          $t1, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = ctx->r9;
L_8028AAFC:
    // 0x8028AAFC: b           L_8028AB0C
    // 0x8028AB00: nop

        goto L_8028AB0C;
    // 0x8028AB00: nop

L_8028AB04:
    // 0x8028AB04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AB08: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
L_8028AB0C:
    // 0x8028AB0C: jal         0x8028130C
    // 0x8028AB10: nop

    func_8028130C_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x8028AB10: nop

    after_1:
    // 0x8028AB14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AB18: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8028AB1C: jal         0x800682E0
    // 0x8028AB20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_2;
    // 0x8028AB20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8028AB24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AB28: sw          $zero, -0x1DC8($at)
    MEM_W(-0X1DC8, ctx->r1) = 0;
    // 0x8028AB2C: jal         0x80085884
    // 0x8028AB30: nop

    func_80085884(rdram, ctx);
        goto after_3;
    // 0x8028AB30: nop

    after_3:
    // 0x8028AB34: jal         0x8028035C
    // 0x8028AB38: nop

    func_8028035C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x8028AB38: nop

    after_4:
    // 0x8028AB3C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8028AB40: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8028AB44: jal         0x80085B34
    // 0x8028AB48: nop

    func_80085B34(rdram, ctx);
        goto after_5;
    // 0x8028AB48: nop

    after_5:
    // 0x8028AB4C: jal         0x8028109C
    // 0x8028AB50: nop

    func_8028109C_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x8028AB50: nop

    after_6:
    // 0x8028AB54: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028AB58: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028AB5C: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8028AB60: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x8028AB64: nop

    // 0x8028AB68: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8028AB6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8028AB70: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8028AB74: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8028AB78: lw          $t9, -0x4E04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4E04);
    // 0x8028AB7C: nop

    // 0x8028AB80: jalr        $t9
    // 0x8028AB84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8028AB84: nop

    after_7:
    // 0x8028AB88: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028AB8C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028AB90: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x8028AB94: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8028AB98: nop

    // 0x8028AB9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8028ABA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8028ABA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8028ABA8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8028ABAC: lw          $t9, -0x4E00($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4E00);
    // 0x8028ABB0: nop

    // 0x8028ABB4: jalr        $t9
    // 0x8028ABB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8028ABB8: nop

    after_8:
    // 0x8028ABBC: jal         0x80281674
    // 0x8028ABC0: nop

    func_80281674_code_extra_0(rdram, ctx);
        goto after_9;
    // 0x8028ABC0: nop

    after_9:
    // 0x8028ABC4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028ABC8: lb          $t8, -0x1BF4($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1BF4);
    // 0x8028ABCC: nop

    // 0x8028ABD0: beq         $t8, $zero, L_8028AC00
    if (ctx->r24 == 0) {
        // 0x8028ABD4: nop
    
            goto L_8028AC00;
    }
    // 0x8028ABD4: nop

    // 0x8028ABD8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028ABDC: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x8028ABE0: nop

    // 0x8028ABE4: andi        $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 & 0X2000;
    // 0x8028ABE8: beq         $t1, $zero, L_8028AC00
    if (ctx->r9 == 0) {
        // 0x8028ABEC: nop
    
            goto L_8028AC00;
    }
    // 0x8028ABEC: nop

    // 0x8028ABF0: jal         0x80087694
    // 0x8028ABF4: nop

    func_80087694(rdram, ctx);
        goto after_10;
    // 0x8028ABF4: nop

    after_10:
    // 0x8028ABF8: b           L_8028AD40
    // 0x8028ABFC: nop

        goto L_8028AD40;
    // 0x8028ABFC: nop

L_8028AC00:
    // 0x8028AC00: jal         0x802804CC
    // 0x8028AC04: nop

    func_802804CC_code_extra_0(rdram, ctx);
        goto after_11;
    // 0x8028AC04: nop

    after_11:
    // 0x8028AC08: jal         0x802805C8
    // 0x8028AC0C: nop

    func_802805C8_code_extra_0(rdram, ctx);
        goto after_12;
    // 0x8028AC0C: nop

    after_12:
    // 0x8028AC10: jal         0x80280894
    // 0x8028AC14: nop

    func_80280894_code_extra_0(rdram, ctx);
        goto after_13;
    // 0x8028AC14: nop

    after_13:
    // 0x8028AC18: jal         0x80280A9C
    // 0x8028AC1C: nop

    func_80280A9C_code_extra_0(rdram, ctx);
        goto after_14;
    // 0x8028AC1C: nop

    after_14:
    // 0x8028AC20: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x8028AC24: addiu       $t2, $t2, -0x4F80
    ctx->r10 = ADD32(ctx->r10, -0X4F80);
    // 0x8028AC28: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028AC2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028AC30: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028AC34: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x8028AC38: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x8028AC3C: nop

    // 0x8028AC40: bne         $t4, $at, L_8028AC58
    if (ctx->r12 != ctx->r1) {
        // 0x8028AC44: nop
    
            goto L_8028AC58;
    }
    // 0x8028AC44: nop

    // 0x8028AC48: lui         $t5, 0x8029
    ctx->r13 = S32(0X8029 << 16);
    // 0x8028AC4C: addiu       $t5, $t5, -0x4F20
    ctx->r13 = ADD32(ctx->r13, -0X4F20);
    // 0x8028AC50: b           L_8028AD00
    // 0x8028AC54: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
        goto L_8028AD00;
    // 0x8028AC54: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_8028AC58:
    // 0x8028AC58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028AC5C: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8028AC60: nop

    // 0x8028AC64: beq         $t6, $zero, L_8028AD00
    if (ctx->r14 == 0) {
        // 0x8028AC68: nop
    
            goto L_8028AD00;
    }
    // 0x8028AC68: nop

    // 0x8028AC6C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8028AC70: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x8028AC74: nop

    // 0x8028AC78: andi        $t9, $t7, 0x1
    ctx->r25 = ctx->r15 & 0X1;
    // 0x8028AC7C: bne         $t9, $zero, L_8028AC94
    if (ctx->r25 != 0) {
        // 0x8028AC80: nop
    
            goto L_8028AC94;
    }
    // 0x8028AC80: nop

    // 0x8028AC84: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8028AC88: addiu       $t8, $t8, -0x4F20
    ctx->r24 = ADD32(ctx->r24, -0X4F20);
    // 0x8028AC8C: b           L_8028AD00
    // 0x8028AC90: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
        goto L_8028AD00;
    // 0x8028AC90: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_8028AC94:
    // 0x8028AC94: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028AC98: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028AC9C: nop

    // 0x8028ACA0: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8028ACA4: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8028ACA8: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8028ACAC: jal         0x800843CC
    // 0x8028ACB0: nop

    func_800843CC(rdram, ctx);
        goto after_15;
    // 0x8028ACB0: nop

    after_15:
    // 0x8028ACB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028ACB8: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x8028ACBC: nop

    // 0x8028ACC0: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8028ACC4: sb          $t2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r10;
    // 0x8028ACC8: lbu         $t3, 0x1B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1B);
    // 0x8028ACCC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028ACD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8028ACD4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8028ACD8: lw          $t5, 0x7740($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7740);
    // 0x8028ACDC: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x8028ACE0: beq         $t5, $at, L_8028AD00
    if (ctx->r13 == ctx->r1) {
        // 0x8028ACE4: nop
    
            goto L_8028AD00;
    }
    // 0x8028ACE4: nop

    // 0x8028ACE8: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x8028ACEC: beq         $t5, $at, L_8028AD00
    if (ctx->r13 == ctx->r1) {
        // 0x8028ACF0: nop
    
            goto L_8028AD00;
    }
    // 0x8028ACF0: nop

    // 0x8028ACF4: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x8028ACF8: addiu       $t6, $t6, -0x4F20
    ctx->r14 = ADD32(ctx->r14, -0X4F20);
    // 0x8028ACFC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_8028AD00:
    // 0x8028AD00: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028AD04: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028AD08: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x8028AD0C: lh          $t9, 0xA4($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA4);
    // 0x8028AD10: nop

    // 0x8028AD14: bne         $t9, $at, L_8028AD28
    if (ctx->r25 != ctx->r1) {
        // 0x8028AD18: nop
    
            goto L_8028AD28;
    }
    // 0x8028AD18: nop

    // 0x8028AD1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028AD20: b           L_8028AD2C
    // 0x8028AD24: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_8028AD2C;
    // 0x8028AD24: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8028AD28:
    // 0x8028AD28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8028AD2C:
    // 0x8028AD2C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8028AD30: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8028AD34: lui         $a2, 0x42EE
    ctx->r6 = S32(0X42EE << 16);
    // 0x8028AD38: jal         0x80084BD8
    // 0x8028AD3C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80084BD8(rdram, ctx);
        goto after_16;
    // 0x8028AD3C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_16:
L_8028AD40:
    // 0x8028AD40: jal         0x80280284
    // 0x8028AD44: nop

    func_80280284_code_extra_0(rdram, ctx);
        goto after_17;
    // 0x8028AD44: nop

    after_17:
    // 0x8028AD48: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028AD4C: lb          $t0, -0x1DD8($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1DD8);
    // 0x8028AD50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AD54: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8028AD58: sb          $t1, -0x1DD8($at)
    MEM_B(-0X1DD8, ctx->r1) = ctx->r9;
    // 0x8028AD5C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028AD60: lb          $t2, -0x1CD8($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1CD8);
    // 0x8028AD64: nop

    // 0x8028AD68: bne         $t2, $zero, L_8028AD80
    if (ctx->r10 != 0) {
        // 0x8028AD6C: nop
    
            goto L_8028AD80;
    }
    // 0x8028AD6C: nop

    // 0x8028AD70: jal         0x8001CD20
    // 0x8028AD74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_18;
    // 0x8028AD74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x8028AD78: b           L_8028AD90
    // 0x8028AD7C: nop

        goto L_8028AD90;
    // 0x8028AD7C: nop

L_8028AD80:
    // 0x8028AD80: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x8028AD84: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8028AD88: jal         0x8001CD50
    // 0x8028AD8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD50(rdram, ctx);
        goto after_19;
    // 0x8028AD8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
L_8028AD90:
    // 0x8028AD90: jal         0x8001AD6C
    // 0x8028AD94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_20;
    // 0x8028AD94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x8028AD98: b           L_8028ADA0
    // 0x8028AD9C: nop

        goto L_8028ADA0;
    // 0x8028AD9C: nop

L_8028ADA0:
    // 0x8028ADA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028ADA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028ADA8: jr          $ra
    // 0x8028ADAC: nop

    return;
    // 0x8028ADAC: nop

;}
RECOMP_FUNC void func_80287FD0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287FD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287FDC: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80287FE0: nop

    // 0x80287FE4: slti        $at, $t6, 0xB4
    ctx->r1 = SIGNED(ctx->r14) < 0XB4 ? 1 : 0;
    // 0x80287FE8: bne         $at, $zero, L_80288004
    if (ctx->r1 != 0) {
        // 0x80287FEC: nop
    
            goto L_80288004;
    }
    // 0x80287FEC: nop

    // 0x80287FF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80287FF4: jal         0x80069A54
    // 0x80287FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x80287FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80287FFC: b           L_80288018
    // 0x80288000: nop

        goto L_80288018;
    // 0x80288000: nop

L_80288004:
    // 0x80288004: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288008: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x8028800C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288010: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80288014: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
L_80288018:
    // 0x80288018: b           L_80288020
    // 0x8028801C: nop

        goto L_80288020;
    // 0x8028801C: nop

L_80288020:
    // 0x80288020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288028: jr          $ra
    // 0x8028802C: nop

    return;
    // 0x8028802C: nop

;}
RECOMP_FUNC void func_8028A84C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A84C: jr          $ra
    // 0x8028A850: nop

    return;
    // 0x8028A850: nop

    // 0x8028A854: jr          $ra
    // 0x8028A858: nop

    return;
    // 0x8028A858: nop

;}
RECOMP_FUNC void func_8028435C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028435C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284364: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284368: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028436C: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x80284370: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284374: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284378: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x8028437C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284388: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8028438C: jal         0x8001C0EC
    // 0x80284390: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80284390: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80284394: jal         0x80280000
    // 0x80284398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80284398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8028439C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802843A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802843A4: addiu       $a2, $zero, 0x76
    ctx->r6 = ADD32(0, 0X76);
    // 0x802843A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802843AC: jal         0x800178D4
    // 0x802843B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802843B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802843B4: b           L_802843BC
    // 0x802843B8: nop

        goto L_802843BC;
    // 0x802843B8: nop

L_802843BC:
    // 0x802843BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802843C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802843C4: jr          $ra
    // 0x802843C8: nop

    return;
    // 0x802843C8: nop

;}
RECOMP_FUNC void func_8028AF38_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028AF38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028AF3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028AF40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028AF44: lb          $t6, 0x7638($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7638);
    // 0x8028AF48: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8028AF4C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028AF50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8028AF54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028AF58: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x8028AF5C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8028AF60: lw          $t8, 0x5800($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5800);
    // 0x8028AF64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028AF6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8028AF70: jal         0x8001BD44
    // 0x8028AF74: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x8028AF74: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    after_0:
    // 0x8028AF78: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8028AF7C: addiu       $t1, $t1, 0x5808
    ctx->r9 = ADD32(ctx->r9, 0X5808);
    // 0x8028AF80: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028AF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028AF8C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8028AF90: jal         0x8001C0EC
    // 0x8028AF94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028AF94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028AF98: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028AF9C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028AFA0: nop

    // 0x8028AFA4: sh          $zero, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = 0;
    // 0x8028AFA8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028AFAC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028AFB0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8028AFB4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8028AFB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AFBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028AFC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028AFC4: jal         0x80019448
    // 0x8028AFC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8028AFC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8028AFCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AFD0: sw          $zero, -0x1DA8($at)
    MEM_W(-0X1DA8, ctx->r1) = 0;
    // 0x8028AFD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028AFD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AFDC: swc1        $f4, -0x1DA0($at)
    MEM_W(-0X1DA0, ctx->r1) = ctx->f4.u32l;
    // 0x8028AFE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AFE4: sb          $zero, -0x1D98($at)
    MEM_B(-0X1D98, ctx->r1) = 0;
    // 0x8028AFE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028AFEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AFF0: swc1        $f6, -0x1D90($at)
    MEM_W(-0X1D90, ctx->r1) = ctx->f6.u32l;
    // 0x8028AFF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028AFF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028AFFC: swc1        $f8, -0x1D88($at)
    MEM_W(-0X1D88, ctx->r1) = ctx->f8.u32l;
    // 0x8028B000: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B004: sb          $zero, -0x1D83($at)
    MEM_B(-0X1D83, ctx->r1) = 0;
    // 0x8028B008: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B00C: sb          $zero, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = 0;
    // 0x8028B010: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B014: sh          $zero, -0x1D68($at)
    MEM_H(-0X1D68, ctx->r1) = 0;
    // 0x8028B018: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B01C: sb          $zero, -0x1D40($at)
    MEM_B(-0X1D40, ctx->r1) = 0;
    // 0x8028B020: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B024: sb          $zero, -0x1D38($at)
    MEM_B(-0X1D38, ctx->r1) = 0;
    // 0x8028B028: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8028B02C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B030: sh          $t5, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r13;
    // 0x8028B034: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8028B038: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B03C: sh          $t6, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r14;
    // 0x8028B040: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B044: sb          $zero, -0x1CD8($at)
    MEM_B(-0X1CD8, ctx->r1) = 0;
    // 0x8028B048: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B04C: sb          $zero, -0x1CC8($at)
    MEM_B(-0X1CC8, ctx->r1) = 0;
    // 0x8028B050: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028B054: sw          $zero, -0x1CC0($at)
    MEM_W(-0X1CC0, ctx->r1) = 0;
    // 0x8028B058: jal         0x8028236C
    // 0x8028B05C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x8028B05C: nop

    after_3:
    // 0x8028B060: b           L_8028B068
    // 0x8028B064: nop

        goto L_8028B068;
    // 0x8028B064: nop

L_8028B068:
    // 0x8028B068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028B06C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028B070: jr          $ra
    // 0x8028B074: nop

    return;
    // 0x8028B074: nop

    // 0x8028B078: nop

    // 0x8028B07C: nop

;}
RECOMP_FUNC void func_80282034_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282034: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80282038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028203C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282040: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282044: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80282048: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8028204C: nop

    // 0x80282050: bne         $t7, $at, L_80282068
    if (ctx->r15 != ctx->r1) {
        // 0x80282054: nop
    
            goto L_80282068;
    }
    // 0x80282054: nop

    // 0x80282058: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8028205C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282060: b           L_80282078
    // 0x80282064: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_80282078;
    // 0x80282064: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_80282068:
    // 0x80282068: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028206C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282070: nop

    // 0x80282074: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_80282078:
    // 0x80282078: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028207C: jal         0x8001B62C
    // 0x80282080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282084: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80282088: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028208C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282090: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80282094: nop

    // 0x80282098: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8028209C: nop

    // 0x802820A0: bc1f        L_80282238
    if (!c1cs) {
        // 0x802820A4: nop
    
            goto L_80282238;
    }
    // 0x802820A4: nop

    // 0x802820A8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802820AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802820B0: nop

    // 0x802820B4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802820B8: nop

    // 0x802820BC: bc1f        L_80282194
    if (!c1cs) {
        // 0x802820C0: nop
    
            goto L_80282194;
    }
    // 0x802820C0: nop

    // 0x802820C4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802820C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802820CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802820D0: swc1        $f4, -0x1CF8($at)
    MEM_W(-0X1CF8, ctx->r1) = ctx->f4.u32l;
    // 0x802820D4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802820D8: jal         0x80280C64
    // 0x802820DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80280C64_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802820DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x802820E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802820E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802820E8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802820EC: nop

    // 0x802820F0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x802820F4: nop

    // 0x802820F8: bc1t        L_80282194
    if (c1cs) {
        // 0x802820FC: nop
    
            goto L_80282194;
    }
    // 0x802820FC: nop

    // 0x80282100: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80282104: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80282108: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x8028210C: nop

    // 0x80282110: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80282114: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80282118: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8028211C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80282120: lbu         $t1, 0x4D91($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4D91);
    // 0x80282124: nop

    // 0x80282128: beq         $t1, $zero, L_80282194
    if (ctx->r9 == 0) {
        // 0x8028212C: nop
    
            goto L_80282194;
    }
    // 0x8028212C: nop

    // 0x80282130: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282134: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282138: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8028213C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80282140: jal         0x80015538
    // 0x80282144: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80282144: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_2:
    // 0x80282148: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8028214C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282150: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80282154: nop

    // 0x80282158: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8028215C: nop

    // 0x80282160: bc1t        L_80282188
    if (c1cs) {
        // 0x80282164: nop
    
            goto L_80282188;
    }
    // 0x80282164: nop

    // 0x80282168: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8028216C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282170: nop

    // 0x80282174: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80282178: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x8028217C: nop

    // 0x80282180: bc1f        L_80282194
    if (!c1cs) {
        // 0x80282184: nop
    
            goto L_80282194;
    }
    // 0x80282184: nop

L_80282188:
    // 0x80282188: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8028218C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282190: swc1        $f6, -0x1CF8($at)
    MEM_W(-0X1CF8, ctx->r1) = ctx->f6.u32l;
L_80282194:
    // 0x80282194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282198: lwc1        $f8, -0x1CF8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x8028219C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802821A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802821A4: nop

    // 0x802821A8: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x802821AC: nop

    // 0x802821B0: bc1t        L_80282238
    if (c1cs) {
        // 0x802821B4: nop
    
            goto L_80282238;
    }
    // 0x802821B4: nop

    // 0x802821B8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802821BC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802821C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802821C4: lwc1        $f14, -0x1CF8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x802821C8: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x802821CC: jal         0x80084120
    // 0x802821D0: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    func_80084120(rdram, ctx);
        goto after_3;
    // 0x802821D0: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    after_3:
    // 0x802821D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802821D8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x802821DC: nop

    // 0x802821E0: bne         $t4, $zero, L_80282200
    if (ctx->r12 != 0) {
        // 0x802821E4: nop
    
            goto L_80282200;
    }
    // 0x802821E4: nop

    // 0x802821E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802821EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802821F0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802821F4: lwc1        $f16, -0x1CF8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x802821F8: b           L_80282238
    // 0x802821FC: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
        goto L_80282238;
    // 0x802821FC: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_80282200:
    // 0x80282200: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80282204: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282208: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8028220C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80282210: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282214: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80282218: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8028221C: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80282220: jal         0x80015538
    // 0x80282224: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80282224: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x80282228: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028222C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282230: nop

    // 0x80282234: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_80282238:
    // 0x80282238: b           L_80282240
    // 0x8028223C: nop

        goto L_80282240;
    // 0x8028223C: nop

L_80282240:
    // 0x80282240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80282248: jr          $ra
    // 0x8028224C: nop

    return;
    // 0x8028224C: nop

;}
RECOMP_FUNC void func_802876E8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802876E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802876EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802876F0: jal         0x802858D8
    // 0x802876F4: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802876F4: nop

    after_0:
    // 0x802876F8: beq         $v0, $zero, L_80287708
    if (ctx->r2 == 0) {
        // 0x802876FC: nop
    
            goto L_80287708;
    }
    // 0x802876FC: nop

    // 0x80287700: b           L_802877D8
    // 0x80287704: nop

        goto L_802877D8;
    // 0x80287704: nop

L_80287708:
    // 0x80287708: jal         0x80085D54
    // 0x8028770C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028770C: nop

    after_1:
    // 0x80287710: beq         $v0, $zero, L_80287720
    if (ctx->r2 == 0) {
        // 0x80287714: nop
    
            goto L_80287720;
    }
    // 0x80287714: nop

    // 0x80287718: b           L_802877D8
    // 0x8028771C: nop

        goto L_802877D8;
    // 0x8028771C: nop

L_80287720:
    // 0x80287720: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287724: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287728: nop

    // 0x8028772C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287730: bne         $t7, $zero, L_8028775C
    if (ctx->r15 != 0) {
        // 0x80287734: nop
    
            goto L_8028775C;
    }
    // 0x80287734: nop

    // 0x80287738: jal         0x80282AC4
    // 0x8028773C: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x8028773C: nop

    after_2:
    // 0x80287740: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287744: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80287748: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028774C: nop

    // 0x80287750: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80287754: b           L_802877D8
    // 0x80287758: nop

        goto L_802877D8;
    // 0x80287758: nop

L_8028775C:
    // 0x8028775C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80287760: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x80287764: nop

    // 0x80287768: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x8028776C: beq         $t0, $zero, L_802877AC
    if (ctx->r8 == 0) {
        // 0x80287770: nop
    
            goto L_802877AC;
    }
    // 0x80287770: nop

    // 0x80287774: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80287778: addiu       $t1, $t1, 0x51D8
    ctx->r9 = ADD32(ctx->r9, 0X51D8);
    // 0x8028777C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80287780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80287784: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80287788: nop

    // 0x8028778C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80287790: nop

    // 0x80287794: bc1f        L_802877AC
    if (!c1cs) {
        // 0x80287798: nop
    
            goto L_802877AC;
    }
    // 0x80287798: nop

    // 0x8028779C: jal         0x802828C0
    // 0x802877A0: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802877A0: nop

    after_3:
    // 0x802877A4: b           L_802877D8
    // 0x802877A8: nop

        goto L_802877D8;
    // 0x802877A8: nop

L_802877AC:
    // 0x802877AC: jal         0x8028150C
    // 0x802877B0: nop

    func_8028150C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802877B0: nop

    after_4:
    // 0x802877B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802877B8: bne         $v0, $at, L_802877D0
    if (ctx->r2 != ctx->r1) {
        // 0x802877BC: nop
    
            goto L_802877D0;
    }
    // 0x802877BC: nop

    // 0x802877C0: jal         0x802837B0
    // 0x802877C4: nop

    func_802837B0_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x802877C4: nop

    after_5:
    // 0x802877C8: b           L_802877D8
    // 0x802877CC: nop

        goto L_802877D8;
    // 0x802877CC: nop

L_802877D0:
    // 0x802877D0: b           L_802877D8
    // 0x802877D4: nop

        goto L_802877D8;
    // 0x802877D4: nop

L_802877D8:
    // 0x802877D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802877DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802877E0: jr          $ra
    // 0x802877E4: nop

    return;
    // 0x802877E4: nop

;}
RECOMP_FUNC void func_8028A984_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028A988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028A98C: jal         0x80281E50
    // 0x8028A990: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028A990: nop

    after_0:
    // 0x8028A994: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A998: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A99C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028A9A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A9A4: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A9A8: jal         0x80015538
    // 0x8028A9AC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8028A9AC: nop

    after_1:
    // 0x8028A9B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A9B4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A9B8: nop

    // 0x8028A9BC: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A9C0: b           L_8028A9C8
    // 0x8028A9C4: nop

        goto L_8028A9C8;
    // 0x8028A9C4: nop

L_8028A9C8:
    // 0x8028A9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028A9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028A9D0: jr          $ra
    // 0x8028A9D4: nop

    return;
    // 0x8028A9D4: nop

;}
RECOMP_FUNC void func_8028368C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028368C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283694: jal         0x8001A928
    // 0x80283698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8028369C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802836A0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802836A4: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x802836A8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802836AC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802836B0: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802836B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802836B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802836BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802836C0: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x802836C4: jal         0x8001C0EC
    // 0x802836C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802836C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802836CC: jal         0x80280000
    // 0x802836D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802836D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802836D4: b           L_802836DC
    // 0x802836D8: nop

        goto L_802836DC;
    // 0x802836D8: nop

L_802836DC:
    // 0x802836DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802836E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802836E4: jr          $ra
    // 0x802836E8: nop

    return;
    // 0x802836E8: nop

;}
RECOMP_FUNC void func_80287CE0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287CE8: jal         0x80285D4C
    // 0x80287CEC: nop

    func_80285D4C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287CEC: nop

    after_0:
    // 0x80287CF0: beq         $v0, $zero, L_80287D00
    if (ctx->r2 == 0) {
        // 0x80287CF4: nop
    
            goto L_80287D00;
    }
    // 0x80287CF4: nop

    // 0x80287CF8: b           L_80287D7C
    // 0x80287CFC: nop

        goto L_80287D7C;
    // 0x80287CFC: nop

L_80287D00:
    // 0x80287D00: jal         0x80085D54
    // 0x80287D04: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80287D04: nop

    after_1:
    // 0x80287D08: beq         $v0, $zero, L_80287D18
    if (ctx->r2 == 0) {
        // 0x80287D0C: nop
    
            goto L_80287D18;
    }
    // 0x80287D0C: nop

    // 0x80287D10: b           L_80287D7C
    // 0x80287D14: nop

        goto L_80287D7C;
    // 0x80287D14: nop

L_80287D18:
    // 0x80287D18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287D1C: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287D20: nop

    // 0x80287D24: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287D28: beq         $t7, $zero, L_80287D74
    if (ctx->r15 == 0) {
        // 0x80287D2C: nop
    
            goto L_80287D74;
    }
    // 0x80287D2C: nop

    // 0x80287D30: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287D34: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80287D38: nop

    // 0x80287D3C: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80287D40: nop

    // 0x80287D44: bne         $t9, $zero, L_80287D64
    if (ctx->r25 != 0) {
        // 0x80287D48: nop
    
            goto L_80287D64;
    }
    // 0x80287D48: nop

    // 0x80287D4C: jal         0x80284084
    // 0x80287D50: nop

    func_80284084_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80287D50: nop

    after_2:
    // 0x80287D54: b           L_80287D7C
    // 0x80287D58: nop

        goto L_80287D7C;
    // 0x80287D58: nop

    // 0x80287D5C: b           L_80287D74
    // 0x80287D60: nop

        goto L_80287D74;
    // 0x80287D60: nop

L_80287D64:
    // 0x80287D64: jal         0x80283CE0
    // 0x80287D68: nop

    func_80283CE0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80287D68: nop

    after_3:
    // 0x80287D6C: b           L_80287D7C
    // 0x80287D70: nop

        goto L_80287D7C;
    // 0x80287D70: nop

L_80287D74:
    // 0x80287D74: b           L_80287D7C
    // 0x80287D78: nop

        goto L_80287D7C;
    // 0x80287D78: nop

L_80287D7C:
    // 0x80287D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287D84: jr          $ra
    // 0x80287D88: nop

    return;
    // 0x80287D88: nop

;}
