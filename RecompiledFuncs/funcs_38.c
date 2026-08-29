#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800B3DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3DCC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B3DD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B3DD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B3DD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B3DDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B3DE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B3DE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B3DE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3DEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3DF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3DF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3DF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B3DFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B3E00: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B3E04: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E08: nop

    // 0x800B3E0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B3E10: nop

    // 0x800B3E14: bne         $t1, $zero, L_800B3E64
    if (ctx->r9 != 0) {
        // 0x800B3E18: nop
    
            goto L_800B3E64;
    }
    // 0x800B3E18: nop

    // 0x800B3E1C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B3E24: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B3E28: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800B3E2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B3E30: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E34: nop

    // 0x800B3E38: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B3E3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B3E40: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E44: nop

    // 0x800B3E48: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B3E4C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E50: addiu       $t6, $zero, 0x168
    ctx->r14 = ADD32(0, 0X168);
    // 0x800B3E54: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800B3E58: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E5C: nop

    // 0x800B3E60: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
L_800B3E64:
    // 0x800B3E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3E68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3E6C: jal         0x8002A8B4
    // 0x800B3E70: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x800B3E70: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x800B3E74: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B3E78: nop

    // 0x800B3E7C: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800B3E80: nop

    // 0x800B3E84: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x800B3E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3E8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3E90: jal         0x80028FA0
    // 0x800B3E94: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800B3E94: nop

    after_1:
    // 0x800B3E98: beq         $v0, $zero, L_800B3EE8
    if (ctx->r2 == 0) {
        // 0x800B3E9C: nop
    
            goto L_800B3EE8;
    }
    // 0x800B3E9C: nop

    // 0x800B3EA0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B3EA4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800B3EA8: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800B3EAC: lh          $t1, 0x104($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X104);
    // 0x800B3EB0: nop

    // 0x800B3EB4: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800B3EB8: bne         $at, $zero, L_800B3ED8
    if (ctx->r1 != 0) {
        // 0x800B3EBC: nop
    
            goto L_800B3ED8;
    }
    // 0x800B3EBC: nop

    // 0x800B3EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3EC8: jal         0x80029B60
    // 0x800B3ECC: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800B3ECC: nop

    after_2:
    // 0x800B3ED0: b           L_800B3EE8
    // 0x800B3ED4: nop

        goto L_800B3EE8;
    // 0x800B3ED4: nop

L_800B3ED8:
    // 0x800B3ED8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B3EDC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3EE0: nop

    // 0x800B3EE4: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
L_800B3EE8:
    // 0x800B3EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3EF0: jal         0x80029C40
    // 0x800B3EF4: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B3EF4: nop

    after_3:
    // 0x800B3EF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800B3EFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B3F00: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B3F04: nop

    // 0x800B3F08: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
    // 0x800B3F0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B3F10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B3F14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3F18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3F1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B3F20: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B3F24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B3F28: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800B3F2C: jal         0x80029018
    // 0x800B3F30: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800B3F30: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800B3F34: beq         $v0, $zero, L_800B400C
    if (ctx->r2 == 0) {
        // 0x800B3F38: nop
    
            goto L_800B400C;
    }
    // 0x800B3F38: nop

    // 0x800B3F3C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B3F40: nop

    // 0x800B3F44: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800B3F48: nop

    // 0x800B3F4C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800B3F50: jal         0x800297DC
    // 0x800B3F54: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800B3F54: nop

    after_5:
    // 0x800B3F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3F60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B3F64: jal         0x80029824
    // 0x800B3F68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800B3F68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800B3F6C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B3F70: nop

    // 0x800B3F74: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B3F78: nop

    // 0x800B3F7C: swc1        $f8, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f8.u32l;
    // 0x800B3F80: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800B3F84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B3F88: nop

    // 0x800B3F8C: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x800B3F90: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B3F94: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x800B3F98: lwc1        $f12, 0xD4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x800B3F9C: lwc1        $f14, 0x3C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B3FA0: jal         0x8002A800
    // 0x800B3FA4: nop

    func_8002A800(rdram, ctx);
        goto after_7;
    // 0x800B3FA4: nop

    after_7:
    // 0x800B3FA8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FAC: nop

    // 0x800B3FB0: sh          $v0, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r2;
    // 0x800B3FB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B3FB8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FBC: nop

    // 0x800B3FC0: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
    // 0x800B3FC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B3FC8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FCC: nop

    // 0x800B3FD0: swc1        $f18, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f18.u32l;
    // 0x800B3FD4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FD8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x800B3FDC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800B3FE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B3FE4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FE8: nop

    // 0x800B3FEC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B3FF0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B3FF4: nop

    // 0x800B3FF8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800B3FFC: b           L_800B4110
    // 0x800B4000: nop

        goto L_800B4110;
    // 0x800B4000: nop

    // 0x800B4004: b           L_800B4018
    // 0x800B4008: nop

        goto L_800B4018;
    // 0x800B4008: nop

L_800B400C:
    // 0x800B400C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B4010: jal         0x800C00F4
    // 0x800B4014: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_8;
    // 0x800B4014: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
L_800B4018:
    // 0x800B4018: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B401C: nop

    // 0x800B4020: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800B4024: lwc1        $f10, 0x44($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800B4028: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800B402C: nop

    // 0x800B4030: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B4034: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800B4038: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800B403C: nop

    // 0x800B4040: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800B4044: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B4048: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B404C: nop

    // 0x800B4050: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800B4054: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800B4058: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800B405C: sh          $t9, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r25;
    // 0x800B4060: nop

    // 0x800B4064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B406C: jal         0x8002A2EC
    // 0x800B4070: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_9;
    // 0x800B4070: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_9:
    // 0x800B4074: beq         $v0, $zero, L_800B40CC
    if (ctx->r2 == 0) {
        // 0x800B4078: nop
    
            goto L_800B40CC;
    }
    // 0x800B4078: nop

    // 0x800B407C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B4080: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B4084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B4088: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800B408C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800B4090: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800B4094: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800B4098: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B409C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x800B40A0: nop

    // 0x800B40A4: bc1f        L_800B40CC
    if (!c1cs) {
        // 0x800B40A8: nop
    
            goto L_800B40CC;
    }
    // 0x800B40A8: nop

    // 0x800B40AC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B40B0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800B40B4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800B40B8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B40BC: nop

    // 0x800B40C0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800B40C4: b           L_800B4110
    // 0x800B40C8: nop

        goto L_800B4110;
    // 0x800B40C8: nop

L_800B40CC:
    // 0x800B40CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B40D0: nop

    // 0x800B40D4: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x800B40D8: nop

    // 0x800B40DC: bgtz        $t7, L_800B4108
    if (SIGNED(ctx->r15) > 0) {
        // 0x800B40E0: nop
    
            goto L_800B4108;
    }
    // 0x800B40E0: nop

    // 0x800B40E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B40E8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800B40EC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B40F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B40F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B40F8: sh          $t6, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r14;
    // 0x800B40FC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B4100: nop

    // 0x800B4104: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800B4108:
    // 0x800B4108: b           L_800B4110
    // 0x800B410C: nop

        goto L_800B4110;
    // 0x800B410C: nop

L_800B4110:
    // 0x800B4110: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B4114: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B4118: jr          $ra
    // 0x800B411C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B411C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009359C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009359C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800935A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800935A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800935A8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800935AC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800935B0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800935B4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800935B8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800935BC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800935C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800935C4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800935C8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800935CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800935D0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800935D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800935D8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800935DC: addiu       $a1, $a1, 0x181C
    ctx->r5 = ADD32(ctx->r5, 0X181C);
    // 0x800935E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800935E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800935E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800935EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800935F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800935F4: jal         0x80027464
    // 0x800935F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800935F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800935FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093600: b           L_80093608
    // 0x80093604: nop

        goto L_80093608;
    // 0x80093604: nop

L_80093608:
    // 0x80093608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009360C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093610: jr          $ra
    // 0x80093614: nop

    return;
    // 0x80093614: nop

;}
RECOMP_FUNC void func_800B765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B765C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B7660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B7664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B766C: jal         0x8002B0E4
    // 0x800B7670: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B7670: nop

    after_0:
    // 0x800B7674: b           L_800B767C
    // 0x800B7678: nop

        goto L_800B767C;
    // 0x800B7678: nop

L_800B767C:
    // 0x800B767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B7680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B7684: jr          $ra
    // 0x800B7688: nop

    return;
    // 0x800B7688: nop

;}
RECOMP_FUNC void func_800BEDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEDB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BEDB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BEDB8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BEDBC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800BEDC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BEDC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BEDC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BEDCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BEDD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BEDD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BEDD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BEDDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BEDE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BEDE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BEDE8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800BEDEC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BEDF0: nop

    // 0x800BEDF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BEDF8: nop

    // 0x800BEDFC: bne         $t1, $zero, L_800BEE4C
    if (ctx->r9 != 0) {
        // 0x800BEE00: nop
    
            goto L_800BEE4C;
    }
    // 0x800BEE00: nop

    // 0x800BEE04: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800BEE08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BEE0C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BEE10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BEE14: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800BEE18: nop

    // 0x800BEE1C: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x800BEE20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEE24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEE28: jal         0x8001BB04
    // 0x800BEE2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_0;
    // 0x800BEE2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800BEE30: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BEE34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEE38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEE3C: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800BEE40: lw          $a1, 0x48($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X48);
    // 0x800BEE44: jal         0x80029EF8
    // 0x800BEE48: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800BEE48: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    after_1:
L_800BEE4C:
    // 0x800BEE4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEE50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEE54: jal         0x80029C40
    // 0x800BEE58: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BEE58: nop

    after_2:
    // 0x800BEE5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800BEE60: nop

    // 0x800BEE64: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800BEE68: nop

    // 0x800BEE6C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800BEE70: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BEE74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BEE78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEE7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEE80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BEE84: lui         $a2, 0x430C
    ctx->r6 = S32(0X430C << 16);
    // 0x800BEE88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BEE8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800BEE90: jal         0x80029018
    // 0x800BEE94: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800BEE94: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800BEE98: beq         $v0, $zero, L_800BEEB0
    if (ctx->r2 == 0) {
        // 0x800BEE9C: nop
    
            goto L_800BEEB0;
    }
    // 0x800BEE9C: nop

    // 0x800BEEA0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800BEEA4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BEEA8: nop

    // 0x800BEEAC: swc1        $f16, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f16.u32l;
L_800BEEB0:
    // 0x800BEEB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BEEB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEEB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEEBC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800BEEC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800BEEC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BEEC8: jal         0x80029F58
    // 0x800BEECC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800BEECC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x800BEED0: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800BEED4: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800BEED8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BEEDC: bne         $t8, $at, L_800BEF3C
    if (ctx->r24 != ctx->r1) {
        // 0x800BEEE0: nop
    
            goto L_800BEF3C;
    }
    // 0x800BEEE0: nop

    // 0x800BEEE4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BEEE8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800BEEEC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800BEEF0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800BEEF4: nop

    // 0x800BEEF8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800BEEFC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800BEF00: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x800BEF04: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800BEF08: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800BEF0C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BEF10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800BEF14: lw          $t5, 0x7740($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7740);
    // 0x800BEF18: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800BEF1C: bne         $t5, $at, L_800BEF3C
    if (ctx->r13 != ctx->r1) {
        // 0x800BEF20: nop
    
            goto L_800BEF3C;
    }
    // 0x800BEF20: nop

    // 0x800BEF24: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF28: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800BEF2C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800BEF30: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF34: nop

    // 0x800BEF38: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800BEF3C:
    // 0x800BEF3C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF40: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800BEF44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BEF48: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800BEF4C: nop

    // 0x800BEF50: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800BEF54: nop

    // 0x800BEF58: bc1f        L_800BEF70
    if (!c1cs) {
        // 0x800BEF5C: nop
    
            goto L_800BEF70;
    }
    // 0x800BEF5C: nop

    // 0x800BEF60: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800BEF64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BEF68: b           L_800BEFC0
    // 0x800BEF6C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
        goto L_800BEFC0;
    // 0x800BEF6C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800BEF70:
    // 0x800BEF70: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BEF74: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800BEF78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800BEF7C: lwc1        $f10, 0x28($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800BEF80: nop

    // 0x800BEF84: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800BEF88: nop

    // 0x800BEF8C: bc1f        L_800BEFA4
    if (!c1cs) {
        // 0x800BEF90: nop
    
            goto L_800BEFA4;
    }
    // 0x800BEF90: nop

    // 0x800BEF94: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800BEF98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800BEF9C: b           L_800BEFB4
    // 0x800BEFA0: nop

        goto L_800BEFB4;
    // 0x800BEFA0: nop

L_800BEFA4:
    // 0x800BEFA4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800BEFA8: nop

    // 0x800BEFAC: lwc1        $f20, 0x28($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800BEFB0: nop

L_800BEFB4:
    // 0x800BEFB4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800BEFB8: nop

    // 0x800BEFBC: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
L_800BEFC0:
    // 0x800BEFC0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800BEFC4: nop

    // 0x800BEFC8: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800BEFCC: nop

    // 0x800BEFD0: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x800BEFD4: b           L_800BEFDC
    // 0x800BEFD8: nop

        goto L_800BEFDC;
    // 0x800BEFD8: nop

L_800BEFDC:
    // 0x800BEFDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BEFE0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800BEFE4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800BEFE8: jr          $ra
    // 0x800BEFEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800BEFEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DD9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD9E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DD9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DD9E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD9EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD9F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD9F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD9F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD9FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DDA00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDA04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DDA08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DDA0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DDA10: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DDA14: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDA18: nop

    // 0x800DDA1C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DDA20: nop

    // 0x800DDA24: bne         $t1, $zero, L_800DDA60
    if (ctx->r9 != 0) {
        // 0x800DDA28: nop
    
            goto L_800DDA60;
    }
    // 0x800DDA28: nop

    // 0x800DDA2C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDA30: nop

    // 0x800DDA34: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DDA38: nop

    // 0x800DDA3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DDA40: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DDA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDA4C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDA50: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDA54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDA58: jal         0x8001ABF4
    // 0x800DDA5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800DDA5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800DDA60:
    // 0x800DDA60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDA64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDA68: jal         0x8002A1FC
    // 0x800DDA6C: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800DDA6C: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_1:
    // 0x800DDA70: beq         $v0, $zero, L_800DDA90
    if (ctx->r2 == 0) {
        // 0x800DDA74: nop
    
            goto L_800DDA90;
    }
    // 0x800DDA74: nop

    // 0x800DDA78: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDA7C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800DDA80: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800DDA84: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDA88: nop

    // 0x800DDA8C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800DDA90:
    // 0x800DDA90: b           L_800DDA98
    // 0x800DDA94: nop

        goto L_800DDA98;
    // 0x800DDA94: nop

L_800DDA98:
    // 0x800DDA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DDA9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DDAA0: jr          $ra
    // 0x800DDAA4: nop

    return;
    // 0x800DDAA4: nop

;}
RECOMP_FUNC void func_800CFB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFB64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CFB68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CFB6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CFB70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CFB74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CFB78: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CFB7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CFB80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFB84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CFB88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFB8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CFB90: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800CFB94: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CFB98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CFB9C: beq         $s0, $at, L_800CFBC4
    if (ctx->r16 == ctx->r1) {
        // 0x800CFBA0: nop
    
            goto L_800CFBC4;
    }
    // 0x800CFBA0: nop

    // 0x800CFBA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CFBA8: beq         $s0, $at, L_800CFBD4
    if (ctx->r16 == ctx->r1) {
        // 0x800CFBAC: nop
    
            goto L_800CFBD4;
    }
    // 0x800CFBAC: nop

    // 0x800CFBB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CFBB4: beq         $s0, $at, L_800CFBE4
    if (ctx->r16 == ctx->r1) {
        // 0x800CFBB8: nop
    
            goto L_800CFBE4;
    }
    // 0x800CFBB8: nop

    // 0x800CFBBC: b           L_800CFBF4
    // 0x800CFBC0: nop

        goto L_800CFBF4;
    // 0x800CFBC0: nop

L_800CFBC4:
    // 0x800CFBC4: jal         0x800CF800
    // 0x800CFBC8: nop

    func_800CF800(rdram, ctx);
        goto after_0;
    // 0x800CFBC8: nop

    after_0:
    // 0x800CFBCC: b           L_800CFBFC
    // 0x800CFBD0: nop

        goto L_800CFBFC;
    // 0x800CFBD0: nop

L_800CFBD4:
    // 0x800CFBD4: jal         0x800CF968
    // 0x800CFBD8: nop

    func_800CF968(rdram, ctx);
        goto after_1;
    // 0x800CFBD8: nop

    after_1:
    // 0x800CFBDC: b           L_800CFBFC
    // 0x800CFBE0: nop

        goto L_800CFBFC;
    // 0x800CFBE0: nop

L_800CFBE4:
    // 0x800CFBE4: jal         0x800CFB34
    // 0x800CFBE8: nop

    func_800CFB34(rdram, ctx);
        goto after_2;
    // 0x800CFBE8: nop

    after_2:
    // 0x800CFBEC: b           L_800CFBFC
    // 0x800CFBF0: nop

        goto L_800CFBFC;
    // 0x800CFBF0: nop

L_800CFBF4:
    // 0x800CFBF4: b           L_800CFBFC
    // 0x800CFBF8: nop

        goto L_800CFBFC;
    // 0x800CFBF8: nop

L_800CFBFC:
    // 0x800CFBFC: b           L_800CFC04
    // 0x800CFC00: nop

        goto L_800CFC04;
    // 0x800CFC00: nop

L_800CFC04:
    // 0x800CFC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFC08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CFC0C: jr          $ra
    // 0x800CFC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CFC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E90C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E90C8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800E90CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E90D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E90D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E90D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E90DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E90E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E90E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E90E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E90EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E90F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E90F4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x800E90F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E90FC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E9100: nop

    // 0x800E9104: bne         $t0, $zero, L_800E9130
    if (ctx->r8 != 0) {
        // 0x800E9108: nop
    
            goto L_800E9130;
    }
    // 0x800E9108: nop

    // 0x800E910C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x800E9110: nop

    // 0x800E9114: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E9118: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x800E911C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x800E9120: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E9124: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800E9128: b           L_800E91D4
    // 0x800E912C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E91D4;
    // 0x800E912C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E9130:
    // 0x800E9130: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800E9134: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800E9138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E913C: bne         $t5, $at, L_800E91C0
    if (ctx->r13 != ctx->r1) {
        // 0x800E9140: nop
    
            goto L_800E91C0;
    }
    // 0x800E9140: nop

    // 0x800E9144: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800E9148: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800E914C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800E9150: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_800E9154:
    // 0x800E9154: lh          $t0, 0x6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6);
    // 0x800E9158: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x800E915C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800E9160: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800E9164: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800E9168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E916C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800E9170: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E9174: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E9178: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E917C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800E9180: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800E9184: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800E9188: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x800E918C: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x800E9190: nop

    // 0x800E9194: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800E9198: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800E919C: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800E91A0: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800E91A4: bne         $at, $zero, L_800E9154
    if (ctx->r1 != 0) {
        // 0x800E91A8: sh          $t6, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r14;
            goto L_800E9154;
    }
    // 0x800E91A8: sh          $t6, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r14;
    // 0x800E91AC: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x800E91B0: nop

    // 0x800E91B4: lh          $t1, 0xB2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB2);
    // 0x800E91B8: b           L_800E91D4
    // 0x800E91BC: sh          $t1, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r9;
        goto L_800E91D4;
    // 0x800E91BC: sh          $t1, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r9;
L_800E91C0:
    // 0x800E91C0: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800E91C4: nop

    // 0x800E91C8: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800E91CC: nop

    // 0x800E91D0: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
L_800E91D4:
    // 0x800E91D4: b           L_800E91DC
    // 0x800E91D8: nop

        goto L_800E91DC;
    // 0x800E91D8: nop

L_800E91DC:
    // 0x800E91DC: jr          $ra
    // 0x800E91E0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800E91E0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800B5814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B5818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B581C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B5820: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B5824: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B5828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B582C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B5834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5838: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B583C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B5840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B5844: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B5848: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B584C: nop

    // 0x800B5850: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B5854: nop

    // 0x800B5858: bne         $t1, $zero, L_800B58D8
    if (ctx->r9 != 0) {
        // 0x800B585C: nop
    
            goto L_800B58D8;
    }
    // 0x800B585C: nop

    // 0x800B5860: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B5864: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B5868: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B586C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B5870: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B5874: nop

    // 0x800B5878: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B587C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B5880: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B5884: nop

    // 0x800B5888: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B588C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B5890: nop

    // 0x800B5894: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800B5898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B589C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B58A0: addiu       $t7, $t7, 0x7AA0
    ctx->r15 = ADD32(ctx->r15, 0X7AA0);
    // 0x800B58A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B58A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B58AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B58B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B58B4: jal         0x8001C0EC
    // 0x800B58B8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B58B8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_0:
    // 0x800B58BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B58C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B58C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B58C8: addiu       $a3, $a3, 0x7B4C
    ctx->r7 = ADD32(ctx->r7, 0X7B4C);
    // 0x800B58CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B58D0: jal         0x8001ABF4
    // 0x800B58D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B58D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800B58D8:
    // 0x800B58D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B58DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B58E0: jal         0x80029C40
    // 0x800B58E4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B58E4: nop

    after_2:
    // 0x800B58E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B58EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B58F0: jal         0x80029D04
    // 0x800B58F4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B58F4: nop

    after_3:
    // 0x800B58F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B58FC: nop

    // 0x800B5900: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B5904: nop

    // 0x800B5908: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B590C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800B5910: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B5914: nop

    // 0x800B5918: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800B591C: nop

    // 0x800B5920: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x800B5924: bne         $at, $zero, L_800B5960
    if (ctx->r1 != 0) {
        // 0x800B5928: nop
    
            goto L_800B5960;
    }
    // 0x800B5928: nop

    // 0x800B592C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5934: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800B5938: jal         0x8002A1FC
    // 0x800B593C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800B593C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_4:
    // 0x800B5940: beq         $v0, $zero, L_800B5960
    if (ctx->r2 == 0) {
        // 0x800B5944: nop
    
            goto L_800B5960;
    }
    // 0x800B5944: nop

    // 0x800B5948: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B594C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800B5950: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B5954: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B5958: nop

    // 0x800B595C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B5960:
    // 0x800B5960: b           L_800B5968
    // 0x800B5964: nop

        goto L_800B5968;
    // 0x800B5964: nop

L_800B5968:
    // 0x800B5968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B596C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B5970: jr          $ra
    // 0x800B5974: nop

    return;
    // 0x800B5974: nop

;}
RECOMP_FUNC void func_800E63F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E63F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E63F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E63FC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E6400: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E6404: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E6408: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E640C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E6410: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E6414: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E6418: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E641C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E6420: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E6424: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E6428: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E642C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E6430: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E6434: addiu       $a1, $a1, 0x445C
    ctx->r5 = ADD32(ctx->r5, 0X445C);
    // 0x800E6438: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E643C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E6440: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E6444: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E6448: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E644C: jal         0x80027464
    // 0x800E6450: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E6450: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E6454: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E6458: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E645C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6460: beq         $t1, $at, L_800E64B8
    if (ctx->r9 == ctx->r1) {
        // 0x800E6464: nop
    
            goto L_800E64B8;
    }
    // 0x800E6464: nop

    // 0x800E6468: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800E646C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E6470: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E6474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6478: jal         0x8001ABF4
    // 0x800E647C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E647C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E6480: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E6484: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E6488: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800E648C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E6490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E6494: jal         0x8001ABF4
    // 0x800E6498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E6498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E649C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E64A0: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E64A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800E64A8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E64AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800E64B0: jal         0x8001ABF4
    // 0x800E64B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E64B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800E64B8:
    // 0x800E64B8: b           L_800E64C0
    // 0x800E64BC: nop

        goto L_800E64C0;
    // 0x800E64BC: nop

L_800E64C0:
    // 0x800E64C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E64C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E64C8: jr          $ra
    // 0x800E64CC: nop

    return;
    // 0x800E64CC: nop

;}
RECOMP_FUNC void func_800CAB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAB00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CAB04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CAB08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CAB0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CAB10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CAB14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CAB18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAB1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CAB20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAB24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CAB28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CAB2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CAB30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CAB34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB38: nop

    // 0x800CAB3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CAB40: nop

    // 0x800CAB44: bne         $t1, $zero, L_800CABF8
    if (ctx->r9 != 0) {
        // 0x800CAB48: nop
    
            goto L_800CABF8;
    }
    // 0x800CAB48: nop

    // 0x800CAB4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CAB54: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800CAB58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CAB5C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB60: nop

    // 0x800CAB64: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x800CAB68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CAB6C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB70: nop

    // 0x800CAB74: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
    // 0x800CAB78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CAB7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB80: nop

    // 0x800CAB84: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x800CAB88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CAB8C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800CAB90: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800CAB94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAB98: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CAB9C: addiu       $t9, $t9, -0x7E10
    ctx->r25 = ADD32(ctx->r25, -0X7E10);
    // 0x800CABA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CABA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CABA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CABAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CABB0: jal         0x8001C0EC
    // 0x800CABB4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CABB4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CABB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CABBC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800CABC0: addiu       $t0, $t0, -0x7E00
    ctx->r8 = ADD32(ctx->r8, -0X7E00);
    // 0x800CABC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CABC8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800CABCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CABD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CABD4: jal         0x8001C0EC
    // 0x800CABD8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CABD8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
    // 0x800CABDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CABE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CABE4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CABE8: addiu       $a3, $a3, -0x7DCC
    ctx->r7 = ADD32(ctx->r7, -0X7DCC);
    // 0x800CABEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CABF0: jal         0x8001ABF4
    // 0x800CABF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800CABF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_800CABF8:
    // 0x800CABF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CABFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAC00: lui         $a1, 0x44ED
    ctx->r5 = S32(0X44ED << 16);
    // 0x800CAC04: jal         0x8002A1FC
    // 0x800CAC08: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800CAC08: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_3:
    // 0x800CAC0C: beq         $v0, $zero, L_800CAC54
    if (ctx->r2 == 0) {
        // 0x800CAC10: nop
    
            goto L_800CAC54;
    }
    // 0x800CAC10: nop

    // 0x800CAC14: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800CAC18: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800CAC1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CAC20: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800CAC24: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800CAC28: nop

    // 0x800CAC2C: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800CAC30: nop

    // 0x800CAC34: bc1f        L_800CAC54
    if (!c1cs) {
        // 0x800CAC38: nop
    
            goto L_800CAC54;
    }
    // 0x800CAC38: nop

    // 0x800CAC3C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CAC40: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800CAC44: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800CAC48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CAC4C: nop

    // 0x800CAC50: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800CAC54:
    // 0x800CAC54: b           L_800CAC5C
    // 0x800CAC58: nop

        goto L_800CAC5C;
    // 0x800CAC58: nop

L_800CAC5C:
    // 0x800CAC5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CAC60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CAC64: jr          $ra
    // 0x800CAC68: nop

    return;
    // 0x800CAC68: nop

;}
RECOMP_FUNC void func_8007BF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BF18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007BF1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007BF20: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007BF24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007BF28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007BF2C: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007BF30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007BF34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007BF38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BF3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007BF40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BF44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007BF48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007BF4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007BF50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007BF54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007BF58: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x8007BF5C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007BF60: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007BF64: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007BF68: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007BF6C: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007BF70: nop

    // 0x8007BF74: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
    // 0x8007BF78: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007BF7C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8007BF80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007BF84: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8007BF88: nop

    // 0x8007BF8C: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x8007BF90: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8007BF94: lwc1        $f10, 0x51C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x8007BF98: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8007BF9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007BFA0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8007BFA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007BFA8: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8007BFAC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007BFB0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8007BFB4: nop

    // 0x8007BFB8: bc1f        L_8007BFD0
    if (!c1cs) {
        // 0x8007BFBC: nop
    
            goto L_8007BFD0;
    }
    // 0x8007BFBC: nop

    // 0x8007BFC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007BFC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007BFC8: b           L_8007BFF8
    // 0x8007BFCC: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
        goto L_8007BFF8;
    // 0x8007BFCC: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
L_8007BFD0:
    // 0x8007BFD0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007BFD4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007BFD8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007BFDC: lwc1        $f14, 0x18($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X18);
    // 0x8007BFE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8007BFE4: jal         0x80015538
    // 0x8007BFE8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8007BFE8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x8007BFEC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007BFF0: nop

    // 0x8007BFF4: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
L_8007BFF8:
    // 0x8007BFF8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8007BFFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007C000: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007C004: nop

    // 0x8007C008: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x8007C00C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007C010: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007C014: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007C018: nop

    // 0x8007C01C: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
    // 0x8007C020: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007C024: nop

    // 0x8007C028: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8007C02C: nop

    // 0x8007C030: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x8007C034: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007C038: nop

    // 0x8007C03C: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    // 0x8007C040: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007C044: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007C048: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007C04C: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007C050: b           L_8007C058
    // 0x8007C054: nop

        goto L_8007C058;
    // 0x8007C054: nop

L_8007C058:
    // 0x8007C058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C05C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007C060: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007C064: jr          $ra
    // 0x8007C068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007C068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80084BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084BD8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80084BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80084BE0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80084BE4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80084BE8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80084BEC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80084BF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80084BF4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80084BF8: nop

    // 0x80084BFC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80084C00: nop

    // 0x80084C04: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80084C08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80084C0C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80084C10: nop

    // 0x80084C14: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80084C18: nop

    // 0x80084C1C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80084C20: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80084C24: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80084C28: nop

    // 0x80084C2C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80084C30: nop

    // 0x80084C34: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80084C38: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80084C3C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80084C40: nop

    // 0x80084C44: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80084C48: nop

    // 0x80084C4C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80084C50: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80084C54: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80084C58: nop

    // 0x80084C5C: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80084C60: nop

    // 0x80084C64: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80084C68: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80084C6C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80084C70: nop

    // 0x80084C74: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80084C78: nop

    // 0x80084C7C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x80084C80: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80084C84: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80084C88: nop

    // 0x80084C8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80084C90: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80084C94: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80084C98: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80084C9C: nop

    // 0x80084CA0: bne         $t2, $zero, L_80084DB4
    if (ctx->r10 != 0) {
        // 0x80084CA4: nop
    
            goto L_80084DB4;
    }
    // 0x80084CA4: nop

    // 0x80084CA8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80084CAC: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80084CB0: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80084CB4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80084CB8: lwc1        $f6, 0x14($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X14);
    // 0x80084CBC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80084CC0: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80084CC4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80084CC8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80084CCC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80084CD0: jal         0x800843CC
    // 0x80084CD4: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80084CD4: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    after_0:
    // 0x80084CD8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80084CDC: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x80084CE0: nop

    // 0x80084CE4: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80084CE8: beq         $t5, $zero, L_80084D14
    if (ctx->r13 == 0) {
        // 0x80084CEC: nop
    
            goto L_80084D14;
    }
    // 0x80084CEC: nop

    // 0x80084CF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80084CF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80084CF8: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80084CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80084D00: addiu       $t6, $t6, 0x7760
    ctx->r14 = ADD32(ctx->r14, 0X7760);
    // 0x80084D04: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80084D08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80084D0C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80084D10: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_80084D14:
    // 0x80084D14: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80084D18: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80084D1C: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80084D20: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80084D24: lwc1        $f4, 0x14($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X14);
    // 0x80084D28: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80084D2C: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80084D30: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80084D34: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084D38: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80084D3C: jal         0x800843CC
    // 0x80084D40: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80084D40: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    after_1:
    // 0x80084D44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80084D48: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80084D4C: nop

    // 0x80084D50: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80084D54: beq         $t9, $zero, L_80084D78
    if (ctx->r25 == 0) {
        // 0x80084D58: nop
    
            goto L_80084D78;
    }
    // 0x80084D58: nop

    // 0x80084D5C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80084D60: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x80084D64: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80084D68: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084D6C: nop

    // 0x80084D70: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80084D74: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_80084D78:
    // 0x80084D78: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80084D7C: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x80084D80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084D84: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80084D88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80084D8C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80084D90: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80084D94: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80084D98: nop

    // 0x80084D9C: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80084DA0: nop

    // 0x80084DA4: bc1f        L_80084DB4
    if (!c1cs) {
        // 0x80084DA8: nop
    
            goto L_80084DB4;
    }
    // 0x80084DA8: nop

    // 0x80084DAC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80084DB0: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80084DB4:
    // 0x80084DB4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80084DB8: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80084DBC: nop

    // 0x80084DC0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80084DC4: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x80084DC8: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80084DCC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80084DD0: nop

    // 0x80084DD4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80084DD8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80084DDC: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80084DE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80084DE4: bne         $t5, $at, L_80084DF4
    if (ctx->r13 != ctx->r1) {
        // 0x80084DE8: nop
    
            goto L_80084DF4;
    }
    // 0x80084DE8: nop

    // 0x80084DEC: b           L_800850E8
    // 0x80084DF0: nop

        goto L_800850E8;
    // 0x80084DF0: nop

L_80084DF4:
    // 0x80084DF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084DF8: sh          $zero, -0x1F64($at)
    MEM_H(-0X1F64, ctx->r1) = 0;
    // 0x80084DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084E00: sh          $zero, -0x1F5C($at)
    MEM_H(-0X1F5C, ctx->r1) = 0;
    // 0x80084E04: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80084E08: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80084E0C: sb          $zero, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = 0;
    // 0x80084E10: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80084E14:
    // 0x80084E14: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x80084E18: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x80084E1C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80084E20:
    // 0x80084E20: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80084E24: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80084E28: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80084E2C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80084E30: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80084E34: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80084E38: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80084E3C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80084E40: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80084E44: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80084E48: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80084E4C: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80084E50: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80084E54: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80084E58: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80084E5C: jal         0x80084430
    // 0x80084E60: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    func_80084430(rdram, ctx);
        goto after_2;
    // 0x80084E60: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    after_2:
    // 0x80084E64: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80084E68: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80084E6C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80084E70: bne         $t2, $at, L_80084ECC
    if (ctx->r10 != ctx->r1) {
        // 0x80084E74: nop
    
            goto L_80084ECC;
    }
    // 0x80084E74: nop

    // 0x80084E78: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80084E7C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80084E80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80084E84: lbu         $t4, -0x3420($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3420);
    // 0x80084E88: lbu         $t5, 0x2F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084E8C: nop

    // 0x80084E90: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x80084E94: sb          $t6, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r14;
    // 0x80084E98: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80084E9C: lbu         $t8, 0x76E4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E4);
    // 0x80084EA0: nop

    // 0x80084EA4: beq         $t8, $zero, L_80084ECC
    if (ctx->r24 == 0) {
        // 0x80084EA8: nop
    
            goto L_80084ECC;
    }
    // 0x80084EA8: nop

    // 0x80084EAC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80084EB0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80084EB4: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80084EB8: lbu         $t7, -0x3420($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3420);
    // 0x80084EBC: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x80084EC0: nop

    // 0x80084EC4: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x80084EC8: sb          $t1, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r9;
L_80084ECC:
    // 0x80084ECC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80084ED0: nop

    // 0x80084ED4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80084ED8: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x80084EDC: bne         $at, $zero, L_80084E20
    if (ctx->r1 != 0) {
        // 0x80084EE0: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_80084E20;
    }
    // 0x80084EE0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80084EE4: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084EE8: nop

    // 0x80084EEC: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80084EF0: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x80084EF4: or          $t8, $t5, $t6
    ctx->r24 = ctx->r13 | ctx->r14;
    // 0x80084EF8: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
    // 0x80084EFC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80084F00: nop

    // 0x80084F04: bne         $t9, $zero, L_80084F30
    if (ctx->r25 != 0) {
        // 0x80084F08: nop
    
            goto L_80084F30;
    }
    // 0x80084F08: nop

    // 0x80084F0C: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084F10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084F14: sh          $t7, -0x1F64($at)
    MEM_H(-0X1F64, ctx->r1) = ctx->r15;
    // 0x80084F18: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x80084F1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084F20: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x80084F24: sra         $t2, $t0, 4
    ctx->r10 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80084F28: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80084F2C: sh          $t3, -0x1F5C($at)
    MEM_H(-0X1F5C, ctx->r1) = ctx->r11;
L_80084F30:
    // 0x80084F30: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084F34: nop

    // 0x80084F38: bne         $t4, $zero, L_80084F68
    if (ctx->r12 != 0) {
        // 0x80084F3C: nop
    
            goto L_80084F68;
    }
    // 0x80084F3C: nop

    // 0x80084F40: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80084F44: nop

    // 0x80084F48: beq         $t5, $zero, L_80084F60
    if (ctx->r13 == 0) {
        // 0x80084F4C: nop
    
            goto L_80084F60;
    }
    // 0x80084F4C: nop

    // 0x80084F50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80084F54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80084F58: bne         $t6, $at, L_80084F68
    if (ctx->r14 != ctx->r1) {
        // 0x80084F5C: nop
    
            goto L_80084F68;
    }
    // 0x80084F5C: nop

L_80084F60:
    // 0x80084F60: b           L_800850E8
    // 0x80084F64: nop

        goto L_800850E8;
    // 0x80084F64: nop

L_80084F68:
    // 0x80084F68: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084F6C: nop

    // 0x80084F70: bne         $t8, $zero, L_80084FB8
    if (ctx->r24 != 0) {
        // 0x80084F74: nop
    
            goto L_80084FB8;
    }
    // 0x80084F74: nop

    // 0x80084F78: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80084F7C: nop

    // 0x80084F80: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x80084F84: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80084F88: nop

    // 0x80084F8C: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x80084F90: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80084F94: nop

    // 0x80084F98: bgez        $t9, L_80084FA8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80084F9C: sra         $t7, $t9, 1
        ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
            goto L_80084FA8;
    }
    // 0x80084F9C: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80084FA0: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x80084FA4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80084FA8:
    // 0x80084FA8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80084FAC: lbu         $t0, 0x2D($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2D);
    // 0x80084FB0: b           L_8008503C
    // 0x80084FB4: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
        goto L_8008503C;
    // 0x80084FB4: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
L_80084FB8:
    // 0x80084FB8: lbu         $t1, 0x2D($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2D);
    // 0x80084FBC: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x80084FC0: nop

    // 0x80084FC4: beq         $t1, $t2, L_8008503C
    if (ctx->r9 == ctx->r10) {
        // 0x80084FC8: nop
    
            goto L_8008503C;
    }
    // 0x80084FC8: nop

    // 0x80084FCC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80084FD0: nop

    // 0x80084FD4: beq         $t3, $zero, L_8008503C
    if (ctx->r11 == 0) {
        // 0x80084FD8: nop
    
            goto L_8008503C;
    }
    // 0x80084FD8: nop

    // 0x80084FDC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80084FE0: nop

    // 0x80084FE4: bgez        $t4, L_80084FF4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80084FE8: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_80084FF4;
    }
    // 0x80084FE8: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80084FEC: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x80084FF0: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_80084FF4:
    // 0x80084FF4: beq         $t5, $zero, L_8008503C
    if (ctx->r13 == 0) {
        // 0x80084FF8: nop
    
            goto L_8008503C;
    }
    // 0x80084FF8: nop

    // 0x80084FFC: lbu         $t6, 0x2D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2D);
    // 0x80085000: nop

    // 0x80085004: sb          $t6, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r14;
    // 0x80085008: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008500C: nop

    // 0x80085010: bgez        $t8, L_80085020
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80085014: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_80085020;
    }
    // 0x80085014: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80085018: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8008501C: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80085020:
    // 0x80085020: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80085024: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80085028: nop

    // 0x8008502C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x80085030: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80085034: nop

    // 0x80085038: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
L_8008503C:
    // 0x8008503C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80085040: nop

    // 0x80085044: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80085048: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8008504C: nop

    // 0x80085050: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80085054: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x80085058: nop

    // 0x8008505C: sb          $t7, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r15;
    // 0x80085060: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x80085064: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80085068: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8008506C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80085070: lw          $t2, -0x3418($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3418);
    // 0x80085074: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80085078: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8008507C: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80085080: mflo        $t4
    ctx->r12 = lo;
    // 0x80085084: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80085088: nop

    // 0x8008508C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80085090: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80085094: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80085098: lbu         $t5, 0x2F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2F);
    // 0x8008509C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800850A0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800850A4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800850A8: lw          $t8, -0x3414($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3414);
    // 0x800850AC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800850B0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800850B4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800850B8: mflo        $t7
    ctx->r15 = lo;
    // 0x800850BC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800850C0: nop

    // 0x800850C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800850C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800850CC: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x800850D0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800850D4: nop

    // 0x800850D8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800850DC: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x800850E0: bne         $at, $zero, L_80084E14
    if (ctx->r1 != 0) {
        // 0x800850E4: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_80084E14;
    }
    // 0x800850E4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_800850E8:
    // 0x800850E8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800850EC: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x800850F0: nop

    // 0x800850F4: beq         $t2, $zero, L_80085114
    if (ctx->r10 == 0) {
        // 0x800850F8: nop
    
            goto L_80085114;
    }
    // 0x800850F8: nop

    // 0x800850FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80085100: beq         $t2, $at, L_80085114
    if (ctx->r10 == ctx->r1) {
        // 0x80085104: nop
    
            goto L_80085114;
    }
    // 0x80085104: nop

    // 0x80085108: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8008510C: bne         $t2, $at, L_800853D0
    if (ctx->r10 != ctx->r1) {
        // 0x80085110: nop
    
            goto L_800853D0;
    }
    // 0x80085110: nop

L_80085114:
    // 0x80085114: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80085118: lh          $t3, -0x1F54($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F54);
    // 0x8008511C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085120: sh          $t3, -0x1F4C($at)
    MEM_H(-0X1F4C, ctx->r1) = ctx->r11;
    // 0x80085124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085128: sh          $zero, -0x1F54($at)
    MEM_H(-0X1F54, ctx->r1) = 0;
    // 0x8008512C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80085130: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80085134: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80085138: jal         0x80084430
    // 0x8008513C: nop

    func_80084430(rdram, ctx);
        goto after_3;
    // 0x8008513C: nop

    after_3:
    // 0x80085140: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80085144: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80085148: nop

    // 0x8008514C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80085150: beq         $at, $zero, L_80085258
    if (ctx->r1 == 0) {
        // 0x80085154: nop
    
            goto L_80085258;
    }
    // 0x80085154: nop

    // 0x80085158: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8008515C: lw          $t5, 0x51A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51A4);
    // 0x80085160: nop

    // 0x80085164: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80085168: beq         $t6, $zero, L_800851FC
    if (ctx->r14 == 0) {
        // 0x8008516C: nop
    
            goto L_800851FC;
    }
    // 0x8008516C: nop

    // 0x80085170: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80085174: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80085178: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008517C: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80085180: nop

    // 0x80085184: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80085188: nop

    // 0x8008518C: bc1f        L_800851FC
    if (!c1cs) {
        // 0x80085190: nop
    
            goto L_800851FC;
    }
    // 0x80085190: nop

    // 0x80085194: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80085198: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8008519C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800851A0: jal         0x800843CC
    // 0x800851A4: nop

    func_800843CC(rdram, ctx);
        goto after_4;
    // 0x800851A4: nop

    after_4:
    // 0x800851A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800851AC: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x800851B0: nop

    // 0x800851B4: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x800851B8: beq         $t7, $zero, L_800851F4
    if (ctx->r15 == 0) {
        // 0x800851BC: nop
    
            goto L_800851F4;
    }
    // 0x800851BC: nop

    // 0x800851C0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800851C4: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x800851C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800851CC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800851D0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x800851D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800851D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800851DC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800851E0: lwc1        $f8, 0x7760($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800851E4: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800851E8: nop

    // 0x800851EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800851F0: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
L_800851F4:
    // 0x800851F4: b           L_80085258
    // 0x800851F8: nop

        goto L_80085258;
    // 0x800851F8: nop

L_800851FC:
    // 0x800851FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80085200: nop

    // 0x80085204: beq         $t4, $zero, L_80085258
    if (ctx->r12 == 0) {
        // 0x80085208: nop
    
            goto L_80085258;
    }
    // 0x80085208: nop

    // 0x8008520C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80085210: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80085214: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80085218: jal         0x800843CC
    // 0x8008521C: nop

    func_800843CC(rdram, ctx);
        goto after_5;
    // 0x8008521C: nop

    after_5:
    // 0x80085220: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085224: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80085228: nop

    // 0x8008522C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80085230: bne         $t6, $zero, L_8008524C
    if (ctx->r14 != 0) {
        // 0x80085234: nop
    
            goto L_8008524C;
    }
    // 0x80085234: nop

    // 0x80085238: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008523C: addiu       $t8, $t8, 0x7760
    ctx->r24 = ADD32(ctx->r24, 0X7760);
    // 0x80085240: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80085244: nop

    // 0x80085248: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
L_8008524C:
    // 0x8008524C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80085250: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085254: sh          $t9, -0x1F54($at)
    MEM_H(-0X1F54, ctx->r1) = ctx->r25;
L_80085258:
    // 0x80085258: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8008525C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80085260: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80085264: jal         0x800843CC
    // 0x80085268: nop

    func_800843CC(rdram, ctx);
        goto after_6;
    // 0x80085268: nop

    after_6:
    // 0x8008526C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80085270: lh          $t7, 0x5270($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5270);
    // 0x80085274: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085278: sh          $t7, 0x5278($at)
    MEM_H(0X5278, ctx->r1) = ctx->r15;
    // 0x8008527C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80085280: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80085284: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80085288: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8008528C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80085290: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80085294: lw          $t3, 0x7770($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7770);
    // 0x80085298: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008529C: sh          $t3, 0x5270($at)
    MEM_H(0X5270, ctx->r1) = ctx->r11;
    // 0x800852A0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800852A4: lh          $t4, 0x5270($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X5270);
    // 0x800852A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800852AC: beq         $t4, $at, L_800853D0
    if (ctx->r12 == ctx->r1) {
        // 0x800852B0: nop
    
            goto L_800853D0;
    }
    // 0x800852B0: nop

    // 0x800852B4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800852B8: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x800852BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800852C0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800852C4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800852C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800852CC: lwc1        $f6, 0x7760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800852D0: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800852D4: nop

    // 0x800852D8: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x800852DC: nop

    // 0x800852E0: bc1f        L_800853C4
    if (!c1cs) {
        // 0x800852E4: nop
    
            goto L_800853C4;
    }
    // 0x800852E4: nop

    // 0x800852E8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800852EC: lh          $t9, 0x5270($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X5270);
    // 0x800852F0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800852F4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800852F8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800852FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80085300: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80085304: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80085308: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8008530C: lh          $t0, 0x4234($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4234);
    // 0x80085310: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085314: sh          $t0, 0x5280($at)
    MEM_H(0X5280, ctx->r1) = ctx->r8;
    // 0x80085318: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8008531C: lh          $t1, 0x5270($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X5270);
    // 0x80085320: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085324: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80085328: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008532C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80085330: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80085334: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80085338: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008533C: lwc1        $f10, 0x4150($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80085340: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80085344: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085348: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8008534C: swc1        $f16, 0x5288($at)
    MEM_W(0X5288, ctx->r1) = ctx->f16.u32l;
    // 0x80085350: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80085354: lh          $t3, 0x5270($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X5270);
    // 0x80085358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008535C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80085360: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80085364: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80085368: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008536C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80085370: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80085374: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80085378: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8008537C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085380: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80085384: swc1        $f4, -0x3D70($at)
    MEM_W(-0X3D70, ctx->r1) = ctx->f4.u32l;
    // 0x80085388: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8008538C: lh          $t5, 0x5270($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5270);
    // 0x80085390: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085394: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80085398: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008539C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800853A0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800853A4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800853A8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800853AC: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x800853B0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800853B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800853B8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800853BC: b           L_800853D0
    // 0x800853C0: swc1        $f16, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f16.u32l;
        goto L_800853D0;
    // 0x800853C0: swc1        $f16, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f16.u32l;
L_800853C4:
    // 0x800853C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800853C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800853CC: sh          $t8, 0x5270($at)
    MEM_H(0X5270, ctx->r1) = ctx->r24;
L_800853D0:
    // 0x800853D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800853D4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800853D8: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800853DC: nop

    // 0x800853E0: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x800853E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800853E8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800853EC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800853F0: nop

    // 0x800853F4: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x800853F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800853FC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80085400: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80085404: nop

    // 0x80085408: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x8008540C: b           L_80085414
    // 0x80085410: nop

        goto L_80085414;
    // 0x80085410: nop

L_80085414:
    // 0x80085414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085418: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8008541C: jr          $ra
    // 0x80085420: nop

    return;
    // 0x80085420: nop

;}
RECOMP_FUNC void func_800A25F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A25F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A25F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A25F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A25FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A2600: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A2604: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A2608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A260C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2610: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2614: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2618: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A261C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A2620: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A2624: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A2628: nop

    // 0x800A262C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A2630: nop

    // 0x800A2634: bne         $t1, $zero, L_800A26CC
    if (ctx->r9 != 0) {
        // 0x800A2638: nop
    
            goto L_800A26CC;
    }
    // 0x800A2638: nop

    // 0x800A263C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A2640: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A2644: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A2648: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A264C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A2650: nop

    // 0x800A2654: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A2658: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A265C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A2660: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A2664: nop

    // 0x800A2668: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A266C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800A2670: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A2674: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A2678: nop

    // 0x800A267C: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800A2680: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A2684: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A2688: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x800A268C: nop

    // 0x800A2690: bne         $t8, $at, L_800A26B4
    if (ctx->r24 != ctx->r1) {
        // 0x800A2694: nop
    
            goto L_800A26B4;
    }
    // 0x800A2694: nop

    // 0x800A2698: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A269C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A26A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A26A4: jal         0x80029EF8
    // 0x800A26A8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800A26A8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x800A26AC: b           L_800A26CC
    // 0x800A26B0: nop

        goto L_800A26CC;
    // 0x800A26B0: nop

L_800A26B4:
    // 0x800A26B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A26B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A26BC: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800A26C0: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x800A26C4: jal         0x80029EF8
    // 0x800A26C8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800A26C8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_1:
L_800A26CC:
    // 0x800A26CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A26D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A26D4: jal         0x80029C40
    // 0x800A26D8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A26D8: nop

    after_2:
    // 0x800A26DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A26E0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A26E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A26E8: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800A26EC: jal         0x80015538
    // 0x800A26F0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A26F0: nop

    after_3:
    // 0x800A26F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A26F8: nop

    // 0x800A26FC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800A2700: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A2704: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A2708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A270C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2710: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A2714: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A2718: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x800A271C: jal         0x80029F58
    // 0x800A2720: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800A2720: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800A2724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A2728: bne         $v0, $at, L_800A2860
    if (ctx->r2 != ctx->r1) {
        // 0x800A272C: nop
    
            goto L_800A2860;
    }
    // 0x800A272C: nop

    // 0x800A2730: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A2734: nop

    // 0x800A2738: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x800A273C: nop

    // 0x800A2740: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800A2744: sh          $t3, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r11;
    // 0x800A2748: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A274C: nop

    // 0x800A2750: lh          $t5, 0xB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB0);
    // 0x800A2754: nop

    // 0x800A2758: blez        $t5, L_800A2774
    if (SIGNED(ctx->r13) <= 0) {
        // 0x800A275C: nop
    
            goto L_800A2774;
    }
    // 0x800A275C: nop

    // 0x800A2760: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A2764: nop

    // 0x800A2768: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800A276C: b           L_800A289C
    // 0x800A2770: nop

        goto L_800A289C;
    // 0x800A2770: nop

L_800A2774:
    // 0x800A2774: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A2778: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A277C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A2780: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A2784: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A2788: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x800A278C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A2790: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A2794: nop

    // 0x800A2798: swc1        $f16, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f16.u32l;
    // 0x800A279C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A27A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A27A4: nop

    // 0x800A27A8: swc1        $f18, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f18.u32l;
    // 0x800A27AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A27B0: nop

    // 0x800A27B4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800A27B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A27BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A27C0: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800A27C4: nop

    // 0x800A27C8: beq         $t5, $at, L_800A27F0
    if (ctx->r13 == ctx->r1) {
        // 0x800A27CC: sh          $t5, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r13;
            goto L_800A27F0;
    }
    // 0x800A27CC: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
    // 0x800A27D0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800A27D4: addiu       $t6, $t6, 0x7020
    ctx->r14 = ADD32(ctx->r14, 0X7020);
    // 0x800A27D8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800A27DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A27E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A27E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A27E8: jal         0x8001C0EC
    // 0x800A27EC: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800A27EC: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_5:
L_800A27F0:
    // 0x800A27F0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A27F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A27F8: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x800A27FC: nop

    // 0x800A2800: beq         $t8, $at, L_800A2828
    if (ctx->r24 == ctx->r1) {
        // 0x800A2804: sh          $t8, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r24;
            goto L_800A2828;
    }
    // 0x800A2804: sh          $t8, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r24;
    // 0x800A2808: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A280C: addiu       $t9, $t9, 0x7020
    ctx->r25 = ADD32(ctx->r25, 0X7020);
    // 0x800A2810: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800A2814: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A2818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A281C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A2820: jal         0x8001C0EC
    // 0x800A2824: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800A2824: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_6:
L_800A2828:
    // 0x800A2828: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A282C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A2830: lh          $t2, 0xEC($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XEC);
    // 0x800A2834: nop

    // 0x800A2838: beq         $t2, $at, L_800A2860
    if (ctx->r10 == ctx->r1) {
        // 0x800A283C: sh          $t2, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r10;
            goto L_800A2860;
    }
    // 0x800A283C: sh          $t2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r10;
    // 0x800A2840: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800A2844: addiu       $t3, $t3, 0x7020
    ctx->r11 = ADD32(ctx->r11, 0X7020);
    // 0x800A2848: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800A284C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800A2850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A2858: jal         0x8001C0EC
    // 0x800A285C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800A285C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_7:
L_800A2860:
    // 0x800A2860: jal         0x800A1DAC
    // 0x800A2864: nop

    func_800A1DAC(rdram, ctx);
        goto after_8;
    // 0x800A2864: nop

    after_8:
    // 0x800A2868: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x800A286C: lh          $t1, 0x20($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X20);
    // 0x800A2870: nop

    // 0x800A2874: bne         $t1, $zero, L_800A2894
    if (ctx->r9 != 0) {
        // 0x800A2878: nop
    
            goto L_800A2894;
    }
    // 0x800A2878: nop

    // 0x800A287C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A2880: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800A2884: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A2888: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A288C: nop

    // 0x800A2890: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A2894:
    // 0x800A2894: b           L_800A289C
    // 0x800A2898: nop

        goto L_800A289C;
    // 0x800A2898: nop

L_800A289C:
    // 0x800A289C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A28A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A28A4: jr          $ra
    // 0x800A28A8: nop

    return;
    // 0x800A28A8: nop

;}
RECOMP_FUNC void func_800C92BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C92BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C92C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C92C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C92C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C92CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C92D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C92D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C92D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C92DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C92E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C92E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C92E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C92EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800C92F0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C92F4: nop

    // 0x800C92F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C92FC: nop

    // 0x800C9300: bne         $t1, $zero, L_800C9350
    if (ctx->r9 != 0) {
        // 0x800C9304: nop
    
            goto L_800C9350;
    }
    // 0x800C9304: nop

    // 0x800C9308: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800C930C: nop

    // 0x800C9310: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C9314: nop

    // 0x800C9318: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C931C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C9320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9328: jal         0x8001BBDC
    // 0x800C932C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C932C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C9330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9338: jal         0x8001BB34
    // 0x800C933C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800C933C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C9340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9348: jal         0x8001BB04
    // 0x800C934C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x800C934C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800C9350:
    // 0x800C9350: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9354: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9358: lwc1        $f4, 0xC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800C935C: lwc1        $f9, 0x4F28($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4F28);
    // 0x800C9360: lwc1        $f8, 0x4F2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F2C);
    // 0x800C9364: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C9368: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C936C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C9370: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x800C9374: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9378: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C937C: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800C9380: lwc1        $f7, 0x4F30($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4F30);
    // 0x800C9384: lwc1        $f6, 0x4F34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x800C9388: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C938C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C9390: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C9394: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x800C9398: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C939C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C93A0: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800C93A4: lwc1        $f5, 0x4F38($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4F38);
    // 0x800C93A8: lwc1        $f4, 0x4F3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F3C);
    // 0x800C93AC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C93B0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C93B4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C93B8: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
    // 0x800C93BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C93C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C93C4: jal         0x8001B44C
    // 0x800C93C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800C93C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C93CC: beq         $v0, $zero, L_800C9408
    if (ctx->r2 == 0) {
        // 0x800C93D0: nop
    
            goto L_800C9408;
    }
    // 0x800C93D0: nop

    // 0x800C93D4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800C93D8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800C93DC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800C93E0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C93E4: nop

    // 0x800C93E8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800C93EC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800C93F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C93F4: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
    // 0x800C93F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C93FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9400: jal         0x8001BBDC
    // 0x800C9404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800C9404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_800C9408:
    // 0x800C9408: b           L_800C9410
    // 0x800C940C: nop

        goto L_800C9410;
    // 0x800C940C: nop

L_800C9410:
    // 0x800C9410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C9418: jr          $ra
    // 0x800C941C: nop

    return;
    // 0x800C941C: nop

;}
RECOMP_FUNC void func_8008D114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D114: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008D118: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008D11C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008D120: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008D124: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D12C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D130: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008D134: nop

    // 0x8008D138: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8008D13C: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008D140: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D144: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008D148: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D14C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008D150: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8008D154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D158: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008D15C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008D160: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D164: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008D168: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D16C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008D170: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008D174: swc1        $f10, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f10.u32l;
    // 0x8008D178: b           L_8008D180
    // 0x8008D17C: nop

        goto L_8008D180;
    // 0x8008D17C: nop

L_8008D180:
    // 0x8008D180: jr          $ra
    // 0x8008D184: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008D184: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80097C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097C68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80097C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097C70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80097C74: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097C78: nop

    // 0x80097C7C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80097C80: nop

    // 0x80097C84: bne         $t7, $zero, L_80097D18
    if (ctx->r15 != 0) {
        // 0x80097C88: nop
    
            goto L_80097D18;
    }
    // 0x80097C88: nop

    // 0x80097C8C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80097C90: nop

    // 0x80097C94: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80097C98: nop

    // 0x80097C9C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80097CA0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80097CA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097CA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097CB0: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80097CB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80097CB8: jal         0x800175F0
    // 0x80097CBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80097CBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80097CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097CC4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80097CC8: addiu       $t1, $t1, 0x6ECC
    ctx->r9 = ADD32(ctx->r9, 0X6ECC);
    // 0x80097CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097CD0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80097CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097CD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80097CDC: jal         0x8001C0EC
    // 0x80097CE0: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80097CE0: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    after_1:
    // 0x80097CE4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80097CE8: nop

    // 0x80097CEC: sh          $zero, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = 0;
    // 0x80097CF0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80097CF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80097CF8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80097CFC: nop

    // 0x80097D00: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x80097D04: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80097D08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80097D0C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80097D10: nop

    // 0x80097D14: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
L_80097D18:
    // 0x80097D18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80097D1C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80097D20: nop

    // 0x80097D24: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x80097D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097D30: jal         0x80029C40
    // 0x80097D34: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80097D34: nop

    after_2:
    // 0x80097D38: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097D3C: nop

    // 0x80097D40: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x80097D44: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80097D48: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80097D4C: nop

    // 0x80097D50: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80097D54: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80097D58: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80097D5C: nop

    // 0x80097D60: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80097D64: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80097D68: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80097D6C: nop

    // 0x80097D70: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80097D74: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80097D78: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80097D7C: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
    // 0x80097D80: nop

    // 0x80097D84: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80097D88: nop

    // 0x80097D8C: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x80097D90: nop

    // 0x80097D94: slti        $at, $t1, 0xB4
    ctx->r1 = SIGNED(ctx->r9) < 0XB4 ? 1 : 0;
    // 0x80097D98: bne         $at, $zero, L_80097DB0
    if (ctx->r1 != 0) {
        // 0x80097D9C: nop
    
            goto L_80097DB0;
    }
    // 0x80097D9C: nop

    // 0x80097DA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80097DA4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80097DA8: nop

    // 0x80097DAC: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
L_80097DB0:
    // 0x80097DB0: b           L_80097DB8
    // 0x80097DB4: nop

        goto L_80097DB8;
    // 0x80097DB4: nop

L_80097DB8:
    // 0x80097DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097DC0: jr          $ra
    // 0x80097DC4: nop

    return;
    // 0x80097DC4: nop

;}
RECOMP_FUNC void func_8009CA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CA90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009CA94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009CA98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009CA9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009CAA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009CAA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009CAA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CAAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009CAB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CAB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009CAB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009CABC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009CAC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009CAC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009CAC8: nop

    // 0x8009CACC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009CAD0: nop

    // 0x8009CAD4: bne         $t1, $zero, L_8009CB18
    if (ctx->r9 != 0) {
        // 0x8009CAD8: nop
    
            goto L_8009CB18;
    }
    // 0x8009CAD8: nop

    // 0x8009CADC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009CAE0: nop

    // 0x8009CAE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009CAE8: nop

    // 0x8009CAEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009CAF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009CAF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CAF8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009CAFC: addiu       $t5, $t5, 0x69FC
    ctx->r13 = ADD32(ctx->r13, 0X69FC);
    // 0x8009CB00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CB04: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8009CB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009CB0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009CB10: jal         0x8001C0EC
    // 0x8009CB14: addiu       $a3, $zero, 0xF8
    ctx->r7 = ADD32(0, 0XF8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009CB14: addiu       $a3, $zero, 0xF8
    ctx->r7 = ADD32(0, 0XF8);
    after_0:
L_8009CB18:
    // 0x8009CB18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CB1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CB20: jal         0x8001B4AC
    // 0x8009CB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8009CB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8009CB28: beq         $v0, $zero, L_8009CB40
    if (ctx->r2 == 0) {
        // 0x8009CB2C: nop
    
            goto L_8009CB40;
    }
    // 0x8009CB2C: nop

    // 0x8009CB30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CB34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CB38: jal         0x8002B0E4
    // 0x8009CB3C: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x8009CB3C: nop

    after_2:
L_8009CB40:
    // 0x8009CB40: b           L_8009CB48
    // 0x8009CB44: nop

        goto L_8009CB48;
    // 0x8009CB44: nop

L_8009CB48:
    // 0x8009CB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CB4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009CB50: jr          $ra
    // 0x8009CB54: nop

    return;
    // 0x8009CB54: nop

;}
RECOMP_FUNC void func_800C9DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C9DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9E00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9E04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9E08: jal         0x8002B114
    // 0x800C9E0C: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800C9E0C: nop

    after_0:
    // 0x800C9E10: b           L_800C9E18
    // 0x800C9E14: nop

        goto L_800C9E18;
    // 0x800C9E14: nop

L_800C9E18:
    // 0x800C9E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9E20: jr          $ra
    // 0x800C9E24: nop

    return;
    // 0x800C9E24: nop

;}
RECOMP_FUNC void func_8007B268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B268: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8007B26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B270: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8007B274: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B278: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007B27C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007B280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B284: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B28C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007B290: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007B294: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B298: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x8007B29C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007B2A0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007B2A4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8007B2A8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8007B2AC: nop

    // 0x8007B2B0: beq         $t1, $at, L_8007B2C4
    if (ctx->r9 == ctx->r1) {
        // 0x8007B2B4: nop
    
            goto L_8007B2C4;
    }
    // 0x8007B2B4: nop

    // 0x8007B2B8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8007B2BC: bne         $t1, $at, L_8007B384
    if (ctx->r9 != ctx->r1) {
        // 0x8007B2C0: nop
    
            goto L_8007B384;
    }
    // 0x8007B2C0: nop

L_8007B2C4:
    // 0x8007B2C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007B2C8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007B2CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007B2D0: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8007B2D4: lwc1        $f9, -0x35E8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X35E8);
    // 0x8007B2D8: lwc1        $f8, -0x35E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35E4);
    // 0x8007B2DC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007B2E0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007B2E4: jal         0x80034970
    // 0x8007B2E8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8007B2E8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8007B2EC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8007B2F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007B2F4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007B2F8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8007B2FC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007B300: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B304: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007B308: nop

    // 0x8007B30C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8007B310: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    // 0x8007B314: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007B318: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007B31C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007B320: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8007B324: lwc1        $f17, -0x35E0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X35E0);
    // 0x8007B328: lwc1        $f16, -0x35DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X35DC);
    // 0x8007B32C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007B330: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8007B334: jal         0x80036570
    // 0x8007B338: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8007B338: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x8007B33C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8007B340: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007B344: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007B348: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8007B34C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8007B350: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B354: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8007B358: nop

    // 0x8007B35C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007B360: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x8007B364: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007B368: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007B36C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007B370: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B374: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8007B378: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B37C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8007B380: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
L_8007B384:
    // 0x8007B384: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B388: jal         0x80079778
    // 0x8007B38C: nop

    func_80079778(rdram, ctx);
        goto after_2;
    // 0x8007B38C: nop

    after_2:
    // 0x8007B390: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B394: jal         0x800797FC
    // 0x8007B398: nop

    func_800797FC(rdram, ctx);
        goto after_3;
    // 0x8007B398: nop

    after_3:
    // 0x8007B39C: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B3A0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007B3A4: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8007B3A8: nop

    // 0x8007B3AC: bne         $t1, $at, L_8007B4A4
    if (ctx->r9 != ctx->r1) {
        // 0x8007B3B0: nop
    
            goto L_8007B4A4;
    }
    // 0x8007B3B0: nop

    // 0x8007B3B4: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B3B8: addiu       $t2, $zero, 0x29
    ctx->r10 = ADD32(0, 0X29);
    // 0x8007B3BC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8007B3C0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007B3C4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8007B3C8: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B3CC: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8007B3D0: nop

    // 0x8007B3D4: swc1        $f6, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f6.u32l;
    // 0x8007B3D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007B3DC: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B3E0: nop

    // 0x8007B3E4: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x8007B3E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007B3EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007B3F0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B3F4: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8007B3F8: nop

    // 0x8007B3FC: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x8007B400: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007B404: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B408: nop

    // 0x8007B40C: swc1        $f16, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f16.u32l;
    // 0x8007B410: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B414: jal         0x800799A8
    // 0x8007B418: nop

    func_800799A8(rdram, ctx);
        goto after_4;
    // 0x8007B418: nop

    after_4:
    // 0x8007B41C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007B420: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007B424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007B428: lwc1        $f18, 0x28($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8007B42C: nop

    // 0x8007B430: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8007B434: nop

    // 0x8007B438: bc1f        L_8007B450
    if (!c1cs) {
        // 0x8007B43C: nop
    
            goto L_8007B450;
    }
    // 0x8007B43C: nop

    // 0x8007B440: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007B444: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B448: b           L_8007B490
    // 0x8007B44C: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
        goto L_8007B490;
    // 0x8007B44C: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
L_8007B450:
    // 0x8007B450: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007B454: lw          $t2, -0x1DA8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1DA8);
    // 0x8007B458: nop

    // 0x8007B45C: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8007B460: beq         $t3, $zero, L_8007B478
    if (ctx->r11 == 0) {
        // 0x8007B464: nop
    
            goto L_8007B478;
    }
    // 0x8007B464: nop

    // 0x8007B468: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007B46C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B470: b           L_8007B490
    // 0x8007B474: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
        goto L_8007B490;
    // 0x8007B474: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
L_8007B478:
    // 0x8007B478: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007B47C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007B480: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B484: lwc1        $f10, 0x28($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8007B488: nop

    // 0x8007B48C: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_8007B490:
    // 0x8007B490: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B494: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007B498: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8007B49C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B4A0: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
L_8007B4A4:
    // 0x8007B4A4: b           L_8007B4AC
    // 0x8007B4A8: nop

        goto L_8007B4AC;
    // 0x8007B4A8: nop

L_8007B4AC:
    // 0x8007B4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B4B0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8007B4B4: jr          $ra
    // 0x8007B4B8: nop

    return;
    // 0x8007B4B8: nop

;}
RECOMP_FUNC void func_80080014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008001C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080020: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080024: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008002C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080030: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080038: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008003C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080040: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080044: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080048: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008004C: nop

    // 0x80080050: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80080054: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80080058: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8008005C: nop

    // 0x80080060: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80080064: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80080068: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x8008006C: jal         0x80014E80
    // 0x80080070: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80080070: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    after_0:
    // 0x80080074: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80080078: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008007C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80080080: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80080084: nop

    // 0x80080088: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8008008C: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x80080090: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80080094: lwc1        $f10, -0x1EBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80080098: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8008009C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800800A0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800800A4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800800A8: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800800AC: nop

    // 0x800800B0: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x800800B4: nop

    // 0x800800B8: bc1t        L_80080170
    if (c1cs) {
        // 0x800800BC: nop
    
            goto L_80080170;
    }
    // 0x800800BC: nop

    // 0x800800C0: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x800800C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800800C8: nop

    // 0x800800CC: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800800D0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x800800D4: nop

    // 0x800800D8: bc1t        L_80080170
    if (c1cs) {
        // 0x800800DC: nop
    
            goto L_80080170;
    }
    // 0x800800DC: nop

    // 0x800800E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800800E4: lwc1        $f18, -0x1EC0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800800E8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x800800EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800800F0: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800800F4: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800800F8: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x800800FC: nop

    // 0x80080100: bc1t        L_80080170
    if (c1cs) {
        // 0x80080104: nop
    
            goto L_80080170;
    }
    // 0x80080104: nop

    // 0x80080108: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8008010C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80080110: nop

    // 0x80080114: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80080118: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x8008011C: nop

    // 0x80080120: bc1t        L_80080170
    if (c1cs) {
        // 0x80080124: nop
    
            goto L_80080170;
    }
    // 0x80080124: nop

    // 0x80080128: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008012C: lwc1        $f6, -0x1EB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80080130: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80080134: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80080138: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8008013C: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80080140: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80080144: nop

    // 0x80080148: bc1t        L_80080170
    if (c1cs) {
        // 0x8008014C: nop
    
            goto L_80080170;
    }
    // 0x8008014C: nop

    // 0x80080150: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80080154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080158: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8008015C: add.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80080160: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80080164: nop

    // 0x80080168: bc1f        L_80080180
    if (!c1cs) {
        // 0x8008016C: nop
    
            goto L_80080180;
    }
    // 0x8008016C: nop

L_80080170:
    // 0x80080170: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080178: jal         0x8001A928
    // 0x8008017C: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x8008017C: nop

    after_1:
L_80080180:
    // 0x80080180: b           L_80080188
    // 0x80080184: nop

        goto L_80080188;
    // 0x80080184: nop

L_80080188:
    // 0x80080188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008018C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080190: jr          $ra
    // 0x80080194: nop

    return;
    // 0x80080194: nop

;}
RECOMP_FUNC void func_80095F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095F08: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80095F0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095F10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80095F14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095F18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095F20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095F24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095F28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095F2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80095F30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80095F34: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80095F38: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80095F3C: nop

    // 0x80095F40: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80095F44: nop

    // 0x80095F48: beq         $t1, $zero, L_80095F68
    if (ctx->r9 == 0) {
        // 0x80095F4C: nop
    
            goto L_80095F68;
    }
    // 0x80095F4C: nop

    // 0x80095F50: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80095F54: nop

    // 0x80095F58: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80095F5C: nop

    // 0x80095F60: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80095F64: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80095F68:
    // 0x80095F68: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80095F6C: nop

    // 0x80095F70: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80095F74: nop

    // 0x80095F78: beq         $t6, $zero, L_80095FE8
    if (ctx->r14 == 0) {
        // 0x80095F7C: nop
    
            goto L_80095FE8;
    }
    // 0x80095F7C: nop

    // 0x80095F80: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80095F84: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80095F88: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80095F8C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80095F90: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80095F94: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80095F98: lwc1        $f4, 0x47F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X47F8);
    // 0x80095F9C: nop

    // 0x80095FA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80095FA4: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80095FA8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80095FAC: nop

    // 0x80095FB0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80095FB4: nop

    // 0x80095FB8: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80095FBC: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
    // 0x80095FC0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80095FC4: nop

    // 0x80095FC8: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x80095FCC: nop

    // 0x80095FD0: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x80095FD4: bne         $at, $zero, L_80095FE8
    if (ctx->r1 != 0) {
        // 0x80095FD8: nop
    
            goto L_80095FE8;
    }
    // 0x80095FD8: nop

    // 0x80095FDC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80095FE0: nop

    // 0x80095FE4: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_80095FE8:
    // 0x80095FE8: b           L_80095FF0
    // 0x80095FEC: nop

        goto L_80095FF0;
    // 0x80095FEC: nop

L_80095FF0:
    // 0x80095FF0: jr          $ra
    // 0x80095FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80095FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80070AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070AC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80070ACC: lb          $t6, 0x79F8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X79F8);
    // 0x80070AD0: nop

    // 0x80070AD4: bne         $t6, $zero, L_80070AE4
    if (ctx->r14 != 0) {
        // 0x80070AD8: nop
    
            goto L_80070AE4;
    }
    // 0x80070AD8: nop

    // 0x80070ADC: jr          $ra
    // 0x80070AE0: nop

    return;
    // 0x80070AE0: nop

L_80070AE4:
    // 0x80070AE4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80070AE8: lw          $t7, 0x7A54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A54);
    // 0x80070AEC: nop

    // 0x80070AF0: beq         $t7, $zero, L_80070B0C
    if (ctx->r15 == 0) {
        // 0x80070AF4: nop
    
            goto L_80070B0C;
    }
    // 0x80070AF4: nop

    // 0x80070AF8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070AFC: lw          $t8, 0x7A54($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A54);
    // 0x80070B00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070B04: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80070B08: sw          $t9, 0x7A54($at)
    MEM_W(0X7A54, ctx->r1) = ctx->r25;
L_80070B0C:
    // 0x80070B0C: jr          $ra
    // 0x80070B10: nop

    return;
    // 0x80070B10: nop

    // 0x80070B14: jr          $ra
    // 0x80070B18: nop

    return;
    // 0x80070B18: nop

;}
RECOMP_FUNC void func_800BC86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC86C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BC870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BC874: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BC878: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BC87C: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x800BC880: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC884: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC888: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC88C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC890: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC894: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC898: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC89C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC8A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC8A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC8A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BC8AC: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x800BC8B0: sb          $t0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r8;
L_800BC8B4:
    // 0x800BC8B4: lb          $a0, 0x22($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X22);
    // 0x800BC8B8: lb          $a1, 0x2B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2B);
    // 0x800BC8BC: jal         0x800BC91C
    // 0x800BC8C0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_800BC91C(rdram, ctx);
        goto after_0;
    // 0x800BC8C0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x800BC8C4: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800BC8C8: lb          $t2, 0x23($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X23);
    // 0x800BC8CC: sra         $t1, $s0, 16
    ctx->r9 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800BC8D0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800BC8D4: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x800BC8D8: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x800BC8DC: lb          $t4, 0x22($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X22);
    // 0x800BC8E0: nop

    // 0x800BC8E4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800BC8E8: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x800BC8EC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800BC8F0: bgtz        $t7, L_800BC8B4
    if (SIGNED(ctx->r15) > 0) {
        // 0x800BC8F4: sb          $t5, 0x22($sp)
        MEM_B(0X22, ctx->r29) = ctx->r13;
            goto L_800BC8B4;
    }
    // 0x800BC8F4: sb          $t5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r13;
    // 0x800BC8F8: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x800BC8FC: b           L_800BC90C
    // 0x800BC900: nop

        goto L_800BC90C;
    // 0x800BC900: nop

    // 0x800BC904: b           L_800BC90C
    // 0x800BC908: nop

        goto L_800BC90C;
    // 0x800BC908: nop

L_800BC90C:
    // 0x800BC90C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC910: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BC914: jr          $ra
    // 0x800BC918: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BC918: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C9EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9EF8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C9EFC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C9F00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C9F04: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C9F08: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C9F0C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C9F10: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C9F14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C9F18: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C9F1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C9F20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C9F24: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C9F28: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C9F2C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C9F30: addiu       $a1, $a1, 0x3FD0
    ctx->r5 = ADD32(ctx->r5, 0X3FD0);
    // 0x800C9F34: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C9F38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C9F3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C9F40: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C9F44: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C9F48: jal         0x80027464
    // 0x800C9F4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C9F4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C9F50: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C9F54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C9F58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C9F5C: beq         $t1, $at, L_800C9F74
    if (ctx->r9 == ctx->r1) {
        // 0x800C9F60: nop
    
            goto L_800C9F74;
    }
    // 0x800C9F60: nop

    // 0x800C9F64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C9F68: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C9F6C: jal         0x80027B34
    // 0x800C9F70: addiu       $a1, $a1, 0x4E20
    ctx->r5 = ADD32(ctx->r5, 0X4E20);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x800C9F70: addiu       $a1, $a1, 0x4E20
    ctx->r5 = ADD32(ctx->r5, 0X4E20);
    after_1:
L_800C9F74:
    // 0x800C9F74: b           L_800C9F7C
    // 0x800C9F78: nop

        goto L_800C9F7C;
    // 0x800C9F78: nop

L_800C9F7C:
    // 0x800C9F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9F84: jr          $ra
    // 0x800C9F88: nop

    return;
    // 0x800C9F88: nop

;}
RECOMP_FUNC void func_80091864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091864: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009186C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091870: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091874: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091878: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009187C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091880: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091884: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091888: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009188C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091890: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091894: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091898: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009189C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800918A0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800918A4: addiu       $a1, $a1, 0x15B8
    ctx->r5 = ADD32(ctx->r5, 0X15B8);
    // 0x800918A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800918AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800918B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800918B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800918B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800918BC: jal         0x80027464
    // 0x800918C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800918C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800918C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800918C8: b           L_800918D0
    // 0x800918CC: nop

        goto L_800918D0;
    // 0x800918CC: nop

L_800918D0:
    // 0x800918D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800918D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800918D8: jr          $ra
    // 0x800918DC: nop

    return;
    // 0x800918DC: nop

;}
RECOMP_FUNC void func_800B4258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4258: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B425C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B4260: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4264: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B4268: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B426C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4274: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B4278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B427C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4280: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B4284: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B4288: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B428C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B4290: nop

    // 0x800B4294: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B4298: nop

    // 0x800B429C: bne         $t1, $zero, L_800B4348
    if (ctx->r9 != 0) {
        // 0x800B42A0: nop
    
            goto L_800B4348;
    }
    // 0x800B42A0: nop

    // 0x800B42A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B42A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B42AC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B42B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B42B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B42B8: nop

    // 0x800B42BC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B42C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B42C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B42C8: nop

    // 0x800B42CC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B42D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B42D4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800B42D8: addiu       $t6, $t6, 0x7928
    ctx->r14 = ADD32(ctx->r14, 0X7928);
    // 0x800B42DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B42E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800B42E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B42E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800B42EC: jal         0x8001C0EC
    // 0x800B42F0: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B42F0: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_0:
    // 0x800B42F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B42F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B42FC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4300: addiu       $a3, $a3, 0x79D0
    ctx->r7 = ADD32(ctx->r7, 0X79D0);
    // 0x800B4304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4308: jal         0x8001ABF4
    // 0x800B430C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B430C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B4310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4314: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4318: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B431C: addiu       $a3, $a3, 0x7A08
    ctx->r7 = ADD32(ctx->r7, 0X7A08);
    // 0x800B4320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B4324: jal         0x8001ABF4
    // 0x800B4328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B4328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B432C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4334: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4338: addiu       $a3, $a3, 0x7A40
    ctx->r7 = ADD32(ctx->r7, 0X7A40);
    // 0x800B433C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B4340: jal         0x8001ABF4
    // 0x800B4344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B4344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800B4348:
    // 0x800B4348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B434C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4350: jal         0x8002A8B4
    // 0x800B4354: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800B4354: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x800B4358: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B435C: nop

    // 0x800B4360: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800B4364: nop

    // 0x800B4368: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x800B436C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4374: jal         0x80029C40
    // 0x800B4378: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B4378: nop

    after_5:
    // 0x800B437C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4380: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4384: jal         0x80029D04
    // 0x800B4388: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800B4388: nop

    after_6:
    // 0x800B438C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4394: jal         0x8002A2EC
    // 0x800B4398: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x800B4398: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_7:
    // 0x800B439C: beq         $v0, $zero, L_800B43E0
    if (ctx->r2 == 0) {
        // 0x800B43A0: nop
    
            goto L_800B43E0;
    }
    // 0x800B43A0: nop

    // 0x800B43A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B43A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B43AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B43B0: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800B43B4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800B43B8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800B43BC: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800B43C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800B43C4: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x800B43C8: nop

    // 0x800B43CC: bc1f        L_800B43E0
    if (!c1cs) {
        // 0x800B43D0: nop
    
            goto L_800B43E0;
    }
    // 0x800B43D0: nop

    // 0x800B43D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B43D8: nop

    // 0x800B43DC: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
L_800B43E0:
    // 0x800B43E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B43E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B43E8: jal         0x8001B44C
    // 0x800B43EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800B43EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800B43F0: beq         $v0, $zero, L_800B4434
    if (ctx->r2 == 0) {
        // 0x800B43F4: nop
    
            goto L_800B4434;
    }
    // 0x800B43F4: nop

    // 0x800B43F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800B43FC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800B4400: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800B4404: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B4408: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B440C: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800B4410: nop

    // 0x800B4414: bne         $t4, $at, L_800B4428
    if (ctx->r12 != ctx->r1) {
        // 0x800B4418: nop
    
            goto L_800B4428;
    }
    // 0x800B4418: nop

    // 0x800B441C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B4420: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800B4424: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800B4428:
    // 0x800B4428: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B442C: nop

    // 0x800B4430: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800B4434:
    // 0x800B4434: b           L_800B443C
    // 0x800B4438: nop

        goto L_800B443C;
    // 0x800B4438: nop

L_800B443C:
    // 0x800B443C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B4444: jr          $ra
    // 0x800B4448: nop

    return;
    // 0x800B4448: nop

;}
RECOMP_FUNC void func_800DC300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DC304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DC308: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC30C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC310: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC314: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC318: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC31C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC320: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC324: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC328: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC32C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC330: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DC334: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DC338: nop

    // 0x800DC33C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DC340: nop

    // 0x800DC344: bne         $t1, $zero, L_800DC388
    if (ctx->r9 != 0) {
        // 0x800DC348: nop
    
            goto L_800DC388;
    }
    // 0x800DC348: nop

    // 0x800DC34C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DC350: nop

    // 0x800DC354: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DC358: nop

    // 0x800DC35C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DC360: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DC364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC368: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DC36C: addiu       $t5, $t5, -0x714C
    ctx->r13 = ADD32(ctx->r13, -0X714C);
    // 0x800DC370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC374: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DC378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DC37C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DC380: jal         0x8001C0EC
    // 0x800DC384: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DC384: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_0:
L_800DC388:
    // 0x800DC388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC38C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC390: jal         0x8002A1FC
    // 0x800DC394: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800DC394: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_1:
    // 0x800DC398: beq         $v0, $zero, L_800DC3B8
    if (ctx->r2 == 0) {
        // 0x800DC39C: nop
    
            goto L_800DC3B8;
    }
    // 0x800DC39C: nop

    // 0x800DC3A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DC3A4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800DC3A8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800DC3AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DC3B0: nop

    // 0x800DC3B4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800DC3B8:
    // 0x800DC3B8: b           L_800DC3C0
    // 0x800DC3BC: nop

        goto L_800DC3C0;
    // 0x800DC3BC: nop

L_800DC3C0:
    // 0x800DC3C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC3C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DC3C8: jr          $ra
    // 0x800DC3CC: nop

    return;
    // 0x800DC3CC: nop

;}
RECOMP_FUNC void func_8008DA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DA20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008DA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DA28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008DA2C: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x8008DA30: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008DA34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008DA38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DA3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008DA40: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008DA44: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008DA48: nop

    // 0x8008DA4C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8008DA50: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008DA54: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008DA58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008DA5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DA60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008DA64: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DA68: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008DA6C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008DA70: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008DA74: lwc1        $f4, 0x24($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X24);
    // 0x8008DA78: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8008DA7C: nop

    // 0x8008DA80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008DA84: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8008DA88: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8008DA8C: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x8008DA90: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008DA94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DA98: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008DA9C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8008DAA0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DAA4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008DAA8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8008DAAC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008DAB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008DAB4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008DAB8: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8008DABC: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8008DAC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008DAC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DAC8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008DACC: lwc1        $f4, 0x4D50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4D50);
    // 0x8008DAD0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008DAD4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8008DAD8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8008DADC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008DAE0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008DAE4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008DAE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DAEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008DAF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DAF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008DAF8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008DAFC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008DB00: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8008DB04: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8008DB08: nop

    // 0x8008DB0C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8008DB10: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8008DB14: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8008DB18: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8008DB1C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DB20: jal         0x80067748
    // 0x8008DB24: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8008DB24: nop

    after_0:
    // 0x8008DB28: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008DB2C: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x8008DB30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008DB34: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8008DB38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008DB3C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008DB40: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8008DB44: nop

    // 0x8008DB48: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8008DB4C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008DB50: addiu       $t6, $t6, 0x4D18
    ctx->r14 = ADD32(ctx->r14, 0X4D18);
    // 0x8008DB54: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008DB58: nop

    // 0x8008DB5C: bne         $t7, $zero, L_8008DC74
    if (ctx->r15 != 0) {
        // 0x8008DB60: nop
    
            goto L_8008DC74;
    }
    // 0x8008DB60: nop

    // 0x8008DB64: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008DB68: lh          $t2, 0x3A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3A);
    // 0x8008DB6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008DB70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DB74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008DB78: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008DB7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DB80: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008DB84: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008DB88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008DB8C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008DB90: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008DB94: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8008DB98: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008DB9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008DBA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DBA4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008DBA8: lwc1        $f10, 0x4D50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4D50);
    // 0x8008DBAC: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8008DBB0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8008DBB4: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
    // 0x8008DBB8: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_8008DBBC:
    // 0x8008DBBC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8008DBC0: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8008DBC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008DBC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DBCC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008DBD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DBD4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008DBD8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008DBDC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8008DBE0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8008DBE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DBE8: lh          $t9, 0x4238($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4238);
    // 0x8008DBEC: nop

    // 0x8008DBF0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008DBF4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008DBF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008DBFC: beq         $t0, $at, L_8008DC54
    if (ctx->r8 == ctx->r1) {
        // 0x8008DC00: nop
    
            goto L_8008DC54;
    }
    // 0x8008DC00: nop

    // 0x8008DC04: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8008DC08: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008DC0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008DC10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008DC14: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008DC18: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008DC1C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008DC20: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008DC24: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008DC28: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8008DC2C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8008DC30: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8008DC34: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8008DC38: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8008DC3C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008DC40: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8008DC44: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8008DC48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008DC4C: addu        $t7, $t5, $t1
    ctx->r15 = ADD32(ctx->r13, ctx->r9);
    // 0x8008DC50: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
L_8008DC54:
    // 0x8008DC54: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x8008DC58: nop

    // 0x8008DC5C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8008DC60: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8008DC64: sra         $t2, $t0, 16
    ctx->r10 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8008DC68: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x8008DC6C: bne         $at, $zero, L_8008DBBC
    if (ctx->r1 != 0) {
        // 0x8008DC70: sh          $t9, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r25;
            goto L_8008DBBC;
    }
    // 0x8008DC70: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
L_8008DC74:
    // 0x8008DC74: b           L_8008DC7C
    // 0x8008DC78: nop

        goto L_8008DC7C;
    // 0x8008DC78: nop

L_8008DC7C:
    // 0x8008DC7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DC80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008DC84: jr          $ra
    // 0x8008DC88: nop

    return;
    // 0x8008DC88: nop

;}
RECOMP_FUNC void func_800BC124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC124: jr          $ra
    // 0x800BC128: nop

    return;
    // 0x800BC128: nop

    // 0x800BC12C: jr          $ra
    // 0x800BC130: nop

    return;
    // 0x800BC130: nop

;}
RECOMP_FUNC void func_800E5260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E5264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5268: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E526C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5270: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5274: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E527C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5284: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5288: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E528C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5290: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E5294: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5298: nop

    // 0x800E529C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E52A0: nop

    // 0x800E52A4: bne         $t1, $zero, L_800E531C
    if (ctx->r9 != 0) {
        // 0x800E52A8: nop
    
            goto L_800E531C;
    }
    // 0x800E52A8: nop

    // 0x800E52AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E52B0: nop

    // 0x800E52B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E52B8: nop

    // 0x800E52BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E52C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E52C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E52C8: nop

    // 0x800E52CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E52D0: nop

    // 0x800E52D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E52D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E52DC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E52E0: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E52E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E52E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E52EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E52F0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800E52F4: jal         0x8001C0EC
    // 0x800E52F8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E52F8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E52FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5300: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E5304: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E5308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E530C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E5310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5314: jal         0x8001ABF4
    // 0x800E5318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E5318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E531C:
    // 0x800E531C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5324: jal         0x8001B4AC
    // 0x800E5328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E532C: beq         $v0, $zero, L_800E534C
    if (ctx->r2 == 0) {
        // 0x800E5330: nop
    
            goto L_800E534C;
    }
    // 0x800E5330: nop

    // 0x800E5334: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5338: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E533C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E5340: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5344: nop

    // 0x800E5348: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E534C:
    // 0x800E534C: b           L_800E5354
    // 0x800E5350: nop

        goto L_800E5354;
    // 0x800E5350: nop

L_800E5354:
    // 0x800E5354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5358: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E535C: jr          $ra
    // 0x800E5360: nop

    return;
    // 0x800E5360: nop

;}
RECOMP_FUNC void func_800B7BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7BB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B7BB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B7BBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7BC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B7BC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7BC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7BCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7BD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B7BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7BD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7BDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7BE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B7BE4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B7BE8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7BEC: nop

    // 0x800B7BF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B7BF4: nop

    // 0x800B7BF8: bne         $t1, $zero, L_800B7D38
    if (ctx->r9 != 0) {
        // 0x800B7BFC: nop
    
            goto L_800B7D38;
    }
    // 0x800B7BFC: nop

    // 0x800B7C00: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7C04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B7C08: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B7C0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B7C10: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7C14: nop

    // 0x800B7C18: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B7C1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B7C20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7C24: nop

    // 0x800B7C28: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B7C2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7C30: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800B7C34: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800B7C38: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800B7C3C: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800B7C40: nop

    // 0x800B7C44: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800B7C48: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x800B7C4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7C50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7C54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7C58: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800B7C5C: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800B7C60: nop

    // 0x800B7C64: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800B7C68: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800B7C6C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800B7C70: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B7C74: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x800B7C78: nop

    // 0x800B7C7C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800B7C80: jal         0x800366E0
    // 0x800B7C84: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x800B7C84: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_0:
    // 0x800B7C88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B7C8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B7C90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800B7C94: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B7C98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B7C9C: nop

    // 0x800B7CA0: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800B7CA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800B7CA8: nop

    // 0x800B7CAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800B7CB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B7CB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B7CB8: nop

    // 0x800B7CBC: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800B7CC0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800B7CC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800B7CC8: sb          $t1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r9;
    // 0x800B7CCC: nop

    // 0x800B7CD0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7CD4: nop

    // 0x800B7CD8: sh          $zero, 0x108($t2)
    MEM_H(0X108, ctx->r10) = 0;
    // 0x800B7CDC: lb          $t3, 0x23($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X23);
    // 0x800B7CE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7CE4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x800B7CE8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800B7CEC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B7CF0: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800B7CF4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7CF8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800B7CFC: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800B7D00: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7D04: nop

    // 0x800B7D08: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B7D0C: nop

    // 0x800B7D10: sh          $t9, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r25;
    // 0x800B7D14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7D18: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800B7D1C: addiu       $t0, $t0, 0x7AA0
    ctx->r8 = ADD32(ctx->r8, 0X7AA0);
    // 0x800B7D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7D24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800B7D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7D2C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800B7D30: jal         0x8001C0EC
    // 0x800B7D34: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B7D34: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_1:
L_800B7D38:
    // 0x800B7D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7D40: jal         0x80029C40
    // 0x800B7D44: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B7D44: nop

    after_2:
    // 0x800B7D48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7D4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7D50: jal         0x80029D04
    // 0x800B7D54: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B7D54: nop

    after_3:
    // 0x800B7D58: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7D5C: nop

    // 0x800B7D60: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800B7D64: nop

    // 0x800B7D68: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
    // 0x800B7D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7D74: jal         0x80028FA0
    // 0x800B7D78: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800B7D78: nop

    after_4:
    // 0x800B7D7C: beq         $v0, $zero, L_800B7D94
    if (ctx->r2 == 0) {
        // 0x800B7D80: nop
    
            goto L_800B7D94;
    }
    // 0x800B7D80: nop

    // 0x800B7D84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7D8C: jal         0x80029B60
    // 0x800B7D90: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800B7D90: nop

    after_5:
L_800B7D94:
    // 0x800B7D94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B7D98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B7D9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7DA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7DA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B7DA8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B7DAC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B7DB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B7DB4: jal         0x80029018
    // 0x800B7DB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800B7DB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800B7DBC: beq         $v0, $zero, L_800B7DC4
    if (ctx->r2 == 0) {
        // 0x800B7DC0: nop
    
            goto L_800B7DC4;
    }
    // 0x800B7DC0: nop

L_800B7DC4:
    // 0x800B7DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7DCC: jal         0x8001B44C
    // 0x800B7DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800B7DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800B7DD4: beq         $v0, $zero, L_800B7EAC
    if (ctx->r2 == 0) {
        // 0x800B7DD8: nop
    
            goto L_800B7EAC;
    }
    // 0x800B7DD8: nop

    // 0x800B7DDC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7DE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B7DE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B7DE8: nop

    // 0x800B7DEC: bne         $t3, $at, L_800B7E0C
    if (ctx->r11 != ctx->r1) {
        // 0x800B7DF0: nop
    
            goto L_800B7E0C;
    }
    // 0x800B7DF0: nop

    // 0x800B7DF4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7DF8: nop

    // 0x800B7DFC: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800B7E00: nop

    // 0x800B7E04: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800B7E08: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_800B7E0C:
    // 0x800B7E0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E10: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800B7E14: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x800B7E18: nop

    // 0x800B7E1C: bne         $t9, $at, L_800B7E60
    if (ctx->r25 != ctx->r1) {
        // 0x800B7E20: nop
    
            goto L_800B7E60;
    }
    // 0x800B7E20: nop

    // 0x800B7E24: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800B7E28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B7E2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E30: nop

    // 0x800B7E34: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x800B7E38: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800B7E3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B7E40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E44: nop

    // 0x800B7E48: swc1        $f16, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f16.u32l;
    // 0x800B7E4C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x800B7E50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B7E54: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E58: nop

    // 0x800B7E5C: swc1        $f10, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f10.u32l;
L_800B7E60:
    // 0x800B7E60: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E64: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800B7E68: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800B7E6C: nop

    // 0x800B7E70: bne         $t3, $at, L_800B7E84
    if (ctx->r11 != ctx->r1) {
        // 0x800B7E74: nop
    
            goto L_800B7E84;
    }
    // 0x800B7E74: nop

    // 0x800B7E78: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E7C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800B7E80: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_800B7E84:
    // 0x800B7E84: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7E8C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B7E90: addiu       $t7, $t7, 0x7AA0
    ctx->r15 = ADD32(ctx->r15, 0X7AA0);
    // 0x800B7E94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7E98: lh          $a2, 0xA8($t4)
    ctx->r6 = MEM_H(ctx->r12, 0XA8);
    // 0x800B7E9C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B7EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7EA4: jal         0x8001C0EC
    // 0x800B7EA8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800B7EA8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_8:
L_800B7EAC:
    // 0x800B7EAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7EB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B7EB4: lbu         $t8, 0x132($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X132);
    // 0x800B7EB8: nop

    // 0x800B7EBC: bne         $t8, $at, L_800B7F78
    if (ctx->r24 != ctx->r1) {
        // 0x800B7EC0: nop
    
            goto L_800B7F78;
    }
    // 0x800B7EC0: nop

    // 0x800B7EC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7EC8: nop

    // 0x800B7ECC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800B7ED0: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800B7ED4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800B7ED8: nop

    // 0x800B7EDC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800B7EE0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B7EE4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800B7EE8: nop

    // 0x800B7EEC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800B7EF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B7EF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B7EF8: nop

    // 0x800B7EFC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800B7F00: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x800B7F04: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800B7F08: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x800B7F0C: nop

    // 0x800B7F10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7F14: nop

    // 0x800B7F18: lh          $t4, 0xAA($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XAA);
    // 0x800B7F1C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800B7F20: bgez        $t4, L_800B7F30
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800B7F24: sra         $t7, $t4, 1
        ctx->r15 = S32(SIGNED(ctx->r12) >> 1);
            goto L_800B7F30;
    }
    // 0x800B7F24: sra         $t7, $t4, 1
    ctx->r15 = S32(SIGNED(ctx->r12) >> 1);
    // 0x800B7F28: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x800B7F2C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800B7F30:
    // 0x800B7F30: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800B7F34: bne         $at, $zero, L_800B7F78
    if (ctx->r1 != 0) {
        // 0x800B7F38: nop
    
            goto L_800B7F78;
    }
    // 0x800B7F38: nop

    // 0x800B7F3C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7F40: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800B7F44: sh          $t9, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r25;
    // 0x800B7F48: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7F4C: nop

    // 0x800B7F50: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800B7F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7F58: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800B7F5C: addiu       $t2, $t2, 0x7AA0
    ctx->r10 = ADD32(ctx->r10, 0X7AA0);
    // 0x800B7F60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7F64: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800B7F68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7F6C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800B7F70: jal         0x8001C0EC
    // 0x800B7F74: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x800B7F74: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_9:
L_800B7F78:
    // 0x800B7F78: b           L_800B7F80
    // 0x800B7F7C: nop

        goto L_800B7F80;
    // 0x800B7F7C: nop

L_800B7F80:
    // 0x800B7F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7F84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B7F88: jr          $ra
    // 0x800B7F8C: nop

    return;
    // 0x800B7F8C: nop

;}
RECOMP_FUNC void func_800C3C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3C10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3C18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3C1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3C20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3C24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3C2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3C30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3C34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3C38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3C3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3C40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3C44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3C48: nop

    // 0x800C3C4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3C50: nop

    // 0x800C3C54: bne         $t1, $zero, L_800C3CE0
    if (ctx->r9 != 0) {
        // 0x800C3C58: nop
    
            goto L_800C3CE0;
    }
    // 0x800C3C58: nop

    // 0x800C3C5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3C60: nop

    // 0x800C3C64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C3C68: nop

    // 0x800C3C6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C3C70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C3C74: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C3C78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C3C7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3C80: nop

    // 0x800C3C84: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C3C88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3C8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3C90: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800C3C94: jal         0x80029EF8
    // 0x800C3C98: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C3C98: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x800C3C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3CA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C3CA4: addiu       $t6, $t6, -0x7EF8
    ctx->r14 = ADD32(ctx->r14, -0X7EF8);
    // 0x800C3CA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3CAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C3CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3CB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C3CB8: jal         0x8001C0EC
    // 0x800C3CBC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C3CBC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_1:
    // 0x800C3CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3CC4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C3CC8: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C3CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3CD0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C3CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3CD8: jal         0x8001ABF4
    // 0x800C3CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800C3CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800C3CE0:
    // 0x800C3CE0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3CE4: nop

    // 0x800C3CE8: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800C3CEC: nop

    // 0x800C3CF0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800C3CF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C3CF8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C3CFC: nop

    // 0x800C3D00: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800C3D04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3D08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3D0C: jal         0x80029C40
    // 0x800C3D10: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800C3D10: nop

    after_3:
    // 0x800C3D14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C3D18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C3D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3D24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C3D28: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800C3D2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C3D30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C3D34: jal         0x80029018
    // 0x800C3D38: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800C3D38: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800C3D3C: beq         $v0, $zero, L_800C3D68
    if (ctx->r2 == 0) {
        // 0x800C3D40: nop
    
            goto L_800C3D68;
    }
    // 0x800C3D40: nop

    // 0x800C3D44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C3D48: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C3D4C: nop

    // 0x800C3D50: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x800C3D54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3D58: nop

    // 0x800C3D5C: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800C3D60: nop

    // 0x800C3D64: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_800C3D68:
    // 0x800C3D68: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C3D6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C3D70: nop

    // 0x800C3D74: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x800C3D78: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C3D7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C3D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3D88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C3D8C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C3D90: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C3D94: jal         0x80029F58
    // 0x800C3D98: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800C3D98: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800C3D9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3DA0: bne         $v0, $at, L_800C3E00
    if (ctx->r2 != ctx->r1) {
        // 0x800C3DA4: nop
    
            goto L_800C3E00;
    }
    // 0x800C3DA4: nop

    // 0x800C3DA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3DAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3DB4: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x800C3DB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C3DBC: jal         0x800175F0
    // 0x800C3DC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x800C3DC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x800C3DC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C3DC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C3DCC: nop

    // 0x800C3DD0: swc1        $f10, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f10.u32l;
    // 0x800C3DD4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C3DD8: nop

    // 0x800C3DDC: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800C3DE0: nop

    // 0x800C3DE4: swc1        $f16, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f16.u32l;
    // 0x800C3DE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3DEC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800C3DF0: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800C3DF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C3DF8: nop

    // 0x800C3DFC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800C3E00:
    // 0x800C3E00: b           L_800C3E08
    // 0x800C3E04: nop

        goto L_800C3E08;
    // 0x800C3E04: nop

L_800C3E08:
    // 0x800C3E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3E0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C3E10: jr          $ra
    // 0x800C3E14: nop

    return;
    // 0x800C3E14: nop

;}
RECOMP_FUNC void func_800B15A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B15A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B15A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B15A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B15AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B15B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B15B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B15B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B15BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B15C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B15C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B15C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B15CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B15D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B15D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B15D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B15DC: nop

    // 0x800B15E0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B15E4: nop

    // 0x800B15E8: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800B15EC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B15F0: nop

    // 0x800B15F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B15F8: nop

    // 0x800B15FC: bne         $t3, $zero, L_800B16C0
    if (ctx->r11 != 0) {
        // 0x800B1600: nop
    
            goto L_800B16C0;
    }
    // 0x800B1600: nop

    // 0x800B1604: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1608: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B160C: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B1610: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B1614: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B1618: nop

    // 0x800B161C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B1620: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B1624: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1628: nop

    // 0x800B162C: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B1630: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B1634: addiu       $t8, $zero, 0x384
    ctx->r24 = ADD32(0, 0X384);
    // 0x800B1638: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800B163C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B1640: nop

    // 0x800B1644: sh          $zero, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = 0;
    // 0x800B1648: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800B164C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B1650: beq         $t1, $at, L_800B1680
    if (ctx->r9 == ctx->r1) {
        // 0x800B1654: nop
    
            goto L_800B1680;
    }
    // 0x800B1654: nop

    // 0x800B1658: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x800B165C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B1660: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B1664: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B1668: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B166C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B1670: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B1674: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B1678: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B167C: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
L_800B1680:
    // 0x800B1680: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1684: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800B1688: addiu       $t5, $t5, 0x7884
    ctx->r13 = ADD32(ctx->r13, 0X7884);
    // 0x800B168C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1690: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800B1694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800B169C: jal         0x8001C0EC
    // 0x800B16A0: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B16A0: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_0:
    // 0x800B16A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B16A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B16AC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B16B0: addiu       $a3, $a3, 0x78D4
    ctx->r7 = ADD32(ctx->r7, 0X78D4);
    // 0x800B16B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B16B8: jal         0x8001ABF4
    // 0x800B16BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B16BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800B16C0:
    // 0x800B16C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B16C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B16C8: jal         0x8002A8B4
    // 0x800B16CC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B16CC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x800B16D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B16D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B16D8: jal         0x80028FA0
    // 0x800B16DC: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800B16DC: nop

    after_3:
    // 0x800B16E0: beq         $v0, $zero, L_800B16F8
    if (ctx->r2 == 0) {
        // 0x800B16E4: nop
    
            goto L_800B16F8;
    }
    // 0x800B16E4: nop

    // 0x800B16E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B16EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B16F0: jal         0x80029B60
    // 0x800B16F4: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800B16F4: nop

    after_4:
L_800B16F8:
    // 0x800B16F8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B16FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800B1700: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B1704: lwc1        $f8, 0x44($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800B1708: nop

    // 0x800B170C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800B1710: nop

    // 0x800B1714: bc1f        L_800B1738
    if (!c1cs) {
        // 0x800B1718: nop
    
            goto L_800B1738;
    }
    // 0x800B1718: nop

    // 0x800B171C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1720: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x800B1724: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B1728: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800B172C: nop

    // 0x800B1730: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B1734: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_800B1738:
    // 0x800B1738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B173C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1740: jal         0x80029C40
    // 0x800B1744: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B1744: nop

    after_5:
    // 0x800B1748: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B174C: nop

    // 0x800B1750: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B1754: nop

    // 0x800B1758: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x800B175C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B1760: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B176C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B1770: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B1774: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B1778: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B177C: jal         0x80029018
    // 0x800B1780: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800B1780: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800B1784: beq         $v0, $zero, L_800B17A8
    if (ctx->r2 == 0) {
        // 0x800B1788: nop
    
            goto L_800B17A8;
    }
    // 0x800B1788: nop

    // 0x800B178C: jal         0x800297DC
    // 0x800B1790: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800B1790: nop

    after_7:
    // 0x800B1794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B179C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B17A0: jal         0x80029824
    // 0x800B17A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800B17A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800B17A8:
    // 0x800B17A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B17AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B17B0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800B17B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B17B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B17BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B17C0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B17C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B17C8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800B17CC: jal         0x800296AC
    // 0x800B17D0: nop

    func_800296AC(rdram, ctx);
        goto after_9;
    // 0x800B17D0: nop

    after_9:
    // 0x800B17D4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B17D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B17DC: lh          $t3, 0xB4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB4);
    // 0x800B17E0: nop

    // 0x800B17E4: bne         $t3, $at, L_800B1850
    if (ctx->r11 != ctx->r1) {
        // 0x800B17E8: nop
    
            goto L_800B1850;
    }
    // 0x800B17E8: nop

    // 0x800B17EC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B17F0: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B17F4: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800B17F8: lwc1        $f4, 0x2C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800B17FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B1800: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B1804: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B1808: nop

    // 0x800B180C: bc1f        L_800B1850
    if (!c1cs) {
        // 0x800B1810: nop
    
            goto L_800B1850;
    }
    // 0x800B1810: nop

    // 0x800B1814: jal         0x800297DC
    // 0x800B1818: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800B1818: nop

    after_10:
    // 0x800B181C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1820: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1824: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B1828: jal         0x80029824
    // 0x800B182C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800B182C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800B1830: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1834: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B1838: nop

    // 0x800B183C: swc1        $f10, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f10.u32l;
    // 0x800B1840: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B1844: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1848: nop

    // 0x800B184C: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
L_800B1850:
    // 0x800B1850: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B1854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B1858: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x800B185C: nop

    // 0x800B1860: bne         $t7, $at, L_800B18CC
    if (ctx->r15 != ctx->r1) {
        // 0x800B1864: nop
    
            goto L_800B18CC;
    }
    // 0x800B1864: nop

    // 0x800B1868: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B186C: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B1870: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800B1874: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B1878: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B187C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B1880: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B1884: nop

    // 0x800B1888: bc1f        L_800B18CC
    if (!c1cs) {
        // 0x800B188C: nop
    
            goto L_800B18CC;
    }
    // 0x800B188C: nop

    // 0x800B1890: jal         0x800297DC
    // 0x800B1894: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800B1894: nop

    after_12:
    // 0x800B1898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B189C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B18A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B18A4: jal         0x80029824
    // 0x800B18A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800B18A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800B18AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B18B0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B18B4: nop

    // 0x800B18B8: swc1        $f10, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f10.u32l;
    // 0x800B18BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B18C0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B18C4: nop

    // 0x800B18C8: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
L_800B18CC:
    // 0x800B18CC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800B18D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B18D4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800B18D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B18DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B18E0: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800B18E4: nop

    // 0x800B18E8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800B18EC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800B18F0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800B18F4: sh          $t2, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r10;
    // 0x800B18F8: nop

    // 0x800B18FC: b           L_800B1904
    // 0x800B1900: nop

        goto L_800B1904;
    // 0x800B1900: nop

L_800B1904:
    // 0x800B1904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B1908: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B190C: jr          $ra
    // 0x800B1910: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B1910: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DCAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCAFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800DCB00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DCB04: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DCB08: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DCB0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DCB10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DCB14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DCB18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DCB1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCB20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DCB24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCB28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DCB2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DCB30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DCB34: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800DCB38: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x800DCB3C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DCB40: nop

    // 0x800DCB44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DCB48: nop

    // 0x800DCB4C: bne         $t1, $zero, L_800DCC04
    if (ctx->r9 != 0) {
        // 0x800DCB50: nop
    
            goto L_800DCC04;
    }
    // 0x800DCB50: nop

    // 0x800DCB54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DCB58: nop

    // 0x800DCB5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DCB60: nop

    // 0x800DCB64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DCB68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DCB6C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x800DCB70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DCB74: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DCB78: nop

    // 0x800DCB7C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DCB80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCB84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCB88: jal         0x8002A46C
    // 0x800DCB8C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800DCB8C: nop

    after_0:
    // 0x800DCB90: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DCB94: nop

    // 0x800DCB98: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800DCB9C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DCBA0: nop

    // 0x800DCBA4: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DCBA8: nop

    // 0x800DCBAC: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800DCBB0: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x800DCBB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DCBB8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800DCBBC: nop

    // 0x800DCBC0: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800DCBC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCBC8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800DCBCC: addiu       $t9, $t9, -0x7018
    ctx->r25 = ADD32(ctx->r25, -0X7018);
    // 0x800DCBD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCBD4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800DCBD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DCBDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DCBE0: jal         0x8001C0EC
    // 0x800DCBE4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800DCBE4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_1:
    // 0x800DCBE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCBEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCBF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DCBF4: addiu       $a2, $zero, 0x5D
    ctx->r6 = ADD32(0, 0X5D);
    // 0x800DCBF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800DCBFC: jal         0x800175F0
    // 0x800DCC00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800DCC00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800DCC04:
    // 0x800DCC04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCC08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCC0C: jal         0x80028FA0
    // 0x800DCC10: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DCC10: nop

    after_3:
    // 0x800DCC14: beq         $v0, $zero, L_800DCC40
    if (ctx->r2 == 0) {
        // 0x800DCC18: nop
    
            goto L_800DCC40;
    }
    // 0x800DCC18: nop

    // 0x800DCC1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCC20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCC24: jal         0x80029B60
    // 0x800DCC28: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800DCC28: nop

    after_4:
    // 0x800DCC2C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DCC30: nop

    // 0x800DCC34: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DCC38: nop

    // 0x800DCC3C: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
L_800DCC40:
    // 0x800DCC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCC48: jal         0x80029C40
    // 0x800DCC4C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800DCC4C: nop

    after_5:
    // 0x800DCC50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DCC54: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DCC58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCC5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCC60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800DCC64: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800DCC68: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DCC6C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DCC70: jal         0x80029018
    // 0x800DCC74: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800DCC74: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800DCC78: beq         $v0, $zero, L_800DCC98
    if (ctx->r2 == 0) {
        // 0x800DCC7C: nop
    
            goto L_800DCC98;
    }
    // 0x800DCC7C: nop

    // 0x800DCC80: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DCC84: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800DCC88: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800DCC8C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800DCC90: nop

    // 0x800DCC94: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800DCC98:
    // 0x800DCC98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCC9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCCA0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DCCA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DCCA8: jal         0x8002A0D0
    // 0x800DCCAC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_7;
    // 0x800DCCAC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_7:
    // 0x800DCCB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DCCB4: bne         $v0, $at, L_800DCD04
    if (ctx->r2 != ctx->r1) {
        // 0x800DCCB8: nop
    
            goto L_800DCD04;
    }
    // 0x800DCCB8: nop

    // 0x800DCCBC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DCCC0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800DCCC4: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DCCC8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DCCCC: nop

    // 0x800DCCD0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800DCCD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DCCD8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DCCDC: nop

    // 0x800DCCE0: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800DCCE4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800DCCE8: nop

    // 0x800DCCEC: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800DCCF0: nop

    // 0x800DCCF4: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800DCCF8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DCCFC: nop

    // 0x800DCD00: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
L_800DCD04:
    // 0x800DCD04: b           L_800DCD0C
    // 0x800DCD08: nop

        goto L_800DCD0C;
    // 0x800DCD08: nop

L_800DCD0C:
    // 0x800DCD0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DCD10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DCD14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DCD18: jr          $ra
    // 0x800DCD1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800DCD1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80087C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087C60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087C64: lb          $t6, -0x1F30($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1F30);
    // 0x80087C68: nop

    // 0x80087C6C: bne         $t6, $zero, L_80087CD4
    if (ctx->r14 != 0) {
        // 0x80087C70: nop
    
            goto L_80087CD4;
    }
    // 0x80087C70: nop

    // 0x80087C74: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80087C78: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80087C7C: nop

    // 0x80087C80: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80087C84: nop

    // 0x80087C88: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80087C8C: bne         $at, $zero, L_80087CD4
    if (ctx->r1 != 0) {
        // 0x80087C90: nop
    
            goto L_80087CD4;
    }
    // 0x80087C90: nop

    // 0x80087C94: slti        $at, $t8, 0x3D
    ctx->r1 = SIGNED(ctx->r24) < 0X3D ? 1 : 0;
    // 0x80087C98: beq         $at, $zero, L_80087CD4
    if (ctx->r1 == 0) {
        // 0x80087C9C: nop
    
            goto L_80087CD4;
    }
    // 0x80087C9C: nop

    // 0x80087CA0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80087CA4: lb          $t9, -0x1DB0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1DB0);
    // 0x80087CA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087CAC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80087CB0: sb          $t0, -0x1DB0($at)
    MEM_B(-0X1DB0, ctx->r1) = ctx->r8;
    // 0x80087CB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80087CB8: lb          $t1, -0x1DB0($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1DB0);
    // 0x80087CBC: nop

    // 0x80087CC0: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80087CC4: beq         $t2, $zero, L_80087CD4
    if (ctx->r10 == 0) {
        // 0x80087CC8: nop
    
            goto L_80087CD4;
    }
    // 0x80087CC8: nop

    // 0x80087CCC: b           L_80087D60
    // 0x80087CD0: nop

        goto L_80087D60;
    // 0x80087CD0: nop

L_80087CD4:
    // 0x80087CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087CD8: jal         0x8001C1A8
    // 0x80087CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_0;
    // 0x80087CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80087CE0: beq         $v0, $zero, L_80087D08
    if (ctx->r2 == 0) {
        // 0x80087CE4: nop
    
            goto L_80087D08;
    }
    // 0x80087CE4: nop

    // 0x80087CE8: jal         0x8001838C
    // 0x80087CEC: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x80087CEC: nop

    after_1:
    // 0x80087CF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087CF4: jal         0x8001B014
    // 0x80087CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x80087CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80087CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087D00: jal         0x8001C384
    // 0x80087D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_3;
    // 0x80087D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80087D08:
    // 0x80087D08: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80087D0C: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80087D10: nop

    // 0x80087D14: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80087D18: nop

    // 0x80087D1C: beq         $t4, $zero, L_80087D58
    if (ctx->r12 == 0) {
        // 0x80087D20: nop
    
            goto L_80087D58;
    }
    // 0x80087D20: nop

    // 0x80087D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087D28: jal         0x8001C1A8
    // 0x80087D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80087D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80087D30: beq         $v0, $zero, L_80087D58
    if (ctx->r2 == 0) {
        // 0x80087D34: nop
    
            goto L_80087D58;
    }
    // 0x80087D34: nop

    // 0x80087D38: jal         0x8001838C
    // 0x80087D3C: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80087D3C: nop

    after_5:
    // 0x80087D40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087D44: jal         0x8001B014
    // 0x80087D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x80087D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80087D4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087D50: jal         0x8001C384
    // 0x80087D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80087D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80087D58:
    // 0x80087D58: b           L_80087D60
    // 0x80087D5C: nop

        goto L_80087D60;
    // 0x80087D5C: nop

L_80087D60:
    // 0x80087D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087D68: jr          $ra
    // 0x80087D6C: nop

    return;
    // 0x80087D6C: nop

;}
RECOMP_FUNC void func_800B7A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7A28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B7A2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B7A30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7A34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B7A38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7A3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7A40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7A44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B7A48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7A4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7A50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7A54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B7A58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B7A5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B7A60: nop

    // 0x800B7A64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B7A68: nop

    // 0x800B7A6C: bne         $t1, $zero, L_800B7AF8
    if (ctx->r9 != 0) {
        // 0x800B7A70: nop
    
            goto L_800B7AF8;
    }
    // 0x800B7A70: nop

    // 0x800B7A74: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B7A78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B7A7C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B7A80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B7A84: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B7A88: nop

    // 0x800B7A8C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B7A90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B7A94: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B7A98: nop

    // 0x800B7A9C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B7AA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B7AA4: nop

    // 0x800B7AA8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800B7AAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B7AB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800B7AB4: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800B7AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7ABC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800B7AC0: addiu       $t9, $t9, 0x7AA0
    ctx->r25 = ADD32(ctx->r25, 0X7AA0);
    // 0x800B7AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7AC8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800B7ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B7AD4: jal         0x8001C0EC
    // 0x800B7AD8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B7AD8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_0:
    // 0x800B7ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7AE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7AE4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B7AE8: addiu       $a3, $a3, 0x7B4C
    ctx->r7 = ADD32(ctx->r7, 0X7B4C);
    // 0x800B7AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7AF0: jal         0x8001ABF4
    // 0x800B7AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B7AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800B7AF8:
    // 0x800B7AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7B00: jal         0x8002A8B4
    // 0x800B7B04: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B7B04: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_2:
    // 0x800B7B08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7B0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7B10: jal         0x80029C40
    // 0x800B7B14: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B7B14: nop

    after_3:
    // 0x800B7B18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7B1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7B20: jal         0x80029D04
    // 0x800B7B24: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B7B24: nop

    after_4:
    // 0x800B7B28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B7B2C: nop

    // 0x800B7B30: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800B7B34: nop

    // 0x800B7B38: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800B7B3C: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800B7B40: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B7B44: nop

    // 0x800B7B48: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800B7B4C: nop

    // 0x800B7B50: slti        $at, $t4, 0x14
    ctx->r1 = SIGNED(ctx->r12) < 0X14 ? 1 : 0;
    // 0x800B7B54: bne         $at, $zero, L_800B7B9C
    if (ctx->r1 != 0) {
        // 0x800B7B58: nop
    
            goto L_800B7B9C;
    }
    // 0x800B7B58: nop

    // 0x800B7B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7B64: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800B7B68: jal         0x8002A1FC
    // 0x800B7B6C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800B7B6C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_5:
    // 0x800B7B70: beq         $v0, $zero, L_800B7B9C
    if (ctx->r2 == 0) {
        // 0x800B7B74: nop
    
            goto L_800B7B9C;
    }
    // 0x800B7B74: nop

    // 0x800B7B78: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B7B7C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800B7B80: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800B7B84: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B7B88: nop

    // 0x800B7B8C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800B7B90: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B7B94: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800B7B98: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800B7B9C:
    // 0x800B7B9C: b           L_800B7BA4
    // 0x800B7BA0: nop

        goto L_800B7BA4;
    // 0x800B7BA0: nop

L_800B7BA4:
    // 0x800B7BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7BA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B7BAC: jr          $ra
    // 0x800B7BB0: nop

    return;
    // 0x800B7BB0: nop

;}
RECOMP_FUNC void func_800F8720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8720: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F8724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F8728: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F872C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8730: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8738: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F873C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8740: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8744: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F8748: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F874C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F8750: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F8754: nop

    // 0x800F8758: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F875C: nop

    // 0x800F8760: bne         $t1, $zero, L_800F8774
    if (ctx->r9 != 0) {
        // 0x800F8764: nop
    
            goto L_800F8774;
    }
    // 0x800F8764: nop

    // 0x800F8768: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F876C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F8770: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800F8774:
    // 0x800F8774: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F8778: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F877C: nop

    // 0x800F8780: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800F8784: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F8788: nop

    // 0x800F878C: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800F8790: nop

    // 0x800F8794: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x800F8798: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F879C: nop

    // 0x800F87A0: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x800F87A4: b           L_800F87AC
    // 0x800F87A8: nop

        goto L_800F87AC;
    // 0x800F87A8: nop

L_800F87AC:
    // 0x800F87AC: jr          $ra
    // 0x800F87B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F87B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D02AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D02AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D02B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D02B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D02B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D02BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D02C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D02C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D02C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D02CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D02D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D02D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D02D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D02DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D02E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D02E4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D02E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D02EC: nop

    // 0x800D02F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D02F4: nop

    // 0x800D02F8: bne         $t1, $zero, L_800D0388
    if (ctx->r9 != 0) {
        // 0x800D02FC: nop
    
            goto L_800D0388;
    }
    // 0x800D02FC: nop

    // 0x800D0300: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D0304: nop

    // 0x800D0308: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D030C: nop

    // 0x800D0310: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D0314: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D0318: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D031C: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x800D0320: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D0324: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0328: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D032C: nop

    // 0x800D0330: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800D0334: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D0338: nop

    // 0x800D033C: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800D0340: nop

    // 0x800D0344: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800D0348: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D034C: nop

    // 0x800D0350: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
    // 0x800D0354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0358: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800D035C: addiu       $t0, $t0, -0x7AEC
    ctx->r8 = ADD32(ctx->r8, -0X7AEC);
    // 0x800D0360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0364: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800D0368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D036C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800D0370: jal         0x8001C0EC
    // 0x800D0374: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D0374: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_0:
    // 0x800D0378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D037C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0380: jal         0x8001BBDC
    // 0x800D0384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D0384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800D0388:
    // 0x800D0388: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D038C: nop

    // 0x800D0390: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D0394: nop

    // 0x800D0398: bne         $t3, $zero, L_800D03B8
    if (ctx->r11 != 0) {
        // 0x800D039C: nop
    
            goto L_800D03B8;
    }
    // 0x800D039C: nop

    // 0x800D03A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D03A4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800D03A8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800D03AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D03B0: b           L_800D03D0
    // 0x800D03B4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800D03D0;
    // 0x800D03B4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D03B8:
    // 0x800D03B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D03BC: nop

    // 0x800D03C0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D03C4: nop

    // 0x800D03C8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800D03CC: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_800D03D0:
    // 0x800D03D0: b           L_800D03D8
    // 0x800D03D4: nop

        goto L_800D03D8;
    // 0x800D03D4: nop

L_800D03D8:
    // 0x800D03D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D03DC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D03E0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D03E4: jr          $ra
    // 0x800D03E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D03E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800AC194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AC198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AC19C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AC1A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AC1A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AC1A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AC1AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC1B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AC1B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC1B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AC1BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AC1C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AC1C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AC1C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AC1CC: nop

    // 0x800AC1D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AC1D4: nop

    // 0x800AC1D8: bne         $t1, $zero, L_800AC274
    if (ctx->r9 != 0) {
        // 0x800AC1DC: nop
    
            goto L_800AC274;
    }
    // 0x800AC1DC: nop

    // 0x800AC1E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AC1E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AC1E8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AC1EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AC1F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AC1F4: nop

    // 0x800AC1F8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AC1FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AC200: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AC204: nop

    // 0x800AC208: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AC20C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AC210: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x800AC214: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800AC218: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AC21C: nop

    // 0x800AC220: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800AC224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC228: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800AC22C: addiu       $t9, $t9, 0x75D0
    ctx->r25 = ADD32(ctx->r25, 0X75D0);
    // 0x800AC230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC234: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800AC238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC23C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800AC240: jal         0x8001C0EC
    // 0x800AC244: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AC244: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800AC248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC24C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC250: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AC254: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800AC258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC25C: jal         0x8001ABF4
    // 0x800AC260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800AC260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800AC264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC26C: jal         0x8001BB34
    // 0x800AC270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800AC270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800AC274:
    // 0x800AC274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC27C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC280: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AC284: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AC288: jal         0x800175F0
    // 0x800AC28C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800AC28C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800AC290: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC294: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC298: jal         0x8002A8B4
    // 0x800AC29C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800AC29C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_4:
    // 0x800AC2A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC2A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC2A8: jal         0x80029C40
    // 0x800AC2AC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800AC2AC: nop

    after_5:
    // 0x800AC2B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC2B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC2B8: jal         0x80029D04
    // 0x800AC2BC: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800AC2BC: nop

    after_6:
    // 0x800AC2C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AC2C4: nop

    // 0x800AC2C8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AC2CC: nop

    // 0x800AC2D0: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800AC2D4: beq         $t2, $zero, L_800AC2FC
    if (ctx->r10 == 0) {
        // 0x800AC2D8: nop
    
            goto L_800AC2FC;
    }
    // 0x800AC2D8: nop

    // 0x800AC2DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AC2E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800AC2E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AC2E8: lwc1        $f8, 0x20($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800AC2EC: nop

    // 0x800AC2F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800AC2F4: b           L_800AC318
    // 0x800AC2F8: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
        goto L_800AC318;
    // 0x800AC2F8: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
L_800AC2FC:
    // 0x800AC2FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AC300: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800AC304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AC308: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800AC30C: nop

    // 0x800AC310: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800AC314: swc1        $f6, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f6.u32l;
L_800AC318:
    // 0x800AC318: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AC31C: nop

    // 0x800AC320: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800AC324: nop

    // 0x800AC328: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800AC32C: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
    // 0x800AC330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC338: jal         0x8001B44C
    // 0x800AC33C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800AC33C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800AC340: beq         $v0, $zero, L_800AC358
    if (ctx->r2 == 0) {
        // 0x800AC344: nop
    
            goto L_800AC358;
    }
    // 0x800AC344: nop

    // 0x800AC348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC34C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC350: jal         0x8001BBDC
    // 0x800AC354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800AC354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_800AC358:
    // 0x800AC358: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AC35C: nop

    // 0x800AC360: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800AC364: nop

    // 0x800AC368: bgtz        $t9, L_800AC3B8
    if (SIGNED(ctx->r25) > 0) {
        // 0x800AC36C: nop
    
            goto L_800AC3B8;
    }
    // 0x800AC36C: nop

    // 0x800AC370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC37C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800AC380: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AC384: jal         0x800175F0
    // 0x800AC388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x800AC388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x800AC38C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AC390: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x800AC394: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800AC398: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800AC39C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800AC3A0: jal         0x8007EDF4
    // 0x800AC3A4: nop

    func_8007EDF4(rdram, ctx);
        goto after_10;
    // 0x800AC3A4: nop

    after_10:
    // 0x800AC3A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC3AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC3B0: jal         0x8002B114
    // 0x800AC3B4: nop

    func_8002B114(rdram, ctx);
        goto after_11;
    // 0x800AC3B4: nop

    after_11:
L_800AC3B8:
    // 0x800AC3B8: b           L_800AC3C0
    // 0x800AC3BC: nop

        goto L_800AC3C0;
    // 0x800AC3BC: nop

L_800AC3C0:
    // 0x800AC3C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC3C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AC3C8: jr          $ra
    // 0x800AC3CC: nop

    return;
    // 0x800AC3CC: nop

;}
RECOMP_FUNC void func_800AB0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB0CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AB0D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB0D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AB0D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AB0DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AB0E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AB0E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB0E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB0EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB0F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB0F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AB0F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB0FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AB100: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB104: nop

    // 0x800AB108: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AB10C: nop

    // 0x800AB110: bne         $t1, $zero, L_800AB1D8
    if (ctx->r9 != 0) {
        // 0x800AB114: nop
    
            goto L_800AB1D8;
    }
    // 0x800AB114: nop

    // 0x800AB118: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AB11C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AB120: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AB124: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AB128: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB12C: nop

    // 0x800AB130: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AB134: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AB138: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB13C: nop

    // 0x800AB140: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AB144: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AB148: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x800AB14C: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x800AB150: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AB154: nop

    // 0x800AB158: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800AB15C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB164: jal         0x8001BB34
    // 0x800AB168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800AB168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800AB16C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB170: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800AB174: addiu       $t9, $t9, 0x75D0
    ctx->r25 = ADD32(ctx->r25, 0X75D0);
    // 0x800AB178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB17C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800AB180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB184: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800AB188: jal         0x8001C0EC
    // 0x800AB18C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AB18C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
    // 0x800AB190: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB194: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB198: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AB19C: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800AB1A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB1A4: jal         0x8001ABF4
    // 0x800AB1A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800AB1A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800AB1AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB1B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB1B4: jal         0x8001BBDC
    // 0x800AB1B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800AB1B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800AB1BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB1C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB1C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB1C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AB1CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AB1D0: jal         0x800175F0
    // 0x800AB1D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800AB1D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800AB1D8:
    // 0x800AB1D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB1DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB1E0: jal         0x80029C40
    // 0x800AB1E4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800AB1E4: nop

    after_5:
    // 0x800AB1E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB1EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB1F0: jal         0x80029D04
    // 0x800AB1F4: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800AB1F4: nop

    after_6:
    // 0x800AB1F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB1FC: nop

    // 0x800AB200: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800AB204: nop

    // 0x800AB208: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800AB20C: beq         $t2, $zero, L_800AB234
    if (ctx->r10 == 0) {
        // 0x800AB210: nop
    
            goto L_800AB234;
    }
    // 0x800AB210: nop

    // 0x800AB214: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AB218: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800AB21C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AB220: lwc1        $f8, 0x20($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800AB224: nop

    // 0x800AB228: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800AB22C: b           L_800AB250
    // 0x800AB230: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
        goto L_800AB250;
    // 0x800AB230: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
L_800AB234:
    // 0x800AB234: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB238: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800AB23C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AB240: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800AB244: nop

    // 0x800AB248: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800AB24C: swc1        $f6, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f6.u32l;
L_800AB250:
    // 0x800AB250: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB254: nop

    // 0x800AB258: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800AB25C: nop

    // 0x800AB260: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800AB264: sh          $t7, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r15;
    // 0x800AB268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB26C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB270: jal         0x8001B44C
    // 0x800AB274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800AB274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800AB278: beq         $v0, $zero, L_800AB290
    if (ctx->r2 == 0) {
        // 0x800AB27C: nop
    
            goto L_800AB290;
    }
    // 0x800AB27C: nop

    // 0x800AB280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB288: jal         0x8001BBDC
    // 0x800AB28C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800AB28C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_800AB290:
    // 0x800AB290: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AB294: nop

    // 0x800AB298: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800AB29C: nop

    // 0x800AB2A0: bgtz        $t9, L_800AB2F0
    if (SIGNED(ctx->r25) > 0) {
        // 0x800AB2A4: nop
    
            goto L_800AB2F0;
    }
    // 0x800AB2A4: nop

    // 0x800AB2A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB2AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB2B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB2B4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800AB2B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AB2BC: jal         0x800175F0
    // 0x800AB2C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x800AB2C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x800AB2C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB2C8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x800AB2CC: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800AB2D0: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800AB2D4: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800AB2D8: jal         0x8007EDF4
    // 0x800AB2DC: nop

    func_8007EDF4(rdram, ctx);
        goto after_10;
    // 0x800AB2DC: nop

    after_10:
    // 0x800AB2E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB2E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB2E8: jal         0x8002B114
    // 0x800AB2EC: nop

    func_8002B114(rdram, ctx);
        goto after_11;
    // 0x800AB2EC: nop

    after_11:
L_800AB2F0:
    // 0x800AB2F0: b           L_800AB2F8
    // 0x800AB2F4: nop

        goto L_800AB2F8;
    // 0x800AB2F4: nop

L_800AB2F8:
    // 0x800AB2F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AB300: jr          $ra
    // 0x800AB304: nop

    return;
    // 0x800AB304: nop

;}
RECOMP_FUNC void func_800E1AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E1AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E1AB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E1AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E1AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E1AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E1AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E1AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E1ADC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E1AE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E1AE4: nop

    // 0x800E1AE8: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E1AEC: nop

    // 0x800E1AF0: bne         $t1, $zero, L_800E1B10
    if (ctx->r9 != 0) {
        // 0x800E1AF4: nop
    
            goto L_800E1B10;
    }
    // 0x800E1AF4: nop

    // 0x800E1AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1B00: jal         0x8001BB34
    // 0x800E1B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E1B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E1B08: b           L_800E1B38
    // 0x800E1B0C: nop

        goto L_800E1B38;
    // 0x800E1B0C: nop

L_800E1B10:
    // 0x800E1B10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E1B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1B18: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E1B1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1B20: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E1B24: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E1B28: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E1B2C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E1B30: jal         0x8001BB34
    // 0x800E1B34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E1B34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E1B38:
    // 0x800E1B38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E1B3C: nop

    // 0x800E1B40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E1B44: nop

    // 0x800E1B48: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E1B4C: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x800E1B50: beq         $at, $zero, L_800E1BE4
    if (ctx->r1 == 0) {
        // 0x800E1B54: nop
    
            goto L_800E1BE4;
    }
    // 0x800E1B54: nop

    // 0x800E1B58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1B5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E1B60: addu        $at, $at, $t7
    gpr jr_addend_800E1B6C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E1B64: lw          $t7, 0x5408($at)
    ctx->r15 = ADD32(ctx->r1, 0X5408);
    // 0x800E1B68: nop

    // 0x800E1B6C: jr          $t7
    // 0x800E1B70: nop

    switch (jr_addend_800E1B6C >> 2) {
        case 0: goto L_800E1B74; break;
        case 1: goto L_800E1B84; break;
        case 2: goto L_800E1B94; break;
        case 3: goto L_800E1BA4; break;
        case 4: goto L_800E1BB4; break;
        case 5: goto L_800E1BC4; break;
        case 6: goto L_800E1BD4; break;
        default: switch_error(__func__, 0x800E1B6C, 0x80115408);
    }
    // 0x800E1B70: nop

L_800E1B74:
    // 0x800E1B74: jal         0x800E09D0
    // 0x800E1B78: nop

    func_800E09D0(rdram, ctx);
        goto after_2;
    // 0x800E1B78: nop

    after_2:
    // 0x800E1B7C: b           L_800E1BEC
    // 0x800E1B80: nop

        goto L_800E1BEC;
    // 0x800E1B80: nop

L_800E1B84:
    // 0x800E1B84: jal         0x800E0C54
    // 0x800E1B88: nop

    func_800E0C54(rdram, ctx);
        goto after_3;
    // 0x800E1B88: nop

    after_3:
    // 0x800E1B8C: b           L_800E1BEC
    // 0x800E1B90: nop

        goto L_800E1BEC;
    // 0x800E1B90: nop

L_800E1B94:
    // 0x800E1B94: jal         0x800E0DE4
    // 0x800E1B98: nop

    func_800E0DE4(rdram, ctx);
        goto after_4;
    // 0x800E1B98: nop

    after_4:
    // 0x800E1B9C: b           L_800E1BEC
    // 0x800E1BA0: nop

        goto L_800E1BEC;
    // 0x800E1BA0: nop

L_800E1BA4:
    // 0x800E1BA4: jal         0x800E119C
    // 0x800E1BA8: nop

    func_800E119C(rdram, ctx);
        goto after_5;
    // 0x800E1BA8: nop

    after_5:
    // 0x800E1BAC: b           L_800E1BEC
    // 0x800E1BB0: nop

        goto L_800E1BEC;
    // 0x800E1BB0: nop

L_800E1BB4:
    // 0x800E1BB4: jal         0x800E1640
    // 0x800E1BB8: nop

    func_800E1640(rdram, ctx);
        goto after_6;
    // 0x800E1BB8: nop

    after_6:
    // 0x800E1BBC: b           L_800E1BEC
    // 0x800E1BC0: nop

        goto L_800E1BEC;
    // 0x800E1BC0: nop

L_800E1BC4:
    // 0x800E1BC4: jal         0x800E1670
    // 0x800E1BC8: nop

    func_800E1670(rdram, ctx);
        goto after_7;
    // 0x800E1BC8: nop

    after_7:
    // 0x800E1BCC: b           L_800E1BEC
    // 0x800E1BD0: nop

        goto L_800E1BEC;
    // 0x800E1BD0: nop

L_800E1BD4:
    // 0x800E1BD4: jal         0x800E1978
    // 0x800E1BD8: nop

    func_800E1978(rdram, ctx);
        goto after_8;
    // 0x800E1BD8: nop

    after_8:
    // 0x800E1BDC: b           L_800E1BEC
    // 0x800E1BE0: nop

        goto L_800E1BEC;
    // 0x800E1BE0: nop

L_800E1BE4:
    // 0x800E1BE4: b           L_800E1BEC
    // 0x800E1BE8: nop

        goto L_800E1BEC;
    // 0x800E1BE8: nop

L_800E1BEC:
    // 0x800E1BEC: b           L_800E1BF4
    // 0x800E1BF0: nop

        goto L_800E1BF4;
    // 0x800E1BF0: nop

L_800E1BF4:
    // 0x800E1BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E1BF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E1BFC: jr          $ra
    // 0x800E1C00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E1C00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D2EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2EA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2EA8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D2EAC: nop

    // 0x800D2EB0: bne         $t6, $zero, L_800D2F0C
    if (ctx->r14 != 0) {
        // 0x800D2EB4: nop
    
            goto L_800D2F0C;
    }
    // 0x800D2EB4: nop

    // 0x800D2EB8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D2EBC: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D2EC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D2EC4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D2EC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D2ECC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D2ED0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D2ED4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D2ED8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D2EDC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D2EE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D2EE4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D2EE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D2EEC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D2EF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D2EF4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D2EF8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D2EFC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D2F00: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D2F04: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800D2F08: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D2F0C:
    // 0x800D2F0C: jr          $ra
    // 0x800D2F10: nop

    return;
    // 0x800D2F10: nop

    // 0x800D2F14: jr          $ra
    // 0x800D2F18: nop

    return;
    // 0x800D2F18: nop

;}
RECOMP_FUNC void func_800F2FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2FBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F2FC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F2FC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2FC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2FCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F2FD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2FD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2FD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2FDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2FE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2FE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2FE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2FEC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F2FF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F2FF4: nop

    // 0x800F2FF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F2FFC: nop

    // 0x800F3000: bne         $t1, $zero, L_800F3058
    if (ctx->r9 != 0) {
        // 0x800F3004: nop
    
            goto L_800F3058;
    }
    // 0x800F3004: nop

    // 0x800F3008: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F300C: nop

    // 0x800F3010: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F3014: nop

    // 0x800F3018: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F301C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F3020: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F3024: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F3028: nop

    // 0x800F302C: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x800F3030: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800F3034: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F3038: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F303C: nop

    // 0x800F3040: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x800F3044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F304C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F3050: jal         0x80029EF8
    // 0x800F3054: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800F3054: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_0:
L_800F3058:
    // 0x800F3058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F305C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3060: jal         0x80029C40
    // 0x800F3064: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800F3064: nop

    after_1:
    // 0x800F3068: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F306C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F3070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3078: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F307C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800F3080: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F3084: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F3088: jal         0x80029018
    // 0x800F308C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800F308C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x800F3090: beq         $v0, $zero, L_800F30B0
    if (ctx->r2 == 0) {
        // 0x800F3094: nop
    
            goto L_800F30B0;
    }
    // 0x800F3094: nop

    // 0x800F3098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F309C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F30A0: jal         0x8002B0E4
    // 0x800F30A4: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800F30A4: nop

    after_3:
    // 0x800F30A8: b           L_800F30FC
    // 0x800F30AC: nop

        goto L_800F30FC;
    // 0x800F30AC: nop

L_800F30B0:
    // 0x800F30B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F30B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F30B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F30BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F30C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F30C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F30C8: jal         0x80029F58
    // 0x800F30CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800F30CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800F30D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F30D4: bne         $v0, $at, L_800F30F4
    if (ctx->r2 != ctx->r1) {
        // 0x800F30D8: nop
    
            goto L_800F30F4;
    }
    // 0x800F30D8: nop

    // 0x800F30DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F30E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F30E4: jal         0x8002B0E4
    // 0x800F30E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800F30E8: nop

    after_5:
    // 0x800F30EC: b           L_800F30FC
    // 0x800F30F0: nop

        goto L_800F30FC;
    // 0x800F30F0: nop

L_800F30F4:
    // 0x800F30F4: b           L_800F30FC
    // 0x800F30F8: nop

        goto L_800F30FC;
    // 0x800F30F8: nop

L_800F30FC:
    // 0x800F30FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F3104: jr          $ra
    // 0x800F3108: nop

    return;
    // 0x800F3108: nop

;}
RECOMP_FUNC void func_800DF034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF034: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DF038: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DF03C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DF040: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DF044: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DF048: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF04C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF050: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF054: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF05C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF064: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF068: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF06C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF070: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DF074: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF078: nop

    // 0x800DF07C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DF080: nop

    // 0x800DF084: bne         $t1, $zero, L_800DF130
    if (ctx->r9 != 0) {
        // 0x800DF088: nop
    
            goto L_800DF130;
    }
    // 0x800DF088: nop

    // 0x800DF08C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DF090: nop

    // 0x800DF094: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DF098: nop

    // 0x800DF09C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DF0A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DF0A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF0A8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DF0AC: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DF0B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF0B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DF0B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF0BC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800DF0C0: jal         0x8001C0EC
    // 0x800DF0C4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DF0C4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DF0C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF0CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF0D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DF0D4: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DF0D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF0DC: jal         0x8001ABF4
    // 0x800DF0E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DF0E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DF0E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF0E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DF0EC: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DF0F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF0F4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DF0F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DF0FC: jal         0x8001ABF4
    // 0x800DF100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DF100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DF104: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DF108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DF10C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF110: nop

    // 0x800DF114: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800DF118: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DF11C: nop

    // 0x800DF120: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800DF124: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DF128: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800DF12C: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800DF130:
    // 0x800DF130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF138: jal         0x80028FA0
    // 0x800DF13C: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DF13C: nop

    after_3:
    // 0x800DF140: beq         $v0, $zero, L_800DF194
    if (ctx->r2 == 0) {
        // 0x800DF144: nop
    
            goto L_800DF194;
    }
    // 0x800DF144: nop

    // 0x800DF148: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF14C: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DF150: lh          $t1, 0x106($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X106);
    // 0x800DF154: nop

    // 0x800DF158: beq         $t1, $at, L_800DF16C
    if (ctx->r9 == ctx->r1) {
        // 0x800DF15C: nop
    
            goto L_800DF16C;
    }
    // 0x800DF15C: nop

    // 0x800DF160: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DF164: bne         $t1, $at, L_800DF184
    if (ctx->r9 != ctx->r1) {
        // 0x800DF168: nop
    
            goto L_800DF184;
    }
    // 0x800DF168: nop

L_800DF16C:
    // 0x800DF16C: jal         0x800E3EE4
    // 0x800DF170: nop

    func_800E3EE4(rdram, ctx);
        goto after_4;
    // 0x800DF170: nop

    after_4:
    // 0x800DF174: b           L_800DF3BC
    // 0x800DF178: nop

        goto L_800DF3BC;
    // 0x800DF178: nop

    // 0x800DF17C: b           L_800DF194
    // 0x800DF180: nop

        goto L_800DF194;
    // 0x800DF180: nop

L_800DF184:
    // 0x800DF184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF18C: jal         0x80029B60
    // 0x800DF190: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800DF190: nop

    after_5:
L_800DF194:
    // 0x800DF194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF19C: jal         0x8002A8B4
    // 0x800DF1A0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800DF1A0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_6:
    // 0x800DF1A4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DF1A8: nop

    // 0x800DF1AC: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800DF1B0: nop

    // 0x800DF1B4: swc1        $f6, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f6.u32l;
    // 0x800DF1B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF1BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF1C0: jal         0x8001B62C
    // 0x800DF1C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_7;
    // 0x800DF1C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800DF1C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800DF1CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DF1D0: nop

    // 0x800DF1D4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800DF1D8: nop

    // 0x800DF1DC: bc1f        L_800DF3B4
    if (!c1cs) {
        // 0x800DF1E0: nop
    
            goto L_800DF3B4;
    }
    // 0x800DF1E0: nop

    // 0x800DF1E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF1E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF1EC: jal         0x8001B62C
    // 0x800DF1F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_8;
    // 0x800DF1F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800DF1F4: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x800DF1F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DF1FC: nop

    // 0x800DF200: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800DF204: nop

    // 0x800DF208: bc1f        L_800DF250
    if (!c1cs) {
        // 0x800DF20C: nop
    
            goto L_800DF250;
    }
    // 0x800DF20C: nop

    // 0x800DF210: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DF214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DF218: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800DF21C: nop

    // 0x800DF220: bne         $t2, $at, L_800DF248
    if (ctx->r10 != ctx->r1) {
        // 0x800DF224: nop
    
            goto L_800DF248;
    }
    // 0x800DF224: nop

    // 0x800DF228: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF22C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800DF230: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800DF234: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF238: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF23C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DF240: jal         0x80029EF8
    // 0x800DF244: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_9;
    // 0x800DF244: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
L_800DF248:
    // 0x800DF248: b           L_800DF288
    // 0x800DF24C: nop

        goto L_800DF288;
    // 0x800DF24C: nop

L_800DF250:
    // 0x800DF250: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DF254: nop

    // 0x800DF258: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800DF25C: nop

    // 0x800DF260: bne         $t8, $zero, L_800DF288
    if (ctx->r24 != 0) {
        // 0x800DF264: nop
    
            goto L_800DF288;
    }
    // 0x800DF264: nop

    // 0x800DF268: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF26C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800DF270: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800DF274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF27C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x800DF280: jal         0x80029EF8
    // 0x800DF284: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_10;
    // 0x800DF284: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_10:
L_800DF288:
    // 0x800DF288: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DF28C: nop

    // 0x800DF290: lwc1        $f16, 0x28($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800DF294: nop

    // 0x800DF298: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x800DF29C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DF2A0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DF2A4: nop

    // 0x800DF2A8: swc1        $f18, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f18.u32l;
    // 0x800DF2AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF2B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF2B4: jal         0x80029C40
    // 0x800DF2B8: nop

    func_80029C40(rdram, ctx);
        goto after_11;
    // 0x800DF2B8: nop

    after_11:
    // 0x800DF2BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DF2C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DF2C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF2C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF2CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF2D0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DF2D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DF2D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800DF2DC: jal         0x80029018
    // 0x800DF2E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x800DF2E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800DF2E4: beq         $v0, $zero, L_800DF308
    if (ctx->r2 == 0) {
        // 0x800DF2E8: nop
    
            goto L_800DF308;
    }
    // 0x800DF2E8: nop

    // 0x800DF2EC: jal         0x800297DC
    // 0x800DF2F0: nop

    func_800297DC(rdram, ctx);
        goto after_13;
    // 0x800DF2F0: nop

    after_13:
    // 0x800DF2F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF2F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF2FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DF300: jal         0x80029824
    // 0x800DF304: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_14;
    // 0x800DF304: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
L_800DF308:
    // 0x800DF308: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DF30C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DF310: nop

    // 0x800DF314: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x800DF318: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800DF31C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DF320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF328: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DF32C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DF330: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DF334: jal         0x80029F58
    // 0x800DF338: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_15;
    // 0x800DF338: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x800DF33C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DF340: bne         $v0, $at, L_800DF378
    if (ctx->r2 != ctx->r1) {
        // 0x800DF344: nop
    
            goto L_800DF378;
    }
    // 0x800DF344: nop

    // 0x800DF348: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DF34C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DF350: nop

    // 0x800DF354: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x800DF358: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DF35C: nop

    // 0x800DF360: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800DF364: nop

    // 0x800DF368: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800DF36C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF370: nop

    // 0x800DF374: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
L_800DF378:
    // 0x800DF378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF37C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF380: jal         0x8001B4AC
    // 0x800DF384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_16;
    // 0x800DF384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x800DF388: beq         $v0, $zero, L_800DF3B4
    if (ctx->r2 == 0) {
        // 0x800DF38C: nop
    
            goto L_800DF3B4;
    }
    // 0x800DF38C: nop

    // 0x800DF390: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DF394: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800DF398: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800DF39C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF3A0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800DF3A4: sh          $t9, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r25;
    // 0x800DF3A8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DF3AC: nop

    // 0x800DF3B0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800DF3B4:
    // 0x800DF3B4: b           L_800DF3BC
    // 0x800DF3B8: nop

        goto L_800DF3BC;
    // 0x800DF3B8: nop

L_800DF3BC:
    // 0x800DF3BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DF3C0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800DF3C4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800DF3C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800DF3CC: jr          $ra
    // 0x800DF3D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800DF3D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800B0C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0C1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B0C20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B0C24: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B0C28: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B0C2C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B0C30: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B0C34: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B0C38: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B0C3C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B0C40: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B0C44: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B0C48: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B0C4C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B0C50: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B0C54: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B0C58: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B0C5C: addiu       $a1, $a1, 0x39AC
    ctx->r5 = ADD32(ctx->r5, 0X39AC);
    // 0x800B0C60: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B0C64: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B0C68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800B0C6C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B0C70: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B0C74: jal         0x80027464
    // 0x800B0C78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B0C78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B0C7C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800B0C80: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B0C84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B0C88: beq         $t1, $at, L_800B0E74
    if (ctx->r9 == ctx->r1) {
        // 0x800B0C8C: nop
    
            goto L_800B0E74;
    }
    // 0x800B0C8C: nop

    // 0x800B0C90: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800B0C94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0C98: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B0C9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B0CA0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B0CA4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B0CA8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B0CAC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B0CB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B0CB4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B0CB8: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x800B0CBC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800B0CC0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B0CC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B0CC8: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800B0CCC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B0CD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B0CD4: lh          $t7, 0xA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA);
    // 0x800B0CD8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B0CDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0CE0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B0CE4: sh          $t7, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r15;
    // 0x800B0CE8: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800B0CEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0CF0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800B0CF4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B0CF8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B0CFC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B0D00: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B0D04: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B0D08: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B0D0C: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B0D10: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800B0D14: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800B0D18: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800B0D1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B0D20: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800B0D24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B0D28: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800B0D2C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800B0D30: nop

    // 0x800B0D34: sh          $t2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r10;
    // 0x800B0D38: lh          $t5, 0x24($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X24);
    // 0x800B0D3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0D40: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800B0D44: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800B0D48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B0D4C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800B0D50: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B0D54: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B0D58: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B0D5C: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x800B0D60: lh          $t7, 0x24($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X24);
    // 0x800B0D64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0D68: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800B0D6C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800B0D70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B0D74: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800B0D78: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B0D7C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B0D80: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B0D84: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800B0D88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0D8C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B0D90: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B0D94: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B0D98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B0D9C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B0DA0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B0DA4: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x800B0DA8: sh          $t6, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r14;
    // 0x800B0DAC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800B0DB0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800B0DB4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800B0DB8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800B0DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800B0DC0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800B0DC4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800B0DC8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800B0DCC: lh          $t5, 0x41F8($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F8);
    // 0x800B0DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B0DD4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800B0DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B0DDC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B0DE0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800B0DE4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800B0DE8: jal         0x800296AC
    // 0x800B0DEC: nop

    func_800296AC(rdram, ctx);
        goto after_1;
    // 0x800B0DEC: nop

    after_1:
    // 0x800B0DF0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800B0DF4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800B0DF8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800B0DFC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800B0E00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B0E04: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800B0E08: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800B0E0C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B0E10: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800B0E14: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800B0E18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B0E1C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x800B0E20: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800B0E24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B0E28: nop

    // 0x800B0E2C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800B0E30: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800B0E34: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800B0E38: sh          $t6, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r14;
    // 0x800B0E3C: nop

    // 0x800B0E40: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800B0E44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B0E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B0E4C: jal         0x80019448
    // 0x800B0E50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800B0E50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800B0E54: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800B0E58: addiu       $t1, $t1, 0x7884
    ctx->r9 = ADD32(ctx->r9, 0X7884);
    // 0x800B0E5C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B0E60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800B0E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B0E68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B0E6C: jal         0x8001C0EC
    // 0x800B0E70: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800B0E70: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_3:
L_800B0E74:
    // 0x800B0E74: b           L_800B0E7C
    // 0x800B0E78: nop

        goto L_800B0E7C;
    // 0x800B0E78: nop

L_800B0E7C:
    // 0x800B0E7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B0E84: jr          $ra
    // 0x800B0E88: nop

    return;
    // 0x800B0E88: nop

;}
RECOMP_FUNC void func_800C0858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C085C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C0860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0868: jal         0x8002B0E4
    // 0x800C086C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C086C: nop

    after_0:
    // 0x800C0870: b           L_800C0878
    // 0x800C0874: nop

        goto L_800C0878;
    // 0x800C0874: nop

L_800C0878:
    // 0x800C0878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C087C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C0880: jr          $ra
    // 0x800C0884: nop

    return;
    // 0x800C0884: nop

;}
RECOMP_FUNC void func_800BCCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCCAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BCCB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BCCB4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800BCCB8: lw          $a0, 0x519C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X519C);
    // 0x800BCCBC: jal         0x80026260
    // 0x800BCCC0: nop

    func_80026260(rdram, ctx);
        goto after_0;
    // 0x800BCCC0: nop

    after_0:
    // 0x800BCCC4: bne         $v0, $zero, L_800BCD28
    if (ctx->r2 != 0) {
        // 0x800BCCC8: nop
    
            goto L_800BCD28;
    }
    // 0x800BCCC8: nop

    // 0x800BCCCC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BCCD0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BCCD4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BCCD8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BCCDC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BCCE0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BCCE4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BCCE8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BCCEC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BCCF0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BCCF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BCCF8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BCCFC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BCD00: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BCD04: addiu       $a1, $a1, 0x3C1C
    ctx->r5 = ADD32(ctx->r5, 0X3C1C);
    // 0x800BCD08: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BCD0C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BCD10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BCD14: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BCD18: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BCD1C: jal         0x80027464
    // 0x800BCD20: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x800BCD20: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800BCD24: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
L_800BCD28:
    // 0x800BCD28: b           L_800BCD30
    // 0x800BCD2C: nop

        goto L_800BCD30;
    // 0x800BCD2C: nop

L_800BCD30:
    // 0x800BCD30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCD34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BCD38: jr          $ra
    // 0x800BCD3C: nop

    return;
    // 0x800BCD3C: nop

;}
RECOMP_FUNC void func_80099454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099454: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80099458: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009945C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80099460: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80099464: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80099468: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009946C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80099470: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80099474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099478: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009947C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099480: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80099484: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80099488: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009948C: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
    // 0x80099490: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x80099494: nop

    // 0x80099498: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009949C: nop

    // 0x800994A0: bne         $t1, $zero, L_800994FC
    if (ctx->r9 != 0) {
        // 0x800994A4: nop
    
            goto L_800994FC;
    }
    // 0x800994A4: nop

    // 0x800994A8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x800994AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800994B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800994B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800994B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800994BC: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x800994C0: nop

    // 0x800994C4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800994C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800994CC: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x800994D0: nop

    // 0x800994D4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x800994D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800994DC: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x800994E0: nop

    // 0x800994E4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800994E8: jal         0x80014E80
    // 0x800994EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800994EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x800994F0: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x800994F4: nop

    // 0x800994F8: sh          $v0, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r2;
L_800994FC:
    // 0x800994FC: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x80099500: nop

    // 0x80099504: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80099508: nop

    // 0x8009950C: bne         $t9, $zero, L_80099648
    if (ctx->r25 != 0) {
        // 0x80099510: nop
    
            goto L_80099648;
    }
    // 0x80099510: nop

    // 0x80099514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009951C: jal         0x8002A1FC
    // 0x80099520: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x80099520: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    after_1:
    // 0x80099524: beq         $v0, $zero, L_8009955C
    if (ctx->r2 == 0) {
        // 0x80099528: nop
    
            goto L_8009955C;
    }
    // 0x80099528: nop

    // 0x8009952C: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x80099530: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80099534: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x80099538: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x8009953C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80099540: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80099544: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80099548: jal         0x80015538
    // 0x8009954C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8009954C: nop

    after_2:
    // 0x80099550: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x80099554: b           L_80099640
    // 0x80099558: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
        goto L_80099640;
    // 0x80099558: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
L_8009955C:
    // 0x8009955C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80099560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80099564: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x80099568: nop

    // 0x8009956C: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x80099570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099578: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8009957C: jal         0x8002A8B4
    // 0x80099580: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80099580: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_3:
    // 0x80099584: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x80099588: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009958C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80099590: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80099594: nop

    // 0x80099598: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8009959C: nop

    // 0x800995A0: bc1f        L_800995D8
    if (!c1cs) {
        // 0x800995A4: nop
    
            goto L_800995D8;
    }
    // 0x800995A4: nop

    // 0x800995A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800995AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800995B0: nop

    // 0x800995B4: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x800995B8: nop

    // 0x800995BC: bc1f        L_800995D8
    if (!c1cs) {
        // 0x800995C0: nop
    
            goto L_800995D8;
    }
    // 0x800995C0: nop

    // 0x800995C4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800995C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800995CC: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x800995D0: b           L_8009962C
    // 0x800995D4: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
        goto L_8009962C;
    // 0x800995D4: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
L_800995D8:
    // 0x800995D8: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x800995DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800995E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800995E4: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800995E8: nop

    // 0x800995EC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800995F0: nop

    // 0x800995F4: bc1f        L_8009962C
    if (!c1cs) {
        // 0x800995F8: nop
    
            goto L_8009962C;
    }
    // 0x800995F8: nop

    // 0x800995FC: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80099600: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80099604: nop

    // 0x80099608: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x8009960C: nop

    // 0x80099610: bc1f        L_8009962C
    if (!c1cs) {
        // 0x80099614: nop
    
            goto L_8009962C;
    }
    // 0x80099614: nop

    // 0x80099618: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x8009961C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80099620: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x80099624: nop

    // 0x80099628: swc1        $f16, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f16.u32l;
L_8009962C:
    // 0x8009962C: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80099630: nop

    // 0x80099634: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80099638: nop

    // 0x8009963C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
L_80099640:
    // 0x80099640: b           L_800997D0
    // 0x80099644: nop

        goto L_800997D0;
    // 0x80099644: nop

L_80099648:
    // 0x80099648: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009964C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099650: jal         0x8002A1FC
    // 0x80099654: lui         $a1, 0x4534
    ctx->r5 = S32(0X4534 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x80099654: lui         $a1, 0x4534
    ctx->r5 = S32(0X4534 << 16);
    after_4:
    // 0x80099658: bne         $v0, $zero, L_80099690
    if (ctx->r2 != 0) {
        // 0x8009965C: nop
    
            goto L_80099690;
    }
    // 0x8009965C: nop

    // 0x80099660: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x80099664: nop

    // 0x80099668: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x8009966C: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x80099670: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80099674: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80099678: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8009967C: jal         0x80015538
    // 0x80099680: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80099680: nop

    after_5:
    // 0x80099684: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x80099688: b           L_800997D0
    // 0x8009968C: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
        goto L_800997D0;
    // 0x8009968C: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
L_80099690:
    // 0x80099690: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80099694: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80099698: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x8009969C: nop

    // 0x800996A0: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x800996A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800996A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800996AC: jal         0x8002A46C
    // 0x800996B0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x800996B0: nop

    after_6:
    // 0x800996B4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800996B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800996BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800996C0: jal         0x80015538
    // 0x800996C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800996C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_7:
    // 0x800996C8: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x800996CC: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x800996D0: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x800996D4: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800996D8: jal         0x8002A800
    // 0x800996DC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8002A800(rdram, ctx);
        goto after_8;
    // 0x800996DC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_8:
    // 0x800996E0: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x800996E4: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x800996E8: nop

    // 0x800996EC: bne         $t5, $zero, L_80099704
    if (ctx->r13 != 0) {
        // 0x800996F0: nop
    
            goto L_80099704;
    }
    // 0x800996F0: nop

    // 0x800996F4: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x800996F8: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x800996FC: b           L_8009973C
    // 0x80099700: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
        goto L_8009973C;
    // 0x80099700: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
L_80099704:
    // 0x80099704: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80099708: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8009970C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80099710: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80099714: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x80099718: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009971C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80099720: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80099724: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80099728: jal         0x80015538
    // 0x8009972C: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8009972C: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    after_9:
    // 0x80099730: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80099734: nop

    // 0x80099738: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
L_8009973C:
    // 0x8009973C: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x80099740: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80099744: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80099748: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8009974C: nop

    // 0x80099750: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80099754: nop

    // 0x80099758: bc1f        L_80099774
    if (!c1cs) {
        // 0x8009975C: nop
    
            goto L_80099774;
    }
    // 0x8009975C: nop

    // 0x80099760: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80099764: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80099768: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x8009976C: b           L_800997AC
    // 0x80099770: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
        goto L_800997AC;
    // 0x80099770: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
L_80099774:
    // 0x80099774: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x80099778: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8009977C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80099780: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80099784: nop

    // 0x80099788: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8009978C: nop

    // 0x80099790: bc1f        L_800997AC
    if (!c1cs) {
        // 0x80099794: nop
    
            goto L_800997AC;
    }
    // 0x80099794: nop

    // 0x80099798: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8009979C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800997A0: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x800997A4: nop

    // 0x800997A8: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
L_800997AC:
    // 0x800997AC: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x800997B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800997B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800997B8: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800997BC: jal         0x80015538
    // 0x800997C0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800997C0: nop

    after_10:
    // 0x800997C4: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x800997C8: nop

    // 0x800997CC: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
L_800997D0:
    // 0x800997D0: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x800997D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800997D8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800997DC: nop

    // 0x800997E0: bne         $t7, $at, L_80099860
    if (ctx->r15 != ctx->r1) {
        // 0x800997E4: nop
    
            goto L_80099860;
    }
    // 0x800997E4: nop

    // 0x800997E8: lh          $t8, 0xAA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAA);
    // 0x800997EC: nop

    // 0x800997F0: bne         $t8, $zero, L_80099860
    if (ctx->r24 != 0) {
        // 0x800997F4: nop
    
            goto L_80099860;
    }
    // 0x800997F4: nop

    // 0x800997F8: lh          $t9, 0xAC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XAC);
    // 0x800997FC: nop

    // 0x80099800: bne         $t9, $zero, L_80099860
    if (ctx->r25 != 0) {
        // 0x80099804: nop
    
            goto L_80099860;
    }
    // 0x80099804: nop

    // 0x80099808: jal         0x80014E80
    // 0x8009980C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x8009980C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
    // 0x80099810: bne         $v0, $zero, L_80099860
    if (ctx->r2 != 0) {
        // 0x80099814: nop
    
            goto L_80099860;
    }
    // 0x80099814: nop

    // 0x80099818: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x8009981C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80099820: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80099824: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80099828: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009982C: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80099830: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80099834: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80099838: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8009983C: nop

    // 0x80099840: bc1f        L_80099860
    if (!c1cs) {
        // 0x80099844: nop
    
            goto L_80099860;
    }
    // 0x80099844: nop

    // 0x80099848: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x8009984C: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x80099850: sh          $t2, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r10;
    // 0x80099854: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x80099858: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x8009985C: sh          $t4, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r12;
L_80099860:
    // 0x80099860: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80099864: nop

    // 0x80099868: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x8009986C: nop

    // 0x80099870: beq         $t8, $zero, L_80099AF4
    if (ctx->r24 == 0) {
        // 0x80099874: nop
    
            goto L_80099AF4;
    }
    // 0x80099874: nop

    // 0x80099878: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x8009987C: nop

    // 0x80099880: lh          $t9, 0xAC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XAC);
    // 0x80099884: nop

    // 0x80099888: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x8009988C: bne         $t0, $zero, L_80099AD8
    if (ctx->r8 != 0) {
        // 0x80099890: nop
    
            goto L_80099AD8;
    }
    // 0x80099890: nop

    // 0x80099894: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80099898: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009989C: nop

    // 0x800998A0: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x800998A4: nop

    // 0x800998A8: bc1t        L_80099AD8
    if (c1cs) {
        // 0x800998AC: nop
    
            goto L_80099AD8;
    }
    // 0x800998AC: nop

    // 0x800998B0: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x800998B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800998B8: lw          $a1, 0x1C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X1C);
    // 0x800998BC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x800998C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800998C4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800998C8: jal         0x800372A0
    // 0x800998CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_12;
    // 0x800998CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800998D0: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x800998D4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800998D8: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x800998DC: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x800998E0: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x800998E4: jal         0x80037200
    // 0x800998E8: nop

    guTranslateF(rdram, ctx);
        goto after_13;
    // 0x800998E8: nop

    after_13:
    // 0x800998EC: addiu       $t3, $sp, 0x88
    ctx->r11 = ADD32(ctx->r29, 0X88);
    // 0x800998F0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800998F4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800998F8: jal         0x80036400
    // 0x800998FC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    guMtxCatF(rdram, ctx);
        goto after_14;
    // 0x800998FC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_14:
    // 0x80099900: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x80099904: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x80099908: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x8009990C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80099910: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80099914: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80099918: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x8009991C: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80099920: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x80099924: jal         0x80036360
    // 0x80099928: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_15;
    // 0x80099928: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_15:
    // 0x8009992C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80099930: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x80099934: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80099938: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8009993C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80099940: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80099944: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80099948: addiu       $a1, $a1, 0x3460
    ctx->r5 = ADD32(ctx->r5, 0X3460);
    // 0x8009994C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80099950: jal         0x80027464
    // 0x80099954: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80099954: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80099958: sw          $v0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r2;
    // 0x8009995C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x80099960: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099964: beq         $t9, $at, L_800999EC
    if (ctx->r25 == ctx->r1) {
        // 0x80099968: nop
    
            goto L_800999EC;
    }
    // 0x80099968: nop

    // 0x8009996C: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x80099970: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x80099974: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80099978: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8009997C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80099980: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80099984: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80099988: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009998C: lwc1        $f18, 0x48E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48E0);
    // 0x80099990: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80099994: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80099998: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009999C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800999A0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800999A4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800999A8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800999AC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800999B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800999B4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800999B8: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x800999BC: lwc1        $f20, 0x14($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800999C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800999C4: swc1        $f20, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f20.u32l;
    // 0x800999C8: lw          $t5, 0xD0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD0);
    // 0x800999CC: nop

    // 0x800999D0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800999D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800999D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800999DC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800999E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800999E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800999E8: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800999EC:
    // 0x800999EC: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x800999F0: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x800999F4: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x800999F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800999FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80099A00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80099A04: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80099A08: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80099A0C: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x80099A10: jal         0x80036360
    // 0x80099A14: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_17;
    // 0x80099A14: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_17:
    // 0x80099A18: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80099A1C: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x80099A20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80099A24: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80099A28: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80099A2C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80099A30: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80099A34: addiu       $a1, $a1, 0x3460
    ctx->r5 = ADD32(ctx->r5, 0X3460);
    // 0x80099A38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80099A3C: jal         0x80027464
    // 0x80099A40: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_18;
    // 0x80099A40: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x80099A44: sw          $v0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r2;
    // 0x80099A48: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x80099A4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099A50: beq         $t1, $at, L_80099AD8
    if (ctx->r9 == ctx->r1) {
        // 0x80099A54: nop
    
            goto L_80099AD8;
    }
    // 0x80099A54: nop

    // 0x80099A58: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x80099A5C: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x80099A60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80099A64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80099A68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80099A6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80099A70: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80099A74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80099A78: lwc1        $f6, 0x48E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X48E4);
    // 0x80099A7C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80099A80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80099A84: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80099A88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80099A8C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80099A90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80099A94: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80099A98: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80099A9C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80099AA0: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80099AA4: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x80099AA8: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80099AAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80099AB0: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80099AB4: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x80099AB8: nop

    // 0x80099ABC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80099AC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80099AC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80099AC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80099ACC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80099AD0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80099AD4: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_80099AD8:
    // 0x80099AD8: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x80099ADC: nop

    // 0x80099AE0: lh          $t1, 0xAC($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XAC);
    // 0x80099AE4: nop

    // 0x80099AE8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80099AEC: b           L_80099B24
    // 0x80099AF0: sh          $t2, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r10;
        goto L_80099B24;
    // 0x80099AF0: sh          $t2, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r10;
L_80099AF4:
    // 0x80099AF4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x80099AF8: nop

    // 0x80099AFC: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80099B00: nop

    // 0x80099B04: beq         $t4, $zero, L_80099B24
    if (ctx->r12 == 0) {
        // 0x80099B08: nop
    
            goto L_80099B24;
    }
    // 0x80099B08: nop

    // 0x80099B0C: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x80099B10: nop

    // 0x80099B14: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80099B18: nop

    // 0x80099B1C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80099B20: sh          $t8, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r24;
L_80099B24:
    // 0x80099B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099B2C: jal         0x80028FA0
    // 0x80099B30: nop

    func_80028FA0(rdram, ctx);
        goto after_19;
    // 0x80099B30: nop

    after_19:
    // 0x80099B34: beq         $v0, $zero, L_80099B4C
    if (ctx->r2 == 0) {
        // 0x80099B38: nop
    
            goto L_80099B4C;
    }
    // 0x80099B38: nop

    // 0x80099B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099B44: jal         0x80029B60
    // 0x80099B48: nop

    func_80029B60(rdram, ctx);
        goto after_20;
    // 0x80099B48: nop

    after_20:
L_80099B4C:
    // 0x80099B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099B54: jal         0x80029D8C
    // 0x80099B58: nop

    func_80029D8C(rdram, ctx);
        goto after_21;
    // 0x80099B58: nop

    after_21:
    // 0x80099B5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80099B60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80099B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099B6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80099B70: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x80099B74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80099B78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80099B7C: jal         0x80029018
    // 0x80099B80: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_22;
    // 0x80099B80: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_22:
    // 0x80099B84: beq         $v0, $zero, L_80099B8C
    if (ctx->r2 == 0) {
        // 0x80099B88: nop
    
            goto L_80099B8C;
    }
    // 0x80099B88: nop

L_80099B8C:
    // 0x80099B8C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80099B90: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80099B94: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80099B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80099B9C: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80099BA0: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80099BA4: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80099BA8: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80099BAC: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80099BB0: nop

    // 0x80099BB4: bc1f        L_80099C30
    if (!c1cs) {
        // 0x80099BB8: nop
    
            goto L_80099C30;
    }
    // 0x80099BB8: nop

    // 0x80099BBC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80099BC0:
    // 0x80099BC0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80099BC4: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x80099BC8: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80099BCC: addu        $t3, $t1, $t6
    ctx->r11 = ADD32(ctx->r9, ctx->r14);
    // 0x80099BD0: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80099BD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099BD8: beq         $t4, $at, L_80099C00
    if (ctx->r12 == ctx->r1) {
        // 0x80099BDC: sw          $t4, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->r12;
            goto L_80099C00;
    }
    // 0x80099BDC: sw          $t4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r12;
    // 0x80099BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099BE8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80099BEC: jal         0x800281A4
    // 0x80099BF0: nop

    func_800281A4(rdram, ctx);
        goto after_23;
    // 0x80099BF0: nop

    after_23:
    // 0x80099BF4: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x80099BF8: jal         0x8002B0E4
    // 0x80099BFC: nop

    func_8002B0E4(rdram, ctx);
        goto after_24;
    // 0x80099BFC: nop

    after_24:
L_80099C00:
    // 0x80099C00: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80099C04: nop

    // 0x80099C08: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80099C0C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80099C10: bne         $at, $zero, L_80099BC0
    if (ctx->r1 != 0) {
        // 0x80099C14: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_80099BC0;
    }
    // 0x80099C14: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80099C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099C20: jal         0x8002B0E4
    // 0x80099C24: nop

    func_8002B0E4(rdram, ctx);
        goto after_25;
    // 0x80099C24: nop

    after_25:
    // 0x80099C28: b           L_80099C38
    // 0x80099C2C: nop

        goto L_80099C38;
    // 0x80099C2C: nop

L_80099C30:
    // 0x80099C30: b           L_80099C38
    // 0x80099C34: nop

        goto L_80099C38;
    // 0x80099C34: nop

L_80099C38:
    // 0x80099C38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80099C3C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80099C40: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80099C44: jr          $ra
    // 0x80099C48: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x80099C48: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8009F4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F4D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F4D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F4DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009F4E0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009F4E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009F4E8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009F4EC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009F4F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009F4F4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009F4F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009F4FC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009F500: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009F504: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009F508: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009F50C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009F510: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009F514: addiu       $a1, $a1, 0x36B8
    ctx->r5 = ADD32(ctx->r5, 0X36B8);
    // 0x8009F518: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009F51C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009F520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009F524: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009F528: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009F52C: jal         0x80027464
    // 0x8009F530: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009F530: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009F534: b           L_8009F53C
    // 0x8009F538: nop

        goto L_8009F53C;
    // 0x8009F538: nop

L_8009F53C:
    // 0x8009F53C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F544: jr          $ra
    // 0x8009F548: nop

    return;
    // 0x8009F548: nop

;}
RECOMP_FUNC void func_800D1BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1BF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D1BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D1BF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D1BFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1C00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1C04: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D1C08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1C0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1C10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1C14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1C18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1C1C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D1C20: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D1C24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D1C28: beq         $s0, $at, L_800D1C44
    if (ctx->r16 == ctx->r1) {
        // 0x800D1C2C: nop
    
            goto L_800D1C44;
    }
    // 0x800D1C2C: nop

    // 0x800D1C30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D1C34: beq         $s0, $at, L_800D1C54
    if (ctx->r16 == ctx->r1) {
        // 0x800D1C38: nop
    
            goto L_800D1C54;
    }
    // 0x800D1C38: nop

    // 0x800D1C3C: b           L_800D1C64
    // 0x800D1C40: nop

        goto L_800D1C64;
    // 0x800D1C40: nop

L_800D1C44:
    // 0x800D1C44: jal         0x800D1870
    // 0x800D1C48: nop

    func_800D1870(rdram, ctx);
        goto after_0;
    // 0x800D1C48: nop

    after_0:
    // 0x800D1C4C: b           L_800D1C6C
    // 0x800D1C50: nop

        goto L_800D1C6C;
    // 0x800D1C50: nop

L_800D1C54:
    // 0x800D1C54: jal         0x800D1B94
    // 0x800D1C58: nop

    func_800D1B94(rdram, ctx);
        goto after_1;
    // 0x800D1C58: nop

    after_1:
    // 0x800D1C5C: b           L_800D1C6C
    // 0x800D1C60: nop

        goto L_800D1C6C;
    // 0x800D1C60: nop

L_800D1C64:
    // 0x800D1C64: b           L_800D1C6C
    // 0x800D1C68: nop

        goto L_800D1C6C;
    // 0x800D1C68: nop

L_800D1C6C:
    // 0x800D1C6C: b           L_800D1C74
    // 0x800D1C70: nop

        goto L_800D1C74;
    // 0x800D1C70: nop

L_800D1C74:
    // 0x800D1C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1C78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D1C7C: jr          $ra
    // 0x800D1C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D1C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
