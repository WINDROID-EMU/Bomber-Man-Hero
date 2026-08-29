#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033AD10_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AD10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AD14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AD18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AD1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AD20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AD24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AD28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AD30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AD38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AD3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AD40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033AD44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AD48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AD4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AD50: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033AD54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033AD58: jal         0x800175F0
    // 0x8033AD5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033AD5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033AD60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD64: nop

    // 0x8033AD68: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033AD6C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033AD70: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8033AD74: lw          $a3, 0xD4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XD4);
    // 0x8033AD78: jal         0x8007EE88
    // 0x8033AD7C: nop

    func_8007EE88(rdram, ctx);
        goto after_1;
    // 0x8033AD7C: nop

    after_1:
    // 0x8033AD80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AD84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AD88: jal         0x8002B114
    // 0x8033AD8C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033AD8C: nop

    after_2:
    // 0x8033AD90: b           L_8033AD98
    // 0x8033AD94: nop

        goto L_8033AD98;
    // 0x8033AD94: nop

L_8033AD98:
    // 0x8033AD98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AD9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033ADA0: jr          $ra
    // 0x8033ADA4: nop

    return;
    // 0x8033ADA4: nop

;}
RECOMP_FUNC void func_80331D44_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331D48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331D4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331D50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D78: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331D7C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331D80: nop

    // 0x80331D84: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x80331D88: nop

    // 0x80331D8C: beq         $t1, $zero, L_80331DB0
    if (ctx->r9 == 0) {
        // 0x80331D90: nop
    
            goto L_80331DB0;
    }
    // 0x80331D90: nop

    // 0x80331D94: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331D98: nop

    // 0x80331D9C: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80331DA0: nop

    // 0x80331DA4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80331DA8: b           L_80331DBC
    // 0x80331DAC: sh          $t4, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r12;
        goto L_80331DBC;
    // 0x80331DAC: sh          $t4, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r12;
L_80331DB0:
    // 0x80331DB0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331DB4: nop

    // 0x80331DB8: sh          $zero, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = 0;
L_80331DBC:
    // 0x80331DBC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331DC0: nop

    // 0x80331DC4: lh          $t7, 0xB8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB8);
    // 0x80331DC8: nop

    // 0x80331DCC: beq         $t7, $zero, L_80331DF0
    if (ctx->r15 == 0) {
        // 0x80331DD0: nop
    
            goto L_80331DF0;
    }
    // 0x80331DD0: nop

    // 0x80331DD4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331DD8: nop

    // 0x80331DDC: lh          $t9, 0xB8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB8);
    // 0x80331DE0: nop

    // 0x80331DE4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80331DE8: b           L_80331DFC
    // 0x80331DEC: sh          $t0, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r8;
        goto L_80331DFC;
    // 0x80331DEC: sh          $t0, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r8;
L_80331DF0:
    // 0x80331DF0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331DF4: nop

    // 0x80331DF8: sh          $zero, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = 0;
L_80331DFC:
    // 0x80331DFC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331E00: nop

    // 0x80331E04: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80331E08: nop

    // 0x80331E0C: beq         $t4, $zero, L_80331E30
    if (ctx->r12 == 0) {
        // 0x80331E10: nop
    
            goto L_80331E30;
    }
    // 0x80331E10: nop

    // 0x80331E14: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331E18: nop

    // 0x80331E1C: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x80331E20: nop

    // 0x80331E24: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80331E28: b           L_80331E3C
    // 0x80331E2C: sh          $t6, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r14;
        goto L_80331E3C;
    // 0x80331E2C: sh          $t6, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r14;
L_80331E30:
    // 0x80331E30: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331E34: nop

    // 0x80331E38: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
L_80331E3C:
    // 0x80331E3C: lui         $t9, 0x8034
    ctx->r25 = S32(0X8034 << 16);
    // 0x80331E40: lh          $t9, -0x4D20($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4D20);
    // 0x80331E44: nop

    // 0x80331E48: beq         $t9, $zero, L_80331E68
    if (ctx->r25 == 0) {
        // 0x80331E4C: nop
    
            goto L_80331E68;
    }
    // 0x80331E4C: nop

    // 0x80331E50: lui         $t0, 0x8034
    ctx->r8 = S32(0X8034 << 16);
    // 0x80331E54: lh          $t0, -0x4D20($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X4D20);
    // 0x80331E58: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331E5C: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x80331E60: b           L_80331E70
    // 0x80331E64: sh          $t8, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r24;
        goto L_80331E70;
    // 0x80331E64: sh          $t8, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r24;
L_80331E68:
    // 0x80331E68: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331E6C: sh          $zero, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = 0;
L_80331E70:
    // 0x80331E70: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80331E74: lh          $t1, 0x7608($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7608);
    // 0x80331E78: nop

    // 0x80331E7C: bne         $t1, $zero, L_80331EF4
    if (ctx->r9 != 0) {
        // 0x80331E80: nop
    
            goto L_80331EF4;
    }
    // 0x80331E80: nop

    // 0x80331E84: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331E88: nop

    // 0x80331E8C: lw          $t4, 0xCC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XCC);
    // 0x80331E90: nop

    // 0x80331E94: bne         $t4, $zero, L_80331EF4
    if (ctx->r12 != 0) {
        // 0x80331E98: nop
    
            goto L_80331EF4;
    }
    // 0x80331E98: nop

    // 0x80331E9C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331EA0: nop

    // 0x80331EA4: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x80331EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EB0: jal         0x8001BB34
    // 0x80331EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331EB8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331EBC: addiu       $t6, $zero, 0x63
    ctx->r14 = ADD32(0, 0X63);
    // 0x80331EC0: sh          $t6, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r14;
    // 0x80331EC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331EC8: nop

    // 0x80331ECC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80331ED0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331ED4: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x80331ED8: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x80331EDC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331EE0: nop

    // 0x80331EE4: sh          $zero, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = 0;
    // 0x80331EE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331EEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80331EF0: sw          $t1, 0xCC($t3)
    MEM_W(0XCC, ctx->r11) = ctx->r9;
L_80331EF4:
    // 0x80331EF4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331EF8: nop

    // 0x80331EFC: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80331F00: nop

    // 0x80331F04: bne         $t5, $zero, L_80331F24
    if (ctx->r13 != 0) {
        // 0x80331F08: nop
    
            goto L_80331F24;
    }
    // 0x80331F08: nop

    // 0x80331F0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F14: jal         0x8001BB34
    // 0x80331F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331F1C: b           L_80331F4C
    // 0x80331F20: nop

        goto L_80331F4C;
    // 0x80331F20: nop

L_80331F24:
    // 0x80331F24: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F2C: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80331F30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F34: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80331F38: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80331F3C: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331F40: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80331F44: jal         0x8001BB34
    // 0x80331F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80331F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_80331F4C:
    // 0x80331F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F54: jal         0x80028FA0
    // 0x80331F58: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x80331F58: nop

    after_3:
    // 0x80331F5C: beq         $v0, $zero, L_80331F84
    if (ctx->r2 == 0) {
        // 0x80331F60: nop
    
            goto L_80331F84;
    }
    // 0x80331F60: nop

    // 0x80331F64: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331F68: addiu       $at, $zero, 0x1D0
    ctx->r1 = ADD32(0, 0X1D0);
    // 0x80331F6C: lh          $t0, 0x106($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X106);
    // 0x80331F70: nop

    // 0x80331F74: bne         $t0, $at, L_80331F84
    if (ctx->r8 != ctx->r1) {
        // 0x80331F78: nop
    
            goto L_80331F84;
    }
    // 0x80331F78: nop

    // 0x80331F7C: jal         0x80338204
    // 0x80331F80: nop

    func_80338204_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80331F80: nop

    after_4:
L_80331F84:
    // 0x80331F84: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331F88: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x80331F8C: addiu       $t1, $t1, -0x4D34
    ctx->r9 = ADD32(ctx->r9, -0X4D34);
    // 0x80331F90: lui         $a3, 0x8034
    ctx->r7 = S32(0X8034 << 16);
    // 0x80331F94: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80331F98: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331F9C: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x80331FA0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331FA4: jal         0x8033615C
    // 0x80331FA8: addiu       $a3, $a3, -0x4D38
    ctx->r7 = ADD32(ctx->r7, -0X4D38);
    func_8033615C_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80331FA8: addiu       $a3, $a3, -0x4D38
    ctx->r7 = ADD32(ctx->r7, -0X4D38);
    after_5:
    // 0x80331FAC: jal         0x80335A18
    // 0x80331FB0: nop

    func_80335A18_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80331FB0: nop

    after_6:
    // 0x80331FB4: jal         0x803332F4
    // 0x80331FB8: nop

    func_803332F4_unk_bin_16(rdram, ctx);
        goto after_7;
    // 0x80331FB8: nop

    after_7:
    // 0x80331FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FC4: jal         0x80029C40
    // 0x80331FC8: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x80331FC8: nop

    after_8:
    // 0x80331FCC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331FD0: nop

    // 0x80331FD4: lw          $t4, 0xC4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC4);
    // 0x80331FD8: nop

    // 0x80331FDC: bne         $t4, $zero, L_80331FFC
    if (ctx->r12 != 0) {
        // 0x80331FE0: nop
    
            goto L_80331FFC;
    }
    // 0x80331FE0: nop

    // 0x80331FE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80331FF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331FF4: jal         0x8002A0D0
    // 0x80331FF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_9;
    // 0x80331FF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
L_80331FFC:
    // 0x80331FFC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332000: nop

    // 0x80332004: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80332008: nop

    // 0x8033200C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80332010: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332014: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033201C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332020: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332024: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x80332028: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033202C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332030: jal         0x80029018
    // 0x80332034: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x80332034: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80332038: beq         $v0, $zero, L_80332084
    if (ctx->r2 == 0) {
        // 0x8033203C: nop
    
            goto L_80332084;
    }
    // 0x8033203C: nop

    // 0x80332040: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332044: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332048: nop

    // 0x8033204C: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x80332050: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332054: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332058: nop

    // 0x8033205C: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x80332060: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332064: nop

    // 0x80332068: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033206C: nop

    // 0x80332070: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x80332074: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332078: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033207C: b           L_80332090
    // 0x80332080: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
        goto L_80332090;
    // 0x80332080: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_80332084:
    // 0x80332084: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332088: nop

    // 0x8033208C: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
L_80332090:
    // 0x80332090: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80332094: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332098: nop

    // 0x8033209C: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x803320A0: b           L_803320A8
    // 0x803320A4: nop

        goto L_803320A8;
    // 0x803320A4: nop

L_803320A8:
    // 0x803320A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803320AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803320B0: jr          $ra
    // 0x803320B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803320B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80338F28_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338F28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338F2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338F30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338F34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338F38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338F3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338F40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338F44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338F4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338F50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338F54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338F58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338F5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338F60: nop

    // 0x80338F64: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80338F68: nop

    // 0x80338F6C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80338F70: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x80338F74: beq         $at, $zero, L_80339500
    if (ctx->r1 == 0) {
        // 0x80338F78: nop
    
            goto L_80339500;
    }
    // 0x80338F78: nop

    // 0x80338F7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338F80: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338F84: addu        $at, $at, $t2
    gpr jr_addend_80338F90 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80338F88: lw          $t2, -0x4AA4($at)
    ctx->r10 = ADD32(ctx->r1, -0X4AA4);
    // 0x80338F8C: nop

    // 0x80338F90: jr          $t2
    // 0x80338F94: nop

    switch (jr_addend_80338F90 >> 2) {
        case 0: goto L_80338F98; break;
        case 1: goto L_8033903C; break;
        case 2: goto L_803390DC; break;
        case 3: goto L_80339180; break;
        case 4: goto L_80339220; break;
        case 5: goto L_803392D8; break;
        case 6: goto L_80339390; break;
        case 7: goto L_80339448; break;
        default: switch_error(__func__, 0x80338F90, 0x8033B55C);
    }
    // 0x80338F94: nop

L_80338F98:
    // 0x80338F98: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80338F9C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338FA0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338FA4: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80338FA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338FAC: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80338FB0: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80338FB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80338FB8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80338FBC: jal         0x80339520
    // 0x80338FC0: nop

    func_80339520_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80338FC0: nop

    after_0:
    // 0x80338FC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338FC8: beq         $v0, $at, L_80339034
    if (ctx->r2 == ctx->r1) {
        // 0x80338FCC: nop
    
            goto L_80339034;
    }
    // 0x80338FCC: nop

    // 0x80338FD0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338FD4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80338FD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338FDC: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80338FE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80338FE4: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80338FE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80338FEC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80338FF0: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80338FF4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80338FF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338FFC: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x80339000: jal         0x80027464
    // 0x80339004: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80339004: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80339008: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033900C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80339010: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339014: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033901C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339024: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339028: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033902C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80339030: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
L_80339034:
    // 0x80339034: b           L_80339508
    // 0x80339038: nop

        goto L_80339508;
    // 0x80339038: nop

L_8033903C:
    // 0x8033903C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339040: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339044: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80339048: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033904C: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80339050: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339054: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x80339058: jal         0x80339520
    // 0x8033905C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x8033905C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x80339060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339064: beq         $v0, $at, L_803390D4
    if (ctx->r2 == ctx->r1) {
        // 0x80339068: nop
    
            goto L_803390D4;
    }
    // 0x80339068: nop

    // 0x8033906C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339070: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80339074: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339078: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033907C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80339080: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80339084: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80339088: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8033908C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339090: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80339094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339098: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x8033909C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803390A0: jal         0x80027464
    // 0x803390A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803390A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x803390A8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803390AC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803390B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803390B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803390B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803390BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803390C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803390C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803390C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803390CC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803390D0: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
L_803390D4:
    // 0x803390D4: b           L_80339508
    // 0x803390D8: nop

        goto L_80339508;
    // 0x803390D8: nop

L_803390DC:
    // 0x803390DC: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x803390E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803390E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803390E8: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x803390EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803390F0: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803390F4: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803390F8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803390FC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80339100: jal         0x80339520
    // 0x80339104: nop

    func_80339520_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80339104: nop

    after_4:
    // 0x80339108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033910C: beq         $v0, $at, L_80339178
    if (ctx->r2 == ctx->r1) {
        // 0x80339110: nop
    
            goto L_80339178;
    }
    // 0x80339110: nop

    // 0x80339114: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339118: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8033911C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339120: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80339124: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80339128: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x8033912C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80339130: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339134: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80339138: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033913C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339140: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x80339144: jal         0x80027464
    // 0x80339148: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80339148: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8033914C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80339150: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80339154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339158: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033915C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339160: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339164: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339168: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033916C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80339170: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80339174: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_80339178:
    // 0x80339178: b           L_80339508
    // 0x8033917C: nop

        goto L_80339508;
    // 0x8033917C: nop

L_80339180:
    // 0x80339180: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339184: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339188: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033918C: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80339190: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80339194: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339198: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x8033919C: jal         0x80339520
    // 0x803391A0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x803391A0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    after_6:
    // 0x803391A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803391A8: beq         $v0, $at, L_80339218
    if (ctx->r2 == ctx->r1) {
        // 0x803391AC: nop
    
            goto L_80339218;
    }
    // 0x803391AC: nop

    // 0x803391B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803391B4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803391B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803391BC: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803391C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803391C4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803391C8: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803391CC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x803391D0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803391D4: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803391D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803391DC: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x803391E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x803391E4: jal         0x80027464
    // 0x803391E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803391E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x803391EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803391F0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803391F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803391F8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x803391FC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80339200: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339204: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80339208: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033920C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339210: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80339214: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
L_80339218:
    // 0x80339218: b           L_80339508
    // 0x8033921C: nop

        goto L_80339508;
    // 0x8033921C: nop

L_80339220:
    // 0x80339220: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339224: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339228: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x8033922C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80339230: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339234: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339238: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033923C: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80339240: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80339244: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80339248: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8033924C: jal         0x80339520
    // 0x80339250: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x80339250: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_8:
    // 0x80339254: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339258: beq         $v0, $at, L_803392D0
    if (ctx->r2 == ctx->r1) {
        // 0x8033925C: nop
    
            goto L_803392D0;
    }
    // 0x8033925C: nop

    // 0x80339260: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339264: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80339268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033926C: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80339270: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339274: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80339278: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033927C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80339280: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80339284: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80339288: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033928C: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80339290: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80339294: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339298: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x8033929C: jal         0x80027464
    // 0x803392A0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x803392A0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x803392A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803392A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803392AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803392B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803392B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803392B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803392BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803392C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803392C4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803392C8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803392CC: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
L_803392D0:
    // 0x803392D0: b           L_80339508
    // 0x803392D4: nop

        goto L_80339508;
    // 0x803392D4: nop

L_803392D8:
    // 0x803392D8: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x803392DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803392E0: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x803392E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803392E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803392EC: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x803392F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803392F4: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803392F8: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803392FC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80339300: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80339304: jal         0x80339520
    // 0x80339308: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_10;
    // 0x80339308: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_10:
    // 0x8033930C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339310: beq         $v0, $at, L_80339388
    if (ctx->r2 == ctx->r1) {
        // 0x80339314: nop
    
            goto L_80339388;
    }
    // 0x80339314: nop

    // 0x80339318: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033931C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80339320: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339324: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80339328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033932C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80339330: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80339334: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80339338: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033933C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80339340: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339344: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80339348: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033934C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339350: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x80339354: jal         0x80027464
    // 0x80339358: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80339358: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x8033935C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80339360: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80339364: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339368: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033936C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339370: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339374: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339378: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033937C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339380: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80339384: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
L_80339388:
    // 0x80339388: b           L_80339508
    // 0x8033938C: nop

        goto L_80339508;
    // 0x8033938C: nop

L_80339390:
    // 0x80339390: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339394: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339398: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x8033939C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803393A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803393A4: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x803393A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803393AC: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803393B0: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803393B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803393B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803393BC: jal         0x80339520
    // 0x803393C0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x803393C0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    after_12:
    // 0x803393C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803393C8: beq         $v0, $at, L_80339440
    if (ctx->r2 == ctx->r1) {
        // 0x803393CC: nop
    
            goto L_80339440;
    }
    // 0x803393CC: nop

    // 0x803393D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803393D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803393D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803393DC: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803393E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803393E4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803393E8: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803393EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803393F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803393F4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803393F8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803393FC: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80339400: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80339404: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339408: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x8033940C: jal         0x80027464
    // 0x80339410: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x80339410: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x80339414: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80339418: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8033941C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339420: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80339424: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033942C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339434: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80339438: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8033943C: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_80339440:
    // 0x80339440: b           L_80339508
    // 0x80339444: nop

        goto L_80339508;
    // 0x80339444: nop

L_80339448:
    // 0x80339448: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x8033944C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339450: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80339454: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339458: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033945C: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x80339460: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339464: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80339468: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033946C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80339470: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80339474: jal         0x80339520
    // 0x80339478: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    func_80339520_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x80339478: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    after_14:
    // 0x8033947C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339480: beq         $v0, $at, L_803394F8
    if (ctx->r2 == ctx->r1) {
        // 0x80339484: nop
    
            goto L_803394F8;
    }
    // 0x80339484: nop

    // 0x80339488: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033948C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80339490: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339494: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80339498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033949C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803394A0: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803394A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803394A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803394AC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803394B0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803394B4: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803394B8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803394BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803394C0: lui         $a3, 0xC140
    ctx->r7 = S32(0XC140 << 16);
    // 0x803394C4: jal         0x80027464
    // 0x803394C8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x803394C8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x803394CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803394D0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803394D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803394D8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x803394DC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803394E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803394E4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803394E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803394EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803394F0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x803394F4: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
L_803394F8:
    // 0x803394F8: b           L_80339508
    // 0x803394FC: nop

        goto L_80339508;
    // 0x803394FC: nop

L_80339500:
    // 0x80339500: b           L_80339508
    // 0x80339504: nop

        goto L_80339508;
    // 0x80339504: nop

L_80339508:
    // 0x80339508: b           L_80339510
    // 0x8033950C: nop

        goto L_80339510;
    // 0x8033950C: nop

L_80339510:
    // 0x80339510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339518: jr          $ra
    // 0x8033951C: nop

    return;
    // 0x8033951C: nop

;}
RECOMP_FUNC void func_80339850_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339850: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339858: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033985C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339860: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339864: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339868: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033986C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339870: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339874: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339878: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033987C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339880: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339884: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339888: nop

    // 0x8033988C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339890: nop

    // 0x80339894: bne         $t1, $zero, L_803398E0
    if (ctx->r9 != 0) {
        // 0x80339898: nop
    
            goto L_803398E0;
    }
    // 0x80339898: nop

    // 0x8033989C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803398A0: nop

    // 0x803398A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803398A8: nop

    // 0x803398AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803398B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803398B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803398B8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803398BC: addiu       $t5, $t5, -0x6684
    ctx->r13 = ADD32(ctx->r13, -0X6684);
    // 0x803398C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803398C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803398C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803398CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803398D0: jal         0x8001C0EC
    // 0x803398D4: addiu       $a3, $zero, 0x107
    ctx->r7 = ADD32(0, 0X107);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803398D4: addiu       $a3, $zero, 0x107
    ctx->r7 = ADD32(0, 0X107);
    after_0:
    // 0x803398D8: jal         0x8001E1C0
    // 0x803398DC: nop

    ResetActiveController(rdram, ctx);
        goto after_1;
    // 0x803398DC: nop

    after_1:
L_803398E0:
    // 0x803398E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803398E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803398E8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803398EC: nop

    // 0x803398F0: bne         $t7, $at, L_80339944
    if (ctx->r15 != ctx->r1) {
        // 0x803398F4: nop
    
            goto L_80339944;
    }
    // 0x803398F4: nop

    // 0x803398F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803398FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339900: jal         0x8001B62C
    // 0x80339904: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80339904: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80339908: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x8033990C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339910: nop

    // 0x80339914: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80339918: nop

    // 0x8033991C: bc1f        L_8033993C
    if (!c1cs) {
        // 0x80339920: nop
    
            goto L_8033993C;
    }
    // 0x80339920: nop

    // 0x80339924: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339928: nop

    // 0x8033992C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80339930: nop

    // 0x80339934: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80339938: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
L_8033993C:
    // 0x8033993C: b           L_803399A4
    // 0x80339940: nop

        goto L_803399A4;
    // 0x80339940: nop

L_80339944:
    // 0x80339944: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339948: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x8033994C: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80339950: nop

    // 0x80339954: bne         $t3, $at, L_8033998C
    if (ctx->r11 != ctx->r1) {
        // 0x80339958: nop
    
            goto L_8033998C;
    }
    // 0x80339958: nop

    // 0x8033995C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339960: nop

    // 0x80339964: lbu         $t2, 0x132($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X132);
    // 0x80339968: nop

    // 0x8033996C: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80339970: sb          $t5, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r13;
    // 0x80339974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033997C: jal         0x8001BBDC
    // 0x80339980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80339980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80339984: b           L_803399A4
    // 0x80339988: nop

        goto L_803399A4;
    // 0x80339988: nop

L_8033998C:
    // 0x8033998C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339990: nop

    // 0x80339994: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80339998: nop

    // 0x8033999C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x803399A0: sb          $t9, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r25;
L_803399A4:
    // 0x803399A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803399A8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x803399AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803399B0: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803399B4: jal         0x80015538
    // 0x803399B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803399B8: nop

    after_4:
    // 0x803399BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803399C0: nop

    // 0x803399C4: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x803399C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399D0: jal         0x8001B4AC
    // 0x803399D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x803399D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x803399D8: beq         $v0, $zero, L_803399F0
    if (ctx->r2 == 0) {
        // 0x803399DC: nop
    
            goto L_803399F0;
    }
    // 0x803399DC: nop

    // 0x803399E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399E8: jal         0x8002B114
    // 0x803399EC: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x803399EC: nop

    after_6:
L_803399F0:
    // 0x803399F0: b           L_803399F8
    // 0x803399F4: nop

        goto L_803399F8;
    // 0x803399F4: nop

L_803399F8:
    // 0x803399F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803399FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339A00: jr          $ra
    // 0x80339A04: nop

    return;
    // 0x80339A04: nop

;}
RECOMP_FUNC void func_803340D0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803340D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803340D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803340D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803340DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803340E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803340E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803340F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803340FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334100: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334104: jal         0x803374AC
    // 0x80334108: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80334108: nop

    after_0:
    // 0x8033410C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80334110: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334114: nop

    // 0x80334118: bne         $t0, $zero, L_803341E0
    if (ctx->r8 != 0) {
        // 0x8033411C: nop
    
            goto L_803341E0;
    }
    // 0x8033411C: nop

    // 0x80334120: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334124: nop

    // 0x80334128: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x8033412C: nop

    // 0x80334130: bne         $t2, $zero, L_803341D0
    if (ctx->r10 != 0) {
        // 0x80334134: nop
    
            goto L_803341D0;
    }
    // 0x80334134: nop

    // 0x80334138: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033413C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334140: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80334144: nop

    // 0x80334148: bne         $t4, $at, L_803341C0
    if (ctx->r12 != ctx->r1) {
        // 0x8033414C: nop
    
            goto L_803341C0;
    }
    // 0x8033414C: nop

    // 0x80334150: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80334154: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80334158: jal         0x80338044
    // 0x8033415C: nop

    func_80338044_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033415C: nop

    after_1:
    // 0x80334160: beq         $v0, $zero, L_803341B0
    if (ctx->r2 == 0) {
        // 0x80334164: nop
    
            goto L_803341B0;
    }
    // 0x80334164: nop

    // 0x80334168: jal         0x80014E80
    // 0x8033416C: addiu       $a0, $zero, -0x1F
    ctx->r4 = ADD32(0, -0X1F);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8033416C: addiu       $a0, $zero, -0x1F
    ctx->r4 = ADD32(0, -0X1F);
    after_2:
    // 0x80334170: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80334174: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80334178: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033417C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80334180: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80334184: jal         0x80015538
    // 0x80334188: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334188: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x8033418C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334190: nop

    // 0x80334194: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80334198: jal         0x8033688C
    // 0x8033419C: nop

    func_8033688C_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x8033419C: nop

    after_4:
    // 0x803341A0: jal         0x80336D20
    // 0x803341A4: nop

    func_80336D20_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x803341A4: nop

    after_5:
    // 0x803341A8: b           L_803341B8
    // 0x803341AC: nop

        goto L_803341B8;
    // 0x803341AC: nop

L_803341B0:
    // 0x803341B0: jal         0x80335CF8
    // 0x803341B4: nop

    func_80335CF8_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x803341B4: nop

    after_6:
L_803341B8:
    // 0x803341B8: b           L_803341C8
    // 0x803341BC: nop

        goto L_803341C8;
    // 0x803341BC: nop

L_803341C0:
    // 0x803341C0: jal         0x80335CF8
    // 0x803341C4: nop

    func_80335CF8_unk_bin_16(rdram, ctx);
        goto after_7;
    // 0x803341C4: nop

    after_7:
L_803341C8:
    // 0x803341C8: b           L_803341D8
    // 0x803341CC: nop

        goto L_803341D8;
    // 0x803341CC: nop

L_803341D0:
    // 0x803341D0: jal         0x80335CF8
    // 0x803341D4: nop

    func_80335CF8_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x803341D4: nop

    after_8:
L_803341D8:
    // 0x803341D8: b           L_803341E8
    // 0x803341DC: nop

        goto L_803341E8;
    // 0x803341DC: nop

L_803341E0:
    // 0x803341E0: jal         0x80335CF8
    // 0x803341E4: nop

    func_80335CF8_unk_bin_16(rdram, ctx);
        goto after_9;
    // 0x803341E4: nop

    after_9:
L_803341E8:
    // 0x803341E8: b           L_803341F0
    // 0x803341EC: nop

        goto L_803341F0;
    // 0x803341EC: nop

L_803341F0:
    // 0x803341F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803341F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803341F8: jr          $ra
    // 0x803341FC: nop

    return;
    // 0x803341FC: nop

;}
RECOMP_FUNC void func_80337A78_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337A78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80337A7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337A80: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80337A84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337A88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337A8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337A90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337A94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337A98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337A9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337AA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337AA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337AA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337AAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337AB0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80337AB4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80337AB8: nop

    // 0x80337ABC: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x80337AC0: nop

    // 0x80337AC4: bne         $t1, $zero, L_80337BA8
    if (ctx->r9 != 0) {
        // 0x80337AC8: nop
    
            goto L_80337BA8;
    }
    // 0x80337AC8: nop

    // 0x80337ACC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80337AD0: nop

    // 0x80337AD4: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80337AD8: lwc1        $f14, 0x4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80337ADC: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x80337AE0: jal         0x803360CC
    // 0x80337AE4: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80337AE4: nop

    after_0:
    // 0x80337AE8: sb          $v0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r2;
    // 0x80337AEC: lbu         $s0, 0x33($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X33);
    // 0x80337AF0: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80337AF4: beq         $s0, $at, L_80337B28
    if (ctx->r16 == ctx->r1) {
        // 0x80337AF8: nop
    
            goto L_80337B28;
    }
    // 0x80337AF8: nop

    // 0x80337AFC: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80337B00: beq         $s0, $at, L_80337B7C
    if (ctx->r16 == ctx->r1) {
        // 0x80337B04: nop
    
            goto L_80337B7C;
    }
    // 0x80337B04: nop

    // 0x80337B08: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x80337B0C: beq         $s0, $at, L_80337B7C
    if (ctx->r16 == ctx->r1) {
        // 0x80337B10: nop
    
            goto L_80337B7C;
    }
    // 0x80337B10: nop

    // 0x80337B14: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80337B18: beq         $s0, $at, L_80337B7C
    if (ctx->r16 == ctx->r1) {
        // 0x80337B1C: nop
    
            goto L_80337B7C;
    }
    // 0x80337B1C: nop

    // 0x80337B20: b           L_80337B8C
    // 0x80337B24: nop

        goto L_80337B8C;
    // 0x80337B24: nop

L_80337B28:
    // 0x80337B28: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80337B2C: nop

    // 0x80337B30: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x80337B34: nop

    // 0x80337B38: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80337B3C: beq         $at, $zero, L_80337B54
    if (ctx->r1 == 0) {
        // 0x80337B40: nop
    
            goto L_80337B54;
    }
    // 0x80337B40: nop

    // 0x80337B44: jal         0x80336284
    // 0x80337B48: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80337B48: nop

    after_1:
    // 0x80337B4C: b           L_80337B74
    // 0x80337B50: nop

        goto L_80337B74;
    // 0x80337B50: nop

L_80337B54:
    // 0x80337B54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337B58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337B5C: jal         0x8001B4AC
    // 0x80337B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80337B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80337B64: beq         $v0, $zero, L_80337B74
    if (ctx->r2 == 0) {
        // 0x80337B68: nop
    
            goto L_80337B74;
    }
    // 0x80337B68: nop

    // 0x80337B6C: jal         0x80336B9C
    // 0x80337B70: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80337B70: nop

    after_3:
L_80337B74:
    // 0x80337B74: b           L_80337BA0
    // 0x80337B78: nop

        goto L_80337BA0;
    // 0x80337B78: nop

L_80337B7C:
    // 0x80337B7C: jal         0x80336284
    // 0x80337B80: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80337B80: nop

    after_4:
    // 0x80337B84: b           L_80337BA0
    // 0x80337B88: nop

        goto L_80337BA0;
    // 0x80337B88: nop

L_80337B8C:
    // 0x80337B8C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80337B90: jal         0x803376AC
    // 0x80337B94: nop

    func_803376AC_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80337B94: nop

    after_5:
    // 0x80337B98: b           L_80337BA0
    // 0x80337B9C: nop

        goto L_80337BA0;
    // 0x80337B9C: nop

L_80337BA0:
    // 0x80337BA0: b           L_80337BB4
    // 0x80337BA4: nop

        goto L_80337BB4;
    // 0x80337BA4: nop

L_80337BA8:
    // 0x80337BA8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80337BAC: jal         0x803376AC
    // 0x80337BB0: nop

    func_803376AC_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80337BB0: nop

    after_6:
L_80337BB4:
    // 0x80337BB4: b           L_80337BBC
    // 0x80337BB8: nop

        goto L_80337BBC;
    // 0x80337BB8: nop

L_80337BBC:
    // 0x80337BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337BC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337BC4: jr          $ra
    // 0x80337BC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80337BC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80334A60_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334A60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80334A64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334A68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80334A6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334A74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334A78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334A7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334A84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A94: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80334A98: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334A9C: nop

    // 0x80334AA0: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80334AA4: nop

    // 0x80334AA8: bne         $t1, $zero, L_80334B00
    if (ctx->r9 != 0) {
        // 0x80334AAC: nop
    
            goto L_80334B00;
    }
    // 0x80334AAC: nop

    // 0x80334AB0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80334AB4: nop

    // 0x80334AB8: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x80334ABC: nop

    // 0x80334AC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334AC4: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
    // 0x80334AC8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334ACC: lwc1        $f4, -0x4D34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x80334AD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334AD4: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x80334AD8: lw          $a2, -0x4D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4D38);
    // 0x80334ADC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334AE0: addiu       $a1, $a1, -0x4DB0
    ctx->r5 = ADD32(ctx->r5, -0X4DB0);
    // 0x80334AE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334AE8: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    // 0x80334AEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334AF0: jal         0x80027464
    // 0x80334AF4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334AF4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80334AF8: b           L_80335680
    // 0x80334AFC: nop

        goto L_80335680;
    // 0x80334AFC: nop

L_80334B00:
    // 0x80334B00: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334B04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80334B08: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x80334B0C: nop

    // 0x80334B10: bne         $t6, $at, L_80335628
    if (ctx->r14 != ctx->r1) {
        // 0x80334B14: nop
    
            goto L_80335628;
    }
    // 0x80334B14: nop

    // 0x80334B18: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80334B1C: nop

    // 0x80334B20: lh          $t8, 0xB4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB4);
    // 0x80334B24: nop

    // 0x80334B28: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80334B2C: sh          $t9, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r25;
    // 0x80334B30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334B34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B40: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80334B44: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80334B48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334B4C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334B50: jal         0x800295C0
    // 0x80334B54: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80334B54: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80334B58: beq         $v0, $zero, L_80334B6C
    if (ctx->r2 == 0) {
        // 0x80334B5C: nop
    
            goto L_80334B6C;
    }
    // 0x80334B5C: nop

    // 0x80334B60: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334B64: b           L_80334B78
    // 0x80334B68: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
        goto L_80334B78;
    // 0x80334B68: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
L_80334B6C:
    // 0x80334B6C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80334B70: nop

    // 0x80334B74: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
L_80334B78:
    // 0x80334B78: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334B7C: nop

    // 0x80334B80: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80334B84: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80334B88: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80334B8C: jal         0x803360CC
    // 0x80334B90: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80334B90: nop

    after_2:
    // 0x80334B94: sb          $v0, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r2;
    // 0x80334B98: lbu         $s0, 0x3F($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3F);
    // 0x80334B9C: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80334BA0: beq         $s0, $at, L_80334BD4
    if (ctx->r16 == ctx->r1) {
        // 0x80334BA4: nop
    
            goto L_80334BD4;
    }
    // 0x80334BA4: nop

    // 0x80334BA8: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80334BAC: beq         $s0, $at, L_80334C84
    if (ctx->r16 == ctx->r1) {
        // 0x80334BB0: nop
    
            goto L_80334C84;
    }
    // 0x80334BB0: nop

    // 0x80334BB4: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x80334BB8: beq         $s0, $at, L_80335200
    if (ctx->r16 == ctx->r1) {
        // 0x80334BBC: nop
    
            goto L_80335200;
    }
    // 0x80334BBC: nop

    // 0x80334BC0: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80334BC4: beq         $s0, $at, L_80335428
    if (ctx->r16 == ctx->r1) {
        // 0x80334BC8: nop
    
            goto L_80335428;
    }
    // 0x80334BC8: nop

    // 0x80334BCC: b           L_80335618
    // 0x80334BD0: nop

        goto L_80335618;
    // 0x80334BD0: nop

L_80334BD4:
    // 0x80334BD4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80334BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334BDC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334BE0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334BE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334BE8: lwc1        $f10, -0x4D34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x80334BEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334BF0: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x80334BF4: lw          $a2, -0x4D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4D38);
    // 0x80334BF8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80334BFC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334C00: addiu       $a1, $a1, -0x4DA4
    ctx->r5 = ADD32(ctx->r5, -0X4DA4);
    // 0x80334C04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334C08: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334C0C: jal         0x80027464
    // 0x80334C10: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80334C10: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80334C14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334C18: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80334C1C: addiu       $t1, $t1, -0x5168
    ctx->r9 = ADD32(ctx->r9, -0X5168);
    // 0x80334C20: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80334C24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80334C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334C30: jal         0x8001C0EC
    // 0x80334C34: addiu       $a3, $zero, 0x124
    ctx->r7 = ADD32(0, 0X124);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80334C34: addiu       $a3, $zero, 0x124
    ctx->r7 = ADD32(0, 0X124);
    after_4:
    // 0x80334C38: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80334C3C: nop

    // 0x80334C40: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x80334C44: nop

    // 0x80334C48: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x80334C4C: sh          $t2, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r10;
    // 0x80334C50: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80334C54: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80334C58: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334C5C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334C60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334C64: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334C68: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80334C6C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334C74: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334C78: sh          $t5, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r13;
    // 0x80334C7C: b           L_80335620
    // 0x80334C80: nop

        goto L_80335620;
    // 0x80334C80: nop

L_80334C84:
    // 0x80334C84: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334C88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80334C8C: lh          $t7, 0xC2($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XC2);
    // 0x80334C90: nop

    // 0x80334C94: bne         $t7, $at, L_80334F40
    if (ctx->r15 != ctx->r1) {
        // 0x80334C98: nop
    
            goto L_80334F40;
    }
    // 0x80334C98: nop

    // 0x80334C9C: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80334CA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334CA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334CA8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334CAC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334CB0: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334CB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334CB8: lui         $a2, 0xC416
    ctx->r6 = S32(0XC416 << 16);
    // 0x80334CBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80334CC0: jal         0x80027464
    // 0x80334CC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80334CC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80334CC8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334CCC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334CD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334CD4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334CD8: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80334CDC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334CE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334CE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334CE8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80334CEC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334CF0: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334CF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334CF8: lui         $a2, 0xC416
    ctx->r6 = S32(0XC416 << 16);
    // 0x80334CFC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334D00: jal         0x80027464
    // 0x80334D04: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80334D04: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80334D08: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334D0C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334D10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334D14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334D18: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334D1C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334D20: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334D24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334D28: lui         $a2, 0xC416
    ctx->r6 = S32(0XC416 << 16);
    // 0x80334D2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334D30: jal         0x80027464
    // 0x80334D34: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80334D34: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80334D38: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334D3C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334D40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334D44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334D48: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334D4C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80334D50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334D54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334D58: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80334D5C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334D60: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334D64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334D68: lui         $a2, 0xC416
    ctx->r6 = S32(0XC416 << 16);
    // 0x80334D6C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80334D70: jal         0x80027464
    // 0x80334D74: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80334D74: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80334D78: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334D7C: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x80334D80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334D84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334D88: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334D8C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334D90: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334D94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334D98: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x80334D9C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80334DA0: jal         0x80027464
    // 0x80334DA4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80334DA4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80334DA8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334DAC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334DB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334DB4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334DB8: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x80334DBC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80334DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334DC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334DC8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80334DCC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334DD0: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334DD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334DD8: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x80334DDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334DE0: jal         0x80027464
    // 0x80334DE4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80334DE4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x80334DE8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334DEC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80334DF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334DF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334DF8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334DFC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334E00: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334E08: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80334E0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334E10: jal         0x80027464
    // 0x80334E14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80334E14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80334E18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334E1C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334E20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334E24: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334E28: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80334E2C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80334E30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334E34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334E38: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80334E3C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334E40: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334E44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334E48: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80334E4C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80334E50: jal         0x80027464
    // 0x80334E54: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x80334E54: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x80334E58: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334E5C: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80334E60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334E64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334E68: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334E6C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334E70: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334E74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334E78: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80334E7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334E80: jal         0x80027464
    // 0x80334E84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x80334E84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x80334E88: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334E8C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334E90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334E94: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334E98: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80334E9C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80334EA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334EA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334EA8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334EAC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334EB0: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334EB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334EB8: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80334EBC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334EC0: jal         0x80027464
    // 0x80334EC4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_14;
    // 0x80334EC4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x80334EC8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334ECC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334ED0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334ED4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334ED8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334EDC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334EE0: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334EE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334EE8: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80334EEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334EF0: jal         0x80027464
    // 0x80334EF4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x80334EF4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x80334EF8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334EFC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334F00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334F04: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334F08: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334F0C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80334F10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334F14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334F18: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80334F1C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334F20: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334F24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334F28: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80334F2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334F30: jal         0x80027464
    // 0x80334F34: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80334F34: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x80334F38: b           L_803351F8
    // 0x80334F3C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
        goto L_803351F8;
    // 0x80334F3C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_80334F40:
    // 0x80334F40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334F44: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80334F48: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80334F4C: nop

    // 0x80334F50: bne         $t1, $at, L_803351F8
    if (ctx->r9 != ctx->r1) {
        // 0x80334F54: nop
    
            goto L_803351F8;
    }
    // 0x80334F54: nop

    // 0x80334F58: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80334F5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334F60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334F64: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334F68: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334F6C: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334F70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334F74: lui         $a2, 0xC452
    ctx->r6 = S32(0XC452 << 16);
    // 0x80334F78: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80334F7C: jal         0x80027464
    // 0x80334F80: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_17;
    // 0x80334F80: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_17:
    // 0x80334F84: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334F88: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334F8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334F90: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334F94: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80334F98: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334F9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334FA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334FA4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80334FA8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334FAC: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80334FB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334FB4: lui         $a2, 0xC452
    ctx->r6 = S32(0XC452 << 16);
    // 0x80334FB8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334FBC: jal         0x80027464
    // 0x80334FC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_18;
    // 0x80334FC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_18:
    // 0x80334FC4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334FC8: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80334FCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334FD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334FD4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334FD8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80334FDC: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80334FE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334FE4: lui         $a2, 0xC452
    ctx->r6 = S32(0XC452 << 16);
    // 0x80334FE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334FEC: jal         0x80027464
    // 0x80334FF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_19;
    // 0x80334FF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x80334FF4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80334FF8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80334FFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335000: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80335004: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x80335008: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8033500C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335010: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335014: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80335018: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033501C: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80335020: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335024: lui         $a2, 0xC452
    ctx->r6 = S32(0XC452 << 16);
    // 0x80335028: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033502C: jal         0x80027464
    // 0x80335030: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_20;
    // 0x80335030: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_20:
    // 0x80335034: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335038: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8033503C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335040: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335044: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335048: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033504C: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80335050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335054: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x80335058: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033505C: jal         0x80027464
    // 0x80335060: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_21;
    // 0x80335060: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_21:
    // 0x80335064: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335068: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8033506C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335070: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80335074: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80335078: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033507C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335080: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335084: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80335088: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033508C: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80335090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335094: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x80335098: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033509C: jal         0x80027464
    // 0x803350A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_22;
    // 0x803350A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x803350A4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803350A8: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x803350AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803350B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803350B4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803350B8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x803350BC: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x803350C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803350C4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x803350C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803350CC: jal         0x80027464
    // 0x803350D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_23;
    // 0x803350D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_23:
    // 0x803350D4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803350D8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x803350DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803350E0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803350E4: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x803350E8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803350EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803350F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803350F4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x803350F8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803350FC: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80335100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335104: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80335108: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033510C: jal         0x80027464
    // 0x80335110: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_24;
    // 0x80335110: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_24:
    // 0x80335114: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335118: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x8033511C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335120: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335124: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335128: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033512C: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x80335130: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335134: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    // 0x80335138: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033513C: jal         0x80027464
    // 0x80335140: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_25;
    // 0x80335140: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_25:
    // 0x80335144: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335148: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8033514C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335150: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80335154: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x80335158: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8033515C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335160: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335164: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335168: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033516C: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x80335170: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335174: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    // 0x80335178: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033517C: jal         0x80027464
    // 0x80335180: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_26;
    // 0x80335180: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_26:
    // 0x80335184: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335188: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033518C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335190: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335194: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335198: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033519C: addiu       $a1, $a1, -0x4D8C
    ctx->r5 = ADD32(ctx->r5, -0X4D8C);
    // 0x803351A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803351A4: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    // 0x803351A8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803351AC: jal         0x80027464
    // 0x803351B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_27;
    // 0x803351B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_27:
    // 0x803351B4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803351B8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x803351BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803351C0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803351C4: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x803351C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803351CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803351D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803351D4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803351D8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803351DC: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x803351E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803351E4: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    // 0x803351E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803351EC: jal         0x80027464
    // 0x803351F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_28;
    // 0x803351F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_28:
    // 0x803351F4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_803351F8:
    // 0x803351F8: b           L_80335620
    // 0x803351FC: nop

        goto L_80335620;
    // 0x803351FC: nop

L_80335200:
    // 0x80335200: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335204: lwc1        $f18, -0x4D38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x80335208: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8033520C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335210: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x80335214: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335218: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8033521C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80335220: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335224: lwc1        $f18, -0x4D34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x80335228: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8033522C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80335230: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335234: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335238: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8033523C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80335240: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80335244: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335248: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x8033524C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80335250: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335254: jal         0x80027464
    // 0x80335258: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_29;
    // 0x80335258: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_29:
    // 0x8033525C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335260: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80335264: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335268: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033526C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335270: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335274: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335278: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033527C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335280: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80335284: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80335288: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033528C: lwc1        $f10, -0x4D38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x80335290: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80335294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335298: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x8033529C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803352A0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803352A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803352A8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803352AC: lwc1        $f10, -0x4D34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x803352B0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803352B4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803352B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803352BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803352C0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803352C4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803352C8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803352CC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803352D0: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803352D4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803352D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803352DC: jal         0x80027464
    // 0x803352E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_30;
    // 0x803352E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x803352E4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803352E8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x803352EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803352F0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803352F4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803352F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803352FC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80335300: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335304: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335308: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8033530C: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80335310: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335314: lwc1        $f6, -0x4D38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x80335318: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8033531C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335320: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x80335324: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335328: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8033532C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80335330: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335334: lwc1        $f6, -0x4D34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x80335338: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033533C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80335340: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335344: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335348: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8033534C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80335350: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80335354: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335358: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x8033535C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335360: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335364: jal         0x80027464
    // 0x80335368: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_31;
    // 0x80335368: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_31:
    // 0x8033536C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335370: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80335374: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335378: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8033537C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80335380: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335384: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80335388: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033538C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335390: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80335394: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x80335398: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033539C: lwc1        $f18, -0x4D38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x803353A0: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803353A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803353A8: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x803353AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803353B0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803353B4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803353B8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803353BC: lwc1        $f18, -0x4D34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x803353C0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803353C4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803353C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803353CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803353D0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x803353D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803353D8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803353DC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803353E0: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803353E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803353E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803353EC: jal         0x80027464
    // 0x803353F0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_32;
    // 0x803353F0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_32:
    // 0x803353F4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803353F8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x803353FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335400: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80335404: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80335408: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033540C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80335410: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335414: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335418: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x8033541C: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80335420: b           L_80335620
    // 0x80335424: nop

        goto L_80335620;
    // 0x80335424: nop

L_80335428:
    // 0x80335428: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x8033542C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335430: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80335434: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335438: lwc1        $f4, -0x4D34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x8033543C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80335440: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80335444: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335448: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033544C: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x80335450: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80335454: lw          $a2, -0x4D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4D38);
    // 0x80335458: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8033545C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335460: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80335464: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033546C: jal         0x80027464
    // 0x80335470: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_33;
    // 0x80335470: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_33:
    // 0x80335474: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80335478: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8033547C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335480: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80335484: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80335488: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033548C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80335490: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80335494: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80335498: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033549C: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x803354A0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803354A4: lwc1        $f16, -0x4D38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x803354A8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803354AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803354B0: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x803354B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803354B8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803354BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803354C0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803354C4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803354C8: lwc1        $f16, -0x4D34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x803354CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803354D0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803354D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803354D8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803354DC: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803354E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803354E4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803354E8: jal         0x80027464
    // 0x803354EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_34;
    // 0x803354EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_34:
    // 0x803354F0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803354F4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x803354F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803354FC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80335500: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80335504: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335508: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033550C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335510: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80335514: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80335518: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x8033551C: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x80335520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335524: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80335528: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033552C: lwc1        $f10, -0x4D34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x80335530: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80335534: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80335538: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033553C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335540: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x80335544: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80335548: lw          $a2, -0x4D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4D38);
    // 0x8033554C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80335550: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80335554: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x80335558: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033555C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335560: jal         0x80027464
    // 0x80335564: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_35;
    // 0x80335564: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_35:
    // 0x80335568: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8033556C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80335570: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335574: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80335578: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033557C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335580: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80335584: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80335588: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033558C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80335590: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x80335594: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335598: lwc1        $f6, -0x4D38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D38);
    // 0x8033559C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803355A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803355A4: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x803355A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803355AC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803355B0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803355B4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803355B8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803355BC: lwc1        $f6, -0x4D34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D34);
    // 0x803355C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803355C4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x803355C8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803355CC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803355D0: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x803355D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803355D8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803355DC: jal         0x80027464
    // 0x803355E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_36;
    // 0x803355E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_36:
    // 0x803355E4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803355E8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x803355EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803355F0: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x803355F4: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x803355F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803355FC: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80335600: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335604: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335608: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8033560C: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80335610: b           L_80335620
    // 0x80335614: nop

        goto L_80335620;
    // 0x80335614: nop

L_80335618:
    // 0x80335618: b           L_80335620
    // 0x8033561C: nop

        goto L_80335620;
    // 0x8033561C: nop

L_80335620:
    // 0x80335620: b           L_80335680
    // 0x80335624: nop

        goto L_80335680;
    // 0x80335624: nop

L_80335628:
    // 0x80335628: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033562C: nop

    // 0x80335630: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x80335634: nop

    // 0x80335638: slti        $at, $t7, 0xD
    ctx->r1 = SIGNED(ctx->r15) < 0XD ? 1 : 0;
    // 0x8033563C: bne         $at, $zero, L_80335668
    if (ctx->r1 != 0) {
        // 0x80335640: nop
    
            goto L_80335668;
    }
    // 0x80335640: nop

    // 0x80335644: jal         0x80336038
    // 0x80335648: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_37;
    // 0x80335648: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    after_37:
    // 0x8033564C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335650: bne         $v0, $at, L_80335660
    if (ctx->r2 != ctx->r1) {
        // 0x80335654: nop
    
            goto L_80335660;
    }
    // 0x80335654: nop

    // 0x80335658: jal         0x80336A48
    // 0x8033565C: nop

    func_80336A48_unk_bin_16(rdram, ctx);
        goto after_38;
    // 0x8033565C: nop

    after_38:
L_80335660:
    // 0x80335660: b           L_80335680
    // 0x80335664: nop

        goto L_80335680;
    // 0x80335664: nop

L_80335668:
    // 0x80335668: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033566C: nop

    // 0x80335670: lh          $t9, 0xB4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB4);
    // 0x80335674: nop

    // 0x80335678: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x8033567C: sh          $t2, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = ctx->r10;
L_80335680:
    // 0x80335680: b           L_80335688
    // 0x80335684: nop

        goto L_80335688;
    // 0x80335684: nop

L_80335688:
    // 0x80335688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033568C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80335690: jr          $ra
    // 0x80335694: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80335694: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80336670_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336670: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336678: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033667C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336680: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336684: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336688: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033668C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336694: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336698: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033669C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803366A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803366A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366A8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803366AC: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x803366B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803366B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803366BC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x803366C0: jal         0x8001C0EC
    // 0x803366C4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803366C4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x803366C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803366D0: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x803366D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366D8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803366DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803366E0: jal         0x8001ABF4
    // 0x803366E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803366E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803366E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366F0: jal         0x8001BBDC
    // 0x803366F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803366F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803366F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803366FC: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x80336700: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80336704: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336708: nop

    // 0x8033670C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80336710: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336714: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x80336718: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x8033671C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336720: nop

    // 0x80336724: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x80336728: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033672C: nop

    // 0x80336730: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x80336734: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336738: nop

    // 0x8033673C: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x80336740: nop

    // 0x80336744: bne         $t9, $zero, L_80336764
    if (ctx->r25 != 0) {
        // 0x80336748: nop
    
            goto L_80336764;
    }
    // 0x80336748: nop

    // 0x8033674C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336750: nop

    // 0x80336754: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x80336758: nop

    // 0x8033675C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80336760: sh          $t2, 0x100($t0)
    MEM_H(0X100, ctx->r8) = ctx->r10;
L_80336764:
    // 0x80336764: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336768: nop

    // 0x8033676C: lh          $t4, 0x100($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X100);
    // 0x80336770: nop

    // 0x80336774: bne         $t4, $zero, L_80336788
    if (ctx->r12 != 0) {
        // 0x80336778: nop
    
            goto L_80336788;
    }
    // 0x80336778: nop

    // 0x8033677C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336780: nop

    // 0x80336784: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
L_80336788:
    // 0x80336788: b           L_80336790
    // 0x8033678C: nop

        goto L_80336790;
    // 0x8033678C: nop

L_80336790:
    // 0x80336790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336794: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336798: jr          $ra
    // 0x8033679C: nop

    return;
    // 0x8033679C: nop

;}
RECOMP_FUNC void func_80333E30_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333E34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333E3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333E40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333E44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333E48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333E5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333E60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333E64: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333E68: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E6C: nop

    // 0x80333E70: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80333E74: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80333E78: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80333E7C: jal         0x803360CC
    // 0x80333E80: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80333E80: nop

    after_0:
    // 0x80333E84: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x80333E88: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333E90: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80333E94: nop

    // 0x80333E98: bne         $t2, $at, L_80333FB0
    if (ctx->r10 != ctx->r1) {
        // 0x80333E9C: nop
    
            goto L_80333FB0;
    }
    // 0x80333E9C: nop

    // 0x80333EA0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EA4: nop

    // 0x80333EA8: lh          $t4, 0xB8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB8);
    // 0x80333EAC: nop

    // 0x80333EB0: bne         $t4, $zero, L_80333F88
    if (ctx->r12 != 0) {
        // 0x80333EB4: nop
    
            goto L_80333F88;
    }
    // 0x80333EB4: nop

    // 0x80333EB8: lbu         $s0, 0x2B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X2B);
    // 0x80333EBC: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80333EC0: beq         $s0, $at, L_80333EF4
    if (ctx->r16 == ctx->r1) {
        // 0x80333EC4: nop
    
            goto L_80333EF4;
    }
    // 0x80333EC4: nop

    // 0x80333EC8: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80333ECC: beq         $s0, $at, L_80333F48
    if (ctx->r16 == ctx->r1) {
        // 0x80333ED0: nop
    
            goto L_80333F48;
    }
    // 0x80333ED0: nop

    // 0x80333ED4: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x80333ED8: beq         $s0, $at, L_80333F48
    if (ctx->r16 == ctx->r1) {
        // 0x80333EDC: nop
    
            goto L_80333F48;
    }
    // 0x80333EDC: nop

    // 0x80333EE0: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80333EE4: beq         $s0, $at, L_80333F48
    if (ctx->r16 == ctx->r1) {
        // 0x80333EE8: nop
    
            goto L_80333F48;
    }
    // 0x80333EE8: nop

    // 0x80333EEC: b           L_80333F58
    // 0x80333EF0: nop

        goto L_80333F58;
    // 0x80333EF0: nop

L_80333EF4:
    // 0x80333EF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EF8: nop

    // 0x80333EFC: lh          $t6, 0xBA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBA);
    // 0x80333F00: nop

    // 0x80333F04: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80333F08: beq         $at, $zero, L_80333F20
    if (ctx->r1 == 0) {
        // 0x80333F0C: nop
    
            goto L_80333F20;
    }
    // 0x80333F0C: nop

    // 0x80333F10: jal         0x80336284
    // 0x80333F14: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80333F14: nop

    after_1:
    // 0x80333F18: b           L_80333F40
    // 0x80333F1C: nop

        goto L_80333F40;
    // 0x80333F1C: nop

L_80333F20:
    // 0x80333F20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F28: jal         0x8001B4AC
    // 0x80333F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333F30: beq         $v0, $zero, L_80333F40
    if (ctx->r2 == 0) {
        // 0x80333F34: nop
    
            goto L_80333F40;
    }
    // 0x80333F34: nop

    // 0x80333F38: jal         0x80336B9C
    // 0x80333F3C: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80333F3C: nop

    after_3:
L_80333F40:
    // 0x80333F40: b           L_80333F80
    // 0x80333F44: nop

        goto L_80333F80;
    // 0x80333F44: nop

L_80333F48:
    // 0x80333F48: jal         0x80336284
    // 0x80333F4C: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80333F4C: nop

    after_4:
    // 0x80333F50: b           L_80333F80
    // 0x80333F54: nop

        goto L_80333F80;
    // 0x80333F54: nop

L_80333F58:
    // 0x80333F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F60: jal         0x8001B4AC
    // 0x80333F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80333F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80333F68: beq         $v0, $zero, L_80333F78
    if (ctx->r2 == 0) {
        // 0x80333F6C: nop
    
            goto L_80333F78;
    }
    // 0x80333F6C: nop

    // 0x80333F70: jal         0x80336B9C
    // 0x80333F74: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80333F74: nop

    after_6:
L_80333F78:
    // 0x80333F78: b           L_80333F80
    // 0x80333F7C: nop

        goto L_80333F80;
    // 0x80333F7C: nop

L_80333F80:
    // 0x80333F80: b           L_80333FA8
    // 0x80333F84: nop

        goto L_80333FA8;
    // 0x80333F84: nop

L_80333F88:
    // 0x80333F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F90: jal         0x8001B4AC
    // 0x80333F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80333F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333F98: beq         $v0, $zero, L_80333FA8
    if (ctx->r2 == 0) {
        // 0x80333F9C: nop
    
            goto L_80333FA8;
    }
    // 0x80333F9C: nop

    // 0x80333FA0: jal         0x80336B9C
    // 0x80333FA4: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x80333FA4: nop

    after_8:
L_80333FA8:
    // 0x80333FA8: b           L_803340B8
    // 0x80333FAC: nop

        goto L_803340B8;
    // 0x80333FAC: nop

L_80333FB0:
    // 0x80333FB0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FB4: nop

    // 0x80333FB8: lh          $t8, 0xB8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB8);
    // 0x80333FBC: nop

    // 0x80333FC0: bne         $t8, $zero, L_80334098
    if (ctx->r24 != 0) {
        // 0x80333FC4: nop
    
            goto L_80334098;
    }
    // 0x80333FC4: nop

    // 0x80333FC8: lbu         $s0, 0x2B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X2B);
    // 0x80333FCC: addiu       $at, $zero, 0xDF
    ctx->r1 = ADD32(0, 0XDF);
    // 0x80333FD0: beq         $s0, $at, L_80334004
    if (ctx->r16 == ctx->r1) {
        // 0x80333FD4: nop
    
            goto L_80334004;
    }
    // 0x80333FD4: nop

    // 0x80333FD8: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x80333FDC: beq         $s0, $at, L_80334058
    if (ctx->r16 == ctx->r1) {
        // 0x80333FE0: nop
    
            goto L_80334058;
    }
    // 0x80333FE0: nop

    // 0x80333FE4: addiu       $at, $zero, 0xE1
    ctx->r1 = ADD32(0, 0XE1);
    // 0x80333FE8: beq         $s0, $at, L_80334058
    if (ctx->r16 == ctx->r1) {
        // 0x80333FEC: nop
    
            goto L_80334058;
    }
    // 0x80333FEC: nop

    // 0x80333FF0: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x80333FF4: beq         $s0, $at, L_80334058
    if (ctx->r16 == ctx->r1) {
        // 0x80333FF8: nop
    
            goto L_80334058;
    }
    // 0x80333FF8: nop

    // 0x80333FFC: b           L_80334068
    // 0x80334000: nop

        goto L_80334068;
    // 0x80334000: nop

L_80334004:
    // 0x80334004: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334008: nop

    // 0x8033400C: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x80334010: nop

    // 0x80334014: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80334018: beq         $at, $zero, L_80334030
    if (ctx->r1 == 0) {
        // 0x8033401C: nop
    
            goto L_80334030;
    }
    // 0x8033401C: nop

    // 0x80334020: jal         0x80336284
    // 0x80334024: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_9;
    // 0x80334024: nop

    after_9:
    // 0x80334028: b           L_80334050
    // 0x8033402C: nop

        goto L_80334050;
    // 0x8033402C: nop

L_80334030:
    // 0x80334030: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334034: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334038: jal         0x8001B4AC
    // 0x8033403C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_10;
    // 0x8033403C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80334040: beq         $v0, $zero, L_80334050
    if (ctx->r2 == 0) {
        // 0x80334044: nop
    
            goto L_80334050;
    }
    // 0x80334044: nop

    // 0x80334048: jal         0x80336B9C
    // 0x8033404C: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_11;
    // 0x8033404C: nop

    after_11:
L_80334050:
    // 0x80334050: b           L_80334090
    // 0x80334054: nop

        goto L_80334090;
    // 0x80334054: nop

L_80334058:
    // 0x80334058: jal         0x80336284
    // 0x8033405C: nop

    func_80336284_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x8033405C: nop

    after_12:
    // 0x80334060: b           L_80334090
    // 0x80334064: nop

        goto L_80334090;
    // 0x80334064: nop

L_80334068:
    // 0x80334068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033406C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334070: jal         0x8001B4AC
    // 0x80334074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x80334074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80334078: beq         $v0, $zero, L_80334088
    if (ctx->r2 == 0) {
        // 0x8033407C: nop
    
            goto L_80334088;
    }
    // 0x8033407C: nop

    // 0x80334080: jal         0x80336B9C
    // 0x80334084: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x80334084: nop

    after_14:
L_80334088:
    // 0x80334088: b           L_80334090
    // 0x8033408C: nop

        goto L_80334090;
    // 0x8033408C: nop

L_80334090:
    // 0x80334090: b           L_803340B8
    // 0x80334094: nop

        goto L_803340B8;
    // 0x80334094: nop

L_80334098:
    // 0x80334098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033409C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803340A0: jal         0x8001B4AC
    // 0x803340A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_15;
    // 0x803340A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x803340A8: beq         $v0, $zero, L_803340B8
    if (ctx->r2 == 0) {
        // 0x803340AC: nop
    
            goto L_803340B8;
    }
    // 0x803340AC: nop

    // 0x803340B0: jal         0x80336B9C
    // 0x803340B4: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_16;
    // 0x803340B4: nop

    after_16:
L_803340B8:
    // 0x803340B8: b           L_803340C0
    // 0x803340BC: nop

        goto L_803340C0;
    // 0x803340BC: nop

L_803340C0:
    // 0x803340C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803340C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803340C8: jr          $ra
    // 0x803340CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803340CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80335698_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335698: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033569C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803356A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803356A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803356A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803356AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803356B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803356B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803356B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803356BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803356C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803356C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803356C8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803356CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356D4: jal         0x8001B4AC
    // 0x803356D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x803356D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803356DC: beq         $v0, $zero, L_80335740
    if (ctx->r2 == 0) {
        // 0x803356E0: nop
    
            goto L_80335740;
    }
    // 0x803356E0: nop

    // 0x803356E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803356E8: nop

    // 0x803356EC: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x803356F0: nop

    // 0x803356F4: bne         $t1, $zero, L_8033570C
    if (ctx->r9 != 0) {
        // 0x803356F8: nop
    
            goto L_8033570C;
    }
    // 0x803356F8: nop

    // 0x803356FC: jal         0x80337F68
    // 0x80335700: nop

    func_80337F68_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80335700: nop

    after_1:
    // 0x80335704: b           L_80335740
    // 0x80335708: nop

        goto L_80335740;
    // 0x80335708: nop

L_8033570C:
    // 0x8033570C: jal         0x80336B9C
    // 0x80335710: nop

    func_80336B9C_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80335710: nop

    after_2:
    // 0x80335714: lui         $t2, 0x8034
    ctx->r10 = S32(0X8034 << 16);
    // 0x80335718: lh          $t2, -0x4D14($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X4D14);
    // 0x8033571C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335720: bne         $t2, $at, L_80335734
    if (ctx->r10 != ctx->r1) {
        // 0x80335724: nop
    
            goto L_80335734;
    }
    // 0x80335724: nop

    // 0x80335728: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033572C: b           L_80335740
    // 0x80335730: sh          $zero, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = 0;
        goto L_80335740;
    // 0x80335730: sh          $zero, -0x4D14($at)
    MEM_H(-0X4D14, ctx->r1) = 0;
L_80335734:
    // 0x80335734: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80335738: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x8033573C: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80335740:
    // 0x80335740: b           L_80335748
    // 0x80335744: nop

        goto L_80335748;
    // 0x80335744: nop

L_80335748:
    // 0x80335748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033574C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335750: jr          $ra
    // 0x80335754: nop

    return;
    // 0x80335754: nop

;}
RECOMP_FUNC void func_8033740C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033740C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337418: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033741C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033742C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337434: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337438: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033743C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337440: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337444: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80337448: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x8033744C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337450: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80337454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337458: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033745C: jal         0x8001C0EC
    // 0x80337460: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337460: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80337464: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337468: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8033746C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x80337470: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80337474: nop

    // 0x80337478: sh          $zero, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = 0;
    // 0x8033747C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337480: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80337484: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80337488: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033748C: nop

    // 0x80337490: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80337494: b           L_8033749C
    // 0x80337498: nop

        goto L_8033749C;
    // 0x80337498: nop

L_8033749C:
    // 0x8033749C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803374A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803374A4: jr          $ra
    // 0x803374A8: nop

    return;
    // 0x803374A8: nop

;}
RECOMP_FUNC void func_80332B60_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332B68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332B94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B98: nop

    // 0x80332B9C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332BA0: nop

    // 0x80332BA4: bne         $t1, $zero, L_80332BD8
    if (ctx->r9 != 0) {
        // 0x80332BA8: nop
    
            goto L_80332BD8;
    }
    // 0x80332BA8: nop

    // 0x80332BAC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BB0: nop

    // 0x80332BB4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332BB8: nop

    // 0x80332BBC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332BC0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332BC4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BC8: nop

    // 0x80332BCC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332BD0: b           L_80332C54
    // 0x80332BD4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
        goto L_80332C54;
    // 0x80332BD4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80332BD8:
    // 0x80332BD8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332BE0: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332BE4: nop

    // 0x80332BE8: bne         $t8, $at, L_80332C54
    if (ctx->r24 != ctx->r1) {
        // 0x80332BEC: nop
    
            goto L_80332C54;
    }
    // 0x80332BEC: nop

    // 0x80332BF0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BF4: nop

    // 0x80332BF8: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80332BFC: nop

    // 0x80332C00: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332C04: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
    // 0x80332C08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C10: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80332C14: jal         0x80029EF8
    // 0x80332C18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80332C18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80332C1C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C20: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80332C24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332C28: lwc1        $f4, 0x44($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80332C2C: nop

    // 0x80332C30: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80332C34: nop

    // 0x80332C38: bc1f        L_80332C54
    if (!c1cs) {
        // 0x80332C3C: nop
    
            goto L_80332C54;
    }
    // 0x80332C3C: nop

    // 0x80332C40: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80332C44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332C48: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C4C: nop

    // 0x80332C50: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
L_80332C54:
    // 0x80332C54: b           L_80332C5C
    // 0x80332C58: nop

        goto L_80332C5C;
    // 0x80332C58: nop

L_80332C5C:
    // 0x80332C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332C64: jr          $ra
    // 0x80332C68: nop

    return;
    // 0x80332C68: nop

;}
RECOMP_FUNC void func_803339B4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803339B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803339B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803339BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803339C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803339C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803339C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803339CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803339D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803339DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803339E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803339E4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803339E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803339EC: nop

    // 0x803339F0: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803339F4: nop

    // 0x803339F8: bne         $t1, $zero, L_80333A58
    if (ctx->r9 != 0) {
        // 0x803339FC: nop
    
            goto L_80333A58;
    }
    // 0x803339FC: nop

    // 0x80333A00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333A04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80333A08: sh          $t2, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = ctx->r10;
    // 0x80333A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A10: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80333A14: addiu       $t4, $t4, -0x52A0
    ctx->r12 = ADD32(ctx->r12, -0X52A0);
    // 0x80333A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A1C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80333A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333A28: jal         0x8001C0EC
    // 0x80333A2C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333A2C: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80333A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333A38: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80333A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A40: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80333A44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333A48: jal         0x8001ABF4
    // 0x80333A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80333A50: b           L_80333BB4
    // 0x80333A54: nop

        goto L_80333BB4;
    // 0x80333A54: nop

L_80333A58:
    // 0x80333A58: jal         0x803374AC
    // 0x80333A5C: nop

    func_803374AC_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80333A5C: nop

    after_2:
    // 0x80333A60: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80333A64: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80333A68: nop

    // 0x80333A6C: bne         $t5, $zero, L_80333B94
    if (ctx->r13 != 0) {
        // 0x80333A70: nop
    
            goto L_80333B94;
    }
    // 0x80333A70: nop

    // 0x80333A74: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333A78: nop

    // 0x80333A7C: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x80333A80: nop

    // 0x80333A84: bne         $t7, $zero, L_80333B6C
    if (ctx->r15 != 0) {
        // 0x80333A88: nop
    
            goto L_80333B6C;
    }
    // 0x80333A88: nop

    // 0x80333A8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333A90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333A94: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80333A98: nop

    // 0x80333A9C: bne         $t9, $at, L_80333B44
    if (ctx->r25 != ctx->r1) {
        // 0x80333AA0: nop
    
            goto L_80333B44;
    }
    // 0x80333AA0: nop

    // 0x80333AA4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80333AA8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333AAC: jal         0x80338044
    // 0x80333AB0: nop

    func_80338044_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80333AB0: nop

    after_3:
    // 0x80333AB4: beq         $v0, $zero, L_80333B1C
    if (ctx->r2 == 0) {
        // 0x80333AB8: nop
    
            goto L_80333B1C;
    }
    // 0x80333AB8: nop

    // 0x80333ABC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AC4: lw          $t1, 0xD0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD0);
    // 0x80333AC8: nop

    // 0x80333ACC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333AD0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333AD4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333AD8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333ADC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333AE0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333AE4: lwc1        $f12, 0x418C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80333AE8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80333AEC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333AF0: jal         0x80015538
    // 0x80333AF4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80333AF4: nop

    after_4:
    // 0x80333AF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333AFC: nop

    // 0x80333B00: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80333B04: jal         0x8033688C
    // 0x80333B08: nop

    func_8033688C_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80333B08: nop

    after_5:
    // 0x80333B0C: jal         0x80336D20
    // 0x80333B10: nop

    func_80336D20_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80333B10: nop

    after_6:
    // 0x80333B14: b           L_80333B3C
    // 0x80333B18: nop

        goto L_80333B3C;
    // 0x80333B18: nop

L_80333B1C:
    // 0x80333B1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B24: jal         0x8001B4AC
    // 0x80333B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80333B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333B2C: beq         $v0, $zero, L_80333B3C
    if (ctx->r2 == 0) {
        // 0x80333B30: nop
    
            goto L_80333B3C;
    }
    // 0x80333B30: nop

    // 0x80333B34: jal         0x80335C7C
    // 0x80333B38: nop

    func_80335C7C_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x80333B38: nop

    after_8:
L_80333B3C:
    // 0x80333B3C: b           L_80333B64
    // 0x80333B40: nop

        goto L_80333B64;
    // 0x80333B40: nop

L_80333B44:
    // 0x80333B44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B4C: jal         0x8001B4AC
    // 0x80333B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x80333B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80333B54: beq         $v0, $zero, L_80333B64
    if (ctx->r2 == 0) {
        // 0x80333B58: nop
    
            goto L_80333B64;
    }
    // 0x80333B58: nop

    // 0x80333B5C: jal         0x80335C7C
    // 0x80333B60: nop

    func_80335C7C_unk_bin_16(rdram, ctx);
        goto after_10;
    // 0x80333B60: nop

    after_10:
L_80333B64:
    // 0x80333B64: b           L_80333B8C
    // 0x80333B68: nop

        goto L_80333B8C;
    // 0x80333B68: nop

L_80333B6C:
    // 0x80333B6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B74: jal         0x8001B4AC
    // 0x80333B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x80333B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80333B7C: beq         $v0, $zero, L_80333B8C
    if (ctx->r2 == 0) {
        // 0x80333B80: nop
    
            goto L_80333B8C;
    }
    // 0x80333B80: nop

    // 0x80333B84: jal         0x80335C7C
    // 0x80333B88: nop

    func_80335C7C_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x80333B88: nop

    after_12:
L_80333B8C:
    // 0x80333B8C: b           L_80333BB4
    // 0x80333B90: nop

        goto L_80333BB4;
    // 0x80333B90: nop

L_80333B94:
    // 0x80333B94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B9C: jal         0x8001B4AC
    // 0x80333BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x80333BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80333BA4: beq         $v0, $zero, L_80333BB4
    if (ctx->r2 == 0) {
        // 0x80333BA8: nop
    
            goto L_80333BB4;
    }
    // 0x80333BA8: nop

    // 0x80333BAC: jal         0x80335C7C
    // 0x80333BB0: nop

    func_80335C7C_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x80333BB0: nop

    after_14:
L_80333BB4:
    // 0x80333BB4: b           L_80333BBC
    // 0x80333BB8: nop

        goto L_80333BBC;
    // 0x80333BB8: nop

L_80333BBC:
    // 0x80333BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333BC4: jr          $ra
    // 0x80333BC8: nop

    return;
    // 0x80333BC8: nop

;}
RECOMP_FUNC void func_803389F4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803389F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803389F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803389FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338A04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338A08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338A20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338A24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338A28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338A2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338A30: nop

    // 0x80338A34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338A38: nop

    // 0x80338A3C: bne         $t1, $zero, L_80338A7C
    if (ctx->r9 != 0) {
        // 0x80338A40: nop
    
            goto L_80338A7C;
    }
    // 0x80338A40: nop

    // 0x80338A44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338A48: nop

    // 0x80338A4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338A50: nop

    // 0x80338A54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338A58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338A5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338A60: nop

    // 0x80338A64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338A68: nop

    // 0x80338A6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338A70: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338A74: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80338A78: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80338A7C:
    // 0x80338A7C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338A80: nop

    // 0x80338A84: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80338A88: nop

    // 0x80338A8C: beq         $t0, $zero, L_80338AD8
    if (ctx->r8 == 0) {
        // 0x80338A90: nop
    
            goto L_80338AD8;
    }
    // 0x80338A90: nop

    // 0x80338A94: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A9C: lh          $s0, 0xA6($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XA6);
    // 0x80338AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338AA4: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80338AA8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80338AAC: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80338AB0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80338AB4: jal         0x8001BB34
    // 0x80338AB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80338AB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80338ABC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338AC0: nop

    // 0x80338AC4: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80338AC8: nop

    // 0x80338ACC: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80338AD0: b           L_80338B0C
    // 0x80338AD4: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
        goto L_80338B0C;
    // 0x80338AD4: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80338AD8:
    // 0x80338AD8: lui         $t7, 0x8034
    ctx->r15 = S32(0X8034 << 16);
    // 0x80338ADC: lw          $t7, -0x4D30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D30);
    // 0x80338AE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338AE4: bne         $t7, $at, L_80338AFC
    if (ctx->r15 != ctx->r1) {
        // 0x80338AE8: nop
    
            goto L_80338AFC;
    }
    // 0x80338AE8: nop

    // 0x80338AEC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80338AF0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80338AF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80338AF8: sh          $t8, 0x1368($t9)
    MEM_H(0X1368, ctx->r25) = ctx->r24;
L_80338AFC:
    // 0x80338AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B04: jal         0x8002B114
    // 0x80338B08: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80338B08: nop

    after_1:
L_80338B0C:
    // 0x80338B0C: b           L_80338B14
    // 0x80338B10: nop

        goto L_80338B14;
    // 0x80338B10: nop

L_80338B14:
    // 0x80338B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338B18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338B1C: jr          $ra
    // 0x80338B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333058_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033305C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333060: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333064: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333068: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033306C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333074: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033307C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333080: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333084: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333088: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033308C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333090: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x80333094: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333098: nop

    // 0x8033309C: bne         $t1, $at, L_803330F0
    if (ctx->r9 != ctx->r1) {
        // 0x803330A0: nop
    
            goto L_803330F0;
    }
    // 0x803330A0: nop

    // 0x803330A4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803330A8: nop

    // 0x803330AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803330B0: nop

    // 0x803330B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803330B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803330BC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803330C0: nop

    // 0x803330C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803330C8: nop

    // 0x803330CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803330D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803330D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803330D8: sw          $t7, 0xC4($t8)
    MEM_W(0XC4, ctx->r24) = ctx->r15;
    // 0x803330DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803330E0: jal         0x80330000
    // 0x803330E4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80330000_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x803330E4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_0:
    // 0x803330E8: b           L_80333138
    // 0x803330EC: nop

        goto L_80333138;
    // 0x803330EC: nop

L_803330F0:
    // 0x803330F0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803330F4: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x803330F8: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x803330FC: nop

    // 0x80333100: bne         $t0, $at, L_80333120
    if (ctx->r8 != ctx->r1) {
        // 0x80333104: nop
    
            goto L_80333120;
    }
    // 0x80333104: nop

    // 0x80333108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033310C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333110: jal         0x8002B114
    // 0x80333114: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80333114: nop

    after_1:
    // 0x80333118: b           L_80333138
    // 0x8033311C: nop

        goto L_80333138;
    // 0x8033311C: nop

L_80333120:
    // 0x80333120: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80333124: nop

    // 0x80333128: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x8033312C: nop

    // 0x80333130: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333134: sb          $t4, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r12;
L_80333138:
    // 0x80333138: b           L_80333140
    // 0x8033313C: nop

        goto L_80333140;
    // 0x8033313C: nop

L_80333140:
    // 0x80333140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333148: jr          $ra
    // 0x8033314C: nop

    return;
    // 0x8033314C: nop

;}
RECOMP_FUNC void func_803320B8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803320B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803320BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803320C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803320C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803320C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803320CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803320D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803320E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803320E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803320E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803320EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803320F0: nop

    // 0x803320F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803320F8: nop

    // 0x803320FC: bne         $t1, $zero, L_80332150
    if (ctx->r9 != 0) {
        // 0x80332100: nop
    
            goto L_80332150;
    }
    // 0x80332100: nop

    // 0x80332104: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332108: nop

    // 0x8033210C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332110: nop

    // 0x80332114: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332118: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033211C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332120: nop

    // 0x80332124: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332128: nop

    // 0x8033212C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332138: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033213C: jal         0x80029EF8
    // 0x80332140: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80332140: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80332144: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332148: nop

    // 0x8033214C: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
L_80332150:
    // 0x80332150: b           L_80332158
    // 0x80332154: nop

        goto L_80332158;
    // 0x80332154: nop

L_80332158:
    // 0x80332158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033215C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332160: jr          $ra
    // 0x80332164: nop

    return;
    // 0x80332164: nop

;}
RECOMP_FUNC void func_80331B48_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331B50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331B78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331B7C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331B80: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80331B84: nop

    // 0x80331B88: bne         $t0, $zero, L_80331C68
    if (ctx->r8 != 0) {
        // 0x80331B8C: nop
    
            goto L_80331C68;
    }
    // 0x80331B8C: nop

    // 0x80331B90: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B94: nop

    // 0x80331B98: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80331B9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331BA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331BA4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BA8: nop

    // 0x80331BAC: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x80331BB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80331BB4: jal         0x80330000
    // 0x80331BB8: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80330000_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80331BB8: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_0:
    // 0x80331BBC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331BC4: lh          $t4, 0xB0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB0);
    // 0x80331BC8: nop

    // 0x80331BCC: bne         $t4, $at, L_80331BF0
    if (ctx->r12 != ctx->r1) {
        // 0x80331BD0: nop
    
            goto L_80331BF0;
    }
    // 0x80331BD0: nop

    // 0x80331BD4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BD8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80331BDC: sh          $t5, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r13;
    // 0x80331BE0: jal         0x80336670
    // 0x80331BE4: nop

    func_80336670_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80331BE4: nop

    after_1:
    // 0x80331BE8: b           L_80331C60
    // 0x80331BEC: nop

        goto L_80331C60;
    // 0x80331BEC: nop

L_80331BF0:
    // 0x80331BF0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331BF4: nop

    // 0x80331BF8: lwc1        $f14, 0x1C($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331BFC: lwc1        $f12, 0x128($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X128);
    // 0x80331C00: jal         0x80015538
    // 0x80331C04: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80331C04: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_2:
    // 0x80331C08: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80331C0C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331C10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331C14: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80331C18: nop

    // 0x80331C1C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80331C20: nop

    // 0x80331C24: bc1t        L_80331C48
    if (c1cs) {
        // 0x80331C28: nop
    
            goto L_80331C48;
    }
    // 0x80331C28: nop

    // 0x80331C2C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80331C30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331C34: nop

    // 0x80331C38: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x80331C3C: nop

    // 0x80331C40: bc1f        L_80331C58
    if (!c1cs) {
        // 0x80331C44: nop
    
            goto L_80331C58;
    }
    // 0x80331C44: nop

L_80331C48:
    // 0x80331C48: jal         0x80337D90
    // 0x80331C4C: nop

    func_80337D90_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80331C4C: nop

    after_3:
    // 0x80331C50: b           L_80331C60
    // 0x80331C54: nop

        goto L_80331C60;
    // 0x80331C54: nop

L_80331C58:
    // 0x80331C58: jal         0x80337E7C
    // 0x80331C5C: nop

    func_80337E7C_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80331C5C: nop

    after_4:
L_80331C60:
    // 0x80331C60: b           L_80331D2C
    // 0x80331C64: nop

        goto L_80331D2C;
    // 0x80331C64: nop

L_80331C68:
    // 0x80331C68: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331C6C: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x80331C70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331C74: bne         $t8, $at, L_80331D2C
    if (ctx->r24 != ctx->r1) {
        // 0x80331C78: nop
    
            goto L_80331D2C;
    }
    // 0x80331C78: nop

    // 0x80331C7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C80: nop

    // 0x80331C84: sh          $zero, 0x108($t9)
    MEM_H(0X108, ctx->r25) = 0;
    // 0x80331C88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331C90: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x80331C94: nop

    // 0x80331C98: bne         $t1, $at, L_80331CBC
    if (ctx->r9 != ctx->r1) {
        // 0x80331C9C: nop
    
            goto L_80331CBC;
    }
    // 0x80331C9C: nop

    // 0x80331CA0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331CA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331CA8: sh          $t2, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r10;
    // 0x80331CAC: jal         0x80336670
    // 0x80331CB0: nop

    func_80336670_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80331CB0: nop

    after_5:
    // 0x80331CB4: b           L_80331D2C
    // 0x80331CB8: nop

        goto L_80331D2C;
    // 0x80331CB8: nop

L_80331CBC:
    // 0x80331CBC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331CC0: nop

    // 0x80331CC4: lwc1        $f14, 0x1C($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331CC8: lwc1        $f12, 0x128($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X128);
    // 0x80331CCC: jal         0x80015538
    // 0x80331CD0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80331CD0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_6:
    // 0x80331CD4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80331CD8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331CDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331CE0: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80331CE4: nop

    // 0x80331CE8: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80331CEC: nop

    // 0x80331CF0: bc1t        L_80331D14
    if (c1cs) {
        // 0x80331CF4: nop
    
            goto L_80331D14;
    }
    // 0x80331CF4: nop

    // 0x80331CF8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80331CFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D00: nop

    // 0x80331D04: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x80331D08: nop

    // 0x80331D0C: bc1f        L_80331D24
    if (!c1cs) {
        // 0x80331D10: nop
    
            goto L_80331D24;
    }
    // 0x80331D10: nop

L_80331D14:
    // 0x80331D14: jal         0x80337D90
    // 0x80331D18: nop

    func_80337D90_unk_bin_16(rdram, ctx);
        goto after_7;
    // 0x80331D18: nop

    after_7:
    // 0x80331D1C: b           L_80331D2C
    // 0x80331D20: nop

        goto L_80331D2C;
    // 0x80331D20: nop

L_80331D24:
    // 0x80331D24: jal         0x80337E7C
    // 0x80331D28: nop

    func_80337E7C_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x80331D28: nop

    after_8:
L_80331D2C:
    // 0x80331D2C: b           L_80331D34
    // 0x80331D30: nop

        goto L_80331D34;
    // 0x80331D30: nop

L_80331D34:
    // 0x80331D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331D3C: jr          $ra
    // 0x80331D40: nop

    return;
    // 0x80331D40: nop

;}
RECOMP_FUNC void func_80335E10_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335E10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80335E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335E18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335E1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335E20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335E38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335E3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335E40: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80335E44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335E48: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335E4C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80335E50: lwc1        $f9, -0x4B78($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4B78);
    // 0x80335E54: lwc1        $f8, -0x4B74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B74);
    // 0x80335E58: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80335E5C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80335E60: jal         0x80034970
    // 0x80335E64: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80335E64: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80335E68: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80335E6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335E70: nop

    // 0x80335E74: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80335E78: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80335E7C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80335E80: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335E84: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80335E88: lwc1        $f9, -0x4B70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4B70);
    // 0x80335E8C: lwc1        $f8, -0x4B6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B6C);
    // 0x80335E90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80335E94: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80335E98: jal         0x80036570
    // 0x80335E9C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80335E9C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80335EA0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80335EA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80335EA8: nop

    // 0x80335EAC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80335EB0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80335EB4: jal         0x803375AC
    // 0x80335EB8: nop

    func_803375AC_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80335EB8: nop

    after_2:
    // 0x80335EBC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80335EC0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335EC8: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x80335ECC: nop

    // 0x80335ED0: bne         $t3, $at, L_80335F04
    if (ctx->r11 != ctx->r1) {
        // 0x80335ED4: nop
    
            goto L_80335F04;
    }
    // 0x80335ED4: nop

    // 0x80335ED8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80335EDC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335EE0: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80335EE4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335EE8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80335EEC: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80335EF0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80335EF4: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80335EF8: jal         0x803360CC
    // 0x80335EFC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80335EFC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x80335F00: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
L_80335F04:
    // 0x80335F04: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80335F08: jal         0x80337924
    // 0x80335F0C: nop

    func_80337924_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80335F0C: nop

    after_4:
    // 0x80335F10: b           L_80335F18
    // 0x80335F14: nop

        goto L_80335F18;
    // 0x80335F14: nop

L_80335F18:
    // 0x80335F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335F1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80335F20: jr          $ra
    // 0x80335F24: nop

    return;
    // 0x80335F24: nop

;}
RECOMP_FUNC void func_8033ABC8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ABC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033ABCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033ABD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ABD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ABD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ABDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ABE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ABE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ABE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ABEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ABF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ABF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ABF8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033ABFC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC00: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033AC04: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033AC08: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033AC0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033AC10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AC14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033AC18: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AC1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033AC20: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033AC24: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8033AC28: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AC30: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033AC34: nop

    // 0x8033AC38: bne         $t6, $at, L_8033AC78
    if (ctx->r14 != ctx->r1) {
        // 0x8033AC3C: nop
    
            goto L_8033AC78;
    }
    // 0x8033AC3C: nop

    // 0x8033AC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC48: jal         0x8001B4AC
    // 0x8033AC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x8033AC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033AC50: beq         $v0, $zero, L_8033AC70
    if (ctx->r2 == 0) {
        // 0x8033AC54: nop
    
            goto L_8033AC70;
    }
    // 0x8033AC54: nop

    // 0x8033AC58: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AC5C: sh          $zero, -0x4D1C($at)
    MEM_H(-0X4D1C, ctx->r1) = 0;
    // 0x8033AC60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC68: jal         0x8002B114
    // 0x8033AC6C: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8033AC6C: nop

    after_1:
L_8033AC70:
    // 0x8033AC70: b           L_8033ACF8
    // 0x8033AC74: nop

        goto L_8033ACF8;
    // 0x8033AC74: nop

L_8033AC78:
    // 0x8033AC78: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8033AC7C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC80: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033AC84: nop

    // 0x8033AC88: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x8033AC8C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8033AC90: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC94: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033AC98: nop

    // 0x8033AC9C: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x8033ACA0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8033ACA4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ACA8: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033ACAC: nop

    // 0x8033ACB0: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x8033ACB4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8033ACB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ACBC: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033ACC0: nop

    // 0x8033ACC4: swc1        $f10, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f10.u32l;
    // 0x8033ACC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ACCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ACD0: jal         0x8001B4AC
    // 0x8033ACD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033ACD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033ACD8: beq         $v0, $zero, L_8033ACF8
    if (ctx->r2 == 0) {
        // 0x8033ACDC: nop
    
            goto L_8033ACF8;
    }
    // 0x8033ACDC: nop

    // 0x8033ACE0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033ACE4: sh          $zero, -0x4D18($at)
    MEM_H(-0X4D18, ctx->r1) = 0;
    // 0x8033ACE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ACEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ACF0: jal         0x8002B114
    // 0x8033ACF4: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033ACF4: nop

    after_3:
L_8033ACF8:
    // 0x8033ACF8: b           L_8033AD00
    // 0x8033ACFC: nop

        goto L_8033AD00;
    // 0x8033ACFC: nop

L_8033AD00:
    // 0x8033AD00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033AD04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033AD08: jr          $ra
    // 0x8033AD0C: nop

    return;
    // 0x8033AD0C: nop

;}
RECOMP_FUNC void func_8033377C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033377C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333784: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333788: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033378C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333790: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333794: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333798: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033379C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803337A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803337A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803337A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803337AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803337B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803337B4: nop

    // 0x803337B8: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803337BC: nop

    // 0x803337C0: bne         $t1, $zero, L_80333800
    if (ctx->r9 != 0) {
        // 0x803337C4: nop
    
            goto L_80333800;
    }
    // 0x803337C4: nop

    // 0x803337C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803337CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803337D0: sh          $t2, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = ctx->r10;
    // 0x803337D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337D8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803337DC: addiu       $t4, $t4, -0x52A0
    ctx->r12 = ADD32(ctx->r12, -0X52A0);
    // 0x803337E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337E4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803337E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337EC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x803337F0: jal         0x8001C0EC
    // 0x803337F4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803337F4: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x803337F8: b           L_803338A8
    // 0x803337FC: nop

        goto L_803338A8;
    // 0x803337FC: nop

L_80333800:
    // 0x80333800: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333804: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333808: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x8033380C: nop

    // 0x80333810: bne         $t6, $at, L_80333860
    if (ctx->r14 != ctx->r1) {
        // 0x80333814: nop
    
            goto L_80333860;
    }
    // 0x80333814: nop

    // 0x80333818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033381C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333820: jal         0x8001B44C
    // 0x80333824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80333824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333828: beq         $v0, $zero, L_80333858
    if (ctx->r2 == 0) {
        // 0x8033382C: nop
    
            goto L_80333858;
    }
    // 0x8033382C: nop

    // 0x80333830: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333834: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80333838: sh          $t7, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r15;
    // 0x8033383C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333840: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80333844: sh          $t9, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = ctx->r25;
    // 0x80333848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033384C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333850: jal         0x8001BBDC
    // 0x80333854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80333854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80333858:
    // 0x80333858: b           L_803338A8
    // 0x8033385C: nop

        goto L_803338A8;
    // 0x8033385C: nop

L_80333860:
    // 0x80333860: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333864: nop

    // 0x80333868: lh          $t2, 0xB6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB6);
    // 0x8033386C: nop

    // 0x80333870: bne         $t2, $zero, L_80333890
    if (ctx->r10 != 0) {
        // 0x80333874: nop
    
            goto L_80333890;
    }
    // 0x80333874: nop

    // 0x80333878: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033387C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80333880: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x80333884: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333888: b           L_803338A8
    // 0x8033388C: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
        goto L_803338A8;
    // 0x8033388C: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
L_80333890:
    // 0x80333890: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333894: nop

    // 0x80333898: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x8033389C: nop

    // 0x803338A0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803338A4: sh          $t8, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r24;
L_803338A8:
    // 0x803338A8: b           L_803338B0
    // 0x803338AC: nop

        goto L_803338B0;
    // 0x803338AC: nop

L_803338B0:
    // 0x803338B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803338B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803338B8: jr          $ra
    // 0x803338BC: nop

    return;
    // 0x803338BC: nop

;}
RECOMP_FUNC void func_803367A0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803367A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803367A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803367A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803367AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803367B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803367B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803367BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803367C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803367C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803367CC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803367D0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803367D4: nop

    // 0x803367D8: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803367DC: nop

    // 0x803367E0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803367E4: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x803367E8: beq         $at, $zero, L_80336870
    if (ctx->r1 == 0) {
        // 0x803367EC: nop
    
            goto L_80336870;
    }
    // 0x803367EC: nop

    // 0x803367F0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803367F4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803367F8: addu        $at, $at, $t2
    gpr jr_addend_80336804 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803367FC: lw          $t2, -0x4B58($at)
    ctx->r10 = ADD32(ctx->r1, -0X4B58);
    // 0x80336800: nop

    // 0x80336804: jr          $t2
    // 0x80336808: nop

    switch (jr_addend_80336804 >> 2) {
        case 0: goto L_8033680C; break;
        case 1: goto L_80336820; break;
        case 2: goto L_80336834; break;
        case 3: goto L_80336848; break;
        case 4: goto L_8033685C; break;
        default: switch_error(__func__, 0x80336804, 0x8033B4A8);
    }
    // 0x80336808: nop

L_8033680C:
    // 0x8033680C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80336810: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x80336814: sh          $t3, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r11;
    // 0x80336818: b           L_8033687C
    // 0x8033681C: nop

        goto L_8033687C;
    // 0x8033681C: nop

L_80336820:
    // 0x80336820: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80336824: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x80336828: sh          $t5, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r13;
    // 0x8033682C: b           L_8033687C
    // 0x80336830: nop

        goto L_8033687C;
    // 0x80336830: nop

L_80336834:
    // 0x80336834: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80336838: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8033683C: sh          $t7, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r15;
    // 0x80336840: b           L_8033687C
    // 0x80336844: nop

        goto L_8033687C;
    // 0x80336844: nop

L_80336848:
    // 0x80336848: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033684C: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x80336850: sh          $t9, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = ctx->r25;
    // 0x80336854: b           L_8033687C
    // 0x80336858: nop

        goto L_8033687C;
    // 0x80336858: nop

L_8033685C:
    // 0x8033685C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80336860: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x80336864: sh          $t1, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r9;
    // 0x80336868: b           L_8033687C
    // 0x8033686C: nop

        goto L_8033687C;
    // 0x8033686C: nop

L_80336870:
    // 0x80336870: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80336874: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x80336878: sh          $t3, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r11;
L_8033687C:
    // 0x8033687C: b           L_80336884
    // 0x80336880: nop

        goto L_80336884;
    // 0x80336880: nop

L_80336884:
    // 0x80336884: jr          $ra
    // 0x80336888: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336888: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80339B4C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339B4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80339B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339B54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339B58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339B5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339B60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339B64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339B68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339B6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339B70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339B74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339B78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339B7C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80339B80: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80339B84: nop

    // 0x80339B88: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339B8C: nop

    // 0x80339B90: bne         $t1, $zero, L_80339C14
    if (ctx->r9 != 0) {
        // 0x80339B94: nop
    
            goto L_80339C14;
    }
    // 0x80339B94: nop

    // 0x80339B98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80339B9C: nop

    // 0x80339BA0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339BA4: nop

    // 0x80339BA8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339BAC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339BB0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80339BB4: nop

    // 0x80339BB8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339BBC: nop

    // 0x80339BC0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339BC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80339BC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80339BCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BD4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80339BD8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80339BDC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80339BE0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80339BE4: jal         0x800295C0
    // 0x80339BE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80339BE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80339BEC: beq         $v0, $zero, L_80339C04
    if (ctx->r2 == 0) {
        // 0x80339BF0: nop
    
            goto L_80339C04;
    }
    // 0x80339BF0: nop

    // 0x80339BF4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80339BF8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80339BFC: b           L_80339C14
    // 0x80339C00: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_80339C14;
    // 0x80339C00: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_80339C04:
    // 0x80339C04: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80339C08: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80339C0C: nop

    // 0x80339C10: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_80339C14:
    // 0x80339C14: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80339C18: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339C1C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80339C20: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80339C24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80339C28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339C2C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339C30: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339C34: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80339C38: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80339C3C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80339C40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80339C44: bne         $t2, $at, L_80339C94
    if (ctx->r10 != ctx->r1) {
        // 0x80339C48: nop
    
            goto L_80339C94;
    }
    // 0x80339C48: nop

    // 0x80339C4C: lh          $t6, 0xB4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB4);
    // 0x80339C50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339C54: bne         $t6, $at, L_80339C94
    if (ctx->r14 != ctx->r1) {
        // 0x80339C58: nop
    
            goto L_80339C94;
    }
    // 0x80339C58: nop

    // 0x80339C5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339C64: addiu       $a3, $a3, -0x50B0
    ctx->r7 = ADD32(ctx->r7, -0X50B0);
    // 0x80339C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C6C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339C74: jal         0x8001ABF4
    // 0x80339C78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80339C78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80339C7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80339C80: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80339C84: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80339C88: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80339C8C: nop

    // 0x80339C90: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80339C94:
    // 0x80339C94: b           L_80339C9C
    // 0x80339C98: nop

        goto L_80339C9C;
    // 0x80339C98: nop

L_80339C9C:
    // 0x80339C9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80339CA4: jr          $ra
    // 0x80339CA8: nop

    return;
    // 0x80339CA8: nop

;}
RECOMP_FUNC void func_80333D0C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333D14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333D20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333D38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333D3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333D40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333D44: nop

    // 0x80333D48: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80333D4C: nop

    // 0x80333D50: bne         $t1, $zero, L_80333DA8
    if (ctx->r9 != 0) {
        // 0x80333D54: nop
    
            goto L_80333DA8;
    }
    // 0x80333D54: nop

    // 0x80333D58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D60: jal         0x8001B44C
    // 0x80333D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80333D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333D68: beq         $v0, $zero, L_80333DA0
    if (ctx->r2 == 0) {
        // 0x80333D6C: nop
    
            goto L_80333DA0;
    }
    // 0x80333D6C: nop

    // 0x80333D70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D74: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80333D78: addiu       $t2, $t2, -0x52A0
    ctx->r10 = ADD32(ctx->r10, -0X52A0);
    // 0x80333D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D80: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80333D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80333D8C: jal         0x8001C0EC
    // 0x80333D90: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333D90: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_1:
    // 0x80333D94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333D98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80333D9C: sh          $t3, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r11;
L_80333DA0:
    // 0x80333DA0: b           L_80333E18
    // 0x80333DA4: nop

        goto L_80333E18;
    // 0x80333DA4: nop

L_80333DA8:
    // 0x80333DA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333DAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333DB0: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x80333DB4: nop

    // 0x80333DB8: bne         $t6, $at, L_80333DFC
    if (ctx->r14 != ctx->r1) {
        // 0x80333DBC: nop
    
            goto L_80333DFC;
    }
    // 0x80333DBC: nop

    // 0x80333DC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DC8: jal         0x8001B44C
    // 0x80333DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80333DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333DD0: beq         $v0, $zero, L_80333DF4
    if (ctx->r2 == 0) {
        // 0x80333DD4: nop
    
            goto L_80333DF4;
    }
    // 0x80333DD4: nop

    // 0x80333DD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DE0: jal         0x8001BBDC
    // 0x80333DE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333DE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80333DE8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333DEC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80333DF0: sh          $t7, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = ctx->r15;
L_80333DF4:
    // 0x80333DF4: b           L_80333E18
    // 0x80333DF8: nop

        goto L_80333E18;
    // 0x80333DF8: nop

L_80333DFC:
    // 0x80333DFC: jal         0x80336038
    // 0x80333E00: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80333E00: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    after_4:
    // 0x80333E04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333E08: bne         $v0, $at, L_80333E18
    if (ctx->r2 != ctx->r1) {
        // 0x80333E0C: nop
    
            goto L_80333E18;
    }
    // 0x80333E0C: nop

    // 0x80333E10: jal         0x80336A48
    // 0x80333E14: nop

    func_80336A48_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80333E14: nop

    after_5:
L_80333E18:
    // 0x80333E18: b           L_80333E20
    // 0x80333E1C: nop

        goto L_80333E20;
    // 0x80333E1C: nop

L_80333E20:
    // 0x80333E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333E28: jr          $ra
    // 0x80333E2C: nop

    return;
    // 0x80333E2C: nop

;}
RECOMP_FUNC void func_803344D8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803344D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803344DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803344E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803344E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803344E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803344EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803344F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803344F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334500: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334504: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334508: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033450C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334510: nop

    // 0x80334514: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80334518: nop

    // 0x8033451C: bne         $t1, $zero, L_80334560
    if (ctx->r9 != 0) {
        // 0x80334520: nop
    
            goto L_80334560;
    }
    // 0x80334520: nop

    // 0x80334524: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334528: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033452C: jal         0x8001B44C
    // 0x80334530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80334530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334534: beq         $v0, $zero, L_80334558
    if (ctx->r2 == 0) {
        // 0x80334538: nop
    
            goto L_80334558;
    }
    // 0x80334538: nop

    // 0x8033453C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334540: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80334544: sh          $t2, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = ctx->r10;
    // 0x80334548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033454C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334550: jal         0x8001BBDC
    // 0x80334554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80334558:
    // 0x80334558: b           L_80334744
    // 0x8033455C: nop

        goto L_80334744;
    // 0x8033455C: nop

L_80334560:
    // 0x80334560: jal         0x80336038
    // 0x80334564: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80334564: addiu       $a0, $zero, -0x18
    ctx->r4 = ADD32(0, -0X18);
    after_2:
    // 0x80334568: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033456C: bne         $v0, $at, L_80334744
    if (ctx->r2 != ctx->r1) {
        // 0x80334570: nop
    
            goto L_80334744;
    }
    // 0x80334570: nop

    // 0x80334574: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334578: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033457C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334584: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80334588: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033458C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334590: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334594: jal         0x800295C0
    // 0x80334598: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80334598: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8033459C: beq         $v0, $zero, L_803345B4
    if (ctx->r2 == 0) {
        // 0x803345A0: nop
    
            goto L_803345B4;
    }
    // 0x803345A0: nop

    // 0x803345A4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803345A8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803345AC: b           L_803345C4
    // 0x803345B0: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
        goto L_803345C4;
    // 0x803345B0: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
L_803345B4:
    // 0x803345B4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803345B8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803345BC: nop

    // 0x803345C0: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
L_803345C4:
    // 0x803345C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803345C8: nop

    // 0x803345CC: lh          $t7, 0x100($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X100);
    // 0x803345D0: nop

    // 0x803345D4: blez        $t7, L_8033466C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x803345D8: nop
    
            goto L_8033466C;
    }
    // 0x803345D8: nop

    // 0x803345DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345E0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803345E4: addiu       $t8, $t8, -0x52A0
    ctx->r24 = ADD32(ctx->r24, -0X52A0);
    // 0x803345E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803345F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803345F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803345F8: jal         0x8001C0EC
    // 0x803345FC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x803345FC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_4:
    // 0x80334600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334604: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334608: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x8033460C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334610: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80334614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334618: jal         0x8001ABF4
    // 0x8033461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x8033461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80334620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334628: jal         0x8001BBDC
    // 0x8033462C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x8033462C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80334630: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334634: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80334638: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033463C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334640: nop

    // 0x80334644: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80334648: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033464C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80334650: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80334654: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334658: nop

    // 0x8033465C: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
    // 0x80334660: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334664: b           L_80334744
    // 0x80334668: sh          $zero, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = 0;
        goto L_80334744;
    // 0x80334668: sh          $zero, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = 0;
L_8033466C:
    // 0x8033466C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334670: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80334674: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80334678: nop

    // 0x8033467C: beq         $t7, $at, L_803346FC
    if (ctx->r15 == ctx->r1) {
        // 0x80334680: nop
    
            goto L_803346FC;
    }
    // 0x80334680: nop

    // 0x80334684: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334688: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033468C: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80334690: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80334694: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80334698: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033469C: addiu       $a1, $a1, -0x4D74
    ctx->r5 = ADD32(ctx->r5, -0X4D74);
    // 0x803346A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803346A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x803346A8: jal         0x80027464
    // 0x803346AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803346AC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x803346B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803346B4: nop

    // 0x803346B8: sh          $zero, 0x108($t9)
    MEM_H(0X108, ctx->r25) = 0;
    // 0x803346BC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803346C0: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x803346C4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803346C8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803346CC: nop

    // 0x803346D0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803346D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803346D8: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x803346DC: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x803346E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803346E4: nop

    // 0x803346E8: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
    // 0x803346EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803346F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803346F4: b           L_80334744
    // 0x803346F8: sw          $t6, 0xCC($t7)
    MEM_W(0XCC, ctx->r15) = ctx->r14;
        goto L_80334744;
    // 0x803346F8: sw          $t6, 0xCC($t7)
    MEM_W(0XCC, ctx->r15) = ctx->r14;
L_803346FC:
    // 0x803346FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334700: nop

    // 0x80334704: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x80334708: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033470C: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80334710: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334714: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334718: nop

    // 0x8033471C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80334720: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334724: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80334728: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x8033472C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334730: nop

    // 0x80334734: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
    // 0x80334738: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033473C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80334740: sw          $t5, 0xCC($t6)
    MEM_W(0XCC, ctx->r14) = ctx->r13;
L_80334744:
    // 0x80334744: b           L_8033474C
    // 0x80334748: nop

        goto L_8033474C;
    // 0x80334748: nop

L_8033474C:
    // 0x8033474C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334750: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334754: jr          $ra
    // 0x80334758: nop

    return;
    // 0x80334758: nop

;}
RECOMP_FUNC void func_8033688C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033688C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336890: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336894: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336898: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033689C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803368A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803368A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803368A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803368AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803368B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803368B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803368B8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803368BC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803368C0: nop

    // 0x803368C4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803368C8: nop

    // 0x803368CC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803368D0: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x803368D4: beq         $at, $zero, L_8033695C
    if (ctx->r1 == 0) {
        // 0x803368D8: nop
    
            goto L_8033695C;
    }
    // 0x803368D8: nop

    // 0x803368DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803368E0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803368E4: addu        $at, $at, $t2
    gpr jr_addend_803368F0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803368E8: lw          $t2, -0x4B44($at)
    ctx->r10 = ADD32(ctx->r1, -0X4B44);
    // 0x803368EC: nop

    // 0x803368F0: jr          $t2
    // 0x803368F4: nop

    switch (jr_addend_803368F0 >> 2) {
        case 0: goto L_803368F8; break;
        case 1: goto L_8033690C; break;
        case 2: goto L_80336920; break;
        case 3: goto L_80336934; break;
        case 4: goto L_80336948; break;
        default: switch_error(__func__, 0x803368F0, 0x8033B4BC);
    }
    // 0x803368F4: nop

L_803368F8:
    // 0x803368F8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803368FC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80336900: sh          $t3, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r11;
    // 0x80336904: b           L_80336968
    // 0x80336908: nop

        goto L_80336968;
    // 0x80336908: nop

L_8033690C:
    // 0x8033690C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80336910: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80336914: sh          $t5, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r13;
    // 0x80336918: b           L_80336968
    // 0x8033691C: nop

        goto L_80336968;
    // 0x8033691C: nop

L_80336920:
    // 0x80336920: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80336924: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80336928: sh          $t7, 0xC0($t8)
    MEM_H(0XC0, ctx->r24) = ctx->r15;
    // 0x8033692C: b           L_80336968
    // 0x80336930: nop

        goto L_80336968;
    // 0x80336930: nop

L_80336934:
    // 0x80336934: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80336938: nop

    // 0x8033693C: sh          $zero, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = 0;
    // 0x80336940: b           L_80336968
    // 0x80336944: nop

        goto L_80336968;
    // 0x80336944: nop

L_80336948:
    // 0x80336948: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033694C: nop

    // 0x80336950: sh          $zero, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = 0;
    // 0x80336954: b           L_80336968
    // 0x80336958: nop

        goto L_80336968;
    // 0x80336958: nop

L_8033695C:
    // 0x8033695C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336960: nop

    // 0x80336964: sh          $zero, 0xC0($t1)
    MEM_H(0XC0, ctx->r9) = 0;
L_80336968:
    // 0x80336968: b           L_80336970
    // 0x8033696C: nop

        goto L_80336970;
    // 0x8033696C: nop

L_80336970:
    // 0x80336970: jr          $ra
    // 0x80336974: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336974: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80337F68_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337F68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337F70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337F74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337F78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337F7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337F80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337F88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337F90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337F94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337F98: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FA0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80337FA4: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80337FA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80337FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337FB4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80337FB8: jal         0x8001C0EC
    // 0x80337FBC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337FBC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80337FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337FCC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80337FD0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80337FD4: jal         0x800175F0
    // 0x80337FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80337FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80337FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337FE4: addiu       $a3, $a3, -0x51E4
    ctx->r7 = ADD32(ctx->r7, -0X51E4);
    // 0x80337FE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FEC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80337FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337FF4: jal         0x8001ABF4
    // 0x80337FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80337FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80337FFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338000: addiu       $t1, $zero, 0x17
    ctx->r9 = ADD32(0, 0X17);
    // 0x80338004: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80338008: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033800C: nop

    // 0x80338010: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80338014: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338018: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x8033801C: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80338020: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338024: nop

    // 0x80338028: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x8033802C: b           L_80338034
    // 0x80338030: nop

        goto L_80338034;
    // 0x80338030: nop

L_80338034:
    // 0x80338034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033803C: jr          $ra
    // 0x80338040: nop

    return;
    // 0x80338040: nop

;}
RECOMP_FUNC void func_803347D4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803347D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803347D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803347DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803347E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803347E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803347E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803347EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803347F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803347F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803347F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803347FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334800: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334804: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033480C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334810: jal         0x8001B4AC
    // 0x80334814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80334814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334818: beq         $v0, $zero, L_80334874
    if (ctx->r2 == 0) {
        // 0x8033481C: nop
    
            goto L_80334874;
    }
    // 0x8033481C: nop

    // 0x80334820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334824: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80334828: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x8033482C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334830: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80334834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334838: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8033483C: jal         0x8001C0EC
    // 0x80334840: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80334840: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_1:
    // 0x80334844: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334848: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8033484C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x80334850: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334854: nop

    // 0x80334858: sh          $zero, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = 0;
    // 0x8033485C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334860: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x80334864: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80334868: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033486C: nop

    // 0x80334870: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80334874:
    // 0x80334874: b           L_8033487C
    // 0x80334878: nop

        goto L_8033487C;
    // 0x80334878: nop

L_8033487C:
    // 0x8033487C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334880: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334884: jr          $ra
    // 0x80334888: nop

    return;
    // 0x80334888: nop

;}
RECOMP_FUNC void func_803338C0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803338C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803338C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803338C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803338CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803338D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803338D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803338D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803338E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803338E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803338EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803338F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803338F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803338F8: nop

    // 0x803338FC: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80333900: nop

    // 0x80333904: bne         $t1, $zero, L_80333954
    if (ctx->r9 != 0) {
        // 0x80333908: nop
    
            goto L_80333954;
    }
    // 0x80333908: nop

    // 0x8033390C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333910: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80333914: sh          $t2, 0xB4($t3)
    MEM_H(0XB4, ctx->r11) = ctx->r10;
    // 0x80333918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033391C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80333920: addiu       $t4, $t4, -0x52A0
    ctx->r12 = ADD32(ctx->r12, -0X52A0);
    // 0x80333924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333928: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8033392C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333930: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80333934: jal         0x8001C0EC
    // 0x80333938: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333938: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x8033393C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333944: jal         0x8001BBDC
    // 0x80333948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80333948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033394C: b           L_8033399C
    // 0x80333950: nop

        goto L_8033399C;
    // 0x80333950: nop

L_80333954:
    // 0x80333954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033395C: jal         0x8001B4AC
    // 0x80333960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333964: beq         $v0, $zero, L_8033399C
    if (ctx->r2 == 0) {
        // 0x80333968: nop
    
            goto L_8033399C;
    }
    // 0x80333968: nop

    // 0x8033396C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333970: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80333974: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80333978: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033397C: nop

    // 0x80333980: sh          $zero, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = 0;
    // 0x80333984: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333988: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8033398C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80333990: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333994: nop

    // 0x80333998: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033399C:
    // 0x8033399C: b           L_803339A4
    // 0x803339A0: nop

        goto L_803339A4;
    // 0x803339A0: nop

L_803339A4:
    // 0x803339A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803339A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803339AC: jr          $ra
    // 0x803339B0: nop

    return;
    // 0x803339B0: nop

;}
RECOMP_FUNC void func_803324EC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803324EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803324F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803324F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803324F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803324FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332500: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033250C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332510: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332514: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332518: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033251C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332520: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332524: nop

    // 0x80332528: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033252C: nop

    // 0x80332530: bne         $t1, $zero, L_803325B4
    if (ctx->r9 != 0) {
        // 0x80332534: nop
    
            goto L_803325B4;
    }
    // 0x80332534: nop

    // 0x80332538: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033253C: nop

    // 0x80332540: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332544: nop

    // 0x80332548: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033254C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332550: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332554: nop

    // 0x80332558: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033255C: nop

    // 0x80332560: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033256C: jal         0x8002A46C
    // 0x80332570: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x80332570: nop

    after_0:
    // 0x80332574: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332578: nop

    // 0x8033257C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80332580: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332584: nop

    // 0x80332588: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033258C: nop

    // 0x80332590: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x80332594: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80332598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033259C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803325A0: nop

    // 0x803325A4: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x803325A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803325AC: b           L_8033260C
    // 0x803325B0: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
        goto L_8033260C;
    // 0x803325B0: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
L_803325B4:
    // 0x803325B4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803325B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803325BC: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x803325C0: nop

    // 0x803325C4: bne         $t3, $at, L_8033260C
    if (ctx->r11 != ctx->r1) {
        // 0x803325C8: nop
    
            goto L_8033260C;
    }
    // 0x803325C8: nop

    // 0x803325CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325D4: jal         0x8002A8B4
    // 0x803325D8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803325D8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x803325DC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803325E0: nop

    // 0x803325E4: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803325E8: nop

    // 0x803325EC: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
    // 0x803325F0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803325F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803325F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803325FC: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80332600: nop

    // 0x80332604: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80332608: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
L_8033260C:
    // 0x8033260C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80332610: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332614: lh          $t5, 0xA8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA8);
    // 0x80332618: nop

    // 0x8033261C: bne         $t5, $at, L_80332670
    if (ctx->r13 != ctx->r1) {
        // 0x80332620: nop
    
            goto L_80332670;
    }
    // 0x80332620: nop

    // 0x80332624: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332628: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033262C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332630: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80332634: jal         0x80015538
    // 0x80332638: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80332638: nop

    after_2:
    // 0x8033263C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332640: nop

    // 0x80332644: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x80332648: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033264C: nop

    // 0x80332650: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332654: nop

    // 0x80332658: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x8033265C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80332660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332664: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332668: nop

    // 0x8033266C: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
L_80332670:
    // 0x80332670: b           L_80332678
    // 0x80332674: nop

        goto L_80332678;
    // 0x80332674: nop

L_80332678:
    // 0x80332678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033267C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332680: jr          $ra
    // 0x80332684: nop

    return;
    // 0x80332684: nop

;}
RECOMP_FUNC void func_803396CC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803396CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803396D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803396D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803396D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803396DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803396E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803396E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803396E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803396EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803396F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803396F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803396F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803396FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339700: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339704: nop

    // 0x80339708: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033970C: nop

    // 0x80339710: bne         $t1, $zero, L_80339748
    if (ctx->r9 != 0) {
        // 0x80339714: nop
    
            goto L_80339748;
    }
    // 0x80339714: nop

    // 0x80339718: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033971C: nop

    // 0x80339720: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339724: nop

    // 0x80339728: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033972C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339738: jal         0x8001BB34
    // 0x8033973C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033973C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80339740: b           L_80339838
    // 0x80339744: nop

        goto L_80339838;
    // 0x80339744: nop

L_80339748:
    // 0x80339748: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033974C: nop

    // 0x80339750: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339754: nop

    // 0x80339758: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x8033975C: beq         $at, $zero, L_80339794
    if (ctx->r1 == 0) {
        // 0x80339760: nop
    
            goto L_80339794;
    }
    // 0x80339760: nop

    // 0x80339764: lui         $at, 0x427A
    ctx->r1 = S32(0X427A << 16);
    // 0x80339768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033976C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339770: nop

    // 0x80339774: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x80339778: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033977C: nop

    // 0x80339780: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80339784: nop

    // 0x80339788: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033978C: b           L_80339838
    // 0x80339790: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
        goto L_80339838;
    // 0x80339790: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
L_80339794:
    // 0x80339794: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339798: nop

    // 0x8033979C: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x803397A0: nop

    // 0x803397A4: slti        $at, $t3, 0x36
    ctx->r1 = SIGNED(ctx->r11) < 0X36 ? 1 : 0;
    // 0x803397A8: beq         $at, $zero, L_803397DC
    if (ctx->r1 == 0) {
        // 0x803397AC: nop
    
            goto L_803397DC;
    }
    // 0x803397AC: nop

    // 0x803397B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803397B4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803397B8: nop

    // 0x803397BC: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x803397C0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803397C4: nop

    // 0x803397C8: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x803397CC: nop

    // 0x803397D0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x803397D4: b           L_80339838
    // 0x803397D8: sb          $t6, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r14;
        goto L_80339838;
    // 0x803397D8: sb          $t6, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r14;
L_803397DC:
    // 0x803397DC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803397E0: nop

    // 0x803397E4: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x803397E8: nop

    // 0x803397EC: slti        $at, $t9, 0x3C
    ctx->r1 = SIGNED(ctx->r25) < 0X3C ? 1 : 0;
    // 0x803397F0: beq         $at, $zero, L_80339828
    if (ctx->r1 == 0) {
        // 0x803397F4: nop
    
            goto L_80339828;
    }
    // 0x803397F4: nop

    // 0x803397F8: lui         $at, 0x427A
    ctx->r1 = S32(0X427A << 16);
    // 0x803397FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80339800: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339804: nop

    // 0x80339808: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x8033980C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80339810: nop

    // 0x80339814: lbu         $t1, 0x132($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X132);
    // 0x80339818: nop

    // 0x8033981C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80339820: b           L_80339838
    // 0x80339824: sb          $t3, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r11;
        goto L_80339838;
    // 0x80339824: sb          $t3, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r11;
L_80339828:
    // 0x80339828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033982C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339830: jal         0x8002B114
    // 0x80339834: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80339834: nop

    after_1:
L_80339838:
    // 0x80339838: b           L_80339840
    // 0x8033983C: nop

        goto L_80339840;
    // 0x8033983C: nop

L_80339840:
    // 0x80339840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80339848: jr          $ra
    // 0x8033984C: nop

    return;
    // 0x8033984C: nop

;}
RECOMP_FUNC void func_803383A4_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803383A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803383A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803383AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803383B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803383B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803383B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803383BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803383C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803383C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803383C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803383CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803383D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803383D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803383D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803383DC: nop

    // 0x803383E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803383E4: nop

    // 0x803383E8: bne         $t1, $zero, L_8033842C
    if (ctx->r9 != 0) {
        // 0x803383EC: nop
    
            goto L_8033842C;
    }
    // 0x803383EC: nop

    // 0x803383F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803383F4: nop

    // 0x803383F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803383FC: nop

    // 0x80338400: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338404: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033840C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80338410: addiu       $t5, $t5, -0x516C
    ctx->r13 = ADD32(ctx->r13, -0X516C);
    // 0x80338414: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338418: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033841C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80338420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338424: jal         0x8001C0EC
    // 0x80338428: addiu       $a3, $zero, 0x123
    ctx->r7 = ADD32(0, 0X123);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338428: addiu       $a3, $zero, 0x123
    ctx->r7 = ADD32(0, 0X123);
    after_0:
L_8033842C:
    // 0x8033842C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338434: jal         0x8001B44C
    // 0x80338438: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80338438: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033843C: beq         $v0, $zero, L_80338454
    if (ctx->r2 == 0) {
        // 0x80338440: nop
    
            goto L_80338454;
    }
    // 0x80338440: nop

    // 0x80338444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033844C: jal         0x8002B114
    // 0x80338450: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80338450: nop

    after_2:
L_80338454:
    // 0x80338454: b           L_8033845C
    // 0x80338458: nop

        goto L_8033845C;
    // 0x80338458: nop

L_8033845C:
    // 0x8033845C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338464: jr          $ra
    // 0x80338468: nop

    return;
    // 0x80338468: nop

;}
RECOMP_FUNC void func_8033488C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033488C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334894: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334898: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033489C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803348A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803348A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803348AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803348B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803348B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803348BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803348C0: jal         0x80336038
    // 0x803348C4: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    func_80336038_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x803348C4: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_0:
    // 0x803348C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803348CC: bne         $v0, $at, L_803348E4
    if (ctx->r2 != ctx->r1) {
        // 0x803348D0: nop
    
            goto L_803348E4;
    }
    // 0x803348D0: nop

    // 0x803348D4: jal         0x80336A48
    // 0x803348D8: nop

    func_80336A48_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x803348D8: nop

    after_1:
    // 0x803348DC: b           L_8033490C
    // 0x803348E0: nop

        goto L_8033490C;
    // 0x803348E0: nop

L_803348E4:
    // 0x803348E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348EC: jal         0x8001B4AC
    // 0x803348F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803348F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803348F4: beq         $v0, $zero, L_8033490C
    if (ctx->r2 == 0) {
        // 0x803348F8: nop
    
            goto L_8033490C;
    }
    // 0x803348F8: nop

    // 0x803348FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334900: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334904: jal         0x8001BBDC
    // 0x80334908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80334908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8033490C:
    // 0x8033490C: b           L_80334914
    // 0x80334910: nop

        goto L_80334914;
    // 0x80334910: nop

L_80334914:
    // 0x80334914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033491C: jr          $ra
    // 0x80334920: nop

    return;
    // 0x80334920: nop

;}
RECOMP_FUNC void func_80332688_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033268C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332690: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332694: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332698: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033269C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803326A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803326A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803326B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803326B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803326B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803326BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803326C0: nop

    // 0x803326C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803326C8: nop

    // 0x803326CC: bne         $t1, $zero, L_8033270C
    if (ctx->r9 != 0) {
        // 0x803326D0: nop
    
            goto L_8033270C;
    }
    // 0x803326D0: nop

    // 0x803326D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803326D8: nop

    // 0x803326DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803326E0: nop

    // 0x803326E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803326E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803326EC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803326F0: nop

    // 0x803326F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803326F8: nop

    // 0x803326FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332700: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332704: b           L_8033279C
    // 0x80332708: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
        goto L_8033279C;
    // 0x80332708: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
L_8033270C:
    // 0x8033270C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332710: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332714: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80332718: nop

    // 0x8033271C: bne         $t9, $at, L_8033279C
    if (ctx->r25 != ctx->r1) {
        // 0x80332720: nop
    
            goto L_8033279C;
    }
    // 0x80332720: nop

    // 0x80332724: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332728: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033272C: jal         0x8002A8B4
    // 0x80332730: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80332730: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_0:
    // 0x80332734: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332738: nop

    // 0x8033273C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332740: nop

    // 0x80332744: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x80332748: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033274C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332754: lwc1        $f6, 0x44($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332758: nop

    // 0x8033275C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332760: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
    // 0x80332764: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332768: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8033276C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332770: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80332774: nop

    // 0x80332778: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8033277C: nop

    // 0x80332780: bc1f        L_8033279C
    if (!c1cs) {
        // 0x80332784: nop
    
            goto L_8033279C;
    }
    // 0x80332784: nop

    // 0x80332788: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8033278C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332790: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332794: nop

    // 0x80332798: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_8033279C:
    // 0x8033279C: b           L_803327A4
    // 0x803327A0: nop

        goto L_803327A4;
    // 0x803327A0: nop

L_803327A4:
    // 0x803327A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803327A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803327AC: jr          $ra
    // 0x803327B0: nop

    return;
    // 0x803327B0: nop

;}
RECOMP_FUNC void func_80334924_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334924: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033492C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334930: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334934: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334938: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033493C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334940: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334944: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334948: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033494C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334950: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334954: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334958: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033495C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334960: jal         0x8001B4AC
    // 0x80334964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80334964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334968: beq         $v0, $zero, L_80334A48
    if (ctx->r2 == 0) {
        // 0x8033496C: nop
    
            goto L_80334A48;
    }
    // 0x8033496C: nop

    // 0x80334970: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334974: nop

    // 0x80334978: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x8033497C: nop

    // 0x80334980: bne         $t1, $zero, L_803349B4
    if (ctx->r9 != 0) {
        // 0x80334984: nop
    
            goto L_803349B4;
    }
    // 0x80334984: nop

    // 0x80334988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033498C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334990: jal         0x8001BBDC
    // 0x80334994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80334998: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033499C: nop

    // 0x803349A0: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x803349A4: nop

    // 0x803349A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803349AC: b           L_80334A48
    // 0x803349B0: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
        goto L_80334A48;
    // 0x803349B0: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
L_803349B4:
    // 0x803349B4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803349B8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803349BC: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x803349C0: nop

    // 0x803349C4: bne         $t6, $at, L_80334A30
    if (ctx->r14 != ctx->r1) {
        // 0x803349C8: nop
    
            goto L_80334A30;
    }
    // 0x803349C8: nop

    // 0x803349CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803349D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803349D4: addiu       $t7, $t7, -0x52A0
    ctx->r15 = ADD32(ctx->r15, -0X52A0);
    // 0x803349D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803349DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803349E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803349E4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x803349E8: jal         0x8001C0EC
    // 0x803349EC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803349EC: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_2:
    // 0x803349F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803349F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803349F8: jal         0x8001BBDC
    // 0x803349FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803349FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334A00: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A04: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80334A08: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334A0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A10: nop

    // 0x80334A14: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80334A18: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A1C: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x80334A20: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
    // 0x80334A24: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A28: b           L_80334A48
    // 0x80334A2C: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
        goto L_80334A48;
    // 0x80334A2C: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
L_80334A30:
    // 0x80334A30: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334A34: nop

    // 0x80334A38: lh          $t5, 0xB4($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB4);
    // 0x80334A3C: nop

    // 0x80334A40: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80334A44: sh          $t6, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r14;
L_80334A48:
    // 0x80334A48: b           L_80334A50
    // 0x80334A4C: nop

        goto L_80334A50;
    // 0x80334A4C: nop

L_80334A50:
    // 0x80334A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334A58: jr          $ra
    // 0x80334A5C: nop

    return;
    // 0x80334A5C: nop

;}
RECOMP_FUNC void func_803375AC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803375AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803375B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803375B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803375B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803375BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803375C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803375C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803375CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803375D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803375D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803375DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803375E0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803375E4: nop

    // 0x803375E8: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803375EC: nop

    // 0x803375F0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803375F4: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x803375F8: beq         $at, $zero, L_80337680
    if (ctx->r1 == 0) {
        // 0x803375FC: nop
    
            goto L_80337680;
    }
    // 0x803375FC: nop

    // 0x80337600: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337604: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337608: addu        $at, $at, $t2
    gpr jr_addend_80337614 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033760C: lw          $t2, -0x4B08($at)
    ctx->r10 = ADD32(ctx->r1, -0X4B08);
    // 0x80337610: nop

    // 0x80337614: jr          $t2
    // 0x80337618: nop

    switch (jr_addend_80337614 >> 2) {
        case 0: goto L_8033761C; break;
        case 1: goto L_80337630; break;
        case 2: goto L_80337644; break;
        case 3: goto L_80337658; break;
        case 4: goto L_8033766C; break;
        default: switch_error(__func__, 0x80337614, 0x8033B4F8);
    }
    // 0x80337618: nop

L_8033761C:
    // 0x8033761C: jal         0x80014E80
    // 0x80337620: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80337620: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80337624: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337628: b           L_80337694
    // 0x8033762C: nop

        goto L_80337694;
    // 0x8033762C: nop

L_80337630:
    // 0x80337630: jal         0x80014E80
    // 0x80337634: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80337634: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x80337638: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033763C: b           L_80337694
    // 0x80337640: nop

        goto L_80337694;
    // 0x80337640: nop

L_80337644:
    // 0x80337644: jal         0x80014E80
    // 0x80337648: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80337648: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8033764C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337650: b           L_80337694
    // 0x80337654: nop

        goto L_80337694;
    // 0x80337654: nop

L_80337658:
    // 0x80337658: jal         0x80014E80
    // 0x8033765C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8033765C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80337660: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337664: b           L_80337694
    // 0x80337668: nop

        goto L_80337694;
    // 0x80337668: nop

L_8033766C:
    // 0x8033766C: jal         0x80014E80
    // 0x80337670: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80337670: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x80337674: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337678: b           L_80337694
    // 0x8033767C: nop

        goto L_80337694;
    // 0x8033767C: nop

L_80337680:
    // 0x80337680: jal         0x80014E80
    // 0x80337684: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80337684: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x80337688: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033768C: b           L_80337694
    // 0x80337690: nop

        goto L_80337694;
    // 0x80337690: nop

L_80337694:
    // 0x80337694: b           L_8033769C
    // 0x80337698: nop

        goto L_8033769C;
    // 0x80337698: nop

L_8033769C:
    // 0x8033769C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803376A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803376A4: jr          $ra
    // 0x803376A8: nop

    return;
    // 0x803376A8: nop

;}
RECOMP_FUNC void func_80335F28_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335F30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335F38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335F3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335F50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335F54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335F58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335F5C: jal         0x803375AC
    // 0x80335F60: nop

    func_803375AC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80335F60: nop

    after_0:
    // 0x80335F64: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80335F68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335F6C: nop

    // 0x80335F70: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80335F74: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80335F78: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80335F7C: jal         0x803360CC
    // 0x80335F80: nop

    func_803360CC_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80335F80: nop

    after_1:
    // 0x80335F84: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x80335F88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335F8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335F90: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80335F94: nop

    // 0x80335F98: bne         $t2, $at, L_80335FE4
    if (ctx->r10 != ctx->r1) {
        // 0x80335F9C: nop
    
            goto L_80335FE4;
    }
    // 0x80335F9C: nop

    // 0x80335FA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335FA4: nop

    // 0x80335FA8: lh          $t4, 0xB8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB8);
    // 0x80335FAC: nop

    // 0x80335FB0: bne         $t4, $zero, L_80335FD0
    if (ctx->r12 != 0) {
        // 0x80335FB4: nop
    
            goto L_80335FD0;
    }
    // 0x80335FB4: nop

    // 0x80335FB8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80335FBC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80335FC0: jal         0x80337BCC
    // 0x80335FC4: nop

    func_80337BCC_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80335FC4: nop

    after_2:
    // 0x80335FC8: b           L_80335FDC
    // 0x80335FCC: nop

        goto L_80335FDC;
    // 0x80335FCC: nop

L_80335FD0:
    // 0x80335FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80335FD4: jal         0x80337CF0
    // 0x80335FD8: nop

    func_80337CF0_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80335FD8: nop

    after_3:
L_80335FDC:
    // 0x80335FDC: b           L_80336020
    // 0x80335FE0: nop

        goto L_80336020;
    // 0x80335FE0: nop

L_80335FE4:
    // 0x80335FE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335FE8: nop

    // 0x80335FEC: lh          $t6, 0xB8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB8);
    // 0x80335FF0: nop

    // 0x80335FF4: bne         $t6, $zero, L_80336014
    if (ctx->r14 != 0) {
        // 0x80335FF8: nop
    
            goto L_80336014;
    }
    // 0x80335FF8: nop

    // 0x80335FFC: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80336000: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80336004: jal         0x80337BCC
    // 0x80336008: nop

    func_80337BCC_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80336008: nop

    after_4:
    // 0x8033600C: b           L_80336020
    // 0x80336010: nop

        goto L_80336020;
    // 0x80336010: nop

L_80336014:
    // 0x80336014: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336018: jal         0x80337CF0
    // 0x8033601C: nop

    func_80337CF0_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x8033601C: nop

    after_5:
L_80336020:
    // 0x80336020: b           L_80336028
    // 0x80336024: nop

        goto L_80336028;
    // 0x80336024: nop

L_80336028:
    // 0x80336028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033602C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336030: jr          $ra
    // 0x80336034: nop

    return;
    // 0x80336034: nop

;}
RECOMP_FUNC void func_80335960_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335968: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033596C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335970: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335974: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033597C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335988: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033598C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335990: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335994: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335998: nop

    // 0x8033599C: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803359A0: nop

    // 0x803359A4: bne         $t1, $zero, L_80335A00
    if (ctx->r9 != 0) {
        // 0x803359A8: nop
    
            goto L_80335A00;
    }
    // 0x803359A8: nop

    // 0x803359AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803359B0: nop

    // 0x803359B4: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x803359B8: nop

    // 0x803359BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803359C0: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
    // 0x803359C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359CC: jal         0x8001BBDC
    // 0x803359D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803359D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803359D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803359D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803359DC: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803359E0: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x803359E4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803359E8: addiu       $a1, $a1, -0x4D74
    ctx->r5 = ADD32(ctx->r5, -0X4D74);
    // 0x803359EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803359F0: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    // 0x803359F4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803359F8: jal         0x80027464
    // 0x803359FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803359FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
L_80335A00:
    // 0x80335A00: b           L_80335A08
    // 0x80335A04: nop

        goto L_80335A08;
    // 0x80335A04: nop

L_80335A08:
    // 0x80335A08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335A0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335A10: jr          $ra
    // 0x80335A14: nop

    return;
    // 0x80335A14: nop

;}
RECOMP_FUNC void func_80338B24_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338B2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338B30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338B34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338B38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338B3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338B40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338B48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338B50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338B54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338B58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338B5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338B60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338B64: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80338B68: nop

    // 0x80338B6C: beq         $s0, $at, L_80338B94
    if (ctx->r16 == ctx->r1) {
        // 0x80338B70: nop
    
            goto L_80338B94;
    }
    // 0x80338B70: nop

    // 0x80338B74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338B78: beq         $s0, $at, L_80338BA4
    if (ctx->r16 == ctx->r1) {
        // 0x80338B7C: nop
    
            goto L_80338BA4;
    }
    // 0x80338B7C: nop

    // 0x80338B80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80338B84: beq         $s0, $at, L_80338BB4
    if (ctx->r16 == ctx->r1) {
        // 0x80338B88: nop
    
            goto L_80338BB4;
    }
    // 0x80338B88: nop

    // 0x80338B8C: b           L_80338BC4
    // 0x80338B90: nop

        goto L_80338BC4;
    // 0x80338B90: nop

L_80338B94:
    // 0x80338B94: jal         0x803387BC
    // 0x80338B98: nop

    func_803387BC_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x80338B98: nop

    after_0:
    // 0x80338B9C: b           L_80338BCC
    // 0x80338BA0: nop

        goto L_80338BCC;
    // 0x80338BA0: nop

L_80338BA4:
    // 0x80338BA4: jal         0x80338900
    // 0x80338BA8: nop

    func_80338900_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80338BA8: nop

    after_1:
    // 0x80338BAC: b           L_80338BCC
    // 0x80338BB0: nop

        goto L_80338BCC;
    // 0x80338BB0: nop

L_80338BB4:
    // 0x80338BB4: jal         0x803389F4
    // 0x80338BB8: nop

    func_803389F4_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80338BB8: nop

    after_2:
    // 0x80338BBC: b           L_80338BCC
    // 0x80338BC0: nop

        goto L_80338BCC;
    // 0x80338BC0: nop

L_80338BC4:
    // 0x80338BC4: b           L_80338BCC
    // 0x80338BC8: nop

        goto L_80338BCC;
    // 0x80338BC8: nop

L_80338BCC:
    // 0x80338BCC: b           L_80338BD4
    // 0x80338BD0: nop

        goto L_80338BD4;
    // 0x80338BD0: nop

L_80338BD4:
    // 0x80338BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338BD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338BDC: jr          $ra
    // 0x80338BE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338BE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803374AC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803374AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803374B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803374B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803374B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803374BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803374C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803374C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803374C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803374CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803374D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803374D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803374D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803374DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803374E0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803374E4: nop

    // 0x803374E8: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803374EC: nop

    // 0x803374F0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803374F4: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x803374F8: beq         $at, $zero, L_80337580
    if (ctx->r1 == 0) {
        // 0x803374FC: nop
    
            goto L_80337580;
    }
    // 0x803374FC: nop

    // 0x80337500: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337504: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337508: addu        $at, $at, $t2
    gpr jr_addend_80337514 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033750C: lw          $t2, -0x4B1C($at)
    ctx->r10 = ADD32(ctx->r1, -0X4B1C);
    // 0x80337510: nop

    // 0x80337514: jr          $t2
    // 0x80337518: nop

    switch (jr_addend_80337514 >> 2) {
        case 0: goto L_8033751C; break;
        case 1: goto L_80337530; break;
        case 2: goto L_80337544; break;
        case 3: goto L_80337558; break;
        case 4: goto L_8033756C; break;
        default: switch_error(__func__, 0x80337514, 0x8033B4E4);
    }
    // 0x80337518: nop

L_8033751C:
    // 0x8033751C: jal         0x80014E80
    // 0x80337520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80337520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80337524: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337528: b           L_80337594
    // 0x8033752C: nop

        goto L_80337594;
    // 0x8033752C: nop

L_80337530:
    // 0x80337530: jal         0x80014E80
    // 0x80337534: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80337534: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80337538: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033753C: b           L_80337594
    // 0x80337540: nop

        goto L_80337594;
    // 0x80337540: nop

L_80337544:
    // 0x80337544: jal         0x80014E80
    // 0x80337548: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80337548: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8033754C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337550: b           L_80337594
    // 0x80337554: nop

        goto L_80337594;
    // 0x80337554: nop

L_80337558:
    // 0x80337558: jal         0x80014E80
    // 0x8033755C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8033755C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80337560: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337564: b           L_80337594
    // 0x80337568: nop

        goto L_80337594;
    // 0x80337568: nop

L_8033756C:
    // 0x8033756C: jal         0x80014E80
    // 0x80337570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80337570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80337574: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80337578: b           L_80337594
    // 0x8033757C: nop

        goto L_80337594;
    // 0x8033757C: nop

L_80337580:
    // 0x80337580: jal         0x80014E80
    // 0x80337584: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80337584: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80337588: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033758C: b           L_80337594
    // 0x80337590: nop

        goto L_80337594;
    // 0x80337590: nop

L_80337594:
    // 0x80337594: b           L_8033759C
    // 0x80337598: nop

        goto L_8033759C;
    // 0x80337598: nop

L_8033759C:
    // 0x8033759C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803375A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803375A4: jr          $ra
    // 0x803375A8: nop

    return;
    // 0x803375A8: nop

;}
RECOMP_FUNC void func_80338500_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338500: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80338504: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338508: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033850C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338510: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338514: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338518: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033851C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338520: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338524: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338528: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033852C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338530: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338534: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80338538: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033853C: nop

    // 0x80338540: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338544: nop

    // 0x80338548: bne         $t1, $zero, L_803385D4
    if (ctx->r9 != 0) {
        // 0x8033854C: nop
    
            goto L_803385D4;
    }
    // 0x8033854C: nop

    // 0x80338550: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80338554: nop

    // 0x80338558: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033855C: nop

    // 0x80338560: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338564: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338568: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033856C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338570: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80338574: nop

    // 0x80338578: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x8033857C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338584: jal         0x8002A46C
    // 0x80338588: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x80338588: nop

    after_0:
    // 0x8033858C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80338590: nop

    // 0x80338594: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x80338598: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033859C: nop

    // 0x803385A0: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803385A4: nop

    // 0x803385A8: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x803385AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803385B0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803385B4: sh          $t8, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r24;
    // 0x803385B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803385BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803385C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803385C4: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x803385C8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803385CC: jal         0x800175F0
    // 0x803385D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803385D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803385D4:
    // 0x803385D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803385D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803385DC: jal         0x80028FA0
    // 0x803385E0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x803385E0: nop

    after_2:
    // 0x803385E4: beq         $v0, $zero, L_803385FC
    if (ctx->r2 == 0) {
        // 0x803385E8: nop
    
            goto L_803385FC;
    }
    // 0x803385E8: nop

    // 0x803385EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803385F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803385F4: jal         0x80029B60
    // 0x803385F8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x803385F8: nop

    after_3:
L_803385FC:
    // 0x803385FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338600: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338604: jal         0x80029C40
    // 0x80338608: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80338608: nop

    after_4:
    // 0x8033860C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80338610: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80338614: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338618: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033861C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80338620: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80338624: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338628: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033862C: jal         0x80029018
    // 0x80338630: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80338630: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80338634: beq         $v0, $zero, L_80338658
    if (ctx->r2 == 0) {
        // 0x80338638: nop
    
            goto L_80338658;
    }
    // 0x80338638: nop

    // 0x8033863C: jal         0x800297DC
    // 0x80338640: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80338640: nop

    after_6:
    // 0x80338644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033864C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338650: jal         0x80029824
    // 0x80338654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80338654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80338658:
    // 0x80338658: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033865C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80338660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338668: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8033866C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80338670: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338674: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80338678: jal         0x800295C0
    // 0x8033867C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x8033867C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80338680: beq         $v0, $zero, L_80338698
    if (ctx->r2 == 0) {
        // 0x80338684: nop
    
            goto L_80338698;
    }
    // 0x80338684: nop

    // 0x80338688: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033868C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80338690: b           L_803386A8
    // 0x80338694: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_803386A8;
    // 0x80338694: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_80338698:
    // 0x80338698: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033869C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803386A0: nop

    // 0x803386A4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_803386A8:
    // 0x803386A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803386AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803386B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803386B4: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803386B8: nop

    // 0x803386BC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803386C0: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x803386C4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803386C8: nop

    // 0x803386CC: lh          $t2, 0xB6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB6);
    // 0x803386D0: nop

    // 0x803386D4: bne         $t2, $zero, L_80338708
    if (ctx->r10 != 0) {
        // 0x803386D8: nop
    
            goto L_80338708;
    }
    // 0x803386D8: nop

    // 0x803386DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803386E0: addiu       $a0, $zero, 0x2BE
    ctx->r4 = ADD32(0, 0X2BE);
    // 0x803386E4: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x803386E8: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x803386EC: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x803386F0: jal         0x80081468
    // 0x803386F4: nop

    func_80081468(rdram, ctx);
        goto after_9;
    // 0x803386F4: nop

    after_9:
    // 0x803386F8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803386FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80338700: b           L_80338720
    // 0x80338704: sh          $t6, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r14;
        goto L_80338720;
    // 0x80338704: sh          $t6, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r14;
L_80338708:
    // 0x80338708: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033870C: nop

    // 0x80338710: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80338714: nop

    // 0x80338718: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8033871C: sh          $t0, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r8;
L_80338720:
    // 0x80338720: b           L_80338728
    // 0x80338724: nop

        goto L_80338728;
    // 0x80338724: nop

L_80338728:
    // 0x80338728: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033872C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80338730: jr          $ra
    // 0x80338734: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80338734: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80336D20_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336D28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336D2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336D30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336D34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336D48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336D4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336D50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D58: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80336D5C: addiu       $t0, $t0, -0x52A0
    ctx->r8 = ADD32(ctx->r8, -0X52A0);
    // 0x80336D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D64: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80336D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D6C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80336D70: jal         0x8001C0EC
    // 0x80336D74: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336D74: addiu       $a3, $zero, 0x11E
    ctx->r7 = ADD32(0, 0X11E);
    after_0:
    // 0x80336D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80336D88: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80336D8C: jal         0x800175F0
    // 0x80336D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80336D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80336D94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336D98: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80336D9C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80336DA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336DA4: nop

    // 0x80336DA8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80336DAC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336DB0: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80336DB4: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80336DB8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336DBC: nop

    // 0x80336DC0: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x80336DC4: b           L_80336DCC
    // 0x80336DC8: nop

        goto L_80336DCC;
    // 0x80336DC8: nop

L_80336DCC:
    // 0x80336DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336DD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336DD4: jr          $ra
    // 0x80336DD8: nop

    return;
    // 0x80336DD8: nop

;}
RECOMP_FUNC void func_80335818_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335818: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033581C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335820: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335824: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335828: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033582C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335830: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335834: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335838: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033583C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335840: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335844: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335848: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033584C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335850: nop

    // 0x80335854: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80335858: nop

    // 0x8033585C: bne         $t1, $zero, L_80335948
    if (ctx->r9 != 0) {
        // 0x80335860: nop
    
            goto L_80335948;
    }
    // 0x80335860: nop

    // 0x80335864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335868: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033586C: jal         0x8001B4AC
    // 0x80335870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x80335870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80335874: beq         $v0, $zero, L_80335948
    if (ctx->r2 == 0) {
        // 0x80335878: nop
    
            goto L_80335948;
    }
    // 0x80335878: nop

    // 0x8033587C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335880: nop

    // 0x80335884: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x80335888: nop

    // 0x8033588C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335890: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
    // 0x80335894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033589C: jal         0x8001BBDC
    // 0x803358A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803358A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803358A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803358A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803358AC: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x803358B0: nop

    // 0x803358B4: beq         $t6, $at, L_80335918
    if (ctx->r14 == ctx->r1) {
        // 0x803358B8: nop
    
            goto L_80335918;
    }
    // 0x803358B8: nop

    // 0x803358BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803358C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803358C4: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803358C8: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x803358CC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803358D0: addiu       $a1, $a1, -0x4D74
    ctx->r5 = ADD32(ctx->r5, -0X4D74);
    // 0x803358D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803358D8: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    // 0x803358DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803358E0: jal         0x80027464
    // 0x803358E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803358E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x803358E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803358EC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x803358F0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803358F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803358F8: nop

    // 0x803358FC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80335900: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335904: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x80335908: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
    // 0x8033590C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335910: b           L_80335948
    // 0x80335914: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
        goto L_80335948;
    // 0x80335914: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
L_80335918:
    // 0x80335918: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033591C: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80335920: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x80335924: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335928: nop

    // 0x8033592C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80335930: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335934: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80335938: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x8033593C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335940: nop

    // 0x80335944: sh          $zero, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = 0;
L_80335948:
    // 0x80335948: b           L_80335950
    // 0x8033594C: nop

        goto L_80335950;
    // 0x8033594C: nop

L_80335950:
    // 0x80335950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335958: jr          $ra
    // 0x8033595C: nop

    return;
    // 0x8033595C: nop

;}
RECOMP_FUNC void func_8033846C_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033846C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80338470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338474: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338478: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033847C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338480: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338484: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033848C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338490: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338494: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338498: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033849C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803384A0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803384A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803384A8: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803384AC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803384B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803384B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803384B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803384BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803384C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803384C4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803384C8: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x803384CC: nop

    // 0x803384D0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x803384D4: sh          $t6, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = ctx->r14;
    // 0x803384D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803384DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803384E0: jal         0x8002B0E4
    // 0x803384E4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803384E4: nop

    after_0:
    // 0x803384E8: b           L_803384F0
    // 0x803384EC: nop

        goto L_803384F0;
    // 0x803384EC: nop

L_803384F0:
    // 0x803384F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803384F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803384F8: jr          $ra
    // 0x803384FC: nop

    return;
    // 0x803384FC: nop

;}
RECOMP_FUNC void func_80339CAC_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339CB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339CB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339CBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339CC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339CC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339CC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339CCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339CD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339CD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339CD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339CDC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339CE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CE4: nop

    // 0x80339CE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339CEC: nop

    // 0x80339CF0: bne         $t1, $zero, L_80339D24
    if (ctx->r9 != 0) {
        // 0x80339CF4: nop
    
            goto L_80339D24;
    }
    // 0x80339CF4: nop

    // 0x80339CF8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CFC: nop

    // 0x80339D00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339D04: nop

    // 0x80339D08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339D0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339D10: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D14: nop

    // 0x80339D18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339D1C: nop

    // 0x80339D20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80339D24:
    // 0x80339D24: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339D2C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80339D30: nop

    // 0x80339D34: bne         $t8, $at, L_80339D8C
    if (ctx->r24 != ctx->r1) {
        // 0x80339D38: nop
    
            goto L_80339D8C;
    }
    // 0x80339D38: nop

    // 0x80339D3C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339D44: lh          $t0, 0xBE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBE);
    // 0x80339D48: nop

    // 0x80339D4C: bne         $t0, $at, L_80339D8C
    if (ctx->r8 != ctx->r1) {
        // 0x80339D50: nop
    
            goto L_80339D8C;
    }
    // 0x80339D50: nop

    // 0x80339D54: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D58: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80339D5C: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
    // 0x80339D60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339D64: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339D68: addiu       $a3, $a3, -0x50B0
    ctx->r7 = ADD32(ctx->r7, -0X50B0);
    // 0x80339D6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339D70: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80339D74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339D78: jal         0x8001ABF4
    // 0x80339D7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80339D7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80339D80: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D84: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80339D88: sh          $t4, 0xBC($t2)
    MEM_H(0XBC, ctx->r10) = ctx->r12;
L_80339D8C:
    // 0x80339D8C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339D94: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80339D98: nop

    // 0x80339D9C: bne         $t5, $at, L_80339EC4
    if (ctx->r13 != ctx->r1) {
        // 0x80339DA0: nop
    
            goto L_80339EC4;
    }
    // 0x80339DA0: nop

    // 0x80339DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339DAC: jal         0x80028FA0
    // 0x80339DB0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80339DB0: nop

    after_1:
    // 0x80339DB4: beq         $v0, $zero, L_80339DDC
    if (ctx->r2 == 0) {
        // 0x80339DB8: nop
    
            goto L_80339DDC;
    }
    // 0x80339DB8: nop

    // 0x80339DBC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339DC0: addiu       $at, $zero, 0x1D0
    ctx->r1 = ADD32(0, 0X1D0);
    // 0x80339DC4: lh          $t8, 0x106($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X106);
    // 0x80339DC8: nop

    // 0x80339DCC: bne         $t8, $at, L_80339DDC
    if (ctx->r24 != ctx->r1) {
        // 0x80339DD0: nop
    
            goto L_80339DDC;
    }
    // 0x80339DD0: nop

    // 0x80339DD4: jal         0x80338204
    // 0x80339DD8: nop

    func_80338204_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80339DD8: nop

    after_2:
L_80339DDC:
    // 0x80339DDC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80339DE0: nop

    // 0x80339DE4: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x80339DE8: nop

    // 0x80339DEC: bne         $t0, $zero, L_80339EAC
    if (ctx->r8 != 0) {
        // 0x80339DF0: nop
    
            goto L_80339EAC;
    }
    // 0x80339DF0: nop

    // 0x80339DF4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339DF8: nop

    // 0x80339DFC: lh          $t3, 0xC0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC0);
    // 0x80339E00: nop

    // 0x80339E04: bne         $t3, $zero, L_80339E6C
    if (ctx->r11 != 0) {
        // 0x80339E08: nop
    
            goto L_80339E6C;
    }
    // 0x80339E08: nop

    // 0x80339E0C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339E10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339E14: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80339E18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80339E1C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80339E20: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80339E24: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339E28: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80339E2C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339E30: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80339E34: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x80339E38: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80339E3C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80339E40: sw          $t7, -0x4D30($at)
    MEM_W(-0X4D30, ctx->r1) = ctx->r15;
    // 0x80339E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E4C: jal         0x800272E8
    // 0x80339E50: nop

    func_800272E8(rdram, ctx);
        goto after_3;
    // 0x80339E50: nop

    after_3:
    // 0x80339E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E5C: jal         0x8002B114
    // 0x80339E60: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80339E60: nop

    after_4:
    // 0x80339E64: b           L_80339EA4
    // 0x80339E68: nop

        goto L_80339EA4;
    // 0x80339E68: nop

L_80339E6C:
    // 0x80339E6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E70: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339E74: addiu       $a3, $a3, -0x50B0
    ctx->r7 = ADD32(ctx->r7, -0X50B0);
    // 0x80339E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E7C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339E84: jal         0x8001ABF4
    // 0x80339E88: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80339E88: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x80339E8C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80339E90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80339E94: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80339E98: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339E9C: nop

    // 0x80339EA0: sh          $zero, 0xBE($t0)
    MEM_H(0XBE, ctx->r8) = 0;
L_80339EA4:
    // 0x80339EA4: b           L_80339EC4
    // 0x80339EA8: nop

        goto L_80339EC4;
    // 0x80339EA8: nop

L_80339EAC:
    // 0x80339EAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339EB0: nop

    // 0x80339EB4: lh          $t3, 0xBC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBC);
    // 0x80339EB8: nop

    // 0x80339EBC: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x80339EC0: sh          $t2, 0xBC($t1)
    MEM_H(0XBC, ctx->r9) = ctx->r10;
L_80339EC4:
    // 0x80339EC4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339EC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339ECC: lh          $t4, 0xC2($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XC2);
    // 0x80339ED0: nop

    // 0x80339ED4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339ED8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339EDC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339EE0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339EE4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339EE8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80339EEC: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80339EF0: nop

    // 0x80339EF4: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80339EF8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339EFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339F00: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80339F04: nop

    // 0x80339F08: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80339F0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80339F10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80339F14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80339F18: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80339F1C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80339F20: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80339F24: nop

    // 0x80339F28: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80339F2C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339F30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339F34: lh          $t3, 0xC2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XC2);
    // 0x80339F38: nop

    // 0x80339F3C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80339F40: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80339F44: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339F48: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80339F4C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339F50: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339F54: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80339F58: nop

    // 0x80339F5C: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x80339F60: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339F68: lh          $t4, 0xC2($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XC2);
    // 0x80339F6C: nop

    // 0x80339F70: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339F74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339F78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339F7C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339F80: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339F84: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80339F88: lwc1        $f10, 0x416C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339F8C: nop

    // 0x80339F90: swc1        $f10, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f10.u32l;
    // 0x80339F94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339F98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339F9C: lh          $t8, 0xC2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XC2);
    // 0x80339FA0: nop

    // 0x80339FA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80339FA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80339FAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80339FB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80339FB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80339FB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80339FBC: lwc1        $f16, 0x418C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339FC0: nop

    // 0x80339FC4: swc1        $f16, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f16.u32l;
    // 0x80339FC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339FD0: lh          $t3, 0xC2($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XC2);
    // 0x80339FD4: nop

    // 0x80339FD8: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80339FDC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80339FE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339FE4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80339FE8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339FEC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339FF0: lwc1        $f18, 0x4194($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x80339FF4: nop

    // 0x80339FF8: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
    // 0x80339FFC: b           L_8033A004
    // 0x8033A000: nop

        goto L_8033A004;
    // 0x8033A000: nop

L_8033A004:
    // 0x8033A004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033A00C: jr          $ra
    // 0x8033A010: nop

    return;
    // 0x8033A010: nop

;}
RECOMP_FUNC void func_803328A8_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803328AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803328CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803328D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803328D4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803328D8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803328DC: nop

    // 0x803328E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803328E4: nop

    // 0x803328E8: bne         $t1, $zero, L_80332928
    if (ctx->r9 != 0) {
        // 0x803328EC: nop
    
            goto L_80332928;
    }
    // 0x803328EC: nop

    // 0x803328F0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803328F4: nop

    // 0x803328F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803328FC: nop

    // 0x80332900: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332904: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332908: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033290C: nop

    // 0x80332910: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332914: nop

    // 0x80332918: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033291C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80332920: b           L_803329E8
    // 0x80332924: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
        goto L_803329E8;
    // 0x80332924: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
L_80332928:
    // 0x80332928: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033292C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332930: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80332934: nop

    // 0x80332938: bne         $t9, $at, L_8033299C
    if (ctx->r25 != ctx->r1) {
        // 0x8033293C: nop
    
            goto L_8033299C;
    }
    // 0x8033293C: nop

    // 0x80332940: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033294C: lwc1        $f4, 0x44($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80332950: nop

    // 0x80332954: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80332958: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x8033295C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80332960: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80332964: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332968: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8033296C: nop

    // 0x80332970: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80332974: nop

    // 0x80332978: bc1f        L_80332994
    if (!c1cs) {
        // 0x8033297C: nop
    
            goto L_80332994;
    }
    // 0x8033297C: nop

    // 0x80332980: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80332984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332988: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033298C: nop

    // 0x80332990: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
L_80332994:
    // 0x80332994: b           L_803329E8
    // 0x80332998: nop

        goto L_803329E8;
    // 0x80332998: nop

L_8033299C:
    // 0x8033299C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803329A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x803329A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803329A8: lwc1        $f4, 0x44($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X44);
    // 0x803329AC: nop

    // 0x803329B0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803329B4: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x803329B8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803329BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803329C0: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x803329C4: nop

    // 0x803329C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803329CC: nop

    // 0x803329D0: bc1f        L_803329E8
    if (!c1cs) {
        // 0x803329D4: nop
    
            goto L_803329E8;
    }
    // 0x803329D4: nop

    // 0x803329D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803329DC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x803329E0: nop

    // 0x803329E4: swc1        $f18, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f18.u32l;
L_803329E8:
    // 0x803329E8: b           L_803329F0
    // 0x803329EC: nop

        goto L_803329F0;
    // 0x803329EC: nop

L_803329F0:
    // 0x803329F0: jr          $ra
    // 0x803329F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803329F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033A014_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A01C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033A020: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A024: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A028: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A02C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A030: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A038: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A03C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A040: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A044: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A048: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A04C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A050: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A054: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033A058: nop

    // 0x8033A05C: beq         $s0, $at, L_8033A084
    if (ctx->r16 == ctx->r1) {
        // 0x8033A060: nop
    
            goto L_8033A084;
    }
    // 0x8033A060: nop

    // 0x8033A064: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A068: beq         $s0, $at, L_8033A094
    if (ctx->r16 == ctx->r1) {
        // 0x8033A06C: nop
    
            goto L_8033A094;
    }
    // 0x8033A06C: nop

    // 0x8033A070: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033A074: beq         $s0, $at, L_8033A0A4
    if (ctx->r16 == ctx->r1) {
        // 0x8033A078: nop
    
            goto L_8033A0A4;
    }
    // 0x8033A078: nop

    // 0x8033A07C: b           L_8033A0B4
    // 0x8033A080: nop

        goto L_8033A0B4;
    // 0x8033A080: nop

L_8033A084:
    // 0x8033A084: jal         0x80339A08
    // 0x8033A088: nop

    func_80339A08_unk_bin_16(rdram, ctx);
        goto after_0;
    // 0x8033A088: nop

    after_0:
    // 0x8033A08C: b           L_8033A0BC
    // 0x8033A090: nop

        goto L_8033A0BC;
    // 0x8033A090: nop

L_8033A094:
    // 0x8033A094: jal         0x80339B4C
    // 0x8033A098: nop

    func_80339B4C_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033A098: nop

    after_1:
    // 0x8033A09C: b           L_8033A0BC
    // 0x8033A0A0: nop

        goto L_8033A0BC;
    // 0x8033A0A0: nop

L_8033A0A4:
    // 0x8033A0A4: jal         0x80339CAC
    // 0x8033A0A8: nop

    func_80339CAC_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x8033A0A8: nop

    after_2:
    // 0x8033A0AC: b           L_8033A0BC
    // 0x8033A0B0: nop

        goto L_8033A0BC;
    // 0x8033A0B0: nop

L_8033A0B4:
    // 0x8033A0B4: b           L_8033A0BC
    // 0x8033A0B8: nop

        goto L_8033A0BC;
    // 0x8033A0B8: nop

L_8033A0BC:
    // 0x8033A0BC: b           L_8033A0C4
    // 0x8033A0C0: nop

        goto L_8033A0C4;
    // 0x8033A0C0: nop

L_8033A0C4:
    // 0x8033A0C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A0C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033A0CC: jr          $ra
    // 0x8033A0D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033A0D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333150_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333150: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333154: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333158: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033315C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80333160: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333164: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333168: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033316C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333174: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033317C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333180: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333184: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333188: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033318C: jal         0x8001E1C0
    // 0x80333190: nop

    ResetActiveController(rdram, ctx);
        goto after_0;
    // 0x80333190: nop

    after_0:
    // 0x80333194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333198: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x8033319C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803331A0: nop

    // 0x803331A4: bne         $t1, $at, L_8033322C
    if (ctx->r9 != ctx->r1) {
        // 0x803331A8: nop
    
            goto L_8033322C;
    }
    // 0x803331A8: nop

    // 0x803331AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803331B0: nop

    // 0x803331B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803331B8: nop

    // 0x803331BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803331C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803331C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803331C8: nop

    // 0x803331CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803331D0: nop

    // 0x803331D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803331D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803331DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803331E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803331E4: nop

    // 0x803331E8: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x803331EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803331F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803331F4: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803331F8: nop

    // 0x803331FC: bne         $t9, $at, L_80333218
    if (ctx->r25 != ctx->r1) {
        // 0x80333200: nop
    
            goto L_80333218;
    }
    // 0x80333200: nop

    // 0x80333204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333208: jal         0x80330000
    // 0x8033320C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_80330000_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x8033320C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_1:
    // 0x80333210: b           L_80333224
    // 0x80333214: nop

        goto L_80333224;
    // 0x80333214: nop

L_80333218:
    // 0x80333218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033321C: jal         0x80330000
    // 0x80333220: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_80330000_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80333220: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_2:
L_80333224:
    // 0x80333224: b           L_803332D8
    // 0x80333228: nop

        goto L_803332D8;
    // 0x80333228: nop

L_8033322C:
    // 0x8033322C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333230: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80333234: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333238: nop

    // 0x8033323C: bne         $t1, $at, L_8033325C
    if (ctx->r9 != ctx->r1) {
        // 0x80333240: nop
    
            goto L_8033325C;
    }
    // 0x80333240: nop

    // 0x80333244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033324C: jal         0x8002B114
    // 0x80333250: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80333250: nop

    after_3:
    // 0x80333254: b           L_803332D8
    // 0x80333258: nop

        goto L_803332D8;
    // 0x80333258: nop

L_8033325C:
    // 0x8033325C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333260: nop

    // 0x80333264: lw          $t4, 0xC4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC4);
    // 0x80333268: nop

    // 0x8033326C: bne         $t4, $zero, L_803332B4
    if (ctx->r12 != 0) {
        // 0x80333270: nop
    
            goto L_803332B4;
    }
    // 0x80333270: nop

    // 0x80333274: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333278: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033327C: nop

    // 0x80333280: swc1        $f6, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f6.u32l;
    // 0x80333284: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333288: nop

    // 0x8033328C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80333290: nop

    // 0x80333294: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80333298: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033329C: nop

    // 0x803332A0: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x803332A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803332A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803332AC: nop

    // 0x803332B0: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
L_803332B4:
    // 0x803332B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803332B8: nop

    // 0x803332BC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803332C0: nop

    // 0x803332C4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803332C8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x803332CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803332D0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803332D4: sw          $t1, 0xC4($t3)
    MEM_W(0XC4, ctx->r11) = ctx->r9;
L_803332D8:
    // 0x803332D8: b           L_803332E0
    // 0x803332DC: nop

        goto L_803332E0;
    // 0x803332DC: nop

L_803332E0:
    // 0x803332E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803332E4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803332E8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803332EC: jr          $ra
    // 0x803332F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803332F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033A268_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033A26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A270: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A274: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A278: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A27C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A284: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A28C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A290: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A294: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A298: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033A29C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A2A0: nop

    // 0x8033A2A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A2A8: nop

    // 0x8033A2AC: bne         $t1, $zero, L_8033A330
    if (ctx->r9 != 0) {
        // 0x8033A2B0: nop
    
            goto L_8033A330;
    }
    // 0x8033A2B0: nop

    // 0x8033A2B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A2B8: nop

    // 0x8033A2BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A2C0: nop

    // 0x8033A2C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A2C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A2CC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A2D0: nop

    // 0x8033A2D4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A2D8: nop

    // 0x8033A2DC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A2E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A2E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A2E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A2EC: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033A2F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A2F4: jal         0x8001ABF4
    // 0x8033A2F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8033A2F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8033A2FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A300: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A304: addiu       $a3, $a3, -0x4FF4
    ctx->r7 = ADD32(ctx->r7, -0X4FF4);
    // 0x8033A308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A30C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8033A310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A314: jal         0x8001ABF4
    // 0x8033A318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033A318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033A31C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A324: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033A328: jal         0x80029EF8
    // 0x8033A32C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x8033A32C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
L_8033A330:
    // 0x8033A330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A338: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033A33C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033A340: jal         0x8002A0D0
    // 0x8033A344: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_3;
    // 0x8033A344: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x8033A348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A34C: bne         $v0, $at, L_8033A37C
    if (ctx->r2 != ctx->r1) {
        // 0x8033A350: nop
    
            goto L_8033A37C;
    }
    // 0x8033A350: nop

    // 0x8033A354: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A358: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033A35C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033A360: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A364: nop

    // 0x8033A368: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x8033A36C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A370: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A374: nop

    // 0x8033A378: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
L_8033A37C:
    // 0x8033A37C: b           L_8033A384
    // 0x8033A380: nop

        goto L_8033A384;
    // 0x8033A380: nop

L_8033A384:
    // 0x8033A384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033A38C: jr          $ra
    // 0x8033A390: nop

    return;
    // 0x8033A390: nop

;}
RECOMP_FUNC void func_80335A18_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335A18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335A24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335A28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335A2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335A30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335A3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335A48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335A4C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335A50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335A54: nop

    // 0x80335A58: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80335A5C: nop

    // 0x80335A60: bne         $t1, $zero, L_80335A90
    if (ctx->r9 != 0) {
        // 0x80335A64: nop
    
            goto L_80335A90;
    }
    // 0x80335A64: nop

    // 0x80335A68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80335A6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335A70: lwc1        $f4, 0xD4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80335A74: nop

    // 0x80335A78: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80335A7C: nop

    // 0x80335A80: bc1f        L_80335A90
    if (!c1cs) {
        // 0x80335A84: nop
    
            goto L_80335A90;
    }
    // 0x80335A84: nop

    // 0x80335A88: jal         0x8001E1C0
    // 0x80335A8C: nop

    ResetActiveController(rdram, ctx);
        goto after_0;
    // 0x80335A8C: nop

    after_0:
L_80335A90:
    // 0x80335A90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335A94: nop

    // 0x80335A98: lh          $s0, 0xA6($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA6);
    // 0x80335A9C: nop

    // 0x80335AA0: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x80335AA4: bne         $at, $zero, L_80335AC0
    if (ctx->r1 != 0) {
        // 0x80335AA8: nop
    
            goto L_80335AC0;
    }
    // 0x80335AA8: nop

    // 0x80335AAC: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x80335AB0: beq         $s0, $at, L_80335C4C
    if (ctx->r16 == ctx->r1) {
        // 0x80335AB4: nop
    
            goto L_80335C4C;
    }
    // 0x80335AB4: nop

    // 0x80335AB8: b           L_80335C5C
    // 0x80335ABC: nop

        goto L_80335C5C;
    // 0x80335ABC: nop

L_80335AC0:
    // 0x80335AC0: addiu       $t3, $s0, -0x1
    ctx->r11 = ADD32(ctx->r16, -0X1);
    // 0x80335AC4: sltiu       $at, $t3, 0x17
    ctx->r1 = ctx->r11 < 0X17 ? 1 : 0;
    // 0x80335AC8: beq         $at, $zero, L_80335C5C
    if (ctx->r1 == 0) {
        // 0x80335ACC: nop
    
            goto L_80335C5C;
    }
    // 0x80335ACC: nop

    // 0x80335AD0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335AD4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335AD8: addu        $at, $at, $t3
    gpr jr_addend_80335AE4 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335ADC: lw          $t3, -0x4BE8($at)
    ctx->r11 = ADD32(ctx->r1, -0X4BE8);
    // 0x80335AE0: nop

    // 0x80335AE4: jr          $t3
    // 0x80335AE8: nop

    switch (jr_addend_80335AE4 >> 2) {
        case 0: goto L_80335AEC; break;
        case 1: goto L_80335AFC; break;
        case 2: goto L_80335B0C; break;
        case 3: goto L_80335B1C; break;
        case 4: goto L_80335B2C; break;
        case 5: goto L_80335B3C; break;
        case 6: goto L_80335B4C; break;
        case 7: goto L_80335B5C; break;
        case 8: goto L_80335B6C; break;
        case 9: goto L_80335B7C; break;
        case 10: goto L_80335B8C; break;
        case 11: goto L_80335B9C; break;
        case 12: goto L_80335BAC; break;
        case 13: goto L_80335BBC; break;
        case 14: goto L_80335BCC; break;
        case 15: goto L_80335BDC; break;
        case 16: goto L_80335BEC; break;
        case 17: goto L_80335BFC; break;
        case 18: goto L_80335C0C; break;
        case 19: goto L_80335C5C; break;
        case 20: goto L_80335C1C; break;
        case 21: goto L_80335C2C; break;
        case 22: goto L_80335C3C; break;
        default: switch_error(__func__, 0x80335AE4, 0x8033B418);
    }
    // 0x80335AE8: nop

L_80335AEC:
    // 0x80335AEC: jal         0x803334D8
    // 0x80335AF0: nop

    func_803334D8_unk_bin_16(rdram, ctx);
        goto after_1;
    // 0x80335AF0: nop

    after_1:
    // 0x80335AF4: b           L_80335C64
    // 0x80335AF8: nop

        goto L_80335C64;
    // 0x80335AF8: nop

L_80335AFC:
    // 0x80335AFC: jal         0x803335C0
    // 0x80335B00: nop

    func_803335C0_unk_bin_16(rdram, ctx);
        goto after_2;
    // 0x80335B00: nop

    after_2:
    // 0x80335B04: b           L_80335C64
    // 0x80335B08: nop

        goto L_80335C64;
    // 0x80335B08: nop

L_80335B0C:
    // 0x80335B0C: jal         0x8033377C
    // 0x80335B10: nop

    func_8033377C_unk_bin_16(rdram, ctx);
        goto after_3;
    // 0x80335B10: nop

    after_3:
    // 0x80335B14: b           L_80335C64
    // 0x80335B18: nop

        goto L_80335C64;
    // 0x80335B18: nop

L_80335B1C:
    // 0x80335B1C: jal         0x803338C0
    // 0x80335B20: nop

    func_803338C0_unk_bin_16(rdram, ctx);
        goto after_4;
    // 0x80335B20: nop

    after_4:
    // 0x80335B24: b           L_80335C64
    // 0x80335B28: nop

        goto L_80335C64;
    // 0x80335B28: nop

L_80335B2C:
    // 0x80335B2C: jal         0x803339B4
    // 0x80335B30: nop

    func_803339B4_unk_bin_16(rdram, ctx);
        goto after_5;
    // 0x80335B30: nop

    after_5:
    // 0x80335B34: b           L_80335C64
    // 0x80335B38: nop

        goto L_80335C64;
    // 0x80335B38: nop

L_80335B3C:
    // 0x80335B3C: jal         0x80333BCC
    // 0x80335B40: nop

    func_80333BCC_unk_bin_16(rdram, ctx);
        goto after_6;
    // 0x80335B40: nop

    after_6:
    // 0x80335B44: b           L_80335C64
    // 0x80335B48: nop

        goto L_80335C64;
    // 0x80335B48: nop

L_80335B4C:
    // 0x80335B4C: jal         0x80333D0C
    // 0x80335B50: nop

    func_80333D0C_unk_bin_16(rdram, ctx);
        goto after_7;
    // 0x80335B50: nop

    after_7:
    // 0x80335B54: b           L_80335C64
    // 0x80335B58: nop

        goto L_80335C64;
    // 0x80335B58: nop

L_80335B5C:
    // 0x80335B5C: jal         0x80333E30
    // 0x80335B60: nop

    func_80333E30_unk_bin_16(rdram, ctx);
        goto after_8;
    // 0x80335B60: nop

    after_8:
    // 0x80335B64: b           L_80335C64
    // 0x80335B68: nop

        goto L_80335C64;
    // 0x80335B68: nop

L_80335B6C:
    // 0x80335B6C: jal         0x803340D0
    // 0x80335B70: nop

    func_803340D0_unk_bin_16(rdram, ctx);
        goto after_9;
    // 0x80335B70: nop

    after_9:
    // 0x80335B74: b           L_80335C64
    // 0x80335B78: nop

        goto L_80335C64;
    // 0x80335B78: nop

L_80335B7C:
    // 0x80335B7C: jal         0x80334200
    // 0x80335B80: nop

    func_80334200_unk_bin_16(rdram, ctx);
        goto after_10;
    // 0x80335B80: nop

    after_10:
    // 0x80335B84: b           L_80335C64
    // 0x80335B88: nop

        goto L_80335C64;
    // 0x80335B88: nop

L_80335B8C:
    // 0x80335B8C: jal         0x803342D0
    // 0x80335B90: nop

    func_803342D0_unk_bin_16(rdram, ctx);
        goto after_11;
    // 0x80335B90: nop

    after_11:
    // 0x80335B94: b           L_80335C64
    // 0x80335B98: nop

        goto L_80335C64;
    // 0x80335B98: nop

L_80335B9C:
    // 0x80335B9C: jal         0x80334324
    // 0x80335BA0: nop

    func_80334324_unk_bin_16(rdram, ctx);
        goto after_12;
    // 0x80335BA0: nop

    after_12:
    // 0x80335BA4: b           L_80335C64
    // 0x80335BA8: nop

        goto L_80335C64;
    // 0x80335BA8: nop

L_80335BAC:
    // 0x80335BAC: jal         0x803343BC
    // 0x80335BB0: nop

    func_803343BC_unk_bin_16(rdram, ctx);
        goto after_13;
    // 0x80335BB0: nop

    after_13:
    // 0x80335BB4: b           L_80335C64
    // 0x80335BB8: nop

        goto L_80335C64;
    // 0x80335BB8: nop

L_80335BBC:
    // 0x80335BBC: jal         0x803344D8
    // 0x80335BC0: nop

    func_803344D8_unk_bin_16(rdram, ctx);
        goto after_14;
    // 0x80335BC0: nop

    after_14:
    // 0x80335BC4: b           L_80335C64
    // 0x80335BC8: nop

        goto L_80335C64;
    // 0x80335BC8: nop

L_80335BCC:
    // 0x80335BCC: jal         0x8033475C
    // 0x80335BD0: nop

    func_8033475C_unk_bin_16(rdram, ctx);
        goto after_15;
    // 0x80335BD0: nop

    after_15:
    // 0x80335BD4: b           L_80335C64
    // 0x80335BD8: nop

        goto L_80335C64;
    // 0x80335BD8: nop

L_80335BDC:
    // 0x80335BDC: jal         0x803347D4
    // 0x80335BE0: nop

    func_803347D4_unk_bin_16(rdram, ctx);
        goto after_16;
    // 0x80335BE0: nop

    after_16:
    // 0x80335BE4: b           L_80335C64
    // 0x80335BE8: nop

        goto L_80335C64;
    // 0x80335BE8: nop

L_80335BEC:
    // 0x80335BEC: jal         0x8033488C
    // 0x80335BF0: nop

    func_8033488C_unk_bin_16(rdram, ctx);
        goto after_17;
    // 0x80335BF0: nop

    after_17:
    // 0x80335BF4: b           L_80335C64
    // 0x80335BF8: nop

        goto L_80335C64;
    // 0x80335BF8: nop

L_80335BFC:
    // 0x80335BFC: jal         0x80334924
    // 0x80335C00: nop

    func_80334924_unk_bin_16(rdram, ctx);
        goto after_18;
    // 0x80335C00: nop

    after_18:
    // 0x80335C04: b           L_80335C64
    // 0x80335C08: nop

        goto L_80335C64;
    // 0x80335C08: nop

L_80335C0C:
    // 0x80335C0C: jal         0x80334A60
    // 0x80335C10: nop

    func_80334A60_unk_bin_16(rdram, ctx);
        goto after_19;
    // 0x80335C10: nop

    after_19:
    // 0x80335C14: b           L_80335C64
    // 0x80335C18: nop

        goto L_80335C64;
    // 0x80335C18: nop

L_80335C1C:
    // 0x80335C1C: jal         0x80335698
    // 0x80335C20: nop

    func_80335698_unk_bin_16(rdram, ctx);
        goto after_20;
    // 0x80335C20: nop

    after_20:
    // 0x80335C24: b           L_80335C64
    // 0x80335C28: nop

        goto L_80335C64;
    // 0x80335C28: nop

L_80335C2C:
    // 0x80335C2C: jal         0x80335758
    // 0x80335C30: nop

    func_80335758_unk_bin_16(rdram, ctx);
        goto after_21;
    // 0x80335C30: nop

    after_21:
    // 0x80335C34: b           L_80335C64
    // 0x80335C38: nop

        goto L_80335C64;
    // 0x80335C38: nop

L_80335C3C:
    // 0x80335C3C: jal         0x80335818
    // 0x80335C40: nop

    func_80335818_unk_bin_16(rdram, ctx);
        goto after_22;
    // 0x80335C40: nop

    after_22:
    // 0x80335C44: b           L_80335C64
    // 0x80335C48: nop

        goto L_80335C64;
    // 0x80335C48: nop

L_80335C4C:
    // 0x80335C4C: jal         0x80335960
    // 0x80335C50: nop

    func_80335960_unk_bin_16(rdram, ctx);
        goto after_23;
    // 0x80335C50: nop

    after_23:
    // 0x80335C54: b           L_80335C64
    // 0x80335C58: nop

        goto L_80335C64;
    // 0x80335C58: nop

L_80335C5C:
    // 0x80335C5C: b           L_80335C64
    // 0x80335C60: nop

        goto L_80335C64;
    // 0x80335C60: nop

L_80335C64:
    // 0x80335C64: b           L_80335C6C
    // 0x80335C68: nop

        goto L_80335C6C;
    // 0x80335C68: nop

L_80335C6C:
    // 0x80335C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335C70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335C74: jr          $ra
    // 0x80335C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803322F0_unk_bin_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803322F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803322F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803322F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332300: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332304: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033230C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332310: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332314: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332318: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033231C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332320: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332324: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332328: nop

    // 0x8033232C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332330: nop

    // 0x80332334: bne         $t1, $zero, L_8033239C
    if (ctx->r9 != 0) {
        // 0x80332338: nop
    
            goto L_8033239C;
    }
    // 0x80332338: nop

    // 0x8033233C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332340: nop

    // 0x80332344: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332348: nop

    // 0x8033234C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332350: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332354: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332358: nop

    // 0x8033235C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332360: nop

    // 0x80332364: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332368: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033236C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332370: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332374: nop

    // 0x80332378: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x8033237C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332380: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332384: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x80332388: jal         0x80029EF8
    // 0x8033238C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x8033238C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80332390: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332394: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332398: sh          $t8, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r24;
L_8033239C:
    // 0x8033239C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803323A0: nop

    // 0x803323A4: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803323A8: nop

    // 0x803323AC: bne         $t1, $zero, L_803323D8
    if (ctx->r9 != 0) {
        // 0x803323B0: nop
    
            goto L_803323D8;
    }
    // 0x803323B0: nop

    // 0x803323B4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803323B8: lui         $at, 0x4070
    ctx->r1 = S32(0X4070 << 16);
    // 0x803323BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803323C0: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803323C4: jal         0x80015538
    // 0x803323C8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803323C8: nop

    after_1:
    // 0x803323CC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803323D0: b           L_80332434
    // 0x803323D4: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
        goto L_80332434;
    // 0x803323D4: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
L_803323D8:
    // 0x803323D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803323DC: nop

    // 0x803323E0: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x803323E4: nop

    // 0x803323E8: bne         $t6, $zero, L_80332410
    if (ctx->r14 != 0) {
        // 0x803323EC: nop
    
            goto L_80332410;
    }
    // 0x803323EC: nop

    // 0x803323F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803323FC: jal         0x80029EF8
    // 0x80332400: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x80332400: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x80332404: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332408: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033240C: sh          $t5, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r13;
L_80332410:
    // 0x80332410: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332414: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80332418: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033241C: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332420: jal         0x80015538
    // 0x80332424: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80332424: nop

    after_3:
    // 0x80332428: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033242C: nop

    // 0x80332430: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_80332434:
    // 0x80332434: b           L_8033243C
    // 0x80332438: nop

        goto L_8033243C;
    // 0x80332438: nop

L_8033243C:
    // 0x8033243C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332444: jr          $ra
    // 0x80332448: nop

    return;
    // 0x80332448: nop

;}
