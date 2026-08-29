#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80282E1C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282E20: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282E28: nop

    // 0x80282E2C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80282E30: jr          $ra
    // 0x80282E34: nop

    return;
    // 0x80282E34: nop

    // 0x80282E38: jr          $ra
    // 0x80282E3C: nop

    return;
    // 0x80282E3C: nop

;}
RECOMP_FUNC void func_80282AFC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282B04: jal         0x80280878
    // 0x80282B08: nop

    func_80280878_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282B08: nop

    after_0:
    // 0x80282B0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282B10: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282B14: nop

    // 0x80282B18: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80282B1C: nop

    // 0x80282B20: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80282B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80282B28: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x80282B2C: jal         0x8028066C
    // 0x80282B30: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_1;
    // 0x80282B30: nop

    after_1:
    // 0x80282B34: b           L_80282B3C
    // 0x80282B38: nop

        goto L_80282B3C;
    // 0x80282B38: nop

L_80282B3C:
    // 0x80282B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282B44: jr          $ra
    // 0x80282B48: nop

    return;
    // 0x80282B48: nop

;}
RECOMP_FUNC void func_802801DC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802801DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802801E0: lw          $t6, -0x1EE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EE0);
    // 0x802801E4: nop

    // 0x802801E8: beq         $t6, $zero, L_80280250
    if (ctx->r14 == 0) {
        // 0x802801EC: nop
    
            goto L_80280250;
    }
    // 0x802801EC: nop

    // 0x802801F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802801F4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802801F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801FC: lwc1        $f6, -0x1ED0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1ED0);
    // 0x80280200: lwc1        $f4, 0x24($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80280204: nop

    // 0x80280208: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028020C: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x80280210: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280214: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280218: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028021C: lwc1        $f16, -0x1EC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EC8);
    // 0x80280220: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80280224: nop

    // 0x80280228: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028022C: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
    // 0x80280230: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280234: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028023C: lwc1        $f6, -0x1E4C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E4C);
    // 0x80280240: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80280244: nop

    // 0x80280248: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028024C: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
L_80280250:
    // 0x80280250: jr          $ra
    // 0x80280254: nop

    return;
    // 0x80280254: nop

    // 0x80280258: jr          $ra
    // 0x8028025C: nop

    return;
    // 0x8028025C: nop

;}
RECOMP_FUNC void func_80280878_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280878: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8028087C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280880: lb          $t6, 0x7548($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7548);
    // 0x80280884: nop

    // 0x80280888: beq         $t6, $zero, L_802808A8
    if (ctx->r14 == 0) {
        // 0x8028088C: nop
    
            goto L_802808A8;
    }
    // 0x8028088C: nop

    // 0x80280890: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280894: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280898: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028089C: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802808A0: nop

    // 0x802808A4: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
L_802808A8:
    // 0x802808A8: b           L_802808B0
    // 0x802808AC: nop

        goto L_802808B0;
    // 0x802808AC: nop

L_802808B0:
    // 0x802808B0: jr          $ra
    // 0x802808B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802808B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802800A8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802800A8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802800AC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x802800B0: nop

    // 0x802800B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802800B8: bne         $t7, $zero, L_802800DC
    if (ctx->r15 != 0) {
        // 0x802800BC: nop
    
            goto L_802800DC;
    }
    // 0x802800BC: nop

    // 0x802800C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802800C4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802800C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802800CC: nop

    // 0x802800D0: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x802800D4: jr          $ra
    // 0x802800D8: nop

    return;
    // 0x802800D8: nop

L_802800DC:
    // 0x802800DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802800E0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802800E4: addiu       $at, $zero, 0x266
    ctx->r1 = ADD32(0, 0X266);
    // 0x802800E8: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x802800EC: nop

    // 0x802800F0: bne         $t0, $at, L_80280124
    if (ctx->r8 != ctx->r1) {
        // 0x802800F4: nop
    
            goto L_80280124;
    }
    // 0x802800F4: nop

    // 0x802800F8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802800FC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280100: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280104: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80280108: lwc1        $f11, 0x3770($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3770);
    // 0x8028010C: lwc1        $f10, 0x3774($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3774);
    // 0x80280110: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280114: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80280118: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028011C: b           L_8028018C
    // 0x80280120: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
        goto L_8028018C;
    // 0x80280120: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
L_80280124:
    // 0x80280124: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280128: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028012C: addiu       $at, $zero, 0x268
    ctx->r1 = ADD32(0, 0X268);
    // 0x80280130: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80280134: nop

    // 0x80280138: bne         $t3, $at, L_8028016C
    if (ctx->r11 != ctx->r1) {
        // 0x8028013C: nop
    
            goto L_8028016C;
    }
    // 0x8028013C: nop

    // 0x80280140: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280144: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280148: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x8028014C: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80280150: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80280154: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280158: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8028015C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280160: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280164: b           L_8028018C
    // 0x80280168: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
        goto L_8028018C;
    // 0x80280168: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
L_8028016C:
    // 0x8028016C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280170: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280174: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80280178: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028017C: lwc1        $f18, 0x28($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80280180: nop

    // 0x80280184: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280188: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
L_8028018C:
    // 0x8028018C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280190: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280194: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80280198: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028019C: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x802801A0: nop

    // 0x802801A4: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x802801A8: nop

    // 0x802801AC: bc1f        L_802801CC
    if (!c1cs) {
        // 0x802801B0: nop
    
            goto L_802801CC;
    }
    // 0x802801B0: nop

    // 0x802801B4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x802801B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802801BC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802801C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802801C4: nop

    // 0x802801C8: swc1        $f16, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f16.u32l;
L_802801CC:
    // 0x802801CC: jr          $ra
    // 0x802801D0: nop

    return;
    // 0x802801D0: nop

    // 0x802801D4: jr          $ra
    // 0x802801D8: nop

    return;
    // 0x802801D8: nop

;}
RECOMP_FUNC void func_80281EB8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281EC0: jal         0x80281860
    // 0x80281EC4: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281EC4: nop

    after_0:
    // 0x80281EC8: beq         $v0, $zero, L_80281ED8
    if (ctx->r2 == 0) {
        // 0x80281ECC: nop
    
            goto L_80281ED8;
    }
    // 0x80281ECC: nop

    // 0x80281ED0: b           L_80281F38
    // 0x80281ED4: nop

        goto L_80281F38;
    // 0x80281ED4: nop

L_80281ED8:
    // 0x80281ED8: jal         0x80085D54
    // 0x80281EDC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281EDC: nop

    after_1:
    // 0x80281EE0: beq         $v0, $zero, L_80281EF0
    if (ctx->r2 == 0) {
        // 0x80281EE4: nop
    
            goto L_80281EF0;
    }
    // 0x80281EE4: nop

    // 0x80281EE8: b           L_80281F38
    // 0x80281EEC: nop

        goto L_80281F38;
    // 0x80281EEC: nop

L_80281EF0:
    // 0x80281EF0: jal         0x80281AE8
    // 0x80281EF4: nop

    func_80281AE8_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281EF4: nop

    after_2:
    // 0x80281EF8: beq         $v0, $zero, L_80281F08
    if (ctx->r2 == 0) {
        // 0x80281EFC: nop
    
            goto L_80281F08;
    }
    // 0x80281EFC: nop

    // 0x80281F00: b           L_80281F38
    // 0x80281F04: nop

        goto L_80281F38;
    // 0x80281F04: nop

L_80281F08:
    // 0x80281F08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281F0C: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80281F10: nop

    // 0x80281F14: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80281F18: beq         $t7, $zero, L_80281F30
    if (ctx->r15 == 0) {
        // 0x80281F1C: nop
    
            goto L_80281F30;
    }
    // 0x80281F1C: nop

    // 0x80281F20: jal         0x80280FC8
    // 0x80281F24: nop

    func_80280FC8_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80281F24: nop

    after_3:
    // 0x80281F28: b           L_80281F38
    // 0x80281F2C: nop

        goto L_80281F38;
    // 0x80281F2C: nop

L_80281F30:
    // 0x80281F30: b           L_80281F38
    // 0x80281F34: nop

        goto L_80281F38;
    // 0x80281F34: nop

L_80281F38:
    // 0x80281F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281F40: jr          $ra
    // 0x80281F44: nop

    return;
    // 0x80281F44: nop

;}
RECOMP_FUNC void func_80282A64_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282A6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282A70: jal         0x8001B62C
    // 0x80282A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282A78: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282A7C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80282A80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282A84: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282A88: nop

    // 0x80282A8C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80282A90: nop

    // 0x80282A94: bc1f        L_80282AB4
    if (!c1cs) {
        // 0x80282A98: nop
    
            goto L_80282AB4;
    }
    // 0x80282A98: nop

    // 0x80282A9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282AA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80282AA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282AAC: jal         0x800178D4
    // 0x80282AB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282AB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80282AB4:
    // 0x80282AB4: jal         0x8028066C
    // 0x80282AB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80282AB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80282ABC: b           L_80282AC4
    // 0x80282AC0: nop

        goto L_80282AC4;
    // 0x80282AC0: nop

L_80282AC4:
    // 0x80282AC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282ACC: jr          $ra
    // 0x80282AD0: nop

    return;
    // 0x80282AD0: nop

;}
RECOMP_FUNC void func_80282BC8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282BD0: jal         0x8028066C
    // 0x80282BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80282BD8: b           L_80282BE0
    // 0x80282BDC: nop

        goto L_80282BE0;
    // 0x80282BDC: nop

L_80282BE0:
    // 0x80282BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282BE8: jr          $ra
    // 0x80282BEC: nop

    return;
    // 0x80282BEC: nop

;}
RECOMP_FUNC void func_802827F8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802827F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802827FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282800: jal         0x80281860
    // 0x80282804: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282804: nop

    after_0:
    // 0x80282808: beq         $v0, $zero, L_80282818
    if (ctx->r2 == 0) {
        // 0x8028280C: nop
    
            goto L_80282818;
    }
    // 0x8028280C: nop

    // 0x80282810: b           L_802828AC
    // 0x80282814: nop

        goto L_802828AC;
    // 0x80282814: nop

L_80282818:
    // 0x80282818: jal         0x80085D54
    // 0x8028281C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028281C: nop

    after_1:
    // 0x80282820: beq         $v0, $zero, L_80282830
    if (ctx->r2 == 0) {
        // 0x80282824: nop
    
            goto L_80282830;
    }
    // 0x80282824: nop

    // 0x80282828: b           L_802828AC
    // 0x8028282C: nop

        goto L_802828AC;
    // 0x8028282C: nop

L_80282830:
    // 0x80282830: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282834: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x80282838: nop

    // 0x8028283C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80282840: bne         $t7, $zero, L_80282858
    if (ctx->r15 != 0) {
        // 0x80282844: nop
    
            goto L_80282858;
    }
    // 0x80282844: nop

    // 0x80282848: jal         0x80280E6C
    // 0x8028284C: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x8028284C: nop

    after_2:
    // 0x80282850: b           L_802828AC
    // 0x80282854: nop

        goto L_802828AC;
    // 0x80282854: nop

L_80282858:
    // 0x80282858: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028285C: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80282860: nop

    // 0x80282864: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80282868: beq         $t9, $zero, L_80282880
    if (ctx->r25 == 0) {
        // 0x8028286C: nop
    
            goto L_80282880;
    }
    // 0x8028286C: nop

    // 0x80282870: jal         0x80280D2C
    // 0x80282874: nop

    func_80280D2C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80282874: nop

    after_3:
    // 0x80282878: b           L_802828AC
    // 0x8028287C: nop

        goto L_802828AC;
    // 0x8028287C: nop

L_80282880:
    // 0x80282880: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282884: lw          $t0, -0x1EE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1EE0);
    // 0x80282888: nop

    // 0x8028288C: bne         $t0, $zero, L_802828A4
    if (ctx->r8 != 0) {
        // 0x80282890: nop
    
            goto L_802828A4;
    }
    // 0x80282890: nop

    // 0x80282894: jal         0x80280A20
    // 0x80282898: nop

    func_80280A20_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x80282898: nop

    after_4:
    // 0x8028289C: b           L_802828AC
    // 0x802828A0: nop

        goto L_802828AC;
    // 0x802828A0: nop

L_802828A4:
    // 0x802828A4: b           L_802828AC
    // 0x802828A8: nop

        goto L_802828AC;
    // 0x802828A8: nop

L_802828AC:
    // 0x802828AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802828B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802828B4: jr          $ra
    // 0x802828B8: nop

    return;
    // 0x802828B8: nop

;}
RECOMP_FUNC void func_80283344_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283344: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80283348: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028334C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80283350: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80283354: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283358: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x8028335C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80283360: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283368: jal         0x8001BD44
    // 0x8028336C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x8028336C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80283370: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80283374: addiu       $t7, $t7, 0x6164
    ctx->r15 = ADD32(ctx->r15, 0X6164);
    // 0x80283378: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028337C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283388: jal         0x8001C0EC
    // 0x8028338C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028338C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283390: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283394: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283398: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8028339C: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x802833A0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802833A4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802833A8: addiu       $t0, $zero, 0x259
    ctx->r8 = ADD32(0, 0X259);
    // 0x802833AC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x802833B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802833B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802833B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802833BC: jal         0x80019448
    // 0x802833C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x802833C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802833C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802833C8: addiu       $a3, $a3, 0x6224
    ctx->r7 = ADD32(ctx->r7, 0X6224);
    // 0x802833CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802833D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802833D4: jal         0x8001ABF4
    // 0x802833D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x802833D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802833DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802833E0: addiu       $a3, $a3, 0x6224
    ctx->r7 = ADD32(ctx->r7, 0X6224);
    // 0x802833E4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x802833E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802833EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802833F0: jal         0x8001ABF4
    // 0x802833F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x802833F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802833F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802833FC: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x80283400: lw          $a3, 0x30($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X30);
    // 0x80283404: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028340C: jal         0x8001BD44
    // 0x80283410: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8001BD44(rdram, ctx);
        goto after_5;
    // 0x80283410: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80283414: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80283418: addiu       $t3, $t3, 0x6294
    ctx->r11 = ADD32(ctx->r11, 0X6294);
    // 0x8028341C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80283420: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028342C: jal         0x8001C0EC
    // 0x80283430: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80283430: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_6:
    // 0x80283434: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80283438: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x8028343C: addiu       $t4, $zero, 0x2AC
    ctx->r12 = ADD32(0, 0X2AC);
    // 0x80283440: sh          $t4, 0xE4($t5)
    MEM_H(0XE4, ctx->r13) = ctx->r12;
    // 0x80283444: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283448: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x8028344C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80283450: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283454: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283458: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028345C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283460: lwc1        $f4, 0x3788($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3788);
    // 0x80283464: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283468: swc1        $f4, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f4.u32l;
    // 0x8028346C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283470: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283474: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80283478: nop

    // 0x8028347C: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x80283480: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283484: nop

    // 0x80283488: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8028348C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283490: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283494: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x80283498: lwc1        $f6, 0x378C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X378C);
    // 0x8028349C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802834A0: swc1        $f6, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f6.u32l;
    // 0x802834A4: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x802834A8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802834AC: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x802834B0: nop

    // 0x802834B4: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x802834B8: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x802834BC: nop

    // 0x802834C0: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    // 0x802834C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802834C8: sw          $zero, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = 0;
    // 0x802834CC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802834D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802834D4: sh          $t4, 0x5270($at)
    MEM_H(0X5270, ctx->r1) = ctx->r12;
    // 0x802834D8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802834DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802834E0: sh          $t5, 0x5278($at)
    MEM_H(0X5278, ctx->r1) = ctx->r13;
    // 0x802834E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802834E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802834EC: swc1        $f8, 0x5288($at)
    MEM_W(0X5288, ctx->r1) = ctx->f8.u32l;
    // 0x802834F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802834F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802834F8: swc1        $f10, -0x3D70($at)
    MEM_W(-0X3D70, ctx->r1) = ctx->f10.u32l;
    // 0x802834FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80283500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283504: swc1        $f16, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f16.u32l;
    // 0x80283508: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028350C: sh          $zero, -0x1F54($at)
    MEM_H(-0X1F54, ctx->r1) = 0;
    // 0x80283510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283514: sh          $zero, -0x1F4C($at)
    MEM_H(-0X1F4C, ctx->r1) = 0;
    // 0x80283518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028351C: sb          $zero, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = 0;
    // 0x80283520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283524: sb          $zero, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = 0;
    // 0x80283528: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028352C: sb          $zero, 0x7598($at)
    MEM_B(0X7598, ctx->r1) = 0;
    // 0x80283530: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283534: sb          $zero, 0x75A0($at)
    MEM_B(0X75A0, ctx->r1) = 0;
    // 0x80283538: b           L_80283540
    // 0x8028353C: nop

        goto L_80283540;
    // 0x8028353C: nop

L_80283540:
    // 0x80283540: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80283544: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80283548: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028354C: jr          $ra
    // 0x80283550: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80283550: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80283554: nop

    // 0x80283558: nop

    // 0x8028355C: nop

;}
RECOMP_FUNC void func_80282BF0_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282BF8: jal         0x8028066C
    // 0x80282BFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282BFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80282C00: b           L_80282C08
    // 0x80282C04: nop

        goto L_80282C08;
    // 0x80282C04: nop

L_80282C08:
    // 0x80282C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282C10: jr          $ra
    // 0x80282C14: nop

    return;
    // 0x80282C14: nop

;}
RECOMP_FUNC void func_80281990_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281998: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028199C: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x802819A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802819A4: bne         $t6, $at, L_80281A04
    if (ctx->r14 != ctx->r1) {
        // 0x802819A8: nop
    
            goto L_80281A04;
    }
    // 0x802819A8: nop

    // 0x802819AC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802819B0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802819B4: nop

    // 0x802819B8: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x802819BC: nop

    // 0x802819C0: beq         $t8, $zero, L_80281A04
    if (ctx->r24 == 0) {
        // 0x802819C4: nop
    
            goto L_80281A04;
    }
    // 0x802819C4: nop

    // 0x802819C8: jal         0x80281624
    // 0x802819CC: nop

    func_80281624_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x802819CC: nop

    after_0:
    // 0x802819D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802819D4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802819D8: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x802819DC: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x802819E0: nop

    // 0x802819E4: bne         $t0, $at, L_802819FC
    if (ctx->r8 != ctx->r1) {
        // 0x802819E8: nop
    
            goto L_802819FC;
    }
    // 0x802819E8: nop

    // 0x802819EC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802819F0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802819F4: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x802819F8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
L_802819FC:
    // 0x802819FC: b           L_80281A64
    // 0x80281A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281A64;
    // 0x80281A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281A04:
    // 0x80281A04: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281A08: lbu         $t3, -0x1F78($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1F78);
    // 0x80281A0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281A10: bne         $t3, $at, L_80281A54
    if (ctx->r11 != ctx->r1) {
        // 0x80281A14: nop
    
            goto L_80281A54;
    }
    // 0x80281A14: nop

    // 0x80281A18: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281A1C: lbu         $t4, -0x1F80($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F80);
    // 0x80281A20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80281A24: bne         $t4, $at, L_80281A54
    if (ctx->r12 != ctx->r1) {
        // 0x80281A28: nop
    
            goto L_80281A54;
    }
    // 0x80281A28: nop

    // 0x80281A2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281A34: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80281A38: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281A3C: jal         0x800178D4
    // 0x80281A40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80281A40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80281A44: jal         0x802816CC
    // 0x80281A48: nop

    func_802816CC_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x80281A48: nop

    after_2:
    // 0x80281A4C: b           L_80281A64
    // 0x80281A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281A64;
    // 0x80281A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281A54:
    // 0x80281A54: b           L_80281A64
    // 0x80281A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281A64;
    // 0x80281A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281A5C: b           L_80281A64
    // 0x80281A60: nop

        goto L_80281A64;
    // 0x80281A60: nop

L_80281A64:
    // 0x80281A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281A6C: jr          $ra
    // 0x80281A70: nop

    return;
    // 0x80281A70: nop

;}
RECOMP_FUNC void func_80280390_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280398: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028039C: sb          $zero, 0x7590($at)
    MEM_B(0X7590, ctx->r1) = 0;
    // 0x802803A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802803A4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802803A8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802803AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802803B0: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802803B4: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802803B8: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x802803BC: jal         0x800843CC
    // 0x802803C0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x802803C0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x802803C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802803C8: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x802803CC: nop

    // 0x802803D0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802803D4: beq         $t8, $zero, L_802803F0
    if (ctx->r24 == 0) {
        // 0x802803D8: nop
    
            goto L_802803F0;
    }
    // 0x802803D8: nop

    // 0x802803DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802803E0: lb          $t9, 0x7590($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7590);
    // 0x802803E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803E8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x802803EC: sb          $t0, 0x7590($at)
    MEM_B(0X7590, ctx->r1) = ctx->r8;
L_802803F0:
    // 0x802803F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802803F4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802803F8: nop

    // 0x802803FC: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80280400: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80280404: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80280408: jal         0x800843CC
    // 0x8028040C: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x8028040C: nop

    after_1:
    // 0x80280410: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280414: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80280418: nop

    // 0x8028041C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80280420: bne         $t3, $zero, L_80280470
    if (ctx->r11 != 0) {
        // 0x80280424: nop
    
            goto L_80280470;
    }
    // 0x80280424: nop

    // 0x80280428: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028042C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280430: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280434: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x80280438: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8028043C: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80280440: nop

    // 0x80280444: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280448: nop

    // 0x8028044C: bc1f        L_80280468
    if (!c1cs) {
        // 0x80280450: nop
    
            goto L_80280468;
    }
    // 0x80280450: nop

    // 0x80280454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280458: lb          $t6, 0x7590($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7590);
    // 0x8028045C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280460: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80280464: sb          $t7, 0x7590($at)
    MEM_B(0X7590, ctx->r1) = ctx->r15;
L_80280468:
    // 0x80280468: b           L_80280484
    // 0x8028046C: nop

        goto L_80280484;
    // 0x8028046C: nop

L_80280470:
    // 0x80280470: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280474: lb          $t8, 0x7590($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7590);
    // 0x80280478: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028047C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80280480: sb          $t9, 0x7590($at)
    MEM_B(0X7590, ctx->r1) = ctx->r25;
L_80280484:
    // 0x80280484: b           L_8028048C
    // 0x80280488: nop

        goto L_8028048C;
    // 0x80280488: nop

L_8028048C:
    // 0x8028048C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280494: jr          $ra
    // 0x80280498: nop

    return;
    // 0x80280498: nop

;}
RECOMP_FUNC void func_80281AE8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281AE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281AF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281AF4: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80281AF8: nop

    // 0x80281AFC: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80281B00: beq         $t7, $zero, L_80281B14
    if (ctx->r15 == 0) {
        // 0x80281B04: nop
    
            goto L_80281B14;
    }
    // 0x80281B04: nop

    // 0x80281B08: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80281B0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281B10: sb          $t8, 0x7598($at)
    MEM_B(0X7598, ctx->r1) = ctx->r24;
L_80281B14:
    // 0x80281B14: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281B18: lh          $t9, -0x1F64($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F64);
    // 0x80281B1C: nop

    // 0x80281B20: beq         $t9, $zero, L_80281C18
    if (ctx->r25 == 0) {
        // 0x80281B24: nop
    
            goto L_80281C18;
    }
    // 0x80281B24: nop

    // 0x80281B28: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281B2C: lh          $t0, -0x1F5C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F5C);
    // 0x80281B30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80281B34: beq         $t0, $at, L_80281C18
    if (ctx->r8 == ctx->r1) {
        // 0x80281B38: nop
    
            goto L_80281C18;
    }
    // 0x80281B38: nop

    // 0x80281B3C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80281B40: jal         0x80280260
    // 0x80281B44: nop

    func_80280260_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80281B44: nop

    after_0:
    // 0x80281B48: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80281B4C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281B50: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281B54: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281B58: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80281B5C: jal         0x80015538
    // 0x80281B60: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80281B60: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80281B64: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80281B68: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80281B6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281B70: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80281B74: nop

    // 0x80281B78: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80281B7C: nop

    // 0x80281B80: bc1t        L_80281BA4
    if (c1cs) {
        // 0x80281B84: nop
    
            goto L_80281BA4;
    }
    // 0x80281B84: nop

    // 0x80281B88: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281B8C: lwc1        $f8, 0x3778($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3778);
    // 0x80281B90: nop

    // 0x80281B94: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80281B98: nop

    // 0x80281B9C: bc1f        L_80281C18
    if (!c1cs) {
        // 0x80281BA0: nop
    
            goto L_80281C18;
    }
    // 0x80281BA0: nop

L_80281BA4:
    // 0x80281BA4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281BA8: lb          $t2, 0x7548($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7548);
    // 0x80281BAC: nop

    // 0x80281BB0: beq         $t2, $zero, L_80281C18
    if (ctx->r10 == 0) {
        // 0x80281BB4: nop
    
            goto L_80281C18;
    }
    // 0x80281BB4: nop

    // 0x80281BB8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281BBC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281BC0: lwc1        $f12, 0x51D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80281BC4: jal         0x80015538
    // 0x80281BC8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80281BC8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_2:
    // 0x80281BCC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80281BD0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80281BD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281BD8: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80281BDC: nop

    // 0x80281BE0: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80281BE4: nop

    // 0x80281BE8: bc1f        L_80281C18
    if (!c1cs) {
        // 0x80281BEC: nop
    
            goto L_80281C18;
    }
    // 0x80281BEC: nop

    // 0x80281BF0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80281BF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281BF8: nop

    // 0x80281BFC: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80281C00: nop

    // 0x80281C04: bc1f        L_80281C18
    if (!c1cs) {
        // 0x80281C08: nop
    
            goto L_80281C18;
    }
    // 0x80281C08: nop

    // 0x80281C0C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80281C10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C14: sb          $t3, 0x75A0($at)
    MEM_B(0X75A0, ctx->r1) = ctx->r11;
L_80281C18:
    // 0x80281C18: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281C1C: lb          $t4, 0x7598($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7598);
    // 0x80281C20: nop

    // 0x80281C24: beq         $t4, $zero, L_80281CA4
    if (ctx->r12 == 0) {
        // 0x80281C28: nop
    
            goto L_80281CA4;
    }
    // 0x80281C28: nop

    // 0x80281C2C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281C30: lb          $t5, 0x75A0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X75A0);
    // 0x80281C34: nop

    // 0x80281C38: beq         $t5, $zero, L_80281CA4
    if (ctx->r13 == 0) {
        // 0x80281C3C: nop
    
            goto L_80281CA4;
    }
    // 0x80281C3C: nop

    // 0x80281C40: jal         0x80281588
    // 0x80281C44: nop

    func_80281588_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80281C44: nop

    after_3:
    // 0x80281C48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281C4C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281C50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281C54: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281C58: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80281C5C: jal         0x80015538
    // 0x80281C60: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80281C60: nop

    after_4:
    // 0x80281C64: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281C68: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281C6C: nop

    // 0x80281C70: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80281C74: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281C78: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281C7C: nop

    // 0x80281C80: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80281C84: nop

    // 0x80281C88: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80281C8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C90: sb          $zero, 0x7598($at)
    MEM_B(0X7598, ctx->r1) = 0;
    // 0x80281C94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C98: sb          $zero, 0x75A0($at)
    MEM_B(0X75A0, ctx->r1) = 0;
    // 0x80281C9C: b           L_80281CB4
    // 0x80281CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281CB4;
    // 0x80281CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281CA4:
    // 0x80281CA4: b           L_80281CB4
    // 0x80281CA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281CB4;
    // 0x80281CA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281CAC: b           L_80281CB4
    // 0x80281CB0: nop

        goto L_80281CB4;
    // 0x80281CB0: nop

L_80281CB4:
    // 0x80281CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281CB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281CBC: jr          $ra
    // 0x80281CC0: nop

    return;
    // 0x80281CC0: nop

;}
RECOMP_FUNC void func_80281588_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028158C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281590: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281594: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281598: addiu       $t6, $zero, 0x26B
    ctx->r14 = ADD32(0, 0X26B);
    // 0x8028159C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802815A0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802815A4: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x802815A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802815AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802815B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802815B4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802815B8: jal         0x8001C0EC
    // 0x802815BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802815BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802815C0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802815C4: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x802815C8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802815CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802815D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802815D4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802815D8: jal         0x8001C0EC
    // 0x802815DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802815DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x802815E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802815E4: jal         0x8001B754
    // 0x802815E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802815E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802815EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802815F0: jal         0x8001B754
    // 0x802815F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x802815F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802815F8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802815FC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80281600: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281604: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80281608: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x8028160C: b           L_80281614
    // 0x80281610: nop

        goto L_80281614;
    // 0x80281610: nop

L_80281614:
    // 0x80281614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028161C: jr          $ra
    // 0x80281620: nop

    return;
    // 0x80281620: nop

;}
RECOMP_FUNC void func_80280A20_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280A20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80280A24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80280A28: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80280A2C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80280A30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280A34: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280A38: addiu       $at, $zero, 0x259
    ctx->r1 = ADD32(0, 0X259);
    // 0x80280A3C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280A40: nop

    // 0x80280A44: bne         $t7, $at, L_80280A64
    if (ctx->r15 != ctx->r1) {
        // 0x80280A48: nop
    
            goto L_80280A64;
    }
    // 0x80280A48: nop

    // 0x80280A4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280A50: lw          $t8, -0x1EE8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1EE8);
    // 0x80280A54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A58: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80280A5C: b           L_80280A6C
    // 0x80280A60: sw          $t9, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = ctx->r25;
        goto L_80280A6C;
    // 0x80280A60: sw          $t9, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = ctx->r25;
L_80280A64:
    // 0x80280A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A68: sw          $zero, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = 0;
L_80280A6C:
    // 0x80280A6C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280A70: lb          $t0, 0x7548($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7548);
    // 0x80280A74: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280A78: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280A7C: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80280A80: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80280A84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80280A88: lh          $t2, 0x3694($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X3694);
    // 0x80280A8C: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80280A90: nop

    // 0x80280A94: beq         $t2, $t4, L_80280AC4
    if (ctx->r10 == ctx->r12) {
        // 0x80280A98: nop
    
            goto L_80280AC4;
    }
    // 0x80280A98: nop

    // 0x80280A9C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280AA0: lb          $t5, 0x7548($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7548);
    // 0x80280AA4: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80280AA8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80280AAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280AB0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280AB4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280AB8: lh          $t7, 0x3694($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X3694);
    // 0x80280ABC: nop

    // 0x80280AC0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
L_80280AC4:
    // 0x80280AC4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280AC8: lb          $t9, 0x7548($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7548);
    // 0x80280ACC: nop

    // 0x80280AD0: beq         $t9, $zero, L_80280AF4
    if (ctx->r25 == 0) {
        // 0x80280AD4: nop
    
            goto L_80280AF4;
    }
    // 0x80280AD4: nop

    // 0x80280AD8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280ADC: lb          $t0, 0x7548($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7548);
    // 0x80280AE0: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80280AE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80280AE8: lb          $t1, 0x369C($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X369C);
    // 0x80280AEC: b           L_80280B90
    // 0x80280AF0: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
        goto L_80280B90;
    // 0x80280AF0: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_80280AF4:
    // 0x80280AF4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280AF8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280AFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280B00: lwc1        $f4, 0x44($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80280B04: nop

    // 0x80280B08: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80280B0C: nop

    // 0x80280B10: bc1f        L_80280B20
    if (!c1cs) {
        // 0x80280B14: nop
    
            goto L_80280B20;
    }
    // 0x80280B14: nop

    // 0x80280B18: b           L_80280B90
    // 0x80280B1C: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
        goto L_80280B90;
    // 0x80280B1C: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
L_80280B20:
    // 0x80280B20: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280B24: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280B28: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80280B2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280B30: lwc1        $f8, 0x44($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80280B34: nop

    // 0x80280B38: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80280B3C: nop

    // 0x80280B40: bc1f        L_80280B54
    if (!c1cs) {
        // 0x80280B44: nop
    
            goto L_80280B54;
    }
    // 0x80280B44: nop

    // 0x80280B48: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80280B4C: b           L_80280B90
    // 0x80280B50: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
        goto L_80280B90;
    // 0x80280B50: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
L_80280B54:
    // 0x80280B54: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280B58: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280B5C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80280B60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280B64: lwc1        $f16, 0x44($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80280B68: nop

    // 0x80280B6C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80280B70: nop

    // 0x80280B74: bc1f        L_80280B88
    if (!c1cs) {
        // 0x80280B78: nop
    
            goto L_80280B88;
    }
    // 0x80280B78: nop

    // 0x80280B7C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80280B80: b           L_80280B90
    // 0x80280B84: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
        goto L_80280B90;
    // 0x80280B84: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
L_80280B88:
    // 0x80280B88: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80280B8C: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
L_80280B90:
    // 0x80280B90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280B94: jal         0x8001B880
    // 0x80280B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80280B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280B9C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80280BA0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80280BA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280BA8: nop

    // 0x80280BAC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80280BB0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80280BB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280BB8: beq         $t8, $at, L_80280BD8
    if (ctx->r24 == ctx->r1) {
        // 0x80280BBC: nop
    
            goto L_80280BD8;
    }
    // 0x80280BBC: nop

    // 0x80280BC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280BC4: beq         $t8, $at, L_80280BD8
    if (ctx->r24 == ctx->r1) {
        // 0x80280BC8: nop
    
            goto L_80280BD8;
    }
    // 0x80280BC8: nop

    // 0x80280BCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80280BD0: bne         $t8, $at, L_80280C14
    if (ctx->r24 != ctx->r1) {
        // 0x80280BD4: nop
    
            goto L_80280C14;
    }
    // 0x80280BD4: nop

L_80280BD8:
    // 0x80280BD8: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x80280BDC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80280BE0: nop

    // 0x80280BE4: beq         $t9, $t0, L_80280C14
    if (ctx->r25 == ctx->r8) {
        // 0x80280BE8: nop
    
            goto L_80280C14;
    }
    // 0x80280BE8: nop

    // 0x80280BEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280BF0: jal         0x8001B62C
    // 0x80280BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80280BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80280BF8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80280BFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280C00: jal         0x8001B580
    // 0x80280C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80280C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80280C08: nop

    // 0x80280C0C: div.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80280C10: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80280C14:
    // 0x80280C14: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x80280C18: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80280C1C: nop

    // 0x80280C20: beq         $t1, $t3, L_80280C68
    if (ctx->r9 == ctx->r11) {
        // 0x80280C24: nop
    
            goto L_80280C68;
    }
    // 0x80280C24: nop

    // 0x80280C28: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80280C2C: addiu       $t2, $t2, 0x6164
    ctx->r10 = ADD32(ctx->r10, 0X6164);
    // 0x80280C30: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x80280C34: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80280C38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280C40: jal         0x8001C0EC
    // 0x80280C44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80280C44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80280C48: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80280C4C: addiu       $t4, $t4, 0x6294
    ctx->r12 = ADD32(ctx->r12, 0X6294);
    // 0x80280C50: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x80280C54: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80280C58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280C60: jal         0x8001C0EC
    // 0x80280C64: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80280C64: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_4:
L_80280C68:
    // 0x80280C68: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80280C6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280C70: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80280C74: nop

    // 0x80280C78: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280C7C: nop

    // 0x80280C80: bc1t        L_80280CF8
    if (c1cs) {
        // 0x80280C84: nop
    
            goto L_80280CF8;
    }
    // 0x80280C84: nop

    // 0x80280C88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280C8C: jal         0x8001B580
    // 0x80280C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_5;
    // 0x80280C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80280C94: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80280C98: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80280C9C: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80280CA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280CA8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80280CAC: nop

    // 0x80280CB0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80280CB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80280CB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80280CBC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280CC0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80280CC4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80280CC8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80280CCC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80280CD0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80280CD4: bgez        $t7, L_80280CEC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80280CD8: cvt.s.w     $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80280CEC;
    }
    // 0x80280CD8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80280CDC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80280CE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280CE4: nop

    // 0x80280CE8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80280CEC:
    // 0x80280CEC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80280CF0: jal         0x8001B6BC
    // 0x80280CF4: nop

    func_8001B6BC(rdram, ctx);
        goto after_6;
    // 0x80280CF4: nop

    after_6:
L_80280CF8:
    // 0x80280CF8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80280CFC: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80280D00: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280D04: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80280D08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280D0C: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
    // 0x80280D10: b           L_80280D18
    // 0x80280D14: nop

        goto L_80280D18;
    // 0x80280D14: nop

L_80280D18:
    // 0x80280D18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80280D1C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80280D20: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280D24: jr          $ra
    // 0x80280D28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80280D28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802817D8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802817D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802817DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802817E0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802817E4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802817E8: addiu       $t6, $zero, 0x26F
    ctx->r14 = ADD32(0, 0X26F);
    // 0x802817EC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802817F0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802817F4: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x802817F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802817FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281804: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80281808: jal         0x8001C0EC
    // 0x8028180C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028180C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281810: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80281814: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281818: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8028181C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281824: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80281828: jal         0x8001C0EC
    // 0x8028182C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028182C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281830: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80281834: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80281838: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028183C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80281840: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281844: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80281848: b           L_80281850
    // 0x8028184C: nop

        goto L_80281850;
    // 0x8028184C: nop

L_80281850:
    // 0x80281850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281858: jr          $ra
    // 0x8028185C: nop

    return;
    // 0x8028185C: nop

;}
RECOMP_FUNC void func_80280D2C_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280D2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280D34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280D38: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280D3C: nop

    // 0x80280D40: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280D44: nop

    // 0x80280D48: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80280D4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280D50: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280D54: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80280D58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280D5C: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80280D60: nop

    // 0x80280D64: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80280D68: nop

    // 0x80280D6C: bc1f        L_80280D88
    if (!c1cs) {
        // 0x80280D70: nop
    
            goto L_80280D88;
    }
    // 0x80280D70: nop

    // 0x80280D74: addiu       $t9, $zero, 0x25D
    ctx->r25 = ADD32(0, 0X25D);
    // 0x80280D78: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x80280D7C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80280D80: b           L_80280D98
    // 0x80280D84: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
        goto L_80280D98;
    // 0x80280D84: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
L_80280D88:
    // 0x80280D88: addiu       $t1, $zero, 0x260
    ctx->r9 = ADD32(0, 0X260);
    // 0x80280D8C: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x80280D90: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80280D94: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
L_80280D98:
    // 0x80280D98: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280D9C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280DA0: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80280DA4: nop

    // 0x80280DA8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80280DAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280DB0: jal         0x8001B62C
    // 0x80280DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80280DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280DB8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80280DBC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80280DC0: addiu       $t5, $t5, 0x6164
    ctx->r13 = ADD32(ctx->r13, 0X6164);
    // 0x80280DC4: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80280DC8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80280DCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280DD4: jal         0x8001C0EC
    // 0x80280DD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80280DD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80280DDC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80280DE0: addiu       $t6, $t6, 0x6294
    ctx->r14 = ADD32(ctx->r14, 0X6294);
    // 0x80280DE4: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x80280DE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80280DEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280DF4: jal         0x8001C0EC
    // 0x80280DF8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80280DF8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80280DFC: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80280E00: addiu       $at, $zero, 0x25D
    ctx->r1 = ADD32(0, 0X25D);
    // 0x80280E04: beq         $t7, $at, L_80280E18
    if (ctx->r15 == ctx->r1) {
        // 0x80280E08: nop
    
            goto L_80280E18;
    }
    // 0x80280E08: nop

    // 0x80280E0C: addiu       $at, $zero, 0x260
    ctx->r1 = ADD32(0, 0X260);
    // 0x80280E10: bne         $t7, $at, L_80280E30
    if (ctx->r15 != ctx->r1) {
        // 0x80280E14: nop
    
            goto L_80280E30;
    }
    // 0x80280E14: nop

L_80280E18:
    // 0x80280E18: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80280E1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E20: jal         0x8001B6BC
    // 0x80280E24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x80280E24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80280E28: b           L_80280E48
    // 0x80280E2C: nop

        goto L_80280E48;
    // 0x80280E2C: nop

L_80280E30:
    // 0x80280E30: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80280E34: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80280E38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280E3C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80280E40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280E44: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
L_80280E48:
    // 0x80280E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E4C: jal         0x8001B754
    // 0x80280E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x80280E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80280E54: b           L_80280E5C
    // 0x80280E58: nop

        goto L_80280E5C;
    // 0x80280E58: nop

L_80280E5C:
    // 0x80280E5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280E60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80280E64: jr          $ra
    // 0x80280E68: nop

    return;
    // 0x80280E68: nop

;}
RECOMP_FUNC void func_80282AD4_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282ADC: jal         0x8028066C
    // 0x80282AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80282AE4: b           L_80282AEC
    // 0x80282AE8: nop

        goto L_80282AEC;
    // 0x80282AE8: nop

L_80282AEC:
    // 0x80282AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282AF4: jr          $ra
    // 0x80282AF8: nop

    return;
    // 0x80282AF8: nop

;}
RECOMP_FUNC void func_80282F24_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80282F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282F2C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80282F30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80282F34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282F38: lb          $t6, 0x7598($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7598);
    // 0x80282F3C: nop

    // 0x80282F40: beq         $t6, $zero, L_80282F5C
    if (ctx->r14 == 0) {
        // 0x80282F44: nop
    
            goto L_80282F5C;
    }
    // 0x80282F44: nop

    // 0x80282F48: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282F4C: lb          $t7, 0x7598($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7598);
    // 0x80282F50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282F54: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80282F58: sb          $t8, 0x7598($at)
    MEM_B(0X7598, ctx->r1) = ctx->r24;
L_80282F5C:
    // 0x80282F5C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282F60: lb          $t9, 0x75A0($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X75A0);
    // 0x80282F64: nop

    // 0x80282F68: beq         $t9, $zero, L_80282F84
    if (ctx->r25 == 0) {
        // 0x80282F6C: nop
    
            goto L_80282F84;
    }
    // 0x80282F6C: nop

    // 0x80282F70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282F74: lb          $t0, 0x75A0($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X75A0);
    // 0x80282F78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282F7C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80282F80: sb          $t1, 0x75A0($at)
    MEM_B(0X75A0, ctx->r1) = ctx->r9;
L_80282F84:
    // 0x80282F84: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282F88: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282F8C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80282F90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282F94: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80282F98: nop

    // 0x80282F9C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80282FA0: nop

    // 0x80282FA4: bc1f        L_80282FE0
    if (!c1cs) {
        // 0x80282FA8: nop
    
            goto L_80282FE0;
    }
    // 0x80282FA8: nop

    // 0x80282FAC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282FB0: lw          $t3, -0x1CB8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1CB8);
    // 0x80282FB4: nop

    // 0x80282FB8: slti        $at, $t3, 0x3E8
    ctx->r1 = SIGNED(ctx->r11) < 0X3E8 ? 1 : 0;
    // 0x80282FBC: beq         $at, $zero, L_80282FD8
    if (ctx->r1 == 0) {
        // 0x80282FC0: nop
    
            goto L_80282FD8;
    }
    // 0x80282FC0: nop

    // 0x80282FC4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282FC8: lw          $t4, -0x1CB8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1CB8);
    // 0x80282FCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282FD0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80282FD4: sw          $t5, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = ctx->r13;
L_80282FD8:
    // 0x80282FD8: b           L_80282FE8
    // 0x80282FDC: nop

        goto L_80282FE8;
    // 0x80282FDC: nop

L_80282FE0:
    // 0x80282FE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282FE4: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
L_80282FE8:
    // 0x80282FE8: jal         0x8028049C
    // 0x80282FEC: nop

    func_8028049C_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x80282FEC: nop

    after_0:
    // 0x80282FF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282FF4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80282FF8: jal         0x800682E0
    // 0x80282FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_1;
    // 0x80282FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80283000: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80283004: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80283008: jal         0x80085B34
    // 0x8028300C: nop

    func_80085B34(rdram, ctx);
        goto after_2;
    // 0x8028300C: nop

    after_2:
    // 0x80283010: jal         0x80280390
    // 0x80283014: nop

    func_80280390_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80283014: nop

    after_3:
    // 0x80283018: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028301C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80283020: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80283024: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80283028: nop

    // 0x8028302C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80283030: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80283034: lw          $t9, 0x23D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X23D8);
    // 0x80283038: nop

    // 0x8028303C: jalr        $t9
    // 0x80283040: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80283040: nop

    after_4:
    // 0x80283044: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283048: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028304C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80283050: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80283054: nop

    // 0x80283058: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8028305C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80283060: lw          $t9, 0x23DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X23DC);
    // 0x80283064: nop

    // 0x80283068: jalr        $t9
    // 0x8028306C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8028306C: nop

    after_5:
    // 0x80283070: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80283074: lb          $t3, -0x1BF4($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1BF4);
    // 0x80283078: nop

    // 0x8028307C: beq         $t3, $zero, L_802830AC
    if (ctx->r11 == 0) {
        // 0x80283080: nop
    
            goto L_802830AC;
    }
    // 0x80283080: nop

    // 0x80283084: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283088: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8028308C: nop

    // 0x80283090: andi        $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 & 0X2000;
    // 0x80283094: beq         $t5, $zero, L_802830AC
    if (ctx->r13 == 0) {
        // 0x80283098: nop
    
            goto L_802830AC;
    }
    // 0x80283098: nop

    // 0x8028309C: jal         0x80087694
    // 0x802830A0: nop

    func_80087694(rdram, ctx);
        goto after_6;
    // 0x802830A0: nop

    after_6:
    // 0x802830A4: b           L_80283154
    // 0x802830A8: nop

        goto L_80283154;
    // 0x802830A8: nop

L_802830AC:
    // 0x802830AC: jal         0x80280000
    // 0x802830B0: nop

    func_80280000_code_extra_6(rdram, ctx);
        goto after_7;
    // 0x802830B0: nop

    after_7:
    // 0x802830B4: jal         0x802800A8
    // 0x802830B8: nop

    func_802800A8_code_extra_6(rdram, ctx);
        goto after_8;
    // 0x802830B8: nop

    after_8:
    // 0x802830BC: jal         0x802801DC
    // 0x802830C0: nop

    func_802801DC_code_extra_6(rdram, ctx);
        goto after_9;
    // 0x802830C0: nop

    after_9:
    // 0x802830C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802830C8: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x802830CC: nop

    // 0x802830D0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802830D4: bne         $t7, $zero, L_802830F8
    if (ctx->r15 != 0) {
        // 0x802830D8: nop
    
            goto L_802830F8;
    }
    // 0x802830D8: nop

    // 0x802830DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802830E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802830E4: addiu       $at, $zero, 0x26B
    ctx->r1 = ADD32(0, 0X26B);
    // 0x802830E8: lh          $t0, 0xA4($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA4);
    // 0x802830EC: nop

    // 0x802830F0: bne         $t0, $at, L_80283108
    if (ctx->r8 != ctx->r1) {
        // 0x802830F4: nop
    
            goto L_80283108;
    }
    // 0x802830F4: nop

L_802830F8:
    // 0x802830F8: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802830FC: addiu       $t1, $t1, 0x35C0
    ctx->r9 = ADD32(ctx->r9, 0X35C0);
    // 0x80283100: b           L_80283114
    // 0x80283104: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
        goto L_80283114;
    // 0x80283104: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80283108:
    // 0x80283108: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8028310C: addiu       $t2, $t2, 0x3560
    ctx->r10 = ADD32(ctx->r10, 0X3560);
    // 0x80283110: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80283114:
    // 0x80283114: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283118: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028311C: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x80283120: lh          $t3, 0xA4($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA4);
    // 0x80283124: nop

    // 0x80283128: bne         $t3, $at, L_8028313C
    if (ctx->r11 != ctx->r1) {
        // 0x8028312C: nop
    
            goto L_8028313C;
    }
    // 0x8028312C: nop

    // 0x80283130: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80283134: b           L_80283140
    // 0x80283138: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
        goto L_80283140;
    // 0x80283138: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_8028313C:
    // 0x8028313C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80283140:
    // 0x80283140: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80283144: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80283148: lui         $a2, 0x42EE
    ctx->r6 = S32(0X42EE << 16);
    // 0x8028314C: jal         0x80084BD8
    // 0x80283150: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80084BD8(rdram, ctx);
        goto after_10;
    // 0x80283150: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_10:
L_80283154:
    // 0x80283154: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80283158: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028315C: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x80283160: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80283164: nop

    // 0x80283168: beq         $t6, $at, L_80283190
    if (ctx->r14 == ctx->r1) {
        // 0x8028316C: nop
    
            goto L_80283190;
    }
    // 0x8028316C: nop

    // 0x80283170: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283174: jal         0x8001B62C
    // 0x80283178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_11;
    // 0x80283178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8028317C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80283180: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80283184: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80283188: jal         0x8001B6BC
    // 0x8028318C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_12;
    // 0x8028318C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
L_80283190:
    // 0x80283190: jal         0x8001CD20
    // 0x80283194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_13;
    // 0x80283194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x80283198: jal         0x8001AD6C
    // 0x8028319C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_14;
    // 0x8028319C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x802831A0: b           L_802831A8
    // 0x802831A4: nop

        goto L_802831A8;
    // 0x802831A4: nop

L_802831A8:
    // 0x802831A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802831AC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802831B0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802831B4: jr          $ra
    // 0x802831B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802831B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802826BC_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802826BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802826C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802826C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802826C8: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x802826CC: nop

    // 0x802826D0: slti        $at, $t6, 0x5A
    ctx->r1 = SIGNED(ctx->r14) < 0X5A ? 1 : 0;
    // 0x802826D4: bne         $at, $zero, L_802826F0
    if (ctx->r1 != 0) {
        // 0x802826D8: nop
    
            goto L_802826F0;
    }
    // 0x802826D8: nop

    // 0x802826DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802826E0: jal         0x80069A54
    // 0x802826E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x802826E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802826E8: b           L_80282704
    // 0x802826EC: nop

        goto L_80282704;
    // 0x802826EC: nop

L_802826F0:
    // 0x802826F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802826F4: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x802826F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802826FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80282700: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
L_80282704:
    // 0x80282704: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282708: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028270C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282710: lwc1        $f6, 0x377C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X377C);
    // 0x80282714: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80282718: nop

    // 0x8028271C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80282720: nop

    // 0x80282724: bc1f        L_80282744
    if (!c1cs) {
        // 0x80282728: nop
    
            goto L_80282744;
    }
    // 0x80282728: nop

    // 0x8028272C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282730: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282734: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282738: lwc1        $f8, 0x3780($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3780);
    // 0x8028273C: nop

    // 0x80282740: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_80282744:
    // 0x80282744: b           L_8028274C
    // 0x80282748: nop

        goto L_8028274C;
    // 0x80282748: nop

L_8028274C:
    // 0x8028274C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282754: jr          $ra
    // 0x80282758: nop

    return;
    // 0x80282758: nop

;}
RECOMP_FUNC void func_802811F8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802811FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281200: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281204: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281208: addiu       $t6, $zero, 0x266
    ctx->r14 = ADD32(0, 0X266);
    // 0x8028120C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80281210: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80281214: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281218: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028121C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281224: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80281228: jal         0x8001C0EC
    // 0x8028122C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028122C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281230: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80281234: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281238: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8028123C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281244: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80281248: jal         0x8001C0EC
    // 0x8028124C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028124C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80281250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281254: jal         0x8001B754
    // 0x80281258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8028125C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281260: jal         0x8001B754
    // 0x80281264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x80281264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281268: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028126C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281270: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281278: nop

    // 0x8028127C: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x80281280: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281284: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281288: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028128C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281290: lwc1        $f12, 0x128($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X128);
    // 0x80281294: jal         0x80015538
    // 0x80281298: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80281298: nop

    after_4:
    // 0x8028129C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802812A0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802812A4: nop

    // 0x802812A8: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x802812AC: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x802812B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802812B4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802812B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802812BC: nop

    // 0x802812C0: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x802812C4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x802812C8: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x802812CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802812D0: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x802812D4: sw          $t5, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r13;
    // 0x802812D8: b           L_802812E0
    // 0x802812DC: nop

        goto L_802812E0;
    // 0x802812DC: nop

L_802812E0:
    // 0x802812E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802812E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802812E8: jr          $ra
    // 0x802812EC: nop

    return;
    // 0x802812EC: nop

;}
RECOMP_FUNC void func_802825F0_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802825F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802825F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802825F8: jal         0x80281860
    // 0x802825FC: nop

    func_80281860_code_extra_6(rdram, ctx);
        goto after_0;
    // 0x802825FC: nop

    after_0:
    // 0x80282600: beq         $v0, $zero, L_80282610
    if (ctx->r2 == 0) {
        // 0x80282604: nop
    
            goto L_80282610;
    }
    // 0x80282604: nop

    // 0x80282608: b           L_802826AC
    // 0x8028260C: nop

        goto L_802826AC;
    // 0x8028260C: nop

L_80282610:
    // 0x80282610: jal         0x80085D54
    // 0x80282614: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282614: nop

    after_1:
    // 0x80282618: beq         $v0, $zero, L_80282628
    if (ctx->r2 == 0) {
        // 0x8028261C: nop
    
            goto L_80282628;
    }
    // 0x8028261C: nop

    // 0x80282620: b           L_802826AC
    // 0x80282624: nop

        goto L_802826AC;
    // 0x80282624: nop

L_80282628:
    // 0x80282628: jal         0x80281AE8
    // 0x8028262C: nop

    func_80281AE8_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x8028262C: nop

    after_2:
    // 0x80282630: beq         $v0, $zero, L_80282640
    if (ctx->r2 == 0) {
        // 0x80282634: nop
    
            goto L_80282640;
    }
    // 0x80282634: nop

    // 0x80282638: b           L_802826AC
    // 0x8028263C: nop

        goto L_802826AC;
    // 0x8028263C: nop

L_80282640:
    // 0x80282640: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80282644: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80282648: nop

    // 0x8028264C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80282650: beq         $t7, $zero, L_802826A4
    if (ctx->r15 == 0) {
        // 0x80282654: nop
    
            goto L_802826A4;
    }
    // 0x80282654: nop

    // 0x80282658: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028265C: lb          $t8, 0x7590($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7590);
    // 0x80282660: nop

    // 0x80282664: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80282668: bne         $t9, $zero, L_80282694
    if (ctx->r25 != 0) {
        // 0x8028266C: nop
    
            goto L_80282694;
    }
    // 0x8028266C: nop

    // 0x80282670: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282674: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282678: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028267C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80282680: nop

    // 0x80282684: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80282688: nop

    // 0x8028268C: bc1f        L_802826A4
    if (!c1cs) {
        // 0x80282690: nop
    
            goto L_802826A4;
    }
    // 0x80282690: nop

L_80282694:
    // 0x80282694: jal         0x80280E6C
    // 0x80282698: nop

    func_80280E6C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x80282698: nop

    after_3:
    // 0x8028269C: b           L_802826AC
    // 0x802826A0: nop

        goto L_802826AC;
    // 0x802826A0: nop

L_802826A4:
    // 0x802826A4: b           L_802826AC
    // 0x802826A8: nop

        goto L_802826AC;
    // 0x802826A8: nop

L_802826AC:
    // 0x802826AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802826B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802826B4: jr          $ra
    // 0x802826B8: nop

    return;
    // 0x802826B8: nop

;}
RECOMP_FUNC void func_802808B8_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802808B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802808BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802808C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802808C4: lb          $t6, 0x7548($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7548);
    // 0x802808C8: nop

    // 0x802808CC: beq         $t6, $zero, L_80280994
    if (ctx->r14 == 0) {
        // 0x802808D0: nop
    
            goto L_80280994;
    }
    // 0x802808D0: nop

    // 0x802808D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802808D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802808DC: addiu       $at, $zero, 0x260
    ctx->r1 = ADD32(0, 0X260);
    // 0x802808E0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x802808E4: nop

    // 0x802808E8: beq         $t8, $at, L_802808FC
    if (ctx->r24 == ctx->r1) {
        // 0x802808EC: nop
    
            goto L_802808FC;
    }
    // 0x802808EC: nop

    // 0x802808F0: addiu       $at, $zero, 0x261
    ctx->r1 = ADD32(0, 0X261);
    // 0x802808F4: bne         $t8, $at, L_8028097C
    if (ctx->r24 != ctx->r1) {
        // 0x802808F8: nop
    
            goto L_8028097C;
    }
    // 0x802808F8: nop

L_802808FC:
    // 0x802808FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280900: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280904: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280908: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028090C: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80280910: jal         0x80084120
    // 0x80280914: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80084120(rdram, ctx);
        goto after_0;
    // 0x80280914: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80280918: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8028091C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80280920: nop

    // 0x80280924: bne         $t0, $zero, L_80280944
    if (ctx->r8 != 0) {
        // 0x80280928: nop
    
            goto L_80280944;
    }
    // 0x80280928: nop

    // 0x8028092C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280930: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280934: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280938: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028093C: b           L_80280974
    // 0x80280940: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
        goto L_80280974;
    // 0x80280940: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
L_80280944:
    // 0x80280944: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80280948: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028094C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280950: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80280954: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80280958: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8028095C: jal         0x80015538
    // 0x80280960: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80280960: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x80280964: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280968: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028096C: nop

    // 0x80280970: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
L_80280974:
    // 0x80280974: b           L_80280994
    // 0x80280978: nop

        goto L_80280994;
    // 0x80280978: nop

L_8028097C:
    // 0x8028097C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280984: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280988: lwc1        $f8, 0x51D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028098C: nop

    // 0x80280990: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
L_80280994:
    // 0x80280994: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280998: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028099C: addiu       $at, $zero, 0x260
    ctx->r1 = ADD32(0, 0X260);
    // 0x802809A0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x802809A4: nop

    // 0x802809A8: beq         $t8, $at, L_802809BC
    if (ctx->r24 == ctx->r1) {
        // 0x802809AC: nop
    
            goto L_802809BC;
    }
    // 0x802809AC: nop

    // 0x802809B0: addiu       $at, $zero, 0x261
    ctx->r1 = ADD32(0, 0X261);
    // 0x802809B4: bne         $t8, $at, L_802809F8
    if (ctx->r24 != ctx->r1) {
        // 0x802809B8: nop
    
            goto L_802809F8;
    }
    // 0x802809B8: nop

L_802809BC:
    // 0x802809BC: jal         0x8028057C
    // 0x802809C0: nop

    func_8028057C_code_extra_6(rdram, ctx);
        goto after_2;
    // 0x802809C0: nop

    after_2:
    // 0x802809C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802809C8: bne         $v0, $at, L_802809E0
    if (ctx->r2 != ctx->r1) {
        // 0x802809CC: nop
    
            goto L_802809E0;
    }
    // 0x802809CC: nop

    // 0x802809D0: jal         0x8028066C
    // 0x802809D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8028066C_code_extra_6(rdram, ctx);
        goto after_3;
    // 0x802809D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802809D8: b           L_802809F0
    // 0x802809DC: nop

        goto L_802809F0;
    // 0x802809DC: nop

L_802809E0:
    // 0x802809E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802809E4: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x802809E8: jal         0x8028066C
    // 0x802809EC: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_4;
    // 0x802809EC: nop

    after_4:
L_802809F0:
    // 0x802809F0: b           L_80280A08
    // 0x802809F4: nop

        goto L_80280A08;
    // 0x802809F4: nop

L_802809F8:
    // 0x802809F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802809FC: lb          $a0, 0x7548($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7548);
    // 0x80280A00: jal         0x8028066C
    // 0x80280A04: nop

    func_8028066C_code_extra_6(rdram, ctx);
        goto after_5;
    // 0x80280A04: nop

    after_5:
L_80280A08:
    // 0x80280A08: b           L_80280A10
    // 0x80280A0C: nop

        goto L_80280A10;
    // 0x80280A0C: nop

L_80280A10:
    // 0x80280A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280A18: jr          $ra
    // 0x80280A1C: nop

    return;
    // 0x80280A1C: nop

;}
RECOMP_FUNC void func_80281624_code_extra_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281624: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028162C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281630: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281634: addiu       $t6, $zero, 0x26C
    ctx->r14 = ADD32(0, 0X26C);
    // 0x80281638: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8028163C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80281640: addiu       $t8, $t8, 0x6164
    ctx->r24 = ADD32(ctx->r24, 0X6164);
    // 0x80281644: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80281648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028164C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281650: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80281654: jal         0x8001C0EC
    // 0x80281658: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281658: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8028165C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80281660: addiu       $t9, $t9, 0x6294
    ctx->r25 = ADD32(ctx->r25, 0X6294);
    // 0x80281664: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281668: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028166C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281670: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80281674: jal         0x8001C0EC
    // 0x80281678: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281678: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x8028167C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281680: jal         0x8001B754
    // 0x80281684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281688: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028168C: jal         0x8001B754
    // 0x80281690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x80281690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281694: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281698: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028169C: addiu       $a0, $zero, 0x2C3
    ctx->r4 = ADD32(0, 0X2C3);
    // 0x802816A0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x802816A4: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x802816A8: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x802816AC: jal         0x80081468
    // 0x802816B0: nop

    func_80081468(rdram, ctx);
        goto after_4;
    // 0x802816B0: nop

    after_4:
    // 0x802816B4: b           L_802816BC
    // 0x802816B8: nop

        goto L_802816BC;
    // 0x802816B8: nop

L_802816BC:
    // 0x802816BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802816C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802816C4: jr          $ra
    // 0x802816C8: nop

    return;
    // 0x802816C8: nop

;}
RECOMP_FUNC void func_80331920_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331920: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331924: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331928: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033192C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331930: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80331934: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80331938: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033193C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80331940: lwc1        $f9, 0x6280($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6280);
    // 0x80331944: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80331948: lwc1        $f8, 0x6284($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6284);
    // 0x8033194C: nop

    // 0x80331950: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x80331954: nop

    // 0x80331958: bc1f        L_80331980
    if (!c1cs) {
        // 0x8033195C: nop
    
            goto L_80331980;
    }
    // 0x8033195C: nop

    // 0x80331960: jal         0x8033161C
    // 0x80331964: nop

    func_8033161C_unk_bin_2(rdram, ctx);
        goto after_0;
    // 0x80331964: nop

    after_0:
    // 0x80331968: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033196C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331970: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x80331974: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331978: jal         0x800178D4
    // 0x8033197C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8033197C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80331980:
    // 0x80331980: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80331984: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80331988: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8033198C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80331990: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80331994: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80331998: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033199C: nop

    // 0x803319A0: c.le.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d <= ctx->f18.d;
    // 0x803319A4: nop

    // 0x803319A8: bc1f        L_80331A08
    if (!c1cs) {
        // 0x803319AC: nop
    
            goto L_80331A08;
    }
    // 0x803319AC: nop

    // 0x803319B0: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x803319B4: lh          $t8, 0x4992($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4992);
    // 0x803319B8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x803319BC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803319C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x803319C4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x803319C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803319CC: nop

    // 0x803319D0: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x803319D4: nop

    // 0x803319D8: bc1f        L_803319E8
    if (!c1cs) {
        // 0x803319DC: nop
    
            goto L_803319E8;
    }
    // 0x803319DC: nop

    // 0x803319E0: jal         0x803302D4
    // 0x803319E4: nop

    func_803302D4_unk_bin_2(rdram, ctx);
        goto after_2;
    // 0x803319E4: nop

    after_2:
L_803319E8:
    // 0x803319E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803319EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803319F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803319F4: lwc1        $f14, 0x6288($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6288);
    // 0x803319F8: jal         0x80331238
    // 0x803319FC: nop

    func_80331238_unk_bin_2(rdram, ctx);
        goto after_3;
    // 0x803319FC: nop

    after_3:
    // 0x80331A00: b           L_80331B80
    // 0x80331A04: nop

        goto L_80331B80;
    // 0x80331A04: nop

L_80331A08:
    // 0x80331A08: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A0C: lwc1        $f10, 0x628C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X628C);
    // 0x80331A10: nop

    // 0x80331A14: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80331A18: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331A1C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331A20: lwc1        $f16, 0x1A4C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1A4C);
    // 0x80331A24: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331A28: nop

    // 0x80331A2C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331A30: swc1        $f4, 0x1A4C($t9)
    MEM_W(0X1A4C, ctx->r25) = ctx->f4.u32l;
    // 0x80331A34: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331A38: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331A3C: lwc1        $f6, 0x1A50($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1A50);
    // 0x80331A40: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331A44: nop

    // 0x80331A48: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331A4C: swc1        $f10, 0x1A50($t0)
    MEM_W(0X1A50, ctx->r8) = ctx->f10.u32l;
    // 0x80331A50: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331A54: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331A58: lwc1        $f16, 0x1A54($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1A54);
    // 0x80331A5C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331A60: nop

    // 0x80331A64: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331A68: swc1        $f4, 0x1A54($t1)
    MEM_W(0X1A54, ctx->r9) = ctx->f4.u32l;
    // 0x80331A6C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331A70: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331A74: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A78: lwc1        $f6, 0x1A4C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1A4C);
    // 0x80331A7C: lwc1        $f11, 0x6290($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6290);
    // 0x80331A80: lwc1        $f10, 0x6294($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6294);
    // 0x80331A84: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331A88: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80331A8C: nop

    // 0x80331A90: bc1f        L_80331AC8
    if (!c1cs) {
        // 0x80331A94: nop
    
            goto L_80331AC8;
    }
    // 0x80331A94: nop

    // 0x80331A98: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A9C: lwc1        $f16, 0x6298($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6298);
    // 0x80331AA0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331AA4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331AA8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331AAC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331AB0: swc1        $f16, 0x1A54($t3)
    MEM_W(0X1A54, ctx->r11) = ctx->f16.u32l;
    // 0x80331AB4: lwc1        $f20, 0x1A54($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X1A54);
    // 0x80331AB8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331ABC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331AC0: swc1        $f20, 0x1A50($t4)
    MEM_W(0X1A50, ctx->r12) = ctx->f20.u32l;
    // 0x80331AC4: swc1        $f20, 0x1A4C($t5)
    MEM_W(0X1A4C, ctx->r13) = ctx->f20.u32l;
L_80331AC8:
    // 0x80331AC8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331ACC: lwc1        $f18, 0x629C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X629C);
    // 0x80331AD0: nop

    // 0x80331AD4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80331AD8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331ADC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331AE0: lwc1        $f4, 0x1A40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1A40);
    // 0x80331AE4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331AE8: nop

    // 0x80331AEC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331AF0: swc1        $f8, 0x1A40($t6)
    MEM_W(0X1A40, ctx->r14) = ctx->f8.u32l;
    // 0x80331AF4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AF8: lwc1        $f10, 0x62A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X62A0);
    // 0x80331AFC: nop

    // 0x80331B00: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80331B04: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331B08: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331B0C: lwc1        $f16, 0x1A44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1A44);
    // 0x80331B10: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331B14: nop

    // 0x80331B18: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331B1C: swc1        $f4, 0x1A44($t7)
    MEM_W(0X1A44, ctx->r15) = ctx->f4.u32l;
    // 0x80331B20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B24: lwc1        $f6, 0x62A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X62A4);
    // 0x80331B28: nop

    // 0x80331B2C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331B30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B38: lwc1        $f8, 0x1A48($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1A48);
    // 0x80331B3C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331B40: nop

    // 0x80331B44: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331B48: swc1        $f16, 0x1A48($t8)
    MEM_W(0X1A48, ctx->r24) = ctx->f16.u32l;
    // 0x80331B4C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B50: lwc1        $f18, 0x62A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X62A8);
    // 0x80331B54: nop

    // 0x80331B58: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80331B5C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331B60: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331B64: lwc1        $f4, 0x1A60($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1A60);
    // 0x80331B68: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80331B6C: nop

    // 0x80331B70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331B74: swc1        $f8, 0x1A60($t9)
    MEM_W(0X1A60, ctx->r25) = ctx->f8.u32l;
    // 0x80331B78: jal         0x80330FA0
    // 0x80331B7C: nop

    func_80330FA0_unk_bin_2(rdram, ctx);
        goto after_4;
    // 0x80331B7C: nop

    after_4:
L_80331B80:
    // 0x80331B80: b           L_80331B88
    // 0x80331B84: nop

        goto L_80331B88;
    // 0x80331B84: nop

L_80331B88:
    // 0x80331B88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331B8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331B90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331B94: jr          $ra
    // 0x80331B98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331B98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80335548_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335548: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033554C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335550: jal         0x80062EAC
    // 0x80335554: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80335554: nop

    after_0:
    // 0x80335558: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8033555C: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80335560: lh          $t6, 0x4990($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4990);
    // 0x80335564: nop

    // 0x80335568: bne         $t6, $zero, L_80335694
    if (ctx->r14 != 0) {
        // 0x8033556C: nop
    
            goto L_80335694;
    }
    // 0x8033556C: nop

    // 0x80335570: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80335574: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80335578: nop

    // 0x8033557C: bne         $t7, $zero, L_80335694
    if (ctx->r15 != 0) {
        // 0x80335580: nop
    
            goto L_80335694;
    }
    // 0x80335580: nop

    // 0x80335584: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80335588: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033558C: beq         $t8, $at, L_803355A0
    if (ctx->r24 == ctx->r1) {
        // 0x80335590: nop
    
            goto L_803355A0;
    }
    // 0x80335590: nop

    // 0x80335594: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335598: bne         $t8, $at, L_803355C8
    if (ctx->r24 != ctx->r1) {
        // 0x8033559C: nop
    
            goto L_803355C8;
    }
    // 0x8033559C: nop

L_803355A0:
    // 0x803355A0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803355A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803355A8: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803355AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803355B0: jal         0x800178D4
    // 0x803355B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x803355B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803355B8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x803355BC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803355C0: b           L_80335694
    // 0x803355C4: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
        goto L_80335694;
    // 0x803355C4: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
L_803355C8:
    // 0x803355C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803355CC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x803355D0: beq         $t0, $at, L_803355E4
    if (ctx->r8 == ctx->r1) {
        // 0x803355D4: nop
    
            goto L_803355E4;
    }
    // 0x803355D4: nop

    // 0x803355D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803355DC: bne         $t0, $at, L_8033560C
    if (ctx->r8 != ctx->r1) {
        // 0x803355E0: nop
    
            goto L_8033560C;
    }
    // 0x803355E0: nop

L_803355E4:
    // 0x803355E4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803355E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803355EC: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803355F0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803355F4: jal         0x800178D4
    // 0x803355F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x803355F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x803355FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80335600: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335604: b           L_80335694
    // 0x80335608: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
        goto L_80335694;
    // 0x80335608: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
L_8033560C:
    // 0x8033560C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80335610: addiu       $t2, $t2, -0x1D50
    ctx->r10 = ADD32(ctx->r10, -0X1D50);
    // 0x80335614: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80335618: nop

    // 0x8033561C: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x80335620: beq         $t4, $zero, L_80335650
    if (ctx->r12 == 0) {
        // 0x80335624: nop
    
            goto L_80335650;
    }
    // 0x80335624: nop

    // 0x80335628: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033562C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335630: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80335634: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335638: jal         0x800178D4
    // 0x8033563C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x8033563C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80335640: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80335644: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335648: b           L_80335694
    // 0x8033564C: sh          $t5, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r13;
        goto L_80335694;
    // 0x8033564C: sh          $t5, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r13;
L_80335650:
    // 0x80335650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335654: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80335658: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8033565C: nop

    // 0x80335660: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80335664: beq         $t8, $zero, L_80335694
    if (ctx->r24 == 0) {
        // 0x80335668: nop
    
            goto L_80335694;
    }
    // 0x80335668: nop

    // 0x8033566C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80335670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335674: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80335678: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033567C: jal         0x800178D4
    // 0x80335680: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80335680: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80335684: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335688: sw          $zero, 0x63BC($at)
    MEM_W(0X63BC, ctx->r1) = 0;
    // 0x8033568C: jal         0x8001D2C0
    // 0x80335690: nop

    func_8001D2C0(rdram, ctx);
        goto after_5;
    // 0x80335690: nop

    after_5:
L_80335694:
    // 0x80335694: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80335698: lh          $t9, 0x4990($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4990);
    // 0x8033569C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803356A0: beq         $t9, $at, L_803356B4
    if (ctx->r25 == ctx->r1) {
        // 0x803356A4: nop
    
            goto L_803356B4;
    }
    // 0x803356A4: nop

    // 0x803356A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803356AC: bne         $t9, $at, L_80335840
    if (ctx->r25 != ctx->r1) {
        // 0x803356B0: nop
    
            goto L_80335840;
    }
    // 0x803356B0: nop

L_803356B4:
    // 0x803356B4: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x803356B8: lb          $t0, 0x4803($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4803);
    // 0x803356BC: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803356C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803356C4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x803356C8: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x803356CC: addiu       $a3, $a3, 0x29B8
    ctx->r7 = ADD32(ctx->r7, 0X29B8);
    // 0x803356D0: lw          $a0, 0x6184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6184);
    // 0x803356D4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803356D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803356DC: jal         0x8001ABF4
    // 0x803356E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x803356E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_803356E4:
    // 0x803356E4: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x803356E8: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x803356EC: lh          $t3, 0x4990($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4990);
    // 0x803356F0: lb          $t2, 0x4803($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4803);
    // 0x803356F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803356F8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803356FC: sb          $t4, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = ctx->r12;
    // 0x80335700: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80335704: lb          $t5, 0x4803($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4803);
    // 0x80335708: nop

    // 0x8033570C: bgez        $t5, L_80335754
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80335710: nop
    
            goto L_80335754;
    }
    // 0x80335710: nop

    // 0x80335714: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80335718: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8033571C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80335720: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80335724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335728: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033572C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80335730: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80335734: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80335738: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8033573C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335740: lbu         $t1, 0x3B3C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3B3C);
    // 0x80335744: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80335748: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033574C: b           L_803357A4
    // 0x80335750: sb          $t2, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = ctx->r10;
        goto L_803357A4;
    // 0x80335750: sb          $t2, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = ctx->r10;
L_80335754:
    // 0x80335754: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80335758: lb          $t4, 0x4801($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4801);
    // 0x8033575C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80335760: lb          $t6, 0x4802($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4802);
    // 0x80335764: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335768: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8033576C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80335770: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80335774: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80335778: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8033577C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80335780: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80335784: lb          $t3, 0x4803($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4803);
    // 0x80335788: lbu         $t9, 0x3B3C($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3B3C);
    // 0x8033578C: nop

    // 0x80335790: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80335794: bne         $at, $zero, L_803357A4
    if (ctx->r1 != 0) {
        // 0x80335798: nop
    
            goto L_803357A4;
    }
    // 0x80335798: nop

    // 0x8033579C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803357A0: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
L_803357A4:
    // 0x803357A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x803357A8: lb          $a1, 0x4803($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4803);
    // 0x803357AC: jal         0x800600B8
    // 0x803357B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800600B8(rdram, ctx);
        goto after_7;
    // 0x803357B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x803357B4: beq         $v0, $zero, L_803357C4
    if (ctx->r2 == 0) {
        // 0x803357B8: nop
    
            goto L_803357C4;
    }
    // 0x803357B8: nop

    // 0x803357BC: b           L_803357CC
    // 0x803357C0: nop

        goto L_803357CC;
    // 0x803357C0: nop

L_803357C4:
    // 0x803357C4: b           L_803356E4
    // 0x803357C8: nop

        goto L_803356E4;
    // 0x803357C8: nop

L_803357CC:
    // 0x803357CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x803357D0: lb          $a0, 0x4803($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4803);
    // 0x803357D4: jal         0x80332E10
    // 0x803357D8: nop

    func_80332E10_unk_bin_2(rdram, ctx);
        goto after_8;
    // 0x803357D8: nop

    after_8:
    // 0x803357DC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803357E0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803357E4: lwc1        $f4, 0x4C24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4C24);
    // 0x803357E8: nop

    // 0x803357EC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x803357F0: swc1        $f6, 0x4444($t0)
    MEM_W(0X4444, ctx->r8) = ctx->f6.u32l;
    // 0x803357F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x803357F8: lb          $a0, 0x4803($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4803);
    // 0x803357FC: jal         0x80332BCC
    // 0x80335800: nop

    func_80332BCC_unk_bin_2(rdram, ctx);
        goto after_9;
    // 0x80335800: nop

    after_9:
    // 0x80335804: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80335808: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x8033580C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80335810: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335814: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80335818: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x8033581C: addiu       $a3, $a3, 0x29B8
    ctx->r7 = ADD32(ctx->r7, 0X29B8);
    // 0x80335820: lw          $a0, 0x6184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6184);
    // 0x80335824: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033582C: jal         0x8001ABF4
    // 0x80335830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x80335830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80335834: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335838: b           L_803358B0
    // 0x8033583C: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
        goto L_803358B0;
    // 0x8033583C: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
L_80335840:
    // 0x80335840: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80335844: lh          $t4, 0x4992($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4992);
    // 0x80335848: nop

    // 0x8033584C: beq         $t4, $zero, L_803358B0
    if (ctx->r12 == 0) {
        // 0x80335850: nop
    
            goto L_803358B0;
    }
    // 0x80335850: nop

    // 0x80335854: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80335858: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033585C: jal         0x80333E18
    // 0x80335860: nop

    func_80333E18_unk_bin_2(rdram, ctx);
        goto after_11;
    // 0x80335860: nop

    after_11:
    // 0x80335864: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80335868: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x8033586C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335870: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80335874: sh          $t5, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r13;
    // 0x80335878: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x8033587C: lh          $t8, 0x4992($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4992);
    // 0x80335880: nop

    // 0x80335884: bne         $t8, $zero, L_803358B0
    if (ctx->r24 != 0) {
        // 0x80335888: nop
    
            goto L_803358B0;
    }
    // 0x80335888: nop

    // 0x8033588C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80335890: lb          $t7, 0x4800($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4800);
    // 0x80335894: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80335898: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8033589C: sb          $t3, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r11;
    // 0x803358A0: jal         0x80332094
    // 0x803358A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80332094_unk_bin_2(rdram, ctx);
        goto after_12;
    // 0x803358A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x803358A8: b           L_803358B8
    // 0x803358AC: nop

        goto L_803358B8;
    // 0x803358AC: nop

L_803358B0:
    // 0x803358B0: b           L_803358B8
    // 0x803358B4: nop

        goto L_803358B8;
    // 0x803358B4: nop

L_803358B8:
    // 0x803358B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803358BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803358C0: jr          $ra
    // 0x803358C4: nop

    return;
    // 0x803358C4: nop

;}
RECOMP_FUNC void func_80332EA4_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332EA4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80332EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332EAC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80332EB0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80332EB4: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80332EB8: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80332EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332EC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332EC4: lbu         $t8, 0x39D4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39D4);
    // 0x80332EC8: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x80332ECC: blez        $t8, L_8033305C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80332ED0: nop
    
            goto L_8033305C;
    }
    // 0x80332ED0: nop

L_80332ED4:
    // 0x80332ED4: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80332ED8: lb          $t0, 0x4802($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4802);
    // 0x80332EDC: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x80332EE0: nop

    // 0x80332EE4: bne         $t9, $t0, L_80332F60
    if (ctx->r25 != ctx->r8) {
        // 0x80332EE8: nop
    
            goto L_80332F60;
    }
    // 0x80332EE8: nop

    // 0x80332EEC: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x80332EF0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80332EF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332EF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332EFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332F00: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F04: swc1        $f4, 0x6380($at)
    MEM_W(0X6380, ctx->r1) = ctx->f4.u32l;
    // 0x80332F08: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x80332F0C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80332F10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332F14: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F18: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332F1C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332F20: swc1        $f6, 0x6390($at)
    MEM_W(0X6390, ctx->r1) = ctx->f6.u32l;
    // 0x80332F24: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x80332F28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F2C: lwc1        $f8, 0x6318($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6318);
    // 0x80332F30: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F34: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80332F38: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332F3C: swc1        $f8, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->f8.u32l;
    // 0x80332F40: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x80332F44: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F48: lwc1        $f10, 0x631C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X631C);
    // 0x80332F4C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332F54: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332F58: b           L_80333028
    // 0x80332F5C: swc1        $f10, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->f10.u32l;
        goto L_80333028;
    // 0x80332F5C: swc1        $f10, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->f10.u32l;
L_80332F60:
    // 0x80332F60: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x80332F64: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80332F68: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332F6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332F70: lw          $t1, 0x6128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6128);
    // 0x80332F74: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332F78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332F7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332F80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332F88: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332F8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332F90: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x80332F94: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F98: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80332F9C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332FA0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332FA4: swc1        $f18, 0x6380($at)
    MEM_W(0X6380, ctx->r1) = ctx->f18.u32l;
    // 0x80332FA8: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x80332FAC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332FB0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332FB4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80332FB8: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80332FBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332FC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332FCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332FD4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332FD8: lh          $t8, 0x41F8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F8);
    // 0x80332FDC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332FE0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80332FE4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332FE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332FEC: swc1        $f6, 0x6390($at)
    MEM_W(0X6390, ctx->r1) = ctx->f6.u32l;
    // 0x80332FF0: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x80332FF4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332FF8: lwc1        $f8, 0x6320($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6320);
    // 0x80332FFC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333000: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80333004: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333008: swc1        $f8, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->f8.u32l;
    // 0x8033300C: lh          $t2, 0x4E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4E);
    // 0x80333010: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333014: lwc1        $f10, 0x6324($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6324);
    // 0x80333018: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033301C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333020: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333024: swc1        $f10, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->f10.u32l;
L_80333028:
    // 0x80333028: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8033302C: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80333030: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x80333034: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80333038: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8033303C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80333040: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x80333044: lbu         $t9, 0x39D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39D4);
    // 0x80333048: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x8033304C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80333050: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80333054: bne         $at, $zero, L_80332ED4
    if (ctx->r1 != 0) {
        // 0x80333058: sh          $t4, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r12;
            goto L_80332ED4;
    }
    // 0x80333058: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
L_8033305C:
    // 0x8033305C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80333060: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80333064: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80333068: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033306C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333070: lbu         $t3, 0x39D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39D4);
    // 0x80333074: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x80333078: blez        $t3, L_80333708
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8033307C: nop
    
            goto L_80333708;
    }
    // 0x8033307C: nop

L_80333080:
    // 0x80333080: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x80333084: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80333088: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8033308C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333090: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80333094: nop

    // 0x80333098: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8033309C: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x803330A0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803330A4: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x803330A8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803330AC: lw          $t7, 0x6134($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6134);
    // 0x803330B0: nop

    // 0x803330B4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x803330B8: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x803330BC: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803330C0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803330C4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803330C8: lw          $t2, 0x6140($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6140);
    // 0x803330CC: nop

    // 0x803330D0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x803330D4: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x803330D8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803330DC: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x803330E0: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803330E4: lw          $t4, 0x6158($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6158);
    // 0x803330E8: nop

    // 0x803330EC: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x803330F0: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x803330F4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803330F8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803330FC: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80333100: lw          $t5, 0x614C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X614C);
    // 0x80333104: nop

    // 0x80333108: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8033310C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80333110: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x80333114: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333118: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033311C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333120: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333124: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333128: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033312C: lwc1        $f16, 0x6380($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6380);
    // 0x80333130: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333134: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033313C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333140: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80333144: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80333148: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x8033314C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80333150: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333154: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333158: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x8033315C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333160: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333164: lwc1        $f18, 0x6390($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6390);
    // 0x80333168: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033316C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333174: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333178: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x8033317C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80333180: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x80333184: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333188: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033318C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333190: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80333194: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333198: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033319C: lwc1        $f4, 0x63A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x803331A0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803331A4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803331A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803331B0: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803331B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803331B8: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x803331BC: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x803331C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803331C4: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803331C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803331CC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803331D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803331D4: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x803331D8: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803331DC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803331E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331E4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803331E8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803331EC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803331F0: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x803331F4: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x803331F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803331FC: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80333200: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80333204: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333208: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033320C: lwc1        $f8, 0x6380($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6380);
    // 0x80333210: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80333214: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333218: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033321C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333220: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80333224: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333228: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x8033322C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333230: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333234: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333238: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033323C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333240: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333244: lwc1        $f10, 0x6390($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6390);
    // 0x80333248: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033324C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333250: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333254: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333258: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x8033325C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333260: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x80333264: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80333268: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033326C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333270: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80333274: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333278: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033327C: lwc1        $f16, 0x63A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80333280: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333284: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333288: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033328C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333290: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x80333294: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333298: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x8033329C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803332A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803332A4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803332A8: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x803332AC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803332B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803332B4: lwc1        $f18, 0x63B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x803332B8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803332BC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803332C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332C4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803332C8: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
    // 0x803332CC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803332D0: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x803332D4: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x803332D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803332DC: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803332E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803332E4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803332E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803332EC: lwc1        $f4, 0x63A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x803332F0: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803332F4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803332F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332FC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333300: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80333304: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80333308: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x8033330C: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80333310: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333314: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80333318: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8033331C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333320: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333324: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x80333328: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8033332C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333334: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333338: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8033333C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80333340: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333344: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333348: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033334C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333350: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333354: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333358: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033335C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80333360: lwc1        $f8, 0xC($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80333364: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x80333368: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8033336C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333370: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80333374: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333378: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8033337C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333380: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80333384: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80333388: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033338C: sub.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d - ctx->f18.d;
    // 0x80333390: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333394: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80333398: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8033339C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803333A0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x803333A4: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x803333A8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803333AC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803333B0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803333B4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803333B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803333BC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803333C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803333C4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803333C8: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x803333CC: lwc1        $f16, 0x10($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X10);
    // 0x803333D0: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x803333D4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803333D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803333DC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x803333E0: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803333E4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x803333E8: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803333EC: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x803333F0: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x803333F4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803333F8: sub.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f10.d - ctx->f18.d;
    // 0x803333FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333400: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80333404: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x80333408: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033340C: addu        $t3, $t2, $t5
    ctx->r11 = ADD32(ctx->r10, ctx->r13);
    // 0x80333410: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x80333414: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333418: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x8033341C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80333420: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333424: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333428: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033342C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333430: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333434: lwc1        $f6, 0x63A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80333438: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033343C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333444: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333448: swc1        $f6, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f6.u32l;
    // 0x8033344C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333450: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x80333454: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80333458: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033345C: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80333460: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333464: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333468: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033346C: lwc1        $f8, 0x63B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x80333470: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80333474: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333478: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033347C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333480: swc1        $f8, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f8.u32l;
    // 0x80333484: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80333488: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033348C: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80333490: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80333494: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333498: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x8033349C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803334A0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803334A4: addu        $t1, $t3, $t0
    ctx->r9 = ADD32(ctx->r11, ctx->r8);
    // 0x803334A8: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803334AC: lui         $at, 0x4047
    ctx->r1 = S32(0X4047 << 16);
    // 0x803334B0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x803334B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803334B8: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x803334BC: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x803334C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803334C4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803334C8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803334CC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803334D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803334D4: sub.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d - ctx->f4.d;
    // 0x803334D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803334DC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803334E0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x803334E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803334E8: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x803334EC: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    // 0x803334F0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x803334F4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803334F8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803334FC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333500: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333504: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333508: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033350C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80333510: addu        $t5, $t9, $t2
    ctx->r13 = ADD32(ctx->r25, ctx->r10);
    // 0x80333514: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80333518: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x8033351C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80333520: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333524: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80333528: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033352C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333530: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80333534: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80333538: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8033353C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80333540: sub.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f18.d - ctx->f4.d;
    // 0x80333544: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333548: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8033354C: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x80333550: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333554: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80333558: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x8033355C: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80333560: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333564: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80333568: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033356C: lwc1        $f8, 0x63A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80333570: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80333574: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80333578: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033357C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80333580: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80333584: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80333588: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8033358C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333590: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333594: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333598: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x8033359C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803335A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803335A4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803335A8: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x803335AC: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x803335B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803335B4: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x803335B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803335BC: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x803335C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x803335C4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803335C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803335CC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803335D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803335D4: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x803335D8: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x803335DC: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x803335E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803335E4: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x803335E8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803335EC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803335F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803335F4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803335F8: swc1        $f4, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f4.u32l;
    // 0x803335FC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80333600: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333604: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333608: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033360C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333610: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333614: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333618: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033361C: addu        $t0, $t4, $t6
    ctx->r8 = ADD32(ctx->r12, ctx->r14);
    // 0x80333620: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80333624: lui         $at, 0xC04D
    ctx->r1 = S32(0XC04D << 16);
    // 0x80333628: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8033362C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333630: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80333634: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333638: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033363C: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80333640: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333644: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333648: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033364C: sub.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d - ctx->f10.d;
    // 0x80333650: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333654: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333658: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x8033365C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333660: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80333664: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x80333668: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033366C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333670: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80333674: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80333678: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033367C: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80333680: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333684: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80333688: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x8033368C: lwc1        $f8, 0x10($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80333690: lui         $at, 0xC042
    ctx->r1 = S32(0XC042 << 16);
    // 0x80333694: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80333698: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033369C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x803336A0: mul.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803336A4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803336A8: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803336AC: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x803336B0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803336B4: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x803336B8: sub.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d - ctx->f10.d;
    // 0x803336BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803336C0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803336C4: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x803336C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803336CC: addu        $t8, $t0, $t1
    ctx->r24 = ADD32(ctx->r8, ctx->r9);
    // 0x803336D0: swc1        $f18, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f18.u32l;
    // 0x803336D4: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x803336D8: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x803336DC: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x803336E0: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x803336E4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803336E8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803336EC: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x803336F0: lbu         $t4, 0x39D4($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39D4);
    // 0x803336F4: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x803336F8: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803336FC: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80333700: bne         $at, $zero, L_80333080
    if (ctx->r1 != 0) {
        // 0x80333704: sh          $t6, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r14;
            goto L_80333080;
    }
    // 0x80333704: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
L_80333708:
    // 0x80333708: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8033370C: lb          $t0, 0x4802($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4802);
    // 0x80333710: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80333714: lw          $t8, 0x4994($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4994);
    // 0x80333718: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033371C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333720: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80333724: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x80333728: lw          $a3, 0x268($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X268);
    // 0x8033372C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333730: jal         0x8001ABF4
    // 0x80333734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80333734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80333738: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8033373C: lb          $t7, 0x4802($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4802);
    // 0x80333740: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80333744: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80333748: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8033374C: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x80333750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333754: jal         0x8001BC84
    // 0x80333758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_1;
    // 0x80333758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8033375C: jal         0x80332918
    // 0x80333760: nop

    func_80332918_unk_bin_2(rdram, ctx);
        goto after_2;
    // 0x80333760: nop

    after_2:
    // 0x80333764: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80333768: lb          $t9, 0x4801($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4801);
    // 0x8033376C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80333770: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80333774: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80333778: lw          $t2, 0x6080($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6080);
    // 0x8033377C: nop

    // 0x80333780: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80333784: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033378C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80333790: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80333794: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333798: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033379C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803337A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803337A4: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803337A8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803337AC: lwc1        $f14, 0x6374($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6374);
    // 0x803337B0: jal         0x80015538
    // 0x803337B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803337B4: nop

    after_3:
    // 0x803337B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803337BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337C0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803337C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803337C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803337CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803337D0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803337D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803337D8: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x803337DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803337E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337E4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803337E8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803337EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803337F0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803337F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803337F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803337FC: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333800: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333804: lwc1        $f14, 0x6378($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6378);
    // 0x80333808: jal         0x80015538
    // 0x8033380C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033380C: nop

    after_4:
    // 0x80333810: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333818: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8033381C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80333820: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333824: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80333828: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033382C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333830: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80333834: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80333838: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x8033383C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80333840: lb          $t5, 0x4802($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4802);
    // 0x80333844: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80333848: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8033384C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80333850: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80333854: sll         $t4, $t5, 3
    ctx->r12 = S32(ctx->r13 << 3);
    // 0x80333858: addu        $t0, $t2, $t4
    ctx->r8 = ADD32(ctx->r10, ctx->r12);
    // 0x8033385C: addiu       $t1, $t1, 0x3B3C
    ctx->r9 = ADD32(ctx->r9, 0X3B3C);
    // 0x80333860: addu        $t8, $t0, $t1
    ctx->r24 = ADD32(ctx->r8, ctx->r9);
    // 0x80333864: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80333868: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8033386C: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80333870: lbu         $t9, 0x1($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1);
    // 0x80333874: lw          $t7, 0x4994($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4994);
    // 0x80333878: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8033387C: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80333880: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333884: addu        $t5, $t7, $t3
    ctx->r13 = ADD32(ctx->r15, ctx->r11);
    // 0x80333888: lw          $t2, 0x10($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X10);
    // 0x8033388C: nop

    // 0x80333890: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x80333894: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80333898: nop

    // 0x8033389C: lbu         $t0, 0x0($t4)
    ctx->r8 = MEM_BU(ctx->r12, 0X0);
    // 0x803338A0: nop

    // 0x803338A4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x803338A8: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
L_803338AC:
    // 0x803338AC: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
L_803338B0:
    // 0x803338B0: lh          $t1, 0x4C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4C);
    // 0x803338B4: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x803338B8: sll         $t8, $t1, 3
    ctx->r24 = S32(ctx->r9 << 3);
    // 0x803338BC: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x803338C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803338C4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x803338C8: lw          $t6, 0x440C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X440C);
    // 0x803338CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803338D0: bne         $t6, $at, L_803338E0
    if (ctx->r14 != ctx->r1) {
        // 0x803338D4: nop
    
            goto L_803338E0;
    }
    // 0x803338D4: nop

    // 0x803338D8: b           L_8033395C
    // 0x803338DC: nop

        goto L_8033395C;
    // 0x803338DC: nop

L_803338E0:
    // 0x803338E0: lh          $t9, 0x4C($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4C);
    // 0x803338E4: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x803338E8: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x803338EC: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x803338F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803338F4: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x803338F8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803338FC: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80333900: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333904: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80333908: lw          $t3, 0x4410($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4410);
    // 0x8033390C: lw          $t4, 0x6164($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6164);
    // 0x80333910: nop

    // 0x80333914: bne         $t3, $t4, L_80333948
    if (ctx->r11 != ctx->r12) {
        // 0x80333918: nop
    
            goto L_80333948;
    }
    // 0x80333918: nop

    // 0x8033391C: lh          $t8, 0x4C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4C);
    // 0x80333920: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80333924: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x80333928: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033392C: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x80333930: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333934: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80333938: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033393C: sw          $t1, 0x440C($at)
    MEM_W(0X440C, ctx->r1) = ctx->r9;
    // 0x80333940: b           L_8033395C
    // 0x80333944: nop

        goto L_8033395C;
    // 0x80333944: nop

L_80333948:
    // 0x80333948: lh          $t9, 0x4C($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4C);
    // 0x8033394C: nop

    // 0x80333950: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80333954: b           L_803338B0
    // 0x80333958: sh          $t7, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r15;
        goto L_803338B0;
    // 0x80333958: sh          $t7, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r15;
L_8033395C:
    // 0x8033395C: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x80333960: nop

    // 0x80333964: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x80333968: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8033396C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80333970: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x80333974: bne         $at, $zero, L_803338AC
    if (ctx->r1 != 0) {
        // 0x80333978: sh          $t2, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r10;
            goto L_803338AC;
    }
    // 0x80333978: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x8033397C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80333980: jal         0x800608B8
    // 0x80333984: addiu       $a0, $a0, 0x440C
    ctx->r4 = ADD32(ctx->r4, 0X440C);
    func_800608B8(rdram, ctx);
        goto after_5;
    // 0x80333984: addiu       $a0, $a0, 0x440C
    ctx->r4 = ADD32(ctx->r4, 0X440C);
    after_5:
    // 0x80333988: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033398C: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x80333990: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x80333994: nop

    // 0x80333998: blez        $t8, L_80333CF4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8033399C: nop
    
            goto L_80333CF4;
    }
    // 0x8033399C: nop

L_803339A0:
    // 0x803339A0: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x803339A4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803339A8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x803339AC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x803339B0: lw          $t9, 0x6164($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6164);
    // 0x803339B4: nop

    // 0x803339B8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x803339BC: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x803339C0: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803339C4: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x803339C8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x803339CC: lw          $t2, 0x6184($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6184);
    // 0x803339D0: nop

    // 0x803339D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803339D8: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x803339DC: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803339E0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803339E4: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803339E8: lw          $t0, 0x61A0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X61A0);
    // 0x803339EC: nop

    // 0x803339F0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x803339F4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803339F8: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x803339FC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80333A00: lb          $t6, 0x4802($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4802);
    // 0x80333A04: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80333A08: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80333A0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333A10: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x80333A14: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x80333A18: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80333A1C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x80333A20: addu        $t7, $t1, $t9
    ctx->r15 = ADD32(ctx->r9, ctx->r25);
    // 0x80333A24: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80333A28: addu        $t2, $t7, $t5
    ctx->r10 = ADD32(ctx->r15, ctx->r13);
    // 0x80333A2C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333A30: lbu         $t3, 0x4808($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4808);
    // 0x80333A34: nop

    // 0x80333A38: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x80333A3C: sb          $t4, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r12;
    // 0x80333A40: lb          $t0, 0x4B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X4B);
    // 0x80333A44: nop

    // 0x80333A48: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x80333A4C: bne         $at, $zero, L_80333A58
    if (ctx->r1 != 0) {
        // 0x80333A50: nop
    
            goto L_80333A58;
    }
    // 0x80333A50: nop

    // 0x80333A54: sb          $zero, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = 0;
L_80333A58:
    // 0x80333A58: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333A5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333A60: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80333A64: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80333A68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333A6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333A70: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80333A74: lwc1        $f4, 0x4C20($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4C20);
    // 0x80333A78: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333A7C: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x80333A80: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x80333A84: lh          $a0, 0x4E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X4E);
    // 0x80333A88: jal         0x80332E10
    // 0x80333A8C: nop

    func_80332E10_unk_bin_2(rdram, ctx);
        goto after_6;
    // 0x80333A8C: nop

    after_6:
    // 0x80333A90: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80333A94: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80333A98: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80333A9C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80333AA0: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80333AA4: lwc1        $f16, 0x4C24($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4C24);
    // 0x80333AA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333AAC: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80333AB0: add.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80333AB4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333AB8: addu        $t3, $t2, $t7
    ctx->r11 = ADD32(ctx->r10, ctx->r15);
    // 0x80333ABC: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x80333AC0: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x80333AC4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80333AC8: sll         $t0, $t4, 3
    ctx->r8 = S32(ctx->r12 << 3);
    // 0x80333ACC: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x80333AD0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333AD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333AD8: addu        $a3, $t0, $t6
    ctx->r7 = ADD32(ctx->r8, ctx->r14);
    // 0x80333ADC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80333AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333AE4: jal         0x8001ABF4
    // 0x80333AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80333AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80333AEC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AF0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333AF4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333AF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333AFC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333B00: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80333B04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333B08: lwc1        $f10, 0x5550($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X5550);
    // 0x80333B0C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333B10: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x80333B14: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80333B18: lh          $a0, 0x4E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X4E);
    // 0x80333B1C: jal         0x80332E10
    // 0x80333B20: nop

    func_80332E10_unk_bin_2(rdram, ctx);
        goto after_8;
    // 0x80333B20: nop

    after_8:
    // 0x80333B24: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B28: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80333B2C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80333B30: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80333B34: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80333B38: lwc1        $f8, 0x5554($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X5554);
    // 0x80333B3C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333B40: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80333B44: add.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80333B48: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333B4C: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80333B50: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x80333B54: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80333B58: lb          $t6, 0x4803($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4803);
    // 0x80333B5C: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x80333B60: nop

    // 0x80333B64: bne         $t0, $t6, L_80333B90
    if (ctx->r8 != ctx->r14) {
        // 0x80333B68: nop
    
            goto L_80333B90;
    }
    // 0x80333B68: nop

    // 0x80333B6C: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80333B70: addiu       $a3, $a3, 0x29B8
    ctx->r7 = ADD32(ctx->r7, 0X29B8);
    // 0x80333B74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B78: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80333B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333B80: jal         0x8001ABF4
    // 0x80333B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x80333B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80333B88: b           L_80333BAC
    // 0x80333B8C: nop

        goto L_80333BAC;
    // 0x80333B8C: nop

L_80333B90:
    // 0x80333B90: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80333B94: addiu       $a3, $a3, 0x29B8
    ctx->r7 = ADD32(ctx->r7, 0X29B8);
    // 0x80333B98: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B9C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80333BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333BA4: jal         0x8001ABF4
    // 0x80333BA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x80333BA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80333BAC:
    // 0x80333BAC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BB0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80333BB4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333BB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333BBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333BC0: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80333BC4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333BC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333BCC: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80333BD0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333BD4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333BD8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80333BDC: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x80333BE0: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80333BE4: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80333BE8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333BEC: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x80333BF0: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x80333BF4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BF8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80333BFC: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80333C00: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333C04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333C08: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333C0C: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333C10: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333C14: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333C18: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80333C1C: addu        $t8, $t0, $t6
    ctx->r24 = ADD32(ctx->r8, ctx->r14);
    // 0x80333C20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333C24: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80333C28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333C2C: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80333C30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333C34: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80333C38: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80333C3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333C40: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80333C44: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x80333C48: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80333C4C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80333C50: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80333C54: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80333C58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333C5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333C60: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80333C64: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333C68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C6C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333C70: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x80333C74: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80333C78: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80333C7C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333C80: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333C84: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333C88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333C8C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333C90: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333C94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C98: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333C9C: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
    // 0x80333CA0: lb          $t0, 0x4B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X4B);
    // 0x80333CA4: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80333CA8: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x80333CAC: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x80333CB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333CB4: addiu       $t9, $t9, 0x2A40
    ctx->r25 = ADD32(ctx->r25, 0X2A40);
    // 0x80333CB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80333CBC: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x80333CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333CC4: jal         0x8001ABF4
    // 0x80333CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x80333CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80333CCC: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x80333CD0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80333CD4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333CD8: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x80333CDC: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80333CE0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80333CE4: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80333CE8: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80333CEC: bne         $at, $zero, L_803339A0
    if (ctx->r1 != 0) {
        // 0x80333CF0: nop
    
            goto L_803339A0;
    }
    // 0x80333CF0: nop

L_80333CF4:
    // 0x80333CF4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333CF8: nop

    // 0x80333CFC: sll         $t0, $t4, 16
    ctx->r8 = S32(ctx->r12 << 16);
    // 0x80333D00: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80333D04: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x80333D08: beq         $at, $zero, L_80333D84
    if (ctx->r1 == 0) {
        // 0x80333D0C: sh          $t4, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r12;
            goto L_80333D84;
    }
    // 0x80333D0C: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
L_80333D10:
    // 0x80333D10: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x80333D14: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80333D18: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80333D1C: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80333D20: lw          $a0, 0x6164($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6164);
    // 0x80333D24: jal         0x800604A8
    // 0x80333D28: nop

    func_800604A8(rdram, ctx);
        goto after_12;
    // 0x80333D28: nop

    after_12:
    // 0x80333D2C: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80333D30: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80333D34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D38: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80333D3C: lw          $a0, 0x6184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6184);
    // 0x80333D40: jal         0x800604A8
    // 0x80333D44: nop

    func_800604A8(rdram, ctx);
        goto after_13;
    // 0x80333D44: nop

    after_13:
    // 0x80333D48: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x80333D4C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80333D50: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333D54: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80333D58: lw          $a0, 0x61A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X61A0);
    // 0x80333D5C: jal         0x800604A8
    // 0x80333D60: nop

    func_800604A8(rdram, ctx);
        goto after_14;
    // 0x80333D60: nop

    after_14:
    // 0x80333D64: lh          $t2, 0x4E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4E);
    // 0x80333D68: nop

    // 0x80333D6C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80333D70: sll         $t0, $t4, 16
    ctx->r8 = S32(ctx->r12 << 16);
    // 0x80333D74: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80333D78: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x80333D7C: bne         $at, $zero, L_80333D10
    if (ctx->r1 != 0) {
        // 0x80333D80: sh          $t4, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r12;
            goto L_80333D10;
    }
    // 0x80333D80: sh          $t4, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r12;
L_80333D84:
    // 0x80333D84: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80333D88: addiu       $a3, $a3, 0x2980
    ctx->r7 = ADD32(ctx->r7, 0X2980);
    // 0x80333D8C: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x80333D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D94: jal         0x8001ABF4
    // 0x80333D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_15;
    // 0x80333D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80333D9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80333DA0: lb          $a0, 0x4803($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4803);
    // 0x80333DA4: jal         0x80332BCC
    // 0x80333DA8: nop

    func_80332BCC_unk_bin_2(rdram, ctx);
        goto after_16;
    // 0x80333DA8: nop

    after_16:
    // 0x80333DAC: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80333DB0: addiu       $a3, $a3, 0x29B8
    ctx->r7 = ADD32(ctx->r7, 0X29B8);
    // 0x80333DB4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x80333DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333DBC: jal         0x8001ABF4
    // 0x80333DC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_17;
    // 0x80333DC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80333DC4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80333DC8: lb          $a0, 0x4803($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4803);
    // 0x80333DCC: jal         0x80332E10
    // 0x80333DD0: nop

    func_80332E10_unk_bin_2(rdram, ctx);
        goto after_18;
    // 0x80333DD0: nop

    after_18:
    // 0x80333DD4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333DD8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80333DDC: lwc1        $f4, 0x4C24($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4C24);
    // 0x80333DE0: nop

    // 0x80333DE4: add.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80333DE8: swc1        $f16, 0x4444($t9)
    MEM_W(0X4444, ctx->r25) = ctx->f16.u32l;
    // 0x80333DEC: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80333DF0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x80333DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333DF8: jal         0x8001ABF4
    // 0x80333DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_19;
    // 0x80333DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80333E00: b           L_80333E08
    // 0x80333E04: nop

        goto L_80333E08;
    // 0x80333E04: nop

L_80333E08:
    // 0x80333E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333E0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80333E10: jr          $ra
    // 0x80333E14: nop

    return;
    // 0x80333E14: nop

;}
RECOMP_FUNC void SetGamePaused(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330004: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330008: sw          $t6, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r14;
    // 0x8033000C: jr          $ra
    // 0x80330010: nop

    return;
    // 0x80330010: nop

    // 0x80330014: jr          $ra
    // 0x80330018: nop

    return;
    // 0x80330018: nop

;}
RECOMP_FUNC void func_80335960_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335968: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033596C: jal         0x8001D1D4
    // 0x80335970: nop

    func_8001D1D4(rdram, ctx);
        goto after_0;
    // 0x80335970: nop

    after_0:
    // 0x80335974: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335978: bne         $v0, $at, L_80335990
    if (ctx->r2 != ctx->r1) {
        // 0x8033597C: nop
    
            goto L_80335990;
    }
    // 0x8033597C: nop

    // 0x80335980: b           L_80335B34
    // 0x80335984: nop

        goto L_80335B34;
    // 0x80335984: nop

    // 0x80335988: b           L_803359B8
    // 0x8033598C: nop

        goto L_803359B8;
    // 0x8033598C: nop

L_80335990:
    // 0x80335990: jal         0x8001D1D4
    // 0x80335994: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80335994: nop

    after_1:
    // 0x80335998: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033599C: bne         $v0, $at, L_803359B8
    if (ctx->r2 != ctx->r1) {
        // 0x803359A0: nop
    
            goto L_803359B8;
    }
    // 0x803359A0: nop

    // 0x803359A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803359A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803359AC: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x803359B0: b           L_80335B34
    // 0x803359B4: nop

        goto L_80335B34;
    // 0x803359B4: nop

L_803359B8:
    // 0x803359B8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x803359BC: lb          $s0, 0x4800($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4800);
    // 0x803359C0: nop

    // 0x803359C4: beq         $s0, $zero, L_803359F8
    if (ctx->r16 == 0) {
        // 0x803359C8: nop
    
            goto L_803359F8;
    }
    // 0x803359C8: nop

    // 0x803359CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803359D0: beq         $s0, $at, L_80335A08
    if (ctx->r16 == ctx->r1) {
        // 0x803359D4: nop
    
            goto L_80335A08;
    }
    // 0x803359D4: nop

    // 0x803359D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803359DC: beq         $s0, $at, L_80335A18
    if (ctx->r16 == ctx->r1) {
        // 0x803359E0: nop
    
            goto L_80335A18;
    }
    // 0x803359E0: nop

    // 0x803359E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803359E8: beq         $s0, $at, L_80335A28
    if (ctx->r16 == ctx->r1) {
        // 0x803359EC: nop
    
            goto L_80335A28;
    }
    // 0x803359EC: nop

    // 0x803359F0: b           L_80335A38
    // 0x803359F4: nop

        goto L_80335A38;
    // 0x803359F4: nop

L_803359F8:
    // 0x803359F8: jal         0x80334BE0
    // 0x803359FC: nop

    func_80334BE0_unk_bin_2(rdram, ctx);
        goto after_2;
    // 0x803359FC: nop

    after_2:
    // 0x80335A00: b           L_80335A40
    // 0x80335A04: nop

        goto L_80335A40;
    // 0x80335A04: nop

L_80335A08:
    // 0x80335A08: jal         0x80334FD0
    // 0x80335A0C: nop

    func_80334FD0_unk_bin_2(rdram, ctx);
        goto after_3;
    // 0x80335A0C: nop

    after_3:
    // 0x80335A10: b           L_80335A40
    // 0x80335A14: nop

        goto L_80335A40;
    // 0x80335A14: nop

L_80335A18:
    // 0x80335A18: jal         0x80335548
    // 0x80335A1C: nop

    func_80335548_unk_bin_2(rdram, ctx);
        goto after_4;
    // 0x80335A1C: nop

    after_4:
    // 0x80335A20: b           L_80335A40
    // 0x80335A24: nop

        goto L_80335A40;
    // 0x80335A24: nop

L_80335A28:
    // 0x80335A28: jal         0x803358C8
    // 0x80335A2C: nop

    func_803358C8_unk_bin_2(rdram, ctx);
        goto after_5;
    // 0x80335A2C: nop

    after_5:
    // 0x80335A30: b           L_80335A40
    // 0x80335A34: nop

        goto L_80335A40;
    // 0x80335A34: nop

L_80335A38:
    // 0x80335A38: b           L_80335A40
    // 0x80335A3C: nop

        goto L_80335A40;
    // 0x80335A3C: nop

L_80335A40:
    // 0x80335A40: jal         0x8001994C
    // 0x80335A44: nop

    func_8001994C(rdram, ctx);
        goto after_6;
    // 0x80335A44: nop

    after_6:
    // 0x80335A48: jal         0x800628C0
    // 0x80335A4C: nop

    func_800628C0(rdram, ctx);
        goto after_7;
    // 0x80335A4C: nop

    after_7:
    // 0x80335A50: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_80335A54:
    // 0x80335A54: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80335A58: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80335A5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335A60: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80335A64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335A68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335A6C: lh          $t9, 0x4998($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4998);
    // 0x80335A70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335A74: bne         $t9, $at, L_80335A84
    if (ctx->r25 != ctx->r1) {
        // 0x80335A78: nop
    
            goto L_80335A84;
    }
    // 0x80335A78: nop

    // 0x80335A7C: b           L_80335B2C
    // 0x80335A80: nop

        goto L_80335B2C;
    // 0x80335A80: nop

L_80335A84:
    // 0x80335A84: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80335A88: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80335A8C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80335A90: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80335A94: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335A98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335A9C: lh          $t2, 0x49A0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X49A0);
    // 0x80335AA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335AA4: beq         $t2, $at, L_80335AF4
    if (ctx->r10 == ctx->r1) {
        // 0x80335AA8: nop
    
            goto L_80335AF4;
    }
    // 0x80335AA8: nop

    // 0x80335AAC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80335AB0: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80335AB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335AB8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80335ABC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335AC0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80335AC4: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80335AC8: jal         0x8001CEF4
    // 0x80335ACC: nop

    func_8001CEF4(rdram, ctx);
        goto after_8;
    // 0x80335ACC: nop

    after_8:
    // 0x80335AD0: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80335AD4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80335AD8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80335ADC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80335AE0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80335AE4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80335AE8: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80335AEC: jal         0x8001CD20
    // 0x80335AF0: nop

    func_8001CD20(rdram, ctx);
        goto after_9;
    // 0x80335AF0: nop

    after_9:
L_80335AF4:
    // 0x80335AF4: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80335AF8: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80335AFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335B00: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80335B04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335B08: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80335B0C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80335B10: jal         0x8001AD6C
    // 0x80335B14: nop

    func_8001AD6C(rdram, ctx);
        goto after_10;
    // 0x80335B14: nop

    after_10:
    // 0x80335B18: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80335B1C: nop

    // 0x80335B20: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80335B24: b           L_80335A54
    // 0x80335B28: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
        goto L_80335A54;
    // 0x80335B28: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
L_80335B2C:
    // 0x80335B2C: b           L_80335B34
    // 0x80335B30: nop

        goto L_80335B34;
    // 0x80335B30: nop

L_80335B34:
    // 0x80335B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335B38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335B3C: jr          $ra
    // 0x80335B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330180_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330180: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330184: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330188: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033018C: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x80330190: lb          $s0, 0x63C4($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X63C4);
    // 0x80330194: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330198: beq         $s0, $at, L_803301B4
    if (ctx->r16 == ctx->r1) {
        // 0x8033019C: nop
    
            goto L_803301B4;
    }
    // 0x8033019C: nop

    // 0x803301A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803301A4: beq         $s0, $at, L_80330220
    if (ctx->r16 == ctx->r1) {
        // 0x803301A8: nop
    
            goto L_80330220;
    }
    // 0x803301A8: nop

    // 0x803301AC: b           L_8033028C
    // 0x803301B0: nop

        goto L_8033028C;
    // 0x803301B0: nop

L_803301B4:
    // 0x803301B4: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x803301B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803301BC: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x803301C0: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x803301C4: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    // 0x803301C8: jal         0x80063200
    // 0x803301CC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_80063200(rdram, ctx);
        goto after_0;
    // 0x803301CC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x803301D0: jal         0x8006357C
    // 0x803301D4: nop

    func_8006357C(rdram, ctx);
        goto after_1;
    // 0x803301D4: nop

    after_1:
    // 0x803301D8: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803301DC: addiu       $a3, $a3, 0x61BC
    ctx->r7 = ADD32(ctx->r7, 0X61BC);
    // 0x803301E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803301E4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x803301E8: jal         0x80063C58
    // 0x803301EC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_80063C58(rdram, ctx);
        goto after_2;
    // 0x803301EC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_2:
    // 0x803301F0: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803301F4: addiu       $a3, $a3, 0x61BC
    ctx->r7 = ADD32(ctx->r7, 0X61BC);
    // 0x803301F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803301FC: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330200: jal         0x80063C58
    // 0x80330204: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063C58(rdram, ctx);
        goto after_3;
    // 0x80330204: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_3:
    // 0x80330208: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x8033020C: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x80330210: jal         0x80063BE8
    // 0x80330214: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063BE8(rdram, ctx);
        goto after_4;
    // 0x80330214: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_4:
    // 0x80330218: b           L_8033028C
    // 0x8033021C: nop

        goto L_8033028C;
    // 0x8033021C: nop

L_80330220:
    // 0x80330220: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x80330224: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330228: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x8033022C: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330230: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    // 0x80330234: jal         0x80063200
    // 0x80330238: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_80063200(rdram, ctx);
        goto after_5;
    // 0x80330238: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_5:
    // 0x8033023C: jal         0x8006357C
    // 0x80330240: nop

    func_8006357C(rdram, ctx);
        goto after_6;
    // 0x80330240: nop

    after_6:
    // 0x80330244: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330248: addiu       $a3, $a3, 0x61BC
    ctx->r7 = ADD32(ctx->r7, 0X61BC);
    // 0x8033024C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330250: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80330254: jal         0x80063C58
    // 0x80330258: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_80063C58(rdram, ctx);
        goto after_7;
    // 0x80330258: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_7:
    // 0x8033025C: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330260: addiu       $a3, $a3, 0x61BC
    ctx->r7 = ADD32(ctx->r7, 0X61BC);
    // 0x80330264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330268: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x8033026C: jal         0x80063C58
    // 0x80330270: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063C58(rdram, ctx);
        goto after_8;
    // 0x80330270: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_8:
    // 0x80330274: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x80330278: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    // 0x8033027C: jal         0x80063BE8
    // 0x80330280: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063BE8(rdram, ctx);
        goto after_9;
    // 0x80330280: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_9:
    // 0x80330284: b           L_8033028C
    // 0x80330288: nop

        goto L_8033028C;
    // 0x80330288: nop

L_8033028C:
    // 0x8033028C: b           L_80330294
    // 0x80330290: nop

        goto L_80330294;
    // 0x80330290: nop

L_80330294:
    // 0x80330294: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330298: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033029C: jr          $ra
    // 0x803302A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803302A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803302A4_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803302A8: sb          $a0, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = ctx->r4;
    // 0x803302AC: jr          $ra
    // 0x803302B0: nop

    return;
    // 0x803302B0: nop

    // 0x803302B4: jr          $ra
    // 0x803302B8: nop

    return;
    // 0x803302B8: nop

;}
RECOMP_FUNC void func_80333E18_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333E20: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80333E24: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80333E28: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80333E2C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80333E30: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80333E34: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80333E38: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80333E3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333E40: nop

    // 0x80333E44: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x80333E48: nop

    // 0x80333E4C: bc1f        L_80334210
    if (!c1cs) {
        // 0x80333E50: nop
    
            goto L_80334210;
    }
    // 0x80333E50: nop

    // 0x80333E54: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80333E58: lb          $t7, 0x4801($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4801);
    // 0x80333E5C: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80333E60: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333E64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333E68: lbu         $t9, 0x39D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39D4);
    // 0x80333E6C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80333E70: blez        $t9, L_80334180
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80333E74: nop
    
            goto L_80334180;
    }
    // 0x80333E74: nop

L_80333E78:
    // 0x80333E78: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80333E7C: lb          $t1, 0x4802($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4802);
    // 0x80333E80: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80333E84: nop

    // 0x80333E88: bne         $t0, $t1, L_803340BC
    if (ctx->r8 != ctx->r9) {
        // 0x80333E8C: nop
    
            goto L_803340BC;
    }
    // 0x80333E8C: nop

    // 0x80333E90: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80333E94: lb          $t2, 0x4802($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4802);
    // 0x80333E98: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80333E9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333EA0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333EA4: lw          $t4, 0x6128($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6128);
    // 0x80333EA8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333EAC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333EB0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333EB4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333EB8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333EBC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333EC0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333EC4: lh          $t6, 0x41F6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F6);
    // 0x80333EC8: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x80333ECC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80333ED0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80333ED4: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80333ED8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333EDC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333EE0: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x80333EE4: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80333EE8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80333EEC: mul.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80333EF0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333EF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333EF8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333EFC: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x80333F00: swc1        $f10, 0x6380($at)
    MEM_W(0X6380, ctx->r1) = ctx->f10.u32l;
    // 0x80333F04: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80333F08: lb          $t9, 0x4802($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4802);
    // 0x80333F0C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80333F10: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333F14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333F18: lw          $t1, 0x6128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6128);
    // 0x80333F1C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333F20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333F24: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333F28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333F2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333F30: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333F34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F38: lh          $t3, 0x41F8($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F8);
    // 0x80333F3C: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x80333F40: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80333F44: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80333F48: cvt.d.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
    // 0x80333F4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333F50: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333F54: sub.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d - ctx->f4.d;
    // 0x80333F58: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80333F5C: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x80333F60: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80333F64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333F68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333F6C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333F70: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x80333F74: swc1        $f18, 0x6390($at)
    MEM_W(0X6390, ctx->r1) = ctx->f18.u32l;
    // 0x80333F78: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80333F7C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80333F80: addiu       $t8, $t8, 0x6380
    ctx->r24 = ADD32(ctx->r24, 0X6380);
    // 0x80333F84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333F88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333F8C: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80333F90: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80333F94: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80333F98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333F9C: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80333FA0: nop

    // 0x80333FA4: div.d       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f8.d);
    // 0x80333FA8: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x80333FAC: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x80333FB0: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80333FB4: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80333FB8: addiu       $t2, $t2, 0x6390
    ctx->r10 = ADD32(ctx->r10, 0X6390);
    // 0x80333FBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333FC0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80333FC4: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80333FC8: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80333FCC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80333FD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333FD4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80333FD8: nop

    // 0x80333FDC: div.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x80333FE0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80333FE4: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x80333FE8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333FEC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333FF0: lwc1        $f5, 0x6328($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6328);
    // 0x80333FF4: lwc1        $f4, 0x632C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X632C);
    // 0x80333FF8: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x80333FFC: mul.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80334000: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80334004: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334008: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033400C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334010: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x80334014: swc1        $f8, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->f8.u32l;
    // 0x80334018: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033401C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80334020: lwc1        $f19, 0x6330($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6330);
    // 0x80334024: lwc1        $f18, 0x6334($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6334);
    // 0x80334028: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8033402C: mul.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80334030: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80334034: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033403C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334040: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x80334044: swc1        $f16, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->f16.u32l;
    // 0x80334048: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x8033404C: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80334050: addiu       $t0, $t0, 0x63A0
    ctx->r8 = ADD32(ctx->r8, 0X63A0);
    // 0x80334054: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334058: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8033405C: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80334060: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80334064: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80334068: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033406C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80334070: nop

    // 0x80334074: div.d       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x80334078: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8033407C: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x80334080: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80334084: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80334088: addiu       $t4, $t4, 0x63B0
    ctx->r12 = ADD32(ctx->r12, 0X63B0);
    // 0x8033408C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334090: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80334094: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80334098: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x8033409C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803340A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803340A4: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x803340A8: nop

    // 0x803340AC: div.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x803340B0: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x803340B4: b           L_8033414C
    // 0x803340B8: swc1        $f18, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f18.u32l;
        goto L_8033414C;
    // 0x803340B8: swc1        $f18, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f18.u32l;
L_803340BC:
    // 0x803340BC: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x803340C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803340C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803340C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803340D0: swc1        $f4, 0x6380($at)
    MEM_W(0X6380, ctx->r1) = ctx->f4.u32l;
    // 0x803340D4: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803340D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803340DC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803340E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803340E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803340E8: swc1        $f16, 0x6390($at)
    MEM_W(0X6390, ctx->r1) = ctx->f16.u32l;
    // 0x803340EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803340F0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803340F4: lwc1        $f7, 0x6338($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6338);
    // 0x803340F8: lwc1        $f6, 0x633C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X633C);
    // 0x803340FC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80334100: mul.d       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x80334104: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80334108: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033410C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334110: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334114: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80334118: swc1        $f4, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->f4.u32l;
    // 0x8033411C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334120: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80334124: lwc1        $f11, 0x6340($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6340);
    // 0x80334128: lwc1        $f10, 0x6344($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6344);
    // 0x8033412C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80334130: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80334134: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80334138: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033413C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334140: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334144: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x80334148: swc1        $f18, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->f18.u32l;
L_8033414C:
    // 0x8033414C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80334150: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80334154: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80334158: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8033415C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334160: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334164: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80334168: lbu         $t0, 0x39D4($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X39D4);
    // 0x8033416C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80334170: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80334174: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80334178: bne         $at, $zero, L_80333E78
    if (ctx->r1 != 0) {
        // 0x8033417C: sh          $t5, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r13;
            goto L_80333E78;
    }
    // 0x8033417C: sh          $t5, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r13;
L_80334180:
    // 0x80334180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80334184: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334188: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033418C: nop

    // 0x80334190: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x80334194: nop

    // 0x80334198: bc1f        L_80334204
    if (!c1cs) {
        // 0x8033419C: nop
    
            goto L_80334204;
    }
    // 0x8033419C: nop

    // 0x803341A0: jal         0x80332918
    // 0x803341A4: nop

    func_80332918_unk_bin_2(rdram, ctx);
        goto after_0;
    // 0x803341A4: nop

    after_0:
    // 0x803341A8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803341AC: lwc1        $f8, 0x6374($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6374);
    // 0x803341B0: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x803341B4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803341B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803341BC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803341C0: nop

    // 0x803341C4: div.d       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x803341C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803341CC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803341D0: swc1        $f4, 0x6374($at)
    MEM_W(0X6374, ctx->r1) = ctx->f4.u32l;
    // 0x803341D4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803341D8: lwc1        $f16, 0x6378($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6378);
    // 0x803341DC: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x803341E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803341E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803341E8: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x803341EC: nop

    // 0x803341F0: div.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x803341F4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803341F8: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x803341FC: b           L_80334210
    // 0x80334200: swc1        $f18, 0x6378($at)
    MEM_W(0X6378, ctx->r1) = ctx->f18.u32l;
        goto L_80334210;
    // 0x80334200: swc1        $f18, 0x6378($at)
    MEM_W(0X6378, ctx->r1) = ctx->f18.u32l;
L_80334204:
    // 0x80334204: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80334208: jal         0x80060628
    // 0x8033420C: addiu       $a0, $a0, 0x440C
    ctx->r4 = ADD32(ctx->r4, 0X440C);
    func_80060628(rdram, ctx);
        goto after_1;
    // 0x8033420C: addiu       $a0, $a0, 0x440C
    ctx->r4 = ADD32(ctx->r4, 0X440C);
    after_1:
L_80334210:
    // 0x80334210: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80334214: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80334218: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8033421C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334220: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334224: lbu         $t3, 0x39D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39D4);
    // 0x80334228: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x8033422C: blez        $t3, L_80334AA8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80334230: nop
    
            goto L_80334AA8;
    }
    // 0x80334230: nop

L_80334234:
    // 0x80334234: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80334238: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033423C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334240: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334244: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80334248: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033424C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334250: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334254: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334258: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033425C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334260: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334264: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334268: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033426C: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80334270: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80334274: lwc1        $f16, 0x6380($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6380);
    // 0x80334278: nop

    // 0x8033427C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80334280: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x80334284: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80334288: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x8033428C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334290: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334294: lw          $t2, 0x6128($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6128);
    // 0x80334298: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033429C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803342A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803342A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803342A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803342AC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803342B0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803342B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803342B8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803342BC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x803342C0: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803342C4: lwc1        $f6, 0x6390($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6390);
    // 0x803342C8: nop

    // 0x803342CC: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x803342D0: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x803342D4: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803342D8: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803342DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803342E0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x803342E4: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x803342E8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803342EC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803342F0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803342F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803342F8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803342FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334300: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334304: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334308: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033430C: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x80334310: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80334314: lwc1        $f16, 0x63A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80334318: nop

    // 0x8033431C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80334320: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x80334324: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80334328: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033432C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334330: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80334334: lw          $t1, 0x6128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6128);
    // 0x80334338: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033433C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80334340: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80334344: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334348: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x8033434C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334350: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334354: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334358: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033435C: addu        $t5, $t6, $t8
    ctx->r13 = ADD32(ctx->r14, ctx->r24);
    // 0x80334360: lwc1        $f10, 0x10($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80334364: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x80334368: nop

    // 0x8033436C: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80334370: swc1        $f18, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f18.u32l;
    // 0x80334374: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80334378: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x8033437C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80334380: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80334384: lw          $t9, 0x6134($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6134);
    // 0x80334388: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033438C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80334390: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80334394: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334398: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x8033439C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803343A0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803343A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803343A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803343AC: addu        $t1, $t2, $t3
    ctx->r9 = ADD32(ctx->r10, ctx->r11);
    // 0x803343B0: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803343B4: lwc1        $f16, 0x6380($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6380);
    // 0x803343B8: nop

    // 0x803343BC: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x803343C0: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x803343C4: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x803343C8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803343CC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803343D0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x803343D4: lw          $t4, 0x6134($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6134);
    // 0x803343D8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803343DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803343E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803343E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803343E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803343EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803343F0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803343F4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803343F8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803343FC: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x80334400: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334404: lwc1        $f6, 0x6390($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6390);
    // 0x80334408: nop

    // 0x8033440C: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80334410: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x80334414: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80334418: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x8033441C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334420: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80334424: lw          $t0, 0x6134($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6134);
    // 0x80334428: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033442C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334430: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334434: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334438: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033443C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334440: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80334444: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334448: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033444C: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x80334450: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80334454: lwc1        $f16, 0x63A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80334458: nop

    // 0x8033445C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80334460: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
    // 0x80334464: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80334468: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x8033446C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334474: lw          $t8, 0x6134($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6134);
    // 0x80334478: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033447C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334480: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334484: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334488: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033448C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334490: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80334494: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334498: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033449C: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x803344A0: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x803344A4: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x803344A8: nop

    // 0x803344AC: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x803344B0: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
    // 0x803344B4: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x803344B8: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803344BC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x803344C0: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x803344C4: lw          $t3, 0x6140($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6140);
    // 0x803344C8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803344CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803344D0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803344D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803344D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803344DC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803344E0: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803344E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803344E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803344EC: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x803344F0: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x803344F4: lwc1        $f16, 0x63A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x803344F8: nop

    // 0x803344FC: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80334500: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x80334504: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80334508: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x8033450C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80334510: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80334514: lw          $t7, 0x6140($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6140);
    // 0x80334518: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033451C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80334520: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80334524: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334528: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8033452C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334530: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80334534: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334538: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033453C: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80334540: lwc1        $f10, 0x10($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80334544: lwc1        $f6, 0x63B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x80334548: nop

    // 0x8033454C: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80334550: swc1        $f18, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f18.u32l;
    // 0x80334554: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80334558: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033455C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334560: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334564: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80334568: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033456C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334570: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334574: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334578: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033457C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334580: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334584: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80334588: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033458C: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80334590: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x80334594: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334598: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8033459C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803345A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803345A4: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803345A8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803345AC: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x803345B0: mul.d       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x803345B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803345B8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x803345BC: lw          $t2, 0x6140($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6140);
    // 0x803345C0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x803345C4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803345C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803345CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803345D0: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x803345D4: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x803345D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803345DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803345E0: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x803345E4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803345E8: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x803345EC: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x803345F0: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803345F4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803345F8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803345FC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80334600: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80334604: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80334608: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033460C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334610: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334614: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334618: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033461C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80334620: addu        $t5, $t0, $t1
    ctx->r13 = ADD32(ctx->r8, ctx->r9);
    // 0x80334624: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80334628: lwc1        $f8, 0x10($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X10);
    // 0x8033462C: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x80334630: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80334634: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80334638: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033463C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334640: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80334644: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80334648: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8033464C: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80334650: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334654: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334658: lw          $t9, 0x6140($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6140);
    // 0x8033465C: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x80334660: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80334664: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80334668: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8033466C: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80334670: sub.d       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f16.d - ctx->f10.d;
    // 0x80334674: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334678: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8033467C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80334680: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334684: addu        $t8, $t4, $t1
    ctx->r24 = ADD32(ctx->r12, ctx->r9);
    // 0x80334688: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
    // 0x8033468C: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80334690: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80334694: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80334698: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033469C: lw          $t6, 0x6158($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6158);
    // 0x803346A0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803346A4: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x803346A8: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803346AC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803346B0: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803346B4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803346B8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803346BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803346C0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803346C4: addu        $t7, $t2, $t3
    ctx->r15 = ADD32(ctx->r10, ctx->r11);
    // 0x803346C8: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x803346CC: lwc1        $f4, 0x63A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x803346D0: nop

    // 0x803346D4: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803346D8: swc1        $f16, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f16.u32l;
    // 0x803346DC: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x803346E0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803346E4: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x803346E8: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x803346EC: lw          $t1, 0x6158($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6158);
    // 0x803346F0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803346F4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x803346F8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x803346FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334700: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x80334704: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334708: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033470C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334710: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334714: addu        $t6, $t8, $t0
    ctx->r14 = ADD32(ctx->r24, ctx->r8);
    // 0x80334718: lwc1        $f10, 0x10($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8033471C: lwc1        $f8, 0x63B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x80334720: nop

    // 0x80334724: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80334728: swc1        $f6, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f6.u32l;
    // 0x8033472C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80334730: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80334734: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334738: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033473C: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x80334740: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334744: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334748: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033474C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334750: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334754: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334758: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033475C: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80334760: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80334764: lwc1        $f18, 0xC($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80334768: lui         $at, 0x4047
    ctx->r1 = S32(0X4047 << 16);
    // 0x8033476C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334770: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80334774: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334778: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033477C: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80334780: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334784: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80334788: mul.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8033478C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334790: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334794: lw          $t4, 0x6158($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6158);
    // 0x80334798: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033479C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803347A0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803347A4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803347A8: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x803347AC: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x803347B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803347B4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803347B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803347BC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803347C0: addu        $t2, $t6, $t9
    ctx->r10 = ADD32(ctx->r14, ctx->r25);
    // 0x803347C4: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x803347C8: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x803347CC: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803347D0: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x803347D4: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x803347D8: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x803347DC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803347E0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803347E4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803347E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803347EC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803347F0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803347F4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803347F8: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x803347FC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80334800: lwc1        $f16, 0x10($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80334804: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x80334808: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033480C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80334810: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334814: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334818: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x8033481C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80334820: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80334824: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80334828: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033482C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80334830: lw          $t9, 0x6158($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6158);
    // 0x80334834: addu        $t6, $t4, $t0
    ctx->r14 = ADD32(ctx->r12, ctx->r8);
    // 0x80334838: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8033483C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80334840: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80334844: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80334848: sub.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d - ctx->f10.d;
    // 0x8033484C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334850: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80334854: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x80334858: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033485C: addu        $t7, $t2, $t0
    ctx->r15 = ADD32(ctx->r10, ctx->r8);
    // 0x80334860: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80334864: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80334868: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x8033486C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80334870: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80334874: lw          $t5, 0x614C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X614C);
    // 0x80334878: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033487C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334880: lwc1        $f6, 0x63A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80334884: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80334888: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8033488C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80334890: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80334894: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334898: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033489C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803348A0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803348A4: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x803348A8: mul.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803348AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803348B0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803348B4: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x803348B8: lwc1        $f16, 0xC($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803348BC: nop

    // 0x803348C0: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x803348C4: add.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f8.d + ctx->f10.d;
    // 0x803348C8: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x803348CC: swc1        $f18, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f18.u32l;
    // 0x803348D0: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x803348D4: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803348D8: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x803348DC: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x803348E0: lw          $t0, 0x614C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X614C);
    // 0x803348E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803348E8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803348EC: lwc1        $f4, 0x63B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63B0);
    // 0x803348F0: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x803348F4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x803348F8: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x803348FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80334900: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334904: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334908: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033490C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80334910: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80334914: mul.d       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x80334918: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033491C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334920: addu        $t3, $t7, $t8
    ctx->r11 = ADD32(ctx->r15, ctx->r24);
    // 0x80334924: lwc1        $f6, 0x10($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80334928: nop

    // 0x8033492C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x80334930: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x80334934: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x80334938: swc1        $f16, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f16.u32l;
    // 0x8033493C: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80334940: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80334944: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80334948: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033494C: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x80334950: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334954: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80334958: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8033495C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334960: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80334964: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334968: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033496C: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x80334970: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80334974: lwc1        $f8, 0xC($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80334978: lui         $at, 0xC04D
    ctx->r1 = S32(0XC04D << 16);
    // 0x8033497C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334980: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80334984: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334988: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033498C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80334990: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334994: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80334998: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x8033499C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803349A0: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x803349A4: lw          $t8, 0x614C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X614C);
    // 0x803349A8: addu        $t7, $t0, $t9
    ctx->r15 = ADD32(ctx->r8, ctx->r25);
    // 0x803349AC: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803349B0: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x803349B4: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803349B8: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x803349BC: sub.d       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f16.d - ctx->f10.d;
    // 0x803349C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803349C4: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803349C8: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x803349CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803349D0: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x803349D4: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x803349D8: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x803349DC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803349E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803349E4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803349E8: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x803349EC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803349F0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803349F4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803349F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803349FC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334A00: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334A04: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80334A08: addu        $t4, $t0, $t7
    ctx->r12 = ADD32(ctx->r8, ctx->r15);
    // 0x80334A0C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334A10: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80334A14: lui         $at, 0xC042
    ctx->r1 = S32(0XC042 << 16);
    // 0x80334A18: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334A1C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80334A20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334A24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334A28: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80334A2C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334A30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80334A34: mul.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x80334A38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334A3C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80334A40: lw          $t9, 0x614C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X614C);
    // 0x80334A44: addu        $t3, $t8, $t7
    ctx->r11 = ADD32(ctx->r24, ctx->r15);
    // 0x80334A48: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80334A4C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80334A50: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80334A54: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80334A58: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x80334A5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334A60: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80334A64: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80334A68: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334A6C: addu        $t1, $t5, $t7
    ctx->r9 = ADD32(ctx->r13, ctx->r15);
    // 0x80334A70: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x80334A74: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80334A78: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x80334A7C: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80334A80: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80334A84: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80334A88: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80334A8C: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x80334A90: lbu         $t9, 0x39D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39D4);
    // 0x80334A94: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x80334A98: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80334A9C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80334AA0: bne         $at, $zero, L_80334234
    if (ctx->r1 != 0) {
        // 0x80334AA4: sh          $t4, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r12;
            goto L_80334234;
    }
    // 0x80334AA4: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
L_80334AA8:
    // 0x80334AA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80334AAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334AB0: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80334AB4: nop

    // 0x80334AB8: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x80334ABC: nop

    // 0x80334AC0: bc1f        L_80334BC8
    if (!c1cs) {
        // 0x80334AC4: nop
    
            goto L_80334BC8;
    }
    // 0x80334AC4: nop

    // 0x80334AC8: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80334ACC: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x80334AD0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80334AD4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334AD8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80334ADC: lw          $t1, 0x6080($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6080);
    // 0x80334AE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334AE4: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80334AE8: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80334AEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334AF0: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80334AF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334AF8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334AFC: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80334B00: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334B04: lwc1        $f14, 0x6374($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6374);
    // 0x80334B08: jal         0x80015538
    // 0x80334B0C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80334B0C: nop

    after_2:
    // 0x80334B10: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80334B14: lb          $t4, 0x4801($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4801);
    // 0x80334B18: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80334B1C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80334B20: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80334B24: lw          $t3, 0x6080($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6080);
    // 0x80334B28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B2C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80334B30: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334B34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334B38: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334B3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334B40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334B44: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80334B48: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80334B4C: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80334B50: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80334B54: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334B58: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80334B5C: lw          $t5, 0x6080($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6080);
    // 0x80334B60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B64: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334B68: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334B70: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334B74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334B78: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334B7C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334B80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334B84: lwc1        $f14, 0x6378($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6378);
    // 0x80334B88: jal         0x80015538
    // 0x80334B8C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334B8C: nop

    after_3:
    // 0x80334B90: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80334B94: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80334B98: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80334B9C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80334BA0: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80334BA4: lw          $t4, 0x6080($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6080);
    // 0x80334BA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334BAC: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80334BB0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334BB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334BB8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334BBC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334BC0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334BC4: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
L_80334BC8:
    // 0x80334BC8: b           L_80334BD0
    // 0x80334BCC: nop

        goto L_80334BD0;
    // 0x80334BCC: nop

L_80334BD0:
    // 0x80334BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334BD8: jr          $ra
    // 0x80334BDC: nop

    return;
    // 0x80334BDC: nop

;}
RECOMP_FUNC void func_80331728_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331728: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033172C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331730: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331734: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80331738: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033173C: jal         0x800608B8
    // 0x80331740: addiu       $a0, $a0, 0x40F4
    ctx->r4 = ADD32(ctx->r4, 0X40F4);
    func_800608B8(rdram, ctx);
        goto after_0;
    // 0x80331740: addiu       $a0, $a0, 0x40F4
    ctx->r4 = ADD32(ctx->r4, 0X40F4);
    after_0:
    // 0x80331744: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80331748: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x8033174C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331750: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80331754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331758: jal         0x8001ABF4
    // 0x8033175C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033175C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331760: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80331764: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x80331768: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8033176C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80331770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331774: jal         0x8001ABF4
    // 0x80331778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033177C: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331780: lb          $t6, 0x6361($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X6361);
    // 0x80331784: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331788: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033178C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331790: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x80331794: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331798: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033179C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803317A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803317A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803317A8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803317AC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803317B0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803317B4: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803317B8: nop

    // 0x803317BC: swc1        $f4, 0x1A40($t0)
    MEM_W(0X1A40, ctx->r8) = ctx->f4.u32l;
    // 0x803317C0: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803317C4: lb          $t2, 0x6361($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X6361);
    // 0x803317C8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803317CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803317D0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803317D4: lw          $t4, 0x6080($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6080);
    // 0x803317D8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803317DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803317E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803317E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803317F0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803317F4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x803317F8: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803317FC: nop

    // 0x80331800: swc1        $f6, 0x1A44($t6)
    MEM_W(0X1A44, ctx->r14) = ctx->f6.u32l;
    // 0x80331804: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331808: lb          $t8, 0x6361($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X6361);
    // 0x8033180C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331810: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331814: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80331818: lw          $t1, 0x6080($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6080);
    // 0x8033181C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331820: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80331824: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80331828: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033182C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80331830: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331834: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331838: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8033183C: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331840: nop

    // 0x80331844: swc1        $f8, 0x1A48($t2)
    MEM_W(0X1A48, ctx->r10) = ctx->f8.u32l;
    // 0x80331848: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033184C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331850: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331854: swc1        $f10, 0x1A5C($t4)
    MEM_W(0X1A5C, ctx->r12) = ctx->f10.u32l;
    // 0x80331858: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033185C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331860: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331864: swc1        $f16, 0x1A60($t5)
    MEM_W(0X1A60, ctx->r13) = ctx->f16.u32l;
    // 0x80331868: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x8033186C: lb          $t7, 0x6361($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X6361);
    // 0x80331870: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331874: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80331878: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033187C: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x80331880: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331884: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331888: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033188C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331890: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331894: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331898: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033189C: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803318A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803318A4: lwc1        $f7, 0x6270($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6270);
    // 0x803318A8: lwc1        $f6, 0x6274($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6274);
    // 0x803318AC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803318B0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803318B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803318B8: lwc1        $f11, 0x6278($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6278);
    // 0x803318BC: lwc1        $f10, 0x627C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X627C);
    // 0x803318C0: nop

    // 0x803318C4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x803318C8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803318CC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x803318D0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803318D4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803318D8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803318DC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803318E0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803318E4: swc1        $f4, 0x1A54($t1)
    MEM_W(0X1A54, ctx->r9) = ctx->f4.u32l;
    // 0x803318E8: lwc1        $f20, 0x1A54($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X1A54);
    // 0x803318EC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803318F0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803318F4: swc1        $f20, 0x1A50($t0)
    MEM_W(0X1A50, ctx->r8) = ctx->f20.u32l;
    // 0x803318F8: swc1        $f20, 0x1A4C($t3)
    MEM_W(0X1A4C, ctx->r11) = ctx->f20.u32l;
    // 0x803318FC: jal         0x80330FA0
    // 0x80331900: nop

    func_80330FA0_unk_bin_2(rdram, ctx);
        goto after_3;
    // 0x80331900: nop

    after_3:
    // 0x80331904: b           L_8033190C
    // 0x80331908: nop

        goto L_8033190C;
    // 0x80331908: nop

L_8033190C:
    // 0x8033190C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331910: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80331914: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80331918: jr          $ra
    // 0x8033191C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033191C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033161C_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033161C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331624: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331628: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033162C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331630: jal         0x800608B8
    // 0x80331634: addiu       $a0, $a0, 0x40F4
    ctx->r4 = ADD32(ctx->r4, 0X40F4);
    func_800608B8(rdram, ctx);
        goto after_0;
    // 0x80331634: addiu       $a0, $a0, 0x40F4
    ctx->r4 = ADD32(ctx->r4, 0X40F4);
    after_0:
    // 0x80331638: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x8033163C: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x80331640: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331644: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80331648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033164C: jal         0x8001ABF4
    // 0x80331650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331654: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80331658: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x8033165C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80331660: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80331664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331668: jal         0x8001ABF4
    // 0x8033166C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033166C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331670: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331678: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033167C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331680: swc1        $f4, 0x1A40($t6)
    MEM_W(0X1A40, ctx->r14) = ctx->f4.u32l;
    // 0x80331684: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80331688: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033168C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331690: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331694: swc1        $f6, 0x1A44($t7)
    MEM_W(0X1A44, ctx->r15) = ctx->f6.u32l;
    // 0x80331698: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8033169C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803316A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316A8: swc1        $f8, 0x1A48($t8)
    MEM_W(0X1A48, ctx->r24) = ctx->f8.u32l;
    // 0x803316AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803316B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803316B4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803316B8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803316BC: swc1        $f10, 0x1A5C($t9)
    MEM_W(0X1A5C, ctx->r25) = ctx->f10.u32l;
    // 0x803316C0: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    // 0x803316C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803316C8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803316CC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803316D0: swc1        $f16, 0x1A60($t0)
    MEM_W(0X1A60, ctx->r8) = ctx->f16.u32l;
    // 0x803316D4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x803316D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803316DC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803316E0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803316E4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803316E8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803316EC: swc1        $f18, 0x1A54($t1)
    MEM_W(0X1A54, ctx->r9) = ctx->f18.u32l;
    // 0x803316F0: lwc1        $f20, 0x1A54($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X1A54);
    // 0x803316F4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803316F8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803316FC: swc1        $f20, 0x1A50($t2)
    MEM_W(0X1A50, ctx->r10) = ctx->f20.u32l;
    // 0x80331700: swc1        $f20, 0x1A4C($t3)
    MEM_W(0X1A4C, ctx->r11) = ctx->f20.u32l;
    // 0x80331704: jal         0x80330FA0
    // 0x80331708: nop

    func_80330FA0_unk_bin_2(rdram, ctx);
        goto after_3;
    // 0x80331708: nop

    after_3:
    // 0x8033170C: b           L_80331714
    // 0x80331710: nop

        goto L_80331714;
    // 0x80331710: nop

L_80331714:
    // 0x80331714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331718: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8033171C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80331720: jr          $ra
    // 0x80331724: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331724: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330FA0_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330FA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330FA8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330FAC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330FB0: lwc1        $f4, 0x1A40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1A40);
    // 0x80330FB4: nop

    // 0x80330FB8: swc1        $f4, 0x1B90($t6)
    MEM_W(0X1B90, ctx->r14) = ctx->f4.u32l;
    // 0x80330FBC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330FC0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330FC4: lwc1        $f6, 0x1A44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1A44);
    // 0x80330FC8: nop

    // 0x80330FCC: swc1        $f6, 0x1B94($t7)
    MEM_W(0X1B94, ctx->r15) = ctx->f6.u32l;
    // 0x80330FD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330FD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330FD8: lwc1        $f8, 0x1A48($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1A48);
    // 0x80330FDC: nop

    // 0x80330FE0: swc1        $f8, 0x1B98($t8)
    MEM_W(0X1B98, ctx->r24) = ctx->f8.u32l;
    // 0x80330FE4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330FE8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330FEC: lwc1        $f10, 0x1A58($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1A58);
    // 0x80330FF0: nop

    // 0x80330FF4: swc1        $f10, 0x1BA8($t9)
    MEM_W(0X1BA8, ctx->r25) = ctx->f10.u32l;
    // 0x80330FF8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330FFC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331000: lwc1        $f16, 0x1A5C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1A5C);
    // 0x80331004: nop

    // 0x80331008: swc1        $f16, 0x1BAC($t0)
    MEM_W(0X1BAC, ctx->r8) = ctx->f16.u32l;
    // 0x8033100C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331010: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331014: lwc1        $f18, 0x1A60($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1A60);
    // 0x80331018: nop

    // 0x8033101C: swc1        $f18, 0x1BB0($t1)
    MEM_W(0X1BB0, ctx->r9) = ctx->f18.u32l;
    // 0x80331020: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331024: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331028: lwc1        $f4, 0x1A4C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1A4C);
    // 0x8033102C: nop

    // 0x80331030: swc1        $f4, 0x1B9C($t2)
    MEM_W(0X1B9C, ctx->r10) = ctx->f4.u32l;
    // 0x80331034: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331038: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033103C: lwc1        $f6, 0x1A50($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1A50);
    // 0x80331040: nop

    // 0x80331044: swc1        $f6, 0x1BA0($t3)
    MEM_W(0X1BA0, ctx->r11) = ctx->f6.u32l;
    // 0x80331048: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033104C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331050: lwc1        $f8, 0x1A54($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1A54);
    // 0x80331054: nop

    // 0x80331058: swc1        $f8, 0x1BA4($t4)
    MEM_W(0X1BA4, ctx->r12) = ctx->f8.u32l;
    // 0x8033105C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331060: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331064: lwc1        $f10, 0x1A40($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1A40);
    // 0x80331068: nop

    // 0x8033106C: swc1        $f10, 0x1CE0($t5)
    MEM_W(0X1CE0, ctx->r13) = ctx->f10.u32l;
    // 0x80331070: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331074: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331078: lwc1        $f16, 0x1A44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1A44);
    // 0x8033107C: nop

    // 0x80331080: swc1        $f16, 0x1CE4($t6)
    MEM_W(0X1CE4, ctx->r14) = ctx->f16.u32l;
    // 0x80331084: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331088: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033108C: lwc1        $f18, 0x1A48($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1A48);
    // 0x80331090: nop

    // 0x80331094: swc1        $f18, 0x1CE8($t7)
    MEM_W(0X1CE8, ctx->r15) = ctx->f18.u32l;
    // 0x80331098: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033109C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803310A0: lwc1        $f4, 0x1A58($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1A58);
    // 0x803310A4: nop

    // 0x803310A8: swc1        $f4, 0x1CF8($t8)
    MEM_W(0X1CF8, ctx->r24) = ctx->f4.u32l;
    // 0x803310AC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803310B0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803310B4: lwc1        $f6, 0x1A5C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1A5C);
    // 0x803310B8: nop

    // 0x803310BC: swc1        $f6, 0x1CFC($t9)
    MEM_W(0X1CFC, ctx->r25) = ctx->f6.u32l;
    // 0x803310C0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803310C4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803310C8: lwc1        $f8, 0x1A60($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1A60);
    // 0x803310CC: nop

    // 0x803310D0: swc1        $f8, 0x1D00($t0)
    MEM_W(0X1D00, ctx->r8) = ctx->f8.u32l;
    // 0x803310D4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803310D8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803310DC: lwc1        $f10, 0x1A4C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1A4C);
    // 0x803310E0: nop

    // 0x803310E4: swc1        $f10, 0x1CEC($t1)
    MEM_W(0X1CEC, ctx->r9) = ctx->f10.u32l;
    // 0x803310E8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803310EC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803310F0: lwc1        $f16, 0x1A50($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1A50);
    // 0x803310F4: nop

    // 0x803310F8: swc1        $f16, 0x1CF0($t2)
    MEM_W(0X1CF0, ctx->r10) = ctx->f16.u32l;
    // 0x803310FC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331100: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331104: lwc1        $f18, 0x1A54($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1A54);
    // 0x80331108: nop

    // 0x8033110C: swc1        $f18, 0x1CF4($t3)
    MEM_W(0X1CF4, ctx->r11) = ctx->f18.u32l;
    // 0x80331110: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80331114: jal         0x8001BB34
    // 0x80331118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8033111C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80331120: lb          $t4, 0x7630($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7630);
    // 0x80331124: nop

    // 0x80331128: bne         $t4, $zero, L_80331220
    if (ctx->r12 != 0) {
        // 0x8033112C: nop
    
            goto L_80331220;
    }
    // 0x8033112C: nop

    // 0x80331130: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80331134: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x80331138: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8033113C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331140: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331144: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331148: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033114C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331150: lbu         $t7, 0x4808($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4808);
    // 0x80331154: nop

    // 0x80331158: beq         $t7, $zero, L_8033116C
    if (ctx->r15 == 0) {
        // 0x8033115C: nop
    
            goto L_8033116C;
    }
    // 0x8033115C: nop

    // 0x80331160: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80331164: bne         $t7, $at, L_803311A0
    if (ctx->r15 != ctx->r1) {
        // 0x80331168: nop
    
            goto L_803311A0;
    }
    // 0x80331168: nop

L_8033116C:
    // 0x8033116C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80331170: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80331174: nop

    // 0x80331178: blez        $t8, L_80331198
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8033117C: nop
    
            goto L_80331198;
    }
    // 0x8033117C: nop

    // 0x80331180: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80331184: beq         $at, $zero, L_80331198
    if (ctx->r1 == 0) {
        // 0x80331188: nop
    
            goto L_80331198;
    }
    // 0x80331188: nop

    // 0x8033118C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80331190: jal         0x8001BB34
    // 0x80331194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80331198:
    // 0x80331198: b           L_80331220
    // 0x8033119C: nop

        goto L_80331220;
    // 0x8033119C: nop

L_803311A0:
    // 0x803311A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x803311A4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x803311A8: addiu       $t9, $sp, 0x24
    ctx->r25 = ADD32(ctx->r29, 0X24);
    // 0x803311AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803311B0: addiu       $a1, $sp, 0x27
    ctx->r5 = ADD32(ctx->r29, 0X27);
    // 0x803311B4: addiu       $a2, $sp, 0x26
    ctx->r6 = ADD32(ctx->r29, 0X26);
    // 0x803311B8: jal         0x800252AC
    // 0x803311BC: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    func_800252AC(rdram, ctx);
        goto after_2;
    // 0x803311BC: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    after_2:
    // 0x803311C0: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x803311C4: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x803311C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803311CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803311D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803311D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803311D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803311DC: lbu         $t2, 0x4808($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X4808);
    // 0x803311E0: nop

    // 0x803311E4: beq         $t2, $zero, L_803311F8
    if (ctx->r10 == 0) {
        // 0x803311E8: nop
    
            goto L_803311F8;
    }
    // 0x803311E8: nop

    // 0x803311EC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803311F0: bne         $t2, $at, L_80331220
    if (ctx->r10 != ctx->r1) {
        // 0x803311F4: nop
    
            goto L_80331220;
    }
    // 0x803311F4: nop

L_803311F8:
    // 0x803311F8: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x803311FC: nop

    // 0x80331200: blez        $t3, L_80331220
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80331204: nop
    
            goto L_80331220;
    }
    // 0x80331204: nop

    // 0x80331208: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x8033120C: beq         $at, $zero, L_80331220
    if (ctx->r1 == 0) {
        // 0x80331210: nop
    
            goto L_80331220;
    }
    // 0x80331210: nop

    // 0x80331214: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80331218: jal         0x8001BB34
    // 0x8033121C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x8033121C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80331220:
    // 0x80331220: b           L_80331228
    // 0x80331224: nop

        goto L_80331228;
    // 0x80331224: nop

L_80331228:
    // 0x80331228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033122C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331230: jr          $ra
    // 0x80331234: nop

    return;
    // 0x80331234: nop

;}
RECOMP_FUNC void func_803308C4_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x803308C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803308CC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x803308D0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803308D4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803308D8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803308DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803308E0: nop

    // 0x803308E4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803308E8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803308EC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803308F0: lwc1        $f7, 0x6228($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6228);
    // 0x803308F4: lwc1        $f6, 0x622C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X622C);
    // 0x803308F8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803308FC: nop

    // 0x80330900: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x80330904: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80330908: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8033090C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330910: lwc1        $f4, 0x636C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80330914: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330918: lwc1        $f7, 0x6230($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6230);
    // 0x8033091C: lwc1        $f6, 0x6234($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6234);
    // 0x80330920: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80330924: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80330928: jal         0x80036570
    // 0x8033092C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_0;
    // 0x8033092C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80330930: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330934: lwc1        $f16, 0x6364($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330938: nop

    // 0x8033093C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80330940: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80330944: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80330948: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x8033094C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80330950: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330954: lwc1        $f10, 0x636C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80330958: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033095C: lwc1        $f5, 0x6238($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6238);
    // 0x80330960: lwc1        $f4, 0x623C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X623C);
    // 0x80330964: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80330968: mul.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033096C: jal         0x80034970
    // 0x80330970: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80330970: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x80330974: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330978: lwc1        $f8, 0x6364($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x8033097C: nop

    // 0x80330980: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80330984: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330988: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x8033098C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80330990: nop

    // 0x80330994: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x80330998: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8033099C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803309A0: lwc1        $f18, 0x6370($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x803309A4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803309A8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x803309AC: div.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x803309B0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x803309B4: nop

    // 0x803309B8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803309BC: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x803309C0: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x803309C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803309C8: lwc1        $f18, 0x6368($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x803309CC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803309D0: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x803309D4: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x803309D8: lh          $t9, 0x4992($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4992);
    // 0x803309DC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x803309E0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x803309E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803309E8: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803309EC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803309F0: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803309F4: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x803309F8: lwc1        $f8, 0x636C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x803309FC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330A00: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80330A04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330A08: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80330A0C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80330A10: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330A14: lb          $t2, 0x6360($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X6360);
    // 0x80330A18: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80330A1C: nop

    // 0x80330A20: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80330A24: beq         $at, $zero, L_80330BD8
    if (ctx->r1 == 0) {
        // 0x80330A28: sh          $t1, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r9;
            goto L_80330BD8;
    }
    // 0x80330A28: sh          $t1, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r9;
L_80330A2C:
    // 0x80330A2C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330A30: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330A34: lwc1        $f5, 0x6240($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6240);
    // 0x80330A38: lwc1        $f4, 0x6244($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6244);
    // 0x80330A3C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80330A40: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80330A44: jal         0x80036570
    // 0x80330A48: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80330A48: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x80330A4C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330A50: lwc1        $f8, 0x6364($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330A54: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x80330A58: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80330A5C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330A60: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330A64: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330A68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A6C: lw          $t5, 0x6080($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6080);
    // 0x80330A70: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80330A74: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330A78: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330A7C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330A80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330A84: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80330A88: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330A8C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330A90: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330A94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A98: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330A9C: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x80330AA0: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x80330AA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330AA8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330AAC: lwc1        $f9, 0x6248($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6248);
    // 0x80330AB0: lwc1        $f8, 0x624C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X624C);
    // 0x80330AB4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330AB8: mul.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x80330ABC: jal         0x80034970
    // 0x80330AC0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80330AC0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80330AC4: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x80330AC8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330ACC: lwc1        $f4, 0x6364($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330AD0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80330AD4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330AD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330ADC: lw          $t9, 0x6080($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6080);
    // 0x80330AE0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80330AE4: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330AE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330AEC: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330AF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330AF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330AF8: sub.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330AFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B00: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B08: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B0C: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x80330B10: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80330B14: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x80330B18: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80330B1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330B20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330B24: lw          $t3, 0x6080($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6080);
    // 0x80330B28: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330B2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330B30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B34: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330B38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B3C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330B40: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330B44: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80330B48: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330B4C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330B50: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80330B54: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80330B58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B5C: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x80330B60: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x80330B64: nop

    // 0x80330B68: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330B6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B70: lw          $t9, 0x6080($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6080);
    // 0x80330B74: nop

    // 0x80330B78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330B7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B88: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B8C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B90: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80330B94: nop

    // 0x80330B98: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80330B9C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330BA0: lwc1        $f16, 0x6368($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x80330BA4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330BA8: nop

    // 0x80330BAC: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330BB0: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80330BB4: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x80330BB8: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330BBC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80330BC0: lb          $t5, 0x6360($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X6360);
    // 0x80330BC4: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80330BC8: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80330BCC: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80330BD0: bne         $at, $zero, L_80330A2C
    if (ctx->r1 != 0) {
        // 0x80330BD4: sh          $t2, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r10;
            goto L_80330A2C;
    }
    // 0x80330BD4: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
L_80330BD8:
    // 0x80330BD8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330BDC: lwc1        $f18, 0x6368($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x80330BE0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330BE4: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330BE8: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80330BEC: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80330BF0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80330BF4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80330BF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330BFC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330C00: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80330C04: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330C08: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80330C0C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330C10: lwc1        $f4, 0x636C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80330C14: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80330C18: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80330C1C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80330C20: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80330C24: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80330C28: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80330C2C: nop

    // 0x80330C30: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80330C34: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80330C38: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80330C3C: bltz        $t1, L_80330DE8
    if (SIGNED(ctx->r9) < 0) {
        // 0x80330C40: sh          $t9, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r25;
            goto L_80330DE8;
    }
    // 0x80330C40: sh          $t9, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r25;
L_80330C44:
    // 0x80330C44: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C48: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330C4C: lwc1        $f19, 0x6250($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6250);
    // 0x80330C50: lwc1        $f18, 0x6254($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6254);
    // 0x80330C54: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80330C58: mul.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80330C5C: jal         0x80036570
    // 0x80330C60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80330C60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_4:
    // 0x80330C64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C68: lwc1        $f4, 0x6364($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330C6C: lh          $t2, 0x4E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4E);
    // 0x80330C70: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x80330C74: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330C78: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330C7C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330C80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330C84: lw          $t4, 0x6080($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6080);
    // 0x80330C88: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80330C8C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330C90: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330C94: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330C98: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330C9C: neg.s       $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = -ctx->f6.fl;
    // 0x80330CA0: sub.s       $f20, $f18, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80330CA4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330CA8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330CAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CB0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330CB4: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x80330CB8: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x80330CBC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CC0: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330CC4: lwc1        $f5, 0x6258($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6258);
    // 0x80330CC8: lwc1        $f4, 0x625C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X625C);
    // 0x80330CCC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330CD0: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x80330CD4: jal         0x80034970
    // 0x80330CD8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x80330CD8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x80330CDC: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80330CE0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CE4: lwc1        $f18, 0x6364($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330CE8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330CEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330CF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330CF4: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x80330CF8: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x80330CFC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80330D00: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330D04: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330D08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330D0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330D10: sub.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330D14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330D18: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330D1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D20: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330D24: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x80330D28: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80330D2C: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x80330D30: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330D34: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330D38: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330D3C: lw          $t2, 0x6080($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6080);
    // 0x80330D40: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330D44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330D48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330D50: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330D58: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80330D5C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80330D60: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330D64: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330D68: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330D6C: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330D70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D74: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
    // 0x80330D78: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80330D7C: nop

    // 0x80330D80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D84: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330D88: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x80330D8C: nop

    // 0x80330D90: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330D94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330D98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330D9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330DA0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330DA4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330DA8: lwc1        $f8, 0x4154($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80330DAC: nop

    // 0x80330DB0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80330DB4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330DB8: lwc1        $f16, 0x6368($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x80330DBC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80330DC0: nop

    // 0x80330DC4: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330DC8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80330DCC: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x80330DD0: nop

    // 0x80330DD4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330DD8: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80330DDC: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80330DE0: bgez        $t3, L_80330C44
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80330DE4: sh          $t1, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r9;
            goto L_80330C44;
    }
    // 0x80330DE4: sh          $t1, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r9;
L_80330DE8:
    // 0x80330DE8: b           L_80330DF0
    // 0x80330DEC: nop

        goto L_80330DF0;
    // 0x80330DEC: nop

L_80330DF0:
    // 0x80330DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DF4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80330DF8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80330DFC: jr          $ra
    // 0x80330E00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80330E00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80331D78_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D80: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331D84: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80331D88: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x80331D8C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80331D90: sh          $zero, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = 0;
    // 0x80331D94: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331D98: jal         0x800608B8
    // 0x80331D9C: addiu       $a0, $a0, 0x3F44
    ctx->r4 = ADD32(ctx->r4, 0X3F44);
    func_800608B8(rdram, ctx);
        goto after_0;
    // 0x80331D9C: addiu       $a0, $a0, 0x3F44
    ctx->r4 = ADD32(ctx->r4, 0X3F44);
    after_0:
    // 0x80331DA0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80331DA4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80331DA8: jal         0x800253EC
    // 0x80331DAC: nop

    func_800253EC(rdram, ctx);
        goto after_1;
    // 0x80331DAC: nop

    after_1:
    // 0x80331DB0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80331DB4: beq         $t6, $zero, L_80331DE0
    if (ctx->r14 == 0) {
        // 0x80331DB8: nop
    
            goto L_80331DE0;
    }
    // 0x80331DB8: nop

    // 0x80331DBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80331DC0: jal         0x800600B8
    // 0x80331DC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_2;
    // 0x80331DC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80331DC8: beq         $v0, $zero, L_80331DE0
    if (ctx->r2 == 0) {
        // 0x80331DCC: nop
    
            goto L_80331DE0;
    }
    // 0x80331DCC: nop

    // 0x80331DD0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80331DD4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DD8: b           L_80331DF4
    // 0x80331DDC: sb          $t7, 0x6360($at)
    MEM_B(0X6360, ctx->r1) = ctx->r15;
        goto L_80331DF4;
    // 0x80331DDC: sb          $t7, 0x6360($at)
    MEM_B(0X6360, ctx->r1) = ctx->r15;
L_80331DE0:
    // 0x80331DE0: jal         0x800604A8
    // 0x80331DE4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_800604A8(rdram, ctx);
        goto after_3;
    // 0x80331DE4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x80331DE8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80331DEC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DF0: sb          $t8, 0x6360($at)
    MEM_B(0X6360, ctx->r1) = ctx->r24;
L_80331DF4:
    // 0x80331DF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331DF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331DFC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80331E00: jal         0x80331238
    // 0x80331E04: nop

    func_80331238_unk_bin_2(rdram, ctx);
        goto after_4;
    // 0x80331E04: nop

    after_4:
    // 0x80331E08: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331E0C: lb          $t9, 0x6361($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X6361);
    // 0x80331E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331E14: beq         $t9, $at, L_80331E3C
    if (ctx->r25 == ctx->r1) {
        // 0x80331E18: nop
    
            goto L_80331E3C;
    }
    // 0x80331E18: nop

    // 0x80331E1C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80331E20: addiu       $t0, $t0, 0x6F3C
    ctx->r8 = ADD32(ctx->r8, 0X6F3C);
    // 0x80331E24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331E28: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80331E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E34: jal         0x8001C0EC
    // 0x80331E38: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331E38: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_5:
L_80331E3C:
    // 0x80331E3C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331E40: lb          $t1, 0x6361($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X6361);
    // 0x80331E44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331E48: beq         $t1, $at, L_80331E70
    if (ctx->r9 == ctx->r1) {
        // 0x80331E4C: nop
    
            goto L_80331E70;
    }
    // 0x80331E4C: nop

    // 0x80331E50: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80331E54: addiu       $t2, $t2, 0x6F40
    ctx->r10 = ADD32(ctx->r10, 0X6F40);
    // 0x80331E58: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331E5C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80331E60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E68: jal         0x8001C0EC
    // 0x80331E6C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80331E6C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_6:
L_80331E70:
    // 0x80331E70: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331E74: lb          $t3, 0x6361($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X6361);
    // 0x80331E78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331E7C: beq         $t3, $at, L_80331EBC
    if (ctx->r11 == ctx->r1) {
        // 0x80331E80: nop
    
            goto L_80331EBC;
    }
    // 0x80331E80: nop

    // 0x80331E84: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80331E88: addiu       $t4, $t4, 0x6F44
    ctx->r12 = ADD32(ctx->r12, 0X6F44);
    // 0x80331E8C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80331E90: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80331E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E9C: jal         0x8001C0EC
    // 0x80331EA0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x80331EA0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_7:
    // 0x80331EA4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80331EA8: addiu       $a3, $a3, 0x6F7C
    ctx->r7 = ADD32(ctx->r7, 0X6F7C);
    // 0x80331EAC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80331EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EB4: jal         0x8001ABF4
    // 0x80331EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x80331EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_80331EBC:
    // 0x80331EBC: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80331EC0: lb          $t5, 0x6361($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X6361);
    // 0x80331EC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331EC8: beq         $t5, $at, L_80331F38
    if (ctx->r13 == ctx->r1) {
        // 0x80331ECC: nop
    
            goto L_80331F38;
    }
    // 0x80331ECC: nop

    // 0x80331ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80331ED4: jal         0x800600B8
    // 0x80331ED8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_9;
    // 0x80331ED8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x80331EDC: beq         $v0, $zero, L_80331F18
    if (ctx->r2 == 0) {
        // 0x80331EE0: nop
    
            goto L_80331F18;
    }
    // 0x80331EE0: nop

    // 0x80331EE4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80331EE8: addiu       $t6, $t6, 0x6F48
    ctx->r14 = ADD32(ctx->r14, 0X6F48);
    // 0x80331EEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331EF0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80331EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331EFC: jal         0x8001C0EC
    // 0x80331F00: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x80331F00: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_10:
    // 0x80331F04: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80331F08: jal         0x8001B754
    // 0x80331F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_11;
    // 0x80331F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80331F10: b           L_80331F38
    // 0x80331F14: nop

        goto L_80331F38;
    // 0x80331F14: nop

L_80331F18:
    // 0x80331F18: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80331F1C: addiu       $t7, $t7, 0x6F48
    ctx->r15 = ADD32(ctx->r15, 0X6F48);
    // 0x80331F20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331F24: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80331F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331F30: jal         0x8001C0EC
    // 0x80331F34: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x80331F34: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_12:
L_80331F38:
    // 0x80331F38: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331F3C: lb          $t8, 0x6361($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X6361);
    // 0x80331F40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331F44: beq         $t8, $at, L_80331F64
    if (ctx->r24 == ctx->r1) {
        // 0x80331F48: nop
    
            goto L_80331F64;
    }
    // 0x80331F48: nop

    // 0x80331F4C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80331F50: addiu       $a3, $a3, 0x6FE0
    ctx->r7 = ADD32(ctx->r7, 0X6FE0);
    // 0x80331F54: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80331F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F5C: jal         0x8001ABF4
    // 0x80331F60: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x80331F60: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_13:
L_80331F64:
    // 0x80331F64: jal         0x803303BC
    // 0x80331F68: nop

    func_803303BC_unk_bin_2(rdram, ctx);
        goto after_14;
    // 0x80331F68: nop

    after_14:
    // 0x80331F6C: jal         0x80330E04
    // 0x80331F70: nop

    func_80330E04_unk_bin_2(rdram, ctx);
        goto after_15;
    // 0x80331F70: nop

    after_15:
    // 0x80331F74: b           L_80331F7C
    // 0x80331F78: nop

        goto L_80331F7C;
    // 0x80331F78: nop

L_80331F7C:
    // 0x80331F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331F84: jr          $ra
    // 0x80331F88: nop

    return;
    // 0x80331F88: nop

;}
RECOMP_FUNC void func_80332BCC_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80332BD0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80332BD4: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80332BD8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80332BDC: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80332BE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332BE4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332BE8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80332BEC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80332BF0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80332BF4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80332BF8: addiu       $t1, $t1, 0x3B3C
    ctx->r9 = ADD32(ctx->r9, 0X3B3C);
    // 0x80332BFC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80332C00: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80332C04: addiu       $t3, $zero, 0x33
    ctx->r11 = ADD32(0, 0X33);
    // 0x80332C08: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80332C0C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80332C10: lb          $t4, 0x4802($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4802);
    // 0x80332C14: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332C18: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332C1C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80332C20: lw          $t6, 0x6134($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6134);
    // 0x80332C24: nop

    // 0x80332C28: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x80332C2C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80332C30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C34: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80332C38: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C40: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C48: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332C4C: lwc1        $f4, 0x4224($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332C50: nop

    // 0x80332C54: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80332C58: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80332C5C: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80332C60: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80332C64: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80332C68: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80332C6C: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80332C70: nop

    // 0x80332C74: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80332C78: bgez        $t3, L_80332C90
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80332C7C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80332C90;
    }
    // 0x80332C7C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332C80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80332C84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332C88: nop

    // 0x80332C8C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80332C90:
    // 0x80332C90: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80332C94: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80332C98: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332C9C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332CA0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332CA4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332CA8: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80332CAC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332CB0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332CB4: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80332CB8: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80332CBC: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80332CC0: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80332CC4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332CC8: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80332CCC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332CD0: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80332CD4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332CD8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332CDC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80332CE0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332CE4: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80332CE8: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80332CEC: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x80332CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CF4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332CF8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332CFC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332D00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332D04: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332D08: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332D0C: lwc1        $f16, 0x4228($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4228);
    // 0x80332D10: nop

    // 0x80332D14: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332D18: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80332D1C: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80332D20: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80332D24: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x80332D28: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x80332D2C: lbu         $t7, 0x2($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X2);
    // 0x80332D30: nop

    // 0x80332D34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332D38: bgez        $t7, L_80332D50
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80332D3C: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80332D50;
    }
    // 0x80332D3C: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332D40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80332D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332D48: nop

    // 0x80332D4C: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
L_80332D50:
    // 0x80332D50: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80332D54: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332D58: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80332D5C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332D60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332D64: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80332D68: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80332D6C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332D70: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332D74: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80332D78: lwc1        $f16, 0x10($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X10);
    // 0x80332D7C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80332D80: sub.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80332D84: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332D88: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80332D8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332D90: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332D94: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332D98: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332D9C: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80332DA0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332DA4: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x80332DA8: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x80332DAC: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80332DB0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80332DB4: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80332DB8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80332DBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332DC0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80332DC4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80332DC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332DCC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80332DD0: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80332DD4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80332DD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332DDC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80332DE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332DE4: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80332DE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332DEC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80332DF0: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80332DF4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332DF8: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x80332DFC: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x80332E00: b           L_80332E08
    // 0x80332E04: nop

        goto L_80332E08;
    // 0x80332E04: nop

L_80332E08:
    // 0x80332E08: jr          $ra
    // 0x80332E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80332E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80334FD0_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334FD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334FD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334FD8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80334FDC: jal         0x80062EAC
    // 0x80334FE0: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80334FE0: nop

    after_0:
    // 0x80334FE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80334FE8: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80334FEC: lh          $t6, 0x4990($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4990);
    // 0x80334FF0: nop

    // 0x80334FF4: bne         $t6, $zero, L_8033541C
    if (ctx->r14 != 0) {
        // 0x80334FF8: nop
    
            goto L_8033541C;
    }
    // 0x80334FF8: nop

    // 0x80334FFC: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80335000: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80335004: nop

    // 0x80335008: bne         $t7, $zero, L_8033541C
    if (ctx->r15 != 0) {
        // 0x8033500C: nop
    
            goto L_8033541C;
    }
    // 0x8033500C: nop

    // 0x80335010: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80335014: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335018: beq         $t8, $at, L_8033502C
    if (ctx->r24 == ctx->r1) {
        // 0x8033501C: nop
    
            goto L_8033502C;
    }
    // 0x8033501C: nop

    // 0x80335020: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335024: bne         $t8, $at, L_80335054
    if (ctx->r24 != ctx->r1) {
        // 0x80335028: nop
    
            goto L_80335054;
    }
    // 0x80335028: nop

L_8033502C:
    // 0x8033502C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80335030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335034: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80335038: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033503C: jal         0x800178D4
    // 0x80335040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80335040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80335044: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80335048: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x8033504C: b           L_80335128
    // 0x80335050: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
        goto L_80335128;
    // 0x80335050: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
L_80335054:
    // 0x80335054: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335058: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8033505C: beq         $t0, $at, L_80335070
    if (ctx->r8 == ctx->r1) {
        // 0x80335060: nop
    
            goto L_80335070;
    }
    // 0x80335060: nop

    // 0x80335064: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335068: bne         $t0, $at, L_80335098
    if (ctx->r8 != ctx->r1) {
        // 0x8033506C: nop
    
            goto L_80335098;
    }
    // 0x8033506C: nop

L_80335070:
    // 0x80335070: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80335074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335078: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x8033507C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335080: jal         0x800178D4
    // 0x80335084: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80335084: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80335088: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033508C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335090: b           L_80335128
    // 0x80335094: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
        goto L_80335128;
    // 0x80335094: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
L_80335098:
    // 0x80335098: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033509C: addiu       $t2, $t2, -0x1D50
    ctx->r10 = ADD32(ctx->r10, -0X1D50);
    // 0x803350A0: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x803350A4: nop

    // 0x803350A8: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x803350AC: beq         $t4, $zero, L_803350E8
    if (ctx->r12 == 0) {
        // 0x803350B0: nop
    
            goto L_803350E8;
    }
    // 0x803350B0: nop

    // 0x803350B4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803350B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803350BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803350C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803350C4: jal         0x800178D4
    // 0x803350C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x803350C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x803350CC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803350D0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803350D4: sh          $t5, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r13;
    // 0x803350D8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x803350DC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803350E0: b           L_80335128
    // 0x803350E4: sh          $t6, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r14;
        goto L_80335128;
    // 0x803350E4: sh          $t6, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r14;
L_803350E8:
    // 0x803350E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803350EC: addiu       $t7, $t7, -0x1D50
    ctx->r15 = ADD32(ctx->r15, -0X1D50);
    // 0x803350F0: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x803350F4: nop

    // 0x803350F8: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x803350FC: beq         $t9, $zero, L_80335128
    if (ctx->r25 == 0) {
        // 0x80335100: nop
    
            goto L_80335128;
    }
    // 0x80335100: nop

    // 0x80335104: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80335108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033510C: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80335110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335114: jal         0x800178D4
    // 0x80335118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80335118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8033511C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80335120: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335124: sh          $t0, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r8;
L_80335128:
    // 0x80335128: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x8033512C: lh          $t1, 0x4990($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4990);
    // 0x80335130: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335134: bne         $t1, $at, L_80335284
    if (ctx->r9 != ctx->r1) {
        // 0x80335138: nop
    
            goto L_80335284;
    }
    // 0x80335138: nop

    // 0x8033513C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80335140: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335144: sh          $t2, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r10;
    // 0x80335148: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8033514C: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x80335150: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80335154: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335158: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033515C: lbu         $t5, 0x39D4($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39D4);
    // 0x80335160: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80335164: blez        $t5, L_80335244
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80335168: nop
    
            goto L_80335244;
    }
    // 0x80335168: nop

L_8033516C:
    // 0x8033516C: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
L_80335170:
    // 0x80335170: lh          $t6, 0x34($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X34);
    // 0x80335174: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x80335178: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8033517C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80335180: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335184: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80335188: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033518C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335190: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335194: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80335198: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8033519C: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x803351A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803351A4: lw          $t1, 0x4184($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4184);
    // 0x803351A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803351AC: bne         $t1, $at, L_803351BC
    if (ctx->r9 != ctx->r1) {
        // 0x803351B0: nop
    
            goto L_803351BC;
    }
    // 0x803351B0: nop

    // 0x803351B4: b           L_80335210
    // 0x803351B8: nop

        goto L_80335210;
    // 0x803351B8: nop

L_803351BC:
    // 0x803351BC: lh          $t2, 0x34($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X34);
    // 0x803351C0: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x803351C4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x803351C8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803351CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803351D0: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x803351D4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803351D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803351DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803351E0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803351E4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803351E8: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803351EC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x803351F0: lw          $a0, 0x4188($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4188);
    // 0x803351F4: jal         0x800604A8
    // 0x803351F8: nop

    func_800604A8(rdram, ctx);
        goto after_5;
    // 0x803351F8: nop

    after_5:
    // 0x803351FC: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x80335200: nop

    // 0x80335204: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80335208: b           L_80335170
    // 0x8033520C: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
        goto L_80335170;
    // 0x8033520C: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
L_80335210:
    // 0x80335210: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80335214: lb          $t4, 0x4801($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4801);
    // 0x80335218: lh          $t9, 0x34($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X34);
    // 0x8033521C: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80335220: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80335224: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80335228: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033522C: lbu         $t5, 0x39D4($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39D4);
    // 0x80335230: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80335234: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80335238: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8033523C: bne         $at, $zero, L_8033516C
    if (ctx->r1 != 0) {
        // 0x80335240: sh          $t0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r8;
            goto L_8033516C;
    }
    // 0x80335240: sh          $t0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r8;
L_80335244:
    // 0x80335244: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80335248: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8033524C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80335250: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80335254: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80335258: lw          $t7, 0x6080($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6080);
    // 0x8033525C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335260: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80335264: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80335268: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033526C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80335270: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335278: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033527C: b           L_8033541C
    // 0x80335280: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
        goto L_8033541C;
    // 0x80335280: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
L_80335284:
    // 0x80335284: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80335288: lh          $t0, 0x4990($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4990);
    // 0x8033528C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335290: beq         $t0, $at, L_803352A4
    if (ctx->r8 == ctx->r1) {
        // 0x80335294: nop
    
            goto L_803352A4;
    }
    // 0x80335294: nop

    // 0x80335298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033529C: bne         $t0, $at, L_8033541C
    if (ctx->r8 != ctx->r1) {
        // 0x803352A0: nop
    
            goto L_8033541C;
    }
    // 0x803352A0: nop

L_803352A4:
    // 0x803352A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x803352A8: lb          $a1, 0x4802($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4802);
    // 0x803352AC: jal         0x800600B8
    // 0x803352B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800600B8(rdram, ctx);
        goto after_6;
    // 0x803352B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x803352B4: bne         $v0, $zero, L_803352D0
    if (ctx->r2 != 0) {
        // 0x803352B8: nop
    
            goto L_803352D0;
    }
    // 0x803352B8: nop

    // 0x803352BC: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x803352C0: lh          $t1, 0x4990($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4990);
    // 0x803352C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803352C8: bne         $t1, $at, L_80335414
    if (ctx->r9 != ctx->r1) {
        // 0x803352CC: nop
    
            goto L_80335414;
    }
    // 0x803352CC: nop

L_803352D0:
    // 0x803352D0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x803352D4: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x803352D8: lh          $t3, 0x4990($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4990);
    // 0x803352DC: lb          $t4, 0x4802($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4802);
    // 0x803352E0: nop

    // 0x803352E4: addu        $t2, $t4, $t3
    ctx->r10 = ADD32(ctx->r12, ctx->r11);
    // 0x803352E8: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    // 0x803352EC: lb          $t5, 0x37($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X37);
    // 0x803352F0: nop

    // 0x803352F4: bgez        $t5, L_80335324
    if (SIGNED(ctx->r13) >= 0) {
        // 0x803352F8: nop
    
            goto L_80335324;
    }
    // 0x803352F8: nop

    // 0x803352FC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80335300: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80335304: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80335308: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033530C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80335310: lbu         $t7, 0x39D4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39D4);
    // 0x80335314: nop

    // 0x80335318: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8033531C: b           L_80335354
    // 0x80335320: sb          $t9, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r25;
        goto L_80335354;
    // 0x80335320: sb          $t9, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r25;
L_80335324:
    // 0x80335324: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80335328: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x8033532C: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80335330: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80335334: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80335338: lbu         $t3, 0x39D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39D4);
    // 0x8033533C: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x80335340: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x80335344: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80335348: beq         $at, $zero, L_80335354
    if (ctx->r1 == 0) {
        // 0x8033534C: nop
    
            goto L_80335354;
    }
    // 0x8033534C: nop

    // 0x80335350: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
L_80335354:
    // 0x80335354: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x80335358: jal         0x800600B8
    // 0x8033535C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800600B8(rdram, ctx);
        goto after_7;
    // 0x8033535C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80335360: beq         $v0, $zero, L_8033537C
    if (ctx->r2 == 0) {
        // 0x80335364: nop
    
            goto L_8033537C;
    }
    // 0x80335364: nop

    // 0x80335368: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x8033536C: lh          $t5, 0x4990($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4990);
    // 0x80335370: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335374: beq         $t5, $at, L_80335390
    if (ctx->r13 == ctx->r1) {
        // 0x80335378: nop
    
            goto L_80335390;
    }
    // 0x80335378: nop

L_8033537C:
    // 0x8033537C: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80335380: lh          $t6, 0x4990($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4990);
    // 0x80335384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335388: bne         $t6, $at, L_80335414
    if (ctx->r14 != ctx->r1) {
        // 0x8033538C: nop
    
            goto L_80335414;
    }
    // 0x8033538C: nop

L_80335390:
    // 0x80335390: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80335394: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80335398: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x8033539C: lw          $t9, 0x4994($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4994);
    // 0x803353A0: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803353A4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803353A8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803353AC: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x803353B0: lw          $a3, 0x268($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X268);
    // 0x803353B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803353B8: jal         0x8001ABF4
    // 0x803353BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x803353BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x803353C0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x803353C4: lb          $t1, 0x4802($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4802);
    // 0x803353C8: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803353CC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803353D0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x803353D4: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x803353D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803353DC: jal         0x8001BC84
    // 0x803353E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_9;
    // 0x803353E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x803353E4: lb          $t3, 0x37($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X37);
    // 0x803353E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803353EC: sb          $t3, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = ctx->r11;
    // 0x803353F0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x803353F4: lb          $t0, 0x4802($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4802);
    // 0x803353F8: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803353FC: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80335400: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80335404: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x80335408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033540C: jal         0x8001BC84
    // 0x80335410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001BC84(rdram, ctx);
        goto after_10;
    // 0x80335410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80335414:
    // 0x80335414: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335418: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
L_8033541C:
    // 0x8033541C: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80335420: lh          $t5, 0x4992($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4992);
    // 0x80335424: nop

    // 0x80335428: beq         $t5, $zero, L_80335530
    if (ctx->r13 == 0) {
        // 0x8033542C: nop
    
            goto L_80335530;
    }
    // 0x8033542C: nop

    // 0x80335430: lui         $s0, 0x8032
    ctx->r16 = S32(0X8032 << 16);
    // 0x80335434: lh          $s0, 0x4990($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4990);
    // 0x80335438: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033543C: beq         $s0, $at, L_80335458
    if (ctx->r16 == ctx->r1) {
        // 0x80335440: nop
    
            goto L_80335458;
    }
    // 0x80335440: nop

    // 0x80335444: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335448: beq         $s0, $at, L_803354C4
    if (ctx->r16 == ctx->r1) {
        // 0x8033544C: nop
    
            goto L_803354C4;
    }
    // 0x8033544C: nop

    // 0x80335450: b           L_80335530
    // 0x80335454: nop

        goto L_80335530;
    // 0x80335454: nop

L_80335458:
    // 0x80335458: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033545C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80335460: jal         0x80333E18
    // 0x80335464: nop

    func_80333E18_unk_bin_2(rdram, ctx);
        goto after_11;
    // 0x80335464: nop

    after_11:
    // 0x80335468: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x8033546C: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80335470: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335474: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x80335478: sh          $t8, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r24;
    // 0x8033547C: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80335480: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80335484: nop

    // 0x80335488: bne         $t7, $zero, L_803354BC
    if (ctx->r15 != 0) {
        // 0x8033548C: nop
    
            goto L_803354BC;
    }
    // 0x8033548C: nop

    // 0x80335490: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335494: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x80335498: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8033549C: lb          $t9, 0x4800($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4800);
    // 0x803354A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803354A4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x803354A8: sb          $t1, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r9;
    // 0x803354AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803354B0: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x803354B4: jal         0x80332EA4
    // 0x803354B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80332EA4_unk_bin_2(rdram, ctx);
        goto after_12;
    // 0x803354B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_12:
L_803354BC:
    // 0x803354BC: b           L_80335530
    // 0x803354C0: nop

        goto L_80335530;
    // 0x803354C0: nop

L_803354C4:
    // 0x803354C4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803354C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803354CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803354D0: lwc1        $f14, 0x6348($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6348);
    // 0x803354D4: jal         0x80331238
    // 0x803354D8: nop

    func_80331238_unk_bin_2(rdram, ctx);
        goto after_13;
    // 0x803354D8: nop

    after_13:
    // 0x803354DC: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803354E0: lh          $t4, 0x4992($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4992);
    // 0x803354E4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803354E8: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x803354EC: sh          $t3, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r11;
    // 0x803354F0: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803354F4: lh          $t0, 0x4992($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4992);
    // 0x803354F8: nop

    // 0x803354FC: bne         $t0, $zero, L_80335528
    if (ctx->r8 != 0) {
        // 0x80335500: nop
    
            goto L_80335528;
    }
    // 0x80335500: nop

    // 0x80335504: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335508: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x8033550C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80335510: lb          $t2, 0x4800($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4800);
    // 0x80335514: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80335518: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x8033551C: sb          $t5, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r13;
    // 0x80335520: jal         0x80331D78
    // 0x80335524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331D78_unk_bin_2(rdram, ctx);
        goto after_14;
    // 0x80335524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
L_80335528:
    // 0x80335528: b           L_80335530
    // 0x8033552C: nop

        goto L_80335530;
    // 0x8033552C: nop

L_80335530:
    // 0x80335530: b           L_80335538
    // 0x80335534: nop

        goto L_80335538;
    // 0x80335534: nop

L_80335538:
    // 0x80335538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033553C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80335540: jr          $ra
    // 0x80335544: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80335544: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331F8C_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F8C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80331F90: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80331F94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80331F98: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FA0: lw          $t7, 0x6128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6128);
    // 0x80331FA4: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80331FA8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331FAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331FB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331FB4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331FB8: lw          $t2, 0x614C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X614C);
    // 0x80331FBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331FC0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331FC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331FC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331FCC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331FD0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331FD4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80331FD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331FDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331FE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331FE4: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331FE8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331FEC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331FF0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331FF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331FF8: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x80331FFC: swc1        $f8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f8.u32l;
    // 0x80332000: jr          $ra
    // 0x80332004: nop

    return;
    // 0x80332004: nop

    // 0x80332008: jr          $ra
    // 0x8033200C: nop

    return;
    // 0x8033200C: nop

;}
RECOMP_FUNC void func_8033001C_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033001C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330024: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80330028: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033002C: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80330030: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80330034: nop

    // 0x80330038: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8033003C: beq         $t8, $zero, L_803300B8
    if (ctx->r24 == 0) {
        // 0x80330040: nop
    
            goto L_803300B8;
    }
    // 0x80330040: nop

    // 0x80330044: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80330048: lw          $t9, 0x63C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X63C0);
    // 0x8033004C: nop

    // 0x80330050: bne         $t9, $zero, L_80330088
    if (ctx->r25 != 0) {
        // 0x80330054: nop
    
            goto L_80330088;
    }
    // 0x80330054: nop

    // 0x80330058: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033005C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330060: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80330064: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330068: jal         0x800178D4
    // 0x8033006C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x8033006C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80330070: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330074: sb          $zero, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = 0;
    // 0x80330078: b           L_80330170
    // 0x8033007C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80330170;
    // 0x8033007C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80330080: b           L_803300B0
    // 0x80330084: nop

        goto L_803300B0;
    // 0x80330084: nop

L_80330088:
    // 0x80330088: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033008C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330090: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80330094: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330098: jal         0x800178D4
    // 0x8033009C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8033009C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803300A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300A4: sb          $zero, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = 0;
    // 0x803300A8: b           L_80330170
    // 0x803300AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80330170;
    // 0x803300AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_803300B0:
    // 0x803300B0: b           L_8033014C
    // 0x803300B4: nop

        goto L_8033014C;
    // 0x803300B4: nop

L_803300B8:
    // 0x803300B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803300BC: addiu       $t0, $t0, -0x1D50
    ctx->r8 = ADD32(ctx->r8, -0X1D50);
    // 0x803300C0: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x803300C4: nop

    // 0x803300C8: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x803300CC: beq         $t2, $zero, L_80330104
    if (ctx->r10 == 0) {
        // 0x803300D0: nop
    
            goto L_80330104;
    }
    // 0x803300D0: nop

    // 0x803300D4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803300D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803300DC: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x803300E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803300E4: jal         0x800178D4
    // 0x803300E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x803300E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x803300EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300F0: sb          $zero, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = 0;
    // 0x803300F4: b           L_80330170
    // 0x803300F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80330170;
    // 0x803300F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x803300FC: b           L_8033014C
    // 0x80330100: nop

        goto L_8033014C;
    // 0x80330100: nop

L_80330104:
    // 0x80330104: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033010C: beq         $t3, $at, L_80330120
    if (ctx->r11 == ctx->r1) {
        // 0x80330110: nop
    
            goto L_80330120;
    }
    // 0x80330110: nop

    // 0x80330114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330118: bne         $t3, $at, L_8033014C
    if (ctx->r11 != ctx->r1) {
        // 0x8033011C: nop
    
            goto L_8033014C;
    }
    // 0x8033011C: nop

L_80330120:
    // 0x80330120: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330124: lw          $t4, 0x63C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X63C0);
    // 0x80330128: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033012C: xori        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 ^ 0X1;
    // 0x80330130: sw          $t5, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r13;
    // 0x80330134: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033013C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330140: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330144: jal         0x800178D4
    // 0x80330148: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80330148: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_8033014C:
    // 0x8033014C: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330150: lw          $t6, 0x63C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X63C0);
    // 0x80330154: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330158: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033015C: sb          $t7, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = ctx->r15;
    // 0x80330160: b           L_80330170
    // 0x80330164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330170;
    // 0x80330164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80330168: b           L_80330170
    // 0x8033016C: nop

        goto L_80330170;
    // 0x8033016C: nop

L_80330170:
    // 0x80330170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330178: jr          $ra
    // 0x8033017C: nop

    return;
    // 0x8033017C: nop

;}
RECOMP_FUNC void func_80332E10_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332E14: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80332E18: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80332E1C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80332E20: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80332E24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332E2C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80332E30: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80332E34: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80332E38: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80332E3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E40: lbu         $t1, 0x3B3C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3B3C);
    // 0x80332E44: nop

    // 0x80332E48: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80332E4C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80332E50: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x80332E54: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80332E58: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80332E5C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80332E60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332E64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332E68: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x80332E6C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332E70: nop

    // 0x80332E74: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x80332E78: cvt.d.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.d = CVT_D_W(ctx->f18.u32l);
    // 0x80332E7C: mul.d       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f6.d);
    // 0x80332E80: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x80332E84: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x80332E88: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80332E8C: b           L_80332E9C
    // 0x80332E90: nop

        goto L_80332E9C;
    // 0x80332E90: nop

    // 0x80332E94: b           L_80332E9C
    // 0x80332E98: nop

        goto L_80332E9C;
    // 0x80332E98: nop

L_80332E9C:
    // 0x80332E9C: jr          $ra
    // 0x80332EA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80332EA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803303BC_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x803303C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803303C4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803303C8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803303CC: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x803303D0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x803303D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803303D8: jal         0x8001A928
    // 0x803303DC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x803303DC: nop

    after_0:
    // 0x803303E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x803303E4: lb          $a0, 0x4801($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4801);
    // 0x803303E8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x803303EC: jal         0x80060E40
    // 0x803303F0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x803303F0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_1:
    // 0x803303F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x803303F8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x803303FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330400: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330404: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033040C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330410: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330414: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330418: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033041C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330420: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80330424: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330428: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033042C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330430: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330438: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033043C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330444: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330448: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x8033044C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80330450: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330454: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330458: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033045C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330460: lwc1        $f8, 0x61F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X61F0);
    // 0x80330464: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330468: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033046C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330470: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330474: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80330478: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033047C: lwc1        $f10, 0x636C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80330480: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330484: lwc1        $f19, 0x61F8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X61F8);
    // 0x80330488: lwc1        $f18, 0x61FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X61FC);
    // 0x8033048C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330490: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330494: jal         0x80036570
    // 0x80330498: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80330498: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x8033049C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304A0: lwc1        $f6, 0x6364($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x803304A4: nop

    // 0x803304A8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x803304AC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x803304B0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x803304B4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x803304B8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x803304BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304C0: lwc1        $f4, 0x636C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x803304C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304C8: lwc1        $f11, 0x6200($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6200);
    // 0x803304CC: lwc1        $f10, 0x6204($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6204);
    // 0x803304D0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x803304D4: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x803304D8: jal         0x80034970
    // 0x803304DC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x803304DC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x803304E0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304E4: lwc1        $f16, 0x6364($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x803304E8: nop

    // 0x803304EC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x803304F0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x803304F4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x803304F8: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x803304FC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80330500: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330504: swc1        $f9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x80330508: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x8033050C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330510: lwc1        $f10, 0x636C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80330514: nop

    // 0x80330518: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8033051C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80330520: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330524: lb          $t4, 0x6360($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X6360);
    // 0x80330528: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x8033052C: nop

    // 0x80330530: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80330534: beq         $at, $zero, L_803306C4
    if (ctx->r1 == 0) {
        // 0x80330538: sh          $t3, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r11;
            goto L_803306C4;
    }
    // 0x80330538: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
L_8033053C:
    // 0x8033053C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330540: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330544: lwc1        $f19, 0x6208($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6208);
    // 0x80330548: lwc1        $f18, 0x620C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X620C);
    // 0x8033054C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x80330550: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330554: jal         0x80036570
    // 0x80330558: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80330558: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x8033055C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330560: lwc1        $f8, 0x6364($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330564: lh          $t5, 0x4E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4E);
    // 0x80330568: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8033056C: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330570: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330574: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033057C: lw          $t7, 0x6080($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6080);
    // 0x80330580: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330584: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330588: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033058C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330590: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330594: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80330598: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8033059C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803305A0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803305A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803305A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803305AC: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x803305B0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x803305B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803305B8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803305BC: lwc1        $f9, 0x6210($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6210);
    // 0x803305C0: lwc1        $f8, 0x6214($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6214);
    // 0x803305C4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x803305C8: mul.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803305CC: jal         0x80034970
    // 0x803305D0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x803305D0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_5:
    // 0x803305D4: lh          $t9, 0x4E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4E);
    // 0x803305D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803305DC: lwc1        $f18, 0x6364($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x803305E0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803305E4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803305E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803305EC: lw          $t1, 0x6080($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6080);
    // 0x803305F0: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x803305F4: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803305F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803305FC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330600: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330604: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330608: sub.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8033060C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330610: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330614: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330618: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033061C: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x80330620: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80330624: lh          $t3, 0x4E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4E);
    // 0x80330628: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x8033062C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330630: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330634: lw          $t5, 0x6080($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6080);
    // 0x80330638: lwc1        $f9, 0x40($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8033063C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330640: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330644: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330648: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033064C: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x80330650: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330654: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330658: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033065C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330660: swc1        $f20, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f20.u32l;
    // 0x80330664: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x80330668: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033066C: lwc1        $f18, 0x6370($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x80330670: lwc1        $f17, 0x40($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80330674: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330678: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033067C: add.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f16.d + ctx->f4.d;
    // 0x80330680: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80330684: swc1        $f11, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x80330688: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033068C: lwc1        $f8, 0x6368($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x80330690: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330694: nop

    // 0x80330698: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033069C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x803306A0: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x803306A4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803306A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803306AC: lb          $t1, 0x6360($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X6360);
    // 0x803306B0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x803306B4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803306B8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x803306BC: bne         $at, $zero, L_8033053C
    if (ctx->r1 != 0) {
        // 0x803306C0: sh          $t8, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r24;
            goto L_8033053C;
    }
    // 0x803306C0: sh          $t8, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r24;
L_803306C4:
    // 0x803306C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306C8: lwc1        $f16, 0x6370($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x803306CC: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x803306D0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803306D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803306D8: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x803306DC: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x803306E0: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x803306E4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x803306E8: swc1        $f9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x803306EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306F0: lwc1        $f18, 0x636C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x803306F4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306F8: lwc1        $f16, 0x6368($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x803306FC: nop

    // 0x80330700: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80330704: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80330708: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8033070C: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x80330710: nop

    // 0x80330714: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80330718: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8033071C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80330720: bltz        $t5, L_803308A8
    if (SIGNED(ctx->r13) < 0) {
        // 0x80330724: sh          $t3, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r11;
            goto L_803308A8;
    }
    // 0x80330724: sh          $t3, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r11;
L_80330728:
    // 0x80330728: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033072C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330730: lwc1        $f9, 0x6218($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6218);
    // 0x80330734: lwc1        $f8, 0x621C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X621C);
    // 0x80330738: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8033073C: mul.d       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80330740: jal         0x80036570
    // 0x80330744: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_6;
    // 0x80330744: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_6:
    // 0x80330748: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033074C: lwc1        $f16, 0x6364($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80330750: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80330754: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x80330758: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033075C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330760: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330764: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330768: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x8033076C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330770: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330774: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330778: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033077C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330780: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80330784: sub.s       $f20, $f8, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80330788: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033078C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330790: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330794: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330798: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x8033079C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x803307A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307A4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x803307A8: lwc1        $f17, 0x6220($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X6220);
    // 0x803307AC: lwc1        $f16, 0x6224($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6224);
    // 0x803307B0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x803307B4: mul.d       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803307B8: jal         0x80034970
    // 0x803307BC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x803307BC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_7:
    // 0x803307C0: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x803307C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307C8: lwc1        $f8, 0x6364($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x803307CC: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803307D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803307D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307D8: lw          $t2, 0x6080($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6080);
    // 0x803307DC: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x803307E0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x803307E4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803307E8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803307EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803307F4: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x803307F8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307FC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330800: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330804: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330808: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x8033080C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80330810: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x80330814: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330818: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033081C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330820: lw          $t6, 0x6080($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6080);
    // 0x80330824: lwc1        $f17, 0x40($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80330828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033082C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330830: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330834: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330838: cvt.s.d     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f20.fl = CVT_S_D(ctx->f16.d);
    // 0x8033083C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330840: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330844: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330848: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033084C: swc1        $f20, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f20.u32l;
    // 0x80330850: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x80330854: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330858: lwc1        $f8, 0x6370($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x8033085C: lwc1        $f7, 0x40($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80330860: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80330864: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x80330868: sub.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f6.d - ctx->f18.d;
    // 0x8033086C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80330870: swc1        $f5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x80330874: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330878: lwc1        $f16, 0x6368($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x8033087C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80330880: nop

    // 0x80330884: sub.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330888: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8033088C: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x80330890: nop

    // 0x80330894: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80330898: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8033089C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x803308A0: bgez        $t1, L_80330728
    if (SIGNED(ctx->r9) >= 0) {
        // 0x803308A4: sh          $t9, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r25;
            goto L_80330728;
    }
    // 0x803308A4: sh          $t9, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r25;
L_803308A8:
    // 0x803308A8: b           L_803308B0
    // 0x803308AC: nop

        goto L_803308B0;
    // 0x803308AC: nop

L_803308B0:
    // 0x803308B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308B4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803308B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803308BC: jr          $ra
    // 0x803308C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803308C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_803302D4_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803302D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803302DC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803302E0: lb          $t6, 0x6360($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X6360);
    // 0x803302E4: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x803302E8: blez        $t6, L_80330350
    if (SIGNED(ctx->r14) <= 0) {
        // 0x803302EC: nop
    
            goto L_80330350;
    }
    // 0x803302EC: nop

L_803302F0:
    // 0x803302F0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803302F4: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x803302F8: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x803302FC: nop

    // 0x80330300: bne         $t7, $t8, L_80330310
    if (ctx->r15 != ctx->r24) {
        // 0x80330304: nop
    
            goto L_80330310;
    }
    // 0x80330304: nop

    // 0x80330308: b           L_8033032C
    // 0x8033030C: nop

        goto L_8033032C;
    // 0x8033030C: nop

L_80330310:
    // 0x80330310: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80330314: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80330318: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033031C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80330320: lw          $a0, 0x6080($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6080);
    // 0x80330324: jal         0x800604A8
    // 0x80330328: nop

    func_800604A8(rdram, ctx);
        goto after_0;
    // 0x80330328: nop

    after_0:
L_8033032C:
    // 0x8033032C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x80330330: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330334: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80330338: lb          $t5, 0x6360($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X6360);
    // 0x8033033C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80330340: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80330344: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80330348: bne         $at, $zero, L_803302F0
    if (ctx->r1 != 0) {
        // 0x8033034C: sh          $t2, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r10;
            goto L_803302F0;
    }
    // 0x8033034C: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
L_80330350:
    // 0x80330350: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80330354: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80330358: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033035C: beq         $t6, $at, L_8033036C
    if (ctx->r14 == ctx->r1) {
        // 0x80330360: nop
    
            goto L_8033036C;
    }
    // 0x80330360: nop

    // 0x80330364: jal         0x800604A8
    // 0x80330368: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800604A8(rdram, ctx);
        goto after_1;
    // 0x80330368: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
L_8033036C:
    // 0x8033036C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80330370: lb          $t7, 0x4801($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4801);
    // 0x80330374: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330378: beq         $t7, $at, L_80330388
    if (ctx->r15 == ctx->r1) {
        // 0x8033037C: nop
    
            goto L_80330388;
    }
    // 0x8033037C: nop

    // 0x80330380: jal         0x800604A8
    // 0x80330384: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800604A8(rdram, ctx);
        goto after_2;
    // 0x80330384: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_2:
L_80330388:
    // 0x80330388: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8033038C: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x80330390: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330394: beq         $t8, $at, L_803303A4
    if (ctx->r24 == ctx->r1) {
        // 0x80330398: nop
    
            goto L_803303A4;
    }
    // 0x80330398: nop

    // 0x8033039C: jal         0x800604A8
    // 0x803303A0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_800604A8(rdram, ctx);
        goto after_3;
    // 0x803303A0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_3:
L_803303A4:
    // 0x803303A4: b           L_803303AC
    // 0x803303A8: nop

        goto L_803303AC;
    // 0x803303A8: nop

L_803303AC:
    // 0x803303AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803303B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803303B4: jr          $ra
    // 0x803303B8: nop

    return;
    // 0x803303B8: nop

;}
RECOMP_FUNC void func_80332918_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332918: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033291C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80332920: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80332924: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80332928: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x8033292C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332930: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332934: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80332938: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8033293C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80332940: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332944: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332948: lwc1        $f4, 0x6098($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6098);
    // 0x8033294C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332950: lwc1        $f9, 0x6308($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6308);
    // 0x80332954: lwc1        $f8, 0x630C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X630C);
    // 0x80332958: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033295C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80332960: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80332964: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x80332968: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8033296C: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332970: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80332974: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332978: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033297C: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80332980: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80332984: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80332988: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8033298C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80332990: mflo        $t3
    ctx->r11 = lo;
    // 0x80332994: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332998: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8033299C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803329A0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x803329A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803329A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803329AC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803329B0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x803329B4: nop

    // 0x803329B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803329BC: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x803329C0: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x803329C4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x803329C8: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x803329CC: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803329D0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803329D4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803329D8: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x803329DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329E0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803329E4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803329E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803329EC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803329F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803329F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803329F8: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803329FC: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332A00: nop

    // 0x80332A04: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80332A08: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80332A0C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80332A10: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332A14: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80332A18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332A1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332A20: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80332A24: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80332A28: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80332A2C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80332A30: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80332A34: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332A38: mflo        $t1
    ctx->r9 = lo;
    // 0x80332A3C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332A40: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80332A44: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332A48: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80332A4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332A50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332A54: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80332A58: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80332A5C: nop

    // 0x80332A60: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80332A64: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80332A68: swc1        $f4, 0x6374($at)
    MEM_W(0X6374, ctx->r1) = ctx->f4.u32l;
    // 0x80332A6C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80332A70: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x80332A74: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80332A78: lb          $t5, 0x4802($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4802);
    // 0x80332A7C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332A80: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80332A84: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80332A88: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80332A8C: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80332A90: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332A94: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332A98: lwc1        $f6, 0x609C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X609C);
    // 0x80332A9C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332AA0: lwc1        $f11, 0x6310($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6310);
    // 0x80332AA4: lwc1        $f10, 0x6314($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6314);
    // 0x80332AA8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332AAC: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x80332AB0: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x80332AB4: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x80332AB8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80332ABC: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332AC0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80332AC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332AC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332ACC: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80332AD0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80332AD4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80332AD8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80332ADC: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x80332AE0: mflo        $t0
    ctx->r8 = lo;
    // 0x80332AE4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332AE8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80332AEC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332AF0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80332AF4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332AF8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332AFC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80332B00: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80332B04: nop

    // 0x80332B08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332B0C: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80332B10: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80332B14: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80332B18: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x80332B1C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332B20: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332B24: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80332B28: lw          $t5, 0x6080($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6080);
    // 0x80332B2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B30: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80332B34: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80332B38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332B3C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80332B40: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332B44: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332B48: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332B4C: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332B50: nop

    // 0x80332B54: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80332B58: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80332B5C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80332B60: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80332B64: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80332B68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332B6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332B70: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80332B74: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80332B78: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80332B7C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80332B80: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80332B84: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332B88: mflo        $t7
    ctx->r15 = lo;
    // 0x80332B8C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332B90: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80332B94: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332B98: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80332B9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332BA0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332BA4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80332BA8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80332BAC: nop

    // 0x80332BB0: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332BB4: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80332BB8: swc1        $f6, 0x6378($at)
    MEM_W(0X6378, ctx->r1) = ctx->f6.u32l;
    // 0x80332BBC: b           L_80332BC4
    // 0x80332BC0: nop

        goto L_80332BC4;
    // 0x80332BC0: nop

L_80332BC4:
    // 0x80332BC4: jr          $ra
    // 0x80332BC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80332BC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80335DE4_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335DE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80335DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335DEC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80335DF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80335DF4: jal         0x8001ECB8
    // 0x80335DF8: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80335DF8: nop

    after_0:
    // 0x80335DFC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80335E00: addiu       $t6, $t6, 0x5B44
    ctx->r14 = ADD32(ctx->r14, 0X5B44);
    // 0x80335E04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80335E08: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80335E0C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80335E10: addiu       $t7, $t7, 0x5960
    ctx->r15 = ADD32(ctx->r15, 0X5960);
    // 0x80335E14: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80335E18: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80335E1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E20: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80335E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335E28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E2C: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x80335E30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335E34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E38: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x80335E3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335E40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E44: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x80335E48: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335E4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E50: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x80335E54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335E58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E5C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80335E60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335E64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E68: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x80335E6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335E70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E74: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80335E78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80335E7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335E80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E84: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80335E88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335E8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335E90: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x80335E94: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80335E98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335EA0: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x80335EA4: jal         0x80019C84
    // 0x80335EA8: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80335EA8: nop

    after_1:
    // 0x80335EAC: jal         0x80019D2C
    // 0x80335EB0: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80335EB0: nop

    after_2:
    // 0x80335EB4: jal         0x8001A258
    // 0x80335EB8: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80335EB8: nop

    after_3:
    // 0x80335EBC: jal         0x803302BC
    // 0x80335EC0: nop

    func_803302BC_unk_bin_2(rdram, ctx);
        goto after_4;
    // 0x80335EC0: nop

    after_4:
    // 0x80335EC4: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80335EC8: addiu       $t8, $t8, 0x3738
    ctx->r24 = ADD32(ctx->r24, 0X3738);
    // 0x80335ECC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80335ED0: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80335ED4: jal         0x80060278
    // 0x80335ED8: nop

    func_80060278(rdram, ctx);
        goto after_5;
    // 0x80335ED8: nop

    after_5:
    // 0x80335EDC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80335EE0: jal         0x800608B8
    // 0x80335EE4: addiu       $a0, $a0, 0x3DDC
    ctx->r4 = ADD32(ctx->r4, 0X3DDC);
    func_800608B8(rdram, ctx);
        goto after_6;
    // 0x80335EE4: addiu       $a0, $a0, 0x3DDC
    ctx->r4 = ADD32(ctx->r4, 0X3DDC);
    after_6:
    // 0x80335EE8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335EEC: sw          $zero, 0x63BC($at)
    MEM_W(0X63BC, ctx->r1) = 0;
    // 0x80335EF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80335EF4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335EF8: sb          $t9, 0x6361($at)
    MEM_B(0X6361, ctx->r1) = ctx->r25;
    // 0x80335EFC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335F00: lwc1        $f16, 0x6350($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6350);
    // 0x80335F04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335F08: swc1        $f16, 0x6364($at)
    MEM_W(0X6364, ctx->r1) = ctx->f16.u32l;
    // 0x80335F0C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80335F10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335F14: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335F18: swc1        $f18, 0x6368($at)
    MEM_W(0X6368, ctx->r1) = ctx->f18.u32l;
    // 0x80335F1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335F20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335F24: swc1        $f4, 0x636C($at)
    MEM_W(0X636C, ctx->r1) = ctx->f4.u32l;
    // 0x80335F28: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80335F2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335F30: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335F34: swc1        $f6, 0x6370($at)
    MEM_W(0X6370, ctx->r1) = ctx->f6.u32l;
    // 0x80335F38: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80335F3C: lb          $t0, 0x4800($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4800);
    // 0x80335F40: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x80335F44: bltz        $t0, L_80336030
    if (SIGNED(ctx->r8) < 0) {
        // 0x80335F48: nop
    
            goto L_80336030;
    }
    // 0x80335F48: nop

L_80335F4C:
    // 0x80335F4C: lh          $s0, 0x2E($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X2E);
    // 0x80335F50: nop

    // 0x80335F54: beq         $s0, $zero, L_80335F7C
    if (ctx->r16 == 0) {
        // 0x80335F58: nop
    
            goto L_80335F7C;
    }
    // 0x80335F58: nop

    // 0x80335F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335F60: beq         $s0, $at, L_80335FAC
    if (ctx->r16 == ctx->r1) {
        // 0x80335F64: nop
    
            goto L_80335FAC;
    }
    // 0x80335F64: nop

    // 0x80335F68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335F6C: beq         $s0, $at, L_80335FDC
    if (ctx->r16 == ctx->r1) {
        // 0x80335F70: nop
    
            goto L_80335FDC;
    }
    // 0x80335F70: nop

    // 0x80335F74: b           L_8033600C
    // 0x80335F78: nop

        goto L_8033600C;
    // 0x80335F78: nop

L_80335F7C:
    // 0x80335F7C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80335F80: lb          $t1, 0x4800($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4800);
    // 0x80335F84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335F88: bne         $t1, $at, L_80335F98
    if (ctx->r9 != ctx->r1) {
        // 0x80335F8C: nop
    
            goto L_80335F98;
    }
    // 0x80335F8C: nop

    // 0x80335F90: b           L_80335F9C
    // 0x80335F94: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80335F9C;
    // 0x80335F94: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80335F98:
    // 0x80335F98: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_80335F9C:
    // 0x80335F9C: jal         0x80331D78
    // 0x80335FA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80331D78_unk_bin_2(rdram, ctx);
        goto after_7;
    // 0x80335FA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80335FA4: b           L_8033600C
    // 0x80335FA8: nop

        goto L_8033600C;
    // 0x80335FA8: nop

L_80335FAC:
    // 0x80335FAC: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80335FB0: lb          $t2, 0x4800($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4800);
    // 0x80335FB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335FB8: bne         $t2, $at, L_80335FC8
    if (ctx->r10 != ctx->r1) {
        // 0x80335FBC: nop
    
            goto L_80335FC8;
    }
    // 0x80335FBC: nop

    // 0x80335FC0: b           L_80335FCC
    // 0x80335FC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80335FCC;
    // 0x80335FC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80335FC8:
    // 0x80335FC8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_80335FCC:
    // 0x80335FCC: jal         0x80332094
    // 0x80335FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80332094_unk_bin_2(rdram, ctx);
        goto after_8;
    // 0x80335FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80335FD4: b           L_8033600C
    // 0x80335FD8: nop

        goto L_8033600C;
    // 0x80335FD8: nop

L_80335FDC:
    // 0x80335FDC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80335FE0: lb          $t3, 0x4800($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4800);
    // 0x80335FE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335FE8: bne         $t3, $at, L_80335FF8
    if (ctx->r11 != ctx->r1) {
        // 0x80335FEC: nop
    
            goto L_80335FF8;
    }
    // 0x80335FEC: nop

    // 0x80335FF0: b           L_80335FFC
    // 0x80335FF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80335FFC;
    // 0x80335FF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80335FF8:
    // 0x80335FF8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_80335FFC:
    // 0x80335FFC: jal         0x80332EA4
    // 0x80336000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80332EA4_unk_bin_2(rdram, ctx);
        goto after_9;
    // 0x80336000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80336004: b           L_8033600C
    // 0x80336008: nop

        goto L_8033600C;
    // 0x80336008: nop

L_8033600C:
    // 0x8033600C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80336010: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80336014: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80336018: lb          $t8, 0x4800($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4800);
    // 0x8033601C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80336020: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80336024: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80336028: beq         $at, $zero, L_80335F4C
    if (ctx->r1 == 0) {
        // 0x8033602C: sh          $t5, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r13;
            goto L_80335F4C;
    }
    // 0x8033602C: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
L_80336030:
    // 0x80336030: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80336034: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80336038: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8033603C: jal         0x8001D244
    // 0x80336040: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_10;
    // 0x80336040: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_10:
    // 0x80336044: jal         0x8001D284
    // 0x80336048: nop

    func_8001D284(rdram, ctx);
        goto after_11;
    // 0x80336048: nop

    after_11:
    // 0x8033604C: jal         0x80000964
    // 0x80336050: nop

    func_80000964(rdram, ctx);
        goto after_12;
    // 0x80336050: nop

    after_12:
    // 0x80336054: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x80336058: lw          $v0, 0x63BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63BC);
    // 0x8033605C: b           L_8033606C
    // 0x80336060: nop

        goto L_8033606C;
    // 0x80336060: nop

    // 0x80336064: b           L_8033606C
    // 0x80336068: nop

        goto L_8033606C;
    // 0x80336068: nop

L_8033606C:
    // 0x8033606C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336070: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80336074: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80336078: jr          $ra
    // 0x8033607C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033607C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330E04_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330E0C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330E10: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330E14: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E18: lwc1        $f14, 0x6260($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6260);
    // 0x80330E1C: lwc1        $f12, 0xD3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XD3C);
    // 0x80330E20: jal         0x80015538
    // 0x80330E24: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80330E24: nop

    after_0:
    // 0x80330E28: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330E2C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330E30: swc1        $f0, 0xD3C($t7)
    MEM_W(0XD3C, ctx->r15) = ctx->f0.u32l;
    // 0x80330E34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330E3C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E40: lwc1        $f14, 0x6264($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6264);
    // 0x80330E44: lwc1        $f12, 0xE8C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0XE8C);
    // 0x80330E48: jal         0x80015538
    // 0x80330E4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80330E4C: nop

    after_1:
    // 0x80330E50: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330E54: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330E58: swc1        $f0, 0xE8C($t9)
    MEM_W(0XE8C, ctx->r25) = ctx->f0.u32l;
    // 0x80330E5C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330E60: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330E64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E68: lwc1        $f14, 0x6268($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6268);
    // 0x80330E6C: lwc1        $f12, 0x112C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X112C);
    // 0x80330E70: jal         0x80015538
    // 0x80330E74: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80330E74: nop

    after_2:
    // 0x80330E78: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330E7C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330E80: swc1        $f0, 0x112C($t1)
    MEM_W(0X112C, ctx->r9) = ctx->f0.u32l;
    // 0x80330E84: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330E88: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330E8C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E90: lwc1        $f14, 0x626C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X626C);
    // 0x80330E94: lwc1        $f12, 0x127C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X127C);
    // 0x80330E98: jal         0x80015538
    // 0x80330E9C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80330E9C: nop

    after_3:
    // 0x80330EA0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330EA4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330EA8: swc1        $f0, 0x127C($t3)
    MEM_W(0X127C, ctx->r11) = ctx->f0.u32l;
    // 0x80330EAC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330EB0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80330EB4: lwc1        $f4, 0xE70($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XE70);
    // 0x80330EB8: nop

    // 0x80330EBC: swc1        $f4, 0xFC0($t4)
    MEM_W(0XFC0, ctx->r12) = ctx->f4.u32l;
    // 0x80330EC0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330EC4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330EC8: lwc1        $f6, 0xE74($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XE74);
    // 0x80330ECC: nop

    // 0x80330ED0: swc1        $f6, 0xFC4($t5)
    MEM_W(0XFC4, ctx->r13) = ctx->f6.u32l;
    // 0x80330ED4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330ED8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330EDC: lwc1        $f8, 0xE78($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XE78);
    // 0x80330EE0: nop

    // 0x80330EE4: swc1        $f8, 0xFC8($t6)
    MEM_W(0XFC8, ctx->r14) = ctx->f8.u32l;
    // 0x80330EE8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80330EEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330EF0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330EF4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330EF8: swc1        $f10, 0xFE0($t7)
    MEM_W(0XFE0, ctx->r15) = ctx->f10.u32l;
    // 0x80330EFC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330F00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330F04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F0C: swc1        $f16, 0xFD8($t8)
    MEM_W(0XFD8, ctx->r24) = ctx->f16.u32l;
    // 0x80330F10: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330F14: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330F18: lwc1        $f18, 0x1260($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1260);
    // 0x80330F1C: nop

    // 0x80330F20: swc1        $f18, 0x13B0($t9)
    MEM_W(0X13B0, ctx->r25) = ctx->f18.u32l;
    // 0x80330F24: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330F28: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330F2C: lwc1        $f4, 0x1264($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1264);
    // 0x80330F30: nop

    // 0x80330F34: swc1        $f4, 0x13B4($t0)
    MEM_W(0X13B4, ctx->r8) = ctx->f4.u32l;
    // 0x80330F38: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330F3C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330F40: lwc1        $f6, 0x1268($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1268);
    // 0x80330F44: nop

    // 0x80330F48: swc1        $f6, 0x13B8($t1)
    MEM_W(0X13B8, ctx->r9) = ctx->f6.u32l;
    // 0x80330F4C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330F50: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330F54: lwc1        $f8, 0x1500($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1500);
    // 0x80330F58: nop

    // 0x80330F5C: swc1        $f8, 0x1650($t2)
    MEM_W(0X1650, ctx->r10) = ctx->f8.u32l;
    // 0x80330F60: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330F64: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330F68: lwc1        $f10, 0x1504($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1504);
    // 0x80330F6C: nop

    // 0x80330F70: swc1        $f10, 0x1654($t3)
    MEM_W(0X1654, ctx->r11) = ctx->f10.u32l;
    // 0x80330F74: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330F78: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80330F7C: lwc1        $f16, 0x1508($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1508);
    // 0x80330F80: nop

    // 0x80330F84: swc1        $f16, 0x1658($t4)
    MEM_W(0X1658, ctx->r12) = ctx->f16.u32l;
    // 0x80330F88: b           L_80330F90
    // 0x80330F8C: nop

        goto L_80330F90;
    // 0x80330F8C: nop

L_80330F90:
    // 0x80330F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330F98: jr          $ra
    // 0x80330F9C: nop

    return;
    // 0x80330F9C: nop

;}
RECOMP_FUNC void func_80335B44_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335B44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80335B48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80335B4C: jal         0x8001D4D0
    // 0x80335B50: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80335B50: nop

    after_0:
    // 0x80335B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335B58: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80335B5C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80335B60: jal         0x8001D638
    // 0x80335B64: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80335B64: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_1:
    // 0x80335B68: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80335B6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335B70: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335B74: lwc1        $f6, 0x634C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X634C);
    // 0x80335B78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80335B7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B84: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80335B88: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80335B8C: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80335B90: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80335B94: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80335B98: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80335B9C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80335BA0: jal         0x80036E70
    // 0x80335BA4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80335BA4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80335BA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335BAC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80335BB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335BB4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80335BB8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80335BBC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80335BC0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80335BC4: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80335BC8: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80335BCC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80335BD0: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80335BD4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80335BD8: nop

    // 0x80335BDC: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80335BE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335BE4: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80335BE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335BEC: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80335BF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335BF4: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80335BF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335BFC: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80335C00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335C04: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80335C08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C10: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80335C14: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80335C18: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80335C1C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80335C20: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80335C24: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80335C28: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80335C2C: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80335C30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335C34: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80335C38: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80335C3C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80335C40: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80335C44: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80335C48: jal         0x80037188
    // 0x80335C4C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80335C4C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80335C50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80335C54: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80335C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335C5C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80335C60: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80335C64: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80335C68: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335C6C: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80335C70: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80335C74: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80335C78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335C7C: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80335C80: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335C84: nop

    // 0x80335C88: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80335C8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80335C90: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80335C94: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80335C98:
    // 0x80335C98: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335C9C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80335CA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80335CA4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80335CA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335CAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335CB0: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80335CB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335CB8: bne         $t0, $at, L_80335CC8
    if (ctx->r8 != ctx->r1) {
        // 0x80335CBC: nop
    
            goto L_80335CC8;
    }
    // 0x80335CBC: nop

    // 0x80335CC0: b           L_80335DC4
    // 0x80335CC4: nop

        goto L_80335DC4;
    // 0x80335CC4: nop

L_80335CC8:
    // 0x80335CC8: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335CCC: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80335CD0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335CD4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80335CD8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335CDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335CE0: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80335CE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335CE8: beq         $t3, $at, L_80335D8C
    if (ctx->r11 == ctx->r1) {
        // 0x80335CEC: nop
    
            goto L_80335D8C;
    }
    // 0x80335CEC: nop

    // 0x80335CF0: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335CF4: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80335CF8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335CFC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80335D00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335D04: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80335D08: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80335D0C: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80335D10: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80335D14: jal         0x8001C1A8
    // 0x80335D18: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80335D18: nop

    after_4:
    // 0x80335D1C: beq         $v0, $zero, L_80335D84
    if (ctx->r2 == 0) {
        // 0x80335D20: nop
    
            goto L_80335D84;
    }
    // 0x80335D20: nop

    // 0x80335D24: jal         0x8001838C
    // 0x80335D28: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80335D28: nop

    after_5:
    // 0x80335D2C: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335D30: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80335D34: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80335D38: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80335D3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335D40: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x80335D44: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80335D48: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x80335D4C: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x80335D50: jal         0x8001B014
    // 0x80335D54: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x80335D54: nop

    after_6:
    // 0x80335D58: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335D5C: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80335D60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80335D64: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80335D68: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335D6C: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x80335D70: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80335D74: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x80335D78: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x80335D7C: jal         0x8001C384
    // 0x80335D80: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80335D80: nop

    after_7:
L_80335D84:
    // 0x80335D84: b           L_80335DB0
    // 0x80335D88: nop

        goto L_80335DB0;
    // 0x80335D88: nop

L_80335D8C:
    // 0x80335D8C: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335D90: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80335D94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D98: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80335D9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335DA0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80335DA4: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80335DA8: jal         0x800623E0
    // 0x80335DAC: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80335DAC: nop

    after_8:
L_80335DB0:
    // 0x80335DB0: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80335DB4: nop

    // 0x80335DB8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80335DBC: b           L_80335C98
    // 0x80335DC0: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80335C98;
    // 0x80335DC0: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80335DC4:
    // 0x80335DC4: jal         0x80330180
    // 0x80335DC8: nop

    func_80330180_unk_bin_2(rdram, ctx);
        goto after_9;
    // 0x80335DC8: nop

    after_9:
    // 0x80335DCC: b           L_80335DD4
    // 0x80335DD0: nop

        goto L_80335DD4;
    // 0x80335DD0: nop

L_80335DD4:
    // 0x80335DD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80335DD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80335DDC: jr          $ra
    // 0x80335DE0: nop

    return;
    // 0x80335DE0: nop

;}
RECOMP_FUNC void func_80332010_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332010: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80332014: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80332018: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8033201C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332024: lw          $t7, 0x6128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6128);
    // 0x80332028: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8033202C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80332030: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332034: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332038: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033203C: lw          $t2, 0x614C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X614C);
    // 0x80332040: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332044: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332048: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033204C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332050: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332054: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332058: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033205C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332060: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332068: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033206C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332070: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332074: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332078: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033207C: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x80332080: swc1        $f8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f8.u32l;
    // 0x80332084: jr          $ra
    // 0x80332088: nop

    return;
    // 0x80332088: nop

    // 0x8033208C: jr          $ra
    // 0x80332090: nop

    return;
    // 0x80332090: nop

;}
