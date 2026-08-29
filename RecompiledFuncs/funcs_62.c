#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803302BC_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803302C0: sb          $zero, 0x63C4($at)
    MEM_B(0X63C4, ctx->r1) = 0;
    // 0x803302C4: jr          $ra
    // 0x803302C8: nop

    return;
    // 0x803302C8: nop

    // 0x803302CC: jr          $ra
    // 0x803302D0: nop

    return;
    // 0x803302D0: nop

;}
RECOMP_FUNC void func_80334BE0_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334BE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334BE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334BE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80334BEC: jal         0x80062EAC
    // 0x80334BF0: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80334BF0: nop

    after_0:
    // 0x80334BF4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80334BF8: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80334BFC: lh          $t6, 0x4990($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4990);
    // 0x80334C00: nop

    // 0x80334C04: bne         $t6, $zero, L_80334E34
    if (ctx->r14 != 0) {
        // 0x80334C08: nop
    
            goto L_80334E34;
    }
    // 0x80334C08: nop

    // 0x80334C0C: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80334C10: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80334C14: nop

    // 0x80334C18: bne         $t7, $zero, L_80334E34
    if (ctx->r15 != 0) {
        // 0x80334C1C: nop
    
            goto L_80334E34;
    }
    // 0x80334C1C: nop

    // 0x80334C20: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80334C24: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80334C28: beq         $t8, $at, L_80334C3C
    if (ctx->r24 == ctx->r1) {
        // 0x80334C2C: nop
    
            goto L_80334C3C;
    }
    // 0x80334C2C: nop

    // 0x80334C30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334C34: bne         $t8, $at, L_80334C4C
    if (ctx->r24 != ctx->r1) {
        // 0x80334C38: nop
    
            goto L_80334C4C;
    }
    // 0x80334C38: nop

L_80334C3C:
    // 0x80334C3C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80334C40: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334C44: b           L_80334D70
    // 0x80334C48: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
        goto L_80334D70;
    // 0x80334C48: sh          $t9, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r25;
L_80334C4C:
    // 0x80334C4C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80334C50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334C54: beq         $t0, $at, L_80334C68
    if (ctx->r8 == ctx->r1) {
        // 0x80334C58: nop
    
            goto L_80334C68;
    }
    // 0x80334C58: nop

    // 0x80334C5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334C60: bne         $t0, $at, L_80334C78
    if (ctx->r8 != ctx->r1) {
        // 0x80334C64: nop
    
            goto L_80334C78;
    }
    // 0x80334C64: nop

L_80334C68:
    // 0x80334C68: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80334C6C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334C70: b           L_80334D70
    // 0x80334C74: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
        goto L_80334D70;
    // 0x80334C74: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
L_80334C78:
    // 0x80334C78: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80334C7C: addiu       $t2, $t2, -0x1D50
    ctx->r10 = ADD32(ctx->r10, -0X1D50);
    // 0x80334C80: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80334C84: nop

    // 0x80334C88: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80334C8C: beq         $t4, $zero, L_80334D28
    if (ctx->r12 == 0) {
        // 0x80334C90: nop
    
            goto L_80334D28;
    }
    // 0x80334C90: nop

    // 0x80334C94: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80334C98: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80334C9C: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80334CA0: lb          $t5, 0x6361($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X6361);
    // 0x80334CA4: nop

    // 0x80334CA8: bne         $t5, $t6, L_80334CCC
    if (ctx->r13 != ctx->r14) {
        // 0x80334CAC: nop
    
            goto L_80334CCC;
    }
    // 0x80334CAC: nop

    // 0x80334CB0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80334CB4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334CB8: sh          $t7, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r15;
    // 0x80334CBC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80334CC0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334CC4: b           L_80334D20
    // 0x80334CC8: sh          $t8, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r24;
        goto L_80334D20;
    // 0x80334CC8: sh          $t8, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r24;
L_80334CCC:
    // 0x80334CCC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80334CD0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80334CD4: lb          $t0, 0x4801($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4801);
    // 0x80334CD8: lb          $t9, 0x6361($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X6361);
    // 0x80334CDC: nop

    // 0x80334CE0: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80334CE4: beq         $at, $zero, L_80334D08
    if (ctx->r1 == 0) {
        // 0x80334CE8: nop
    
            goto L_80334D08;
    }
    // 0x80334CE8: nop

    // 0x80334CEC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80334CF0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334CF4: sh          $t1, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r9;
    // 0x80334CF8: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80334CFC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334D00: b           L_80334D20
    // 0x80334D04: sh          $t2, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r10;
        goto L_80334D20;
    // 0x80334D04: sh          $t2, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r10;
L_80334D08:
    // 0x80334D08: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80334D0C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334D10: sh          $t3, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r11;
    // 0x80334D14: addiu       $t4, $zero, 0x46
    ctx->r12 = ADD32(0, 0X46);
    // 0x80334D18: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334D1C: sh          $t4, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r12;
L_80334D20:
    // 0x80334D20: b           L_80334D70
    // 0x80334D24: nop

        goto L_80334D70;
    // 0x80334D24: nop

L_80334D28:
    // 0x80334D28: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80334D2C: addiu       $t5, $t5, -0x1D50
    ctx->r13 = ADD32(ctx->r13, -0X1D50);
    // 0x80334D30: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80334D34: nop

    // 0x80334D38: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80334D3C: beq         $t7, $zero, L_80334D70
    if (ctx->r15 == 0) {
        // 0x80334D40: nop
    
            goto L_80334D70;
    }
    // 0x80334D40: nop

    // 0x80334D44: jal         0x80330000
    // 0x80334D48: nop

    SetGamePaused(rdram, ctx);
        goto after_1;
    // 0x80334D48: nop

    after_1:
    // 0x80334D4C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80334D50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80334D54: sb          $t8, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r24;
    // 0x80334D58: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80334D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334D60: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80334D64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334D68: jal         0x800178D4
    // 0x80334D6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80334D6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80334D70:
    // 0x80334D70: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80334D74: lh          $t9, 0x4990($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4990);
    // 0x80334D78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334D7C: beq         $t9, $at, L_80334D90
    if (ctx->r25 == ctx->r1) {
        // 0x80334D80: nop
    
            goto L_80334D90;
    }
    // 0x80334D80: nop

    // 0x80334D84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334D88: bne         $t9, $at, L_80334E34
    if (ctx->r25 != ctx->r1) {
        // 0x80334D8C: nop
    
            goto L_80334E34;
    }
    // 0x80334D8C: nop

L_80334D90:
    // 0x80334D90: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80334D94: lh          $t0, 0x4992($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4992);
    // 0x80334D98: nop

    // 0x80334D9C: bne         $t0, $zero, L_80334E34
    if (ctx->r8 != 0) {
        // 0x80334DA0: nop
    
            goto L_80334E34;
    }
    // 0x80334DA0: nop

    // 0x80334DA4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80334DA8: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80334DAC: lh          $t2, 0x4990($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4990);
    // 0x80334DB0: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80334DB4: nop

    // 0x80334DB8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80334DBC: bltz        $t3, L_80334E04
    if (SIGNED(ctx->r11) < 0) {
        // 0x80334DC0: nop
    
            goto L_80334E04;
    }
    // 0x80334DC0: nop

    // 0x80334DC4: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80334DC8: lb          $t4, 0x6360($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X6360);
    // 0x80334DCC: nop

    // 0x80334DD0: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80334DD4: beq         $at, $zero, L_80334E04
    if (ctx->r1 == 0) {
        // 0x80334DD8: nop
    
            goto L_80334E04;
    }
    // 0x80334DD8: nop

    // 0x80334DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80334DE0: jal         0x800600B8
    // 0x80334DE4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_800600B8(rdram, ctx);
        goto after_3;
    // 0x80334DE4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_3:
    // 0x80334DE8: bne         $v0, $zero, L_80334E10
    if (ctx->r2 != 0) {
        // 0x80334DEC: nop
    
            goto L_80334E10;
    }
    // 0x80334DEC: nop

    // 0x80334DF0: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x80334DF4: lh          $t5, 0x4990($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4990);
    // 0x80334DF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334DFC: bne         $t5, $at, L_80334E10
    if (ctx->r13 != ctx->r1) {
        // 0x80334E00: nop
    
            goto L_80334E10;
    }
    // 0x80334E00: nop

L_80334E04:
    // 0x80334E04: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334E08: b           L_80334E34
    // 0x80334E0C: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
        goto L_80334E34;
    // 0x80334E0C: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
L_80334E10:
    // 0x80334E10: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80334E14: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334E18: sh          $t6, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r14;
    // 0x80334E1C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80334E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334E24: addiu       $a2, $zero, 0x6F
    ctx->r6 = ADD32(0, 0X6F);
    // 0x80334E28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334E2C: jal         0x800178D4
    // 0x80334E30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80334E30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80334E34:
    // 0x80334E34: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80334E38: lh          $t7, 0x4992($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4992);
    // 0x80334E3C: nop

    // 0x80334E40: beq         $t7, $zero, L_80334FB0
    if (ctx->r15 == 0) {
        // 0x80334E44: nop
    
            goto L_80334FB0;
    }
    // 0x80334E44: nop

    // 0x80334E48: lui         $s0, 0x8032
    ctx->r16 = S32(0X8032 << 16);
    // 0x80334E4C: lh          $s0, 0x4990($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4990);
    // 0x80334E50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334E54: beq         $s0, $at, L_80334E88
    if (ctx->r16 == ctx->r1) {
        // 0x80334E58: nop
    
            goto L_80334E88;
    }
    // 0x80334E58: nop

    // 0x80334E5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334E60: beq         $s0, $at, L_80334E88
    if (ctx->r16 == ctx->r1) {
        // 0x80334E64: nop
    
            goto L_80334E88;
    }
    // 0x80334E64: nop

    // 0x80334E68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334E6C: beq         $s0, $at, L_80334EF4
    if (ctx->r16 == ctx->r1) {
        // 0x80334E70: nop
    
            goto L_80334EF4;
    }
    // 0x80334E70: nop

    // 0x80334E74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334E78: beq         $s0, $at, L_80334F60
    if (ctx->r16 == ctx->r1) {
        // 0x80334E7C: nop
    
            goto L_80334F60;
    }
    // 0x80334E7C: nop

    // 0x80334E80: b           L_80334FB0
    // 0x80334E84: nop

        goto L_80334FB0;
    // 0x80334E84: nop

L_80334E88:
    // 0x80334E88: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80334E8C: lh          $a0, 0x4990($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4990);
    // 0x80334E90: jal         0x803308C4
    // 0x80334E94: nop

    func_803308C4_unk_bin_2(rdram, ctx);
        goto after_5;
    // 0x80334E94: nop

    after_5:
    // 0x80334E98: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80334E9C: lh          $t8, 0x4992($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4992);
    // 0x80334EA0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334EA4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80334EA8: sh          $t9, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r25;
    // 0x80334EAC: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80334EB0: lh          $t0, 0x4992($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4992);
    // 0x80334EB4: nop

    // 0x80334EB8: bne         $t0, $zero, L_80334EEC
    if (ctx->r8 != 0) {
        // 0x80334EBC: nop
    
            goto L_80334EEC;
    }
    // 0x80334EBC: nop

    // 0x80334EC0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80334EC4: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80334EC8: lh          $t3, 0x4990($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4990);
    // 0x80334ECC: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x80334ED0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80334ED4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80334ED8: sb          $t4, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = ctx->r12;
    // 0x80334EDC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334EE0: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x80334EE4: jal         0x803303BC
    // 0x80334EE8: nop

    func_803303BC_unk_bin_2(rdram, ctx);
        goto after_6;
    // 0x80334EE8: nop

    after_6:
L_80334EEC:
    // 0x80334EEC: b           L_80334FB0
    // 0x80334EF0: nop

        goto L_80334FB0;
    // 0x80334EF0: nop

L_80334EF4:
    // 0x80334EF4: jal         0x80331920
    // 0x80334EF8: nop

    func_80331920_unk_bin_2(rdram, ctx);
        goto after_7;
    // 0x80334EF8: nop

    after_7:
    // 0x80334EFC: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x80334F00: lh          $t1, 0x4992($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4992);
    // 0x80334F04: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334F08: addiu       $t5, $t1, -0x1
    ctx->r13 = ADD32(ctx->r9, -0X1);
    // 0x80334F0C: sh          $t5, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r13;
    // 0x80334F10: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80334F14: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80334F18: nop

    // 0x80334F1C: bne         $t6, $zero, L_80334F58
    if (ctx->r14 != 0) {
        // 0x80334F20: nop
    
            goto L_80334F58;
    }
    // 0x80334F20: nop

    // 0x80334F24: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334F28: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x80334F2C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80334F30: lb          $t7, 0x4800($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4800);
    // 0x80334F34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80334F38: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80334F3C: sb          $t8, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r24;
    // 0x80334F40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80334F44: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x80334F48: jal         0x80332094
    // 0x80334F4C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80332094_unk_bin_2(rdram, ctx);
        goto after_8;
    // 0x80334F4C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_8:
    // 0x80334F50: b           L_80334FC0
    // 0x80334F54: nop

        goto L_80334FC0;
    // 0x80334F54: nop

L_80334F58:
    // 0x80334F58: b           L_80334FB0
    // 0x80334F5C: nop

        goto L_80334FB0;
    // 0x80334F5C: nop

L_80334F60:
    // 0x80334F60: jal         0x80331B9C
    // 0x80334F64: nop

    func_80331B9C_unk_bin_2(rdram, ctx);
        goto after_9;
    // 0x80334F64: nop

    after_9:
    // 0x80334F68: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80334F6C: lh          $t9, 0x4992($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4992);
    // 0x80334F70: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334F74: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80334F78: sh          $t0, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r8;
    // 0x80334F7C: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80334F80: lh          $t2, 0x4992($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4992);
    // 0x80334F84: nop

    // 0x80334F88: bne         $t2, $zero, L_80334FA8
    if (ctx->r10 != 0) {
        // 0x80334F8C: nop
    
            goto L_80334FA8;
    }
    // 0x80334F8C: nop

    // 0x80334F90: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80334F94: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334F98: sh          $t3, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = ctx->r11;
    // 0x80334F9C: addiu       $t4, $zero, 0x46
    ctx->r12 = ADD32(0, 0X46);
    // 0x80334FA0: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80334FA4: sh          $t4, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = ctx->r12;
L_80334FA8:
    // 0x80334FA8: b           L_80334FB0
    // 0x80334FAC: nop

        goto L_80334FB0;
    // 0x80334FAC: nop

L_80334FB0:
    // 0x80334FB0: jal         0x80330E04
    // 0x80334FB4: nop

    func_80330E04_unk_bin_2(rdram, ctx);
        goto after_10;
    // 0x80334FB4: nop

    after_10:
    // 0x80334FB8: b           L_80334FC0
    // 0x80334FBC: nop

        goto L_80334FC0;
    // 0x80334FBC: nop

L_80334FC0:
    // 0x80334FC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334FC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80334FC8: jr          $ra
    // 0x80334FCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80334FCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331238_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331238: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033123C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331240: nop

    // 0x80331244: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80331248: nop

    // 0x8033124C: bc1t        L_80331480
    if (c1cs) {
        // 0x80331250: nop
    
            goto L_80331480;
    }
    // 0x80331250: nop

    // 0x80331254: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80331258: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8033125C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331264: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331268: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x8033126C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331270: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331274: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331278: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033127C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331280: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331284: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331288: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033128C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80331290: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80331294: nop

    // 0x80331298: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033129C: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x803312A0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x803312A4: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x803312A8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803312AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803312B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803312B4: lw          $t4, 0x6080($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6080);
    // 0x803312B8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803312BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803312C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803312C8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312CC: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x803312D0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803312D4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803312D8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x803312DC: lwc1        $f18, 0x10($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X10);
    // 0x803312E0: nop

    // 0x803312E4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803312E8: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x803312EC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803312F0: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x803312F4: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803312F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803312FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331300: lw          $t0, 0x6080($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6080);
    // 0x80331304: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331308: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033130C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331310: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331314: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331318: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8033131C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331320: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331324: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80331328: lwc1        $f8, 0x14($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X14);
    // 0x8033132C: nop

    // 0x80331330: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80331334: swc1        $f18, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f18.u32l;
    // 0x80331338: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8033133C: lb          $t4, 0x4801($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4801);
    // 0x80331340: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331344: bne         $t4, $at, L_803313A4
    if (ctx->r12 != ctx->r1) {
        // 0x80331348: nop
    
            goto L_803313A4;
    }
    // 0x80331348: nop

    // 0x8033134C: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331350: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331354: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331358: lwc1        $f4, 0xFCC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XFCC);
    // 0x8033135C: nop

    // 0x80331360: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331364: swc1        $f8, 0xFCC($t5)
    MEM_W(0XFCC, ctx->r13) = ctx->f8.u32l;
    // 0x80331368: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8033136C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331370: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331374: lwc1        $f10, 0xFD0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XFD0);
    // 0x80331378: nop

    // 0x8033137C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80331380: swc1        $f4, 0xFD0($t6)
    MEM_W(0XFD0, ctx->r14) = ctx->f4.u32l;
    // 0x80331384: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331388: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033138C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331390: lwc1        $f6, 0xFD4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XFD4);
    // 0x80331394: nop

    // 0x80331398: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033139C: b           L_80331478
    // 0x803313A0: swc1        $f10, 0xFD4($t7)
    MEM_W(0XFD4, ctx->r15) = ctx->f10.u32l;
        goto L_80331478;
    // 0x803313A0: swc1        $f10, 0xFD4($t7)
    MEM_W(0XFD4, ctx->r15) = ctx->f10.u32l;
L_803313A4:
    // 0x803313A4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803313A8: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x803313AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803313B0: bne         $t8, $at, L_80331410
    if (ctx->r24 != ctx->r1) {
        // 0x803313B4: nop
    
            goto L_80331410;
    }
    // 0x803313B4: nop

    // 0x803313B8: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x803313BC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803313C0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803313C4: lwc1        $f18, 0x13BC($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X13BC);
    // 0x803313C8: nop

    // 0x803313CC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803313D0: swc1        $f6, 0x13BC($t9)
    MEM_W(0X13BC, ctx->r25) = ctx->f6.u32l;
    // 0x803313D4: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x803313D8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803313DC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803313E0: lwc1        $f8, 0x13C0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X13C0);
    // 0x803313E4: nop

    // 0x803313E8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803313EC: swc1        $f18, 0x13C0($t0)
    MEM_W(0X13C0, ctx->r8) = ctx->f18.u32l;
    // 0x803313F0: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x803313F4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803313F8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803313FC: lwc1        $f4, 0x13C4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X13C4);
    // 0x80331400: nop

    // 0x80331404: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331408: b           L_80331478
    // 0x8033140C: swc1        $f8, 0x13C4($t1)
    MEM_W(0X13C4, ctx->r9) = ctx->f8.u32l;
        goto L_80331478;
    // 0x8033140C: swc1        $f8, 0x13C4($t1)
    MEM_W(0X13C4, ctx->r9) = ctx->f8.u32l;
L_80331410:
    // 0x80331410: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80331414: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x80331418: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033141C: bne         $t2, $at, L_80331478
    if (ctx->r10 != ctx->r1) {
        // 0x80331420: nop
    
            goto L_80331478;
    }
    // 0x80331420: nop

    // 0x80331424: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331428: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033142C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331430: lwc1        $f10, 0x165C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X165C);
    // 0x80331434: nop

    // 0x80331438: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8033143C: swc1        $f4, 0x165C($t3)
    MEM_W(0X165C, ctx->r11) = ctx->f4.u32l;
    // 0x80331440: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331444: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331448: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033144C: lwc1        $f6, 0x1660($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1660);
    // 0x80331450: nop

    // 0x80331454: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331458: swc1        $f10, 0x1660($t4)
    MEM_W(0X1660, ctx->r12) = ctx->f10.u32l;
    // 0x8033145C: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80331460: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331464: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331468: lwc1        $f18, 0x1664($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1664);
    // 0x8033146C: nop

    // 0x80331470: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331474: swc1        $f6, 0x1664($t5)
    MEM_W(0X1664, ctx->r13) = ctx->f6.u32l;
L_80331478:
    // 0x80331478: b           L_8033160C
    // 0x8033147C: nop

        goto L_8033160C;
    // 0x8033147C: nop

L_80331480:
    // 0x80331480: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80331484: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80331488: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x8033148C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331490: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331494: lw          $t8, 0x6080($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6080);
    // 0x80331498: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8033149C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803314A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803314A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803314A8: lb          $t0, 0x4801($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4801);
    // 0x803314AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803314B0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803314B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314B8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803314BC: addiu       $t2, $t2, 0x6080
    ctx->r10 = ADD32(ctx->r10, 0X6080);
    // 0x803314C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803314C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803314C8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803314CC: swc1        $f14, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f14.u32l;
    // 0x803314D0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x803314D4: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x803314D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803314DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803314E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803314E8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803314EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803314F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803314F8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803314FC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331500: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80331504: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331508: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x8033150C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331510: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80331514: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80331518: swc1        $f16, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f16.u32l;
    // 0x8033151C: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x80331520: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331524: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331528: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033152C: lw          $t4, 0x6080($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6080);
    // 0x80331530: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331534: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331538: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033153C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331540: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331544: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331548: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033154C: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x80331550: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80331554: lb          $t7, 0x4801($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4801);
    // 0x80331558: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033155C: bne         $t7, $at, L_80331590
    if (ctx->r15 != ctx->r1) {
        // 0x80331560: nop
    
            goto L_80331590;
    }
    // 0x80331560: nop

    // 0x80331564: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331568: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033156C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331570: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331574: swc1        $f14, 0xFD4($t3)
    MEM_W(0XFD4, ctx->r11) = ctx->f14.u32l;
    // 0x80331578: lwc1        $f16, 0xFD4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XFD4);
    // 0x8033157C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331580: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331584: swc1        $f16, 0xFD0($t8)
    MEM_W(0XFD0, ctx->r24) = ctx->f16.u32l;
    // 0x80331588: b           L_8033160C
    // 0x8033158C: swc1        $f16, 0xFCC($t9)
    MEM_W(0XFCC, ctx->r25) = ctx->f16.u32l;
        goto L_8033160C;
    // 0x8033158C: swc1        $f16, 0xFCC($t9)
    MEM_W(0XFCC, ctx->r25) = ctx->f16.u32l;
L_80331590:
    // 0x80331590: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80331594: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80331598: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033159C: bne         $t6, $at, L_803315D0
    if (ctx->r14 != ctx->r1) {
        // 0x803315A0: nop
    
            goto L_803315D0;
    }
    // 0x803315A0: nop

    // 0x803315A4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803315A8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803315AC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803315B0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803315B4: swc1        $f14, 0x13C4($t0)
    MEM_W(0X13C4, ctx->r8) = ctx->f14.u32l;
    // 0x803315B8: lwc1        $f16, 0x13C4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X13C4);
    // 0x803315BC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803315C0: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803315C4: swc1        $f16, 0x13C0($t1)
    MEM_W(0X13C0, ctx->r9) = ctx->f16.u32l;
    // 0x803315C8: b           L_8033160C
    // 0x803315CC: swc1        $f16, 0x13BC($t2)
    MEM_W(0X13BC, ctx->r10) = ctx->f16.u32l;
        goto L_8033160C;
    // 0x803315CC: swc1        $f16, 0x13BC($t2)
    MEM_W(0X13BC, ctx->r10) = ctx->f16.u32l;
L_803315D0:
    // 0x803315D0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x803315D4: lb          $t4, 0x4801($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4801);
    // 0x803315D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803315DC: bne         $t4, $at, L_8033160C
    if (ctx->r12 != ctx->r1) {
        // 0x803315E0: nop
    
            goto L_8033160C;
    }
    // 0x803315E0: nop

    // 0x803315E4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803315E8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803315EC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803315F0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803315F4: swc1        $f14, 0x1664($t5)
    MEM_W(0X1664, ctx->r13) = ctx->f14.u32l;
    // 0x803315F8: lwc1        $f16, 0x1664($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1664);
    // 0x803315FC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331600: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331604: swc1        $f16, 0x1660($t7)
    MEM_W(0X1660, ctx->r15) = ctx->f16.u32l;
    // 0x80331608: swc1        $f16, 0x165C($t3)
    MEM_W(0X165C, ctx->r11) = ctx->f16.u32l;
L_8033160C:
    // 0x8033160C: b           L_80331614
    // 0x80331610: nop

        goto L_80331614;
    // 0x80331610: nop

L_80331614:
    // 0x80331614: jr          $ra
    // 0x80331618: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80331618: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80331B9C_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331BA4: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80331BA8: lh          $t6, 0x4992($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4992);
    // 0x80331BAC: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x80331BB0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80331BB4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80331BB8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80331BBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331BC0: nop

    // 0x80331BC4: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x80331BC8: nop

    // 0x80331BCC: bc1f        L_80331BDC
    if (!c1cs) {
        // 0x80331BD0: nop
    
            goto L_80331BDC;
    }
    // 0x80331BD0: nop

    // 0x80331BD4: jal         0x80331728
    // 0x80331BD8: nop

    func_80331728_unk_bin_2(rdram, ctx);
        goto after_0;
    // 0x80331BD8: nop

    after_0:
L_80331BDC:
    // 0x80331BDC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331BE0: lb          $t7, 0x6361($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X6361);
    // 0x80331BE4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331BE8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331BEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BF0: lw          $t9, 0x6080($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6080);
    // 0x80331BF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BF8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331BFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331C00: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331C04: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331C08: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331C0C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331C10: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80331C14: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C18: lwc1        $f19, 0x62B0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X62B0);
    // 0x80331C1C: lwc1        $f18, 0x62B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X62B4);
    // 0x80331C20: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331C24: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331C28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C2C: lwc1        $f7, 0x62B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X62B8);
    // 0x80331C30: lwc1        $f6, 0x62BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X62BC);
    // 0x80331C34: nop

    // 0x80331C38: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80331C3C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80331C40: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80331C44: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331C48: lb          $t1, 0x6361($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X6361);
    // 0x80331C4C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331C50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331C54: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331C58: lw          $t3, 0x6080($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6080);
    // 0x80331C5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C60: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331C64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331C78: lwc1        $f16, 0x4158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80331C7C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C80: lwc1        $f5, 0x62C0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X62C0);
    // 0x80331C84: lwc1        $f4, 0x62C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X62C4);
    // 0x80331C88: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331C8C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80331C90: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C94: lwc1        $f9, 0x62C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X62C8);
    // 0x80331C98: lwc1        $f8, 0x62CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X62CC);
    // 0x80331C9C: nop

    // 0x80331CA0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80331CA4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80331CA8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80331CAC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331CB0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331CB4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331CB8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331CBC: lwc1        $f11, 0x62D0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X62D0);
    // 0x80331CC0: lwc1        $f10, 0x62D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X62D4);
    // 0x80331CC4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331CC8: nop

    // 0x80331CCC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80331CD0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80331CD4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80331CD8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331CDC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331CE0: lwc1        $f4, 0x1A4C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1A4C);
    // 0x80331CE4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331CE8: nop

    // 0x80331CEC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331CF0: swc1        $f8, 0x1A4C($t5)
    MEM_W(0X1A4C, ctx->r13) = ctx->f8.u32l;
    // 0x80331CF4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331CF8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331CFC: lwc1        $f10, 0x1A50($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1A50);
    // 0x80331D00: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331D04: nop

    // 0x80331D08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331D0C: swc1        $f18, 0x1A50($t6)
    MEM_W(0X1A50, ctx->r14) = ctx->f18.u32l;
    // 0x80331D10: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331D14: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331D18: lwc1        $f4, 0x1A54($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1A54);
    // 0x80331D1C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331D20: nop

    // 0x80331D24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331D28: swc1        $f8, 0x1A54($t7)
    MEM_W(0X1A54, ctx->r15) = ctx->f8.u32l;
    // 0x80331D2C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D30: lwc1        $f10, 0x62D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X62D8);
    // 0x80331D34: nop

    // 0x80331D38: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80331D3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D44: lwc1        $f16, 0x1A44($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1A44);
    // 0x80331D48: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331D4C: nop

    // 0x80331D50: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331D54: swc1        $f4, 0x1A44($t8)
    MEM_W(0X1A44, ctx->r24) = ctx->f4.u32l;
    // 0x80331D58: jal         0x80330FA0
    // 0x80331D5C: nop

    func_80330FA0_unk_bin_2(rdram, ctx);
        goto after_1;
    // 0x80331D5C: nop

    after_1:
    // 0x80331D60: b           L_80331D68
    // 0x80331D64: nop

        goto L_80331D68;
    // 0x80331D64: nop

L_80331D68:
    // 0x80331D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331D6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D70: jr          $ra
    // 0x80331D74: nop

    return;
    // 0x80331D74: nop

;}
RECOMP_FUNC void func_80332094_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332094: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033209C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803320A0: jal         0x800604A8
    // 0x803320A4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800604A8(rdram, ctx);
        goto after_0;
    // 0x803320A4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x803320A8: jal         0x800604A8
    // 0x803320AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_800604A8(rdram, ctx);
        goto after_1;
    // 0x803320AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_1:
    // 0x803320B0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x803320B4: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x803320B8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803320BC: sb          $t6, 0x6361($at)
    MEM_B(0X6361, ctx->r1) = ctx->r14;
    // 0x803320C0: jal         0x803302D4
    // 0x803320C4: nop

    func_803302D4_unk_bin_2(rdram, ctx);
        goto after_2;
    // 0x803320C4: nop

    after_2:
    // 0x803320C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803320CC: lwc1        $f14, 0x62DC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X62DC);
    // 0x803320D0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x803320D4: jal         0x80331238
    // 0x803320D8: nop

    func_80331238_unk_bin_2(rdram, ctx);
        goto after_3;
    // 0x803320D8: nop

    after_3:
    // 0x803320DC: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803320E0: sh          $zero, 0x4990($at)
    MEM_H(0X4990, ctx->r1) = 0;
    // 0x803320E4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803320E8: sh          $zero, 0x4992($at)
    MEM_H(0X4992, ctx->r1) = 0;
    // 0x803320EC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x803320F0: lb          $t7, 0x4801($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4801);
    // 0x803320F4: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x803320F8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803320FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332100: lbu         $t9, 0x39D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39D4);
    // 0x80332104: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80332108: blez        $t9, L_80332900
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8033210C: nop
    
            goto L_80332900;
    }
    // 0x8033210C: nop

L_80332110:
    // 0x80332110: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80332114: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80332118: lb          $t0, 0x4801($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4801);
    // 0x8033211C: sll         $t5, $t2, 3
    ctx->r13 = S32(ctx->r10 << 3);
    // 0x80332120: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x80332124: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332128: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033212C: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x80332130: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80332134: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332138: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x8033213C: lbu         $t4, 0x39D5($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39D5);
    // 0x80332140: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80332144: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80332148: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033214C: sw          $t4, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->r12;
    // 0x80332150: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80332154: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80332158: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8033215C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332160: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332164: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332168: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8033216C: addiu       $t8, $t8, 0x4184
    ctx->r24 = ADD32(ctx->r24, 0X4184);
    // 0x80332170: jal         0x800608B8
    // 0x80332174: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_800608B8(rdram, ctx);
        goto after_4;
    // 0x80332174: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_4:
    // 0x80332178: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x8033217C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80332180: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332184: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332188: lw          $t1, 0x6128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6128);
    // 0x8033218C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332190: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332194: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332198: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033219C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803321A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803321A4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803321A8: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x803321AC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x803321B0: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x803321B4: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x803321B8: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x803321BC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x803321C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803321C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803321C8: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803321CC: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x803321D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803321D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803321D8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803321DC: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x803321E0: lw          $t7, 0x6140($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6140);
    // 0x803321E4: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x803321E8: lwc1        $f16, 0x0($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803321EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803321F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803321F4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803321F8: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x803321FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332200: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332204: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80332208: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033220C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x80332210: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x80332214: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80332218: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033221C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332220: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80332224: lw          $t1, 0x6128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6128);
    // 0x80332228: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033222C: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80332230: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x80332234: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332238: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x8033223C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332240: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332244: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x80332248: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8033224C: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80332250: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x80332254: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80332258: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8033225C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332260: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332264: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80332268: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033226C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80332270: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332278: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033227C: lw          $t2, 0x6140($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6140);
    // 0x80332280: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80332284: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332288: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x8033228C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80332290: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332294: sub.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d - ctx->f10.d;
    // 0x80332298: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033229C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x803322A0: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x803322A4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803322A8: addu        $t3, $t9, $t6
    ctx->r11 = ADD32(ctx->r25, ctx->r14);
    // 0x803322AC: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x803322B0: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x803322B4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803322B8: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x803322BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803322C0: lw          $t1, 0x6140($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6140);
    // 0x803322C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803322C8: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x803322CC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x803322D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803322D4: lwc1        $f18, 0x62E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X62E0);
    // 0x803322D8: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x803322DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803322E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803322E8: swc1        $f18, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f18.u32l;
    // 0x803322EC: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803322F0: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803322F4: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x803322F8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803322FC: lw          $t2, 0x6140($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6140);
    // 0x80332300: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332304: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80332308: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8033230C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332310: lwc1        $f4, 0x62E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X62E4);
    // 0x80332314: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80332318: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033231C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332320: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332324: swc1        $f4, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f4.u32l;
    // 0x80332328: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8033232C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332330: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80332334: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80332338: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x8033233C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332340: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80332344: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80332348: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033234C: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80332350: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332354: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80332358: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x8033235C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80332360: lwc1        $f6, 0xC($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80332364: lui         $at, 0x4047
    ctx->r1 = S32(0X4047 << 16);
    // 0x80332368: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033236C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80332370: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332374: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332378: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x8033237C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80332380: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80332384: mul.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80332388: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033238C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332390: lw          $t2, 0x6158($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6158);
    // 0x80332394: addu        $t4, $t8, $t1
    ctx->r12 = ADD32(ctx->r24, ctx->r9);
    // 0x80332398: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033239C: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x803323A0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x803323A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803323A8: sub.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d - ctx->f16.d;
    // 0x803323AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803323B0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x803323B4: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x803323B8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803323BC: addu        $t6, $t9, $t1
    ctx->r14 = ADD32(ctx->r25, ctx->r9);
    // 0x803323C0: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x803323C4: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x803323C8: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803323CC: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x803323D0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x803323D4: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x803323D8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803323DC: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803323E0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803323E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803323E8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803323EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803323F0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803323F4: addu        $t3, $t8, $t4
    ctx->r11 = ADD32(ctx->r24, ctx->r12);
    // 0x803323F8: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x803323FC: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80332400: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x80332404: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80332408: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8033240C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332410: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332414: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80332418: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8033241C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x80332420: mul.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80332424: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332428: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x8033242C: lw          $t1, 0x6158($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6158);
    // 0x80332430: addu        $t9, $t2, $t4
    ctx->r25 = ADD32(ctx->r10, ctx->r12);
    // 0x80332434: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332438: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8033243C: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80332440: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80332444: sub.d       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f10.d - ctx->f16.d;
    // 0x80332448: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033244C: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80332450: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x80332454: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332458: addu        $t0, $t6, $t4
    ctx->r8 = ADD32(ctx->r14, ctx->r12);
    // 0x8033245C: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x80332460: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80332464: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332468: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x8033246C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80332470: lw          $t5, 0x6158($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6158);
    // 0x80332474: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332478: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8033247C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80332480: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332484: lwc1        $f4, 0x62E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X62E8);
    // 0x80332488: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8033248C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332490: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332494: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332498: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033249C: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x803324A0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803324A4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x803324A8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x803324AC: lw          $t1, 0x6158($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6158);
    // 0x803324B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324B4: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x803324B8: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803324BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803324C0: lwc1        $f6, 0x62EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X62EC);
    // 0x803324C4: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803324C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803324CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803324D4: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803324D8: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x803324DC: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803324E0: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x803324E4: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803324E8: lw          $t8, 0x6128($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6128);
    // 0x803324EC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803324F0: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x803324F4: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x803324F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803324FC: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80332500: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332504: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80332508: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x8033250C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332510: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80332514: lui         $at, 0xC04D
    ctx->r1 = S32(0XC04D << 16);
    // 0x80332518: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033251C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80332520: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332524: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332528: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033252C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332530: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332534: mul.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x80332538: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033253C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332540: lw          $t1, 0x614C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X614C);
    // 0x80332544: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x80332548: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033254C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80332550: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80332554: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332558: sub.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f6.d - ctx->f18.d;
    // 0x8033255C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332560: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x80332564: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80332568: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033256C: addu        $t4, $t6, $t5
    ctx->r12 = ADD32(ctx->r14, ctx->r13);
    // 0x80332570: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x80332574: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80332578: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x8033257C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80332580: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x80332584: lw          $t8, 0x6128($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6128);
    // 0x80332588: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033258C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332590: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332594: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332598: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033259C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803325A0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803325A4: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x803325A8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803325AC: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x803325B0: lui         $at, 0xC042
    ctx->r1 = S32(0XC042 << 16);
    // 0x803325B4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803325B8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803325BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803325C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803325C4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803325C8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803325CC: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x803325D0: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803325D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803325D8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803325DC: lw          $t5, 0x614C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X614C);
    // 0x803325E0: addu        $t6, $t1, $t7
    ctx->r14 = ADD32(ctx->r9, ctx->r15);
    // 0x803325E4: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803325E8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x803325EC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803325F0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803325F4: sub.d       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f16.d - ctx->f18.d;
    // 0x803325F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803325FC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80332600: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x80332604: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332608: addu        $t3, $t4, $t7
    ctx->r11 = ADD32(ctx->r12, ctx->r15);
    // 0x8033260C: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x80332610: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80332614: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80332618: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033261C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332620: lw          $t8, 0x614C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X614C);
    // 0x80332624: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332628: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8033262C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332630: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332634: lwc1        $f6, 0x62F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X62F0);
    // 0x80332638: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033263C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332640: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332644: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332648: swc1        $f6, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f6.u32l;
    // 0x8033264C: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80332650: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332654: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80332658: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033265C: lw          $t5, 0x614C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X614C);
    // 0x80332660: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332664: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80332668: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033266C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332670: lwc1        $f10, 0x62F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X62F4);
    // 0x80332674: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80332678: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033267C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332680: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332684: swc1        $f10, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f10.u32l;
    // 0x80332688: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x8033268C: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80332690: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332694: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80332698: lw          $t9, 0x6128($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6128);
    // 0x8033269C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803326A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803326A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803326A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803326AC: lwc1        $f16, 0x62F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X62F8);
    // 0x803326B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803326B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803326B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803326C0: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x803326C4: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803326C8: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803326CC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803326D0: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803326D4: lw          $t6, 0x6128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6128);
    // 0x803326D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803326DC: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x803326E0: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803326E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803326E8: lwc1        $f18, 0x62FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X62FC);
    // 0x803326EC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803326F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803326F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803326FC: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
    // 0x80332700: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80332704: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332708: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8033270C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80332710: lw          $t7, 0x6128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6128);
    // 0x80332714: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80332718: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8033271C: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332720: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332724: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332728: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8033272C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332730: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332734: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80332738: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033273C: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80332740: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332744: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332748: nop

    // 0x8033274C: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80332750: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x80332754: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80332758: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
    // 0x8033275C: nop

    // 0x80332760: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80332764: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332768: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8033276C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80332770: lw          $t5, 0x6128($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6128);
    // 0x80332774: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80332778: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8033277C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80332780: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332784: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80332788: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033278C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332790: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80332794: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80332798: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033279C: addu        $t3, $t4, $t7
    ctx->r11 = ADD32(ctx->r12, ctx->r15);
    // 0x803327A0: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803327A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803327A8: nop

    // 0x803327AC: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803327B0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x803327B4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803327B8: sh          $t8, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r24;
    // 0x803327BC: nop

    // 0x803327C0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x803327C4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803327C8: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x803327CC: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x803327D0: lw          $t6, 0x6134($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6134);
    // 0x803327D4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803327D8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x803327DC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803327E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803327E4: lwc1        $f16, 0x6300($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6300);
    // 0x803327E8: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x803327EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803327F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803327F8: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x803327FC: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80332800: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332804: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80332808: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033280C: lw          $t7, 0x6134($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6134);
    // 0x80332810: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332814: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332818: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033281C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332820: lwc1        $f18, 0x6304($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6304);
    // 0x80332824: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332828: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033282C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332830: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332834: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
    // 0x80332838: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8033283C: lb          $t3, 0x4802($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4802);
    // 0x80332840: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80332844: nop

    // 0x80332848: bne         $t8, $t3, L_80332878
    if (ctx->r24 != ctx->r11) {
        // 0x8033284C: nop
    
            goto L_80332878;
    }
    // 0x8033284C: nop

    // 0x80332850: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x80332854: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80332858: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8033285C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80332860: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x80332864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332868: jal         0x8001BC84
    // 0x8033286C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001BC84(rdram, ctx);
        goto after_5;
    // 0x8033286C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80332870: b           L_80332898
    // 0x80332874: nop

        goto L_80332898;
    // 0x80332874: nop

L_80332878:
    // 0x80332878: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8033287C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80332880: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80332884: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80332888: lw          $a0, 0x6128($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6128);
    // 0x8033288C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332890: jal         0x8001BC84
    // 0x80332894: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_6;
    // 0x80332894: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_80332898:
    // 0x80332898: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8033289C: jal         0x800600B8
    // 0x803328A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800600B8(rdram, ctx);
        goto after_7;
    // 0x803328A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x803328A4: beq         $v0, $zero, L_803328C0
    if (ctx->r2 == 0) {
        // 0x803328A8: nop
    
            goto L_803328C0;
    }
    // 0x803328A8: nop

    // 0x803328AC: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x803328B0: jal         0x80331F8C
    // 0x803328B4: nop

    func_80331F8C_unk_bin_2(rdram, ctx);
        goto after_8;
    // 0x803328B4: nop

    after_8:
    // 0x803328B8: b           L_803328CC
    // 0x803328BC: nop

        goto L_803328CC;
    // 0x803328BC: nop

L_803328C0:
    // 0x803328C0: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x803328C4: jal         0x80332010
    // 0x803328C8: nop

    func_80332010_unk_bin_2(rdram, ctx);
        goto after_9;
    // 0x803328C8: nop

    after_9:
L_803328CC:
    // 0x803328CC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803328D0: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x803328D4: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x803328D8: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x803328DC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x803328E0: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x803328E4: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x803328E8: lbu         $t1, 0x39D4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39D4);
    // 0x803328EC: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x803328F0: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803328F4: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x803328F8: bne         $at, $zero, L_80332110
    if (ctx->r1 != 0) {
        // 0x803328FC: sh          $t4, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r12;
            goto L_80332110;
    }
    // 0x803328FC: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
L_80332900:
    // 0x80332900: b           L_80332908
    // 0x80332904: nop

        goto L_80332908;
    // 0x80332904: nop

L_80332908:
    // 0x80332908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033290C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332910: jr          $ra
    // 0x80332914: nop

    return;
    // 0x80332914: nop

;}
RECOMP_FUNC void func_803358C8_unk_bin_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803358C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803358CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803358D0: jal         0x80062EAC
    // 0x803358D4: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x803358D4: nop

    after_0:
    // 0x803358D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x803358DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803358E0: jal         0x8033001C
    // 0x803358E4: nop

    func_8033001C_unk_bin_2(rdram, ctx);
        goto after_1;
    // 0x803358E4: nop

    after_1:
    // 0x803358E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x803358EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803358F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803358F4: bne         $t6, $at, L_80335928
    if (ctx->r14 != ctx->r1) {
        // 0x803358F8: nop
    
            goto L_80335928;
    }
    // 0x803358F8: nop

    // 0x803358FC: jal         0x803302A4
    // 0x80335900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803302A4_unk_bin_2(rdram, ctx);
        goto after_2;
    // 0x80335900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80335904: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80335908: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x8033590C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80335910: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335914: sw          $t7, 0x63BC($at)
    MEM_W(0X63BC, ctx->r1) = ctx->r15;
    // 0x80335918: jal         0x8001D2C0
    // 0x8033591C: nop

    func_8001D2C0(rdram, ctx);
        goto after_3;
    // 0x8033591C: nop

    after_3:
    // 0x80335920: b           L_80335948
    // 0x80335924: nop

        goto L_80335948;
    // 0x80335924: nop

L_80335928:
    // 0x80335928: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033592C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335930: bne         $t8, $at, L_80335948
    if (ctx->r24 != ctx->r1) {
        // 0x80335934: nop
    
            goto L_80335948;
    }
    // 0x80335934: nop

    // 0x80335938: jal         0x803302A4
    // 0x8033593C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803302A4_unk_bin_2(rdram, ctx);
        goto after_4;
    // 0x8033593C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80335940: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80335944: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
L_80335948:
    // 0x80335948: b           L_80335950
    // 0x8033594C: nop

        goto L_80335950;
    // 0x8033594C: nop

L_80335950:
    // 0x80335950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335954: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335958: jr          $ra
    // 0x8033595C: nop

    return;
    // 0x8033595C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330004: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80330008: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8033000C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330010: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80330014: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330018: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033001C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330020: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330024: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330028: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033002C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330030: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330034: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330038: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x8033003C: lb          $t9, 0x12D2($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X12D2);
    // 0x80330040: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330044: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330048: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033004C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80330050: addiu       $t1, $t0, 0x78
    ctx->r9 = ADD32(ctx->r8, 0X78);
    // 0x80330054: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330058: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8033005C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330060: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330064: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330068: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033006C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330070: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330074: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330078: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x8033007C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80330080: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330084: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330088: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033008C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330090: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330094: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033009C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803300A0: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x803300A4: b           L_803300AC
    // 0x803300A8: nop

        goto L_803300AC;
    // 0x803300A8: nop

L_803300AC:
    // 0x803300AC: jr          $ra
    // 0x803300B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803300B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80330E18_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E24: sb          $zero, 0x12D0($at)
    MEM_B(0X12D0, ctx->r1) = 0;
    // 0x80330E28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E2C: sb          $zero, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = 0;
    // 0x80330E30: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E34: sb          $zero, 0x12D2($at)
    MEM_B(0X12D2, ctx->r1) = 0;
    // 0x80330E38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E3C: sw          $zero, 0x12D4($at)
    MEM_W(0X12D4, ctx->r1) = 0;
    // 0x80330E40: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80330E44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E48: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80330E4C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80330E50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330E54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E58: jal         0x8001BD44
    // 0x80330E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80330E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80330E60: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80330E64: addiu       $t7, $t7, 0x47D8
    ctx->r15 = ADD32(ctx->r15, 0X47D8);
    // 0x80330E68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330E6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330E78: jal         0x8001C0EC
    // 0x80330E7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330E7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80330E80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330E84: jal         0x8001B754
    // 0x80330E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80330E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330E8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330E90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330E98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330E9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330EA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330EA4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330EA8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330EAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330EB0: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80330EB4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330EB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330EBC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330EC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330EC4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330EC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330ECC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330ED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330ED4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330ED8: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330EDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330EE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330EE4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330EE8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EEC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330EF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EF4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330EF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EFC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330F00: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80330F04: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330F08: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330F0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330F10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330F14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330F18: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330F1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F24: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330F28: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80330F2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330F30: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80330F34: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80330F38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330F3C: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80330F40: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80330F44: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80330F48: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80330F4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80330F58: jal         0x8001BD44
    // 0x80330F5C: addu        $a3, $t8, $t1
    ctx->r7 = ADD32(ctx->r24, ctx->r9);
    func_8001BD44(rdram, ctx);
        goto after_3;
    // 0x80330F5C: addu        $a3, $t8, $t1
    ctx->r7 = ADD32(ctx->r24, ctx->r9);
    after_3:
    // 0x80330F60: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80330F64: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330F68: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x80330F6C: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80330F70: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80330F74: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x80330F78: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330F84: jal         0x8001BE6C
    // 0x80330F88: addu        $a3, $t3, $t5
    ctx->r7 = ADD32(ctx->r11, ctx->r13);
    func_8001BE6C(rdram, ctx);
        goto after_4;
    // 0x80330F88: addu        $a3, $t3, $t5
    ctx->r7 = ADD32(ctx->r11, ctx->r13);
    after_4:
    // 0x80330F8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330F90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F94: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80330F98: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330F9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FA0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330FA4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330FA8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330FAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330FB0: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80330FB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330FB8: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x80330FBC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80330FC0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80330FC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330FC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330FCC: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80330FD0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330FD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FD8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330FDC: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330FE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330FE4: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x80330FE8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330FEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330FF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330FF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330FF8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330FFC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331004: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331008: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x8033100C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331010: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331014: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80331018: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033101C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331020: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80331024: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331028: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033102C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331030: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80331034: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80331038: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8033103C: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80331040: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331044: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x80331048: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8033104C: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x80331050: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x80331054: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033105C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80331060: jal         0x8001BD44
    // 0x80331064: addu        $a3, $t6, $t0
    ctx->r7 = ADD32(ctx->r14, ctx->r8);
    func_8001BD44(rdram, ctx);
        goto after_5;
    // 0x80331064: addu        $a3, $t6, $t0
    ctx->r7 = ADD32(ctx->r14, ctx->r8);
    after_5:
    // 0x80331068: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x8033106C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80331070: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x80331074: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80331078: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x8033107C: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x80331080: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033108C: jal         0x8001BE6C
    // 0x80331090: addu        $a3, $t1, $t4
    ctx->r7 = ADD32(ctx->r9, ctx->r12);
    func_8001BE6C(rdram, ctx);
        goto after_6;
    // 0x80331090: addu        $a3, $t1, $t4
    ctx->r7 = ADD32(ctx->r9, ctx->r12);
    after_6:
    // 0x80331094: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033109C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803310A0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803310A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310A8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803310AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803310B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803310B8: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x803310BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803310C0: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x803310C4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803310C8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803310CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803310D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803310D4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803310D8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803310DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803310E4: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x803310E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803310EC: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x803310F0: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803310F4: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803310F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803310FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331100: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80331104: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033110C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331110: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80331114: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331118: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033111C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80331120: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80331124: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331128: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033112C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331130: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331134: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331138: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x8033113C: b           L_80331144
    // 0x80331140: nop

        goto L_80331144;
    // 0x80331140: nop

L_80331144:
    // 0x80331144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033114C: jr          $ra
    // 0x80331150: nop

    return;
    // 0x80331150: nop

;}
RECOMP_FUNC void func_8033068C_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033068C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330694: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80330698: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033069C: lb          $t6, 0x12D1($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X12D1);
    // 0x803306A0: nop

    // 0x803306A4: bne         $t6, $zero, L_803306B8
    if (ctx->r14 != 0) {
        // 0x803306A8: nop
    
            goto L_803306B8;
    }
    // 0x803306A8: nop

    // 0x803306AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803306B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306B4: sb          $t7, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = ctx->r15;
L_803306B8:
    // 0x803306B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803306BC: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x803306C0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x803306C4: nop

    // 0x803306C8: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x803306CC: beq         $t0, $zero, L_80330784
    if (ctx->r8 == 0) {
        // 0x803306D0: nop
    
            goto L_80330784;
    }
    // 0x803306D0: nop

    // 0x803306D4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803306D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803306DC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803306E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803306E4: jal         0x800178D4
    // 0x803306E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x803306E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x803306EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803306F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306F4: sb          $t1, 0x12D0($at)
    MEM_B(0X12D0, ctx->r1) = ctx->r9;
    // 0x803306F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306FC: sb          $zero, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = 0;
    // 0x80330700: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80330704: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80330708: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033070C: jal         0x8001A928
    // 0x80330710: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x80330710: nop

    after_1:
    // 0x80330714: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80330718: jal         0x80060E40
    // 0x8033071C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x8033071C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80330720: jal         0x80330000
    // 0x80330724: nop

    func_80330000_unk_bin_3(rdram, ctx);
        goto after_3;
    // 0x80330724: nop

    after_3:
    // 0x80330728: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033072C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330730: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330734: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330738: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033073C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330740: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330744: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330748: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033074C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330750: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
    // 0x80330754: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330758: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8033075C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330760: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330764: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033076C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330770: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330778: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033077C: b           L_80330804
    // 0x80330780: swc1        $f6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f6.u32l;
        goto L_80330804;
    // 0x80330780: swc1        $f6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f6.u32l;
L_80330784:
    // 0x80330784: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80330788: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033078C: bne         $t7, $at, L_803307C8
    if (ctx->r15 != ctx->r1) {
        // 0x80330790: nop
    
            goto L_803307C8;
    }
    // 0x80330790: nop

    // 0x80330794: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330798: lb          $t8, 0x12D2($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X12D2);
    // 0x8033079C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307A0: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x803307A4: sb          $t9, 0x12D2($at)
    MEM_B(0X12D2, ctx->r1) = ctx->r25;
    // 0x803307A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803307AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307B0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803307B4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803307B8: jal         0x800178D4
    // 0x803307BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x803307BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x803307C0: b           L_80330804
    // 0x803307C4: nop

        goto L_80330804;
    // 0x803307C4: nop

L_803307C8:
    // 0x803307C8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x803307CC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x803307D0: bne         $t0, $at, L_80330804
    if (ctx->r8 != ctx->r1) {
        // 0x803307D4: nop
    
            goto L_80330804;
    }
    // 0x803307D4: nop

    // 0x803307D8: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803307DC: lb          $t1, 0x12D2($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X12D2);
    // 0x803307E0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307E4: xori        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 ^ 0X1;
    // 0x803307E8: sb          $t2, 0x12D2($at)
    MEM_B(0X12D2, ctx->r1) = ctx->r10;
    // 0x803307EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803307F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307F4: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803307F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803307FC: jal         0x800178D4
    // 0x80330800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80330800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80330804:
    // 0x80330804: jal         0x80330000
    // 0x80330808: nop

    func_80330000_unk_bin_3(rdram, ctx);
        goto after_6;
    // 0x80330808: nop

    after_6:
    // 0x8033080C: b           L_80330814
    // 0x80330810: nop

        goto L_80330814;
    // 0x80330810: nop

L_80330814:
    // 0x80330814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033081C: jr          $ra
    // 0x80330820: nop

    return;
    // 0x80330820: nop

;}
RECOMP_FUNC void func_80331154_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033115C: jal         0x8001ECB8
    // 0x80331160: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80331160: nop

    after_0:
    // 0x80331164: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331168: addiu       $t6, $t6, 0xB80
    ctx->r14 = ADD32(ctx->r14, 0XB80);
    // 0x8033116C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80331170: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80331174: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331178: addiu       $t7, $t7, 0x990
    ctx->r15 = ADD32(ctx->r15, 0X990);
    // 0x8033117C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80331180: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80331184: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331188: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x8033118C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331190: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331194: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x80331198: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033119C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311A0: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803311A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803311A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311AC: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x803311B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803311B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311B8: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x803311BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803311C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311C4: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x803311C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803311CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311D0: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x803311D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803311D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311DC: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x803311E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803311E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803311E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311EC: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x803311F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803311F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803311F8: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x803311FC: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80331200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331208: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8033120C: jal         0x80019C84
    // 0x80331210: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80331210: nop

    after_1:
    // 0x80331214: jal         0x80019D2C
    // 0x80331218: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80331218: nop

    after_2:
    // 0x8033121C: jal         0x8001A258
    // 0x80331220: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80331220: nop

    after_3:
    // 0x80331224: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80331228: addiu       $t8, $t8, 0x1DB8
    ctx->r24 = ADD32(ctx->r24, 0X1DB8);
    // 0x8033122C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80331230: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80331234: jal         0x80060278
    // 0x80331238: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80331238: nop

    after_4:
    // 0x8033123C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331240: jal         0x8006031C
    // 0x80331244: addiu       $a0, $a0, 0x1E58
    ctx->r4 = ADD32(ctx->r4, 0X1E58);
    func_8006031C(rdram, ctx);
        goto after_5;
    // 0x80331244: addiu       $a0, $a0, 0x1E58
    ctx->r4 = ADD32(ctx->r4, 0X1E58);
    after_5:
    // 0x80331248: jal         0x80330E18
    // 0x8033124C: nop

    func_80330E18_unk_bin_3(rdram, ctx);
        goto after_6;
    // 0x8033124C: nop

    after_6:
    // 0x80331250: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80331254: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80331258: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8033125C: jal         0x8001D244
    // 0x80331260: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x80331260: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x80331264: jal         0x8001D284
    // 0x80331268: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x80331268: nop

    after_8:
    // 0x8033126C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80331270: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80331274: jal         0x80016F38
    // 0x80331278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_9;
    // 0x80331278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8033127C: jal         0x80000964
    // 0x80331280: nop

    func_80000964(rdram, ctx);
        goto after_10;
    // 0x80331280: nop

    after_10:
    // 0x80331284: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x80331288: lb          $v0, 0x12D2($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X12D2);
    // 0x8033128C: b           L_8033129C
    // 0x80331290: nop

        goto L_8033129C;
    // 0x80331290: nop

    // 0x80331294: b           L_8033129C
    // 0x80331298: nop

        goto L_8033129C;
    // 0x80331298: nop

L_8033129C:
    // 0x8033129C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803312A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803312A4: jr          $ra
    // 0x803312A8: nop

    return;
    // 0x803312A8: nop

    // 0x803312AC: nop

;}
RECOMP_FUNC void func_80330B80_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330B84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330B88: jal         0x8001D4D0
    // 0x80330B8C: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80330B8C: nop

    after_0:
    // 0x80330B90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330B9C: jal         0x8001D638
    // 0x80330BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80330BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80330BA4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80330BA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330BAC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80330BB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330BB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330BB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330BBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BC0: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330BC4: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80330BC8: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80330BCC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80330BD0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80330BD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330BD8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330BDC: jal         0x80036E70
    // 0x80330BE0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80330BE0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80330BE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330BE8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80330BEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330BF0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80330BF4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80330BF8: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80330BFC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80330C00: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80330C04: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80330C08: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80330C0C: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80330C10: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330C14: nop

    // 0x80330C18: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80330C1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C20: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80330C24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C28: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80330C2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C30: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80330C34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C38: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80330C3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C40: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80330C44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C4C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330C50: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80330C54: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80330C58: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80330C5C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80330C60: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80330C64: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80330C68: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80330C6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330C70: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330C74: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80330C78: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80330C7C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80330C80: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80330C84: jal         0x80037188
    // 0x80330C88: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80330C88: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80330C8C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330C90: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80330C94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330C98: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80330C9C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80330CA0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80330CA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330CA8: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80330CAC: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80330CB0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80330CB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330CB8: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80330CBC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330CC0: nop

    // 0x80330CC4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80330CC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330CCC: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80330CD0: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80330CD4:
    // 0x80330CD4: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330CD8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330CDC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330CE0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330CE4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330CE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330CEC: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80330CF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330CF4: bne         $t0, $at, L_80330D04
    if (ctx->r8 != ctx->r1) {
        // 0x80330CF8: nop
    
            goto L_80330D04;
    }
    // 0x80330CF8: nop

    // 0x80330CFC: b           L_80330E00
    // 0x80330D00: nop

        goto L_80330E00;
    // 0x80330D00: nop

L_80330D04:
    // 0x80330D04: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330D08: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80330D0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330D10: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80330D14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330D18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D1C: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80330D20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330D24: beq         $t3, $at, L_80330DC8
    if (ctx->r11 == ctx->r1) {
        // 0x80330D28: nop
    
            goto L_80330DC8;
    }
    // 0x80330D28: nop

    // 0x80330D2C: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330D30: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330D34: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330D38: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80330D3C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330D40: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80330D44: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80330D48: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80330D4C: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80330D50: jal         0x8001C1A8
    // 0x80330D54: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80330D54: nop

    after_4:
    // 0x80330D58: beq         $v0, $zero, L_80330DC0
    if (ctx->r2 == 0) {
        // 0x80330D5C: nop
    
            goto L_80330DC0;
    }
    // 0x80330D5C: nop

    // 0x80330D60: jal         0x8001838C
    // 0x80330D64: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80330D64: nop

    after_5:
    // 0x80330D68: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330D6C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330D70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330D74: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330D78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330D7C: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x80330D80: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80330D84: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x80330D88: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x80330D8C: jal         0x8001B014
    // 0x80330D90: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x80330D90: nop

    after_6:
    // 0x80330D94: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330D98: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80330D9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330DA0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80330DA4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330DA8: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x80330DAC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80330DB0: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x80330DB4: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x80330DB8: jal         0x8001C384
    // 0x80330DBC: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80330DBC: nop

    after_7:
L_80330DC0:
    // 0x80330DC0: b           L_80330DEC
    // 0x80330DC4: nop

        goto L_80330DEC;
    // 0x80330DC4: nop

L_80330DC8:
    // 0x80330DC8: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330DCC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330DD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330DD4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80330DD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330DDC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80330DE0: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330DE4: jal         0x800623E0
    // 0x80330DE8: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80330DE8: nop

    after_8:
L_80330DEC:
    // 0x80330DEC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330DF0: nop

    // 0x80330DF4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330DF8: b           L_80330CD4
    // 0x80330DFC: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80330CD4;
    // 0x80330DFC: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80330E00:
    // 0x80330E00: b           L_80330E08
    // 0x80330E04: nop

        goto L_80330E08;
    // 0x80330E04: nop

L_80330E08:
    // 0x80330E08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80330E10: jr          $ra
    // 0x80330E14: nop

    return;
    // 0x80330E14: nop

;}
RECOMP_FUNC void func_80330990_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330990: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330998: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033099C: jal         0x80062EAC
    // 0x803309A0: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x803309A0: nop

    after_0:
    // 0x803309A4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803309A8: jal         0x8001D1D4
    // 0x803309AC: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x803309AC: nop

    after_1:
    // 0x803309B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803309B4: bne         $v0, $at, L_803309C4
    if (ctx->r2 != ctx->r1) {
        // 0x803309B8: nop
    
            goto L_803309C4;
    }
    // 0x803309B8: nop

    // 0x803309BC: b           L_80330B70
    // 0x803309C0: nop

        goto L_80330B70;
    // 0x803309C0: nop

L_803309C4:
    // 0x803309C4: jal         0x8001D1D4
    // 0x803309C8: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x803309C8: nop

    after_2:
    // 0x803309CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803309D0: bne         $v0, $at, L_803309EC
    if (ctx->r2 != ctx->r1) {
        // 0x803309D4: nop
    
            goto L_803309EC;
    }
    // 0x803309D4: nop

    // 0x803309D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803309DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803309E0: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x803309E4: b           L_80330B70
    // 0x803309E8: nop

        goto L_80330B70;
    // 0x803309E8: nop

L_803309EC:
    // 0x803309EC: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x803309F0: lb          $s0, 0x12D0($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X12D0);
    // 0x803309F4: nop

    // 0x803309F8: beq         $s0, $zero, L_80330A2C
    if (ctx->r16 == 0) {
        // 0x803309FC: nop
    
            goto L_80330A2C;
    }
    // 0x803309FC: nop

    // 0x80330A00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330A04: beq         $s0, $at, L_80330A40
    if (ctx->r16 == ctx->r1) {
        // 0x80330A08: nop
    
            goto L_80330A40;
    }
    // 0x80330A08: nop

    // 0x80330A0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330A10: beq         $s0, $at, L_80330A54
    if (ctx->r16 == ctx->r1) {
        // 0x80330A14: nop
    
            goto L_80330A54;
    }
    // 0x80330A14: nop

    // 0x80330A18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330A1C: beq         $s0, $at, L_80330A68
    if (ctx->r16 == ctx->r1) {
        // 0x80330A20: nop
    
            goto L_80330A68;
    }
    // 0x80330A20: nop

    // 0x80330A24: b           L_80330A7C
    // 0x80330A28: nop

        goto L_80330A7C;
    // 0x80330A28: nop

L_80330A2C:
    // 0x80330A2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330A30: jal         0x803300B4
    // 0x80330A34: nop

    func_803300B4_unk_bin_3(rdram, ctx);
        goto after_3;
    // 0x80330A34: nop

    after_3:
    // 0x80330A38: b           L_80330A7C
    // 0x80330A3C: nop

        goto L_80330A7C;
    // 0x80330A3C: nop

L_80330A40:
    // 0x80330A40: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330A44: jal         0x80330134
    // 0x80330A48: nop

    func_80330134_unk_bin_3(rdram, ctx);
        goto after_4;
    // 0x80330A48: nop

    after_4:
    // 0x80330A4C: b           L_80330A7C
    // 0x80330A50: nop

        goto L_80330A7C;
    // 0x80330A50: nop

L_80330A54:
    // 0x80330A54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330A58: jal         0x8033068C
    // 0x80330A5C: nop

    func_8033068C_unk_bin_3(rdram, ctx);
        goto after_5;
    // 0x80330A5C: nop

    after_5:
    // 0x80330A60: b           L_80330A7C
    // 0x80330A64: nop

        goto L_80330A7C;
    // 0x80330A64: nop

L_80330A68:
    // 0x80330A68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330A6C: jal         0x80330824
    // 0x80330A70: nop

    func_80330824_unk_bin_3(rdram, ctx);
        goto after_6;
    // 0x80330A70: nop

    after_6:
    // 0x80330A74: b           L_80330A7C
    // 0x80330A78: nop

        goto L_80330A7C;
    // 0x80330A78: nop

L_80330A7C:
    // 0x80330A7C: jal         0x8001994C
    // 0x80330A80: nop

    func_8001994C(rdram, ctx);
        goto after_7;
    // 0x80330A80: nop

    after_7:
    // 0x80330A84: jal         0x800628C0
    // 0x80330A88: nop

    func_800628C0(rdram, ctx);
        goto after_8;
    // 0x80330A88: nop

    after_8:
    // 0x80330A8C: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_80330A90:
    // 0x80330A90: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80330A94: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80330A98: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330A9C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80330AA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330AA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330AA8: lh          $t9, 0x4998($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4998);
    // 0x80330AAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330AB0: bne         $t9, $at, L_80330AC0
    if (ctx->r25 != ctx->r1) {
        // 0x80330AB4: nop
    
            goto L_80330AC0;
    }
    // 0x80330AB4: nop

    // 0x80330AB8: b           L_80330B68
    // 0x80330ABC: nop

        goto L_80330B68;
    // 0x80330ABC: nop

L_80330AC0:
    // 0x80330AC0: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80330AC4: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80330AC8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330ACC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80330AD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330AD4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330AD8: lh          $t2, 0x49A0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X49A0);
    // 0x80330ADC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330AE0: beq         $t2, $at, L_80330B30
    if (ctx->r10 == ctx->r1) {
        // 0x80330AE4: nop
    
            goto L_80330B30;
    }
    // 0x80330AE4: nop

    // 0x80330AE8: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330AEC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330AF0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330AF4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80330AF8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330AFC: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80330B00: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330B04: jal         0x8001CEF4
    // 0x80330B08: nop

    func_8001CEF4(rdram, ctx);
        goto after_9;
    // 0x80330B08: nop

    after_9:
    // 0x80330B0C: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80330B10: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330B14: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330B18: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80330B1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330B20: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80330B24: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330B28: jal         0x8001CD20
    // 0x80330B2C: nop

    func_8001CD20(rdram, ctx);
        goto after_10;
    // 0x80330B2C: nop

    after_10:
L_80330B30:
    // 0x80330B30: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80330B34: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330B38: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330B3C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80330B40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330B44: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80330B48: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330B4C: jal         0x8001AD6C
    // 0x80330B50: nop

    func_8001AD6C(rdram, ctx);
        goto after_11;
    // 0x80330B50: nop

    after_11:
    // 0x80330B54: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80330B58: nop

    // 0x80330B5C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80330B60: b           L_80330A90
    // 0x80330B64: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
        goto L_80330A90;
    // 0x80330B64: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
L_80330B68:
    // 0x80330B68: b           L_80330B70
    // 0x80330B6C: nop

        goto L_80330B70;
    // 0x80330B6C: nop

L_80330B70:
    // 0x80330B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330B78: jr          $ra
    // 0x80330B7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330B7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330824_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033082C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80330830: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330834: lb          $t6, 0x12D1($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X12D1);
    // 0x80330838: nop

    // 0x8033083C: bne         $t6, $zero, L_8033093C
    if (ctx->r14 != 0) {
        // 0x80330840: nop
    
            goto L_8033093C;
    }
    // 0x80330840: nop

    // 0x80330844: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330848: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033084C: sb          $t7, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = ctx->r15;
    // 0x80330850: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330854: sw          $zero, 0x12D4($at)
    MEM_W(0X12D4, ctx->r1) = 0;
    // 0x80330858: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x8033085C: lb          $t8, 0x12D2($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X12D2);
    // 0x80330860: nop

    // 0x80330864: bne         $t8, $zero, L_803308CC
    if (ctx->r24 != 0) {
        // 0x80330868: nop
    
            goto L_803308CC;
    }
    // 0x80330868: nop

    // 0x8033086C: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80330870: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330874: addiu       $t1, $t1, -0x3560
    ctx->r9 = ADD32(ctx->r9, -0X3560);
    // 0x80330878: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8033087C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80330880: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x80330884: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033088C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330890: jal         0x8001BE6C
    // 0x80330894: addu        $a3, $t0, $t2
    ctx->r7 = ADD32(ctx->r8, ctx->r10);
    func_8001BE6C(rdram, ctx);
        goto after_0;
    // 0x80330894: addu        $a3, $t0, $t2
    ctx->r7 = ADD32(ctx->r8, ctx->r10);
    after_0:
    // 0x80330898: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x8033089C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x803308A0: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x803308A4: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x803308A8: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x803308AC: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x803308B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803308B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803308B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803308BC: jal         0x8001BE6C
    // 0x803308C0: addu        $a3, $t4, $t6
    ctx->r7 = ADD32(ctx->r12, ctx->r14);
    func_8001BE6C(rdram, ctx);
        goto after_1;
    // 0x803308C0: addu        $a3, $t4, $t6
    ctx->r7 = ADD32(ctx->r12, ctx->r14);
    after_1:
    // 0x803308C4: b           L_80330924
    // 0x803308C8: nop

        goto L_80330924;
    // 0x803308C8: nop

L_803308CC:
    // 0x803308CC: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x803308D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803308D4: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x803308D8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x803308DC: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x803308E0: lw          $t1, 0x10($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X10);
    // 0x803308E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803308E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803308EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803308F0: jal         0x8001BE6C
    // 0x803308F4: addu        $a3, $t8, $t1
    ctx->r7 = ADD32(ctx->r24, ctx->r9);
    func_8001BE6C(rdram, ctx);
        goto after_2;
    // 0x803308F4: addu        $a3, $t8, $t1
    ctx->r7 = ADD32(ctx->r24, ctx->r9);
    after_2:
    // 0x803308F8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803308FC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330900: addiu       $t3, $t3, -0x3560
    ctx->r11 = ADD32(ctx->r11, -0X3560);
    // 0x80330904: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80330908: lw          $t2, 0x1C($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X1C);
    // 0x8033090C: lw          $t5, 0x10($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X10);
    // 0x80330910: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80330914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330918: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033091C: jal         0x8001BE6C
    // 0x80330920: addu        $a3, $t2, $t5
    ctx->r7 = ADD32(ctx->r10, ctx->r13);
    func_8001BE6C(rdram, ctx);
        goto after_3;
    // 0x80330920: addu        $a3, $t2, $t5
    ctx->r7 = ADD32(ctx->r10, ctx->r13);
    after_3:
L_80330924:
    // 0x80330924: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330928: jal         0x8001B754
    // 0x8033092C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x8033092C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80330930: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80330934: jal         0x8001B754
    // 0x80330938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_5;
    // 0x80330938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_8033093C:
    // 0x8033093C: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330940: lw          $t4, 0x12D4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X12D4);
    // 0x80330944: nop

    // 0x80330948: slti        $at, $t4, 0x46
    ctx->r1 = SIGNED(ctx->r12) < 0X46 ? 1 : 0;
    // 0x8033094C: bne         $at, $zero, L_80330964
    if (ctx->r1 != 0) {
        // 0x80330950: nop
    
            goto L_80330964;
    }
    // 0x80330950: nop

    // 0x80330954: jal         0x8001D2C0
    // 0x80330958: nop

    func_8001D2C0(rdram, ctx);
        goto after_6;
    // 0x80330958: nop

    after_6:
    // 0x8033095C: b           L_80330978
    // 0x80330960: nop

        goto L_80330978;
    // 0x80330960: nop

L_80330964:
    // 0x80330964: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330968: lw          $t6, 0x12D4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X12D4);
    // 0x8033096C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330970: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80330974: sw          $t7, 0x12D4($at)
    MEM_W(0X12D4, ctx->r1) = ctx->r15;
L_80330978:
    // 0x80330978: b           L_80330980
    // 0x8033097C: nop

        goto L_80330980;
    // 0x8033097C: nop

L_80330980:
    // 0x80330980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330988: jr          $ra
    // 0x8033098C: nop

    return;
    // 0x8033098C: nop

;}
RECOMP_FUNC void func_803300B4_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803300B8: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803300BC: lb          $t6, 0x12D1($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X12D1);
    // 0x803300C0: nop

    // 0x803300C4: bne         $t6, $zero, L_803300E0
    if (ctx->r14 != 0) {
        // 0x803300C8: nop
    
            goto L_803300E0;
    }
    // 0x803300C8: nop

    // 0x803300CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803300D0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300D4: sb          $t7, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = ctx->r15;
    // 0x803300D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300DC: sw          $zero, 0x12D4($at)
    MEM_W(0X12D4, ctx->r1) = 0;
L_803300E0:
    // 0x803300E0: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803300E4: lw          $t8, 0x12D4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X12D4);
    // 0x803300E8: nop

    // 0x803300EC: slti        $at, $t8, 0x50
    ctx->r1 = SIGNED(ctx->r24) < 0X50 ? 1 : 0;
    // 0x803300F0: bne         $at, $zero, L_80330110
    if (ctx->r1 != 0) {
        // 0x803300F4: nop
    
            goto L_80330110;
    }
    // 0x803300F4: nop

    // 0x803300F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803300FC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330100: sb          $t9, 0x12D0($at)
    MEM_B(0X12D0, ctx->r1) = ctx->r25;
    // 0x80330104: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330108: b           L_80330124
    // 0x8033010C: sb          $zero, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = 0;
        goto L_80330124;
    // 0x8033010C: sb          $zero, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = 0;
L_80330110:
    // 0x80330110: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330114: lw          $t0, 0x12D4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X12D4);
    // 0x80330118: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033011C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80330120: sw          $t1, 0x12D4($at)
    MEM_W(0X12D4, ctx->r1) = ctx->r9;
L_80330124:
    // 0x80330124: b           L_8033012C
    // 0x80330128: nop

        goto L_8033012C;
    // 0x80330128: nop

L_8033012C:
    // 0x8033012C: jr          $ra
    // 0x80330130: nop

    return;
    // 0x80330130: nop

;}
RECOMP_FUNC void func_80330134_unk_bin_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330134: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033013C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80330140: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330144: lb          $t6, 0x12D1($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X12D1);
    // 0x80330148: nop

    // 0x8033014C: bne         $t6, $zero, L_803304B4
    if (ctx->r14 != 0) {
        // 0x80330150: nop
    
            goto L_803304B4;
    }
    // 0x80330150: nop

    // 0x80330154: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330158: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033015C: sb          $t7, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = ctx->r15;
    // 0x80330160: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80330164: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330168: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8033016C: jal         0x80060E40
    // 0x80330170: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060E40(rdram, ctx);
        goto after_0;
    // 0x80330170: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80330174: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330178: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8033017C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330180: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330184: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330188: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033018C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330190: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330194: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330198: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033019C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x803301A0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803301A4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803301A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803301AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803301B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803301B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803301B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803301BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803301C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301C4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803301C8: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x803301CC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803301D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803301D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803301D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803301DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803301E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803301E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803301E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803301F0: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x803301F4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803301F8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x803301FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330200: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330204: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330208: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033020C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330210: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330214: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330218: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033021C: swc1        $f10, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f10.u32l;
    // 0x80330220: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330224: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80330228: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033022C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330230: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330234: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330238: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033023C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330240: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330244: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330248: swc1        $f16, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f16.u32l;
    // 0x8033024C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330250: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330254: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330258: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033025C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330260: lwc1        $f18, 0x12B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X12B0);
    // 0x80330264: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330268: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033026C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330270: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330274: swc1        $f18, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f18.u32l;
    // 0x80330278: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033027C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330280: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330284: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330288: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033028C: lwc1        $f4, 0x12B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X12B4);
    // 0x80330290: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330294: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033029C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803302A0: swc1        $f4, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f4.u32l;
    // 0x803302A4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803302A8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803302AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803302B0: jal         0x80060E40
    // 0x803302B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x803302B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x803302B8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803302BC: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x803302C0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803302C4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803302C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803302CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803302D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803302D4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803302D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803302E0: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803302E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803302E8: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x803302EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803302FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330300: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330304: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330308: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033030C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330310: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330314: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330318: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033031C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330320: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330324: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330328: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033032C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330330: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330334: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80330338: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033033C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80330340: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330344: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330348: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033034C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330350: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330354: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033035C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330360: swc1        $f16, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f16.u32l;
    // 0x80330364: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330368: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033036C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330370: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330374: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330378: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033037C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330380: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330384: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330388: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033038C: swc1        $f18, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f18.u32l;
    // 0x80330390: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330394: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330398: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033039C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803303A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803303A4: lwc1        $f4, 0x12B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X12B8);
    // 0x803303A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803303AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803303B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803303B8: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803303BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803303C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803303C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303D0: lwc1        $f6, 0x12BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X12BC);
    // 0x803303D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803303E4: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803303E8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803303EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x803303F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803303F4: jal         0x80060E40
    // 0x803303F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x803303F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x803303FC: jal         0x80330000
    // 0x80330400: nop

    func_80330000_unk_bin_3(rdram, ctx);
        goto after_3;
    // 0x80330400: nop

    after_3:
    // 0x80330404: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330408: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8033040C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330410: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330414: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330418: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033041C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330420: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330424: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330428: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033042C: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x80330430: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330434: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330438: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033043C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330440: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330444: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330448: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033044C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330450: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330454: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330458: swc1        $f10, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f10.u32l;
    // 0x8033045C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330460: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330464: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330468: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033046C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330470: lwc1        $f16, 0x12C0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X12C0);
    // 0x80330474: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330478: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033047C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330480: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330484: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x80330488: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033048C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330490: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330494: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033049C: lwc1        $f18, 0x12C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X12C4);
    // 0x803304A0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803304A4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803304A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304AC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803304B0: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
L_803304B4:
    // 0x803304B4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803304B8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x803304BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803304C0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803304C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803304C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803304CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803304D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803304D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803304D8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803304DC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803304E0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304E4: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803304E8: lwc1        $f9, 0x12C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X12C8);
    // 0x803304EC: lwc1        $f8, 0x12CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X12CC);
    // 0x803304F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803304F4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803304F8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803304FC: swc1        $f16, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f16.u32l;
    // 0x80330500: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330504: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330508: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033050C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330510: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330514: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330518: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033051C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330520: lwc1        $f18, 0x415C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X415C);
    // 0x80330524: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80330528: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8033052C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330530: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330534: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x80330538: nop

    // 0x8033053C: bc1f        L_80330584
    if (!c1cs) {
        // 0x80330540: nop
    
            goto L_80330584;
    }
    // 0x80330540: nop

    // 0x80330544: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330548: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033054C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330550: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330554: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330558: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033055C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330560: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330564: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330568: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033056C: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x80330570: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80330574: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330578: sb          $t6, 0x12D0($at)
    MEM_B(0X12D0, ctx->r1) = ctx->r14;
    // 0x8033057C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330580: sb          $zero, 0x12D1($at)
    MEM_B(0X12D1, ctx->r1) = 0;
L_80330584:
    // 0x80330584: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330588: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033058C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330590: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330594: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330598: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033059C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803305A0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803305A4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803305A8: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x803305AC: nop

    // 0x803305B0: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x803305B4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803305B8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803305BC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803305C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803305C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803305C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803305CC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803305D0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803305D4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803305D8: lwc1        $f16, 0xC($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XC);
    // 0x803305DC: nop

    // 0x803305E0: swc1        $f16, 0x54C($t3)
    MEM_W(0X54C, ctx->r11) = ctx->f16.u32l;
    // 0x803305E4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803305E8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803305EC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803305F0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803305F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803305F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803305FC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330600: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330604: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80330608: lwc1        $f18, 0x10($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X10);
    // 0x8033060C: nop

    // 0x80330610: swc1        $f18, 0x550($t7)
    MEM_W(0X550, ctx->r15) = ctx->f18.u32l;
    // 0x80330614: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330618: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033061C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330620: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330624: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330628: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033062C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330630: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330634: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80330638: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8033063C: nop

    // 0x80330640: swc1        $f4, 0x69C($t1)
    MEM_W(0X69C, ctx->r9) = ctx->f4.u32l;
    // 0x80330644: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330648: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033064C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80330650: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80330654: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330658: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033065C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330660: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330664: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80330668: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8033066C: nop

    // 0x80330670: swc1        $f6, 0x6A0($t5)
    MEM_W(0X6A0, ctx->r13) = ctx->f6.u32l;
    // 0x80330674: b           L_8033067C
    // 0x80330678: nop

        goto L_8033067C;
    // 0x80330678: nop

L_8033067C:
    // 0x8033067C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330684: jr          $ra
    // 0x80330688: nop

    return;
    // 0x80330688: nop

;}
RECOMP_FUNC void func_80332628_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332628: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033262C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332630: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80332634: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332638: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x8033263C: nop

    // 0x80332640: bne         $t6, $zero, L_8033266C
    if (ctx->r14 != 0) {
        // 0x80332644: nop
    
            goto L_8033266C;
    }
    // 0x80332644: nop

    // 0x80332648: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033264C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332650: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80332654: jal         0x80331334
    // 0x80332658: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80332658: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8033265C: jal         0x803305AC
    // 0x80332660: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_1;
    // 0x80332660: nop

    after_1:
    // 0x80332664: jal         0x8033058C
    // 0x80332668: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_2;
    // 0x80332668: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_8033266C:
    // 0x8033266C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80332670: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80332674: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80332678: nop

    // 0x8033267C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80332680: beq         $t0, $zero, L_8033275C
    if (ctx->r8 == 0) {
        // 0x80332684: nop
    
            goto L_8033275C;
    }
    // 0x80332684: nop

    // 0x80332688: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033268C: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332690: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x80332694: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332698: addiu       $a1, $sp, 0x27
    ctx->r5 = ADD32(ctx->r29, 0X27);
    // 0x8033269C: addiu       $a2, $sp, 0x26
    ctx->r6 = ADD32(ctx->r29, 0X26);
    // 0x803326A0: jal         0x800252AC
    // 0x803326A4: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    func_800252AC(rdram, ctx);
        goto after_3;
    // 0x803326A4: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    after_3:
    // 0x803326A8: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x803326AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803326B0: bne         $t2, $at, L_803326D8
    if (ctx->r10 != ctx->r1) {
        // 0x803326B4: nop
    
            goto L_803326D8;
    }
    // 0x803326B4: nop

    // 0x803326B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803326BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326C0: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x803326C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803326C8: jal         0x800178D4
    // 0x803326CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x803326CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x803326D0: b           L_80332754
    // 0x803326D4: nop

        goto L_80332754;
    // 0x803326D4: nop

L_803326D8:
    // 0x803326D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803326DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803326E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803326E8: jal         0x800178D4
    // 0x803326EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x803326EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x803326F0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803326F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803326FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80332700: jal         0x800631A8
    // 0x80332704: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800631A8(rdram, ctx);
        goto after_6;
    // 0x80332704: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80332708: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033270C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332710: jal         0x80063158
    // 0x80332714: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80063158(rdram, ctx);
        goto after_7;
    // 0x80332714: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80332718: jal         0x80331334
    // 0x8033271C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_8;
    // 0x8033271C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x80332720: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80332724: lw          $t3, 0x342C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X342C);
    // 0x80332728: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8033272C: sb          $t3, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = ctx->r11;
    // 0x80332730: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80332734: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80332738: jal         0x800251D4
    // 0x8033273C: nop

    func_800251D4(rdram, ctx);
        goto after_9;
    // 0x8033273C: nop

    after_9:
    // 0x80332740: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80332744: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332748: sw          $t4, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = ctx->r12;
    // 0x8033274C: jal         0x8001D2C0
    // 0x80332750: nop

    func_8001D2C0(rdram, ctx);
        goto after_10;
    // 0x80332750: nop

    after_10:
L_80332754:
    // 0x80332754: b           L_80332870
    // 0x80332758: nop

        goto L_80332870;
    // 0x80332758: nop

L_8033275C:
    // 0x8033275C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332760: addiu       $t5, $t5, -0x1D50
    ctx->r13 = ADD32(ctx->r13, -0X1D50);
    // 0x80332764: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80332768: nop

    // 0x8033276C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80332770: beq         $t7, $zero, L_803327B8
    if (ctx->r15 == 0) {
        // 0x80332774: nop
    
            goto L_803327B8;
    }
    // 0x80332774: nop

    // 0x80332778: jal         0x80331334
    // 0x8033277C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_11;
    // 0x8033277C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80332780: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80332784: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80332788: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033278C: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80332790: jal         0x8033058C
    // 0x80332794: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_12;
    // 0x80332794: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80332798: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033279C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327A0: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x803327A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803327A8: jal         0x800178D4
    // 0x803327AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_13;
    // 0x803327AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x803327B0: b           L_80332870
    // 0x803327B4: nop

        goto L_80332870;
    // 0x803327B4: nop

L_803327B8:
    // 0x803327B8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803327BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803327C0: beq         $t8, $at, L_803327D4
    if (ctx->r24 == ctx->r1) {
        // 0x803327C4: nop
    
            goto L_803327D4;
    }
    // 0x803327C4: nop

    // 0x803327C8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x803327CC: bne         $t8, $at, L_80332818
    if (ctx->r24 != ctx->r1) {
        // 0x803327D0: nop
    
            goto L_80332818;
    }
    // 0x803327D0: nop

L_803327D4:
    // 0x803327D4: jal         0x80331334
    // 0x803327D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x803327D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x803327DC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803327E0: lw          $t9, 0x342C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X342C);
    // 0x803327E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803327E8: xori        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 ^ 0X2;
    // 0x803327EC: sw          $t0, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r8;
    // 0x803327F0: jal         0x80331334
    // 0x803327F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_15;
    // 0x803327F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x803327F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803327FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332800: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80332804: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332808: jal         0x800178D4
    // 0x8033280C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_16;
    // 0x8033280C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x80332810: b           L_80332870
    // 0x80332814: nop

        goto L_80332870;
    // 0x80332814: nop

L_80332818:
    // 0x80332818: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8033281C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332820: beq         $t1, $at, L_80332834
    if (ctx->r9 == ctx->r1) {
        // 0x80332824: nop
    
            goto L_80332834;
    }
    // 0x80332824: nop

    // 0x80332828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033282C: bne         $t1, $at, L_80332870
    if (ctx->r9 != ctx->r1) {
        // 0x80332830: nop
    
            goto L_80332870;
    }
    // 0x80332830: nop

L_80332834:
    // 0x80332834: jal         0x80331334
    // 0x80332838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_17;
    // 0x80332838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x8033283C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80332840: lw          $t2, 0x342C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X342C);
    // 0x80332844: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332848: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x8033284C: sw          $t3, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r11;
    // 0x80332850: jal         0x80331334
    // 0x80332854: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_18;
    // 0x80332854: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80332858: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033285C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332860: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80332864: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332868: jal         0x800178D4
    // 0x8033286C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_19;
    // 0x8033286C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
L_80332870:
    // 0x80332870: b           L_80332878
    // 0x80332874: nop

        goto L_80332878;
    // 0x80332874: nop

L_80332878:
    // 0x80332878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033287C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332880: jr          $ra
    // 0x80332884: nop

    return;
    // 0x80332884: nop

;}
RECOMP_FUNC void func_80333164_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033316C: jal         0x8001ECB8
    // 0x80333170: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80333170: nop

    after_0:
    // 0x80333174: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80333178: addiu       $t6, $t6, 0x2A90
    ctx->r14 = ADD32(ctx->r14, 0X2A90);
    // 0x8033317C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80333180: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80333184: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80333188: addiu       $t7, $t7, 0x2888
    ctx->r15 = ADD32(ctx->r15, 0X2888);
    // 0x8033318C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80333190: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80333194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80333198: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x8033319C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803331A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331A4: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x803331A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803331AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331B0: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803331B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803331B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331BC: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x803331C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803331C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331C8: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x803331CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803331D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331D4: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x803331D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803331DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331E0: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x803331E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803331E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331EC: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x803331F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803331F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803331F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803331FC: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80333200: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80333208: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x8033320C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80333210: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333214: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80333218: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8033321C: jal         0x80019C84
    // 0x80333220: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80333220: nop

    after_1:
    // 0x80333224: jal         0x80019D2C
    // 0x80333228: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80333228: nop

    after_2:
    // 0x8033322C: jal         0x8001A258
    // 0x80333230: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80333230: nop

    after_3:
    // 0x80333234: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80333238: addiu       $t8, $t8, 0x534
    ctx->r24 = ADD32(ctx->r24, 0X534);
    // 0x8033323C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80333240: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80333244: jal         0x80060278
    // 0x80333248: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80333248: nop

    after_4:
    // 0x8033324C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80333250: jal         0x8006031C
    // 0x80333254: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    func_8006031C(rdram, ctx);
        goto after_5;
    // 0x80333254: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    after_5:
    // 0x80333258: jal         0x80332D30
    // 0x8033325C: nop

    func_80332D30_unk_bin_4(rdram, ctx);
        goto after_6;
    // 0x8033325C: nop

    after_6:
    // 0x80333260: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80333264: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80333268: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8033326C: jal         0x8001D244
    // 0x80333270: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x80333270: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x80333274: jal         0x8001D284
    // 0x80333278: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x80333278: nop

    after_8:
    // 0x8033327C: jal         0x80000964
    // 0x80333280: nop

    func_80000964(rdram, ctx);
        goto after_9;
    // 0x80333280: nop

    after_9:
    // 0x80333284: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x80333288: lw          $v0, 0x3430($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3430);
    // 0x8033328C: b           L_8033329C
    // 0x80333290: nop

        goto L_8033329C;
    // 0x80333290: nop

    // 0x80333294: b           L_8033329C
    // 0x80333298: nop

        goto L_8033329C;
    // 0x80333298: nop

L_8033329C:
    // 0x8033329C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803332A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803332A4: jr          $ra
    // 0x803332A8: nop

    return;
    // 0x803332A8: nop

    // 0x803332AC: nop

;}
RECOMP_FUNC void func_80330180_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330188: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033018C: lb          $t6, 0x3444($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X3444);
    // 0x80330190: nop

    // 0x80330194: bne         $t6, $zero, L_803301AC
    if (ctx->r14 != 0) {
        // 0x80330198: nop
    
            goto L_803301AC;
    }
    // 0x80330198: nop

    // 0x8033019C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301A0: sh          $zero, 0x3446($at)
    MEM_H(0X3446, ctx->r1) = 0;
    // 0x803301A4: b           L_80330254
    // 0x803301A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_80330254;
    // 0x803301A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_803301AC:
    // 0x803301AC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803301B0: lh          $t7, 0x3446($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X3446);
    // 0x803301B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301B8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803301BC: sh          $t8, 0x3446($at)
    MEM_H(0X3446, ctx->r1) = ctx->r24;
    // 0x803301C0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803301C4: lh          $t9, 0x3446($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X3446);
    // 0x803301C8: nop

    // 0x803301CC: slti        $at, $t9, 0x5A
    ctx->r1 = SIGNED(ctx->r25) < 0X5A ? 1 : 0;
    // 0x803301D0: beq         $at, $zero, L_803301E4
    if (ctx->r1 == 0) {
        // 0x803301D4: nop
    
            goto L_803301E4;
    }
    // 0x803301D4: nop

    // 0x803301D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803301DC: b           L_80330254
    // 0x803301E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_80330254;
    // 0x803301E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_803301E4:
    // 0x803301E4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803301E8: lh          $t1, 0x3446($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X3446);
    // 0x803301EC: nop

    // 0x803301F0: slti        $at, $t1, 0x78
    ctx->r1 = SIGNED(ctx->r9) < 0X78 ? 1 : 0;
    // 0x803301F4: beq         $at, $zero, L_80330204
    if (ctx->r1 == 0) {
        // 0x803301F8: nop
    
            goto L_80330204;
    }
    // 0x803301F8: nop

    // 0x803301FC: b           L_80330254
    // 0x80330200: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_80330254;
    // 0x80330200: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80330204:
    // 0x80330204: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330208: lh          $t2, 0x3446($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X3446);
    // 0x8033020C: nop

    // 0x80330210: slti        $at, $t2, 0xD2
    ctx->r1 = SIGNED(ctx->r10) < 0XD2 ? 1 : 0;
    // 0x80330214: beq         $at, $zero, L_80330228
    if (ctx->r1 == 0) {
        // 0x80330218: nop
    
            goto L_80330228;
    }
    // 0x80330218: nop

    // 0x8033021C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330220: b           L_80330254
    // 0x80330224: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_80330254;
    // 0x80330224: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80330228:
    // 0x80330228: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x8033022C: lh          $t4, 0x3446($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X3446);
    // 0x80330230: nop

    // 0x80330234: slti        $at, $t4, 0xF0
    ctx->r1 = SIGNED(ctx->r12) < 0XF0 ? 1 : 0;
    // 0x80330238: beq         $at, $zero, L_80330248
    if (ctx->r1 == 0) {
        // 0x8033023C: nop
    
            goto L_80330248;
    }
    // 0x8033023C: nop

    // 0x80330240: b           L_80330254
    // 0x80330244: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_80330254;
    // 0x80330244: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80330248:
    // 0x80330248: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033024C: sh          $zero, 0x3446($at)
    MEM_H(0X3446, ctx->r1) = 0;
    // 0x80330250: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80330254:
    // 0x80330254: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330258: lb          $t5, 0x3444($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X3444);
    // 0x8033025C: nop

    // 0x80330260: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80330264: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80330268: beq         $at, $zero, L_80330574
    if (ctx->r1 == 0) {
        // 0x8033026C: nop
    
            goto L_80330574;
    }
    // 0x8033026C: nop

    // 0x80330270: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330274: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330278: addu        $at, $at, $t6
    gpr jr_addend_80330284 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033027C: lw          $t6, 0x33E0($at)
    ctx->r14 = ADD32(ctx->r1, 0X33E0);
    // 0x80330280: nop

    // 0x80330284: jr          $t6
    // 0x80330288: nop

    switch (jr_addend_80330284 >> 2) {
        case 0: goto L_8033028C; break;
        case 1: goto L_803302F8; break;
        case 2: goto L_80330364; break;
        case 3: goto L_803303E8; break;
        case 4: goto L_8033046C; break;
        case 5: goto L_803304F0; break;
        default: switch_error(__func__, 0x80330284, 0x803333E0);
    }
    // 0x80330288: nop

L_8033028C:
    // 0x8033028C: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x80330290: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330294: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x80330298: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x8033029C: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    // 0x803302A0: jal         0x80063200
    // 0x803302A4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_80063200(rdram, ctx);
        goto after_0;
    // 0x803302A4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x803302A8: jal         0x8006357C
    // 0x803302AC: nop

    func_8006357C(rdram, ctx);
        goto after_1;
    // 0x803302AC: nop

    after_1:
    // 0x803302B0: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803302B4: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803302B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803302BC: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x803302C0: jal         0x80063C58
    // 0x803302C4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_80063C58(rdram, ctx);
        goto after_2;
    // 0x803302C4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_2:
    // 0x803302C8: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803302CC: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803302D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803302D4: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x803302D8: jal         0x80063C58
    // 0x803302DC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063C58(rdram, ctx);
        goto after_3;
    // 0x803302DC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_3:
    // 0x803302E0: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x803302E4: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x803302E8: jal         0x80063BE8
    // 0x803302EC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063BE8(rdram, ctx);
        goto after_4;
    // 0x803302EC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_4:
    // 0x803302F0: b           L_80330574
    // 0x803302F4: nop

        goto L_80330574;
    // 0x803302F4: nop

L_803302F8:
    // 0x803302F8: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x803302FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330300: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x80330304: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330308: addiu       $a2, $zero, 0xFC
    ctx->r6 = ADD32(0, 0XFC);
    // 0x8033030C: jal         0x80063200
    // 0x80330310: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_80063200(rdram, ctx);
        goto after_5;
    // 0x80330310: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_5:
    // 0x80330314: jal         0x8006357C
    // 0x80330318: nop

    func_8006357C(rdram, ctx);
        goto after_6;
    // 0x80330318: nop

    after_6:
    // 0x8033031C: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330320: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x80330324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330328: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x8033032C: jal         0x80063C58
    // 0x80330330: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_80063C58(rdram, ctx);
        goto after_7;
    // 0x80330330: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_7:
    // 0x80330334: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330338: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x8033033C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330340: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330344: jal         0x80063C58
    // 0x80330348: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063C58(rdram, ctx);
        goto after_8;
    // 0x80330348: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_8:
    // 0x8033034C: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x80330350: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    // 0x80330354: jal         0x80063BE8
    // 0x80330358: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_80063BE8(rdram, ctx);
        goto after_9;
    // 0x80330358: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_9:
    // 0x8033035C: b           L_80330574
    // 0x80330360: nop

        goto L_80330574;
    // 0x80330360: nop

L_80330364:
    // 0x80330364: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x80330368: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033036C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80330370: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x80330374: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x80330378: jal         0x80063200
    // 0x8033037C: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    func_80063200(rdram, ctx);
        goto after_10;
    // 0x8033037C: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_10:
    // 0x80330380: jal         0x8006357C
    // 0x80330384: nop

    func_8006357C(rdram, ctx);
        goto after_11;
    // 0x80330384: nop

    after_11:
    // 0x80330388: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033038C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330390: bne         $t0, $at, L_803303B8
    if (ctx->r8 != ctx->r1) {
        // 0x80330394: nop
    
            goto L_803303B8;
    }
    // 0x80330394: nop

    // 0x80330398: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x8033039C: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803303A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803303A4: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    // 0x803303A8: jal         0x80063C58
    // 0x803303AC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_12;
    // 0x803303AC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_12:
    // 0x803303B0: b           L_803303E0
    // 0x803303B4: nop

        goto L_803303E0;
    // 0x803303B4: nop

L_803303B8:
    // 0x803303B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803303C0: bne         $t1, $at, L_803303E0
    if (ctx->r9 != ctx->r1) {
        // 0x803303C4: nop
    
            goto L_803303E0;
    }
    // 0x803303C4: nop

    // 0x803303C8: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803303CC: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803303D0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803303D4: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x803303D8: jal         0x80063C58
    // 0x803303DC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_13;
    // 0x803303DC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_13:
L_803303E0:
    // 0x803303E0: b           L_80330574
    // 0x803303E4: nop

        goto L_80330574;
    // 0x803303E4: nop

L_803303E8:
    // 0x803303E8: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x803303EC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803303F0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x803303F4: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x803303F8: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x803303FC: jal         0x80063200
    // 0x80330400: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    func_80063200(rdram, ctx);
        goto after_14;
    // 0x80330400: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_14:
    // 0x80330404: jal         0x8006357C
    // 0x80330408: nop

    func_8006357C(rdram, ctx);
        goto after_15;
    // 0x80330408: nop

    after_15:
    // 0x8033040C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330414: bne         $t3, $at, L_8033043C
    if (ctx->r11 != ctx->r1) {
        // 0x80330418: nop
    
            goto L_8033043C;
    }
    // 0x80330418: nop

    // 0x8033041C: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330420: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x80330424: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80330428: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8033042C: jal         0x80063C58
    // 0x80330430: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_16;
    // 0x80330430: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_16:
    // 0x80330434: b           L_80330464
    // 0x80330438: nop

        goto L_80330464;
    // 0x80330438: nop

L_8033043C:
    // 0x8033043C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330440: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330444: bne         $t4, $at, L_80330464
    if (ctx->r12 != ctx->r1) {
        // 0x80330448: nop
    
            goto L_80330464;
    }
    // 0x80330448: nop

    // 0x8033044C: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330450: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x80330454: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80330458: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x8033045C: jal         0x80063C58
    // 0x80330460: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_17;
    // 0x80330460: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_17:
L_80330464:
    // 0x80330464: b           L_80330574
    // 0x80330468: nop

        goto L_80330574;
    // 0x80330468: nop

L_8033046C:
    // 0x8033046C: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x80330470: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330474: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80330478: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x8033047C: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x80330480: jal         0x80063200
    // 0x80330484: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    func_80063200(rdram, ctx);
        goto after_18;
    // 0x80330484: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_18:
    // 0x80330488: jal         0x8006357C
    // 0x8033048C: nop

    func_8006357C(rdram, ctx);
        goto after_19;
    // 0x8033048C: nop

    after_19:
    // 0x80330490: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330494: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330498: bne         $t6, $at, L_803304C0
    if (ctx->r14 != ctx->r1) {
        // 0x8033049C: nop
    
            goto L_803304C0;
    }
    // 0x8033049C: nop

    // 0x803304A0: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803304A4: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803304A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803304AC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x803304B0: jal         0x80063C58
    // 0x803304B4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_20;
    // 0x803304B4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_20:
    // 0x803304B8: b           L_803304E8
    // 0x803304BC: nop

        goto L_803304E8;
    // 0x803304BC: nop

L_803304C0:
    // 0x803304C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803304C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803304C8: bne         $t7, $at, L_803304E8
    if (ctx->r15 != ctx->r1) {
        // 0x803304CC: nop
    
            goto L_803304E8;
    }
    // 0x803304CC: nop

    // 0x803304D0: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803304D4: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x803304D8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803304DC: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x803304E0: jal         0x80063C58
    // 0x803304E4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_21;
    // 0x803304E4: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_21:
L_803304E8:
    // 0x803304E8: b           L_80330574
    // 0x803304EC: nop

        goto L_80330574;
    // 0x803304EC: nop

L_803304F0:
    // 0x803304F0: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x803304F4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803304F8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x803304FC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x80330500: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x80330504: jal         0x80063200
    // 0x80330508: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    func_80063200(rdram, ctx);
        goto after_22;
    // 0x80330508: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_22:
    // 0x8033050C: jal         0x8006357C
    // 0x80330510: nop

    func_8006357C(rdram, ctx);
        goto after_23;
    // 0x80330510: nop

    after_23:
    // 0x80330514: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033051C: bne         $t9, $at, L_80330544
    if (ctx->r25 != ctx->r1) {
        // 0x80330520: nop
    
            goto L_80330544;
    }
    // 0x80330520: nop

    // 0x80330524: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330528: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x8033052C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80330530: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330534: jal         0x80063C58
    // 0x80330538: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_24;
    // 0x80330538: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_24:
    // 0x8033053C: b           L_8033056C
    // 0x80330540: nop

        goto L_8033056C;
    // 0x80330540: nop

L_80330544:
    // 0x80330544: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330548: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033054C: bne         $t0, $at, L_8033056C
    if (ctx->r8 != ctx->r1) {
        // 0x80330550: nop
    
            goto L_8033056C;
    }
    // 0x80330550: nop

    // 0x80330554: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330558: addiu       $a3, $a3, 0x32B0
    ctx->r7 = ADD32(ctx->r7, 0X32B0);
    // 0x8033055C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80330560: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330564: jal         0x80063C58
    // 0x80330568: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_25;
    // 0x80330568: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_25:
L_8033056C:
    // 0x8033056C: b           L_80330574
    // 0x80330570: nop

        goto L_80330574;
    // 0x80330570: nop

L_80330574:
    // 0x80330574: b           L_8033057C
    // 0x80330578: nop

        goto L_8033057C;
    // 0x80330578: nop

L_8033057C:
    // 0x8033057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330584: jr          $ra
    // 0x80330588: nop

    return;
    // 0x80330588: nop

;}
RECOMP_FUNC void func_80332304_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332304: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332308: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033230C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80332310: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80332314: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332318: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x8033231C: nop

    // 0x80332320: bne         $t6, $zero, L_80332354
    if (ctx->r14 != 0) {
        // 0x80332324: nop
    
            goto L_80332354;
    }
    // 0x80332324: nop

    // 0x80332328: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033232C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332330: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80332334: jal         0x80331334
    // 0x80332338: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80332338: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8033233C: jal         0x803305AC
    // 0x80332340: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_1;
    // 0x80332340: nop

    after_1:
    // 0x80332344: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332348: sw          $zero, 0x343C($at)
    MEM_W(0X343C, ctx->r1) = 0;
    // 0x8033234C: jal         0x8033058C
    // 0x80332350: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_2;
    // 0x80332350: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
L_80332354:
    // 0x80332354: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x80332358: lw          $s0, 0x343C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X343C);
    // 0x8033235C: nop

    // 0x80332360: beq         $s0, $zero, L_8033237C
    if (ctx->r16 == 0) {
        // 0x80332364: nop
    
            goto L_8033237C;
    }
    // 0x80332364: nop

    // 0x80332368: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033236C: beq         $s0, $at, L_80332538
    if (ctx->r16 == ctx->r1) {
        // 0x80332370: nop
    
            goto L_80332538;
    }
    // 0x80332370: nop

    // 0x80332374: b           L_80332610
    // 0x80332378: nop

        goto L_80332610;
    // 0x80332378: nop

L_8033237C:
    // 0x8033237C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80332380: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80332384: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80332388: nop

    // 0x8033238C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80332390: beq         $t0, $zero, L_8033241C
    if (ctx->r8 == 0) {
        // 0x80332394: nop
    
            goto L_8033241C;
    }
    // 0x80332394: nop

    // 0x80332398: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033239C: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x803323A0: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x803323A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803323A8: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x803323AC: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x803323B0: jal         0x800252AC
    // 0x803323B4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_3;
    // 0x803323B4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_3:
    // 0x803323B8: lb          $t2, 0x37($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X37);
    // 0x803323BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803323C0: bne         $t2, $at, L_803323E8
    if (ctx->r10 != ctx->r1) {
        // 0x803323C4: nop
    
            goto L_803323E8;
    }
    // 0x803323C4: nop

    // 0x803323C8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803323CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323D0: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x803323D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803323D8: jal         0x800178D4
    // 0x803323DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x803323DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x803323E0: b           L_80332414
    // 0x803323E4: nop

        goto L_80332414;
    // 0x803323E4: nop

L_803323E8:
    // 0x803323E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803323EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803323F0: sw          $t3, 0x343C($at)
    MEM_W(0X343C, ctx->r1) = ctx->r11;
    // 0x803323F4: jal         0x80330000
    // 0x803323F8: nop

    func_80330000_unk_bin_4(rdram, ctx);
        goto after_5;
    // 0x803323F8: nop

    after_5:
    // 0x803323FC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80332400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332404: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80332408: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033240C: jal         0x800178D4
    // 0x80332410: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x80332410: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_80332414:
    // 0x80332414: b           L_80332530
    // 0x80332418: nop

        goto L_80332530;
    // 0x80332418: nop

L_8033241C:
    // 0x8033241C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80332420: addiu       $t4, $t4, -0x1D50
    ctx->r12 = ADD32(ctx->r12, -0X1D50);
    // 0x80332424: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80332428: nop

    // 0x8033242C: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x80332430: beq         $t6, $zero, L_80332478
    if (ctx->r14 == 0) {
        // 0x80332434: nop
    
            goto L_80332478;
    }
    // 0x80332434: nop

    // 0x80332438: jal         0x80331334
    // 0x8033243C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_7;
    // 0x8033243C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80332440: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80332444: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80332448: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033244C: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80332450: jal         0x8033058C
    // 0x80332454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_8;
    // 0x80332454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80332458: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033245C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332460: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80332464: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332468: jal         0x800178D4
    // 0x8033246C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_9;
    // 0x8033246C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80332470: b           L_80332530
    // 0x80332474: nop

        goto L_80332530;
    // 0x80332474: nop

L_80332478:
    // 0x80332478: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8033247C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332480: beq         $t7, $at, L_80332494
    if (ctx->r15 == ctx->r1) {
        // 0x80332484: nop
    
            goto L_80332494;
    }
    // 0x80332484: nop

    // 0x80332488: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8033248C: bne         $t7, $at, L_803324D8
    if (ctx->r15 != ctx->r1) {
        // 0x80332490: nop
    
            goto L_803324D8;
    }
    // 0x80332490: nop

L_80332494:
    // 0x80332494: jal         0x80331334
    // 0x80332498: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_10;
    // 0x80332498: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x8033249C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803324A0: lw          $t8, 0x342C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X342C);
    // 0x803324A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324A8: xori        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 ^ 0X2;
    // 0x803324AC: sw          $t9, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r25;
    // 0x803324B0: jal         0x80331334
    // 0x803324B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_11;
    // 0x803324B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x803324B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803324BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324C0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803324C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803324C8: jal         0x800178D4
    // 0x803324CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x803324CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x803324D0: b           L_80332530
    // 0x803324D4: nop

        goto L_80332530;
    // 0x803324D4: nop

L_803324D8:
    // 0x803324D8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x803324DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803324E0: beq         $t0, $at, L_803324F4
    if (ctx->r8 == ctx->r1) {
        // 0x803324E4: nop
    
            goto L_803324F4;
    }
    // 0x803324E4: nop

    // 0x803324E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803324EC: bne         $t0, $at, L_80332530
    if (ctx->r8 != ctx->r1) {
        // 0x803324F0: nop
    
            goto L_80332530;
    }
    // 0x803324F0: nop

L_803324F4:
    // 0x803324F4: jal         0x80331334
    // 0x803324F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_13;
    // 0x803324F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x803324FC: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80332500: lw          $t1, 0x342C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X342C);
    // 0x80332504: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332508: xori        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 ^ 0X1;
    // 0x8033250C: sw          $t2, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r10;
    // 0x80332510: jal         0x80331334
    // 0x80332514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x80332514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80332518: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033251C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332520: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80332524: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332528: jal         0x800178D4
    // 0x8033252C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_15;
    // 0x8033252C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
L_80332530:
    // 0x80332530: b           L_80332610
    // 0x80332534: nop

        goto L_80332610;
    // 0x80332534: nop

L_80332538:
    // 0x80332538: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033253C: jal         0x8033001C
    // 0x80332540: nop

    func_8033001C_unk_bin_4(rdram, ctx);
        goto after_16;
    // 0x80332540: nop

    after_16:
    // 0x80332544: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332548: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8033254C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332550: bne         $t3, $at, L_803325D8
    if (ctx->r11 != ctx->r1) {
        // 0x80332554: nop
    
            goto L_803325D8;
    }
    // 0x80332554: nop

    // 0x80332558: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033255C: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332560: jal         0x80025D4C
    // 0x80332564: nop

    func_80025D4C(rdram, ctx);
        goto after_17;
    // 0x80332564: nop

    after_17:
    // 0x80332568: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033256C: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332570: jal         0x80024EF4
    // 0x80332574: nop

    func_80024EF4(rdram, ctx);
        goto after_18;
    // 0x80332574: nop

    after_18:
    // 0x80332578: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x8033257C: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332580: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80332584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332588: jal         0x8033078C
    // 0x8033258C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_19;
    // 0x8033258C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x80332590: jal         0x80331334
    // 0x80332594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_20;
    // 0x80332594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x80332598: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8033259C: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x803325A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803325A4: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x803325A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803325AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803325B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803325B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x803325B8: jal         0x800631A8
    // 0x803325BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800631A8(rdram, ctx);
        goto after_21;
    // 0x803325BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x803325C0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803325C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803325C8: jal         0x80063158
    // 0x803325CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80063158(rdram, ctx);
        goto after_22;
    // 0x803325CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x803325D0: b           L_80332608
    // 0x803325D4: nop

        goto L_80332608;
    // 0x803325D4: nop

L_803325D8:
    // 0x803325D8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803325DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803325E0: bne         $t4, $at, L_80332608
    if (ctx->r12 != ctx->r1) {
        // 0x803325E4: nop
    
            goto L_80332608;
    }
    // 0x803325E4: nop

    // 0x803325E8: jal         0x80331334
    // 0x803325EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_23;
    // 0x803325EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x803325F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803325F4: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x803325F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803325FC: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80332600: jal         0x8033058C
    // 0x80332604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_24;
    // 0x80332604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
L_80332608:
    // 0x80332608: b           L_80332610
    // 0x8033260C: nop

        goto L_80332610;
    // 0x8033260C: nop

L_80332610:
    // 0x80332610: b           L_80332618
    // 0x80332614: nop

        goto L_80332618;
    // 0x80332614: nop

L_80332618:
    // 0x80332618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033261C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80332620: jr          $ra
    // 0x80332624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80332624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803315F0_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803315F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803315F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803315FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331600: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331604: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x80331608: nop

    // 0x8033160C: bne         $t6, $zero, L_80331628
    if (ctx->r14 != 0) {
        // 0x80331610: nop
    
            goto L_80331628;
    }
    // 0x80331610: nop

    // 0x80331614: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331618: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033161C: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80331620: jal         0x803305AC
    // 0x80331624: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80331624: nop

    after_0:
L_80331628:
    // 0x80331628: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033162C: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80331630: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80331634: nop

    // 0x80331638: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x8033163C: beq         $t0, $zero, L_80331754
    if (ctx->r8 == 0) {
        // 0x80331640: nop
    
            goto L_80331754;
    }
    // 0x80331640: nop

    // 0x80331644: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331648: lw          $t1, 0x3424($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3424);
    // 0x8033164C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80331650: bne         $t1, $at, L_8033169C
    if (ctx->r9 != ctx->r1) {
        // 0x80331654: nop
    
            goto L_8033169C;
    }
    // 0x80331654: nop

    // 0x80331658: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033165C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331660: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331664: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331668: jal         0x800178D4
    // 0x8033166C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8033166C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80331670: jal         0x80016DB4
    // 0x80331674: nop

    func_80016DB4(rdram, ctx);
        goto after_2;
    // 0x80331674: nop

    after_2:
    // 0x80331678: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8033167C: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80331680: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80331684: jal         0x80016D74
    // 0x80331688: xori        $a0, $s0, 0x1
    ctx->r4 = ctx->r16 ^ 0X1;
    func_80016D74(rdram, ctx);
        goto after_3;
    // 0x80331688: xori        $a0, $s0, 0x1
    ctx->r4 = ctx->r16 ^ 0X1;
    after_3:
    // 0x8033168C: jal         0x80331520
    // 0x80331690: nop

    func_80331520_unk_bin_4(rdram, ctx);
        goto after_4;
    // 0x80331690: nop

    after_4:
    // 0x80331694: b           L_8033174C
    // 0x80331698: nop

        goto L_8033174C;
    // 0x80331698: nop

L_8033169C:
    // 0x8033169C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803316A0: lw          $t3, 0x3424($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3424);
    // 0x803316A4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803316A8: bne         $t3, $at, L_80331710
    if (ctx->r11 != ctx->r1) {
        // 0x803316AC: nop
    
            goto L_80331710;
    }
    // 0x803316AC: nop

    // 0x803316B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803316B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803316BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803316C0: jal         0x800178D4
    // 0x803316C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x803316C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x803316C8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803316CC: lw          $t4, 0x3424($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3424);
    // 0x803316D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803316D4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x803316D8: sw          $t5, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = ctx->r13;
    // 0x803316DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803316E0: sb          $zero, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = 0;
    // 0x803316E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x803316E8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x803316EC: jal         0x800251D4
    // 0x803316F0: nop

    func_800251D4(rdram, ctx);
        goto after_6;
    // 0x803316F0: nop

    after_6:
    // 0x803316F4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803316F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803316FC: sw          $t6, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = ctx->r14;
    // 0x80331700: jal         0x8001D2C0
    // 0x80331704: nop

    func_8001D2C0(rdram, ctx);
        goto after_7;
    // 0x80331704: nop

    after_7:
    // 0x80331708: b           L_8033174C
    // 0x8033170C: nop

        goto L_8033174C;
    // 0x8033170C: nop

L_80331710:
    // 0x80331710: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331714: lw          $t7, 0x3424($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3424);
    // 0x80331718: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8033171C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331720: sw          $t8, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = ctx->r24;
    // 0x80331724: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331728: sw          $zero, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = 0;
    // 0x8033172C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331730: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80331734: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033173C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331740: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331744: jal         0x800178D4
    // 0x80331748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x80331748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_8033174C:
    // 0x8033174C: b           L_803318B4
    // 0x80331750: nop

        goto L_803318B4;
    // 0x80331750: nop

L_80331754:
    // 0x80331754: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331758: addiu       $t9, $t9, -0x1D50
    ctx->r25 = ADD32(ctx->r25, -0X1D50);
    // 0x8033175C: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80331760: nop

    // 0x80331764: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x80331768: beq         $t1, $zero, L_803317A4
    if (ctx->r9 == 0) {
        // 0x8033176C: nop
    
            goto L_803317A4;
    }
    // 0x8033176C: nop

    // 0x80331770: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331778: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x8033177C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331780: jal         0x800178D4
    // 0x80331784: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_9;
    // 0x80331784: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80331788: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8033178C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331790: sw          $t2, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = ctx->r10;
    // 0x80331794: jal         0x8001D2C0
    // 0x80331798: nop

    func_8001D2C0(rdram, ctx);
        goto after_10;
    // 0x80331798: nop

    after_10:
    // 0x8033179C: b           L_803318B4
    // 0x803317A0: nop

        goto L_803318B4;
    // 0x803317A0: nop

L_803317A4:
    // 0x803317A4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803317A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803317AC: bne         $t3, $at, L_8033181C
    if (ctx->r11 != ctx->r1) {
        // 0x803317B0: nop
    
            goto L_8033181C;
    }
    // 0x803317B0: nop

    // 0x803317B4: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803317B8: lw          $t4, 0x3424($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3424);
    // 0x803317BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803317C0: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x803317C4: bgez        $t5, L_803317FC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x803317C8: sw          $t5, 0x3424($at)
        MEM_W(0X3424, ctx->r1) = ctx->r13;
            goto L_803317FC;
    }
    // 0x803317C8: sw          $t5, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r13;
    // 0x803317CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317D0: lb          $t6, 0x76F8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X76F8);
    // 0x803317D4: nop

    // 0x803317D8: beq         $t6, $zero, L_803317F0
    if (ctx->r14 == 0) {
        // 0x803317DC: nop
    
            goto L_803317F0;
    }
    // 0x803317DC: nop

    // 0x803317E0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x803317E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803317E8: b           L_803317FC
    // 0x803317EC: sw          $t7, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r15;
        goto L_803317FC;
    // 0x803317EC: sw          $t7, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r15;
L_803317F0:
    // 0x803317F0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803317F4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803317F8: sw          $t8, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r24;
L_803317FC:
    // 0x803317FC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331804: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331808: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033180C: jal         0x800178D4
    // 0x80331810: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80331810: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80331814: b           L_803318B4
    // 0x80331818: nop

        goto L_803318B4;
    // 0x80331818: nop

L_8033181C:
    // 0x8033181C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80331820: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331824: bne         $t9, $at, L_803318B4
    if (ctx->r25 != ctx->r1) {
        // 0x80331828: nop
    
            goto L_803318B4;
    }
    // 0x80331828: nop

    // 0x8033182C: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331830: lw          $t0, 0x3424($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3424);
    // 0x80331834: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331838: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8033183C: sw          $t1, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r9;
    // 0x80331840: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80331844: lb          $t2, 0x76F8($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X76F8);
    // 0x80331848: nop

    // 0x8033184C: beq         $t2, $zero, L_8033187C
    if (ctx->r10 == 0) {
        // 0x80331850: nop
    
            goto L_8033187C;
    }
    // 0x80331850: nop

    // 0x80331854: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331858: lw          $t3, 0x3424($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3424);
    // 0x8033185C: nop

    // 0x80331860: slti        $at, $t3, 0x7
    ctx->r1 = SIGNED(ctx->r11) < 0X7 ? 1 : 0;
    // 0x80331864: bne         $at, $zero, L_80331874
    if (ctx->r1 != 0) {
        // 0x80331868: nop
    
            goto L_80331874;
    }
    // 0x80331868: nop

    // 0x8033186C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331870: sw          $zero, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = 0;
L_80331874:
    // 0x80331874: b           L_8033189C
    // 0x80331878: nop

        goto L_8033189C;
    // 0x80331878: nop

L_8033187C:
    // 0x8033187C: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331880: lw          $t4, 0x3424($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3424);
    // 0x80331884: nop

    // 0x80331888: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x8033188C: bne         $at, $zero, L_8033189C
    if (ctx->r1 != 0) {
        // 0x80331890: nop
    
            goto L_8033189C;
    }
    // 0x80331890: nop

    // 0x80331894: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331898: sw          $zero, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = 0;
L_8033189C:
    // 0x8033189C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803318A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318A4: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803318A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803318AC: jal         0x800178D4
    // 0x803318B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x803318B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_803318B4:
    // 0x803318B4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x803318B8: lw          $t5, 0x4888($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4888);
    // 0x803318BC: nop

    // 0x803318C0: bne         $t5, $zero, L_803318D8
    if (ctx->r13 != 0) {
        // 0x803318C4: nop
    
            goto L_803318D8;
    }
    // 0x803318C4: nop

    // 0x803318C8: jal         0x80331114
    // 0x803318CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331114_unk_bin_4(rdram, ctx);
        goto after_13;
    // 0x803318CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x803318D0: b           L_803318E0
    // 0x803318D4: nop

        goto L_803318E0;
    // 0x803318D4: nop

L_803318D8:
    // 0x803318D8: jal         0x80331114
    // 0x803318DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331114_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x803318DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
L_803318E0:
    // 0x803318E0: b           L_803318E8
    // 0x803318E4: nop

        goto L_803318E8;
    // 0x803318E4: nop

L_803318E8:
    // 0x803318E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803318EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803318F0: jr          $ra
    // 0x803318F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803318F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332A90_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332A94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80332A98: jal         0x8001D4D0
    // 0x80332A9C: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80332A9C: nop

    after_0:
    // 0x80332AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332AAC: jal         0x8001D638
    // 0x80332AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80332AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80332AB4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80332AB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332ABC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80332AC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332AC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332AC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AD0: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80332AD4: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80332AD8: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80332ADC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80332AE0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80332AE4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332AE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80332AEC: jal         0x80036E70
    // 0x80332AF0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80332AF0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80332AF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AF8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80332AFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B00: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80332B04: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80332B08: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80332B0C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332B10: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80332B14: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80332B18: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80332B1C: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80332B20: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332B24: nop

    // 0x80332B28: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80332B2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B30: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80332B34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B38: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80332B3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B40: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80332B44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B48: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80332B4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B50: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80332B54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B5C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80332B60: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80332B64: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332B68: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80332B6C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80332B70: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80332B74: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80332B78: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80332B7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332B80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80332B84: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80332B88: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80332B8C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80332B90: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80332B94: jal         0x80037188
    // 0x80332B98: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80332B98: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80332B9C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80332BA0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80332BA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332BA8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80332BAC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80332BB0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80332BB4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332BB8: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80332BBC: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80332BC0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80332BC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332BC8: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80332BCC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332BD0: nop

    // 0x80332BD4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80332BD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332BDC: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80332BE0: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80332BE4:
    // 0x80332BE4: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332BE8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332BEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332BF0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80332BF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332BF8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332BFC: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80332C00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332C04: bne         $t0, $at, L_80332C14
    if (ctx->r8 != ctx->r1) {
        // 0x80332C08: nop
    
            goto L_80332C14;
    }
    // 0x80332C08: nop

    // 0x80332C0C: b           L_80332D10
    // 0x80332C10: nop

        goto L_80332D10;
    // 0x80332C10: nop

L_80332C14:
    // 0x80332C14: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332C18: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80332C1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332C20: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80332C24: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332C28: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332C2C: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80332C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332C34: beq         $t3, $at, L_80332CD8
    if (ctx->r11 == ctx->r1) {
        // 0x80332C38: nop
    
            goto L_80332CD8;
    }
    // 0x80332C38: nop

    // 0x80332C3C: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332C40: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80332C44: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332C48: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80332C4C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332C50: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80332C54: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80332C58: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80332C5C: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80332C60: jal         0x8001C1A8
    // 0x80332C64: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80332C64: nop

    after_4:
    // 0x80332C68: beq         $v0, $zero, L_80332CD0
    if (ctx->r2 == 0) {
        // 0x80332C6C: nop
    
            goto L_80332CD0;
    }
    // 0x80332C6C: nop

    // 0x80332C70: jal         0x8001838C
    // 0x80332C74: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80332C74: nop

    after_5:
    // 0x80332C78: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332C7C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332C80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332C84: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80332C88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332C8C: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x80332C90: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80332C94: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x80332C98: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x80332C9C: jal         0x8001B014
    // 0x80332CA0: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x80332CA0: nop

    after_6:
    // 0x80332CA4: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332CA8: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80332CAC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332CB0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80332CB4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332CB8: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x80332CBC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80332CC0: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x80332CC4: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x80332CC8: jal         0x8001C384
    // 0x80332CCC: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80332CCC: nop

    after_7:
L_80332CD0:
    // 0x80332CD0: b           L_80332CFC
    // 0x80332CD4: nop

        goto L_80332CFC;
    // 0x80332CD4: nop

L_80332CD8:
    // 0x80332CD8: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332CDC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332CE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CE4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332CE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CEC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332CF0: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332CF4: jal         0x800623E0
    // 0x80332CF8: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80332CF8: nop

    after_8:
L_80332CFC:
    // 0x80332CFC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332D00: nop

    // 0x80332D04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332D08: b           L_80332BE4
    // 0x80332D0C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80332BE4;
    // 0x80332D0C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80332D10:
    // 0x80332D10: jal         0x80330180
    // 0x80332D14: nop

    func_80330180_unk_bin_4(rdram, ctx);
        goto after_9;
    // 0x80332D14: nop

    after_9:
    // 0x80332D18: b           L_80332D20
    // 0x80332D1C: nop

        goto L_80332D20;
    // 0x80332D1C: nop

L_80332D20:
    // 0x80332D20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80332D28: jr          $ra
    // 0x80332D2C: nop

    return;
    // 0x80332D2C: nop

;}
RECOMP_FUNC void func_803318F8_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803318FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331900: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331904: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331908: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x8033190C: nop

    // 0x80331910: bne         $t6, $zero, L_8033193C
    if (ctx->r14 != 0) {
        // 0x80331914: nop
    
            goto L_8033193C;
    }
    // 0x80331914: nop

    // 0x80331918: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033191C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331920: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80331924: jal         0x80331334
    // 0x80331928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80331928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8033192C: jal         0x803305AC
    // 0x80331930: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_1;
    // 0x80331930: nop

    after_1:
    // 0x80331934: jal         0x8033058C
    // 0x80331938: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_2;
    // 0x80331938: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_8033193C:
    // 0x8033193C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331940: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80331944: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80331948: nop

    // 0x8033194C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80331950: beq         $t0, $zero, L_803319F8
    if (ctx->r8 == 0) {
        // 0x80331954: nop
    
            goto L_803319F8;
    }
    // 0x80331954: nop

    // 0x80331958: jal         0x8033058C
    // 0x8033195C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_3;
    // 0x8033195C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80331960: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331968: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8033196C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331970: jal         0x800178D4
    // 0x80331974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80331974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80331978: jal         0x80331334
    // 0x8033197C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_5;
    // 0x8033197C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x80331980: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331984: lw          $t1, 0x342C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X342C);
    // 0x80331988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8033198C: sb          $t1, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = ctx->r9;
    // 0x80331990: jal         0x8005FBD0
    // 0x80331994: nop

    func_8005FBD0(rdram, ctx);
        goto after_6;
    // 0x80331994: nop

    after_6:
    // 0x80331998: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8033199C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x803319A0: addiu       $t2, $sp, 0x24
    ctx->r10 = ADD32(ctx->r29, 0X24);
    // 0x803319A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803319A8: addiu       $a1, $sp, 0x27
    ctx->r5 = ADD32(ctx->r29, 0X27);
    // 0x803319AC: addiu       $a2, $sp, 0x26
    ctx->r6 = ADD32(ctx->r29, 0X26);
    // 0x803319B0: jal         0x800252AC
    // 0x803319B4: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    func_800252AC(rdram, ctx);
        goto after_7;
    // 0x803319B4: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    after_7:
    // 0x803319B8: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x803319BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803319C0: bne         $t3, $at, L_803319D8
    if (ctx->r11 != ctx->r1) {
        // 0x803319C4: nop
    
            goto L_803319D8;
    }
    // 0x803319C4: nop

    // 0x803319C8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x803319CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803319D0: b           L_803319E0
    // 0x803319D4: sb          $t4, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = ctx->r12;
        goto L_803319E0;
    // 0x803319D4: sb          $t4, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = ctx->r12;
L_803319D8:
    // 0x803319D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803319DC: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
L_803319E0:
    // 0x803319E0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803319E4: sw          $zero, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = 0;
    // 0x803319E8: jal         0x8001D2C0
    // 0x803319EC: nop

    func_8001D2C0(rdram, ctx);
        goto after_8;
    // 0x803319EC: nop

    after_8:
    // 0x803319F0: b           L_80331B0C
    // 0x803319F4: nop

        goto L_80331B0C;
    // 0x803319F4: nop

L_803319F8:
    // 0x803319F8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x803319FC: addiu       $t5, $t5, -0x1D50
    ctx->r13 = ADD32(ctx->r13, -0X1D50);
    // 0x80331A00: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80331A04: nop

    // 0x80331A08: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80331A0C: beq         $t7, $zero, L_80331A54
    if (ctx->r15 == 0) {
        // 0x80331A10: nop
    
            goto L_80331A54;
    }
    // 0x80331A10: nop

    // 0x80331A14: jal         0x80331334
    // 0x80331A18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_9;
    // 0x80331A18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80331A1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80331A20: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80331A24: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A28: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80331A2C: jal         0x8033058C
    // 0x80331A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_10;
    // 0x80331A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x80331A34: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A3C: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80331A40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331A44: jal         0x800178D4
    // 0x80331A48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80331A48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80331A4C: b           L_80331B0C
    // 0x80331A50: nop

        goto L_80331B0C;
    // 0x80331A50: nop

L_80331A54:
    // 0x80331A54: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80331A58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331A5C: beq         $t8, $at, L_80331A70
    if (ctx->r24 == ctx->r1) {
        // 0x80331A60: nop
    
            goto L_80331A70;
    }
    // 0x80331A60: nop

    // 0x80331A64: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331A68: bne         $t8, $at, L_80331AB4
    if (ctx->r24 != ctx->r1) {
        // 0x80331A6C: nop
    
            goto L_80331AB4;
    }
    // 0x80331A6C: nop

L_80331A70:
    // 0x80331A70: jal         0x80331334
    // 0x80331A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_12;
    // 0x80331A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80331A78: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331A7C: lw          $t9, 0x342C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X342C);
    // 0x80331A80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A84: xori        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 ^ 0X2;
    // 0x80331A88: sw          $t0, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r8;
    // 0x80331A8C: jal         0x80331334
    // 0x80331A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_13;
    // 0x80331A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80331A94: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A9C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331AA0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331AA4: jal         0x800178D4
    // 0x80331AA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_14;
    // 0x80331AA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x80331AAC: b           L_80331B0C
    // 0x80331AB0: nop

        goto L_80331B0C;
    // 0x80331AB0: nop

L_80331AB4:
    // 0x80331AB4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331AB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331ABC: beq         $t1, $at, L_80331AD0
    if (ctx->r9 == ctx->r1) {
        // 0x80331AC0: nop
    
            goto L_80331AD0;
    }
    // 0x80331AC0: nop

    // 0x80331AC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331AC8: bne         $t1, $at, L_80331B0C
    if (ctx->r9 != ctx->r1) {
        // 0x80331ACC: nop
    
            goto L_80331B0C;
    }
    // 0x80331ACC: nop

L_80331AD0:
    // 0x80331AD0: jal         0x80331334
    // 0x80331AD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_15;
    // 0x80331AD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x80331AD8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331ADC: lw          $t2, 0x342C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X342C);
    // 0x80331AE0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AE4: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x80331AE8: sw          $t3, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r11;
    // 0x80331AEC: jal         0x80331334
    // 0x80331AF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_16;
    // 0x80331AF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x80331AF4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AFC: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331B00: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331B04: jal         0x800178D4
    // 0x80331B08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_17;
    // 0x80331B08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
L_80331B0C:
    // 0x80331B0C: b           L_80331B14
    // 0x80331B10: nop

        goto L_80331B14;
    // 0x80331B10: nop

L_80331B14:
    // 0x80331B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331B1C: jr          $ra
    // 0x80331B20: nop

    return;
    // 0x80331B20: nop

;}
RECOMP_FUNC void func_8033058C_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033058C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330590: sb          $a0, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = ctx->r4;
    // 0x80330594: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330598: sh          $zero, 0x3446($at)
    MEM_H(0X3446, ctx->r1) = 0;
    // 0x8033059C: jr          $ra
    // 0x803305A0: nop

    return;
    // 0x803305A0: nop

    // 0x803305A4: jr          $ra
    // 0x803305A8: nop

    return;
    // 0x803305A8: nop

;}
RECOMP_FUNC void func_80332D30_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332D30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332D34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332D38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332D3C: sb          $zero, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = 0;
    // 0x80332D40: jal         0x80330000
    // 0x80332D44: nop

    func_80330000_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80332D44: nop

    after_0:
    // 0x80332D48: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332D4C: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x80332D50: jal         0x80060BA4
    // 0x80332D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80060BA4(rdram, ctx);
        goto after_1;
    // 0x80332D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332D58: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332D5C: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x80332D60: jal         0x80060BA4
    // 0x80332D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80060BA4(rdram, ctx);
        goto after_2;
    // 0x80332D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80332D68: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332D6C: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x80332D70: jal         0x80060BA4
    // 0x80332D74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80060BA4(rdram, ctx);
        goto after_3;
    // 0x80332D74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80332D78: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332D7C: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x80332D80: jal         0x80060BA4
    // 0x80332D84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80060BA4(rdram, ctx);
        goto after_4;
    // 0x80332D84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80332D88: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332D8C: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x80332D90: jal         0x80060BA4
    // 0x80332D94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80060BA4(rdram, ctx);
        goto after_5;
    // 0x80332D94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80332D98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332D9C: lb          $t6, 0x76F8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X76F8);
    // 0x80332DA0: nop

    // 0x80332DA4: bne         $t6, $zero, L_80332EC8
    if (ctx->r14 != 0) {
        // 0x80332DA8: nop
    
            goto L_80332EC8;
    }
    // 0x80332DA8: nop

    // 0x80332DAC: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x80332DB0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332DB4: sw          $t7, 0x3428($at)
    MEM_W(0X3428, ctx->r1) = ctx->r15;
    // 0x80332DB8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80332DBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332DC0: nop

    // 0x80332DC4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80332DC8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80332DCC: addiu       $t8, $t8, 0x33A4
    ctx->r24 = ADD32(ctx->r24, 0X33A4);
    // 0x80332DD0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80332DD4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332DD8:
    // 0x80332DD8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80332DDC: nop

    // 0x80332DE0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80332DE4: nop

    // 0x80332DE8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80332DEC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80332DF0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80332DF8: jal         0x80060E40
    // 0x80332DFC: nop

    func_80060E40(rdram, ctx);
        goto after_6;
    // 0x80332DFC: nop

    after_6:
    // 0x80332E00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E04: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x80332E08: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332E0C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332E10: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332E14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332E18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332E1C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332E20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E24: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332E28: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80332E2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E30: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332E34: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332E38: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332E3C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332E40: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332E44: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332E48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E4C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332E50: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80332E54: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E58: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332E5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E68: lwc1        $f10, 0x3414($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3414);
    // 0x80332E6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E78: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332E7C: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80332E80: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80332E84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332E88: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332E8C: nop

    // 0x80332E90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332E94: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80332E98: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80332E9C: nop

    // 0x80332EA0: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80332EA4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80332EA8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80332EAC: nop

    // 0x80332EB0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332EB4: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80332EB8: bne         $at, $zero, L_80332DD8
    if (ctx->r1 != 0) {
        // 0x80332EBC: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_80332DD8;
    }
    // 0x80332EBC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80332EC0: b           L_80332FDC
    // 0x80332EC4: nop

        goto L_80332FDC;
    // 0x80332EC4: nop

L_80332EC8:
    // 0x80332EC8: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80332ECC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332ED0: sw          $t2, 0x3428($at)
    MEM_W(0X3428, ctx->r1) = ctx->r10;
    // 0x80332ED4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80332ED8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332EDC: nop

    // 0x80332EE0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80332EE4: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80332EE8: addiu       $t3, $t3, 0x33A4
    ctx->r11 = ADD32(ctx->r11, 0X33A4);
    // 0x80332EEC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80332EF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332EF4:
    // 0x80332EF4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80332EF8: nop

    // 0x80332EFC: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80332F00: nop

    // 0x80332F04: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80332F08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80332F0C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F10: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80332F14: jal         0x80060E40
    // 0x80332F18: nop

    func_80060E40(rdram, ctx);
        goto after_7;
    // 0x80332F18: nop

    after_7:
    // 0x80332F1C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F20: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x80332F24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332F28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332F2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332F30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332F34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332F38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F40: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332F44: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80332F48: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F4C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F50: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332F54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332F58: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332F5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332F60: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F68: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332F6C: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80332F70: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F74: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332F78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332F7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332F80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F84: lwc1        $f16, 0x3418($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3418);
    // 0x80332F88: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332F8C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332F90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F94: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F98: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x80332F9C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332FA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332FA4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332FA8: nop

    // 0x80332FAC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332FB0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80332FB4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80332FB8: nop

    // 0x80332FBC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80332FC0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80332FC4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80332FC8: nop

    // 0x80332FCC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80332FD0: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80332FD4: bne         $at, $zero, L_80332EF4
    if (ctx->r1 != 0) {
        // 0x80332FD8: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_80332EF4;
    }
    // 0x80332FD8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80332FDC:
    // 0x80332FDC: jal         0x80331520
    // 0x80332FE0: nop

    func_80331520_unk_bin_4(rdram, ctx);
        goto after_8;
    // 0x80332FE0: nop

    after_8:
    // 0x80332FE4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80332FE8: lw          $t7, 0x4888($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4888);
    // 0x80332FEC: nop

    // 0x80332FF0: bne         $t7, $zero, L_80333010
    if (ctx->r15 != 0) {
        // 0x80332FF4: nop
    
            goto L_80333010;
    }
    // 0x80332FF4: nop

    // 0x80332FF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332FFC: sw          $zero, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = 0;
    // 0x80333000: jal         0x80331114
    // 0x80333004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331114_unk_bin_4(rdram, ctx);
        goto after_9;
    // 0x80333004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80333008: b           L_80333064
    // 0x8033300C: nop

        goto L_80333064;
    // 0x8033300C: nop

L_80333010:
    // 0x80333010: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80333014: lw          $t8, 0x4888($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4888);
    // 0x80333018: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8033301C: bne         $t8, $at, L_80333048
    if (ctx->r24 != ctx->r1) {
        // 0x80333020: nop
    
            goto L_80333048;
    }
    // 0x80333020: nop

    // 0x80333024: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80333028: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x8033302C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80333030: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333034: sw          $t9, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r25;
    // 0x80333038: jal         0x80331114
    // 0x8033303C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331114_unk_bin_4(rdram, ctx);
        goto after_10;
    // 0x8033303C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80333040: b           L_80333064
    // 0x80333044: nop

        goto L_80333064;
    // 0x80333044: nop

L_80333048:
    // 0x80333048: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8033304C: lw          $t0, 0x4888($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4888);
    // 0x80333050: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333054: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80333058: sw          $t1, 0x3424($at)
    MEM_W(0X3424, ctx->r1) = ctx->r9;
    // 0x8033305C: jal         0x80331114
    // 0x80333060: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331114_unk_bin_4(rdram, ctx);
        goto after_11;
    // 0x80333060: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
L_80333064:
    // 0x80333064: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80333068: lb          $t2, 0x488C($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X488C);
    // 0x8033306C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333070: sw          $t2, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r10;
    // 0x80333074: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333078: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x8033307C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333080: sw          $zero, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = 0;
    // 0x80333084: jal         0x803305AC
    // 0x80333088: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_12;
    // 0x80333088: nop

    after_12:
    // 0x8033308C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x80333090: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80333094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80333098: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x8033309C: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x803330A0: jal         0x800252AC
    // 0x803330A4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_13;
    // 0x803330A4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_13:
    // 0x803330A8: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803330AC: lb          $a2, 0x36($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X36);
    // 0x803330B0: lb          $a3, 0x35($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X35);
    // 0x803330B4: jal         0x8033078C
    // 0x803330B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x803330B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x803330BC: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x803330C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803330C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803330C8: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x803330CC: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x803330D0: jal         0x800252AC
    // 0x803330D4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_15;
    // 0x803330D4: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_15:
    // 0x803330D8: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x803330DC: lb          $a2, 0x36($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X36);
    // 0x803330E0: lb          $a3, 0x35($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X35);
    // 0x803330E4: jal         0x8033078C
    // 0x803330E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_16;
    // 0x803330E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x803330EC: addiu       $t5, $sp, 0x34
    ctx->r13 = ADD32(ctx->r29, 0X34);
    // 0x803330F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803330F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803330F8: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x803330FC: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x80333100: jal         0x800252AC
    // 0x80333104: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_17;
    // 0x80333104: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_17:
    // 0x80333108: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x8033310C: lb          $a2, 0x36($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X36);
    // 0x80333110: lb          $a3, 0x35($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X35);
    // 0x80333114: jal         0x8033078C
    // 0x80333118: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_18;
    // 0x80333118: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x8033311C: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x80333120: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80333124: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80333128: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x8033312C: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x80333130: jal         0x800252AC
    // 0x80333134: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_19;
    // 0x80333134: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_19:
    // 0x80333138: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x8033313C: lb          $a2, 0x36($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X36);
    // 0x80333140: lb          $a3, 0x35($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X35);
    // 0x80333144: jal         0x8033078C
    // 0x80333148: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_20;
    // 0x80333148: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_20:
    // 0x8033314C: b           L_80333154
    // 0x80333150: nop

        goto L_80333154;
    // 0x80333150: nop

L_80333154:
    // 0x80333154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033315C: jr          $ra
    // 0x80333160: nop

    return;
    // 0x80333160: nop

;}
RECOMP_FUNC void func_80331B24_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331B2C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331B30: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331B34: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x80331B38: nop

    // 0x80331B3C: bne         $t6, $zero, L_80331B68
    if (ctx->r14 != 0) {
        // 0x80331B40: nop
    
            goto L_80331B68;
    }
    // 0x80331B40: nop

    // 0x80331B44: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331B48: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B4C: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80331B50: jal         0x80331334
    // 0x80331B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80331B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80331B58: jal         0x803305AC
    // 0x80331B5C: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_1;
    // 0x80331B5C: nop

    after_1:
    // 0x80331B60: jal         0x8033058C
    // 0x80331B64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_2;
    // 0x80331B64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_80331B68:
    // 0x80331B68: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331B6C: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80331B70: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80331B74: nop

    // 0x80331B78: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80331B7C: beq         $t0, $zero, L_80331C38
    if (ctx->r8 == 0) {
        // 0x80331B80: nop
    
            goto L_80331C38;
    }
    // 0x80331B80: nop

    // 0x80331B84: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80331B88: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80331B8C: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x80331B90: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331B94: addiu       $a1, $sp, 0x27
    ctx->r5 = ADD32(ctx->r29, 0X27);
    // 0x80331B98: addiu       $a2, $sp, 0x26
    ctx->r6 = ADD32(ctx->r29, 0X26);
    // 0x80331B9C: jal         0x800252AC
    // 0x80331BA0: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    func_800252AC(rdram, ctx);
        goto after_3;
    // 0x80331BA0: addiu       $a3, $sp, 0x25
    ctx->r7 = ADD32(ctx->r29, 0X25);
    after_3:
    // 0x80331BA4: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x80331BA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331BAC: bne         $t2, $at, L_80331BD4
    if (ctx->r10 != ctx->r1) {
        // 0x80331BB0: nop
    
            goto L_80331BD4;
    }
    // 0x80331BB0: nop

    // 0x80331BB4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331BBC: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80331BC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331BC4: jal         0x800178D4
    // 0x80331BC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80331BC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80331BCC: b           L_80331C30
    // 0x80331BD0: nop

        goto L_80331C30;
    // 0x80331BD0: nop

L_80331BD4:
    // 0x80331BD4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331BDC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331BE0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331BE4: jal         0x800178D4
    // 0x80331BE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80331BE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80331BEC: jal         0x8033058C
    // 0x80331BF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_6;
    // 0x80331BF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80331BF4: jal         0x80331334
    // 0x80331BF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_7;
    // 0x80331BF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x80331BFC: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331C00: lw          $t3, 0x342C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X342C);
    // 0x80331C04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80331C08: sb          $t3, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = ctx->r11;
    // 0x80331C0C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80331C10: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80331C14: jal         0x800251D4
    // 0x80331C18: nop

    func_800251D4(rdram, ctx);
        goto after_8;
    // 0x80331C18: nop

    after_8:
    // 0x80331C1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80331C20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C24: sw          $t4, 0x3430($at)
    MEM_W(0X3430, ctx->r1) = ctx->r12;
    // 0x80331C28: jal         0x8001D2C0
    // 0x80331C2C: nop

    func_8001D2C0(rdram, ctx);
        goto after_9;
    // 0x80331C2C: nop

    after_9:
L_80331C30:
    // 0x80331C30: b           L_80331D4C
    // 0x80331C34: nop

        goto L_80331D4C;
    // 0x80331C34: nop

L_80331C38:
    // 0x80331C38: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80331C3C: addiu       $t5, $t5, -0x1D50
    ctx->r13 = ADD32(ctx->r13, -0X1D50);
    // 0x80331C40: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80331C44: nop

    // 0x80331C48: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80331C4C: beq         $t7, $zero, L_80331C94
    if (ctx->r15 == 0) {
        // 0x80331C50: nop
    
            goto L_80331C94;
    }
    // 0x80331C50: nop

    // 0x80331C54: jal         0x80331334
    // 0x80331C58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_10;
    // 0x80331C58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x80331C5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80331C60: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80331C64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C68: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80331C6C: jal         0x8033058C
    // 0x80331C70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_11;
    // 0x80331C70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80331C74: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331C7C: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80331C80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331C84: jal         0x800178D4
    // 0x80331C88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x80331C88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80331C8C: b           L_80331D4C
    // 0x80331C90: nop

        goto L_80331D4C;
    // 0x80331C90: nop

L_80331C94:
    // 0x80331C94: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80331C98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331C9C: beq         $t8, $at, L_80331CB0
    if (ctx->r24 == ctx->r1) {
        // 0x80331CA0: nop
    
            goto L_80331CB0;
    }
    // 0x80331CA0: nop

    // 0x80331CA4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331CA8: bne         $t8, $at, L_80331CF4
    if (ctx->r24 != ctx->r1) {
        // 0x80331CAC: nop
    
            goto L_80331CF4;
    }
    // 0x80331CAC: nop

L_80331CB0:
    // 0x80331CB0: jal         0x80331334
    // 0x80331CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_13;
    // 0x80331CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x80331CB8: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331CBC: lw          $t9, 0x342C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X342C);
    // 0x80331CC0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331CC4: xori        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 ^ 0X2;
    // 0x80331CC8: sw          $t0, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r8;
    // 0x80331CCC: jal         0x80331334
    // 0x80331CD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x80331CD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80331CD4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CDC: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331CE0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331CE4: jal         0x800178D4
    // 0x80331CE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_15;
    // 0x80331CE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x80331CEC: b           L_80331D4C
    // 0x80331CF0: nop

        goto L_80331D4C;
    // 0x80331CF0: nop

L_80331CF4:
    // 0x80331CF4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331CF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331CFC: beq         $t1, $at, L_80331D10
    if (ctx->r9 == ctx->r1) {
        // 0x80331D00: nop
    
            goto L_80331D10;
    }
    // 0x80331D00: nop

    // 0x80331D04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331D08: bne         $t1, $at, L_80331D4C
    if (ctx->r9 != ctx->r1) {
        // 0x80331D0C: nop
    
            goto L_80331D4C;
    }
    // 0x80331D0C: nop

L_80331D10:
    // 0x80331D10: jal         0x80331334
    // 0x80331D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_16;
    // 0x80331D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x80331D18: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331D1C: lw          $t2, 0x342C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X342C);
    // 0x80331D20: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D24: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x80331D28: sw          $t3, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r11;
    // 0x80331D2C: jal         0x80331334
    // 0x80331D30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_17;
    // 0x80331D30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x80331D34: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D3C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331D40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331D44: jal         0x800178D4
    // 0x80331D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_18;
    // 0x80331D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
L_80331D4C:
    // 0x80331D4C: b           L_80331D54
    // 0x80331D50: nop

        goto L_80331D54;
    // 0x80331D50: nop

L_80331D54:
    // 0x80331D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D5C: jr          $ra
    // 0x80331D60: nop

    return;
    // 0x80331D60: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330004: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330008: sw          $t6, 0x3440($at)
    MEM_W(0X3440, ctx->r1) = ctx->r14;
    // 0x8033000C: jr          $ra
    // 0x80330010: nop

    return;
    // 0x80330010: nop

    // 0x80330014: jr          $ra
    // 0x80330018: nop

    return;
    // 0x80330018: nop

;}
RECOMP_FUNC void func_80331114_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033111C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331120: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80331124: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80331128: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033112C: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x80331130: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331134: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331138: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033113C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331140: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331144: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331148: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033114C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331150: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80331154: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331158: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x8033115C: lw          $t0, 0x3428($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3428);
    // 0x80331160: lw          $t9, 0x3424($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3424);
    // 0x80331164: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331168: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8033116C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331170: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331174: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331178: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033117C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331184: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331188: mflo        $t1
    ctx->r9 = lo;
    // 0x8033118C: addiu       $t2, $t1, 0x1D
    ctx->r10 = ADD32(ctx->r9, 0X1D);
    // 0x80331190: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80331194: nop

    // 0x80331198: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033119C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x803311A0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x803311A4: nop

    // 0x803311A8: bne         $t5, $zero, L_803312DC
    if (ctx->r13 != 0) {
        // 0x803311AC: nop
    
            goto L_803312DC;
    }
    // 0x803311AC: nop

    // 0x803311B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803311B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803311D0: lwc1        $f10, 0x4150($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x803311D4: nop

    // 0x803311D8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x803311DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803311E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803311E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803311EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803311F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803311F4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803311F8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803311FC: lwc1        $f16, 0x4154($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80331200: nop

    // 0x80331204: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80331208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033120C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331210: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331214: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331218: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033121C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331220: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331224: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331228: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8033122C: nop

    // 0x80331230: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80331234: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331238: jal         0x8001A928
    // 0x8033123C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8033123C: nop

    after_0:
    // 0x80331240: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80331244: jal         0x80060E40
    // 0x80331248: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80331248: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x8033124C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331250: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331254: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331258: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033125C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331260: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331264: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331268: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033126C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331270: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80331274: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331278: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033127C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331280: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331284: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331288: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033128C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331290: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331294: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331298: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x8033129C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803312A0: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803312A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312BC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803312C0: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x803312C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803312C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803312CC: jal         0x8001BC84
    // 0x803312D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_2;
    // 0x803312D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x803312D4: b           L_8033131C
    // 0x803312D8: nop

        goto L_8033131C;
    // 0x803312D8: nop

L_803312DC:
    // 0x803312DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803312E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803312E4: jal         0x8001BC84
    // 0x803312E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001BC84(rdram, ctx);
        goto after_3;
    // 0x803312E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803312EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803312F0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803312F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803312F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803312FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331300: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331304: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331308: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033130C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80331310: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80331314: nop

    // 0x80331318: swc1        $f10, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f10.u32l;
L_8033131C:
    // 0x8033131C: b           L_80331324
    // 0x80331320: nop

        goto L_80331324;
    // 0x80331320: nop

L_80331324:
    // 0x80331324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033132C: jr          $ra
    // 0x80331330: nop

    return;
    // 0x80331330: nop

;}
RECOMP_FUNC void func_8033078C_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033078C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330794: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80330798: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8033079C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x803307A0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x803307A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307A8: jal         0x8001A928
    // 0x803307AC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x803307AC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x803307B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307B4: jal         0x8001A928
    // 0x803307B8: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x803307B8: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_1:
    // 0x803307BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307C0: jal         0x8001A928
    // 0x803307C4: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_8001A928(rdram, ctx);
        goto after_2;
    // 0x803307C4: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_2:
    // 0x803307C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307CC: jal         0x8001A928
    // 0x803307D0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x803307D0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_3:
    // 0x803307D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307D8: jal         0x8001A928
    // 0x803307DC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    func_8001A928(rdram, ctx);
        goto after_4;
    // 0x803307DC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_4:
    // 0x803307E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307E4: jal         0x8001A928
    // 0x803307E8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    func_8001A928(rdram, ctx);
        goto after_5;
    // 0x803307E8: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    after_5:
    // 0x803307EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307F0: jal         0x8001A928
    // 0x803307F4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    func_8001A928(rdram, ctx);
        goto after_6;
    // 0x803307F4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_6:
    // 0x803307F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803307FC: jal         0x8001A928
    // 0x80330800: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    func_8001A928(rdram, ctx);
        goto after_7;
    // 0x80330800: addiu       $a0, $a0, 0x44
    ctx->r4 = ADD32(ctx->r4, 0X44);
    after_7:
    // 0x80330804: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330808: jal         0x8001A928
    // 0x8033080C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_8001A928(rdram, ctx);
        goto after_8;
    // 0x8033080C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_8:
    // 0x80330810: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80330814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033081C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033082C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80330830: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330834: lwc1        $f4, 0x4A80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A80);
    // 0x80330838: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033083C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330840: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330844: nop

    // 0x80330848: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033084C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80330850: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80330854: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330858: nop

    // 0x8033085C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80330860: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330864: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330868: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033086C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330870: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330874: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330878: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8033087C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330880: lwc1        $f8, 0x4A84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4A84);
    // 0x80330884: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80330888: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033088C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330890: nop

    // 0x80330894: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80330898: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8033089C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x803308A0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x803308A4: nop

    // 0x803308A8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803308AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803308B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803308B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803308BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803308C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803308C4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803308C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803308CC: lwc1        $f16, 0x4A88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A88);
    // 0x803308D0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x803308D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803308D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803308DC: nop

    // 0x803308E0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803308E4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x803308E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803308EC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x803308F0: nop

    // 0x803308F4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803308F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803308FC: bne         $t8, $at, L_803309CC
    if (ctx->r24 != ctx->r1) {
        // 0x80330900: nop
    
            goto L_803309CC;
    }
    // 0x80330900: nop

    // 0x80330904: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80330908: nop

    // 0x8033090C: addiu       $t0, $t9, 0x48
    ctx->r8 = ADD32(ctx->r25, 0X48);
    // 0x80330910: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80330914: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x80330918: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8033091C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330920: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330924: jal         0x80060E40
    // 0x80330928: nop

    func_80060E40(rdram, ctx);
        goto after_9;
    // 0x80330928: nop

    after_9:
    // 0x8033092C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330930: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330934: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80330938: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033093C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80330940: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330944: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330948: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033094C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330950: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330954: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330958: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033095C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330960: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330964: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330968: addiu       $t7, $t6, 0x28
    ctx->r15 = ADD32(ctx->r14, 0X28);
    // 0x8033096C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330970: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80330974: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330978: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033097C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330980: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330984: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330988: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033098C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330990: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330994: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330998: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033099C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803309A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803309A4: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x803309A8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x803309AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803309B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803309B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803309B8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803309BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803309C4: b           L_803310FC
    // 0x803309C8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
        goto L_803310FC;
    // 0x803309C8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_803309CC:
    // 0x803309CC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803309D0: nop

    // 0x803309D4: addiu       $t5, $t4, 0x48
    ctx->r13 = ADD32(ctx->r12, 0X48);
    // 0x803309D8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x803309DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803309E0: nop

    // 0x803309E4: addiu       $t7, $t6, 0x1B
    ctx->r15 = ADD32(ctx->r14, 0X1B);
    // 0x803309E8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x803309EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803309F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803309F4: jal         0x80060E40
    // 0x803309F8: nop

    func_80060E40(rdram, ctx);
        goto after_10;
    // 0x803309F8: nop

    after_10:
    // 0x803309FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330A04: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80330A08: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330A0C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80330A10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330A1C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A20: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330A24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A28: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330A2C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330A30: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80330A34: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330A38: addiu       $t3, $t2, 0x25
    ctx->r11 = ADD32(ctx->r10, 0X25);
    // 0x80330A3C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330A40: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80330A44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A48: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330A4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330A50: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330A54: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330A58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A5C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330A60: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330A64: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330A68: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330A6C: addiu       $t7, $t6, 0xA
    ctx->r15 = ADD32(ctx->r14, 0XA);
    // 0x80330A70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330A74: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80330A78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330A7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330A80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330A84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330A88: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A90: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330A94: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330A98: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80330A9C: nop

    // 0x80330AA0: addiu       $t1, $t0, 0x28
    ctx->r9 = ADD32(ctx->r8, 0X28);
    // 0x80330AA4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80330AA8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80330AAC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80330AB0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330AB8: jal         0x80060E40
    // 0x80330ABC: nop

    func_80060E40(rdram, ctx);
        goto after_11;
    // 0x80330ABC: nop

    after_11:
    // 0x80330AC0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330AC8: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x80330ACC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330AD0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80330AD4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330ADC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330AE0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AE4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330AE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AEC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330AF0: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330AF4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80330AF8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330AFC: addiu       $t8, $t7, 0x18
    ctx->r24 = ADD32(ctx->r15, 0X18);
    // 0x80330B00: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330B04: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80330B08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B10: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330B14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B24: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330B28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330B2C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330B30: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x80330B34: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330B38: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80330B3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330B44: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330B48: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B4C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330B50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B54: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330B58: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330B5C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80330B60: nop

    // 0x80330B64: addiu       $t6, $t5, 0x38
    ctx->r14 = ADD32(ctx->r13, 0X38);
    // 0x80330B68: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80330B6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330B70: nop

    // 0x80330B74: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x80330B78: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330B7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B80: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330B84: jal         0x80060E40
    // 0x80330B88: nop

    func_80060E40(rdram, ctx);
        goto after_12;
    // 0x80330B88: nop

    after_12:
    // 0x80330B8C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B90: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330B94: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x80330B98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330B9C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80330BA0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330BA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330BAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BB0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330BB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BB8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330BBC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330BC0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330BC4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330BC8: addiu       $t4, $t3, 0x18
    ctx->r12 = ADD32(ctx->r11, 0X18);
    // 0x80330BCC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330BD0: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80330BD4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330BD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330BDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330BE0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330BE4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330BE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BEC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330BF0: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330BF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330BF8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330BFC: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x80330C00: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330C04: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80330C08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330C10: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330C14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330C1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330C24: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330C28: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80330C2C: nop

    // 0x80330C30: addiu       $t2, $t1, 0x2C
    ctx->r10 = ADD32(ctx->r9, 0X2C);
    // 0x80330C34: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80330C38: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x80330C3C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80330C40: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C44: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330C48: jal         0x80060E40
    // 0x80330C4C: nop

    func_80060E40(rdram, ctx);
        goto after_13;
    // 0x80330C4C: nop

    after_13:
    // 0x80330C50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C54: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330C58: addiu       $t5, $t4, 0xC
    ctx->r13 = ADD32(ctx->r12, 0XC);
    // 0x80330C5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C60: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80330C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C7C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330C80: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330C84: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80330C88: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330C8C: addiu       $t9, $t8, 0x37
    ctx->r25 = ADD32(ctx->r24, 0X37);
    // 0x80330C90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330C94: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330C98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330CA0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330CA4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330CA8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330CAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CB0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330CB4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330CB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330CBC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330CC0: addiu       $t3, $t2, 0xA
    ctx->r11 = ADD32(ctx->r10, 0XA);
    // 0x80330CC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330CC8: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80330CCC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330CD0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330CD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330CD8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330CDC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330CE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CE4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330CE8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330CEC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80330CF0: nop

    // 0x80330CF4: addiu       $t7, $t6, 0x3C
    ctx->r15 = ADD32(ctx->r14, 0X3C);
    // 0x80330CF8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80330CFC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80330D00: nop

    // 0x80330D04: addiu       $t9, $t8, 0x14
    ctx->r25 = ADD32(ctx->r24, 0X14);
    // 0x80330D08: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330D0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D10: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330D14: jal         0x80060E40
    // 0x80330D18: nop

    func_80060E40(rdram, ctx);
        goto after_14;
    // 0x80330D18: nop

    after_14:
    // 0x80330D1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D20: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330D24: addiu       $t1, $t0, 0x24
    ctx->r9 = ADD32(ctx->r8, 0X24);
    // 0x80330D28: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330D2C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80330D30: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330D38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330D3C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D40: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330D44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D48: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330D4C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330D50: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80330D54: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330D58: addiu       $t5, $t4, 0x37
    ctx->r13 = ADD32(ctx->r12, 0X37);
    // 0x80330D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D60: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80330D64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D6C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330D70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D7C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330D80: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330D84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330D88: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330D8C: addiu       $t9, $t8, 0xA
    ctx->r25 = ADD32(ctx->r24, 0XA);
    // 0x80330D90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330D94: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80330D98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330D9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330DA0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330DA4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330DA8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330DAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DB0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330DB4: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330DB8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80330DBC: nop

    // 0x80330DC0: addiu       $t3, $t2, 0x30
    ctx->r11 = ADD32(ctx->r10, 0X30);
    // 0x80330DC4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80330DC8: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x80330DCC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80330DD0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DD4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330DD8: jal         0x80060E40
    // 0x80330DDC: nop

    func_80060E40(rdram, ctx);
        goto after_15;
    // 0x80330DDC: nop

    after_15:
    // 0x80330DE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DE4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330DE8: addiu       $t6, $t5, 0x2C
    ctx->r14 = ADD32(ctx->r13, 0X2C);
    // 0x80330DEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330DF0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80330DF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330DF8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330DFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330E00: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330E04: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330E08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E0C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330E10: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330E14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80330E18: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330E1C: addiu       $t0, $t9, 0x37
    ctx->r8 = ADD32(ctx->r25, 0X37);
    // 0x80330E20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330E24: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80330E28: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330E2C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330E30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330E34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330E38: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330E3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330E44: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330E48: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330E4C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330E50: addiu       $t4, $t3, 0xA
    ctx->r12 = ADD32(ctx->r11, 0XA);
    // 0x80330E54: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330E58: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80330E5C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330E60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330E64: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330E68: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330E6C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330E70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E74: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330E78: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330E7C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80330E80: nop

    // 0x80330E84: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x80330E88: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80330E8C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E90: nop

    // 0x80330E94: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x80330E98: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80330E9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EA0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330EA4: jal         0x80060E40
    // 0x80330EA8: nop

    func_80060E40(rdram, ctx);
        goto after_16;
    // 0x80330EA8: nop

    after_16:
    // 0x80330EAC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EB0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330EB4: addiu       $t2, $t1, 0x44
    ctx->r10 = ADD32(ctx->r9, 0X44);
    // 0x80330EB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330EBC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80330EC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EC4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330EC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330ECC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330ED0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330ED4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330ED8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330EDC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330EE0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80330EE4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330EE8: addiu       $t6, $t5, 0x37
    ctx->r14 = ADD32(ctx->r13, 0X37);
    // 0x80330EEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330EF0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80330EF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330EF8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330EFC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330F00: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330F04: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F0C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330F10: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330F14: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330F18: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330F1C: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x80330F20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330F24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330F28: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330F2C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330F30: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330F34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330F38: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330F44: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80330F48: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80330F4C: nop

    // 0x80330F50: addiu       $t4, $t3, 0x34
    ctx->r12 = ADD32(ctx->r11, 0X34);
    // 0x80330F54: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80330F58: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x80330F5C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80330F60: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F64: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330F68: jal         0x80060E40
    // 0x80330F6C: nop

    func_80060E40(rdram, ctx);
        goto after_17;
    // 0x80330F6C: nop

    after_17:
    // 0x80330F70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F74: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330F78: addiu       $t7, $t6, 0x4C
    ctx->r15 = ADD32(ctx->r14, 0X4C);
    // 0x80330F7C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330F80: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330F84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330F88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330F8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330F90: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330F94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330F98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F9C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330FA0: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330FA4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80330FA8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330FAC: addiu       $t1, $t0, 0x37
    ctx->r9 = ADD32(ctx->r8, 0X37);
    // 0x80330FB0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330FB4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80330FB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330FBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330FC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330FC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330FC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FD0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330FD4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80330FD8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330FDC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330FE0: addiu       $t5, $t4, 0xA
    ctx->r13 = ADD32(ctx->r12, 0XA);
    // 0x80330FE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330FE8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80330FEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FF4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330FF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331004: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331008: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8033100C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80331010: nop

    // 0x80331014: addiu       $t9, $t8, 0x44
    ctx->r25 = ADD32(ctx->r24, 0X44);
    // 0x80331018: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8033101C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331020: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331024: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331028: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8033102C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80331030: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80331034: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80331038: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8033103C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331040: lbu         $t5, 0x3B3C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3B3C);
    // 0x80331044: nop

    // 0x80331048: addiu       $t6, $t5, 0x13
    ctx->r14 = ADD32(ctx->r13, 0X13);
    // 0x8033104C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80331050: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80331054: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80331058: jal         0x80060E40
    // 0x8033105C: nop

    func_80060E40(rdram, ctx);
        goto after_18;
    // 0x8033105C: nop

    after_18:
    // 0x80331060: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331064: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331068: addiu       $t8, $t7, 0x54
    ctx->r24 = ADD32(ctx->r15, 0X54);
    // 0x8033106C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331070: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80331074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331078: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033107C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331080: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331084: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331088: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033108C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331090: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80331094: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80331098: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033109C: addiu       $t1, $t2, 0x37
    ctx->r9 = ADD32(ctx->r10, 0X37);
    // 0x803310A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803310A4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x803310A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803310AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803310B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803310B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803310B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803310BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310C0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803310C4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x803310C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803310CC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803310D0: addiu       $t6, $t5, 0xA
    ctx->r14 = ADD32(ctx->r13, 0XA);
    // 0x803310D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803310D8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x803310DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803310E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803310E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803310E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803310EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803310F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803310F8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_803310FC:
    // 0x803310FC: b           L_80331104
    // 0x80331100: nop

        goto L_80331104;
    // 0x80331100: nop

L_80331104:
    // 0x80331104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033110C: jr          $ra
    // 0x80331110: nop

    return;
    // 0x80331110: nop

;}
RECOMP_FUNC void func_80331D64_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331D68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331D6C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80331D70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331D74: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331D78: lw          $t6, 0x3420($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3420);
    // 0x80331D7C: nop

    // 0x80331D80: bne         $t6, $zero, L_80331DC0
    if (ctx->r14 != 0) {
        // 0x80331D84: nop
    
            goto L_80331DC0;
    }
    // 0x80331D84: nop

    // 0x80331D88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331D8C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D90: sw          $t7, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = ctx->r15;
    // 0x80331D94: jal         0x80331334
    // 0x80331D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_0;
    // 0x80331D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80331D9C: jal         0x803305AC
    // 0x80331DA0: nop

    func_803305AC_unk_bin_4(rdram, ctx);
        goto after_1;
    // 0x80331DA0: nop

    after_1:
    // 0x80331DA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DA8: sw          $zero, 0x3434($at)
    MEM_W(0X3434, ctx->r1) = 0;
    // 0x80331DAC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80331DB0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DB4: sw          $t8, 0x3438($at)
    MEM_W(0X3438, ctx->r1) = ctx->r24;
    // 0x80331DB8: jal         0x8033058C
    // 0x80331DBC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_2;
    // 0x80331DBC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
L_80331DC0:
    // 0x80331DC0: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x80331DC4: lw          $s0, 0x3434($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3434);
    // 0x80331DC8: nop

    // 0x80331DCC: beq         $s0, $zero, L_80331DF4
    if (ctx->r16 == 0) {
        // 0x80331DD0: nop
    
            goto L_80331DF4;
    }
    // 0x80331DD0: nop

    // 0x80331DD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331DD8: beq         $s0, $at, L_80331FC8
    if (ctx->r16 == ctx->r1) {
        // 0x80331DDC: nop
    
            goto L_80331FC8;
    }
    // 0x80331DDC: nop

    // 0x80331DE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331DE4: beq         $s0, $at, L_803321D8
    if (ctx->r16 == ctx->r1) {
        // 0x80331DE8: nop
    
            goto L_803321D8;
    }
    // 0x80331DE8: nop

    // 0x80331DEC: b           L_803322EC
    // 0x80331DF0: nop

        goto L_803322EC;
    // 0x80331DF0: nop

L_80331DF4:
    // 0x80331DF4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331DF8: addiu       $t9, $t9, -0x1D50
    ctx->r25 = ADD32(ctx->r25, -0X1D50);
    // 0x80331DFC: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80331E00: nop

    // 0x80331E04: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80331E08: beq         $t1, $zero, L_80331EAC
    if (ctx->r9 == 0) {
        // 0x80331E0C: nop
    
            goto L_80331EAC;
    }
    // 0x80331E0C: nop

    // 0x80331E10: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80331E14: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80331E18: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x80331E1C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331E20: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x80331E24: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x80331E28: jal         0x800252AC
    // 0x80331E2C: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_3;
    // 0x80331E2C: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_3:
    // 0x80331E30: lb          $t3, 0x37($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X37);
    // 0x80331E34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331E38: bne         $t3, $at, L_80331E60
    if (ctx->r11 != ctx->r1) {
        // 0x80331E3C: nop
    
            goto L_80331E60;
    }
    // 0x80331E3C: nop

    // 0x80331E40: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E48: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80331E4C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331E50: jal         0x800178D4
    // 0x80331E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80331E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80331E58: b           L_80331EA4
    // 0x80331E5C: nop

        goto L_80331EA4;
    // 0x80331E5C: nop

L_80331E60:
    // 0x80331E60: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331E64: lw          $t4, 0x342C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X342C);
    // 0x80331E68: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E6C: sw          $t4, 0x3438($at)
    MEM_W(0X3438, ctx->r1) = ctx->r12;
    // 0x80331E70: jal         0x80331334
    // 0x80331E74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_5;
    // 0x80331E74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x80331E78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80331E7C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E80: sw          $t5, 0x3434($at)
    MEM_W(0X3434, ctx->r1) = ctx->r13;
    // 0x80331E84: jal         0x8033058C
    // 0x80331E88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_6;
    // 0x80331E88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x80331E8C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E94: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331E98: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331E9C: jal         0x800178D4
    // 0x80331EA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80331EA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_80331EA4:
    // 0x80331EA4: b           L_80331FC0
    // 0x80331EA8: nop

        goto L_80331FC0;
    // 0x80331EA8: nop

L_80331EAC:
    // 0x80331EAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331EB0: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x80331EB4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80331EB8: nop

    // 0x80331EBC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80331EC0: beq         $t8, $zero, L_80331F08
    if (ctx->r24 == 0) {
        // 0x80331EC4: nop
    
            goto L_80331F08;
    }
    // 0x80331EC4: nop

    // 0x80331EC8: jal         0x80331334
    // 0x80331ECC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_8;
    // 0x80331ECC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80331ED0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80331ED4: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80331ED8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331EDC: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x80331EE0: jal         0x8033058C
    // 0x80331EE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_9;
    // 0x80331EE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80331EE8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EF0: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80331EF4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331EF8: jal         0x800178D4
    // 0x80331EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_10;
    // 0x80331EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x80331F00: b           L_80331FC0
    // 0x80331F04: nop

        goto L_80331FC0;
    // 0x80331F04: nop

L_80331F08:
    // 0x80331F08: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331F0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331F10: beq         $t9, $at, L_80331F24
    if (ctx->r25 == ctx->r1) {
        // 0x80331F14: nop
    
            goto L_80331F24;
    }
    // 0x80331F14: nop

    // 0x80331F18: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331F1C: bne         $t9, $at, L_80331F68
    if (ctx->r25 != ctx->r1) {
        // 0x80331F20: nop
    
            goto L_80331F68;
    }
    // 0x80331F20: nop

L_80331F24:
    // 0x80331F24: jal         0x80331334
    // 0x80331F28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_11;
    // 0x80331F28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80331F2C: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331F30: lw          $t0, 0x342C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X342C);
    // 0x80331F34: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F38: xori        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 ^ 0X2;
    // 0x80331F3C: sw          $t1, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r9;
    // 0x80331F40: jal         0x80331334
    // 0x80331F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_12;
    // 0x80331F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x80331F48: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F50: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331F54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331F58: jal         0x800178D4
    // 0x80331F5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_13;
    // 0x80331F5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x80331F60: b           L_80331FC0
    // 0x80331F64: nop

        goto L_80331FC0;
    // 0x80331F64: nop

L_80331F68:
    // 0x80331F68: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331F70: beq         $t2, $at, L_80331F84
    if (ctx->r10 == ctx->r1) {
        // 0x80331F74: nop
    
            goto L_80331F84;
    }
    // 0x80331F74: nop

    // 0x80331F78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331F7C: bne         $t2, $at, L_80331FC0
    if (ctx->r10 != ctx->r1) {
        // 0x80331F80: nop
    
            goto L_80331FC0;
    }
    // 0x80331F80: nop

L_80331F84:
    // 0x80331F84: jal         0x80331334
    // 0x80331F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_14;
    // 0x80331F88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x80331F8C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331F90: lw          $t3, 0x342C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X342C);
    // 0x80331F94: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F98: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x80331F9C: sw          $t4, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r12;
    // 0x80331FA0: jal         0x80331334
    // 0x80331FA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_15;
    // 0x80331FA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x80331FA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331FB0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80331FB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331FB8: jal         0x800178D4
    // 0x80331FBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_16;
    // 0x80331FBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
L_80331FC0:
    // 0x80331FC0: b           L_803322EC
    // 0x80331FC4: nop

        goto L_803322EC;
    // 0x80331FC4: nop

L_80331FC8:
    // 0x80331FC8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80331FCC: addiu       $t5, $t5, -0x1D50
    ctx->r13 = ADD32(ctx->r13, -0X1D50);
    // 0x80331FD0: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80331FD4: nop

    // 0x80331FD8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80331FDC: beq         $t7, $zero, L_80332054
    if (ctx->r15 == 0) {
        // 0x80331FE0: nop
    
            goto L_80332054;
    }
    // 0x80331FE0: nop

    // 0x80331FE4: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331FE8: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331FEC: lw          $t9, 0x3438($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3438);
    // 0x80331FF0: lw          $t8, 0x342C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X342C);
    // 0x80331FF4: nop

    // 0x80331FF8: bne         $t8, $t9, L_80332020
    if (ctx->r24 != ctx->r25) {
        // 0x80331FFC: nop
    
            goto L_80332020;
    }
    // 0x80331FFC: nop

    // 0x80332000: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80332004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332008: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x8033200C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332010: jal         0x800178D4
    // 0x80332014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_17;
    // 0x80332014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x80332018: b           L_8033204C
    // 0x8033201C: nop

        goto L_8033204C;
    // 0x8033201C: nop

L_80332020:
    // 0x80332020: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80332024: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332028: sw          $t0, 0x3434($at)
    MEM_W(0X3434, ctx->r1) = ctx->r8;
    // 0x8033202C: jal         0x80330000
    // 0x80332030: nop

    func_80330000_unk_bin_4(rdram, ctx);
        goto after_18;
    // 0x80332030: nop

    after_18:
    // 0x80332034: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80332038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033203C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80332040: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332044: jal         0x800178D4
    // 0x80332048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_19;
    // 0x80332048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
L_8033204C:
    // 0x8033204C: b           L_803321D0
    // 0x80332050: nop

        goto L_803321D0;
    // 0x80332050: nop

L_80332054:
    // 0x80332054: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80332058: addiu       $t1, $t1, -0x1D50
    ctx->r9 = ADD32(ctx->r9, -0X1D50);
    // 0x8033205C: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80332060: nop

    // 0x80332064: andi        $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 & 0X4000;
    // 0x80332068: beq         $t3, $zero, L_803320C0
    if (ctx->r11 == 0) {
        // 0x8033206C: nop
    
            goto L_803320C0;
    }
    // 0x8033206C: nop

    // 0x80332070: jal         0x80331334
    // 0x80332074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_20;
    // 0x80332074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x80332078: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x8033207C: lw          $t4, 0x3438($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3438);
    // 0x80332080: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332084: sw          $t4, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r12;
    // 0x80332088: jal         0x80331334
    // 0x8033208C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_21;
    // 0x8033208C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x80332090: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332094: sw          $zero, 0x3434($at)
    MEM_W(0X3434, ctx->r1) = 0;
    // 0x80332098: jal         0x8033058C
    // 0x8033209C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_22;
    // 0x8033209C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_22:
    // 0x803320A0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803320A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803320A8: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x803320AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803320B0: jal         0x800178D4
    // 0x803320B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_23;
    // 0x803320B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x803320B8: b           L_803321D0
    // 0x803320BC: nop

        goto L_803321D0;
    // 0x803320BC: nop

L_803320C0:
    // 0x803320C0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803320C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803320C8: beq         $t5, $at, L_803320DC
    if (ctx->r13 == ctx->r1) {
        // 0x803320CC: nop
    
            goto L_803320DC;
    }
    // 0x803320CC: nop

    // 0x803320D0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x803320D4: bne         $t5, $at, L_8033214C
    if (ctx->r13 != ctx->r1) {
        // 0x803320D8: nop
    
            goto L_8033214C;
    }
    // 0x803320D8: nop

L_803320DC:
    // 0x803320DC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803320E0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803320E4: lw          $t7, 0x3438($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3438);
    // 0x803320E8: lw          $t6, 0x342C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X342C);
    // 0x803320EC: nop

    // 0x803320F0: bne         $t6, $t7, L_80332108
    if (ctx->r14 != ctx->r15) {
        // 0x803320F4: nop
    
            goto L_80332108;
    }
    // 0x803320F4: nop

    // 0x803320F8: jal         0x80331334
    // 0x803320FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_24;
    // 0x803320FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_24:
    // 0x80332100: b           L_80332110
    // 0x80332104: nop

        goto L_80332110;
    // 0x80332104: nop

L_80332108:
    // 0x80332108: jal         0x80331334
    // 0x8033210C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_25;
    // 0x8033210C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_25:
L_80332110:
    // 0x80332110: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80332114: lw          $t8, 0x342C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X342C);
    // 0x80332118: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033211C: xori        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 ^ 0X2;
    // 0x80332120: sw          $t9, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r25;
    // 0x80332124: jal         0x80331334
    // 0x80332128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_26;
    // 0x80332128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_26:
    // 0x8033212C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80332130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332134: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80332138: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033213C: jal         0x800178D4
    // 0x80332140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_27;
    // 0x80332140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_27:
    // 0x80332144: b           L_803321D0
    // 0x80332148: nop

        goto L_803321D0;
    // 0x80332148: nop

L_8033214C:
    // 0x8033214C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80332150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332154: beq         $t0, $at, L_80332168
    if (ctx->r8 == ctx->r1) {
        // 0x80332158: nop
    
            goto L_80332168;
    }
    // 0x80332158: nop

    // 0x8033215C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332160: bne         $t0, $at, L_803321D0
    if (ctx->r8 != ctx->r1) {
        // 0x80332164: nop
    
            goto L_803321D0;
    }
    // 0x80332164: nop

L_80332168:
    // 0x80332168: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033216C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80332170: lw          $t2, 0x3438($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3438);
    // 0x80332174: lw          $t1, 0x342C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X342C);
    // 0x80332178: nop

    // 0x8033217C: bne         $t1, $t2, L_80332194
    if (ctx->r9 != ctx->r10) {
        // 0x80332180: nop
    
            goto L_80332194;
    }
    // 0x80332180: nop

    // 0x80332184: jal         0x80331334
    // 0x80332188: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_28;
    // 0x80332188: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_28:
    // 0x8033218C: b           L_8033219C
    // 0x80332190: nop

        goto L_8033219C;
    // 0x80332190: nop

L_80332194:
    // 0x80332194: jal         0x80331334
    // 0x80332198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_29;
    // 0x80332198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
L_8033219C:
    // 0x8033219C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803321A0: lw          $t3, 0x342C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X342C);
    // 0x803321A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803321A8: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x803321AC: sw          $t4, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r12;
    // 0x803321B0: jal         0x80331334
    // 0x803321B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_30;
    // 0x803321B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_30:
    // 0x803321B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803321BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321C0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803321C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803321C8: jal         0x800178D4
    // 0x803321CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_31;
    // 0x803321CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
L_803321D0:
    // 0x803321D0: b           L_803322EC
    // 0x803321D4: nop

        goto L_803322EC;
    // 0x803321D4: nop

L_803321D8:
    // 0x803321D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803321DC: jal         0x8033001C
    // 0x803321E0: nop

    func_8033001C_unk_bin_4(rdram, ctx);
        goto after_32;
    // 0x803321E0: nop

    after_32:
    // 0x803321E4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803321E8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803321EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803321F0: bne         $t5, $at, L_8033229C
    if (ctx->r13 != ctx->r1) {
        // 0x803321F4: nop
    
            goto L_8033229C;
    }
    // 0x803321F4: nop

    // 0x803321F8: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803321FC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332200: lw          $a1, 0x342C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X342C);
    // 0x80332204: lw          $a0, 0x3438($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3438);
    // 0x80332208: jal         0x800259A0
    // 0x8033220C: nop

    func_800259A0(rdram, ctx);
        goto after_33;
    // 0x8033220C: nop

    after_33:
    // 0x80332210: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80332214: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332218: jal         0x80024EF4
    // 0x8033221C: nop

    func_80024EF4(rdram, ctx);
        goto after_34;
    // 0x8033221C: nop

    after_34:
    // 0x80332220: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80332224: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332228: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x8033222C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80332230: addiu       $a1, $sp, 0x37
    ctx->r5 = ADD32(ctx->r29, 0X37);
    // 0x80332234: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x80332238: jal         0x800252AC
    // 0x8033223C: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    func_800252AC(rdram, ctx);
        goto after_35;
    // 0x8033223C: addiu       $a3, $sp, 0x35
    ctx->r7 = ADD32(ctx->r29, 0X35);
    after_35:
    // 0x80332240: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80332244: lw          $a0, 0x342C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X342C);
    // 0x80332248: lb          $a1, 0x37($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X37);
    // 0x8033224C: lb          $a2, 0x36($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X36);
    // 0x80332250: lb          $a3, 0x35($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X35);
    // 0x80332254: jal         0x8033078C
    // 0x80332258: nop

    func_8033078C_unk_bin_4(rdram, ctx);
        goto after_36;
    // 0x80332258: nop

    after_36:
    // 0x8033225C: jal         0x80331334
    // 0x80332260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_37;
    // 0x80332260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_37:
    // 0x80332264: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332268: lw          $t7, 0x3438($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3438);
    // 0x8033226C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332270: sw          $t7, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r15;
    // 0x80332274: jal         0x80331334
    // 0x80332278: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_38;
    // 0x80332278: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_38:
    // 0x8033227C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80332280: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x80332284: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332288: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x8033228C: jal         0x8033058C
    // 0x80332290: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_39;
    // 0x80332290: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_39:
    // 0x80332294: b           L_803322E4
    // 0x80332298: nop

        goto L_803322E4;
    // 0x80332298: nop

L_8033229C:
    // 0x8033229C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803322A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803322A4: bne         $t8, $at, L_803322E4
    if (ctx->r24 != ctx->r1) {
        // 0x803322A8: nop
    
            goto L_803322E4;
    }
    // 0x803322A8: nop

    // 0x803322AC: jal         0x80331334
    // 0x803322B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_40;
    // 0x803322B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_40:
    // 0x803322B4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803322B8: lw          $t9, 0x3438($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3438);
    // 0x803322BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803322C0: sw          $t9, 0x342C($at)
    MEM_W(0X342C, ctx->r1) = ctx->r25;
    // 0x803322C4: jal         0x80331334
    // 0x803322C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80331334_unk_bin_4(rdram, ctx);
        goto after_41;
    // 0x803322C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_41:
    // 0x803322CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803322D0: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x803322D4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803322D8: sw          $zero, 0x3420($at)
    MEM_W(0X3420, ctx->r1) = 0;
    // 0x803322DC: jal         0x8033058C
    // 0x803322E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8033058C_unk_bin_4(rdram, ctx);
        goto after_42;
    // 0x803322E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_42:
L_803322E4:
    // 0x803322E4: b           L_803322EC
    // 0x803322E8: nop

        goto L_803322EC;
    // 0x803322E8: nop

L_803322EC:
    // 0x803322EC: b           L_803322F4
    // 0x803322F0: nop

        goto L_803322F4;
    // 0x803322F0: nop

L_803322F4:
    // 0x803322F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803322F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803322FC: jr          $ra
    // 0x80332300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80332300: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331520_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331528: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033152C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331530: lwc1        $f4, 0x690($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X690);
    // 0x80331534: nop

    // 0x80331538: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8033153C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331540: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331544: lwc1        $f6, 0x694($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X694);
    // 0x80331548: nop

    // 0x8033154C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80331550: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331558: lwc1        $f8, 0x698($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X698);
    // 0x8033155C: nop

    // 0x80331560: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80331564: jal         0x8001A928
    // 0x80331568: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80331568: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8033156C: jal         0x80016DB4
    // 0x80331570: nop

    func_80016DB4(rdram, ctx);
        goto after_1;
    // 0x80331570: nop

    after_1:
    // 0x80331574: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80331578: lh          $t9, 0x1A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1A);
    // 0x8033157C: nop

    // 0x80331580: bne         $t9, $zero, L_8033159C
    if (ctx->r25 != 0) {
        // 0x80331584: nop
    
            goto L_8033159C;
    }
    // 0x80331584: nop

    // 0x80331588: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8033158C: jal         0x80060E40
    // 0x80331590: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x80331590: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x80331594: b           L_803315A8
    // 0x80331598: nop

        goto L_803315A8;
    // 0x80331598: nop

L_8033159C:
    // 0x8033159C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803315A0: jal         0x80060E40
    // 0x803315A4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80060E40(rdram, ctx);
        goto after_3;
    // 0x803315A4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
L_803315A8:
    // 0x803315A8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803315AC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803315B0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803315B4: swc1        $f10, 0x690($t0)
    MEM_W(0X690, ctx->r8) = ctx->f10.u32l;
    // 0x803315B8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803315BC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803315C0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803315C4: swc1        $f16, 0x694($t1)
    MEM_W(0X694, ctx->r9) = ctx->f16.u32l;
    // 0x803315C8: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803315CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803315D0: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803315D4: swc1        $f18, 0x698($t2)
    MEM_W(0X698, ctx->r10) = ctx->f18.u32l;
    // 0x803315D8: b           L_803315E0
    // 0x803315DC: nop

        goto L_803315E0;
    // 0x803315DC: nop

L_803315E0:
    // 0x803315E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803315E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803315E8: jr          $ra
    // 0x803315EC: nop

    return;
    // 0x803315EC: nop

;}
RECOMP_FUNC void func_80331334_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331334: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033133C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80331340: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331344: lw          $t6, 0x342C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X342C);
    // 0x80331348: nop

    // 0x8033134C: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80331350: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80331354: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033135C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331360: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331364: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331368: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033136C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331370: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331374: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80331378: nop

    // 0x8033137C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80331380: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331384: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331388: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033138C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331390: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331394: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331398: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033139C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803313A0: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803313A4: nop

    // 0x803313A8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803313AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803313B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803313B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803313BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803313C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803313C4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803313C8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803313CC: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803313D0: nop

    // 0x803313D4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x803313D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803313DC: jal         0x800604A8
    // 0x803313E0: nop

    func_800604A8(rdram, ctx);
        goto after_0;
    // 0x803313E0: nop

    after_0:
    // 0x803313E4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x803313E8: nop

    // 0x803313EC: bne         $t4, $zero, L_80331400
    if (ctx->r12 != 0) {
        // 0x803313F0: nop
    
            goto L_80331400;
    }
    // 0x803313F0: nop

    // 0x803313F4: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x803313F8: b           L_80331408
    // 0x803313FC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
        goto L_80331408;
    // 0x803313FC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_80331400:
    // 0x80331400: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80331404: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80331408:
    // 0x80331408: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033140C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80331410: jal         0x80060E40
    // 0x80331414: nop

    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80331414: nop

    after_1:
    // 0x80331418: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033141C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331420: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331424: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331428: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033142C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331430: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331434: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331438: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033143C: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80331440: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331444: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331448: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033144C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331450: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331454: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331458: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033145C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331460: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331464: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80331468: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033146C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331470: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331474: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331478: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033147C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331480: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331484: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331488: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033148C: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80331490: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331494: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331498: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033149C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803314A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803314A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803314A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803314AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803314B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803314B8: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803314BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803314C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803314C4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803314C8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803314CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803314D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803314D4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803314D8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803314DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803314E4: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803314E8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x803314EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803314F0: bne         $t7, $at, L_80331508
    if (ctx->r15 != ctx->r1) {
        // 0x803314F4: nop
    
            goto L_80331508;
    }
    // 0x803314F4: nop

    // 0x803314F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803314FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331500: jal         0x8001BC84
    // 0x80331504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_2;
    // 0x80331504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_80331508:
    // 0x80331508: b           L_80331510
    // 0x8033150C: nop

        goto L_80331510;
    // 0x8033150C: nop

L_80331510:
    // 0x80331510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331514: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331518: jr          $ra
    // 0x8033151C: nop

    return;
    // 0x8033151C: nop

;}
RECOMP_FUNC void func_803305AC_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803305B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803305B4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x803305B8: lw          $t6, 0x4888($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4888);
    // 0x803305BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803305C0: bne         $t6, $at, L_803305D4
    if (ctx->r14 != ctx->r1) {
        // 0x803305C4: nop
    
            goto L_803305D4;
    }
    // 0x803305C4: nop

    // 0x803305C8: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x803305CC: b           L_8033063C
    // 0x803305D0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_8033063C;
    // 0x803305D0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_803305D4:
    // 0x803305D4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x803305D8: lw          $t8, 0x4888($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4888);
    // 0x803305DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803305E0: bne         $t8, $at, L_803305F4
    if (ctx->r24 != ctx->r1) {
        // 0x803305E4: nop
    
            goto L_803305F4;
    }
    // 0x803305E4: nop

    // 0x803305E8: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803305EC: b           L_8033063C
    // 0x803305F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
        goto L_8033063C;
    // 0x803305F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_803305F4:
    // 0x803305F4: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x803305F8: lw          $t0, 0x4888($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4888);
    // 0x803305FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330600: bne         $t0, $at, L_80330614
    if (ctx->r8 != ctx->r1) {
        // 0x80330604: nop
    
            goto L_80330614;
    }
    // 0x80330604: nop

    // 0x80330608: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8033060C: b           L_8033063C
    // 0x80330610: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_8033063C;
    // 0x80330610: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80330614:
    // 0x80330614: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80330618: lw          $t2, 0x4888($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4888);
    // 0x8033061C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330620: bne         $t2, $at, L_80330634
    if (ctx->r10 != ctx->r1) {
        // 0x80330624: nop
    
            goto L_80330634;
    }
    // 0x80330624: nop

    // 0x80330628: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8033062C: b           L_8033063C
    // 0x80330630: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_8033063C;
    // 0x80330630: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80330634:
    // 0x80330634: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80330638: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_8033063C:
    // 0x8033063C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80330640: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80330644: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80330648: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_8033064C:
    // 0x8033064C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330650: jal         0x8001A928
    // 0x80330654: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80330654: nop

    after_0:
    // 0x80330658: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033065C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330660: jal         0x80060E40
    // 0x80330664: nop

    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80330664: nop

    after_1:
    // 0x80330668: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8033066C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330670: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330678: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033067C: lwc1        $f4, 0x33F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X33F8);
    // 0x80330680: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330684: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330688: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033068C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330690: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80330694: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330698: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033069C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803306A0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803306A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803306A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803306AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803306B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803306B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803306B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803306C0: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x803306C4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803306C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x803306CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803306D0: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x803306D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803306D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803306DC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803306E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803306E4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803306E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803306F0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803306F4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x803306F8: nop

    // 0x803306FC: addiu       $t5, $t4, 0x30
    ctx->r13 = ADD32(ctx->r12, 0X30);
    // 0x80330700: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80330704: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80330708: nop

    // 0x8033070C: slti        $at, $t6, 0xF0
    ctx->r1 = SIGNED(ctx->r14) < 0XF0 ? 1 : 0;
    // 0x80330710: bne         $at, $zero, L_8033075C
    if (ctx->r1 != 0) {
        // 0x80330714: nop
    
            goto L_8033075C;
    }
    // 0x80330714: nop

    // 0x80330718: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033071C: nop

    // 0x80330720: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x80330724: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330728: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033072C: nop

    // 0x80330730: bgez        $t9, L_80330740
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80330734: sra         $t0, $t9, 6
        ctx->r8 = S32(SIGNED(ctx->r25) >> 6);
            goto L_80330740;
    }
    // 0x80330734: sra         $t0, $t9, 6
    ctx->r8 = S32(SIGNED(ctx->r25) >> 6);
    // 0x80330738: addiu       $at, $t9, 0x3F
    ctx->r1 = ADD32(ctx->r25, 0X3F);
    // 0x8033073C: sra         $t0, $at, 6
    ctx->r8 = S32(SIGNED(ctx->r1) >> 6);
L_80330740:
    // 0x80330740: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80330744: beq         $t1, $zero, L_80330758
    if (ctx->r9 == 0) {
        // 0x80330748: nop
    
            goto L_80330758;
    }
    // 0x80330748: nop

    // 0x8033074C: addiu       $t2, $zero, -0x18
    ctx->r10 = ADD32(0, -0X18);
    // 0x80330750: b           L_8033075C
    // 0x80330754: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
        goto L_8033075C;
    // 0x80330754: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_80330758:
    // 0x80330758: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8033075C:
    // 0x8033075C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330760: nop

    // 0x80330764: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330768: slti        $at, $t4, 0x28
    ctx->r1 = SIGNED(ctx->r12) < 0X28 ? 1 : 0;
    // 0x8033076C: bne         $at, $zero, L_8033064C
    if (ctx->r1 != 0) {
        // 0x80330770: sw          $t4, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r12;
            goto L_8033064C;
    }
    // 0x80330770: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80330774: b           L_8033077C
    // 0x80330778: nop

        goto L_8033077C;
    // 0x80330778: nop

L_8033077C:
    // 0x8033077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330784: jr          $ra
    // 0x80330788: nop

    return;
    // 0x80330788: nop

;}
RECOMP_FUNC void func_8033001C_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330048: lw          $t9, 0x3440($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3440);
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
    // 0x80330074: sb          $zero, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = 0;
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
    // 0x803300A4: sb          $zero, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = 0;
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
    // 0x803300F0: sb          $zero, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = 0;
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
    // 0x80330124: lw          $t4, 0x3440($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3440);
    // 0x80330128: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033012C: xori        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 ^ 0X1;
    // 0x80330130: sw          $t5, 0x3440($at)
    MEM_W(0X3440, ctx->r1) = ctx->r13;
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
    // 0x80330150: lw          $t6, 0x3440($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3440);
    // 0x80330154: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330158: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033015C: sb          $t7, 0x3444($at)
    MEM_B(0X3444, ctx->r1) = ctx->r15;
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
RECOMP_FUNC void func_80332888_unk_bin_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033288C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332890: jal         0x80062EAC
    // 0x80332894: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80332894: nop

    after_0:
    // 0x80332898: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033289C: jal         0x8001D1D4
    // 0x803328A0: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x803328A0: nop

    after_1:
    // 0x803328A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803328A8: bne         $v0, $at, L_803328B8
    if (ctx->r2 != ctx->r1) {
        // 0x803328AC: nop
    
            goto L_803328B8;
    }
    // 0x803328AC: nop

    // 0x803328B0: b           L_80332A80
    // 0x803328B4: nop

        goto L_80332A80;
    // 0x803328B4: nop

L_803328B8:
    // 0x803328B8: jal         0x8001D1D4
    // 0x803328BC: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x803328BC: nop

    after_2:
    // 0x803328C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803328C4: bne         $v0, $at, L_803328E0
    if (ctx->r2 != ctx->r1) {
        // 0x803328C8: nop
    
            goto L_803328E0;
    }
    // 0x803328C8: nop

    // 0x803328CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803328D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803328D4: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x803328D8: b           L_80332A80
    // 0x803328DC: nop

        goto L_80332A80;
    // 0x803328DC: nop

L_803328E0:
    // 0x803328E0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x803328E4: lw          $t7, 0x4888($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4888);
    // 0x803328E8: nop

    // 0x803328EC: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x803328F0: beq         $at, $zero, L_8033298C
    if (ctx->r1 == 0) {
        // 0x803328F4: nop
    
            goto L_8033298C;
    }
    // 0x803328F4: nop

    // 0x803328F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328FC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332900: addu        $at, $at, $t7
    gpr jr_addend_8033290C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332904: lw          $t7, 0x33FC($at)
    ctx->r15 = ADD32(ctx->r1, 0X33FC);
    // 0x80332908: nop

    // 0x8033290C: jr          $t7
    // 0x80332910: nop

    switch (jr_addend_8033290C >> 2) {
        case 0: goto L_80332914; break;
        case 1: goto L_80332928; break;
        case 2: goto L_8033293C; break;
        case 3: goto L_80332950; break;
        case 4: goto L_80332964; break;
        case 5: goto L_80332978; break;
        default: switch_error(__func__, 0x8033290C, 0x803333FC);
    }
    // 0x80332910: nop

L_80332914:
    // 0x80332914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80332918: jal         0x803315F0
    // 0x8033291C: nop

    func_803315F0_unk_bin_4(rdram, ctx);
        goto after_3;
    // 0x8033291C: nop

    after_3:
    // 0x80332920: b           L_8033298C
    // 0x80332924: nop

        goto L_8033298C;
    // 0x80332924: nop

L_80332928:
    // 0x80332928: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8033292C: jal         0x803318F8
    // 0x80332930: nop

    func_803318F8_unk_bin_4(rdram, ctx);
        goto after_4;
    // 0x80332930: nop

    after_4:
    // 0x80332934: b           L_8033298C
    // 0x80332938: nop

        goto L_8033298C;
    // 0x80332938: nop

L_8033293C:
    // 0x8033293C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80332940: jal         0x80331B24
    // 0x80332944: nop

    func_80331B24_unk_bin_4(rdram, ctx);
        goto after_5;
    // 0x80332944: nop

    after_5:
    // 0x80332948: b           L_8033298C
    // 0x8033294C: nop

        goto L_8033298C;
    // 0x8033294C: nop

L_80332950:
    // 0x80332950: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80332954: jal         0x80331D64
    // 0x80332958: nop

    func_80331D64_unk_bin_4(rdram, ctx);
        goto after_6;
    // 0x80332958: nop

    after_6:
    // 0x8033295C: b           L_8033298C
    // 0x80332960: nop

        goto L_8033298C;
    // 0x80332960: nop

L_80332964:
    // 0x80332964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80332968: jal         0x80332304
    // 0x8033296C: nop

    func_80332304_unk_bin_4(rdram, ctx);
        goto after_7;
    // 0x8033296C: nop

    after_7:
    // 0x80332970: b           L_8033298C
    // 0x80332974: nop

        goto L_8033298C;
    // 0x80332974: nop

L_80332978:
    // 0x80332978: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8033297C: jal         0x80332628
    // 0x80332980: nop

    func_80332628_unk_bin_4(rdram, ctx);
        goto after_8;
    // 0x80332980: nop

    after_8:
    // 0x80332984: b           L_8033298C
    // 0x80332988: nop

        goto L_8033298C;
    // 0x80332988: nop

L_8033298C:
    // 0x8033298C: jal         0x8001994C
    // 0x80332990: nop

    func_8001994C(rdram, ctx);
        goto after_9;
    // 0x80332990: nop

    after_9:
    // 0x80332994: jal         0x800628C0
    // 0x80332998: nop

    func_800628C0(rdram, ctx);
        goto after_10;
    // 0x80332998: nop

    after_10:
    // 0x8033299C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_803329A0:
    // 0x803329A0: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803329A4: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803329A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803329AC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803329B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803329B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803329B8: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x803329BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803329C0: bne         $t0, $at, L_803329D0
    if (ctx->r8 != ctx->r1) {
        // 0x803329C4: nop
    
            goto L_803329D0;
    }
    // 0x803329C4: nop

    // 0x803329C8: b           L_80332A78
    // 0x803329CC: nop

        goto L_80332A78;
    // 0x803329CC: nop

L_803329D0:
    // 0x803329D0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x803329D4: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x803329D8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803329DC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803329E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803329E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803329E8: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x803329EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803329F0: beq         $t3, $at, L_80332A40
    if (ctx->r11 == ctx->r1) {
        // 0x803329F4: nop
    
            goto L_80332A40;
    }
    // 0x803329F4: nop

    // 0x803329F8: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x803329FC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332A00: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332A04: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80332A08: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332A0C: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80332A10: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332A14: jal         0x8001CEF4
    // 0x80332A18: nop

    func_8001CEF4(rdram, ctx);
        goto after_11;
    // 0x80332A18: nop

    after_11:
    // 0x80332A1C: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80332A20: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332A24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332A2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A30: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332A34: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332A38: jal         0x8001CD20
    // 0x80332A3C: nop

    func_8001CD20(rdram, ctx);
        goto after_12;
    // 0x80332A3C: nop

    after_12:
L_80332A40:
    // 0x80332A40: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80332A44: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332A48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332A4C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80332A50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332A54: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80332A58: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332A5C: jal         0x8001AD6C
    // 0x80332A60: nop

    func_8001AD6C(rdram, ctx);
        goto after_13;
    // 0x80332A60: nop

    after_13:
    // 0x80332A64: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80332A68: nop

    // 0x80332A6C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332A70: b           L_803329A0
    // 0x80332A74: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
        goto L_803329A0;
    // 0x80332A74: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
L_80332A78:
    // 0x80332A78: b           L_80332A80
    // 0x80332A7C: nop

        goto L_80332A80;
    // 0x80332A7C: nop

L_80332A80:
    // 0x80332A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332A88: jr          $ra
    // 0x80332A8C: nop

    return;
    // 0x80332A8C: nop

;}
RECOMP_FUNC void func_80330190_unk_bin_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330190: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330194: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330198: jal         0x8001D4D0
    // 0x8033019C: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x8033019C: nop

    after_0:
    // 0x803301A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803301A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803301A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803301AC: jal         0x8001D638
    // 0x803301B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803301B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x803301B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803301B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803301BC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x803301C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803301C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803301C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803301CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301D0: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803301D4: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x803301D8: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x803301DC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x803301E0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x803301E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803301E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803301EC: jal         0x80036E70
    // 0x803301F0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x803301F0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x803301F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301F8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x803301FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330200: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80330204: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80330208: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8033020C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80330210: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80330214: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80330218: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8033021C: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80330220: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330224: nop

    // 0x80330228: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8033022C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330230: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80330234: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330238: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8033023C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330240: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80330244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330248: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x8033024C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330250: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80330254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033025C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330260: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80330264: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80330268: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8033026C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80330270: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80330274: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80330278: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x8033027C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330280: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330284: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80330288: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8033028C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80330290: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80330294: jal         0x80037188
    // 0x80330298: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80330298: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8033029C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803302A0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803302A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803302A8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803302AC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803302B0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803302B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803302B8: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x803302BC: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x803302C0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x803302C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302C8: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x803302CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803302D0: nop

    // 0x803302D4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x803302D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803302DC: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x803302E0: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_803302E4:
    // 0x803302E4: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x803302E8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803302EC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803302F0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803302F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803302F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803302FC: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80330300: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330304: bne         $t0, $at, L_80330314
    if (ctx->r8 != ctx->r1) {
        // 0x80330308: nop
    
            goto L_80330314;
    }
    // 0x80330308: nop

    // 0x8033030C: b           L_80330410
    // 0x80330310: nop

        goto L_80330410;
    // 0x80330310: nop

L_80330314:
    // 0x80330314: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330318: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x8033031C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330320: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80330324: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330328: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033032C: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80330330: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330334: beq         $t3, $at, L_803303D8
    if (ctx->r11 == ctx->r1) {
        // 0x80330338: nop
    
            goto L_803303D8;
    }
    // 0x80330338: nop

    // 0x8033033C: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330340: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330344: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330348: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8033034C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330350: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80330354: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80330358: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x8033035C: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80330360: jal         0x8001C1A8
    // 0x80330364: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80330364: nop

    after_4:
    // 0x80330368: beq         $v0, $zero, L_803303D0
    if (ctx->r2 == 0) {
        // 0x8033036C: nop
    
            goto L_803303D0;
    }
    // 0x8033036C: nop

    // 0x80330370: jal         0x8001838C
    // 0x80330374: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80330374: nop

    after_5:
    // 0x80330378: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033037C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330380: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330384: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330388: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033038C: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x80330390: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80330394: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x80330398: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x8033039C: jal         0x8001B014
    // 0x803303A0: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803303A0: nop

    after_6:
    // 0x803303A4: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803303A8: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803303AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803303B0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803303B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803303B8: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x803303BC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803303C0: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x803303C4: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x803303C8: jal         0x8001C384
    // 0x803303CC: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x803303CC: nop

    after_7:
L_803303D0:
    // 0x803303D0: b           L_803303FC
    // 0x803303D4: nop

        goto L_803303FC;
    // 0x803303D4: nop

L_803303D8:
    // 0x803303D8: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x803303DC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803303E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803303E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303EC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803303F0: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x803303F4: jal         0x800623E0
    // 0x803303F8: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x803303F8: nop

    after_8:
L_803303FC:
    // 0x803303FC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330400: nop

    // 0x80330404: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330408: b           L_803302E4
    // 0x8033040C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_803302E4;
    // 0x8033040C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80330410:
    // 0x80330410: b           L_80330418
    // 0x80330414: nop

        goto L_80330418;
    // 0x80330414: nop

L_80330418:
    // 0x80330418: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033041C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80330420: jr          $ra
    // 0x80330424: nop

    return;
    // 0x80330424: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: jal         0x80062EAC
    // 0x8033000C: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x8033000C: nop

    after_0:
    // 0x80330010: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80330014: jal         0x8001D1D4
    // 0x80330018: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80330018: nop

    after_1:
    // 0x8033001C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330020: bne         $v0, $at, L_80330030
    if (ctx->r2 != ctx->r1) {
        // 0x80330024: nop
    
            goto L_80330030;
    }
    // 0x80330024: nop

    // 0x80330028: b           L_80330180
    // 0x8033002C: nop

        goto L_80330180;
    // 0x8033002C: nop

L_80330030:
    // 0x80330030: jal         0x8001D1D4
    // 0x80330034: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80330034: nop

    after_2:
    // 0x80330038: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033003C: bne         $v0, $at, L_80330058
    if (ctx->r2 != ctx->r1) {
        // 0x80330040: nop
    
            goto L_80330058;
    }
    // 0x80330040: nop

    // 0x80330044: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330048: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8033004C: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x80330050: b           L_80330180
    // 0x80330054: nop

        goto L_80330180;
    // 0x80330054: nop

L_80330058:
    // 0x80330058: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x8033005C: lh          $t7, 0x590($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X590);
    // 0x80330060: nop

    // 0x80330064: slti        $at, $t7, 0x3D
    ctx->r1 = SIGNED(ctx->r15) < 0X3D ? 1 : 0;
    // 0x80330068: bne         $at, $zero, L_80330078
    if (ctx->r1 != 0) {
        // 0x8033006C: nop
    
            goto L_80330078;
    }
    // 0x8033006C: nop

    // 0x80330070: jal         0x8001D2C0
    // 0x80330074: nop

    func_8001D2C0(rdram, ctx);
        goto after_3;
    // 0x80330074: nop

    after_3:
L_80330078:
    // 0x80330078: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x8033007C: lh          $t8, 0x590($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X590);
    // 0x80330080: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330084: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330088: sh          $t9, 0x590($at)
    MEM_H(0X590, ctx->r1) = ctx->r25;
    // 0x8033008C: jal         0x8001994C
    // 0x80330090: nop

    func_8001994C(rdram, ctx);
        goto after_4;
    // 0x80330090: nop

    after_4:
    // 0x80330094: jal         0x800628C0
    // 0x80330098: nop

    func_800628C0(rdram, ctx);
        goto after_5;
    // 0x80330098: nop

    after_5:
    // 0x8033009C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_803300A0:
    // 0x803300A0: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x803300A4: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x803300A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803300AC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803300B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803300B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803300B8: lh          $t2, 0x4998($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4998);
    // 0x803300BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803300C0: bne         $t2, $at, L_803300D0
    if (ctx->r10 != ctx->r1) {
        // 0x803300C4: nop
    
            goto L_803300D0;
    }
    // 0x803300C4: nop

    // 0x803300C8: b           L_80330178
    // 0x803300CC: nop

        goto L_80330178;
    // 0x803300CC: nop

L_803300D0:
    // 0x803300D0: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x803300D4: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x803300D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803300DC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x803300E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803300E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803300E8: lh          $t5, 0x49A0($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X49A0);
    // 0x803300EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803300F0: beq         $t5, $at, L_80330140
    if (ctx->r13 == ctx->r1) {
        // 0x803300F4: nop
    
            goto L_80330140;
    }
    // 0x803300F4: nop

    // 0x803300F8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x803300FC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330104: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80330108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033010C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80330110: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330114: jal         0x8001CEF4
    // 0x80330118: nop

    func_8001CEF4(rdram, ctx);
        goto after_6;
    // 0x80330118: nop

    after_6:
    // 0x8033011C: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80330120: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330124: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330128: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8033012C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330130: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80330134: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330138: jal         0x8001CD20
    // 0x8033013C: nop

    func_8001CD20(rdram, ctx);
        goto after_7;
    // 0x8033013C: nop

    after_7:
L_80330140:
    // 0x80330140: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80330144: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330148: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033014C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80330150: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330154: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80330158: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033015C: jal         0x8001AD6C
    // 0x80330160: nop

    func_8001AD6C(rdram, ctx);
        goto after_8;
    // 0x80330160: nop

    after_8:
    // 0x80330164: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80330168: nop

    // 0x8033016C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80330170: b           L_803300A0
    // 0x80330174: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
        goto L_803300A0;
    // 0x80330174: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
L_80330178:
    // 0x80330178: b           L_80330180
    // 0x8033017C: nop

        goto L_80330180;
    // 0x8033017C: nop

L_80330180:
    // 0x80330180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330188: jr          $ra
    // 0x8033018C: nop

    return;
    // 0x8033018C: nop

;}
RECOMP_FUNC void func_80330440_unk_bin_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330448: jal         0x8001ECB8
    // 0x8033044C: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x8033044C: nop

    after_0:
    // 0x80330450: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330454: addiu       $t6, $t6, 0x190
    ctx->r14 = ADD32(ctx->r14, 0X190);
    // 0x80330458: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8033045C: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80330460: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330464: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80330468: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8033046C: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80330470: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330474: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80330478: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033047C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330480: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x80330484: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033048C: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x80330490: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330494: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330498: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x8033049C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803304A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304A4: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x803304A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803304AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304B0: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x803304B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803304B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304BC: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x803304C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803304C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304C8: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x803304CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803304D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803304D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304D8: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x803304DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803304E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304E4: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x803304E8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x803304EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803304F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803304F4: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x803304F8: jal         0x80019C84
    // 0x803304FC: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x803304FC: nop

    after_1:
    // 0x80330500: jal         0x80019D2C
    // 0x80330504: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80330504: nop

    after_2:
    // 0x80330508: jal         0x8001A258
    // 0x8033050C: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x8033050C: nop

    after_3:
    // 0x80330510: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80330514: addiu       $t8, $t8, 0x1428
    ctx->r24 = ADD32(ctx->r24, 0X1428);
    // 0x80330518: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x8033051C: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80330520: jal         0x80060278
    // 0x80330524: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80330524: nop

    after_4:
    // 0x80330528: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033052C: jal         0x800608B8
    // 0x80330530: addiu       $a0, $a0, 0x143C
    ctx->r4 = ADD32(ctx->r4, 0X143C);
    func_800608B8(rdram, ctx);
        goto after_5;
    // 0x80330530: addiu       $a0, $a0, 0x143C
    ctx->r4 = ADD32(ctx->r4, 0X143C);
    after_5:
    // 0x80330534: jal         0x80330428
    // 0x80330538: nop

    func_80330428_unk_bin_5(rdram, ctx);
        goto after_6;
    // 0x80330538: nop

    after_6:
    // 0x8033053C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80330540: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80330544: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80330548: jal         0x8001D244
    // 0x8033054C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x8033054C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x80330550: jal         0x8001D284
    // 0x80330554: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x80330554: nop

    after_8:
    // 0x80330558: jal         0x8001DCD4
    // 0x8033055C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001DCD4(rdram, ctx);
        goto after_9;
    // 0x8033055C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80330560: jal         0x80000964
    // 0x80330564: nop

    func_80000964(rdram, ctx);
        goto after_10;
    // 0x80330564: nop

    after_10:
    // 0x80330568: jal         0x8001DCD4
    // 0x8033056C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001DCD4(rdram, ctx);
        goto after_11;
    // 0x8033056C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80330570: b           L_80330578
    // 0x80330574: nop

        goto L_80330578;
    // 0x80330574: nop

L_80330578:
    // 0x80330578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033057C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330580: jr          $ra
    // 0x80330584: nop

    return;
    // 0x80330584: nop

    // 0x80330588: nop

    // 0x8033058C: nop

;}
RECOMP_FUNC void func_80330428_unk_bin_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330428: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033042C: sh          $zero, 0x590($at)
    MEM_H(0X590, ctx->r1) = 0;
    // 0x80330430: jr          $ra
    // 0x80330434: nop

    return;
    // 0x80330434: nop

    // 0x80330438: jr          $ra
    // 0x8033043C: nop

    return;
    // 0x8033043C: nop

;}
RECOMP_FUNC void func_803303A4_unk_bin_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803303A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803303AC: jal         0x8001ECB8
    // 0x803303B0: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x803303B0: nop

    after_0:
    // 0x803303B4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803303B8: addiu       $t6, $t6, 0x10C
    ctx->r14 = ADD32(ctx->r14, 0X10C);
    // 0x803303BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803303C0: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x803303C4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803303C8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x803303CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803303D0: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x803303D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803303D8: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x803303DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803303E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803303E4: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x803303E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803303EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803303F0: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803303F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803303F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803303FC: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x80330400: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330404: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330408: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x8033040C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330410: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330414: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80330418: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033041C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330420: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x80330424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330428: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033042C: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80330430: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033043C: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80330440: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330444: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330448: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x8033044C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80330450: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330454: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330458: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8033045C: jal         0x80019C84
    // 0x80330460: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80330460: nop

    after_1:
    // 0x80330464: jal         0x80019D2C
    // 0x80330468: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80330468: nop

    after_2:
    // 0x8033046C: jal         0x8001A258
    // 0x80330470: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80330470: nop

    after_3:
    // 0x80330474: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80330478: addiu       $t8, $t8, 0x14AC
    ctx->r24 = ADD32(ctx->r24, 0X14AC);
    // 0x8033047C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80330480: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80330484: jal         0x80060278
    // 0x80330488: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80330488: nop

    after_4:
    // 0x8033048C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330490: jal         0x800608B8
    // 0x80330494: addiu       $a0, $a0, 0x14C0
    ctx->r4 = ADD32(ctx->r4, 0X14C0);
    func_800608B8(rdram, ctx);
        goto after_5;
    // 0x80330494: addiu       $a0, $a0, 0x14C0
    ctx->r4 = ADD32(ctx->r4, 0X14C0);
    after_5:
    // 0x80330498: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8033049C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803304A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803304A4: jal         0x8001D244
    // 0x803304A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_6;
    // 0x803304A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_6:
    // 0x803304AC: jal         0x8001D284
    // 0x803304B0: nop

    func_8001D284(rdram, ctx);
        goto after_7;
    // 0x803304B0: nop

    after_7:
    // 0x803304B4: jal         0x80000964
    // 0x803304B8: nop

    func_80000964(rdram, ctx);
        goto after_8;
    // 0x803304B8: nop

    after_8:
    // 0x803304BC: b           L_803304C4
    // 0x803304C0: nop

        goto L_803304C4;
    // 0x803304C0: nop

L_803304C4:
    // 0x803304C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803304C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803304CC: jr          $ra
    // 0x803304D0: nop

    return;
    // 0x803304D0: nop

    // 0x803304D4: nop

    // 0x803304D8: nop

    // 0x803304DC: nop

;}
RECOMP_FUNC void func_8033010C_unk_bin_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033010C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330110: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330114: jal         0x8001D4D0
    // 0x80330118: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80330118: nop

    after_0:
    // 0x8033011C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330120: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80330124: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80330128: jal         0x8001D638
    // 0x8033012C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x8033012C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x80330130: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80330134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330138: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x8033013C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330140: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033014C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330150: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80330154: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80330158: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8033015C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80330160: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330164: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330168: jal         0x80036E70
    // 0x8033016C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x8033016C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80330170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330174: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80330178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033017C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80330180: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80330184: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80330188: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033018C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80330190: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80330194: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80330198: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x8033019C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803301A0: nop

    // 0x803301A4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x803301A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301AC: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x803301B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301B4: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x803301B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301BC: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x803301C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301C4: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x803301C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301CC: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x803301D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803301D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301D8: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803301DC: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x803301E0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803301E4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x803301E8: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x803301EC: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x803301F0: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x803301F4: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x803301F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803301FC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330200: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80330204: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80330208: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8033020C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80330210: jal         0x80037188
    // 0x80330214: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80330214: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80330218: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033021C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80330220: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330224: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80330228: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8033022C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80330230: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330234: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80330238: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x8033023C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80330240: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330244: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80330248: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033024C: nop

    // 0x80330250: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80330254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330258: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x8033025C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80330260:
    // 0x80330260: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330264: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330268: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033026C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330270: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330274: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330278: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x8033027C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330280: bne         $t0, $at, L_80330290
    if (ctx->r8 != ctx->r1) {
        // 0x80330284: nop
    
            goto L_80330290;
    }
    // 0x80330284: nop

    // 0x80330288: b           L_8033038C
    // 0x8033028C: nop

        goto L_8033038C;
    // 0x8033028C: nop

L_80330290:
    // 0x80330290: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330294: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80330298: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033029C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803302A0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803302A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302A8: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x803302AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803302B0: beq         $t3, $at, L_80330354
    if (ctx->r11 == ctx->r1) {
        // 0x803302B4: nop
    
            goto L_80330354;
    }
    // 0x803302B4: nop

    // 0x803302B8: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x803302BC: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x803302C0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803302C4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803302C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803302CC: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x803302D0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x803302D4: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x803302D8: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x803302DC: jal         0x8001C1A8
    // 0x803302E0: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x803302E0: nop

    after_4:
    // 0x803302E4: beq         $v0, $zero, L_8033034C
    if (ctx->r2 == 0) {
        // 0x803302E8: nop
    
            goto L_8033034C;
    }
    // 0x803302E8: nop

    // 0x803302EC: jal         0x8001838C
    // 0x803302F0: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x803302F0: nop

    after_5:
    // 0x803302F4: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x803302F8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803302FC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330300: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330304: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330308: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x8033030C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80330310: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x80330314: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x80330318: jal         0x8001B014
    // 0x8033031C: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x8033031C: nop

    after_6:
    // 0x80330320: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330324: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x80330328: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033032C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80330330: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330334: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x80330338: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8033033C: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x80330340: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x80330344: jal         0x8001C384
    // 0x80330348: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80330348: nop

    after_7:
L_8033034C:
    // 0x8033034C: b           L_80330378
    // 0x80330350: nop

        goto L_80330378;
    // 0x80330350: nop

L_80330354:
    // 0x80330354: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330358: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033035C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330360: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80330364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330368: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8033036C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330370: jal         0x800623E0
    // 0x80330374: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80330374: nop

    after_8:
L_80330378:
    // 0x80330378: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033037C: nop

    // 0x80330380: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330384: b           L_80330260
    // 0x80330388: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80330260;
    // 0x80330388: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_8033038C:
    // 0x8033038C: b           L_80330394
    // 0x80330390: nop

        goto L_80330394;
    // 0x80330390: nop

L_80330394:
    // 0x80330394: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330398: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8033039C: jr          $ra
    // 0x803303A0: nop

    return;
    // 0x803303A0: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: jal         0x8001994C
    // 0x8033000C: nop

    func_8001994C(rdram, ctx);
        goto after_0;
    // 0x8033000C: nop

    after_0:
    // 0x80330010: jal         0x800628C0
    // 0x80330014: nop

    func_800628C0(rdram, ctx);
        goto after_1;
    // 0x80330014: nop

    after_1:
    // 0x80330018: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8033001C:
    // 0x8033001C: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80330020: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80330024: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330028: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033002C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330030: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330034: lh          $t8, 0x4998($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4998);
    // 0x80330038: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033003C: bne         $t8, $at, L_8033004C
    if (ctx->r24 != ctx->r1) {
        // 0x80330040: nop
    
            goto L_8033004C;
    }
    // 0x80330040: nop

    // 0x80330044: b           L_803300F4
    // 0x80330048: nop

        goto L_803300F4;
    // 0x80330048: nop

L_8033004C:
    // 0x8033004C: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80330050: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x80330054: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330058: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8033005C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330060: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330064: lh          $t1, 0x49A0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X49A0);
    // 0x80330068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033006C: beq         $t1, $at, L_803300BC
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_803300BC;
    }
    // 0x80330070: nop

    // 0x80330074: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80330078: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033007C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330080: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80330084: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330088: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x8033008C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330090: jal         0x8001CEF4
    // 0x80330094: nop

    func_8001CEF4(rdram, ctx);
        goto after_2;
    // 0x80330094: nop

    after_2:
    // 0x80330098: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x8033009C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803300A0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803300A4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803300A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803300AC: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x803300B0: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x803300B4: jal         0x8001CD20
    // 0x803300B8: nop

    func_8001CD20(rdram, ctx);
        goto after_3;
    // 0x803300B8: nop

    after_3:
L_803300BC:
    // 0x803300BC: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x803300C0: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803300C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803300CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300D0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803300D4: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x803300D8: jal         0x8001AD6C
    // 0x803300DC: nop

    func_8001AD6C(rdram, ctx);
        goto after_4;
    // 0x803300DC: nop

    after_4:
    // 0x803300E0: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x803300E4: nop

    // 0x803300E8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803300EC: b           L_8033001C
    // 0x803300F0: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
        goto L_8033001C;
    // 0x803300F0: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
L_803300F4:
    // 0x803300F4: b           L_803300FC
    // 0x803300F8: nop

        goto L_803300FC;
    // 0x803300F8: nop

L_803300FC:
    // 0x803300FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330104: jr          $ra
    // 0x80330108: nop

    return;
    // 0x80330108: nop

;}
RECOMP_FUNC void func_80330D18_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330D20: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330D24: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80330D28: nop

    // 0x80330D2C: bne         $t6, $zero, L_80330DA0
    if (ctx->r14 != 0) {
        // 0x80330D30: nop
    
            goto L_80330DA0;
    }
    // 0x80330D30: nop

    // 0x80330D34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330D38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330D3C: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80330D40: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330D44: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80330D48: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80330D4C: addiu       $t8, $t8, 0x6F54
    ctx->r24 = ADD32(ctx->r24, 0X6F54);
    // 0x80330D50: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330D54: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80330D58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330D60: jal         0x8001C0EC
    // 0x80330D64: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330D64: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x80330D68: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80330D6C: jal         0x8001B62C
    // 0x80330D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80330D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330D74: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330D78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80330D7C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80330D80: jal         0x8001B6BC
    // 0x80330D84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B6BC(rdram, ctx);
        goto after_2;
    // 0x80330D84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80330D88: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80330D8C: jal         0x8001B754
    // 0x80330D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x80330D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330D94: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80330D98: jal         0x8001B754
    // 0x80330D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x80330D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
L_80330DA0:
    // 0x80330DA0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80330DA4: lw          $t9, 0x26F8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X26F8);
    // 0x80330DA8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330DAC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80330DB0: sw          $t0, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r8;
    // 0x80330DB4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330DB8: lw          $t1, 0x26F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26F8);
    // 0x80330DBC: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80330DC0: bne         $t1, $at, L_80330DE8
    if (ctx->r9 != ctx->r1) {
        // 0x80330DC4: nop
    
            goto L_80330DE8;
    }
    // 0x80330DC4: nop

    // 0x80330DC8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330DD0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x80330DD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330DD8: jal         0x800178D4
    // 0x80330DDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80330DDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80330DE0: b           L_80330E14
    // 0x80330DE4: nop

        goto L_80330E14;
    // 0x80330DE4: nop

L_80330DE8:
    // 0x80330DE8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330DEC: lw          $t2, 0x26F8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F8);
    // 0x80330DF0: nop

    // 0x80330DF4: slti        $at, $t2, 0xBF
    ctx->r1 = SIGNED(ctx->r10) < 0XBF ? 1 : 0;
    // 0x80330DF8: bne         $at, $zero, L_80330E14
    if (ctx->r1 != 0) {
        // 0x80330DFC: nop
    
            goto L_80330E14;
    }
    // 0x80330DFC: nop

    // 0x80330E00: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330E04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E08: sw          $t3, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r11;
    // 0x80330E0C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E10: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80330E14:
    // 0x80330E14: b           L_80330E1C
    // 0x80330E18: nop

        goto L_80330E1C;
    // 0x80330E18: nop

L_80330E1C:
    // 0x80330E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330E24: jr          $ra
    // 0x80330E28: nop

    return;
    // 0x80330E28: nop

;}
RECOMP_FUNC void func_80330830_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330830: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330838: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033083C: lw          $t6, 0x26F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X26F4);
    // 0x80330840: nop

    // 0x80330844: addiu       $t7, $t6, 0x1A
    ctx->r15 = ADD32(ctx->r14, 0X1A);
    // 0x80330848: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8033084C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330850: lw          $t8, 0x26F4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F4);
    // 0x80330854: nop

    // 0x80330858: addiu       $t9, $t8, 0x2F
    ctx->r25 = ADD32(ctx->r24, 0X2F);
    // 0x8033085C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80330860: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330864: lw          $t0, 0x26F4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26F4);
    // 0x80330868: nop

    // 0x8033086C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80330870: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330874: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80330878: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8033087C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330880: lw          $t1, 0x26F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26F0);
    // 0x80330884: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80330888: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033088C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330890: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330894: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330898: mflo        $t4
    ctx->r12 = lo;
    // 0x8033089C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x803308A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803308A4: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x803308A8: mfhi        $t7
    ctx->r15 = hi;
    // 0x803308AC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803308B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803308B4: lbu         $t9, 0x4808($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4808);
    // 0x803308B8: nop

    // 0x803308BC: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x803308C0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x803308C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803308C8: jal         0x80060E40
    // 0x803308CC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80060E40(rdram, ctx);
        goto after_0;
    // 0x803308CC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x803308D0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803308D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803308D8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x803308DC: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803308E0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x803308E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308E8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803308EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803308F0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803308F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803308F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803308FC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330900: mflo        $t4
    ctx->r12 = lo;
    // 0x80330904: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80330908: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x8033090C: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80330910: mfhi        $t3
    ctx->r11 = hi;
    // 0x80330914: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80330918: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033091C: lh          $t5, 0x2658($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X2658);
    // 0x80330920: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x80330924: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80330928: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8033092C: addiu       $t8, $t7, 0x48
    ctx->r24 = ADD32(ctx->r15, 0X48);
    // 0x80330930: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80330934: nop

    // 0x80330938: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033093C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330940: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330944: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80330948: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8033094C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80330950: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330954: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330958: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033095C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330960: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330964: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330968: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033096C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330970: mflo        $t2
    ctx->r10 = lo;
    // 0x80330974: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330978: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x8033097C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80330980: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330984: lh          $t3, 0x265C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X265C);
    // 0x80330988: nop

    // 0x8033098C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80330990: nop

    // 0x80330994: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330998: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x8033099C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803309A0: lw          $t7, 0x26F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X26F0);
    // 0x803309A4: nop

    // 0x803309A8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x803309AC: beq         $at, $zero, L_80330A18
    if (ctx->r1 == 0) {
        // 0x803309B0: nop
    
            goto L_80330A18;
    }
    // 0x803309B0: nop

    // 0x803309B4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803309B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803309BC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x803309C0: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803309C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803309C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803309D0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803309D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803309D8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803309DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803309E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803309E4: mflo        $t9
    ctx->r25 = lo;
    // 0x803309E8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803309EC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803309F0: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x803309F4: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803309F8: lh          $t4, 0x265A($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X265A);
    // 0x803309FC: nop

    // 0x80330A00: addiu       $t2, $t4, -0x4
    ctx->r10 = ADD32(ctx->r12, -0X4);
    // 0x80330A04: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80330A08: nop

    // 0x80330A0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330A10: b           L_80330A54
    // 0x80330A14: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
        goto L_80330A54;
    // 0x80330A14: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_80330A18:
    // 0x80330A18: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330A1C: addiu       $t5, $t5, 0x2658
    ctx->r13 = ADD32(ctx->r13, 0X2658);
    // 0x80330A20: lh          $t6, 0x8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8);
    // 0x80330A24: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330A28: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x80330A2C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330A30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330A34: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330A38: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330A3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330A40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330A44: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330A48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A4C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330A50: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_80330A54:
    // 0x80330A54: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330A58: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80330A5C: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80330A60: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80330A64: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330A68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330A6C: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80330A70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330A74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A78: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330A7C: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x80330A80: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330A84: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80330A88: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330A8C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330A90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A98: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330A9C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330AA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AA4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330AA8: swc1        $f10, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f10.u32l;
    // 0x80330AAC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80330AB0: nop

    // 0x80330AB4: blez        $t3, L_80330C2C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80330AB8: nop
    
            goto L_80330C2C;
    }
    // 0x80330AB8: nop

    // 0x80330ABC: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x80330AC0: beq         $at, $zero, L_80330C2C
    if (ctx->r1 == 0) {
        // 0x80330AC4: nop
    
            goto L_80330C2C;
    }
    // 0x80330AC4: nop

    // 0x80330AC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80330ACC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD0: jal         0x80060E40
    // 0x80330AD4: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80330AD4: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    after_1:
    // 0x80330AD8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330ADC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330AE4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330AEC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330AF0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AF4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330AF8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330AFC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330B00: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80330B04: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80330B08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330B10: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80330B14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B1C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330B20: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B24: addu        $t4, $t0, $t7
    ctx->r12 = ADD32(ctx->r8, ctx->r15);
    // 0x80330B28: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x80330B2C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330B30: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330B34: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330B38: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330B3C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330B40: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330B44: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330B48: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330B4C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330B50: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80330B54: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80330B58: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80330B5C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80330B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B64: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330B68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330B6C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80330B70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330B74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330B78: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80330B7C: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x80330B80: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330B84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330B88: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80330B8C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80330B90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B94: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330B98: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80330B9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330BA0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80330BA4: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80330BA8: addu        $t2, $t7, $t4
    ctx->r10 = ADD32(ctx->r15, ctx->r12);
    // 0x80330BAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330BB0: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x80330BB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330BB8: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330BBC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330BC0: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x80330BC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330BC8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330BCC: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BD0: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x80330BD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330BD8: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80330BDC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80330BE0: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80330BE4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330BE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330BEC: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80330BF0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330BF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BF8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330BFC: swc1        $f6, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f6.u32l;
    // 0x80330C00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330C04: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80330C08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330C0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330C14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330C18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C1C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330C20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C24: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330C28: swc1        $f8, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f8.u32l;
L_80330C2C:
    // 0x80330C2C: b           L_80330C34
    // 0x80330C30: nop

        goto L_80330C34;
    // 0x80330C30: nop

L_80330C34:
    // 0x80330C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330C38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C3C: jr          $ra
    // 0x80330C40: nop

    return;
    // 0x80330C40: nop

;}
RECOMP_FUNC void func_80330364_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330364: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033036C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80330370:
    // 0x80330370: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330374: lw          $t6, 0x26F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X26F0);
    // 0x80330378: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033037C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80330380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330384: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330388: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033038C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330390: lb          $t0, 0x2620($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X2620);
    // 0x80330394: nop

    // 0x80330398: beq         $t0, $zero, L_803305A0
    if (ctx->r8 == 0) {
        // 0x8033039C: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_803305A0;
    }
    // 0x8033039C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x803303A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x803303A4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803303A8: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    // 0x803303AC: jal         0x80060BA4
    // 0x803303B0: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    func_80060BA4(rdram, ctx);
        goto after_0;
    // 0x803303B0: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    after_0:
    // 0x803303B4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803303B8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x803303BC: bne         $t1, $at, L_8033041C
    if (ctx->r9 != ctx->r1) {
        // 0x803303C0: nop
    
            goto L_8033041C;
    }
    // 0x803303C0: nop

    // 0x803303C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803303C8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x803303CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803303D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803303D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803303DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803303E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803303EC: swc1        $f4, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f4.u32l;
    // 0x803303F0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803303F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803303F8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803303FC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330400: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330408: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033040C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330410: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330414: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330418: swc1        $f6, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f6.u32l;
L_8033041C:
    // 0x8033041C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330420: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80330424: bne         $t6, $at, L_8033044C
    if (ctx->r14 != ctx->r1) {
        // 0x80330428: nop
    
            goto L_8033044C;
    }
    // 0x80330428: nop

    // 0x8033042C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80330430: addiu       $t7, $t7, 0x6F3C
    ctx->r15 = ADD32(ctx->r15, 0X6F3C);
    // 0x80330434: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330438: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8033043C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330444: jal         0x8001C0EC
    // 0x80330448: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330448: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
L_8033044C:
    // 0x8033044C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80330450: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80330454: bne         $t8, $at, L_8033047C
    if (ctx->r24 != ctx->r1) {
        // 0x80330458: nop
    
            goto L_8033047C;
    }
    // 0x80330458: nop

    // 0x8033045C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80330460: addiu       $t9, $t9, 0x6F40
    ctx->r25 = ADD32(ctx->r25, 0X6F40);
    // 0x80330464: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330468: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8033046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330474: jal         0x8001C0EC
    // 0x80330478: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330478: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_2:
L_8033047C:
    // 0x8033047C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80330480: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80330484: bne         $t0, $at, L_803304C4
    if (ctx->r8 != ctx->r1) {
        // 0x80330488: nop
    
            goto L_803304C4;
    }
    // 0x80330488: nop

    // 0x8033048C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80330490: addiu       $t1, $t1, 0x6F44
    ctx->r9 = ADD32(ctx->r9, 0X6F44);
    // 0x80330494: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330498: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x8033049C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803304A4: jal         0x8001C0EC
    // 0x803304A8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x803304A8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_3:
    // 0x803304AC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803304B0: addiu       $a3, $a3, 0x6F7C
    ctx->r7 = ADD32(ctx->r7, 0X6F7C);
    // 0x803304B4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x803304B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304BC: jal         0x8001ABF4
    // 0x803304C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803304C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803304C4:
    // 0x803304C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803304C8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803304CC: bne         $t2, $at, L_80330578
    if (ctx->r10 != ctx->r1) {
        // 0x803304D0: nop
    
            goto L_80330578;
    }
    // 0x803304D0: nop

    // 0x803304D4: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803304D8: lw          $t3, 0x2710($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2710);
    // 0x803304DC: nop

    // 0x803304E0: beq         $t3, $zero, L_80330558
    if (ctx->r11 == 0) {
        // 0x803304E4: nop
    
            goto L_80330558;
    }
    // 0x803304E4: nop

    // 0x803304E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803304EC: jal         0x800600B8
    // 0x803304F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_5;
    // 0x803304F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x803304F4: beq         $v0, $zero, L_80330530
    if (ctx->r2 == 0) {
        // 0x803304F8: nop
    
            goto L_80330530;
    }
    // 0x803304F8: nop

    // 0x803304FC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80330500: addiu       $t4, $t4, 0x6F48
    ctx->r12 = ADD32(ctx->r12, 0X6F48);
    // 0x80330504: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80330508: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8033050C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330510: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330514: jal         0x8001C0EC
    // 0x80330518: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80330518: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_6:
    // 0x8033051C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80330520: jal         0x8001B754
    // 0x80330524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_7;
    // 0x80330524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80330528: b           L_80330550
    // 0x8033052C: nop

        goto L_80330550;
    // 0x8033052C: nop

L_80330530:
    // 0x80330530: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80330534: addiu       $t5, $t5, 0x6F48
    ctx->r13 = ADD32(ctx->r13, 0X6F48);
    // 0x80330538: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033053C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80330540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330544: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330548: jal         0x8001C0EC
    // 0x8033054C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x8033054C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_8:
L_80330550:
    // 0x80330550: b           L_80330578
    // 0x80330554: nop

        goto L_80330578;
    // 0x80330554: nop

L_80330558:
    // 0x80330558: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8033055C: addiu       $t6, $t6, 0x6F48
    ctx->r14 = ADD32(ctx->r14, 0X6F48);
    // 0x80330560: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80330564: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80330568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033056C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330570: jal         0x8001C0EC
    // 0x80330574: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x80330574: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_9:
L_80330578:
    // 0x80330578: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8033057C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80330580: bne         $t7, $at, L_803305A0
    if (ctx->r15 != ctx->r1) {
        // 0x80330584: nop
    
            goto L_803305A0;
    }
    // 0x80330584: nop

    // 0x80330588: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033058C: addiu       $a3, $a3, 0x6FE0
    ctx->r7 = ADD32(ctx->r7, 0X6FE0);
    // 0x80330590: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80330594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330598: jal         0x8001ABF4
    // 0x8033059C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x8033059C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
L_803305A0:
    // 0x803305A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803305A4: nop

    // 0x803305A8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803305AC: slti        $at, $t9, 0x9
    ctx->r1 = SIGNED(ctx->r25) < 0X9 ? 1 : 0;
    // 0x803305B0: bne         $at, $zero, L_80330370
    if (ctx->r1 != 0) {
        // 0x803305B4: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_80330370;
    }
    // 0x803305B4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803305B8: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x803305BC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x803305C0: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803305C4: lw          $a0, 0x26F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X26F0);
    // 0x803305C8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x803305CC: jal         0x80060E40
    // 0x803305D0: addiu       $a0, $a0, 0x2A
    ctx->r4 = ADD32(ctx->r4, 0X2A);
    func_80060E40(rdram, ctx);
        goto after_11;
    // 0x803305D0: addiu       $a0, $a0, 0x2A
    ctx->r4 = ADD32(ctx->r4, 0X2A);
    after_11:
    // 0x803305D4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803305D8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x803305DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803305E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803305E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803305E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803305EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803305F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803305F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803305F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803305FC: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80330600: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330604: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330608: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033060C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330610: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330614: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330618: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033061C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330620: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330624: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330628: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x8033062C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80330630: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330634: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330638: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033063C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330640: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330644: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330648: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033064C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330650: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x80330654: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330658: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    // 0x8033065C: jal         0x80060BA4
    // 0x80330660: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80060BA4(rdram, ctx);
        goto after_12;
    // 0x80330660: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_12:
    // 0x80330664: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330668: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    // 0x8033066C: jal         0x80060BA4
    // 0x80330670: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80060BA4(rdram, ctx);
        goto after_13;
    // 0x80330670: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_13:
    // 0x80330674: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330678: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    // 0x8033067C: jal         0x80060BA4
    // 0x80330680: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_80060BA4(rdram, ctx);
        goto after_14;
    // 0x80330680: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_14:
    // 0x80330684: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x80330688: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x8033068C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330690: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80330694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330698: jal         0x8001ABF4
    // 0x8033069C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_15;
    // 0x8033069C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x803306A0: lui         $a3, 0x8032
    ctx->r7 = S32(0X8032 << 16);
    // 0x803306A4: addiu       $a3, $a3, 0x491C
    ctx->r7 = ADD32(ctx->r7, 0X491C);
    // 0x803306A8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803306AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x803306B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803306B4: jal         0x8001ABF4
    // 0x803306B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_16;
    // 0x803306B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x803306BC: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x803306C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803306C4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803306C8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803306CC: swc1        $f18, 0x1A40($t7)
    MEM_W(0X1A40, ctx->r15) = ctx->f18.u32l;
    // 0x803306D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803306D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803306D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803306E0: swc1        $f4, 0x1A44($t8)
    MEM_W(0X1A44, ctx->r24) = ctx->f4.u32l;
    // 0x803306E4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803306E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803306EC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803306F0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803306F4: swc1        $f6, 0x1A48($t9)
    MEM_W(0X1A48, ctx->r25) = ctx->f6.u32l;
    // 0x803306F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306FC: lwc1        $f8, 0x2670($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2670);
    // 0x80330700: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330704: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330708: swc1        $f8, 0x1A4C($t0)
    MEM_W(0X1A4C, ctx->r8) = ctx->f8.u32l;
    // 0x8033070C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330710: lwc1        $f10, 0x2674($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2674);
    // 0x80330714: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330718: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033071C: swc1        $f10, 0x1A50($t1)
    MEM_W(0X1A50, ctx->r9) = ctx->f10.u32l;
    // 0x80330720: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330724: lwc1        $f16, 0x2678($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2678);
    // 0x80330728: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033072C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330730: swc1        $f16, 0x1A54($t2)
    MEM_W(0X1A54, ctx->r10) = ctx->f16.u32l;
    // 0x80330734: b           L_8033073C
    // 0x80330738: nop

        goto L_8033073C;
    // 0x80330738: nop

L_8033073C:
    // 0x8033073C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330740: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330744: jr          $ra
    // 0x80330748: nop

    return;
    // 0x80330748: nop

;}
RECOMP_FUNC void func_80331198_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033119C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803311A0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803311A4: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x803311A8: nop

    // 0x803311AC: bne         $t6, $zero, L_8033138C
    if (ctx->r14 != 0) {
        // 0x803311B0: nop
    
            goto L_8033138C;
    }
    // 0x803311B0: nop

    // 0x803311B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803311B8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311BC: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x803311C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311C4: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x803311C8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x803311CC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x803311D0: jal         0x80016F38
    // 0x803311D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_0;
    // 0x803311D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803311D8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803311DC: lw          $t8, 0x26F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F0);
    // 0x803311E0: nop

    // 0x803311E4: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x803311E8: beq         $at, $zero, L_80331320
    if (ctx->r1 == 0) {
        // 0x803311EC: nop
    
            goto L_80331320;
    }
    // 0x803311EC: nop

    // 0x803311F0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x803311F4: addiu       $t0, $zero, 0x17
    ctx->r8 = ADD32(0, 0X17);
    // 0x803311F8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x803311FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331200: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80331204:
    // 0x80331204: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80331208: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8033120C: jal         0x80060E40
    // 0x80331210: nop

    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80331210: nop

    after_1:
    // 0x80331214: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331218: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x8033121C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331220: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80331224: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80331228: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033122C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331230: lh          $t3, 0x2658($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X2658);
    // 0x80331234: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331238: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8033123C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331240: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331244: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331248: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033124C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331250: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331254: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331258: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x8033125C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331260: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331268: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033126C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80331270: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331274: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331278: lh          $t8, 0x265A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X265A);
    // 0x8033127C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331280: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80331284: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331288: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033128C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331290: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331294: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033129C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803312A0: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x803312A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803312A8: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803312AC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803312B0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803312B4: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x803312B8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803312BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803312C0: lh          $t3, 0x265C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X265C);
    // 0x803312C4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803312C8: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x803312CC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312D0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803312D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803312D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803312DC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803312E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803312E8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x803312EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803312F0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803312F4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803312F8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803312FC: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80331300: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331304: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331308: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8033130C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331310: bne         $at, $zero, L_80331204
    if (ctx->r1 != 0) {
        // 0x80331314: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_80331204;
    }
    // 0x80331314: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80331318: b           L_8033138C
    // 0x8033131C: nop

        goto L_8033138C;
    // 0x8033131C: nop

L_80331320:
    // 0x80331320: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80331324: jal         0x80060E40
    // 0x80331328: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x80331328: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_2:
    // 0x8033132C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331330: addiu       $t2, $t2, 0x2658
    ctx->r10 = ADD32(ctx->r10, 0X2658);
    // 0x80331334: lh          $t3, 0x6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X6);
    // 0x80331338: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033133C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80331340: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331344: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331348: swc1        $f6, 0x1E30($t4)
    MEM_W(0X1E30, ctx->r12) = ctx->f6.u32l;
    // 0x8033134C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80331350: addiu       $t5, $t5, 0x2658
    ctx->r13 = ADD32(ctx->r13, 0X2658);
    // 0x80331354: lh          $t6, 0x8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8);
    // 0x80331358: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033135C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80331360: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331364: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331368: swc1        $f10, 0x1E34($t8)
    MEM_W(0X1E34, ctx->r24) = ctx->f10.u32l;
    // 0x8033136C: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331370: addiu       $t9, $t9, 0x2658
    ctx->r25 = ADD32(ctx->r25, 0X2658);
    // 0x80331374: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x80331378: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033137C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331380: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331384: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331388: swc1        $f18, 0x1E38($t1)
    MEM_W(0X1E38, ctx->r9) = ctx->f18.u32l;
L_8033138C:
    // 0x8033138C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331390: lw          $t7, 0x26F8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X26F8);
    // 0x80331394: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331398: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8033139C: sw          $t2, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r10;
    // 0x803313A0: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803313A4: lw          $t3, 0x26F8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X26F8);
    // 0x803313A8: nop

    // 0x803313AC: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x803313B0: bne         $at, $zero, L_803313CC
    if (ctx->r1 != 0) {
        // 0x803313B4: nop
    
            goto L_803313CC;
    }
    // 0x803313B4: nop

    // 0x803313B8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803313BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803313C0: sw          $t4, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r12;
    // 0x803313C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803313C8: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_803313CC:
    // 0x803313CC: b           L_803313D4
    // 0x803313D0: nop

        goto L_803313D4;
    // 0x803313D0: nop

L_803313D4:
    // 0x803313D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803313D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803313DC: jr          $ra
    // 0x803313E0: nop

    return;
    // 0x803313E0: nop

;}
RECOMP_FUNC void func_8033017C_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033017C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330184: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330188: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033018C: lwc1        $f4, 0x1A40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1A40);
    // 0x80330190: nop

    // 0x80330194: swc1        $f4, 0x1B90($t6)
    MEM_W(0X1B90, ctx->r14) = ctx->f4.u32l;
    // 0x80330198: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033019C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803301A0: lwc1        $f6, 0x1A44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1A44);
    // 0x803301A4: nop

    // 0x803301A8: swc1        $f6, 0x1B94($t7)
    MEM_W(0X1B94, ctx->r15) = ctx->f6.u32l;
    // 0x803301AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803301B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803301B4: lwc1        $f8, 0x1A48($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1A48);
    // 0x803301B8: nop

    // 0x803301BC: swc1        $f8, 0x1B98($t8)
    MEM_W(0X1B98, ctx->r24) = ctx->f8.u32l;
    // 0x803301C0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803301C4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803301C8: lwc1        $f10, 0x1A58($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1A58);
    // 0x803301CC: nop

    // 0x803301D0: swc1        $f10, 0x1BA8($t9)
    MEM_W(0X1BA8, ctx->r25) = ctx->f10.u32l;
    // 0x803301D4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803301D8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803301DC: lwc1        $f16, 0x1A5C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1A5C);
    // 0x803301E0: nop

    // 0x803301E4: swc1        $f16, 0x1BAC($t0)
    MEM_W(0X1BAC, ctx->r8) = ctx->f16.u32l;
    // 0x803301E8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803301EC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803301F0: lwc1        $f18, 0x1A60($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1A60);
    // 0x803301F4: nop

    // 0x803301F8: swc1        $f18, 0x1BB0($t1)
    MEM_W(0X1BB0, ctx->r9) = ctx->f18.u32l;
    // 0x803301FC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330200: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330204: lwc1        $f4, 0x1A4C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1A4C);
    // 0x80330208: nop

    // 0x8033020C: swc1        $f4, 0x1B9C($t2)
    MEM_W(0X1B9C, ctx->r10) = ctx->f4.u32l;
    // 0x80330210: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330214: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330218: lwc1        $f6, 0x1A50($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1A50);
    // 0x8033021C: nop

    // 0x80330220: swc1        $f6, 0x1BA0($t3)
    MEM_W(0X1BA0, ctx->r11) = ctx->f6.u32l;
    // 0x80330224: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330228: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033022C: lwc1        $f8, 0x1A54($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1A54);
    // 0x80330230: nop

    // 0x80330234: swc1        $f8, 0x1BA4($t4)
    MEM_W(0X1BA4, ctx->r12) = ctx->f8.u32l;
    // 0x80330238: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033023C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330240: lwc1        $f10, 0x1A40($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1A40);
    // 0x80330244: nop

    // 0x80330248: swc1        $f10, 0x1CE0($t5)
    MEM_W(0X1CE0, ctx->r13) = ctx->f10.u32l;
    // 0x8033024C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330250: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330254: lwc1        $f16, 0x1A44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1A44);
    // 0x80330258: nop

    // 0x8033025C: swc1        $f16, 0x1CE4($t6)
    MEM_W(0X1CE4, ctx->r14) = ctx->f16.u32l;
    // 0x80330260: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330264: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330268: lwc1        $f18, 0x1A48($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1A48);
    // 0x8033026C: nop

    // 0x80330270: swc1        $f18, 0x1CE8($t7)
    MEM_W(0X1CE8, ctx->r15) = ctx->f18.u32l;
    // 0x80330274: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330278: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033027C: lwc1        $f4, 0x1A58($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1A58);
    // 0x80330280: nop

    // 0x80330284: swc1        $f4, 0x1CF8($t8)
    MEM_W(0X1CF8, ctx->r24) = ctx->f4.u32l;
    // 0x80330288: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033028C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330290: lwc1        $f6, 0x1A5C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1A5C);
    // 0x80330294: nop

    // 0x80330298: swc1        $f6, 0x1CFC($t9)
    MEM_W(0X1CFC, ctx->r25) = ctx->f6.u32l;
    // 0x8033029C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803302A0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803302A4: lwc1        $f8, 0x1A60($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1A60);
    // 0x803302A8: nop

    // 0x803302AC: swc1        $f8, 0x1D00($t0)
    MEM_W(0X1D00, ctx->r8) = ctx->f8.u32l;
    // 0x803302B0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803302B4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803302B8: lwc1        $f10, 0x1A4C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1A4C);
    // 0x803302BC: nop

    // 0x803302C0: swc1        $f10, 0x1CEC($t1)
    MEM_W(0X1CEC, ctx->r9) = ctx->f10.u32l;
    // 0x803302C4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803302C8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803302CC: lwc1        $f16, 0x1A50($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1A50);
    // 0x803302D0: nop

    // 0x803302D4: swc1        $f16, 0x1CF0($t2)
    MEM_W(0X1CF0, ctx->r10) = ctx->f16.u32l;
    // 0x803302D8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803302DC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803302E0: lwc1        $f18, 0x1A54($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1A54);
    // 0x803302E4: nop

    // 0x803302E8: swc1        $f18, 0x1CF4($t3)
    MEM_W(0X1CF4, ctx->r11) = ctx->f18.u32l;
    // 0x803302EC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x803302F0: jal         0x8001BB34
    // 0x803302F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803302F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803302F8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803302FC: lw          $t4, 0x2710($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2710);
    // 0x80330300: nop

    // 0x80330304: bne         $t4, $zero, L_8033034C
    if (ctx->r12 != 0) {
        // 0x80330308: nop
    
            goto L_8033034C;
    }
    // 0x80330308: nop

    // 0x8033030C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80330310: lb          $t5, 0x7630($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7630);
    // 0x80330314: nop

    // 0x80330318: bne         $t5, $zero, L_8033034C
    if (ctx->r13 != 0) {
        // 0x8033031C: nop
    
            goto L_8033034C;
    }
    // 0x8033031C: nop

    // 0x80330320: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80330324: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80330328: nop

    // 0x8033032C: bltz        $t6, L_8033034C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80330330: nop
    
            goto L_8033034C;
    }
    // 0x80330330: nop

    // 0x80330334: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80330338: beq         $at, $zero, L_8033034C
    if (ctx->r1 == 0) {
        // 0x8033033C: nop
    
            goto L_8033034C;
    }
    // 0x8033033C: nop

    // 0x80330340: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80330344: jal         0x8001BB34
    // 0x80330348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80330348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033034C:
    // 0x8033034C: b           L_80330354
    // 0x80330350: nop

        goto L_80330354;
    // 0x80330350: nop

L_80330354:
    // 0x80330354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033035C: jr          $ra
    // 0x80330360: nop

    return;
    // 0x80330360: nop

;}
RECOMP_FUNC void func_80330C44_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C44: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330C48: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80330C4C: nop

    // 0x80330C50: bne         $t6, $zero, L_80330C6C
    if (ctx->r14 != 0) {
        // 0x80330C54: nop
    
            goto L_80330C6C;
    }
    // 0x80330C54: nop

    // 0x80330C58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330C5C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C60: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80330C64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C68: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
L_80330C6C:
    // 0x80330C6C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330C70: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x80330C74: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330C78: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330C7C: sw          $t9, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r25;
    // 0x80330C80: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330C84: lw          $t0, 0x2710($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2710);
    // 0x80330C88: nop

    // 0x80330C8C: bne         $t0, $zero, L_80330CF4
    if (ctx->r8 != 0) {
        // 0x80330C90: nop
    
            goto L_80330CF4;
    }
    // 0x80330C90: nop

    // 0x80330C94: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330C98: lw          $t1, 0x26F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26F8);
    // 0x80330C9C: nop

    // 0x80330CA0: slti        $at, $t1, 0x1F
    ctx->r1 = SIGNED(ctx->r9) < 0X1F ? 1 : 0;
    // 0x80330CA4: bne         $at, $zero, L_80330CEC
    if (ctx->r1 != 0) {
        // 0x80330CA8: nop
    
            goto L_80330CEC;
    }
    // 0x80330CA8: nop

    // 0x80330CAC: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330CB0: lw          $t2, 0x26F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F0);
    // 0x80330CB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330CB8: bne         $t2, $at, L_80330CD8
    if (ctx->r10 != ctx->r1) {
        // 0x80330CBC: nop
    
            goto L_80330CD8;
    }
    // 0x80330CBC: nop

    // 0x80330CC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330CC4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CC8: sw          $t3, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r11;
    // 0x80330CCC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CD0: b           L_80330CEC
    // 0x80330CD4: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
        goto L_80330CEC;
    // 0x80330CD4: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80330CD8:
    // 0x80330CD8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330CDC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CE0: sw          $t4, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r12;
    // 0x80330CE4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CE8: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80330CEC:
    // 0x80330CEC: b           L_80330D08
    // 0x80330CF0: nop

        goto L_80330D08;
    // 0x80330CF0: nop

L_80330CF4:
    // 0x80330CF4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80330CF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330CFC: sw          $t5, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r13;
    // 0x80330D00: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330D04: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80330D08:
    // 0x80330D08: jr          $ra
    // 0x80330D0C: nop

    return;
    // 0x80330D0C: nop

    // 0x80330D10: jr          $ra
    // 0x80330D14: nop

    return;
    // 0x80330D14: nop

;}
RECOMP_FUNC void func_8033248C_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033248C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332494: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80332498: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8033249C: jal         0x8001ECB8
    // 0x803324A0: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x803324A0: nop

    after_0:
    // 0x803324A4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803324A8: addiu       $t6, $t6, 0x21B4
    ctx->r14 = ADD32(ctx->r14, 0X21B4);
    // 0x803324AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803324B0: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x803324B4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803324B8: addiu       $t7, $t7, 0x1F40
    ctx->r15 = ADD32(ctx->r15, 0X1F40);
    // 0x803324BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803324C0: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x803324C4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x803324C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324CC: sw          $t8, 0x26F0($at)
    MEM_W(0X26F0, ctx->r1) = ctx->r24;
    // 0x803324D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803324D4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324D8: sw          $t9, 0x2710($at)
    MEM_W(0X2710, ctx->r1) = ctx->r25;
    // 0x803324DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803324E0: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x803324E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803324E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803324EC: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x803324F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803324F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803324F8: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803324FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332504: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x80332508: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033250C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332510: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x80332514: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033251C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80332520: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332524: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332528: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8033252C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332530: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332534: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80332538: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033253C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332540: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332544: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80332548: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033254C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332550: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x80332554: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80332558: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033255C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332560: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x80332564: jal         0x80019C84
    // 0x80332568: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80332568: nop

    after_1:
    // 0x8033256C: jal         0x80019D2C
    // 0x80332570: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80332570: nop

    after_2:
    // 0x80332574: jal         0x8001A258
    // 0x80332578: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80332578: nop

    after_3:
    // 0x8033257C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332580: addiu       $t0, $t0, 0xD70
    ctx->r8 = ADD32(ctx->r8, 0XD70);
    // 0x80332584: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80332588: sw          $t0, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r8;
    // 0x8033258C: jal         0x80060278
    // 0x80332590: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80332590: nop

    after_4:
    // 0x80332594: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332598: jal         0x8006031C
    // 0x8033259C: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    func_8006031C(rdram, ctx);
        goto after_5;
    // 0x8033259C: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    after_5:
    // 0x803325A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_803325A4:
    // 0x803325A4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803325A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803325AC: jal         0x80060BA4
    // 0x803325B0: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    func_80060BA4(rdram, ctx);
        goto after_6;
    // 0x803325B0: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    after_6:
    // 0x803325B4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803325B8: nop

    // 0x803325BC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803325C0: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x803325C4: bne         $at, $zero, L_803325A4
    if (ctx->r1 != 0) {
        // 0x803325C8: sw          $t2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r10;
            goto L_803325A4;
    }
    // 0x803325C8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803325CC: jal         0x8033244C
    // 0x803325D0: nop

    func_8033244C_unk_bin_7(rdram, ctx);
        goto after_7;
    // 0x803325D0: nop

    after_7:
    // 0x803325D4: jal         0x80330364
    // 0x803325D8: nop

    func_80330364_unk_bin_7(rdram, ctx);
        goto after_8;
    // 0x803325D8: nop

    after_8:
    // 0x803325DC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x803325E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803325E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803325E8: jal         0x8001D244
    // 0x803325EC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_9;
    // 0x803325EC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_9:
    // 0x803325F0: jal         0x8001D284
    // 0x803325F4: nop

    func_8001D284(rdram, ctx);
        goto after_10;
    // 0x803325F4: nop

    after_10:
    // 0x803325F8: jal         0x80000964
    // 0x803325FC: nop

    func_80000964(rdram, ctx);
        goto after_11;
    // 0x803325FC: nop

    after_11:
    // 0x80332600: b           L_80332608
    // 0x80332604: nop

        goto L_80332608;
    // 0x80332604: nop

L_80332608:
    // 0x80332608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033260C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332610: jr          $ra
    // 0x80332614: nop

    return;
    // 0x80332614: nop

    // 0x80332618: nop

    // 0x8033261C: nop

;}
RECOMP_FUNC void func_8033244C_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033244C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332450: sw          $zero, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = 0;
    // 0x80332454: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332458: sw          $zero, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = 0;
    // 0x8033245C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332460: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80332464: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332468: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
    // 0x8033246C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332470: sw          $zero, 0x2704($at)
    MEM_W(0X2704, ctx->r1) = 0;
    // 0x80332474: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332478: sw          $zero, 0x2708($at)
    MEM_W(0X2708, ctx->r1) = 0;
    // 0x8033247C: jr          $ra
    // 0x80332480: nop

    return;
    // 0x80332480: nop

    // 0x80332484: jr          $ra
    // 0x80332488: nop

    return;
    // 0x80332488: nop

;}
RECOMP_FUNC void func_80331618_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033161C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331620: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331624: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80331628: nop

    // 0x8033162C: bne         $t6, $zero, L_803316EC
    if (ctx->r14 != 0) {
        // 0x80331630: nop
    
            goto L_803316EC;
    }
    // 0x80331630: nop

    // 0x80331634: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331638: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033163C: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80331640: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331644: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80331648: addiu       $t8, $zero, 0x44
    ctx->r24 = ADD32(0, 0X44);
    // 0x8033164C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80331650: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80331654: jal         0x80060E40
    // 0x80331658: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80060E40(rdram, ctx);
        goto after_0;
    // 0x80331658: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x8033165C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331660: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80331664: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331668: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033166C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331670: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331674: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331678: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033167C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331680: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331684: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80331688: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033168C: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x80331690: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331694: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331698: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033169C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803316A0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803316A4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803316A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316AC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803316B0: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x803316B4: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803316B8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803316BC: addiu       $t3, $t3, 0x2658
    ctx->r11 = ADD32(ctx->r11, 0X2658);
    // 0x803316C0: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x803316C4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803316C8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x803316CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803316D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803316D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803316D8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803316DC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803316E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803316E8: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
L_803316EC:
    // 0x803316EC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803316F0: lw          $t7, 0x26F8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X26F8);
    // 0x803316F4: nop

    // 0x803316F8: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x803316FC: bne         $at, $zero, L_80331724
    if (ctx->r1 != 0) {
        // 0x80331700: nop
    
            goto L_80331724;
    }
    // 0x80331700: nop

    // 0x80331704: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331708: lw          $t8, 0x26FC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26FC);
    // 0x8033170C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331710: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331714: sw          $t9, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r25;
    // 0x80331718: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033171C: b           L_80331738
    // 0x80331720: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
        goto L_80331738;
    // 0x80331720: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80331724:
    // 0x80331724: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331728: lw          $t0, 0x26F8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26F8);
    // 0x8033172C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331730: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331734: sw          $t1, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r9;
L_80331738:
    // 0x80331738: b           L_80331740
    // 0x8033173C: nop

        goto L_80331740;
    // 0x8033173C: nop

L_80331740:
    // 0x80331740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331748: jr          $ra
    // 0x8033174C: nop

    return;
    // 0x8033174C: nop

;}
