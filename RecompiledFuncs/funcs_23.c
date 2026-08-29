#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800D418C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D418C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4194: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D4198: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D419C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D41A0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D41A4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D41A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D41AC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D41B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D41B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D41B8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D41BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D41C0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D41C4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D41C8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D41CC: addiu       $a1, $a1, 0x4138
    ctx->r5 = ADD32(ctx->r5, 0X4138);
    // 0x800D41D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D41D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D41D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D41DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D41E0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D41E4: jal         0x80027464
    // 0x800D41E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D41E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D41EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800D41F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D41F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D41F8: beq         $t1, $at, L_800D4240
    if (ctx->r9 == ctx->r1) {
        // 0x800D41FC: nop
    
            goto L_800D4240;
    }
    // 0x800D41FC: nop

    // 0x800D4200: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D4204: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D4208: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800D420C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D4210: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D4214: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4218: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D421C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D4220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D4224: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800D4228: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x800D422C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800D4230: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D4234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D4238: jal         0x80019448
    // 0x800D423C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800D423C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_800D4240:
    // 0x800D4240: b           L_800D4248
    // 0x800D4244: nop

        goto L_800D4248;
    // 0x800D4244: nop

L_800D4248:
    // 0x800D4248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D424C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D4250: jr          $ra
    // 0x800D4254: nop

    return;
    // 0x800D4254: nop

;}
RECOMP_FUNC void func_80080F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080F6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080F70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80080F74: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80080F78: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80080F7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080F80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080F84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080F88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080F8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080F90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080F94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080F98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080F9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080FA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080FA4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80080FA8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80080FAC: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80080FB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080FB8: lw          $a3, 0x148($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X148);
    // 0x80080FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80080FC0: jal         0x8001BD44
    // 0x80080FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80080FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80080FC8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80080FCC: addiu       $t1, $zero, 0x2CB
    ctx->r9 = ADD32(0, 0X2CB);
    // 0x80080FD0: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x80080FD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80080FD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080FDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80080FE0: nop

    // 0x80080FE4: swc1        $f4, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f4.u32l;
    // 0x80080FE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80080FEC: nop

    // 0x80080FF0: lwc1        $f20, 0x14($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X14);
    // 0x80080FF4: nop

    // 0x80080FF8: swc1        $f20, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f20.u32l;
    // 0x80080FFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80081000: nop

    // 0x80081004: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    // 0x80081008: b           L_80081010
    // 0x8008100C: nop

        goto L_80081010;
    // 0x8008100C: nop

L_80081010:
    // 0x80081010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80081014: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80081018: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8008101C: jr          $ra
    // 0x80081020: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80081020: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DF9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF9A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800DF9AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DF9B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800DF9B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF9B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF9BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF9C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF9C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF9C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF9CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF9D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF9D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF9D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF9DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800DF9E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DF9E4: nop

    // 0x800DF9E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DF9EC: nop

    // 0x800DF9F0: bne         $t1, $zero, L_800DFA24
    if (ctx->r9 != 0) {
        // 0x800DF9F4: nop
    
            goto L_800DFA24;
    }
    // 0x800DF9F4: nop

    // 0x800DF9F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DF9FC: nop

    // 0x800DFA00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DFA04: nop

    // 0x800DFA08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DFA0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DFA10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFA14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFA18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DFA1C: jal         0x80029EF8
    // 0x800DFA20: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800DFA20: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_800DFA24:
    // 0x800DFA24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFA28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFA2C: jal         0x80028FA0
    // 0x800DFA30: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800DFA30: nop

    after_1:
    // 0x800DFA34: beq         $v0, $zero, L_800DFA4C
    if (ctx->r2 == 0) {
        // 0x800DFA38: nop
    
            goto L_800DFA4C;
    }
    // 0x800DFA38: nop

    // 0x800DFA3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFA40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFA44: jal         0x80029B60
    // 0x800DFA48: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800DFA48: nop

    after_2:
L_800DFA4C:
    // 0x800DFA4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFA50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFA54: jal         0x8002A46C
    // 0x800DFA58: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DFA58: nop

    after_3:
    // 0x800DFA5C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DFA60: nop

    // 0x800DFA64: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800DFA68: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DFA6C: nop

    // 0x800DFA70: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800DFA74: nop

    // 0x800DFA78: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x800DFA7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFA80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFA84: jal         0x8002A8B4
    // 0x800DFA88: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800DFA88: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x800DFA8C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DFA90: nop

    // 0x800DFA94: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DFA98: nop

    // 0x800DFA9C: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800DFAA0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800DFAA4: nop

    // 0x800DFAA8: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800DFAAC: nop

    // 0x800DFAB0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800DFAB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DFAB8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DFABC: nop

    // 0x800DFAC0: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x800DFAC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DFAC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DFACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFAD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFAD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFAD8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DFADC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DFAE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DFAE4: jal         0x80029018
    // 0x800DFAE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800DFAE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800DFAEC: beq         $v0, $zero, L_800DFB10
    if (ctx->r2 == 0) {
        // 0x800DFAF0: nop
    
            goto L_800DFB10;
    }
    // 0x800DFAF0: nop

    // 0x800DFAF4: jal         0x800297DC
    // 0x800DFAF8: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800DFAF8: nop

    after_6:
    // 0x800DFAFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFB00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFB04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DFB08: jal         0x80029824
    // 0x800DFB0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800DFB0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800DFB10:
    // 0x800DFB10: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800DFB14: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DFB18: nop

    // 0x800DFB1C: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x800DFB20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DFB24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFB28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFB2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DFB30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DFB34: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DFB38: jal         0x80029F58
    // 0x800DFB3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800DFB3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800DFB40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DFB44: bne         $v0, $at, L_800DFB5C
    if (ctx->r2 != ctx->r1) {
        // 0x800DFB48: nop
    
            goto L_800DFB5C;
    }
    // 0x800DFB48: nop

    // 0x800DFB4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DFB50: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DFB54: nop

    // 0x800DFB58: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_800DFB5C:
    // 0x800DFB5C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DFB60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800DFB64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800DFB68: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800DFB6C: nop

    // 0x800DFB70: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800DFB74: nop

    // 0x800DFB78: bc1f        L_800DFBF0
    if (!c1cs) {
        // 0x800DFB7C: nop
    
            goto L_800DFBF0;
    }
    // 0x800DFB7C: nop

    // 0x800DFB80: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800DFB84: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DFB88: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800DFB8C: lwc1        $f7, 0x53B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X53B8);
    // 0x800DFB90: lwc1        $f6, 0x53BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X53BC);
    // 0x800DFB94: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800DFB98: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800DFB9C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800DFBA0: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x800DFBA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DFBA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DFBAC: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800DFBB0: lwc1        $f5, 0x53C0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X53C0);
    // 0x800DFBB4: lwc1        $f4, 0x53C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X53C4);
    // 0x800DFBB8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800DFBBC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800DFBC0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800DFBC4: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x800DFBC8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DFBCC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DFBD0: lwc1        $f10, 0x14($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800DFBD4: lwc1        $f19, 0x53C8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X53C8);
    // 0x800DFBD8: lwc1        $f18, 0x53CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X53CC);
    // 0x800DFBDC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800DFBE0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800DFBE4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800DFBE8: b           L_800DFC14
    // 0x800DFBEC: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
        goto L_800DFC14;
    // 0x800DFBEC: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
L_800DFBF0:
    // 0x800DFBF0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DFBF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DFBF8: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800DFBFC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DFC00: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800DFC04: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800DFC08: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DFC0C: nop

    // 0x800DFC10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800DFC14:
    // 0x800DFC14: b           L_800DFC1C
    // 0x800DFC18: nop

        goto L_800DFC1C;
    // 0x800DFC18: nop

L_800DFC1C:
    // 0x800DFC1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DFC20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800DFC24: jr          $ra
    // 0x800DFC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800DFC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009F5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F5EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F5F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009F5F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009F5FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009F600: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009F604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F608: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009F60C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F610: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009F614: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009F618: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F61C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009F620: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009F628: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009F62C: nop

    // 0x8009F630: bne         $t1, $at, L_8009F654
    if (ctx->r9 != ctx->r1) {
        // 0x8009F634: nop
    
            goto L_8009F654;
    }
    // 0x8009F634: nop

    // 0x8009F638: b           L_8009F640
    // 0x8009F63C: nop

        goto L_8009F640;
    // 0x8009F63C: nop

L_8009F640:
    // 0x8009F640: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F644: jal         0x8009F5BC
    // 0x8009F648: nop

    func_8009F5BC(rdram, ctx);
        goto after_0;
    // 0x8009F648: nop

    after_0:
    // 0x8009F64C: b           L_8009F654
    // 0x8009F650: nop

        goto L_8009F654;
    // 0x8009F650: nop

L_8009F654:
    // 0x8009F654: b           L_8009F65C
    // 0x8009F658: nop

        goto L_8009F65C;
    // 0x8009F658: nop

L_8009F65C:
    // 0x8009F65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F664: jr          $ra
    // 0x8009F668: nop

    return;
    // 0x8009F668: nop

;}
RECOMP_FUNC void func_800828A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800828A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800828AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800828B0: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x800828B4: nop

    // 0x800828B8: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800828BC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800828C0: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x800828C4: nop

    // 0x800828C8: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x800828CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800828D0: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x800828D4: nop

    // 0x800828D8: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x800828DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800828E0: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800828E4: nop

    // 0x800828E8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x800828EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800828F0: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x800828F4: nop

    // 0x800828F8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800828FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082900: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80082904: nop

    // 0x80082908: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8008290C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082910: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80082914: nop

    // 0x80082918: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8008291C: addiu       $t9, $zero, 0xBA
    ctx->r25 = ADD32(0, 0XBA);
    // 0x80082920: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082924: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x80082928: jal         0x80081C50
    // 0x8008292C: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x8008292C: nop

    after_0:
    // 0x80082930: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082934: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80082938: jal         0x800824A8
    // 0x8008293C: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x8008293C: nop

    after_1:
    // 0x80082940: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x80082944: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082948: sh          $t0, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r8;
    // 0x8008294C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80082950: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082954: sh          $t1, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r9;
    // 0x80082958: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x8008295C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082960: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x80082964: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082968: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008296C: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082970: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80082974: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082978: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x8008297C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082980: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082984: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082988: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008298C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082990: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082994: b           L_8008299C
    // 0x80082998: nop

        goto L_8008299C;
    // 0x80082998: nop

L_8008299C:
    // 0x8008299C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800829A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800829A4: jr          $ra
    // 0x800829A8: nop

    return;
    // 0x800829A8: nop

;}
RECOMP_FUNC void func_800D45C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D45C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D45C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D45CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D45D0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D45D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D45D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D45DC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D45E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D45E4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D45E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D45EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D45F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D45F4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D45F8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D45FC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D4600: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D4604: addiu       $a1, $a1, 0x4144
    ctx->r5 = ADD32(ctx->r5, 0X4144);
    // 0x800D4608: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D460C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D4610: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D4614: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D4618: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D461C: jal         0x80027464
    // 0x800D4620: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D4620: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D4624: b           L_800D462C
    // 0x800D4628: nop

        goto L_800D462C;
    // 0x800D4628: nop

L_800D462C:
    // 0x800D462C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D4634: jr          $ra
    // 0x800D4638: nop

    return;
    // 0x800D4638: nop

;}
RECOMP_FUNC void func_8006A1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A1F4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8006A1F8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8006A1FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A200: lw          $t7, -0x4C04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4C04);
    // 0x8006A204: nop

    // 0x8006A208: lb          $t8, 0x3($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X3);
    // 0x8006A20C: nop

    // 0x8006A210: beq         $t8, $zero, L_8006A228
    if (ctx->r24 == 0) {
        // 0x8006A214: nop
    
            goto L_8006A228;
    }
    // 0x8006A214: nop

    // 0x8006A218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8006A21C: lh          $a0, -0x1BCE($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1BCE);
    // 0x8006A220: b           L_8006A2A4
    // 0x8006A224: nop

        goto L_8006A2A4;
    // 0x8006A224: nop

L_8006A228:
    // 0x8006A228: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8006A22C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8006A230: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006A234: lw          $t0, -0x4C04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4C04);
    // 0x8006A238: nop

    // 0x8006A23C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8006A240: nop

    // 0x8006A244: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    // 0x8006A248: nop

    // 0x8006A24C: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x8006A250: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8006A254: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A258: lw          $t3, -0x4C04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C04);
    // 0x8006A25C: nop

    // 0x8006A260: lb          $t4, 0x3($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X3);
    // 0x8006A264: nop

    // 0x8006A268: beq         $t4, $zero, L_8006A278
    if (ctx->r12 == 0) {
        // 0x8006A26C: nop
    
            goto L_8006A278;
    }
    // 0x8006A26C: nop

    // 0x8006A270: b           L_8006A280
    // 0x8006A274: nop

        goto L_8006A280;
    // 0x8006A274: nop

L_8006A278:
    // 0x8006A278: b           L_8006A228
    // 0x8006A27C: nop

        goto L_8006A228;
    // 0x8006A27C: nop

L_8006A280:
    // 0x8006A280: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x8006A284: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8006A288: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006A28C: lw          $t6, -0x4C04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C04);
    // 0x8006A290: nop

    // 0x8006A294: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8006A298: nop

    // 0x8006A29C: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    // 0x8006A2A0: nop

L_8006A2A4:
    // 0x8006A2A4: jr          $ra
    // 0x8006A2A8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8006A2A8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8006A2AC: jr          $ra
    // 0x8006A2B0: nop

    return;
    // 0x8006A2B0: nop

    // 0x8006A2B4: jr          $ra
    // 0x8006A2B8: nop

    return;
    // 0x8006A2B8: nop

;}
RECOMP_FUNC void func_800AEC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEC98: jr          $ra
    // 0x800AEC9C: nop

    return;
    // 0x800AEC9C: nop

    // 0x800AECA0: jr          $ra
    // 0x800AECA4: nop

    return;
    // 0x800AECA4: nop

;}
RECOMP_FUNC void func_8009476C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009476C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80094770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80094778: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009477C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094780: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80094784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009478C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80094790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094794: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80094798: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8009479C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800947A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800947A4: beq         $s0, $at, L_800947C0
    if (ctx->r16 == ctx->r1) {
        // 0x800947A8: nop
    
            goto L_800947C0;
    }
    // 0x800947A8: nop

    // 0x800947AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800947B0: beq         $s0, $at, L_800947D0
    if (ctx->r16 == ctx->r1) {
        // 0x800947B4: nop
    
            goto L_800947D0;
    }
    // 0x800947B4: nop

    // 0x800947B8: b           L_800947E0
    // 0x800947BC: nop

        goto L_800947E0;
    // 0x800947BC: nop

L_800947C0:
    // 0x800947C0: jal         0x80094680
    // 0x800947C4: nop

    func_80094680(rdram, ctx);
        goto after_0;
    // 0x800947C4: nop

    after_0:
    // 0x800947C8: b           L_800947E0
    // 0x800947CC: nop

        goto L_800947E0;
    // 0x800947CC: nop

L_800947D0:
    // 0x800947D0: jal         0x8009473C
    // 0x800947D4: nop

    func_8009473C(rdram, ctx);
        goto after_1;
    // 0x800947D4: nop

    after_1:
    // 0x800947D8: b           L_800947E0
    // 0x800947DC: nop

        goto L_800947E0;
    // 0x800947DC: nop

L_800947E0:
    // 0x800947E0: b           L_800947E8
    // 0x800947E4: nop

        goto L_800947E8;
    // 0x800947E4: nop

L_800947E8:
    // 0x800947E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800947EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800947F0: jr          $ra
    // 0x800947F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800947F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D4530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4530: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4538: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D453C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4540: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4544: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D4548: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D454C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4550: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4558: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D455C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D4560: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D4564: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D4568: beq         $s0, $at, L_800D4584
    if (ctx->r16 == ctx->r1) {
        // 0x800D456C: nop
    
            goto L_800D4584;
    }
    // 0x800D456C: nop

    // 0x800D4570: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D4574: beq         $s0, $at, L_800D4594
    if (ctx->r16 == ctx->r1) {
        // 0x800D4578: nop
    
            goto L_800D4594;
    }
    // 0x800D4578: nop

    // 0x800D457C: b           L_800D45A4
    // 0x800D4580: nop

        goto L_800D45A4;
    // 0x800D4580: nop

L_800D4584:
    // 0x800D4584: jal         0x800D4268
    // 0x800D4588: nop

    func_800D4268(rdram, ctx);
        goto after_0;
    // 0x800D4588: nop

    after_0:
    // 0x800D458C: b           L_800D45AC
    // 0x800D4590: nop

        goto L_800D45AC;
    // 0x800D4590: nop

L_800D4594:
    // 0x800D4594: jal         0x800D4430
    // 0x800D4598: nop

    func_800D4430(rdram, ctx);
        goto after_1;
    // 0x800D4598: nop

    after_1:
    // 0x800D459C: b           L_800D45AC
    // 0x800D45A0: nop

        goto L_800D45AC;
    // 0x800D45A0: nop

L_800D45A4:
    // 0x800D45A4: b           L_800D45AC
    // 0x800D45A8: nop

        goto L_800D45AC;
    // 0x800D45A8: nop

L_800D45AC:
    // 0x800D45AC: b           L_800D45B4
    // 0x800D45B0: nop

        goto L_800D45B4;
    // 0x800D45B0: nop

L_800D45B4:
    // 0x800D45B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D45B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D45BC: jr          $ra
    // 0x800D45C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D45C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80060E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060E48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80060E4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80060E50: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80060E58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80060E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060E60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060E64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060E68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80060E6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80060E70: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80060E74: nop

    // 0x80060E78: beq         $t8, $zero, L_80060E88
    if (ctx->r24 == 0) {
        // 0x80060E7C: nop
    
            goto L_80060E88;
    }
    // 0x80060E7C: nop

    // 0x80060E80: b           L_80060EF0
    // 0x80060E84: nop

        goto L_80060EF0;
    // 0x80060E84: nop

L_80060E88:
    // 0x80060E88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060E90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80060E94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80060E98: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060E9C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80060EA0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80060EA4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80060EA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80060EAC: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80060EB0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80060EB4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80060EB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80060EBC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80060EC0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80060EC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80060EC8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80060ECC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060ED0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80060ED4: sh          $t2, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r10;
    // 0x80060ED8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80060EDC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80060EE0: jal         0x80060808
    // 0x80060EE4: nop

    func_80060808(rdram, ctx);
        goto after_0;
    // 0x80060EE4: nop

    after_0:
    // 0x80060EE8: b           L_80060EF0
    // 0x80060EEC: nop

        goto L_80060EF0;
    // 0x80060EEC: nop

L_80060EF0:
    // 0x80060EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80060EF8: jr          $ra
    // 0x80060EFC: nop

    return;
    // 0x80060EFC: nop

;}
RECOMP_FUNC void func_800BD174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800BD178: b           L_800BD180
    // 0x800BD17C: nop

        goto L_800BD180;
    // 0x800BD17C: nop

L_800BD180:
    // 0x800BD180: jr          $ra
    // 0x800BD184: nop

    return;
    // 0x800BD184: nop

;}
RECOMP_FUNC void func_800B1048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B1048: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B104C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B1050: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B1054: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B1058: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B105C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B1060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1064: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B1068: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B106C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B1070: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B1074: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B1078: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B107C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B1080: nop

    // 0x800B1084: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B1088: nop

    // 0x800B108C: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x800B1090: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800B1094: nop

    // 0x800B1098: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B109C: nop

    // 0x800B10A0: bne         $t3, $zero, L_800B114C
    if (ctx->r11 != 0) {
        // 0x800B10A4: nop
    
            goto L_800B114C;
    }
    // 0x800B10A4: nop

    // 0x800B10A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B10AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B10B0: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B10B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B10B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B10BC: nop

    // 0x800B10C0: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B10C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B10C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B10CC: nop

    // 0x800B10D0: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B10D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B10D8: nop

    // 0x800B10DC: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800B10E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B10E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B10E8: jal         0x8001BBDC
    // 0x800B10EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B10EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B10F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B10F4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800B10F8: addiu       $t9, $t9, 0x7884
    ctx->r25 = ADD32(ctx->r25, 0X7884);
    // 0x800B10FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1100: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800B1104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B110C: jal         0x8001C0EC
    // 0x800B1110: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B1110: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_1:
    // 0x800B1114: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x800B1118: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B111C: beq         $t0, $at, L_800B114C
    if (ctx->r8 == ctx->r1) {
        // 0x800B1120: nop
    
            goto L_800B114C;
    }
    // 0x800B1120: nop

    // 0x800B1124: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x800B1128: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B112C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B1130: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B1134: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B1138: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B113C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B1140: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B1144: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800B1148: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
L_800B114C:
    // 0x800B114C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1154: jal         0x8002A8B4
    // 0x800B1158: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B1158: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x800B115C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1164: jal         0x80029C40
    // 0x800B1168: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B1168: nop

    after_3:
    // 0x800B116C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B1170: nop

    // 0x800B1174: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800B1178: nop

    // 0x800B117C: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
    // 0x800B1180: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800B1184: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B1188: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800B118C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B1190: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B1194: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800B1198: nop

    // 0x800B119C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800B11A0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x800B11A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800B11A8: sh          $t7, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r15;
    // 0x800B11AC: nop

    // 0x800B11B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B11B4: nop

    // 0x800B11B8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B11BC: nop

    // 0x800B11C0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B11C4: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800B11C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800B11CC: nop

    // 0x800B11D0: lh          $t1, 0xA6($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XA6);
    // 0x800B11D4: nop

    // 0x800B11D8: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x800B11DC: bne         $at, $zero, L_800B1230
    if (ctx->r1 != 0) {
        // 0x800B11E0: nop
    
            goto L_800B1230;
    }
    // 0x800B11E0: nop

    // 0x800B11E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B11E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B11EC: jal         0x8002A1FC
    // 0x800B11F0: lui         $a1, 0x4487
    ctx->r5 = S32(0X4487 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800B11F0: lui         $a1, 0x4487
    ctx->r5 = S32(0X4487 << 16);
    after_4:
    // 0x800B11F4: beq         $v0, $zero, L_800B1230
    if (ctx->r2 == 0) {
        // 0x800B11F8: nop
    
            goto L_800B1230;
    }
    // 0x800B11F8: nop

    // 0x800B11FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B1200: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x800B1204: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B1208: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800B120C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B1210: beq         $t6, $at, L_800B1224
    if (ctx->r14 == ctx->r1) {
        // 0x800B1214: nop
    
            goto L_800B1224;
    }
    // 0x800B1214: nop

    // 0x800B1218: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B121C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800B1220: sh          $t7, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r15;
L_800B1224:
    // 0x800B1224: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B1228: nop

    // 0x800B122C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800B1230:
    // 0x800B1230: b           L_800B1238
    // 0x800B1234: nop

        goto L_800B1238;
    // 0x800B1234: nop

L_800B1238:
    // 0x800B1238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B123C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B1240: jr          $ra
    // 0x800B1244: nop

    return;
    // 0x800B1244: nop

;}
RECOMP_FUNC void func_800B8FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8FB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B8FB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B8FBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B8FC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8FC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8FC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8FCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8FD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8FD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8FD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8FDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8FE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B8FE4: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B8FE8: nop

    // 0x800B8FEC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800B8FF0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800B8FF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B8FF8: beq         $s0, $at, L_800B9020
    if (ctx->r16 == ctx->r1) {
        // 0x800B8FFC: nop
    
            goto L_800B9020;
    }
    // 0x800B8FFC: nop

    // 0x800B9000: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B9004: beq         $s0, $at, L_800B9030
    if (ctx->r16 == ctx->r1) {
        // 0x800B9008: nop
    
            goto L_800B9030;
    }
    // 0x800B9008: nop

    // 0x800B900C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800B9010: beq         $s0, $at, L_800B9040
    if (ctx->r16 == ctx->r1) {
        // 0x800B9014: nop
    
            goto L_800B9040;
    }
    // 0x800B9014: nop

    // 0x800B9018: b           L_800B9050
    // 0x800B901C: nop

        goto L_800B9050;
    // 0x800B901C: nop

L_800B9020:
    // 0x800B9020: jal         0x800B8A78
    // 0x800B9024: nop

    func_800B8A78(rdram, ctx);
        goto after_0;
    // 0x800B9024: nop

    after_0:
    // 0x800B9028: b           L_800B9058
    // 0x800B902C: nop

        goto L_800B9058;
    // 0x800B902C: nop

L_800B9030:
    // 0x800B9030: jal         0x800B8B98
    // 0x800B9034: nop

    func_800B8B98(rdram, ctx);
        goto after_1;
    // 0x800B9034: nop

    after_1:
    // 0x800B9038: b           L_800B9058
    // 0x800B903C: nop

        goto L_800B9058;
    // 0x800B903C: nop

L_800B9040:
    // 0x800B9040: jal         0x800B8DCC
    // 0x800B9044: nop

    func_800B8DCC(rdram, ctx);
        goto after_2;
    // 0x800B9044: nop

    after_2:
    // 0x800B9048: b           L_800B9058
    // 0x800B904C: nop

        goto L_800B9058;
    // 0x800B904C: nop

L_800B9050:
    // 0x800B9050: b           L_800B9058
    // 0x800B9054: nop

        goto L_800B9058;
    // 0x800B9054: nop

L_800B9058:
    // 0x800B9058: b           L_800B9060
    // 0x800B905C: nop

        goto L_800B9060;
    // 0x800B905C: nop

L_800B9060:
    // 0x800B9060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9064: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B9068: jr          $ra
    // 0x800B906C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B906C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007F5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F5CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007F5D0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8007F5D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F5D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007F5DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F5E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007F5E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F5E8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007F5EC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8007F5F0: addiu       $t6, $zero, 0x2BC
    ctx->r14 = ADD32(0, 0X2BC);
    // 0x8007F5F4: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x8007F5F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007F5FC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8007F600: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F604: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007F608: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F60C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007F610: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F614: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007F618: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007F61C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007F620: sh          $t9, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r25;
    // 0x8007F624: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007F628: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8007F62C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F630: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007F634: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F638: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007F63C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F640: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8007F644: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007F648: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x8007F64C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007F650: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8007F654: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F658: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8007F65C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007F660: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F664: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007F668: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007F66C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007F670: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8007F674: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8007F678: jr          $ra
    // 0x8007F67C: nop

    return;
    // 0x8007F67C: nop

    // 0x8007F680: jr          $ra
    // 0x8007F684: nop

    return;
    // 0x8007F684: nop

;}
RECOMP_FUNC void func_800C9F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9F8C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800C9F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9F94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9F98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9F9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9FA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9FA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9FAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9FB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9FB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9FB8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800C9FBC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C9FC0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C9FC4: nop

    // 0x800C9FC8: bne         $t0, $zero, L_800C9FE8
    if (ctx->r8 != 0) {
        // 0x800C9FCC: nop
    
            goto L_800C9FE8;
    }
    // 0x800C9FCC: nop

    // 0x800C9FD0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800C9FD4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800C9FD8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800C9FDC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C9FE0: nop

    // 0x800C9FE4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800C9FE8:
    // 0x800C9FE8: b           L_800C9FF0
    // 0x800C9FEC: nop

        goto L_800C9FF0;
    // 0x800C9FEC: nop

L_800C9FF0:
    // 0x800C9FF0: jr          $ra
    // 0x800C9FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800C9FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BF72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF72C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BF730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF73C: jal         0x8002B0E4
    // 0x800BF740: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800BF740: nop

    after_0:
    // 0x800BF744: b           L_800BF74C
    // 0x800BF748: nop

        goto L_800BF74C;
    // 0x800BF748: nop

L_800BF74C:
    // 0x800BF74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BF754: jr          $ra
    // 0x800BF758: nop

    return;
    // 0x800BF758: nop

;}
RECOMP_FUNC void func_80097244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097244: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097248: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009724C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80097250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80097254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80097258: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8009725C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80097260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80097268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009726C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80097270: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80097274: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80097278: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009727C: beq         $s0, $at, L_80097298
    if (ctx->r16 == ctx->r1) {
        // 0x80097280: nop
    
            goto L_80097298;
    }
    // 0x80097280: nop

    // 0x80097284: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80097288: beq         $s0, $at, L_800972A8
    if (ctx->r16 == ctx->r1) {
        // 0x8009728C: nop
    
            goto L_800972A8;
    }
    // 0x8009728C: nop

    // 0x80097290: b           L_800972B8
    // 0x80097294: nop

        goto L_800972B8;
    // 0x80097294: nop

L_80097298:
    // 0x80097298: jal         0x80096F88
    // 0x8009729C: nop

    func_80096F88(rdram, ctx);
        goto after_0;
    // 0x8009729C: nop

    after_0:
    // 0x800972A0: b           L_800972B8
    // 0x800972A4: nop

        goto L_800972B8;
    // 0x800972A4: nop

L_800972A8:
    // 0x800972A8: jal         0x80096FF8
    // 0x800972AC: nop

    func_80096FF8(rdram, ctx);
        goto after_1;
    // 0x800972AC: nop

    after_1:
    // 0x800972B0: b           L_800972B8
    // 0x800972B4: nop

        goto L_800972B8;
    // 0x800972B4: nop

L_800972B8:
    // 0x800972B8: b           L_800972C0
    // 0x800972BC: nop

        goto L_800972C0;
    // 0x800972BC: nop

L_800972C0:
    // 0x800972C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800972C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800972C8: jr          $ra
    // 0x800972CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800972CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E1978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1978: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E197C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1980: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1984: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E1988: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E198C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1990: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1998: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E199C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E19A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E19A4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E19A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E19AC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E19B0: nop

    // 0x800E19B4: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800E19B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E19BC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E19C0: nop

    // 0x800E19C4: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800E19C8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E19CC: nop

    // 0x800E19D0: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E19D4: nop

    // 0x800E19D8: swc1        $f8, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f8.u32l;
    // 0x800E19DC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E19E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E19E4: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E19E8: nop

    // 0x800E19EC: bne         $t4, $at, L_800E1A10
    if (ctx->r12 != ctx->r1) {
        // 0x800E19F0: nop
    
            goto L_800E1A10;
    }
    // 0x800E19F0: nop

    // 0x800E19F4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E19F8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800E19FC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E1A00: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A04: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E1A08: b           L_800E1A98
    // 0x800E1A0C: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
        goto L_800E1A98;
    // 0x800E1A0C: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_800E1A10:
    // 0x800E1A10: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E1A18: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800E1A1C: nop

    // 0x800E1A20: bne         $t0, $at, L_800E1A44
    if (ctx->r8 != ctx->r1) {
        // 0x800E1A24: nop
    
            goto L_800E1A44;
    }
    // 0x800E1A24: nop

    // 0x800E1A28: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A2C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800E1A30: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800E1A34: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A38: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E1A3C: b           L_800E1A98
    // 0x800E1A40: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
        goto L_800E1A98;
    // 0x800E1A40: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
L_800E1A44:
    // 0x800E1A44: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A48: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800E1A4C: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800E1A50: nop

    // 0x800E1A54: bne         $t6, $at, L_800E1A74
    if (ctx->r14 != ctx->r1) {
        // 0x800E1A58: nop
    
            goto L_800E1A74;
    }
    // 0x800E1A58: nop

    // 0x800E1A5C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E1A64: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E1A68: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A6C: b           L_800E1A98
    // 0x800E1A70: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_800E1A98;
    // 0x800E1A70: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E1A74:
    // 0x800E1A74: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A78: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800E1A7C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E1A80: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A84: nop

    // 0x800E1A88: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800E1A8C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E1A90: nop

    // 0x800E1A94: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
L_800E1A98:
    // 0x800E1A98: b           L_800E1AA0
    // 0x800E1A9C: nop

        goto L_800E1AA0;
    // 0x800E1A9C: nop

L_800E1AA0:
    // 0x800E1AA0: jr          $ra
    // 0x800E1AA4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E1AA4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F4534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4534: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800F4538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F453C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F4540: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4544: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4548: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F454C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4554: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F455C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4560: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F4564: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4568: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800F456C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F4570: nop

    // 0x800F4574: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F4578: nop

    // 0x800F457C: bne         $t1, $zero, L_800F45EC
    if (ctx->r9 != 0) {
        // 0x800F4580: nop
    
            goto L_800F45EC;
    }
    // 0x800F4580: nop

    // 0x800F4584: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800F4588: nop

    // 0x800F458C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F4590: nop

    // 0x800F4594: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F4598: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F459C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F45A0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F45A4: nop

    // 0x800F45A8: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800F45AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F45B0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F45B4: nop

    // 0x800F45B8: swc1        $f6, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f6.u32l;
    // 0x800F45BC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F45C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800F45C4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800F45C8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F45CC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x800F45D0: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
    // 0x800F45D4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800F45D8: nop

    // 0x800F45DC: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x800F45E0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F45E4: nop

    // 0x800F45E8: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
L_800F45EC:
    // 0x800F45EC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800F45F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F45F4: lbu         $t2, 0x132($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X132);
    // 0x800F45F8: nop

    // 0x800F45FC: bne         $t2, $at, L_800F4694
    if (ctx->r10 != ctx->r1) {
        // 0x800F4600: nop
    
            goto L_800F4694;
    }
    // 0x800F4600: nop

    // 0x800F4604: jal         0x80014E80
    // 0x800F4608: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800F4608: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800F460C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800F4610: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F4614: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F4618: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x800F461C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800F4620: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F4624: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F4628: nop

    // 0x800F462C: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x800F4630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4634: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F4638: addiu       $t7, $t7, -0x4720
    ctx->r15 = ADD32(ctx->r15, -0X4720);
    // 0x800F463C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4640: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F4644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F4648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F464C: jal         0x8001C0EC
    // 0x800F4650: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F4650: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_1:
    // 0x800F4654: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F4658: nop

    // 0x800F465C: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x800F4660: nop

    // 0x800F4664: sh          $t9, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r25;
    // 0x800F4668: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F466C: nop

    // 0x800F4670: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F4674: nop

    // 0x800F4678: sh          $t1, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = ctx->r9;
    // 0x800F467C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F4680: nop

    // 0x800F4684: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800F4688: nop

    // 0x800F468C: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x800F4690: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800F4694:
    // 0x800F4694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4698: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F469C: jal         0x80028FA0
    // 0x800F46A0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800F46A0: nop

    after_2:
    // 0x800F46A4: beq         $v0, $zero, L_800F46BC
    if (ctx->r2 == 0) {
        // 0x800F46A8: nop
    
            goto L_800F46BC;
    }
    // 0x800F46A8: nop

    // 0x800F46AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F46B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F46B4: jal         0x80029B60
    // 0x800F46B8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800F46B8: nop

    after_3:
L_800F46BC:
    // 0x800F46BC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F46C0: nop

    // 0x800F46C4: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800F46C8: nop

    // 0x800F46CC: beq         $t6, $zero, L_800F46F4
    if (ctx->r14 == 0) {
        // 0x800F46D0: nop
    
            goto L_800F46F4;
    }
    // 0x800F46D0: nop

    // 0x800F46D4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F46D8: nop

    // 0x800F46DC: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800F46E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F46E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F46E8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x800F46EC: jal         0x80029EF8
    // 0x800F46F0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800F46F0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
L_800F46F4:
    // 0x800F46F4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800F46F8: nop

    // 0x800F46FC: lwc1        $f18, 0x28($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800F4700: nop

    // 0x800F4704: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x800F4708: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F470C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F4710: nop

    // 0x800F4714: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x800F4718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F471C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4720: jal         0x80029C40
    // 0x800F4724: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800F4724: nop

    after_5:
    // 0x800F4728: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F472C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F4730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F473C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F4740: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F4744: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F4748: jal         0x80029018
    // 0x800F474C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800F474C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800F4750: beq         $v0, $zero, L_800F4774
    if (ctx->r2 == 0) {
        // 0x800F4754: nop
    
            goto L_800F4774;
    }
    // 0x800F4754: nop

    // 0x800F4758: jal         0x800297DC
    // 0x800F475C: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800F475C: nop

    after_7:
    // 0x800F4760: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4764: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4768: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800F476C: jal         0x80029824
    // 0x800F4770: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800F4770: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800F4774:
    // 0x800F4774: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800F4778: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800F477C: nop

    // 0x800F4780: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
    // 0x800F4784: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F4788: nop

    // 0x800F478C: lh          $t4, 0xAA($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XAA);
    // 0x800F4790: nop

    // 0x800F4794: bne         $t4, $zero, L_800F4828
    if (ctx->r12 != 0) {
        // 0x800F4798: nop
    
            goto L_800F4828;
    }
    // 0x800F4798: nop

    // 0x800F479C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F47A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F47A4: jal         0x8002A640
    // 0x800F47A8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8002A640(rdram, ctx);
        goto after_9;
    // 0x800F47A8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_9:
    // 0x800F47AC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800F47B0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800F47B4: nop

    // 0x800F47B8: bne         $t2, $zero, L_800F47DC
    if (ctx->r10 != 0) {
        // 0x800F47BC: nop
    
            goto L_800F47DC;
    }
    // 0x800F47BC: nop

    // 0x800F47C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F47C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F47C8: jal         0x8002A46C
    // 0x800F47CC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_10;
    // 0x800F47CC: nop

    after_10:
    // 0x800F47D0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F47D4: b           L_800F480C
    // 0x800F47D8: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
        goto L_800F480C;
    // 0x800F47D8: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
L_800F47DC:
    // 0x800F47DC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800F47E0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F47E4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800F47E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800F47EC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800F47F0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800F47F4: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800F47F8: jal         0x80015538
    // 0x800F47FC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800F47FC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_11:
    // 0x800F4800: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800F4804: nop

    // 0x800F4808: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_800F480C:
    // 0x800F480C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4814: jal         0x8002A46C
    // 0x800F4818: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_12;
    // 0x800F4818: nop

    after_12:
    // 0x800F481C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F4820: nop

    // 0x800F4824: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
L_800F4828:
    // 0x800F4828: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800F482C: nop

    // 0x800F4830: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x800F4834: nop

    // 0x800F4838: beq         $t0, $zero, L_800F487C
    if (ctx->r8 == 0) {
        // 0x800F483C: nop
    
            goto L_800F487C;
    }
    // 0x800F483C: nop

    // 0x800F4840: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800F4844: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F4848: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F484C: lwc1        $f12, 0x20($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800F4850: jal         0x80015538
    // 0x800F4854: nop

    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x800F4854: nop

    after_13:
    // 0x800F4858: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800F485C: nop

    // 0x800F4860: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
    // 0x800F4864: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F4868: nop

    // 0x800F486C: lh          $t5, 0xA8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA8);
    // 0x800F4870: nop

    // 0x800F4874: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800F4878: sh          $t6, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r14;
L_800F487C:
    // 0x800F487C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F4880: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F4884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F488C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F4890: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F4894: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    // 0x800F4898: jal         0x80029F58
    // 0x800F489C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_14;
    // 0x800F489C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x800F48A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F48A4: bne         $v0, $at, L_800F4988
    if (ctx->r2 != ctx->r1) {
        // 0x800F48A8: nop
    
            goto L_800F4988;
    }
    // 0x800F48A8: nop

    // 0x800F48AC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F48B0: nop

    // 0x800F48B4: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x800F48B8: nop

    // 0x800F48BC: bne         $t9, $zero, L_800F4988
    if (ctx->r25 != 0) {
        // 0x800F48C0: nop
    
            goto L_800F4988;
    }
    // 0x800F48C0: nop

    // 0x800F48C4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F48C8: nop

    // 0x800F48CC: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x800F48D0: nop

    // 0x800F48D4: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x800F48D8: sh          $t0, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r8;
    // 0x800F48DC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800F48E0: nop

    // 0x800F48E4: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x800F48E8: nop

    // 0x800F48EC: bgez        $t2, L_800F4900
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800F48F0: andi        $t5, $t2, 0x1
        ctx->r13 = ctx->r10 & 0X1;
            goto L_800F4900;
    }
    // 0x800F48F0: andi        $t5, $t2, 0x1
    ctx->r13 = ctx->r10 & 0X1;
    // 0x800F48F4: beq         $t5, $zero, L_800F4900
    if (ctx->r13 == 0) {
        // 0x800F48F8: nop
    
            goto L_800F4900;
    }
    // 0x800F48F8: nop

    // 0x800F48FC: addiu       $t5, $t5, -0x2
    ctx->r13 = ADD32(ctx->r13, -0X2);
L_800F4900:
    // 0x800F4900: sh          $t5, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r13;
    // 0x800F4904: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F4908: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F490C: sh          $t6, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r14;
    // 0x800F4910: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F4914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F4918: lh          $t9, 0xAC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAC);
    // 0x800F491C: nop

    // 0x800F4920: bne         $t9, $at, L_800F4940
    if (ctx->r25 != ctx->r1) {
        // 0x800F4924: nop
    
            goto L_800F4940;
    }
    // 0x800F4924: nop

    // 0x800F4928: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F492C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F4930: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x800F4934: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F4938: nop

    // 0x800F493C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800F4940:
    // 0x800F4940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4948: jal         0x8002A1FC
    // 0x800F494C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_15;
    // 0x800F494C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_15:
    // 0x800F4950: bne         $v0, $zero, L_800F4988
    if (ctx->r2 != 0) {
        // 0x800F4954: nop
    
            goto L_800F4988;
    }
    // 0x800F4954: nop

    // 0x800F4958: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800F495C: nop

    // 0x800F4960: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x800F4964: nop

    // 0x800F4968: bne         $t5, $zero, L_800F4988
    if (ctx->r13 != 0) {
        // 0x800F496C: nop
    
            goto L_800F4988;
    }
    // 0x800F496C: nop

    // 0x800F4970: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F4974: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F4978: sh          $t4, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r12;
    // 0x800F497C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F4980: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x800F4984: sh          $t3, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r11;
L_800F4988:
    // 0x800F4988: b           L_800F4990
    // 0x800F498C: nop

        goto L_800F4990;
    // 0x800F498C: nop

L_800F4990:
    // 0x800F4990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F4994: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F4998: jr          $ra
    // 0x800F499C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800F499C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8008CADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CADC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008CAE0: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008CAE4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008CAE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008CAEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CAF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008CAF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008CAF8: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008CAFC: nop

    // 0x8008CB00: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8008CB04: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008CB08: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008CB0C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008CB10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008CB14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008CB18: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008CB1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CB20: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008CB24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008CB28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CB2C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008CB30: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CB34: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008CB38: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008CB3C: swc1        $f10, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->f10.u32l;
    // 0x8008CB40: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008CB44:
    // 0x8008CB44: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008CB48: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x8008CB4C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CB50: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CB54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CB58: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CB5C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CB60: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008CB64: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8008CB68: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008CB6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CB70: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8008CB74: nop

    // 0x8008CB78: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8008CB7C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008CB80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008CB84: beq         $t8, $at, L_8008CBD4
    if (ctx->r24 == ctx->r1) {
        // 0x8008CB88: nop
    
            goto L_8008CBD4;
    }
    // 0x8008CB88: nop

    // 0x8008CB8C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8008CB90: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8008CB94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008CB98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CB9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008CBA0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8008CBA4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008CBA8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CBAC: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CBB0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CBB4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008CBB8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008CBBC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008CBC0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CBC4: lwc1        $f16, 0x34($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X34);
    // 0x8008CBC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CBCC: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8008CBD0: swc1        $f16, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->f16.u32l;
L_8008CBD4:
    // 0x8008CBD4: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8008CBD8: nop

    // 0x8008CBDC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008CBE0: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8008CBE4: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8008CBE8: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8008CBEC: bne         $at, $zero, L_8008CB44
    if (ctx->r1 != 0) {
        // 0x8008CBF0: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_8008CB44;
    }
    // 0x8008CBF0: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8008CBF4: b           L_8008CBFC
    // 0x8008CBF8: nop

        goto L_8008CBFC;
    // 0x8008CBF8: nop

L_8008CBFC:
    // 0x8008CBFC: jr          $ra
    // 0x8008CC00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008CC00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800C2B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2B04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2B08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2B0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2B10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2B14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2B18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2B1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2B20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2B24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2B28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2B2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2B30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2B34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2B38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B3C: nop

    // 0x800C2B40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C2B44: nop

    // 0x800C2B48: bne         $t1, $zero, L_800C2BCC
    if (ctx->r9 != 0) {
        // 0x800C2B4C: nop
    
            goto L_800C2BCC;
    }
    // 0x800C2B4C: nop

    // 0x800C2B50: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B54: nop

    // 0x800C2B58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C2B5C: nop

    // 0x800C2B60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C2B64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C2B68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2B6C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B70: nop

    // 0x800C2B74: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C2B78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C2B7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B80: nop

    // 0x800C2B84: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C2B88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C2B8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C2B90: nop

    // 0x800C2B94: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C2B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2BA0: jal         0x8001BBDC
    // 0x800C2BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C2BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C2BA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2BAC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800C2BB0: addiu       $t8, $t8, 0x7FF0
    ctx->r24 = ADD32(ctx->r24, 0X7FF0);
    // 0x800C2BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2BB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C2BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2BC0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800C2BC4: jal         0x8001C0EC
    // 0x800C2BC8: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C2BC8: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
L_800C2BCC:
    // 0x800C2BCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2BD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2BD4: jal         0x8001B44C
    // 0x800C2BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800C2BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800C2BDC: beq         $v0, $zero, L_800C2C18
    if (ctx->r2 == 0) {
        // 0x800C2BE0: nop
    
            goto L_800C2C18;
    }
    // 0x800C2BE0: nop

    // 0x800C2BE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2BE8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800C2BEC: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x800C2BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2BF8: jal         0x8001BBDC
    // 0x800C2BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800C2BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800C2C00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C2C04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C2C08: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800C2C0C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C2C10: nop

    // 0x800C2C14: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800C2C18:
    // 0x800C2C18: b           L_800C2C20
    // 0x800C2C1C: nop

        goto L_800C2C20;
    // 0x800C2C1C: nop

L_800C2C20:
    // 0x800C2C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2C24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C2C28: jr          $ra
    // 0x800C2C2C: nop

    return;
    // 0x800C2C2C: nop

;}
RECOMP_FUNC void func_800BF394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF394: jr          $ra
    // 0x800BF398: nop

    return;
    // 0x800BF398: nop

    // 0x800BF39C: jr          $ra
    // 0x800BF3A0: nop

    return;
    // 0x800BF3A0: nop

;}
RECOMP_FUNC void func_800663EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800663EC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800663F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800663F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800663F8: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x800663FC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80066400: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80066404: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80066408: lw          $t8, -0x7DC8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7DC8);
    // 0x8006640C: nop

    // 0x80066410: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80066414: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066418: lwc1        $f12, -0x1EC0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8006641C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066420: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80066424: lw          $a2, -0x1EB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB8);
    // 0x80066428: lwc1        $f14, -0x1EBC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8006642C: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x80066430: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x80066434: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80066438: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006643C: jal         0x80065AEC
    // 0x80066440: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    func_80065AEC(rdram, ctx);
        goto after_0;
    // 0x80066440: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x80066444: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066448: lbu         $t1, 0x7974($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7974);
    // 0x8006644C: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80066450: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80066454: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80066458: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8006645C: addiu       $t3, $t3, 0x4C70
    ctx->r11 = ADD32(ctx->r11, 0X4C70);
    // 0x80066460: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80066464: lbu         $t5, 0x1($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X1);
    // 0x80066468: lbu         $a3, 0x0($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X0);
    // 0x8006646C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80066470: lbu         $t6, 0x2($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X2);
    // 0x80066474: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80066478: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8006647C: lbu         $t7, 0x3($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X3);
    // 0x80066480: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80066484: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80066488: lbu         $t8, 0x4($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X4);
    // 0x8006648C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80066490: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80066494: lbu         $t9, 0x5($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X5);
    // 0x80066498: jal         0x800660DC
    // 0x8006649C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_800660DC(rdram, ctx);
        goto after_1;
    // 0x8006649C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_1:
    // 0x800664A0: addiu       $t0, $zero, 0x4E
    ctx->r8 = ADD32(0, 0X4E);
    // 0x800664A4: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
L_800664A8:
    // 0x800664A8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800664AC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800664B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800664B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800664B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800664BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800664C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800664C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800664C8: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x800664CC: nop

    // 0x800664D0: beq         $t3, $zero, L_80066644
    if (ctx->r11 == 0) {
        // 0x800664D4: nop
    
            goto L_80066644;
    }
    // 0x800664D4: nop

    // 0x800664D8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x800664DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800664E0:
    // 0x800664E0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800664E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800664E8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800664EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800664F0: lw          $t7, 0x77F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X77F0);
    // 0x800664F4: nop

    // 0x800664F8: beq         $t7, $zero, L_80066610
    if (ctx->r15 == 0) {
        // 0x800664FC: nop
    
            goto L_80066610;
    }
    // 0x800664FC: nop

    // 0x80066500: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80066504: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80066508: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006650C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80066510: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80066514: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80066518: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8006651C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066520: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80066524: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80066528: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8006652C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80066530: lh          $t2, 0x41F4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F4);
    // 0x80066534: lw          $t9, 0x77F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X77F0);
    // 0x80066538: nop

    // 0x8006653C: bne         $t9, $t2, L_80066610
    if (ctx->r25 != ctx->r10) {
        // 0x80066540: nop
    
            goto L_80066610;
    }
    // 0x80066540: nop

    // 0x80066544: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80066548: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006654C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80066550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80066554: lw          $t7, 0x77F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X77F0);
    // 0x80066558: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006655C: lw          $t3, 0x794C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X794C);
    // 0x80066560: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80066564: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x80066568: lbu         $t0, -0x5($t4)
    ctx->r8 = MEM_BU(ctx->r12, -0X5);
    // 0x8006656C: nop

    // 0x80066570: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80066574: beq         $at, $zero, L_800665E0
    if (ctx->r1 == 0) {
        // 0x80066578: nop
    
            goto L_800665E0;
    }
    // 0x80066578: nop

    // 0x8006657C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80066580: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066584: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80066588: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8006658C: lw          $t5, 0x77F0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X77F0);
    // 0x80066590: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066594: lw          $t1, 0x794C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X794C);
    // 0x80066598: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8006659C: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x800665A0: lbu         $t3, -0x6($t7)
    ctx->r11 = MEM_BU(ctx->r15, -0X6);
    // 0x800665A4: nop

    // 0x800665A8: sb          $t3, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r11;
    // 0x800665AC: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x800665B0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800665B4: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x800665B8: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x800665BC: lbu         $t0, 0x65D9($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X65D9);
    // 0x800665C0: nop

    // 0x800665C4: beq         $t0, $zero, L_800665D8
    if (ctx->r8 == 0) {
        // 0x800665C8: nop
    
            goto L_800665D8;
    }
    // 0x800665C8: nop

    // 0x800665CC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800665D0: jal         0x8001AD6C
    // 0x800665D4: nop

    func_8001AD6C(rdram, ctx);
        goto after_2;
    // 0x800665D4: nop

    after_2:
L_800665D8:
    // 0x800665D8: b           L_800665EC
    // 0x800665DC: nop

        goto L_800665EC;
    // 0x800665DC: nop

L_800665E0:
    // 0x800665E0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800665E4: jal         0x8001AD6C
    // 0x800665E8: nop

    func_8001AD6C(rdram, ctx);
        goto after_3;
    // 0x800665E8: nop

    after_3:
L_800665EC:
    // 0x800665EC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800665F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800665F4: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800665F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800665FC: sw          $zero, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = 0;
    // 0x80066600: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80066604: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80066608: b           L_80066628
    // 0x8006660C: nop

        goto L_80066628;
    // 0x8006660C: nop

L_80066610:
    // 0x80066610: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80066614: nop

    // 0x80066618: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x8006661C: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x80066620: bne         $at, $zero, L_800664E0
    if (ctx->r1 != 0) {
        // 0x80066624: sw          $t6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r14;
            goto L_800664E0;
    }
    // 0x80066624: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_80066628:
    // 0x80066628: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8006662C: nop

    // 0x80066630: bne         $t7, $zero, L_80066644
    if (ctx->r15 != 0) {
        // 0x80066634: nop
    
            goto L_80066644;
    }
    // 0x80066634: nop

    // 0x80066638: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006663C: jal         0x8001A928
    // 0x80066640: nop

    func_8001A928(rdram, ctx);
        goto after_4;
    // 0x80066640: nop

    after_4:
L_80066644:
    // 0x80066644: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80066648: nop

    // 0x8006664C: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80066650: slti        $at, $t8, 0x8E
    ctx->r1 = SIGNED(ctx->r24) < 0X8E ? 1 : 0;
    // 0x80066654: bne         $at, $zero, L_800664A8
    if (ctx->r1 != 0) {
        // 0x80066658: sw          $t8, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r24;
            goto L_800664A8;
    }
    // 0x80066658: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8006665C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80066660:
    // 0x80066660: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80066664: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066668: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8006666C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80066670: lw          $t9, 0x77F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X77F0);
    // 0x80066674: nop

    // 0x80066678: beq         $t9, $zero, L_800669B0
    if (ctx->r25 == 0) {
        // 0x8006667C: nop
    
            goto L_800669B0;
    }
    // 0x8006667C: nop

    // 0x80066680: addiu       $t2, $zero, 0x4E
    ctx->r10 = ADD32(0, 0X4E);
    // 0x80066684: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
L_80066688:
    // 0x80066688: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8006668C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80066690: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80066694: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80066698: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006669C: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800666A0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800666A4: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x800666A8: lh          $t6, 0x41F4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F4);
    // 0x800666AC: nop

    // 0x800666B0: bne         $t6, $zero, L_80066998
    if (ctx->r14 != 0) {
        // 0x800666B4: nop
    
            goto L_80066998;
    }
    // 0x800666B4: nop

    // 0x800666B8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800666BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800666C0: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x800666C4: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800666C8: lw          $t8, 0x77F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X77F0);
    // 0x800666CC: nop

    // 0x800666D0: addiu       $t4, $t8, -0x1
    ctx->r12 = ADD32(ctx->r24, -0X1);
    // 0x800666D4: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x800666D8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800666DC: jal         0x8001A928
    // 0x800666E0: nop

    func_8001A928(rdram, ctx);
        goto after_5;
    // 0x800666E0: nop

    after_5:
    // 0x800666E4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800666E8: lbu         $t0, 0x7928($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7928);
    // 0x800666EC: nop

    // 0x800666F0: beq         $t0, $zero, L_80066760
    if (ctx->r8 == 0) {
        // 0x800666F4: nop
    
            goto L_80066760;
    }
    // 0x800666F4: nop

    // 0x800666F8: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x800666FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066700: lw          $t9, 0x794C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X794C);
    // 0x80066704: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x80066708: addu        $t1, $t9, $t5
    ctx->r9 = ADD32(ctx->r25, ctx->r13);
    // 0x8006670C: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80066710: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80066714: beq         $t6, $at, L_80066758
    if (ctx->r14 == ctx->r1) {
        // 0x80066718: nop
    
            goto L_80066758;
    }
    // 0x80066718: nop

    // 0x8006671C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80066720: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80066724: lw          $t7, 0x794C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X794C);
    // 0x80066728: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8006672C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80066730: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80066734: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x80066738: lw          $t2, 0xD8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XD8);
    // 0x8006673C: lw          $t5, 0x20($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X20);
    // 0x80066740: addu        $t4, $t7, $t8
    ctx->r12 = ADD32(ctx->r15, ctx->r24);
    // 0x80066744: lbu         $a2, 0x0($t4)
    ctx->r6 = MEM_BU(ctx->r12, 0X0);
    // 0x80066748: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006674C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066750: jal         0x8001BD44
    // 0x80066754: addu        $a3, $t2, $t5
    ctx->r7 = ADD32(ctx->r10, ctx->r13);
    func_8001BD44(rdram, ctx);
        goto after_6;
    // 0x80066754: addu        $a3, $t2, $t5
    ctx->r7 = ADD32(ctx->r10, ctx->r13);
    after_6:
L_80066758:
    // 0x80066758: b           L_80066880
    // 0x8006675C: nop

        goto L_80066880;
    // 0x8006675C: nop

L_80066760:
    // 0x80066760: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80066764: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066768: lw          $t1, 0x794C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X794C);
    // 0x8006676C: sll         $t3, $t6, 4
    ctx->r11 = S32(ctx->r14 << 4);
    // 0x80066770: addu        $t7, $t1, $t3
    ctx->r15 = ADD32(ctx->r9, ctx->r11);
    // 0x80066774: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x80066778: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006677C: beq         $t8, $at, L_800667C0
    if (ctx->r24 == ctx->r1) {
        // 0x80066780: nop
    
            goto L_800667C0;
    }
    // 0x80066780: nop

    // 0x80066784: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80066788: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006678C: lw          $t4, 0x794C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X794C);
    // 0x80066790: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80066794: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80066798: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x8006679C: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x800667A0: lw          $t6, 0xD8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XD8);
    // 0x800667A4: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x800667A8: addu        $t2, $t4, $t9
    ctx->r10 = ADD32(ctx->r12, ctx->r25);
    // 0x800667AC: lbu         $a2, 0x1($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0X1);
    // 0x800667B0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800667B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800667B8: jal         0x8001BD44
    // 0x800667BC: addu        $a3, $t6, $t3
    ctx->r7 = ADD32(ctx->r14, ctx->r11);
    func_8001BD44(rdram, ctx);
        goto after_7;
    // 0x800667BC: addu        $a3, $t6, $t3
    ctx->r7 = ADD32(ctx->r14, ctx->r11);
    after_7:
L_800667C0:
    // 0x800667C0: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x800667C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800667C8: lw          $t7, 0x794C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X794C);
    // 0x800667CC: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x800667D0: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x800667D4: lbu         $t9, 0x2($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X2);
    // 0x800667D8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800667DC: beq         $t9, $at, L_80066820
    if (ctx->r25 == ctx->r1) {
        // 0x800667E0: nop
    
            goto L_80066820;
    }
    // 0x800667E0: nop

    // 0x800667E4: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800667E8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800667EC: lw          $t2, 0x794C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X794C);
    // 0x800667F0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800667F4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800667F8: addiu       $t3, $t3, -0x3560
    ctx->r11 = ADD32(ctx->r11, -0X3560);
    // 0x800667FC: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x80066800: lw          $t8, 0xD8($t3)
    ctx->r24 = MEM_W(ctx->r11, 0XD8);
    // 0x80066804: lw          $t0, 0x18($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X18);
    // 0x80066808: addu        $t6, $t2, $t1
    ctx->r14 = ADD32(ctx->r10, ctx->r9);
    // 0x8006680C: lbu         $a2, 0x2($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X2);
    // 0x80066810: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80066814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80066818: jal         0x8001BD44
    // 0x8006681C: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    func_8001BD44(rdram, ctx);
        goto after_8;
    // 0x8006681C: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    after_8:
L_80066820:
    // 0x80066820: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80066824: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80066828: lw          $t4, 0x794C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X794C);
    // 0x8006682C: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x80066830: addu        $t2, $t4, $t5
    ctx->r10 = ADD32(ctx->r12, ctx->r13);
    // 0x80066834: lbu         $t1, 0x3($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X3);
    // 0x80066838: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006683C: beq         $t1, $at, L_80066880
    if (ctx->r9 == ctx->r1) {
        // 0x80066840: nop
    
            goto L_80066880;
    }
    // 0x80066840: nop

    // 0x80066844: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80066848: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006684C: lw          $t6, 0x794C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X794C);
    // 0x80066850: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80066854: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80066858: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8006685C: sll         $t7, $t3, 4
    ctx->r15 = S32(ctx->r11 << 4);
    // 0x80066860: lw          $t9, 0xD8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XD8);
    // 0x80066864: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x80066868: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006686C: lbu         $a2, 0x3($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X3);
    // 0x80066870: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80066874: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80066878: jal         0x8001BD44
    // 0x8006687C: addu        $a3, $t9, $t5
    ctx->r7 = ADD32(ctx->r25, ctx->r13);
    func_8001BD44(rdram, ctx);
        goto after_9;
    // 0x8006687C: addu        $a3, $t9, $t5
    ctx->r7 = ADD32(ctx->r25, ctx->r13);
    after_9:
L_80066880:
    // 0x80066880: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80066884: lw          $a1, 0x794C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X794C);
    // 0x80066888: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006688C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80066890: jal         0x80065D88
    // 0x80066894: nop

    func_80065D88(rdram, ctx);
        goto after_10;
    // 0x80066894: nop

    after_10:
    // 0x80066898: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8006689C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x800668A0: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800668A4: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x800668A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800668AC: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x800668B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800668B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800668B8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800668BC: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x800668C0: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x800668C4: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x800668C8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800668CC: lw          $t7, 0x794C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X794C);
    // 0x800668D0: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x800668D4: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x800668D8: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x800668DC: lh          $t9, 0x4($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X4);
    // 0x800668E0: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800668E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800668E8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800668EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800668F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800668F4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800668F8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800668FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80066900: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80066904: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80066908: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8006690C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80066910: lw          $t3, 0x794C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X794C);
    // 0x80066914: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80066918: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8006691C: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80066920: lh          $t7, 0x6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X6);
    // 0x80066924: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80066928: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8006692C: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80066930: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80066934: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80066938: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8006693C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80066940: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80066944: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80066948: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x8006694C: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80066950: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80066954: lw          $t9, 0x794C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X794C);
    // 0x80066958: sll         $t2, $t5, 4
    ctx->r10 = S32(ctx->r13 << 4);
    // 0x8006695C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80066960: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x80066964: lh          $t3, 0x8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X8);
    // 0x80066968: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8006696C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80066970: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80066974: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80066978: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006697C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80066980: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80066984: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80066988: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8006698C: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80066990: b           L_800669B0
    // 0x80066994: nop

        goto L_800669B0;
    // 0x80066994: nop

L_80066998:
    // 0x80066998: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006699C: nop

    // 0x800669A0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x800669A4: slti        $at, $t0, 0x8E
    ctx->r1 = SIGNED(ctx->r8) < 0X8E ? 1 : 0;
    // 0x800669A8: bne         $at, $zero, L_80066688
    if (ctx->r1 != 0) {
        // 0x800669AC: sw          $t0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r8;
            goto L_80066688;
    }
    // 0x800669AC: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
L_800669B0:
    // 0x800669B0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800669B4: nop

    // 0x800669B8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800669BC: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x800669C0: bne         $at, $zero, L_80066660
    if (ctx->r1 != 0) {
        // 0x800669C4: sw          $t5, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r13;
            goto L_80066660;
    }
    // 0x800669C4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x800669C8: b           L_800669D0
    // 0x800669CC: nop

        goto L_800669D0;
    // 0x800669CC: nop

L_800669D0:
    // 0x800669D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800669D4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800669D8: jr          $ra
    // 0x800669DC: nop

    return;
    // 0x800669DC: nop

;}
RECOMP_FUNC void func_800BC774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC774: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800BC778: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800BC77C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800BC780: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC784: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC788: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC78C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC79C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC7A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC7A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC7A8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800BC7AC: sb          $zero, 0x3($sp)
    MEM_B(0X3, ctx->r29) = 0;
    // 0x800BC7B0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800BC7B4: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x800BC7B8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800BC7BC: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800BC7C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BC7C4: beq         $t3, $at, L_800BC7D4
    if (ctx->r11 == ctx->r1) {
        // 0x800BC7C8: nop
    
            goto L_800BC7D4;
    }
    // 0x800BC7C8: nop

    // 0x800BC7CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800BC7D0: sb          $t4, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r12;
L_800BC7D4:
    // 0x800BC7D4: lb          $v0, 0x3($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X3);
    // 0x800BC7D8: b           L_800BC7E8
    // 0x800BC7DC: nop

        goto L_800BC7E8;
    // 0x800BC7DC: nop

    // 0x800BC7E0: b           L_800BC7E8
    // 0x800BC7E4: nop

        goto L_800BC7E8;
    // 0x800BC7E4: nop

L_800BC7E8:
    // 0x800BC7E8: jr          $ra
    // 0x800BC7EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800BC7EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E683C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E683C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800E6840: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E6844: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E6848: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E684C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E6850: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6854: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6858: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E685C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6860: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6864: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E686C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6870: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6874: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6878: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800E687C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6880: nop

    // 0x800E6884: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6888: nop

    // 0x800E688C: bne         $t1, $zero, L_800E6918
    if (ctx->r9 != 0) {
        // 0x800E6890: nop
    
            goto L_800E6918;
    }
    // 0x800E6890: nop

    // 0x800E6894: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6898: nop

    // 0x800E689C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E68A0: nop

    // 0x800E68A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E68A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E68AC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800E68B0: nop

    // 0x800E68B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E68B8: nop

    // 0x800E68BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E68C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E68C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E68C8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800E68CC: nop

    // 0x800E68D0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800E68D4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800E68D8: nop

    // 0x800E68DC: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x800E68E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E68E4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E68E8: addiu       $t9, $t9, -0x6878
    ctx->r25 = ADD32(ctx->r25, -0X6878);
    // 0x800E68EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E68F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E68F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E68F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800E68FC: jal         0x8001C0EC
    // 0x800E6900: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6900: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
    // 0x800E6904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E690C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x800E6910: jal         0x80029EF8
    // 0x800E6914: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800E6914: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_1:
L_800E6918:
    // 0x800E6918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E691C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E6920: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E692C: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x800E6930: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E6934: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800E6938: jal         0x80029018
    // 0x800E693C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800E693C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800E6940: beq         $v0, $zero, L_800E697C
    if (ctx->r2 == 0) {
        // 0x800E6944: nop
    
            goto L_800E697C;
    }
    // 0x800E6944: nop

    // 0x800E6948: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E694C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6950: nop

    // 0x800E6954: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
    // 0x800E6958: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800E695C: nop

    // 0x800E6960: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800E6964: nop

    // 0x800E6968: swc1        $f16, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f16.u32l;
    // 0x800E696C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E6970: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6974: b           L_800E69D8
    // 0x800E6978: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
        goto L_800E69D8;
    // 0x800E6978: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
L_800E697C:
    // 0x800E697C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6980: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6984: jal         0x80029C40
    // 0x800E6988: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800E6988: nop

    after_3:
    // 0x800E698C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E6990: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E6994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E699C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E69A0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E69A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E69A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E69AC: jal         0x80029018
    // 0x800E69B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800E69B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800E69B4: beq         $v0, $zero, L_800E69D8
    if (ctx->r2 == 0) {
        // 0x800E69B8: nop
    
            goto L_800E69D8;
    }
    // 0x800E69B8: nop

    // 0x800E69BC: jal         0x800297DC
    // 0x800E69C0: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800E69C0: nop

    after_5:
    // 0x800E69C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E69C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E69CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E69D0: jal         0x80029824
    // 0x800E69D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800E69D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800E69D8:
    // 0x800E69D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E69DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E69E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E69E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E69E8: jal         0x8002A0D0
    // 0x800E69EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_7;
    // 0x800E69EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x800E69F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E69F4: bne         $v0, $at, L_800E6A2C
    if (ctx->r2 != ctx->r1) {
        // 0x800E69F8: nop
    
            goto L_800E6A2C;
    }
    // 0x800E69F8: nop

    // 0x800E69FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E6A00: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A04: nop

    // 0x800E6A08: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x800E6A0C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A10: nop

    // 0x800E6A14: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E6A18: nop

    // 0x800E6A1C: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x800E6A20: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A24: nop

    // 0x800E6A28: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
L_800E6A2C:
    // 0x800E6A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6A34: jal         0x8002A8B4
    // 0x800E6A38: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_8;
    // 0x800E6A38: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_8:
    // 0x800E6A3C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A40: nop

    // 0x800E6A44: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800E6A48: nop

    // 0x800E6A4C: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x800E6A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6A58: jal         0x8001B4AC
    // 0x800E6A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x800E6A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800E6A60: beq         $v0, $zero, L_800E6A80
    if (ctx->r2 == 0) {
        // 0x800E6A64: nop
    
            goto L_800E6A80;
    }
    // 0x800E6A64: nop

    // 0x800E6A68: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A6C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800E6A70: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E6A74: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6A78: nop

    // 0x800E6A7C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E6A80:
    // 0x800E6A80: b           L_800E6A88
    // 0x800E6A84: nop

        goto L_800E6A88;
    // 0x800E6A84: nop

L_800E6A88:
    // 0x800E6A88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6A8C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E6A90: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E6A94: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E6A98: jr          $ra
    // 0x800E6A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800E6A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800B5D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5D18: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800B5D1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800B5D20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800B5D24: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B5D28: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800B5D2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B5D30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B5D34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B5D38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B5D3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5D40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B5D44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5D48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B5D4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B5D50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B5D54: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800B5D58: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B5D5C: nop

    // 0x800B5D60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B5D64: nop

    // 0x800B5D68: bne         $t1, $zero, L_800B5DF0
    if (ctx->r9 != 0) {
        // 0x800B5D6C: nop
    
            goto L_800B5DF0;
    }
    // 0x800B5D6C: nop

    // 0x800B5D70: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B5D74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B5D78: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B5D7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B5D80: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B5D84: nop

    // 0x800B5D88: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B5D8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B5D90: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B5D94: nop

    // 0x800B5D98: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B5D9C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B5DA0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800B5DA4: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800B5DA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5DAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5DB0: jal         0x8001BBDC
    // 0x800B5DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B5DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B5DB8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B5DBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5DC0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800B5DC4: addiu       $t9, $t9, 0x7AA0
    ctx->r25 = ADD32(ctx->r25, 0X7AA0);
    // 0x800B5DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5DCC: lh          $a2, 0xA8($t8)
    ctx->r6 = MEM_H(ctx->r24, 0XA8);
    // 0x800B5DD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800B5DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5DD8: jal         0x8001C0EC
    // 0x800B5DDC: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B5DDC: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_1:
    // 0x800B5DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5DE8: jal         0x80029D04
    // 0x800B5DEC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B5DEC: nop

    after_2:
L_800B5DF0:
    // 0x800B5DF0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B5DF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B5DF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B5DFC: nop

    // 0x800B5E00: beq         $t1, $at, L_800B5E14
    if (ctx->r9 == ctx->r1) {
        // 0x800B5E04: nop
    
            goto L_800B5E14;
    }
    // 0x800B5E04: nop

    // 0x800B5E08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B5E0C: bne         $t1, $at, L_800B5F24
    if (ctx->r9 != ctx->r1) {
        // 0x800B5E10: nop
    
            goto L_800B5F24;
    }
    // 0x800B5E10: nop

L_800B5E14:
    // 0x800B5E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5E18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5E1C: jal         0x8001B44C
    // 0x800B5E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800B5E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800B5E24: beq         $v0, $zero, L_800B5F24
    if (ctx->r2 == 0) {
        // 0x800B5E28: nop
    
            goto L_800B5F24;
    }
    // 0x800B5E28: nop

    // 0x800B5E2C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B5E30: nop

    // 0x800B5E34: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800B5E38: nop

    // 0x800B5E3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800B5E40: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
    // 0x800B5E44: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B5E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B5E4C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800B5E50: nop

    // 0x800B5E54: bne         $t6, $at, L_800B5EC4
    if (ctx->r14 != ctx->r1) {
        // 0x800B5E58: nop
    
            goto L_800B5EC4;
    }
    // 0x800B5E58: nop

    // 0x800B5E5C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B5E60: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800B5E64: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800B5E68: nop

    // 0x800B5E6C: bne         $t8, $at, L_800B5EC4
    if (ctx->r24 != ctx->r1) {
        // 0x800B5E70: nop
    
            goto L_800B5EC4;
    }
    // 0x800B5E70: nop

    // 0x800B5E74: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B5E78: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800B5E7C: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
    // 0x800B5E80: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800B5E84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B5E88: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B5E8C: nop

    // 0x800B5E90: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800B5E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5E9C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800B5EA0: jal         0x80029EF8
    // 0x800B5EA4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800B5EA4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
    // 0x800B5EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5EB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800B5EB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B5EBC: jal         0x800175F0
    // 0x800B5EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800B5EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_800B5EC4:
    // 0x800B5EC4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B5EC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B5ECC: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800B5ED0: nop

    // 0x800B5ED4: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x800B5ED8: nop

    // 0x800B5EDC: bc1f        L_800B5EFC
    if (!c1cs) {
        // 0x800B5EE0: nop
    
            goto L_800B5EFC;
    }
    // 0x800B5EE0: nop

    // 0x800B5EE4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B5EE8: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800B5EEC: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
    // 0x800B5EF0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B5EF4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800B5EF8: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_800B5EFC:
    // 0x800B5EFC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B5F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5F04: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B5F08: addiu       $t8, $t8, 0x7AA0
    ctx->r24 = ADD32(ctx->r24, 0X7AA0);
    // 0x800B5F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5F10: lh          $a2, 0xA8($t7)
    ctx->r6 = MEM_H(ctx->r15, 0XA8);
    // 0x800B5F14: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B5F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5F1C: jal         0x8001C0EC
    // 0x800B5F20: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800B5F20: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_6:
L_800B5F24:
    // 0x800B5F24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5F28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5F2C: jal         0x80028FA0
    // 0x800B5F30: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x800B5F30: nop

    after_7:
    // 0x800B5F34: beq         $v0, $zero, L_800B5F4C
    if (ctx->r2 == 0) {
        // 0x800B5F38: nop
    
            goto L_800B5F4C;
    }
    // 0x800B5F38: nop

    // 0x800B5F3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5F40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5F44: jal         0x80029B60
    // 0x800B5F48: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x800B5F48: nop

    after_8:
L_800B5F4C:
    // 0x800B5F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5F54: jal         0x80029C40
    // 0x800B5F58: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800B5F58: nop

    after_9:
    // 0x800B5F5C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B5F60: nop

    // 0x800B5F64: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800B5F68: nop

    // 0x800B5F6C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800B5F70: bne         $at, $zero, L_800B6108
    if (ctx->r1 != 0) {
        // 0x800B5F74: nop
    
            goto L_800B6108;
    }
    // 0x800B5F74: nop

    // 0x800B5F78: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800B5F7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B5F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5F88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B5F8C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B5F90: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B5F94: jal         0x80029F58
    // 0x800B5F98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x800B5F98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x800B5F9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B5FA0: bne         $v0, $at, L_800B6040
    if (ctx->r2 != ctx->r1) {
        // 0x800B5FA4: nop
    
            goto L_800B6040;
    }
    // 0x800B5FA4: nop

    // 0x800B5FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5FAC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800B5FB0: addiu       $t1, $t1, 0x7AA0
    ctx->r9 = ADD32(ctx->r9, 0X7AA0);
    // 0x800B5FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5FB8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800B5FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B5FC4: jal         0x8001C0EC
    // 0x800B5FC8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x800B5FC8: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_11:
    // 0x800B5FCC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B5FD0: nop

    // 0x800B5FD4: lh          $t4, 0xAE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAE);
    // 0x800B5FD8: nop

    // 0x800B5FDC: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800B5FE0: sh          $t2, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r10;
    // 0x800B5FE4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B5FE8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x800B5FEC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800B5FF0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B5FF4: nop

    // 0x800B5FF8: lh          $t8, 0xAE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAE);
    // 0x800B5FFC: nop

    // 0x800B6000: bgtz        $t8, L_800B6034
    if (SIGNED(ctx->r24) > 0) {
        // 0x800B6004: nop
    
            goto L_800B6034;
    }
    // 0x800B6004: nop

    // 0x800B6008: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B600C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800B6010: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B6014: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6018: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B601C: nop

    // 0x800B6020: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x800B6024: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6028: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B602C: nop

    // 0x800B6030: swc1        $f6, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f6.u32l;
L_800B6034:
    // 0x800B6034: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6038: nop

    // 0x800B603C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800B6040:
    // 0x800B6040: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B6044: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B6048: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B604C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6050: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B6054: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B6058: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B605C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B6060: jal         0x80029018
    // 0x800B6064: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x800B6064: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x800B6068: beq         $v0, $zero, L_800B608C
    if (ctx->r2 == 0) {
        // 0x800B606C: nop
    
            goto L_800B608C;
    }
    // 0x800B606C: nop

    // 0x800B6070: jal         0x800297DC
    // 0x800B6074: nop

    func_800297DC(rdram, ctx);
        goto after_13;
    // 0x800B6074: nop

    after_13:
    // 0x800B6078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B607C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6080: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B6084: jal         0x80029824
    // 0x800B6088: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_14;
    // 0x800B6088: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
L_800B608C:
    // 0x800B608C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B6090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B6094: lh          $t5, 0xB0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XB0);
    // 0x800B6098: nop

    // 0x800B609C: bne         $t5, $at, L_800B6108
    if (ctx->r13 != ctx->r1) {
        // 0x800B60A0: nop
    
            goto L_800B6108;
    }
    // 0x800B60A0: nop

    // 0x800B60A4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B60A8: lui         $at, 0xC5B4
    ctx->r1 = S32(0XC5B4 << 16);
    // 0x800B60AC: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B60B0: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800B60B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B60B8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B60BC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800B60C0: nop

    // 0x800B60C4: bc1f        L_800B6108
    if (!c1cs) {
        // 0x800B60C8: nop
    
            goto L_800B6108;
    }
    // 0x800B60C8: nop

    // 0x800B60CC: jal         0x800297DC
    // 0x800B60D0: nop

    func_800297DC(rdram, ctx);
        goto after_15;
    // 0x800B60D0: nop

    after_15:
    // 0x800B60D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B60D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B60DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B60E0: jal         0x80029824
    // 0x800B60E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_16;
    // 0x800B60E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x800B60E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B60EC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B60F0: nop

    // 0x800B60F4: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800B60F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B60FC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B6100: nop

    // 0x800B6104: swc1        $f10, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f10.u32l;
L_800B6108:
    // 0x800B6108: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B610C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B6114: lwc1        $f16, 0x24($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X24);
    // 0x800B6118: nop

    // 0x800B611C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800B6120: nop

    // 0x800B6124: bc1f        L_800B613C
    if (!c1cs) {
        // 0x800B6128: nop
    
            goto L_800B613C;
    }
    // 0x800B6128: nop

    // 0x800B612C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6130: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6134: b           L_800B618C
    // 0x800B6138: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
        goto L_800B618C;
    // 0x800B6138: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
L_800B613C:
    // 0x800B613C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B6140: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B6148: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x800B614C: nop

    // 0x800B6150: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B6154: nop

    // 0x800B6158: bc1f        L_800B6170
    if (!c1cs) {
        // 0x800B615C: nop
    
            goto L_800B6170;
    }
    // 0x800B615C: nop

    // 0x800B6160: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6164: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B6168: b           L_800B6180
    // 0x800B616C: nop

        goto L_800B6180;
    // 0x800B616C: nop

L_800B6170:
    // 0x800B6170: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B6174: nop

    // 0x800B6178: lwc1        $f20, 0x24($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X24);
    // 0x800B617C: nop

L_800B6180:
    // 0x800B6180: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B6184: nop

    // 0x800B6188: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_800B618C:
    // 0x800B618C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6190: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6194: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B6198: lwc1        $f10, 0x28($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800B619C: nop

    // 0x800B61A0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800B61A4: nop

    // 0x800B61A8: bc1f        L_800B61C0
    if (!c1cs) {
        // 0x800B61AC: nop
    
            goto L_800B61C0;
    }
    // 0x800B61AC: nop

    // 0x800B61B0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B61B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B61B8: b           L_800B6210
    // 0x800B61BC: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
        goto L_800B6210;
    // 0x800B61BC: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
L_800B61C0:
    // 0x800B61C0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B61C4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B61C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B61CC: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800B61D0: nop

    // 0x800B61D4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800B61D8: nop

    // 0x800B61DC: bc1f        L_800B61F4
    if (!c1cs) {
        // 0x800B61E0: nop
    
            goto L_800B61F4;
    }
    // 0x800B61E0: nop

    // 0x800B61E4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B61E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B61EC: b           L_800B6204
    // 0x800B61F0: nop

        goto L_800B6204;
    // 0x800B61F0: nop

L_800B61F4:
    // 0x800B61F4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B61F8: nop

    // 0x800B61FC: lwc1        $f20, 0x28($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X28);
    // 0x800B6200: nop

L_800B6204:
    // 0x800B6204: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B6208: nop

    // 0x800B620C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
L_800B6210:
    // 0x800B6210: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B6214: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6218: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B621C: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800B6220: nop

    // 0x800B6224: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x800B6228: nop

    // 0x800B622C: bc1f        L_800B6244
    if (!c1cs) {
        // 0x800B6230: nop
    
            goto L_800B6244;
    }
    // 0x800B6230: nop

    // 0x800B6234: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6238: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B623C: b           L_800B6294
    // 0x800B6240: swc1        $f16, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f16.u32l;
        goto L_800B6294;
    // 0x800B6240: swc1        $f16, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f16.u32l;
L_800B6244:
    // 0x800B6244: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B6248: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B624C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6250: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B6254: nop

    // 0x800B6258: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800B625C: nop

    // 0x800B6260: bc1f        L_800B6278
    if (!c1cs) {
        // 0x800B6264: nop
    
            goto L_800B6278;
    }
    // 0x800B6264: nop

    // 0x800B6268: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B626C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B6270: b           L_800B6288
    // 0x800B6274: nop

        goto L_800B6288;
    // 0x800B6274: nop

L_800B6278:
    // 0x800B6278: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B627C: nop

    // 0x800B6280: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800B6284: nop

L_800B6288:
    // 0x800B6288: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B628C: nop

    // 0x800B6290: swc1        $f20, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f20.u32l;
L_800B6294:
    // 0x800B6294: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B6298: nop

    // 0x800B629C: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800B62A0: nop

    // 0x800B62A4: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x800B62A8: b           L_800B62B0
    // 0x800B62AC: nop

        goto L_800B62B0;
    // 0x800B62AC: nop

L_800B62B0:
    // 0x800B62B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800B62B4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800B62B8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B62BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800B62C0: jr          $ra
    // 0x800B62C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800B62C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800C31D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C31D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C31D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C31DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C31E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C31E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C31E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C31EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C31F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C31F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C31F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C31FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3200: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3204: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C320C: nop

    // 0x800C3210: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3214: nop

    // 0x800C3218: bne         $t1, $zero, L_800C3264
    if (ctx->r9 != 0) {
        // 0x800C321C: nop
    
            goto L_800C3264;
    }
    // 0x800C321C: nop

    // 0x800C3220: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3224: nop

    // 0x800C3228: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C322C: nop

    // 0x800C3230: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C3234: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C3238: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C323C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C3240: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3244: nop

    // 0x800C3248: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C324C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3250: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C3254: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800C3258: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C325C: nop

    // 0x800C3260: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
L_800C3264:
    // 0x800C3264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C326C: jal         0x80028FA0
    // 0x800C3270: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800C3270: nop

    after_0:
    // 0x800C3274: beq         $v0, $zero, L_800C328C
    if (ctx->r2 == 0) {
        // 0x800C3278: nop
    
            goto L_800C328C;
    }
    // 0x800C3278: nop

    // 0x800C327C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3284: jal         0x80029B60
    // 0x800C3288: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800C3288: nop

    after_1:
L_800C328C:
    // 0x800C328C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C3290: nop

    // 0x800C3294: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800C3298: nop

    // 0x800C329C: beq         $t0, $zero, L_800C330C
    if (ctx->r8 == 0) {
        // 0x800C32A0: nop
    
            goto L_800C330C;
    }
    // 0x800C32A0: nop

    // 0x800C32A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C32A8: nop

    // 0x800C32AC: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x800C32B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C32B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C32B8: lui         $a1, 0x4166
    ctx->r5 = S32(0X4166 << 16);
    // 0x800C32BC: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x800C32C0: ori         $a2, $a2, 0xCB3E
    ctx->r6 = ctx->r6 | 0XCB3E;
    // 0x800C32C4: jal         0x80029EF8
    // 0x800C32C8: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C32C8: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    after_2:
    // 0x800C32CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C32D0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C32D4: addiu       $t3, $t3, -0x7F04
    ctx->r11 = ADD32(ctx->r11, -0X7F04);
    // 0x800C32D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C32DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C32E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C32E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C32E8: jal         0x8001C0EC
    // 0x800C32EC: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800C32EC: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    after_3:
    // 0x800C32F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C32F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C32F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C32FC: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x800C3300: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C3304: jal         0x80017664
    // 0x800C3308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_4;
    // 0x800C3308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800C330C:
    // 0x800C330C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C3310: nop

    // 0x800C3314: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800C3318: nop

    // 0x800C331C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800C3320: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C3324: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3328: nop

    // 0x800C332C: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x800C3330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3338: jal         0x80029C40
    // 0x800C333C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800C333C: nop

    after_5:
    // 0x800C3340: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C3344: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C3348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C334C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3354: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800C3358: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C335C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C3360: jal         0x80029018
    // 0x800C3364: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800C3364: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800C3368: beq         $v0, $zero, L_800C3394
    if (ctx->r2 == 0) {
        // 0x800C336C: nop
    
            goto L_800C3394;
    }
    // 0x800C336C: nop

    // 0x800C3370: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C3374: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3378: nop

    // 0x800C337C: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800C3380: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C3384: nop

    // 0x800C3388: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C338C: nop

    // 0x800C3390: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
L_800C3394:
    // 0x800C3394: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C3398: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C339C: nop

    // 0x800C33A0: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800C33A4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C33A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C33AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C33B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C33B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C33B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C33BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C33C0: jal         0x80029F58
    // 0x800C33C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800C33C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x800C33C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C33CC: bne         $v0, $at, L_800C343C
    if (ctx->r2 != ctx->r1) {
        // 0x800C33D0: nop
    
            goto L_800C343C;
    }
    // 0x800C33D0: nop

    // 0x800C33D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C33D8: nop

    // 0x800C33DC: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800C33E0: nop

    // 0x800C33E4: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x800C33E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C33EC: nop

    // 0x800C33F0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800C33F4: nop

    // 0x800C33F8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800C33FC: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800C3400: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C3404: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C3408: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800C340C: nop

    // 0x800C3410: bne         $t4, $at, L_800C3430
    if (ctx->r12 != ctx->r1) {
        // 0x800C3414: nop
    
            goto L_800C3430;
    }
    // 0x800C3414: nop

    // 0x800C3418: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C341C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800C3420: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800C3424: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C3428: b           L_800C343C
    // 0x800C342C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800C343C;
    // 0x800C342C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800C3430:
    // 0x800C3430: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C3434: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C3438: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_800C343C:
    // 0x800C343C: b           L_800C3444
    // 0x800C3440: nop

        goto L_800C3444;
    // 0x800C3440: nop

L_800C3444:
    // 0x800C3444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C344C: jr          $ra
    // 0x800C3450: nop

    return;
    // 0x800C3450: nop

;}
RECOMP_FUNC void func_8008AC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AC08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008AC0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AC10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008AC14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008AC18: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008AC1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008AC20: lh          $s0, 0x0($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X0);
    // 0x8008AC24: nop

    // 0x8008AC28: beq         $s0, $at, L_8008AC5C
    if (ctx->r16 == ctx->r1) {
        // 0x8008AC2C: nop
    
            goto L_8008AC5C;
    }
    // 0x8008AC2C: nop

    // 0x8008AC30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008AC34: beq         $s0, $at, L_8008AC74
    if (ctx->r16 == ctx->r1) {
        // 0x8008AC38: nop
    
            goto L_8008AC74;
    }
    // 0x8008AC38: nop

    // 0x8008AC3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008AC40: beq         $s0, $at, L_8008AC9C
    if (ctx->r16 == ctx->r1) {
        // 0x8008AC44: nop
    
            goto L_8008AC9C;
    }
    // 0x8008AC44: nop

    // 0x8008AC48: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008AC4C: beq         $s0, $at, L_8008ACB8
    if (ctx->r16 == ctx->r1) {
        // 0x8008AC50: nop
    
            goto L_8008ACB8;
    }
    // 0x8008AC50: nop

    // 0x8008AC54: b           L_8008ACDC
    // 0x8008AC58: nop

        goto L_8008ACDC;
    // 0x8008AC58: nop

L_8008AC5C:
    // 0x8008AC5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AC60: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x8008AC64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AC68: sh          $zero, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = 0;
    // 0x8008AC6C: b           L_8008ACF4
    // 0x8008AC70: nop

        goto L_8008ACF4;
    // 0x8008AC70: nop

L_8008AC74:
    // 0x8008AC74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008AC78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AC7C: sb          $t7, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = ctx->r15;
    // 0x8008AC80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008AC84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AC88: sh          $t8, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = ctx->r24;
    // 0x8008AC8C: jal         0x8008B030
    // 0x8008AC90: nop

    func_8008B030(rdram, ctx);
        goto after_0;
    // 0x8008AC90: nop

    after_0:
    // 0x8008AC94: b           L_8008ACF4
    // 0x8008AC98: nop

        goto L_8008ACF4;
    // 0x8008AC98: nop

L_8008AC9C:
    // 0x8008AC9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008ACA0: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x8008ACA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008ACA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ACAC: sh          $t9, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = ctx->r25;
    // 0x8008ACB0: b           L_8008ACF4
    // 0x8008ACB4: nop

        goto L_8008ACF4;
    // 0x8008ACB4: nop

L_8008ACB8:
    // 0x8008ACB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008ACBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008ACC0: sb          $t0, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = ctx->r8;
    // 0x8008ACC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ACC8: sh          $zero, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = 0;
    // 0x8008ACCC: jal         0x8008B030
    // 0x8008ACD0: nop

    func_8008B030(rdram, ctx);
        goto after_1;
    // 0x8008ACD0: nop

    after_1:
    // 0x8008ACD4: b           L_8008ACF4
    // 0x8008ACD8: nop

        goto L_8008ACF4;
    // 0x8008ACD8: nop

L_8008ACDC:
    // 0x8008ACDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008ACE0: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x8008ACE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ACE8: sh          $zero, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = 0;
    // 0x8008ACEC: b           L_8008ACF4
    // 0x8008ACF0: nop

        goto L_8008ACF4;
    // 0x8008ACF0: nop

L_8008ACF4:
    // 0x8008ACF4: jal         0x80019B7C
    // 0x8008ACF8: nop

    func_80019B7C(rdram, ctx);
        goto after_2;
    // 0x8008ACF8: nop

    after_2:
    // 0x8008ACFC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008AD00: lb          $t1, -0x1ECC($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1ECC);
    // 0x8008AD04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008AD08: bne         $t1, $at, L_8008AD40
    if (ctx->r9 != ctx->r1) {
        // 0x8008AD0C: nop
    
            goto L_8008AD40;
    }
    // 0x8008AD0C: nop

    // 0x8008AD10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AD14: lwc1        $f4, -0x1EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x8008AD18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD1C: swc1        $f4, 0x4F44($at)
    MEM_W(0X4F44, ctx->r1) = ctx->f4.u32l;
    // 0x8008AD20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AD24: lwc1        $f6, -0x1EB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB0);
    // 0x8008AD28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD2C: swc1        $f6, 0x4F48($at)
    MEM_W(0X4F48, ctx->r1) = ctx->f6.u32l;
    // 0x8008AD30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AD34: lwc1        $f8, -0x1EAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x8008AD38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD3C: swc1        $f8, 0x4F4C($at)
    MEM_W(0X4F4C, ctx->r1) = ctx->f8.u32l;
L_8008AD40:
    // 0x8008AD40: b           L_8008AD48
    // 0x8008AD44: nop

        goto L_8008AD48;
    // 0x8008AD44: nop

L_8008AD48:
    // 0x8008AD48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AD4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AD50: jr          $ra
    // 0x8008AD54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8008AD54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009173C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009173C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091744: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091748: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009174C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091750: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091754: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091758: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009175C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091760: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091764: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091768: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009176C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091770: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091774: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091778: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009177C: addiu       $a1, $a1, 0x15A0
    ctx->r5 = ADD32(ctx->r5, 0X15A0);
    // 0x80091780: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091784: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091788: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009178C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091790: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091794: jal         0x80027464
    // 0x80091798: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091798: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009179C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800917A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800917A4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800917A8: addiu       $a3, $a3, 0x283C
    ctx->r7 = ADD32(ctx->r7, 0X283C);
    // 0x800917AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800917B0: jal         0x8001ABF4
    // 0x800917B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800917B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800917B8: b           L_800917C0
    // 0x800917BC: nop

        goto L_800917C0;
    // 0x800917BC: nop

L_800917C0:
    // 0x800917C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800917C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800917C8: jr          $ra
    // 0x800917CC: nop

    return;
    // 0x800917CC: nop

;}
RECOMP_FUNC void func_800ECEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ECEB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800ECEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ECEB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ECEBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ECEC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ECEC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ECEC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECECC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ECED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECED4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ECED8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ECEDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ECEE0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800ECEE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECEE8: nop

    // 0x800ECEEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ECEF0: nop

    // 0x800ECEF4: bne         $t1, $zero, L_800ECF4C
    if (ctx->r9 != 0) {
        // 0x800ECEF8: nop
    
            goto L_800ECF4C;
    }
    // 0x800ECEF8: nop

    // 0x800ECEFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECF00: nop

    // 0x800ECF04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800ECF08: nop

    // 0x800ECF0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800ECF10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800ECF14: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800ECF18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800ECF1C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECF20: nop

    // 0x800ECF24: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800ECF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECF2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800ECF30: addiu       $t6, $t6, -0x65A0
    ctx->r14 = ADD32(ctx->r14, -0X65A0);
    // 0x800ECF34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECF38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800ECF3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ECF40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800ECF44: jal         0x8001C0EC
    // 0x800ECF48: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ECF48: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_0:
L_800ECF4C:
    // 0x800ECF4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECF50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECF54: jal         0x80028FA0
    // 0x800ECF58: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800ECF58: nop

    after_1:
    // 0x800ECF5C: beq         $v0, $zero, L_800ECF74
    if (ctx->r2 == 0) {
        // 0x800ECF60: nop
    
            goto L_800ECF74;
    }
    // 0x800ECF60: nop

    // 0x800ECF64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECF68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECF6C: jal         0x80029B60
    // 0x800ECF70: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800ECF70: nop

    after_2:
L_800ECF74:
    // 0x800ECF74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECF78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECF7C: jal         0x8002A8B4
    // 0x800ECF80: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800ECF80: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_3:
    // 0x800ECF84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECF88: nop

    // 0x800ECF8C: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800ECF90: nop

    // 0x800ECF94: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800ECF98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECF9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECFA0: jal         0x80029C40
    // 0x800ECFA4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800ECFA4: nop

    after_4:
    // 0x800ECFA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800ECFAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ECFB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECFB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECFB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800ECFBC: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x800ECFC0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECFC4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800ECFC8: jal         0x80029018
    // 0x800ECFCC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800ECFCC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800ECFD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ECFD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800ECFD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECFDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECFE0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800ECFE4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800ECFE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECFEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800ECFF0: jal         0x800295C0
    // 0x800ECFF4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x800ECFF4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800ECFF8: beq         $v0, $zero, L_800ED010
    if (ctx->r2 == 0) {
        // 0x800ECFFC: nop
    
            goto L_800ED010;
    }
    // 0x800ECFFC: nop

    // 0x800ED000: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800ED004: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED008: b           L_800ED020
    // 0x800ED00C: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
        goto L_800ED020;
    // 0x800ED00C: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_800ED010:
    // 0x800ED010: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800ED014: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED018: nop

    // 0x800ED01C: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
L_800ED020:
    // 0x800ED020: b           L_800ED028
    // 0x800ED024: nop

        goto L_800ED028;
    // 0x800ED024: nop

L_800ED028:
    // 0x800ED028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800ED030: jr          $ra
    // 0x800ED034: nop

    return;
    // 0x800ED034: nop

;}
RECOMP_FUNC void func_80076374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007637C: jal         0x800722FC
    // 0x80076380: nop

    func_800722FC(rdram, ctx);
        goto after_0;
    // 0x80076380: nop

    after_0:
    // 0x80076384: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076388: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x8007638C: nop

    // 0x80076390: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80076394: beq         $at, $zero, L_800763B8
    if (ctx->r1 == 0) {
        // 0x80076398: nop
    
            goto L_800763B8;
    }
    // 0x80076398: nop

    // 0x8007639C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800763A0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800763A4: addu        $at, $at, $t6
    gpr jr_addend_800763B0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800763A8: lw          $t6, 0x5C44($at)
    ctx->r14 = ADD32(ctx->r1, 0X5C44);
    // 0x800763AC: nop

    // 0x800763B0: jr          $t6
    // 0x800763B4: nop

    switch (jr_addend_800763B0 >> 2) {
        case 0: goto L_800763B8; break;
        case 1: goto L_800763C8; break;
        case 2: goto L_800763D8; break;
        case 3: goto L_800763E8; break;
        case 4: goto L_800763F8; break;
        case 5: goto L_80076408; break;
        case 6: goto L_80076418; break;
        case 7: goto L_80076428; break;
        default: switch_error(__func__, 0x800763B0, 0x80105C44);
    }
    // 0x800763B4: nop

L_800763B8:
    // 0x800763B8: jal         0x8008B030
    // 0x800763BC: nop

    func_8008B030(rdram, ctx);
        goto after_1;
    // 0x800763BC: nop

    after_1:
    // 0x800763C0: b           L_80076438
    // 0x800763C4: nop

        goto L_80076438;
    // 0x800763C4: nop

L_800763C8:
    // 0x800763C8: jal         0x80072854
    // 0x800763CC: nop

    func_80072854(rdram, ctx);
        goto after_2;
    // 0x800763CC: nop

    after_2:
    // 0x800763D0: b           L_80076438
    // 0x800763D4: nop

        goto L_80076438;
    // 0x800763D4: nop

L_800763D8:
    // 0x800763D8: jal         0x80072B08
    // 0x800763DC: nop

    func_80072B08(rdram, ctx);
        goto after_3;
    // 0x800763DC: nop

    after_3:
    // 0x800763E0: b           L_80076438
    // 0x800763E4: nop

        goto L_80076438;
    // 0x800763E4: nop

L_800763E8:
    // 0x800763E8: jal         0x80073784
    // 0x800763EC: nop

    func_80073784(rdram, ctx);
        goto after_4;
    // 0x800763EC: nop

    after_4:
    // 0x800763F0: b           L_80076438
    // 0x800763F4: nop

        goto L_80076438;
    // 0x800763F4: nop

L_800763F8:
    // 0x800763F8: jal         0x80074318
    // 0x800763FC: nop

    func_80074318(rdram, ctx);
        goto after_5;
    // 0x800763FC: nop

    after_5:
    // 0x80076400: b           L_80076438
    // 0x80076404: nop

        goto L_80076438;
    // 0x80076404: nop

L_80076408:
    // 0x80076408: jal         0x800745C0
    // 0x8007640C: nop

    func_800745C0(rdram, ctx);
        goto after_6;
    // 0x8007640C: nop

    after_6:
    // 0x80076410: b           L_80076438
    // 0x80076414: nop

        goto L_80076438;
    // 0x80076414: nop

L_80076418:
    // 0x80076418: jal         0x80075288
    // 0x8007641C: nop

    func_80075288(rdram, ctx);
        goto after_7;
    // 0x8007641C: nop

    after_7:
    // 0x80076420: b           L_80076438
    // 0x80076424: nop

        goto L_80076438;
    // 0x80076424: nop

L_80076428:
    // 0x80076428: jal         0x80075D68
    // 0x8007642C: nop

    func_80075D68(rdram, ctx);
        goto after_8;
    // 0x8007642C: nop

    after_8:
    // 0x80076430: b           L_80076438
    // 0x80076434: nop

        goto L_80076438;
    // 0x80076434: nop

L_80076438:
    // 0x80076438: jal         0x800723EC
    // 0x8007643C: nop

    func_800723EC(rdram, ctx);
        goto after_9;
    // 0x8007643C: nop

    after_9:
    // 0x80076440: b           L_80076448
    // 0x80076444: nop

        goto L_80076448;
    // 0x80076444: nop

L_80076448:
    // 0x80076448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007644C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076450: jr          $ra
    // 0x80076454: nop

    return;
    // 0x80076454: nop

;}
RECOMP_FUNC void func_80099084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099084: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80099088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009908C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80099090: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80099094: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80099098: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009909C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800990A0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800990A4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800990A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800990AC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800990B0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800990B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800990B8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800990BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800990C0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800990C4: addiu       $a1, $a1, 0x346C
    ctx->r5 = ADD32(ctx->r5, 0X346C);
    // 0x800990C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800990CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800990D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800990D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800990D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800990DC: jal         0x80027464
    // 0x800990E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800990E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800990E4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800990E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800990EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800990F0: beq         $t1, $at, L_800991B8
    if (ctx->r9 == ctx->r1) {
        // 0x800990F4: nop
    
            goto L_800991B8;
    }
    // 0x800990F4: nop

    // 0x800990F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800990FC: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80099100: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80099104: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80099108: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009910C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80099110: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80099114: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80099118: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8009911C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80099120: jal         0x80098864
    // 0x80099124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_1;
    // 0x80099124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80099128: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009912C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80099130: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80099134: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80099138: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009913C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80099140: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80099144: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80099148: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x8009914C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80099150: jal         0x80098864
    // 0x80099154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_2;
    // 0x80099154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80099158: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009915C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80099160: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80099164: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80099168: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009916C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80099170: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80099174: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80099178: lh          $a0, 0x423C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423C);
    // 0x8009917C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80099180: jal         0x80098864
    // 0x80099184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_3;
    // 0x80099184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80099188: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009918C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80099190: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80099194: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80099198: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009919C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800991A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800991A4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800991A8: lh          $a0, 0x423E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423E);
    // 0x800991AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800991B0: jal         0x80098864
    // 0x800991B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_4;
    // 0x800991B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_800991B8:
    // 0x800991B8: b           L_800991C0
    // 0x800991BC: nop

        goto L_800991C0;
    // 0x800991BC: nop

L_800991C0:
    // 0x800991C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800991C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800991C8: jr          $ra
    // 0x800991CC: nop

    return;
    // 0x800991CC: nop

;}
RECOMP_FUNC void func_800ECA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ECA50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800ECA54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ECA58: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800ECA5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800ECA60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ECA64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ECA68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ECA6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ECA70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECA74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ECA78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECA7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ECA80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ECA84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ECA88: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800ECA8C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800ECA90: nop

    // 0x800ECA94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ECA98: nop

    // 0x800ECA9C: bne         $t1, $zero, L_800ECAE0
    if (ctx->r9 != 0) {
        // 0x800ECAA0: nop
    
            goto L_800ECAE0;
    }
    // 0x800ECAA0: nop

    // 0x800ECAA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800ECAA8: nop

    // 0x800ECAAC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800ECAB0: nop

    // 0x800ECAB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800ECAB8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800ECABC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECAC0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800ECAC4: addiu       $t5, $t5, -0x65A0
    ctx->r13 = ADD32(ctx->r13, -0X65A0);
    // 0x800ECAC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECACC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800ECAD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ECAD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800ECAD8: jal         0x8001C0EC
    // 0x800ECADC: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ECADC: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_0:
L_800ECAE0:
    // 0x800ECAE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECAE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECAE8: jal         0x80028FA0
    // 0x800ECAEC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800ECAEC: nop

    after_1:
    // 0x800ECAF0: beq         $v0, $zero, L_800ECB08
    if (ctx->r2 == 0) {
        // 0x800ECAF4: nop
    
            goto L_800ECB08;
    }
    // 0x800ECAF4: nop

    // 0x800ECAF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECB00: jal         0x80029B60
    // 0x800ECB04: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800ECB04: nop

    after_2:
L_800ECB08:
    // 0x800ECB08: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800ECB0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800ECB10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800ECB14: nop

    // 0x800ECB18: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800ECB1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECB20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECB24: jal         0x8002A8B4
    // 0x800ECB28: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800ECB28: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_3:
    // 0x800ECB2C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800ECB30: nop

    // 0x800ECB34: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800ECB38: nop

    // 0x800ECB3C: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800ECB40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECB44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECB48: jal         0x80029C40
    // 0x800ECB4C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800ECB4C: nop

    after_4:
    // 0x800ECB50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800ECB54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ECB58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECB5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECB60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800ECB64: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x800ECB68: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECB6C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800ECB70: jal         0x80029018
    // 0x800ECB74: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800ECB74: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800ECB78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ECB7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800ECB80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECB84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECB88: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800ECB8C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800ECB90: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECB94: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800ECB98: jal         0x800295C0
    // 0x800ECB9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x800ECB9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800ECBA0: beq         $v0, $zero, L_800ECBB8
    if (ctx->r2 == 0) {
        // 0x800ECBA4: nop
    
            goto L_800ECBB8;
    }
    // 0x800ECBA4: nop

    // 0x800ECBA8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800ECBAC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800ECBB0: b           L_800ECBC8
    // 0x800ECBB4: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
        goto L_800ECBC8;
    // 0x800ECBB4: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_800ECBB8:
    // 0x800ECBB8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800ECBBC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800ECBC0: nop

    // 0x800ECBC4: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
L_800ECBC8:
    // 0x800ECBC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECBCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECBD0: jal         0x8002A2EC
    // 0x800ECBD4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x800ECBD4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x800ECBD8: beq         $v0, $zero, L_800ECC38
    if (ctx->r2 == 0) {
        // 0x800ECBDC: nop
    
            goto L_800ECC38;
    }
    // 0x800ECBDC: nop

    // 0x800ECBE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800ECBE4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800ECBE8: nop

    // 0x800ECBEC: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x800ECBF0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800ECBF4: nop

    // 0x800ECBF8: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800ECBFC: nop

    // 0x800ECC00: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800ECC04: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800ECC08: nop

    // 0x800ECC0C: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x800ECC10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ECC14: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800ECC18: nop

    // 0x800ECC1C: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x800ECC20: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800ECC24: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800ECC28: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800ECC2C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800ECC30: nop

    // 0x800ECC34: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800ECC38:
    // 0x800ECC38: b           L_800ECC40
    // 0x800ECC3C: nop

        goto L_800ECC40;
    // 0x800ECC3C: nop

L_800ECC40:
    // 0x800ECC40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800ECC44: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800ECC48: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800ECC4C: jr          $ra
    // 0x800ECC50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800ECC50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FAC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAC60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FAC64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAC68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FAC6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FAC70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FAC74: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800FAC78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FAC7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAC80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FAC84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAC88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FAC8C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800FAC90: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800FAC94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FAC98: beq         $s0, $at, L_800FACB4
    if (ctx->r16 == ctx->r1) {
        // 0x800FAC9C: nop
    
            goto L_800FACB4;
    }
    // 0x800FAC9C: nop

    // 0x800FACA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FACA4: beq         $s0, $at, L_800FACC4
    if (ctx->r16 == ctx->r1) {
        // 0x800FACA8: nop
    
            goto L_800FACC4;
    }
    // 0x800FACA8: nop

    // 0x800FACAC: b           L_800FACD4
    // 0x800FACB0: nop

        goto L_800FACD4;
    // 0x800FACB0: nop

L_800FACB4:
    // 0x800FACB4: jal         0x800FA888
    // 0x800FACB8: nop

    func_800FA888(rdram, ctx);
        goto after_0;
    // 0x800FACB8: nop

    after_0:
    // 0x800FACBC: b           L_800FACD4
    // 0x800FACC0: nop

        goto L_800FACD4;
    // 0x800FACC0: nop

L_800FACC4:
    // 0x800FACC4: jal         0x800FAA88
    // 0x800FACC8: nop

    func_800FAA88(rdram, ctx);
        goto after_1;
    // 0x800FACC8: nop

    after_1:
    // 0x800FACCC: b           L_800FACD4
    // 0x800FACD0: nop

        goto L_800FACD4;
    // 0x800FACD0: nop

L_800FACD4:
    // 0x800FACD4: b           L_800FACDC
    // 0x800FACD8: nop

        goto L_800FACDC;
    // 0x800FACD8: nop

L_800FACDC:
    // 0x800FACDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FACE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FACE4: jr          $ra
    // 0x800FACE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FACE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DAD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAD98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DAD9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DADA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DADA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DADA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DADAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DADB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DADB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DADB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DADBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DADC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DADC4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DADC8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DADCC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800DADD0: nop

    // 0x800DADD4: bne         $t0, $zero, L_800DADF8
    if (ctx->r8 != 0) {
        // 0x800DADD8: nop
    
            goto L_800DADF8;
    }
    // 0x800DADD8: nop

    // 0x800DADDC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DADE0: nop

    // 0x800DADE4: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800DADE8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DADEC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DADF0: b           L_800DAE04
    // 0x800DADF4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800DAE04;
    // 0x800DADF4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800DADF8:
    // 0x800DADF8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DADFC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800DAE00: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800DAE04:
    // 0x800DAE04: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DAE08: nop

    // 0x800DAE0C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800DAE10: b           L_800DAE18
    // 0x800DAE14: nop

        goto L_800DAE18;
    // 0x800DAE14: nop

L_800DAE18:
    // 0x800DAE18: jr          $ra
    // 0x800DAE1C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DAE1C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009EE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EE54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009EE58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009EE5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009EE60: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009EE64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8009EE68: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009EE6C: nop

    // 0x8009EE70: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009EE74: nop

    // 0x8009EE78: bne         $t7, $zero, L_8009EED4
    if (ctx->r15 != 0) {
        // 0x8009EE7C: nop
    
            goto L_8009EED4;
    }
    // 0x8009EE7C: nop

    // 0x8009EE80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009EE84: nop

    // 0x8009EE88: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009EE8C: nop

    // 0x8009EE90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009EE94: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009EE98: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8009EE9C: nop

    // 0x8009EEA0: sb          $zero, 0x102($t1)
    MEM_B(0X102, ctx->r9) = 0;
    // 0x8009EEA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009EEA8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8009EEAC: nop

    // 0x8009EEB0: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x8009EEB4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8009EEB8: nop

    // 0x8009EEBC: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8009EEC0: nop

    // 0x8009EEC4: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x8009EEC8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8009EECC: nop

    // 0x8009EED0: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_8009EED4:
    // 0x8009EED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009EED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009EEDC: jal         0x8002A1FC
    // 0x8009EEE0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x8009EEE0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_0:
    // 0x8009EEE4: beq         $v0, $zero, L_8009EF04
    if (ctx->r2 == 0) {
        // 0x8009EEE8: nop
    
            goto L_8009EF04;
    }
    // 0x8009EEE8: nop

    // 0x8009EEEC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009EEF0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8009EEF4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8009EEF8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8009EEFC: nop

    // 0x8009EF00: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8009EF04:
    // 0x8009EF04: b           L_8009EF0C
    // 0x8009EF08: nop

        goto L_8009EF0C;
    // 0x8009EF08: nop

L_8009EF0C:
    // 0x8009EF0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009EF10: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8009EF14: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009EF18: jr          $ra
    // 0x8009EF1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009EF1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008279C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008279C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800827A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800827A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800827A8: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x800827AC: nop

    // 0x800827B0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800827B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800827B8: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x800827BC: nop

    // 0x800827C0: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x800827C4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800827C8: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x800827CC: nop

    // 0x800827D0: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x800827D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800827D8: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800827DC: nop

    // 0x800827E0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x800827E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800827E8: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x800827EC: nop

    // 0x800827F0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800827F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800827F8: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x800827FC: nop

    // 0x80082800: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80082804: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082808: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x8008280C: nop

    // 0x80082810: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80082814: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x80082818: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008281C: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x80082820: jal         0x80081C50
    // 0x80082824: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x80082824: nop

    after_0:
    // 0x80082828: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008282C: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80082830: jal         0x800824A8
    // 0x80082834: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082834: nop

    after_1:
    // 0x80082838: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x8008283C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082840: sh          $t0, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r8;
    // 0x80082844: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80082848: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008284C: sh          $t1, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r9;
    // 0x80082850: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80082854: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082858: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x8008285C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082860: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082864: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082868: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8008286C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082870: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x80082874: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082878: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008287C: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082880: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082884: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082888: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x8008288C: b           L_80082894
    // 0x80082890: nop

        goto L_80082894;
    // 0x80082890: nop

L_80082894:
    // 0x80082894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082898: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008289C: jr          $ra
    // 0x800828A0: nop

    return;
    // 0x800828A0: nop

;}
RECOMP_FUNC void func_800DAC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAC6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DAC70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DAC74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800DAC78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DAC7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DAC80: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800DAC84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DAC88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAC8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DAC90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAC94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DAC98: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800DAC9C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800DACA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DACA4: beq         $s0, $at, L_800DACCC
    if (ctx->r16 == ctx->r1) {
        // 0x800DACA8: nop
    
            goto L_800DACCC;
    }
    // 0x800DACA8: nop

    // 0x800DACAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800DACB0: beq         $s0, $at, L_800DACDC
    if (ctx->r16 == ctx->r1) {
        // 0x800DACB4: nop
    
            goto L_800DACDC;
    }
    // 0x800DACB4: nop

    // 0x800DACB8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800DACBC: beq         $s0, $at, L_800DACEC
    if (ctx->r16 == ctx->r1) {
        // 0x800DACC0: nop
    
            goto L_800DACEC;
    }
    // 0x800DACC0: nop

    // 0x800DACC4: b           L_800DACFC
    // 0x800DACC8: nop

        goto L_800DACFC;
    // 0x800DACC8: nop

L_800DACCC:
    // 0x800DACCC: jal         0x800DA9C8
    // 0x800DACD0: nop

    func_800DA9C8(rdram, ctx);
        goto after_0;
    // 0x800DACD0: nop

    after_0:
    // 0x800DACD4: b           L_800DAD04
    // 0x800DACD8: nop

        goto L_800DAD04;
    // 0x800DACD8: nop

L_800DACDC:
    // 0x800DACDC: jal         0x800DAA2C
    // 0x800DACE0: nop

    func_800DAA2C(rdram, ctx);
        goto after_1;
    // 0x800DACE0: nop

    after_1:
    // 0x800DACE4: b           L_800DAD04
    // 0x800DACE8: nop

        goto L_800DAD04;
    // 0x800DACE8: nop

L_800DACEC:
    // 0x800DACEC: jal         0x800DAC3C
    // 0x800DACF0: nop

    func_800DAC3C(rdram, ctx);
        goto after_2;
    // 0x800DACF0: nop

    after_2:
    // 0x800DACF4: b           L_800DAD04
    // 0x800DACF8: nop

        goto L_800DAD04;
    // 0x800DACF8: nop

L_800DACFC:
    // 0x800DACFC: b           L_800DAD04
    // 0x800DAD00: nop

        goto L_800DAD04;
    // 0x800DAD00: nop

L_800DAD04:
    // 0x800DAD04: b           L_800DAD0C
    // 0x800DAD08: nop

        goto L_800DAD0C;
    // 0x800DAD08: nop

L_800DAD0C:
    // 0x800DAD0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DAD10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800DAD14: jr          $ra
    // 0x800DAD18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800DAD18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80072190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072190: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80072194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072198: sw          $t6, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = ctx->r14;
    // 0x8007219C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800721A0: sw          $zero, 0x7644($at)
    MEM_W(0X7644, ctx->r1) = 0;
    // 0x800721A4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800721A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800721AC: sw          $t7, 0x764C($at)
    MEM_W(0X764C, ctx->r1) = ctx->r15;
    // 0x800721B0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800721B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800721B8: sw          $t8, 0x7660($at)
    MEM_W(0X7660, ctx->r1) = ctx->r24;
    // 0x800721BC: jr          $ra
    // 0x800721C0: nop

    return;
    // 0x800721C0: nop

    // 0x800721C4: jr          $ra
    // 0x800721C8: nop

    return;
    // 0x800721C8: nop

;}
RECOMP_FUNC void func_800A54B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A54B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A54B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A54BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A54C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A54C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A54C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A54CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A54D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A54D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A54D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A54DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A54E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A54E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A54E8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A54EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A54F0: nop

    // 0x800A54F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A54F8: nop

    // 0x800A54FC: bne         $t1, $zero, L_800A5558
    if (ctx->r9 != 0) {
        // 0x800A5500: nop
    
            goto L_800A5558;
    }
    // 0x800A5500: nop

    // 0x800A5504: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A5508: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A550C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A5510: jal         0x80014E80
    // 0x800A5514: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A5514: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800A5518: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800A551C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A5520: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A5524: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x800A5528: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A552C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A5530: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A5534: nop

    // 0x800A5538: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
    // 0x800A553C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5540: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A5544: nop

    // 0x800A5548: swc1        $f10, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f10.u32l;
    // 0x800A554C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A5550: addiu       $t7, $zero, 0x1A4
    ctx->r15 = ADD32(0, 0X1A4);
    // 0x800A5554: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_800A5558:
    // 0x800A5558: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A555C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5560: jal         0x80028FA0
    // 0x800A5564: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800A5564: nop

    after_1:
    // 0x800A5568: beq         $v0, $zero, L_800A5580
    if (ctx->r2 == 0) {
        // 0x800A556C: nop
    
            goto L_800A5580;
    }
    // 0x800A556C: nop

    // 0x800A5570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5578: jal         0x80029B60
    // 0x800A557C: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800A557C: nop

    after_2:
L_800A5580:
    // 0x800A5580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5588: jal         0x80029C40
    // 0x800A558C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800A558C: nop

    after_3:
    // 0x800A5590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5598: jal         0x80029D04
    // 0x800A559C: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800A559C: nop

    after_4:
    // 0x800A55A0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A55A4: nop

    // 0x800A55A8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800A55AC: nop

    // 0x800A55B0: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x800A55B4: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800A55B8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A55BC: nop

    // 0x800A55C0: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800A55C4: nop

    // 0x800A55C8: bgez        $t3, L_800A55E8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800A55CC: nop
    
            goto L_800A55E8;
    }
    // 0x800A55CC: nop

    // 0x800A55D0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A55D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A55D8: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A55DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A55E0: nop

    // 0x800A55E4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A55E8:
    // 0x800A55E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A55EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A55F0: jal         0x8002A1FC
    // 0x800A55F4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800A55F4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800A55F8: beq         $v0, $zero, L_800A5618
    if (ctx->r2 == 0) {
        // 0x800A55FC: nop
    
            goto L_800A5618;
    }
    // 0x800A55FC: nop

    // 0x800A5600: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A5604: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800A5608: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A560C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A5610: nop

    // 0x800A5614: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800A5618:
    // 0x800A5618: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A561C: jal         0x800C0194
    // 0x800A5620: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C0194(rdram, ctx);
        goto after_6;
    // 0x800A5620: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x800A5624: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800A5628: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800A562C: nop

    // 0x800A5630: slti        $at, $t1, -0xB4
    ctx->r1 = SIGNED(ctx->r9) < -0XB4 ? 1 : 0;
    // 0x800A5634: beq         $at, $zero, L_800A5668
    if (ctx->r1 == 0) {
        // 0x800A5638: nop
    
            goto L_800A5668;
    }
    // 0x800A5638: nop

    // 0x800A563C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A5640: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800A5644: sh          $t9, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r25;
    // 0x800A5648: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A564C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A5650: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
    // 0x800A5654: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A5658: nop

    // 0x800A565C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800A5660: b           L_800A5750
    // 0x800A5664: nop

        goto L_800A5750;
    // 0x800A5664: nop

L_800A5668:
    // 0x800A5668: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A566C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A5670: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A567C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800A5680: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A5684: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800A5688: jal         0x80029018
    // 0x800A568C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800A568C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x800A5690: beq         $v0, $zero, L_800A573C
    if (ctx->r2 == 0) {
        // 0x800A5694: nop
    
            goto L_800A573C;
    }
    // 0x800A5694: nop

    // 0x800A5698: jal         0x800297DC
    // 0x800A569C: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800A569C: nop

    after_8:
    // 0x800A56A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A56A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A56A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A56AC: jal         0x80029824
    // 0x800A56B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800A56B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800A56B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A56B8: lh          $t6, 0x51A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X51A0);
    // 0x800A56BC: nop

    // 0x800A56C0: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x800A56C4: beq         $t7, $zero, L_800A5734
    if (ctx->r15 == 0) {
        // 0x800A56C8: nop
    
            goto L_800A5734;
    }
    // 0x800A56C8: nop

    // 0x800A56CC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A56D0: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A56D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A56D8: lwc1        $f6, 0x54($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X54);
    // 0x800A56DC: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800A56E0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800A56E4: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800A56E8: nop

    // 0x800A56EC: bc1t        L_800A5714
    if (c1cs) {
        // 0x800A56F0: nop
    
            goto L_800A5714;
    }
    // 0x800A56F0: nop

    // 0x800A56F4: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A56F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A56FC: nop

    // 0x800A5700: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A5704: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800A5708: nop

    // 0x800A570C: bc1f        L_800A5734
    if (!c1cs) {
        // 0x800A5710: nop
    
            goto L_800A5734;
    }
    // 0x800A5710: nop

L_800A5714:
    // 0x800A5714: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A5718: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x800A571C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800A5720: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A5724: nop

    // 0x800A5728: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800A572C: b           L_800A5750
    // 0x800A5730: nop

        goto L_800A5750;
    // 0x800A5730: nop

L_800A5734:
    // 0x800A5734: b           L_800A5748
    // 0x800A5738: nop

        goto L_800A5748;
    // 0x800A5738: nop

L_800A573C:
    // 0x800A573C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A5740: jal         0x800C00F4
    // 0x800A5744: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_10;
    // 0x800A5744: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
L_800A5748:
    // 0x800A5748: b           L_800A5750
    // 0x800A574C: nop

        goto L_800A5750;
    // 0x800A574C: nop

L_800A5750:
    // 0x800A5750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A5754: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A5758: jr          $ra
    // 0x800A575C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A575C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void stub_8005FA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FA90: jr          $ra
    // 0x8005FA94: nop

    return;
    // 0x8005FA94: nop

    // 0x8005FA98: jr          $ra
    // 0x8005FA9C: nop

    return;
    // 0x8005FA9C: nop

;}
RECOMP_FUNC void func_800D9BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9BD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D9BD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D9BDC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D9BE0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D9BE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D9BE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9BEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9BF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D9BF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9BF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9BFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9C00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D9C04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D9C08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D9C0C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D9C10: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C14: nop

    // 0x800D9C18: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D9C1C: nop

    // 0x800D9C20: bne         $t1, $zero, L_800D9CDC
    if (ctx->r9 != 0) {
        // 0x800D9C24: nop
    
            goto L_800D9CDC;
    }
    // 0x800D9C24: nop

    // 0x800D9C28: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D9C30: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D9C34: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D9C38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D9C3C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C40: nop

    // 0x800D9C44: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800D9C48: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C4C: nop

    // 0x800D9C50: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800D9C54: nop

    // 0x800D9C58: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x800D9C5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D9C60: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C64: nop

    // 0x800D9C68: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800D9C6C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C70: nop

    // 0x800D9C74: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800D9C78: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9C7C: nop

    // 0x800D9C80: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x800D9C84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9C88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9C8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D9C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D9C94: jal         0x80019448
    // 0x800D9C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x800D9C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800D9C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9CA0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800D9CA4: addiu       $t9, $t9, -0x7420
    ctx->r25 = ADD32(ctx->r25, -0X7420);
    // 0x800D9CA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9CAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800D9CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D9CB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D9CB8: jal         0x8001C0EC
    // 0x800D9CBC: addiu       $a3, $zero, 0x186
    ctx->r7 = ADD32(0, 0X186);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D9CBC: addiu       $a3, $zero, 0x186
    ctx->r7 = ADD32(0, 0X186);
    after_1:
    // 0x800D9CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9CC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D9CCC: addiu       $a3, $a3, -0x73F0
    ctx->r7 = ADD32(ctx->r7, -0X73F0);
    // 0x800D9CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D9CD4: jal         0x8001ABF4
    // 0x800D9CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800D9CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800D9CDC:
    // 0x800D9CDC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9CE0: nop

    // 0x800D9CE4: sh          $zero, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = 0;
    // 0x800D9CE8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9CEC: nop

    // 0x800D9CF0: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800D9CF4: nop

    // 0x800D9CF8: beq         $t2, $zero, L_800D9D98
    if (ctx->r10 == 0) {
        // 0x800D9CFC: nop
    
            goto L_800D9D98;
    }
    // 0x800D9CFC: nop

    // 0x800D9D00: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D9D04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D9D08: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D0C: nop

    // 0x800D9D10: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
    // 0x800D9D14: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D18: nop

    // 0x800D9D1C: lh          $t5, 0xB6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB6);
    // 0x800D9D20: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800D9D24: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800D9D28: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D9D2C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800D9D30: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800D9D34: jal         0x80015538
    // 0x800D9D38: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800D9D38: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x800D9D3C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D40: nop

    // 0x800D9D44: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x800D9D48: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D4C: nop

    // 0x800D9D50: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D9D54: nop

    // 0x800D9D58: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800D9D5C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x800D9D60: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D64: nop

    // 0x800D9D68: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800D9D6C: nop

    // 0x800D9D70: bne         $t2, $zero, L_800D9D98
    if (ctx->r10 != 0) {
        // 0x800D9D74: nop
    
            goto L_800D9D98;
    }
    // 0x800D9D74: nop

    // 0x800D9D78: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D7C: nop

    // 0x800D9D80: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
    // 0x800D9D84: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D9D88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D9D8C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9D90: nop

    // 0x800D9D94: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_800D9D98:
    // 0x800D9D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9DA0: jal         0x80028FA0
    // 0x800D9DA4: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800D9DA4: nop

    after_4:
    // 0x800D9DA8: beq         $v0, $zero, L_800D9E0C
    if (ctx->r2 == 0) {
        // 0x800D9DAC: nop
    
            goto L_800D9E0C;
    }
    // 0x800D9DAC: nop

    // 0x800D9DB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9DB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9DB8: jal         0x80029B60
    // 0x800D9DBC: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800D9DBC: nop

    after_5:
    // 0x800D9DC0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9DC4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800D9DC8: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x800D9DCC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9DD0: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x800D9DD4: sh          $t7, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r15;
    // 0x800D9DD8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9DDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D9DE0: lh          $t8, 0xB6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XB6);
    // 0x800D9DE4: nop

    // 0x800D9DE8: bne         $t8, $at, L_800D9E00
    if (ctx->r24 != ctx->r1) {
        // 0x800D9DEC: nop
    
            goto L_800D9E00;
    }
    // 0x800D9DEC: nop

    // 0x800D9DF0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9DF4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800D9DF8: b           L_800D9E0C
    // 0x800D9DFC: sh          $t1, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r9;
        goto L_800D9E0C;
    // 0x800D9DFC: sh          $t1, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r9;
L_800D9E00:
    // 0x800D9E00: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E04: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800D9E08: sh          $t3, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r11;
L_800D9E0C:
    // 0x800D9E0C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E10: nop

    // 0x800D9E14: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x800D9E18: nop

    // 0x800D9E1C: bne         $t6, $zero, L_800D9F40
    if (ctx->r14 != 0) {
        // 0x800D9E20: nop
    
            goto L_800D9F40;
    }
    // 0x800D9E20: nop

    // 0x800D9E24: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D9E28: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800D9E2C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E30: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800D9E34: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800D9E38: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800D9E3C: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800D9E40: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800D9E44: jal         0x80015634
    // 0x800D9E48: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_6;
    // 0x800D9E48: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_6:
    // 0x800D9E4C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800D9E50: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E54: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D9E58: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800D9E5C: jal         0x800157EC
    // 0x800D9E60: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_7;
    // 0x800D9E60: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
    // 0x800D9E64: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E68: nop

    // 0x800D9E6C: sh          $v0, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r2;
    // 0x800D9E70: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E74: nop

    // 0x800D9E78: lh          $t2, 0xB6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB6);
    // 0x800D9E7C: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D9E80: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800D9E84: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800D9E88: jal         0x80015538
    // 0x800D9E8C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x800D9E8C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_8:
    // 0x800D9E90: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9E94: nop

    // 0x800D9E98: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800D9E9C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800D9EA0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800D9EA4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9EA8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800D9EAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D9EB0: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800D9EB4: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800D9EB8: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800D9EBC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800D9EC0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800D9EC4: sub.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x800D9EC8: jal         0x800156C4
    // 0x800D9ECC: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_9;
    // 0x800D9ECC: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_9:
    // 0x800D9ED0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800D9ED4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D9ED8: jal         0x80015744
    // 0x800D9EDC: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_10;
    // 0x800D9EDC: nop

    after_10:
    // 0x800D9EE0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800D9EE4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9EE8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D9EEC: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x800D9EF0: jal         0x800157EC
    // 0x800D9EF4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_11;
    // 0x800D9EF4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_11:
    // 0x800D9EF8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9EFC: nop

    // 0x800D9F00: sh          $v0, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r2;
    // 0x800D9F04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9F08: nop

    // 0x800D9F0C: lh          $t8, 0xB8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XB8);
    // 0x800D9F10: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800D9F14: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800D9F18: jal         0x80015538
    // 0x800D9F1C: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x800D9F1C: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_12:
    // 0x800D9F20: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9F24: nop

    // 0x800D9F28: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
    // 0x800D9F2C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9F30: nop

    // 0x800D9F34: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800D9F38: nop

    // 0x800D9F3C: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
L_800D9F40:
    // 0x800D9F40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9F44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9F48: jal         0x80029D8C
    // 0x800D9F4C: nop

    func_80029D8C(rdram, ctx);
        goto after_13;
    // 0x800D9F4C: nop

    after_13:
    // 0x800D9F50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D9F54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D9F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9F60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D9F64: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D9F68: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9F6C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800D9F70: jal         0x80029018
    // 0x800D9F74: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_14;
    // 0x800D9F74: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x800D9F78: beq         $v0, $zero, L_800D9F8C
    if (ctx->r2 == 0) {
        // 0x800D9F7C: nop
    
            goto L_800D9F8C;
    }
    // 0x800D9F7C: nop

    // 0x800D9F80: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9F84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800D9F88: sh          $t3, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r11;
L_800D9F8C:
    // 0x800D9F8C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x800D9F90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D9F94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D9F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9FA0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800D9FA4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800D9FA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9FAC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D9FB0: jal         0x800295C0
    // 0x800D9FB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_15;
    // 0x800D9FB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x800D9FB8: beq         $v0, $zero, L_800D9FCC
    if (ctx->r2 == 0) {
        // 0x800D9FBC: nop
    
            goto L_800D9FCC;
    }
    // 0x800D9FBC: nop

    // 0x800D9FC0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D9FC4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800D9FC8: sh          $t6, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r14;
L_800D9FCC:
    // 0x800D9FCC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D9FD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D9FD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D9FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9FE0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800D9FE4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800D9FE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9FEC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800D9FF0: jal         0x800295C0
    // 0x800D9FF4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_16;
    // 0x800D9FF4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x800D9FF8: beq         $v0, $zero, L_800DA00C
    if (ctx->r2 == 0) {
        // 0x800D9FFC: nop
    
            goto L_800DA00C;
    }
    // 0x800D9FFC: nop

    // 0x800DA000: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA004: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800DA008: sh          $t7, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r15;
L_800DA00C:
    // 0x800DA00C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA010: nop

    // 0x800DA014: lh          $t8, 0xAC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAC);
    // 0x800DA018: nop

    // 0x800DA01C: beq         $t8, $zero, L_800DA10C
    if (ctx->r24 == 0) {
        // 0x800DA020: nop
    
            goto L_800DA10C;
    }
    // 0x800DA020: nop

    // 0x800DA024: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DA028: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA02C: nop

    // 0x800DA030: swc1        $f6, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f6.u32l;
    // 0x800DA034: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA038: nop

    // 0x800DA03C: lwc1        $f8, 0x48($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X48);
    // 0x800DA040: nop

    // 0x800DA044: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x800DA048: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DA04C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA050: nop

    // 0x800DA054: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x800DA058: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA05C: nop

    // 0x800DA060: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800DA064: nop

    // 0x800DA068: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800DA06C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA070: nop

    // 0x800DA074: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800DA078: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA07C: nop

    // 0x800DA080: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x800DA084: nop

    // 0x800DA088: sh          $t7, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r15;
    // 0x800DA08C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA090: nop

    // 0x800DA094: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
    // 0x800DA098: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA09C: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x800DA0A0: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x800DA0A4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA0A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800DA0AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800DA0B0: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800DA0B4: jal         0x80015538
    // 0x800DA0B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x800DA0B8: nop

    after_17:
    // 0x800DA0BC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA0C0: nop

    // 0x800DA0C4: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x800DA0C8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA0CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800DA0D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800DA0D4: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x800DA0D8: jal         0x80015538
    // 0x800DA0DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x800DA0DC: nop

    after_18:
    // 0x800DA0E0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA0E4: nop

    // 0x800DA0E8: swc1        $f0, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f0.u32l;
    // 0x800DA0EC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA0F0: nop

    // 0x800DA0F4: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800DA0F8: jal         0x80015744
    // 0x800DA0FC: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_19;
    // 0x800DA0FC: nop

    after_19:
    // 0x800DA100: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DA104: nop

    // 0x800DA108: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
L_800DA10C:
    // 0x800DA10C: b           L_800DA114
    // 0x800DA110: nop

        goto L_800DA114;
    // 0x800DA110: nop

L_800DA114:
    // 0x800DA114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DA118: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DA11C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DA120: jr          $ra
    // 0x800DA124: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800DA124: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800972D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800972D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800972D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800972D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800972DC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800972E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800972E4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800972E8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800972EC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800972F0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800972F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800972F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800972FC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80097300: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80097304: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80097308: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009730C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80097310: addiu       $a1, $a1, 0x3640
    ctx->r5 = ADD32(ctx->r5, 0X3640);
    // 0x80097314: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80097318: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009731C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80097320: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80097324: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80097328: jal         0x80027464
    // 0x8009732C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009732C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80097330: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80097334: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80097338: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009733C: beq         $t1, $at, L_80097374
    if (ctx->r9 == ctx->r1) {
        // 0x80097340: nop
    
            goto L_80097374;
    }
    // 0x80097340: nop

    // 0x80097344: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80097348: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009734C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80097350: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80097354: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80097358: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009735C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80097360: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80097364: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80097368: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009736C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80097370: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_80097374:
    // 0x80097374: b           L_8009737C
    // 0x80097378: nop

        goto L_8009737C;
    // 0x80097378: nop

L_8009737C:
    // 0x8009737C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80097384: jr          $ra
    // 0x80097388: nop

    return;
    // 0x80097388: nop

;}
RECOMP_FUNC void func_800C3A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3A00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C3A04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C3A08: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C3A0C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C3A10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3A14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3A18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3A1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3A20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3A24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3A2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3A30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3A34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3A38: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C3A3C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C3A40: nop

    // 0x800C3A44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3A48: nop

    // 0x800C3A4C: bne         $t1, $zero, L_800C3ADC
    if (ctx->r9 != 0) {
        // 0x800C3A50: nop
    
            goto L_800C3ADC;
    }
    // 0x800C3A50: nop

    // 0x800C3A54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C3A58: nop

    // 0x800C3A5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C3A60: nop

    // 0x800C3A64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C3A68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C3A6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3A70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C3A74: nop

    // 0x800C3A78: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800C3A7C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C3A80: nop

    // 0x800C3A84: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C3A88: nop

    // 0x800C3A8C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800C3A90: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C3A94: nop

    // 0x800C3A98: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800C3A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3AA0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800C3AA4: addiu       $t8, $t8, -0x7EF8
    ctx->r24 = ADD32(ctx->r24, -0X7EF8);
    // 0x800C3AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3AAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C3AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3AB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C3AB8: jal         0x8001C0EC
    // 0x800C3ABC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C3ABC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C3AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3AC8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C3ACC: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C3AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3AD4: jal         0x8001ABF4
    // 0x800C3AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C3AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800C3ADC:
    // 0x800C3ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3AE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3AE4: jal         0x8002A2EC
    // 0x800C3AE8: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x800C3AE8: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_2:
    // 0x800C3AEC: beq         $v0, $zero, L_800C3BF4
    if (ctx->r2 == 0) {
        // 0x800C3AF0: nop
    
            goto L_800C3BF4;
    }
    // 0x800C3AF0: nop

    // 0x800C3AF4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C3AF8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C3AFC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C3B00: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C3B04: nop

    // 0x800C3B08: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800C3B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3B10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3B14: jal         0x8002A46C
    // 0x800C3B18: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800C3B18: nop

    after_3:
    // 0x800C3B1C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800C3B20: nop

    // 0x800C3B24: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800C3B28: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C3B2C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C3B30: nop

    // 0x800C3B34: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C3B38: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800C3B3C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800C3B40: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x800C3B44: nop

    // 0x800C3B48: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800C3B4C: nop

    // 0x800C3B50: slti        $at, $t2, 0x2D
    ctx->r1 = SIGNED(ctx->r10) < 0X2D ? 1 : 0;
    // 0x800C3B54: beq         $at, $zero, L_800C3B6C
    if (ctx->r1 == 0) {
        // 0x800C3B58: nop
    
            goto L_800C3B6C;
    }
    // 0x800C3B58: nop

    // 0x800C3B5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C3B60: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C3B64: b           L_800C3BF4
    // 0x800C3B68: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
        goto L_800C3BF4;
    // 0x800C3B68: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
L_800C3B6C:
    // 0x800C3B6C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800C3B70: nop

    // 0x800C3B74: slti        $at, $t6, 0x87
    ctx->r1 = SIGNED(ctx->r14) < 0X87 ? 1 : 0;
    // 0x800C3B78: beq         $at, $zero, L_800C3B94
    if (ctx->r1 == 0) {
        // 0x800C3B7C: nop
    
            goto L_800C3B94;
    }
    // 0x800C3B7C: nop

    // 0x800C3B80: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800C3B84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C3B88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C3B8C: b           L_800C3BF4
    // 0x800C3B90: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
        goto L_800C3BF4;
    // 0x800C3B90: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
L_800C3B94:
    // 0x800C3B94: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C3B98: nop

    // 0x800C3B9C: slti        $at, $t8, 0xE1
    ctx->r1 = SIGNED(ctx->r24) < 0XE1 ? 1 : 0;
    // 0x800C3BA0: beq         $at, $zero, L_800C3BBC
    if (ctx->r1 == 0) {
        // 0x800C3BA4: nop
    
            goto L_800C3BBC;
    }
    // 0x800C3BA4: nop

    // 0x800C3BA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C3BAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C3BB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C3BB4: b           L_800C3BF4
    // 0x800C3BB8: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
        goto L_800C3BF4;
    // 0x800C3BB8: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
L_800C3BBC:
    // 0x800C3BBC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800C3BC0: nop

    // 0x800C3BC4: slti        $at, $t0, 0x13B
    ctx->r1 = SIGNED(ctx->r8) < 0X13B ? 1 : 0;
    // 0x800C3BC8: beq         $at, $zero, L_800C3BE4
    if (ctx->r1 == 0) {
        // 0x800C3BCC: nop
    
            goto L_800C3BE4;
    }
    // 0x800C3BCC: nop

    // 0x800C3BD0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800C3BD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C3BD8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C3BDC: b           L_800C3BF4
    // 0x800C3BE0: swc1        $f18, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f18.u32l;
        goto L_800C3BF4;
    // 0x800C3BE0: swc1        $f18, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f18.u32l;
L_800C3BE4:
    // 0x800C3BE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3BE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C3BEC: nop

    // 0x800C3BF0: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
L_800C3BF4:
    // 0x800C3BF4: b           L_800C3BFC
    // 0x800C3BF8: nop

        goto L_800C3BFC;
    // 0x800C3BF8: nop

L_800C3BFC:
    // 0x800C3BFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C3C00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C3C04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C3C08: jr          $ra
    // 0x800C3C0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C3C0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FA54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA54C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800FA550: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FA554: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FA558: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800FA55C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA560: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA564: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FA568: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA56C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA578: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA57C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FA580: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FA584: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800FA588: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800FA58C: nop

    // 0x800FA590: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800FA594: nop

    // 0x800FA598: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800FA59C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800FA5A0: nop

    // 0x800FA5A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FA5A8: nop

    // 0x800FA5AC: bne         $t3, $zero, L_800FA678
    if (ctx->r11 != 0) {
        // 0x800FA5B0: nop
    
            goto L_800FA678;
    }
    // 0x800FA5B0: nop

    // 0x800FA5B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800FA5B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FA5BC: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800FA5C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800FA5C4: nop

    // 0x800FA5C8: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x800FA5CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800FA5D0: addiu       $t7, $t7, -0x456C
    ctx->r15 = ADD32(ctx->r15, -0X456C);
    // 0x800FA5D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FA5D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800FA5DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FA5E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FA5E4: jal         0x8001C0EC
    // 0x800FA5E8: addiu       $a3, $zero, 0xC1
    ctx->r7 = ADD32(0, 0XC1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800FA5E8: addiu       $a3, $zero, 0xC1
    ctx->r7 = ADD32(0, 0XC1);
    after_0:
    // 0x800FA5EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FA5F0: jal         0x8001BBDC
    // 0x800FA5F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800FA5F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800FA5F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FA5FC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA600: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA608: jal         0x8001ABF4
    // 0x800FA60C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800FA60C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800FA610: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA614: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA618: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800FA61C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800FA620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FA624: jal         0x8001ABF4
    // 0x800FA628: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800FA628: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x800FA62C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800FA630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FA634: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800FA638: nop

    // 0x800FA63C: swc1        $f4, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f4.u32l;
    // 0x800FA640: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800FA644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FA648: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800FA64C: nop

    // 0x800FA650: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
    // 0x800FA654: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FA658: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800FA65C: nop

    // 0x800FA660: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x800FA664: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800FA668: nop

    // 0x800FA66C: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x800FA670: nop

    // 0x800FA674: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
L_800FA678:
    // 0x800FA678: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FA67C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800FA680: nop

    // 0x800FA684: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x800FA688: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800FA68C: nop

    // 0x800FA690: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800FA694: nop

    // 0x800FA698: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800FA69C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800FA6A0: nop

    // 0x800FA6A4: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x800FA6A8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800FA6AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FA6B0: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x800FA6B4: nop

    // 0x800FA6B8: bne         $t6, $at, L_800FA714
    if (ctx->r14 != ctx->r1) {
        // 0x800FA6BC: nop
    
            goto L_800FA714;
    }
    // 0x800FA6BC: nop

    // 0x800FA6C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800FA6C4: nop

    // 0x800FA6C8: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800FA6CC: nop

    // 0x800FA6D0: beq         $t8, $zero, L_800FA6F0
    if (ctx->r24 == 0) {
        // 0x800FA6D4: nop
    
            goto L_800FA6F0;
    }
    // 0x800FA6D4: nop

    // 0x800FA6D8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800FA6DC: nop

    // 0x800FA6E0: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800FA6E4: nop

    // 0x800FA6E8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FA6EC: sh          $t1, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r9;
L_800FA6F0:
    // 0x800FA6F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800FA6F4: nop

    // 0x800FA6F8: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x800FA6FC: nop

    // 0x800FA700: bne         $t3, $zero, L_800FA714
    if (ctx->r11 != 0) {
        // 0x800FA704: nop
    
            goto L_800FA714;
    }
    // 0x800FA704: nop

    // 0x800FA708: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800FA70C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FA710: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
L_800FA714:
    // 0x800FA714: b           L_800FA71C
    // 0x800FA718: nop

        goto L_800FA71C;
    // 0x800FA718: nop

L_800FA71C:
    // 0x800FA71C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FA720: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800FA724: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FA728: jr          $ra
    // 0x800FA72C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800FA72C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E8AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8AAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8AB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8ADC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8AE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8AE4: nop

    // 0x800E8AE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8AEC: nop

    // 0x800E8AF0: bne         $t1, $zero, L_800E8B58
    if (ctx->r9 != 0) {
        // 0x800E8AF4: nop
    
            goto L_800E8B58;
    }
    // 0x800E8AF4: nop

    // 0x800E8AF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8AFC: nop

    // 0x800E8B00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E8B04: nop

    // 0x800E8B08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8B0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8B10: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8B14: nop

    // 0x800E8B18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8B1C: nop

    // 0x800E8B20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E8B24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8B28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E8B2C: nop

    // 0x800E8B30: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800E8B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8B38: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E8B3C: addiu       $t8, $t8, -0x6730
    ctx->r24 = ADD32(ctx->r24, -0X6730);
    // 0x800E8B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8B44: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E8B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8B4C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E8B50: jal         0x8001C0EC
    // 0x800E8B54: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E8B54: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
L_800E8B58:
    // 0x800E8B58: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E8B5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E8B60: lwc1        $f8, 0x5510($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5510);
    // 0x800E8B64: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800E8B68: nop

    // 0x800E8B6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800E8B70: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x800E8B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8B7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E8B80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E8B84: jal         0x8002A0D0
    // 0x800E8B88: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_1;
    // 0x800E8B88: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    after_1:
    // 0x800E8B8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E8B90: bne         $v0, $at, L_800E8BB0
    if (ctx->r2 != ctx->r1) {
        // 0x800E8B94: nop
    
            goto L_800E8BB0;
    }
    // 0x800E8B94: nop

    // 0x800E8B98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E8B9C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x800E8BA0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E8BA4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E8BA8: nop

    // 0x800E8BAC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E8BB0:
    // 0x800E8BB0: b           L_800E8BB8
    // 0x800E8BB4: nop

        goto L_800E8BB8;
    // 0x800E8BB4: nop

L_800E8BB8:
    // 0x800E8BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8BC0: jr          $ra
    // 0x800E8BC4: nop

    return;
    // 0x800E8BC4: nop

;}
RECOMP_FUNC void func_800F387C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F387C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F3880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F3884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F388C: jal         0x8002B0E4
    // 0x800F3890: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800F3890: nop

    after_0:
    // 0x800F3894: b           L_800F389C
    // 0x800F3898: nop

        goto L_800F389C;
    // 0x800F3898: nop

L_800F389C:
    // 0x800F389C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F38A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F38A4: jr          $ra
    // 0x800F38A8: nop

    return;
    // 0x800F38A8: nop

;}
RECOMP_FUNC void func_800FBB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBB4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FBB50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FBB54: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FBB58: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FBB5C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FBB60: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800FBB64: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800FBB68: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FBB6C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800FBB70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FBB74: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800FBB78: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800FBB7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FBB80: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800FBB84: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FBB88: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FBB8C: addiu       $a1, $a1, 0x3694
    ctx->r5 = ADD32(ctx->r5, 0X3694);
    // 0x800FBB90: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FBB94: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800FBB98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FBB9C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FBBA0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FBBA4: jal         0x80027464
    // 0x800FBBA8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FBBA8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800FBBAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FBBB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FBBB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FBBB8: beq         $t1, $at, L_800FBC28
    if (ctx->r9 == ctx->r1) {
        // 0x800FBBBC: nop
    
            goto L_800FBC28;
    }
    // 0x800FBBBC: nop

    // 0x800FBBC0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FBBC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBBC8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800FBBCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FBBD0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800FBBD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FBBD8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800FBBDC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800FBBE0: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x800FBBE4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800FBBE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FBBEC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800FBBF0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800FBBF4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800FBBF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FBBFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FBC00: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800FBC04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FBC08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBC0C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800FBC10: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800FBC14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800FBC18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FBC1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800FBC20: jal         0x800193CC
    // 0x800FBC24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800193CC(rdram, ctx);
        goto after_1;
    // 0x800FBC24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_800FBC28:
    // 0x800FBC28: b           L_800FBC30
    // 0x800FBC2C: nop

        goto L_800FBC30;
    // 0x800FBC2C: nop

L_800FBC30:
    // 0x800FBC30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBC34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FBC38: jr          $ra
    // 0x800FBC3C: nop

    return;
    // 0x800FBC3C: nop

;}
RECOMP_FUNC void func_8006B9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B9FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006BA00: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006BA04: nop

    // 0x8006BA08: bne         $t6, $zero, L_8006BA1C
    if (ctx->r14 != 0) {
        // 0x8006BA0C: nop
    
            goto L_8006BA1C;
    }
    // 0x8006BA0C: nop

    // 0x8006BA10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006BA14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BA18: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
L_8006BA1C:
    // 0x8006BA1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006BA20: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8006BA24: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006BA28: jal         0x80017BEC
    // 0x8006BA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006BA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006BA30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006BA34: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8006BA38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006BA3C: jal         0x80017CFC
    // 0x8006BA40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017CFC(rdram, ctx);
        goto after_1;
    // 0x8006BA40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8006BA44: b           L_8006BA4C
    // 0x8006BA48: nop

        goto L_8006BA4C;
    // 0x8006BA48: nop

L_8006BA4C:
    // 0x8006BA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BA50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006BA54: jr          $ra
    // 0x8006BA58: nop

    return;
    // 0x8006BA58: nop

;}
