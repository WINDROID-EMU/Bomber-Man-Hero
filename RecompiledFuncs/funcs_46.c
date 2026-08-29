#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80071A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071A70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071A74: sb          $a0, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = ctx->r4;
    // 0x80071A78: jr          $ra
    // 0x80071A7C: nop

    return;
    // 0x80071A7C: nop

    // 0x80071A80: jr          $ra
    // 0x80071A84: nop

    return;
    // 0x80071A84: nop

;}
RECOMP_FUNC void func_800B9D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9D9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B9DA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B9DA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B9DA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B9DAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B9DB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B9DB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B9DB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B9DBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B9DC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B9DC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B9DC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B9DCC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B9DD0: nop

    // 0x800B9DD4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800B9DD8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800B9DDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B9DE0: beq         $s0, $at, L_800B9E14
    if (ctx->r16 == ctx->r1) {
        // 0x800B9DE4: nop
    
            goto L_800B9E14;
    }
    // 0x800B9DE4: nop

    // 0x800B9DE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B9DEC: beq         $s0, $at, L_800B9E24
    if (ctx->r16 == ctx->r1) {
        // 0x800B9DF0: nop
    
            goto L_800B9E24;
    }
    // 0x800B9DF0: nop

    // 0x800B9DF4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800B9DF8: beq         $s0, $at, L_800B9E34
    if (ctx->r16 == ctx->r1) {
        // 0x800B9DFC: nop
    
            goto L_800B9E34;
    }
    // 0x800B9DFC: nop

    // 0x800B9E00: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800B9E04: beq         $s0, $at, L_800B9E44
    if (ctx->r16 == ctx->r1) {
        // 0x800B9E08: nop
    
            goto L_800B9E44;
    }
    // 0x800B9E08: nop

    // 0x800B9E0C: b           L_800B9E54
    // 0x800B9E10: nop

        goto L_800B9E54;
    // 0x800B9E10: nop

L_800B9E14:
    // 0x800B9E14: jal         0x800B955C
    // 0x800B9E18: nop

    func_800B955C(rdram, ctx);
        goto after_0;
    // 0x800B9E18: nop

    after_0:
    // 0x800B9E1C: b           L_800B9E5C
    // 0x800B9E20: nop

        goto L_800B9E5C;
    // 0x800B9E20: nop

L_800B9E24:
    // 0x800B9E24: jal         0x800B99A4
    // 0x800B9E28: nop

    func_800B99A4(rdram, ctx);
        goto after_1;
    // 0x800B9E28: nop

    after_1:
    // 0x800B9E2C: b           L_800B9E5C
    // 0x800B9E30: nop

        goto L_800B9E5C;
    // 0x800B9E30: nop

L_800B9E34:
    // 0x800B9E34: jal         0x800B969C
    // 0x800B9E38: nop

    func_800B969C(rdram, ctx);
        goto after_2;
    // 0x800B9E38: nop

    after_2:
    // 0x800B9E3C: b           L_800B9E5C
    // 0x800B9E40: nop

        goto L_800B9E5C;
    // 0x800B9E40: nop

L_800B9E44:
    // 0x800B9E44: jal         0x800B9D6C
    // 0x800B9E48: nop

    func_800B9D6C(rdram, ctx);
        goto after_3;
    // 0x800B9E48: nop

    after_3:
    // 0x800B9E4C: b           L_800B9E5C
    // 0x800B9E50: nop

        goto L_800B9E5C;
    // 0x800B9E50: nop

L_800B9E54:
    // 0x800B9E54: b           L_800B9E5C
    // 0x800B9E58: nop

        goto L_800B9E5C;
    // 0x800B9E58: nop

L_800B9E5C:
    // 0x800B9E5C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B9E60: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B9E64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B9E68: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B9E6C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B9E70: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B9E74: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B9E78: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B9E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9E80: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B9E84: swc1        $f4, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f4.u32l;
    // 0x800B9E88: b           L_800B9E90
    // 0x800B9E8C: nop

        goto L_800B9E90;
    // 0x800B9E8C: nop

L_800B9E90:
    // 0x800B9E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9E94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B9E98: jr          $ra
    // 0x800B9E9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B9E9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B8CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B8D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B8D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B8D8: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B8DC: nop

    // 0x8006B8E0: bne         $t6, $zero, L_8006B908
    if (ctx->r14 != 0) {
        // 0x8006B8E4: nop
    
            goto L_8006B908;
    }
    // 0x8006B8E4: nop

    // 0x8006B8E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B8EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B8F0: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B8F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B8F8: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x8006B8FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B900: jal         0x80017BEC
    // 0x8006B904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_8006B908:
    // 0x8006B908: b           L_8006B910
    // 0x8006B90C: nop

        goto L_8006B910;
    // 0x8006B90C: nop

L_8006B910:
    // 0x8006B910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B918: jr          $ra
    // 0x8006B91C: nop

    return;
    // 0x8006B91C: nop

;}
RECOMP_FUNC void func_800F82EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F82EC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800F82F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F82F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F82F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F82FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F830C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8310: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F8314: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8318: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x800F831C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F8320: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F8324: nop

    // 0x800F8328: bne         $t0, $zero, L_800F8408
    if (ctx->r8 != 0) {
        // 0x800F832C: nop
    
            goto L_800F8408;
    }
    // 0x800F832C: nop

    // 0x800F8330: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x800F8334: nop

    // 0x800F8338: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x800F833C: nop

    // 0x800F8340: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x800F8344: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x800F8348: nop

    // 0x800F834C: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x800F8350: nop

    // 0x800F8354: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x800F8358: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800F835C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8360: beq         $t5, $at, L_800F83B0
    if (ctx->r13 == ctx->r1) {
        // 0x800F8364: nop
    
            goto L_800F83B0;
    }
    // 0x800F8364: nop

    // 0x800F8368: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x800F836C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8370: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8378: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F837C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8380: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8384: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F8388: lh          $t8, 0x4254($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4254);
    // 0x800F838C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8390: beq         $t8, $at, L_800F83B0
    if (ctx->r24 == ctx->r1) {
        // 0x800F8394: nop
    
            goto L_800F83B0;
    }
    // 0x800F8394: nop

    // 0x800F8398: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800F839C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800F83A0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800F83A4: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x800F83A8: nop

    // 0x800F83AC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800F83B0:
    // 0x800F83B0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F83B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F83B8: beq         $t2, $at, L_800F8408
    if (ctx->r10 == ctx->r1) {
        // 0x800F83BC: nop
    
            goto L_800F8408;
    }
    // 0x800F83BC: nop

    // 0x800F83C0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F83C4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800F83C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F83CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F83D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F83D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F83D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F83DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F83E0: lh          $t5, 0x4254($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4254);
    // 0x800F83E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F83E8: beq         $t5, $at, L_800F8408
    if (ctx->r13 == ctx->r1) {
        // 0x800F83EC: nop
    
            goto L_800F8408;
    }
    // 0x800F83EC: nop

    // 0x800F83F0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800F83F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800F83F8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800F83FC: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800F8400: nop

    // 0x800F8404: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800F8408:
    // 0x800F8408: b           L_800F8410
    // 0x800F840C: nop

        goto L_800F8410;
    // 0x800F840C: nop

L_800F8410:
    // 0x800F8410: jr          $ra
    // 0x800F8414: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800F8414: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8008A824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A824: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008A828: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8008A82C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8008A830: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8008A834: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8008A838: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008A83C: sll         $t6, $a0, 11
    ctx->r14 = S32(ctx->r4 << 11);
    // 0x8008A840: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x8008A844: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008A848: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x8008A84C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008A850: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008A854: addiu       $t2, $t2, -0x3280
    ctx->r10 = ADD32(ctx->r10, -0X3280);
    // 0x8008A858: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008A85C: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x8008A860: jr          $ra
    // 0x8008A864: nop

    return;
    // 0x8008A864: nop

    // 0x8008A868: jr          $ra
    // 0x8008A86C: nop

    return;
    // 0x8008A86C: nop

;}
RECOMP_FUNC void func_800816FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800816FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80081700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80081704: addiu       $t6, $zero, 0x8F
    ctx->r14 = ADD32(0, 0X8F);
    // 0x80081708: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8008170C:
    // 0x8008170C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80081710: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80081714: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80081718: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008171C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80081720: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80081724: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80081728: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008172C: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x80081730: nop

    // 0x80081734: beq         $t9, $zero, L_8008189C
    if (ctx->r25 == 0) {
        // 0x80081738: nop
    
            goto L_8008189C;
    }
    // 0x80081738: nop

    // 0x8008173C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80081740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081744: sw          $t0, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r8;
    // 0x80081748: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8008174C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80081750: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80081754: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80081758: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008175C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80081760: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80081764: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80081768: lh          $t3, 0x4234($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4234);
    // 0x8008176C: nop

    // 0x80081770: addiu       $t4, $t3, -0x2BC
    ctx->r12 = ADD32(ctx->r11, -0X2BC);
    // 0x80081774: sltiu       $at, $t4, 0x12
    ctx->r1 = ctx->r12 < 0X12 ? 1 : 0;
    // 0x80081778: beq         $at, $zero, L_8008189C
    if (ctx->r1 == 0) {
        // 0x8008177C: nop
    
            goto L_8008189C;
    }
    // 0x8008177C: nop

    // 0x80081780: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80081784: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80081788: addu        $at, $at, $t4
    gpr jr_addend_80081794 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008178C: lw          $t4, -0x3478($at)
    ctx->r12 = ADD32(ctx->r1, -0X3478);
    // 0x80081790: nop

    // 0x80081794: jr          $t4
    // 0x80081798: nop

    switch (jr_addend_80081794 >> 2) {
        case 0: goto L_8008179C; break;
        case 1: goto L_800817AC; break;
        case 2: goto L_800817BC; break;
        case 3: goto L_800817CC; break;
        case 4: goto L_800817CC; break;
        case 5: goto L_800817DC; break;
        case 6: goto L_800817EC; break;
        case 7: goto L_8008181C; break;
        case 8: goto L_8008180C; break;
        case 9: goto L_800817FC; break;
        case 10: goto L_8008182C; break;
        case 11: goto L_8008183C; break;
        case 12: goto L_8008184C; break;
        case 13: goto L_8008185C; break;
        case 14: goto L_8008186C; break;
        case 15: goto L_8008186C; break;
        case 16: goto L_8008187C; break;
        case 17: goto L_8008188C; break;
        default: switch_error(__func__, 0x80081794, 0x8010CB88);
    }
    // 0x80081798: nop

L_8008179C:
    // 0x8008179C: jal         0x8007F688
    // 0x800817A0: nop

    func_8007F688(rdram, ctx);
        goto after_0;
    // 0x800817A0: nop

    after_0:
    // 0x800817A4: b           L_8008189C
    // 0x800817A8: nop

        goto L_8008189C;
    // 0x800817A8: nop

L_800817AC:
    // 0x800817AC: jal         0x8007F834
    // 0x800817B0: nop

    func_8007F834(rdram, ctx);
        goto after_1;
    // 0x800817B0: nop

    after_1:
    // 0x800817B4: b           L_8008189C
    // 0x800817B8: nop

        goto L_8008189C;
    // 0x800817B8: nop

L_800817BC:
    // 0x800817BC: jal         0x8007FBA4
    // 0x800817C0: nop

    func_8007FBA4(rdram, ctx);
        goto after_2;
    // 0x800817C0: nop

    after_2:
    // 0x800817C4: b           L_8008189C
    // 0x800817C8: nop

        goto L_8008189C;
    // 0x800817C8: nop

L_800817CC:
    // 0x800817CC: jal         0x8007FE5C
    // 0x800817D0: nop

    func_8007FE5C(rdram, ctx);
        goto after_3;
    // 0x800817D0: nop

    after_3:
    // 0x800817D4: b           L_8008189C
    // 0x800817D8: nop

        goto L_8008189C;
    // 0x800817D8: nop

L_800817DC:
    // 0x800817DC: jal         0x80080014
    // 0x800817E0: nop

    func_80080014(rdram, ctx);
        goto after_4;
    // 0x800817E0: nop

    after_4:
    // 0x800817E4: b           L_8008189C
    // 0x800817E8: nop

        goto L_8008189C;
    // 0x800817E8: nop

L_800817EC:
    // 0x800817EC: jal         0x80080228
    // 0x800817F0: nop

    func_80080228(rdram, ctx);
        goto after_5;
    // 0x800817F0: nop

    after_5:
    // 0x800817F4: b           L_8008189C
    // 0x800817F8: nop

        goto L_8008189C;
    // 0x800817F8: nop

L_800817FC:
    // 0x800817FC: jal         0x8007FA20
    // 0x80081800: nop

    func_8007FA20(rdram, ctx);
        goto after_6;
    // 0x80081800: nop

    after_6:
    // 0x80081804: b           L_8008189C
    // 0x80081808: nop

        goto L_8008189C;
    // 0x80081808: nop

L_8008180C:
    // 0x8008180C: jal         0x80080638
    // 0x80081810: nop

    func_80080638(rdram, ctx);
        goto after_7;
    // 0x80081810: nop

    after_7:
    // 0x80081814: b           L_8008189C
    // 0x80081818: nop

        goto L_8008189C;
    // 0x80081818: nop

L_8008181C:
    // 0x8008181C: jal         0x800804D0
    // 0x80081820: nop

    func_800804D0(rdram, ctx);
        goto after_8;
    // 0x80081820: nop

    after_8:
    // 0x80081824: b           L_8008189C
    // 0x80081828: nop

        goto L_8008189C;
    // 0x80081828: nop

L_8008182C:
    // 0x8008182C: jal         0x80080780
    // 0x80081830: nop

    func_80080780(rdram, ctx);
        goto after_9;
    // 0x80081830: nop

    after_9:
    // 0x80081834: b           L_8008189C
    // 0x80081838: nop

        goto L_8008189C;
    // 0x80081838: nop

L_8008183C:
    // 0x8008183C: jal         0x80080978
    // 0x80081840: nop

    func_80080978(rdram, ctx);
        goto after_10;
    // 0x80081840: nop

    after_10:
    // 0x80081844: b           L_8008189C
    // 0x80081848: nop

        goto L_8008189C;
    // 0x80081848: nop

L_8008184C:
    // 0x8008184C: jal         0x80080C0C
    // 0x80081850: nop

    func_80080C0C(rdram, ctx);
        goto after_11;
    // 0x80081850: nop

    after_11:
    // 0x80081854: b           L_8008189C
    // 0x80081858: nop

        goto L_8008189C;
    // 0x80081858: nop

L_8008185C:
    // 0x8008185C: jal         0x80080E48
    // 0x80081860: nop

    func_80080E48(rdram, ctx);
        goto after_12;
    // 0x80081860: nop

    after_12:
    // 0x80081864: b           L_8008189C
    // 0x80081868: nop

        goto L_8008189C;
    // 0x80081868: nop

L_8008186C:
    // 0x8008186C: jal         0x80081024
    // 0x80081870: nop

    func_80081024(rdram, ctx);
        goto after_13;
    // 0x80081870: nop

    after_13:
    // 0x80081874: b           L_8008189C
    // 0x80081878: nop

        goto L_8008189C;
    // 0x80081878: nop

L_8008187C:
    // 0x8008187C: jal         0x800811D8
    // 0x80081880: nop

    func_800811D8(rdram, ctx);
        goto after_14;
    // 0x80081880: nop

    after_14:
    // 0x80081884: b           L_8008189C
    // 0x80081888: nop

        goto L_8008189C;
    // 0x80081888: nop

L_8008188C:
    // 0x8008188C: jal         0x800813B8
    // 0x80081890: nop

    func_800813B8(rdram, ctx);
        goto after_15;
    // 0x80081890: nop

    after_15:
    // 0x80081894: b           L_8008189C
    // 0x80081898: nop

        goto L_8008189C;
    // 0x80081898: nop

L_8008189C:
    // 0x8008189C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800818A0: nop

    // 0x800818A4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800818A8: slti        $at, $t6, 0xCF
    ctx->r1 = SIGNED(ctx->r14) < 0XCF ? 1 : 0;
    // 0x800818AC: bne         $at, $zero, L_8008170C
    if (ctx->r1 != 0) {
        // 0x800818B0: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8008170C;
    }
    // 0x800818B0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800818B4: b           L_800818BC
    // 0x800818B8: nop

        goto L_800818BC;
    // 0x800818B8: nop

L_800818BC:
    // 0x800818BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800818C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800818C4: jr          $ra
    // 0x800818C8: nop

    return;
    // 0x800818C8: nop

;}
RECOMP_FUNC void func_800D26A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D26A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D26A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D26A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D26AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D26B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D26B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D26B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D26BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D26C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D26C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D26C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D26CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D26D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D26D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D26D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D26DC: nop

    // 0x800D26E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D26E4: nop

    // 0x800D26E8: bne         $t1, $zero, L_800D27B8
    if (ctx->r9 != 0) {
        // 0x800D26EC: nop
    
            goto L_800D27B8;
    }
    // 0x800D26EC: nop

    // 0x800D26F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D26F4: nop

    // 0x800D26F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D26FC: nop

    // 0x800D2700: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D2704: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D2708: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D270C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2710: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D2714: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D2718: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D271C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2724: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D2728: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D272C: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x800D2730: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x800D2734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2738: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D273C: addiu       $t8, $t8, -0x7AD0
    ctx->r24 = ADD32(ctx->r24, -0X7AD0);
    // 0x800D2740: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2744: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D2748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D274C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D2750: jal         0x8001C0EC
    // 0x800D2754: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D2754: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    after_0:
    // 0x800D2758: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D275C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2760: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D2764: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2768: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x800D276C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2770: jal         0x8001ABF4
    // 0x800D2774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D2774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800D2778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D277C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2780: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D2784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2788: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    // 0x800D278C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D2790: jal         0x8001ABF4
    // 0x800D2794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800D2794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800D2798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D279C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D27A0: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D27A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D27A8: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x800D27AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D27B0: jal         0x8001ABF4
    // 0x800D27B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800D27B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800D27B8:
    // 0x800D27B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D27BC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800D27C0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800D27C4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D27C8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D27CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D27D0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D27D4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D27D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D27DC: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x800D27E0: nop

    // 0x800D27E4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x800D27E8: bne         $at, $zero, L_800D2818
    if (ctx->r1 != 0) {
        // 0x800D27EC: nop
    
            goto L_800D2818;
    }
    // 0x800D27EC: nop

    // 0x800D27F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D27F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D27F8: lh          $s0, 0x108($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X108);
    // 0x800D27FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2800: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x800D2804: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800D2808: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800D280C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800D2810: jal         0x8001BB34
    // 0x800D2814: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800D2814: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_800D2818:
    // 0x800D2818: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D281C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D2820: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x800D2824: nop

    // 0x800D2828: bne         $t5, $at, L_800D2858
    if (ctx->r13 != ctx->r1) {
        // 0x800D282C: nop
    
            goto L_800D2858;
    }
    // 0x800D282C: nop

    // 0x800D2830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2838: jal         0x8001BB34
    // 0x800D283C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800D283C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800D2840: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D2844: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800D2848: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800D284C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D2850: nop

    // 0x800D2854: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800D2858:
    // 0x800D2858: b           L_800D2860
    // 0x800D285C: nop

        goto L_800D2860;
    // 0x800D285C: nop

L_800D2860:
    // 0x800D2860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D2864: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D2868: jr          $ra
    // 0x800D286C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D286C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800829AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800829B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800829B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800829B8: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x800829BC: nop

    // 0x800829C0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800829C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800829C8: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x800829CC: nop

    // 0x800829D0: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x800829D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800829D8: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x800829DC: nop

    // 0x800829E0: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x800829E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800829E8: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800829EC: nop

    // 0x800829F0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x800829F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800829F8: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x800829FC: nop

    // 0x80082A00: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80082A04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A08: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80082A0C: nop

    // 0x80082A10: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80082A14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A18: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80082A1C: nop

    // 0x80082A20: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80082A24: addiu       $t9, $zero, 0xAF
    ctx->r25 = ADD32(0, 0XAF);
    // 0x80082A28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A2C: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x80082A30: jal         0x80081C50
    // 0x80082A34: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x80082A34: nop

    after_0:
    // 0x80082A38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A3C: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80082A40: jal         0x800824A8
    // 0x80082A44: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082A44: nop

    after_1:
    // 0x80082A48: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x80082A4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A50: sh          $t0, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r8;
    // 0x80082A54: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80082A58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A5C: sh          $t1, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r9;
    // 0x80082A60: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80082A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A68: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x80082A6C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082A70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A74: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082A78: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80082A7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A80: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x80082A84: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082A88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A8C: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082A90: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082A94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082A98: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082A9C: b           L_80082AA4
    // 0x80082AA0: nop

        goto L_80082AA4;
    // 0x80082AA0: nop

L_80082AA4:
    // 0x80082AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082AA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80082AAC: jr          $ra
    // 0x80082AB0: nop

    return;
    // 0x80082AB0: nop

;}
RECOMP_FUNC void func_800819E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800819E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800819E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800819E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800819EC:
    // 0x800819EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800819F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800819F4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800819F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800819FC: sw          $zero, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = 0;
    // 0x80081A00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80081A04: nop

    // 0x80081A08: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80081A0C: slti        $at, $t9, 0x2BC
    ctx->r1 = SIGNED(ctx->r25) < 0X2BC ? 1 : 0;
    // 0x80081A10: bne         $at, $zero, L_800819EC
    if (ctx->r1 != 0) {
        // 0x80081A14: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_800819EC;
    }
    // 0x80081A14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80081A18: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80081A1C: jal         0x8001E954
    // 0x80081A20: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_0;
    // 0x80081A20: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_0:
    // 0x80081A24: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80081A28: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x80081A2C: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x80081A30: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x80081A34: jal         0x8001E98C
    // 0x80081A38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_1;
    // 0x80081A38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80081A3C: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081A40: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081A44: addiu       $a2, $a2, -0x13A0
    ctx->r6 = ADD32(ctx->r6, -0X13A0);
    // 0x80081A48: addiu       $a1, $a1, -0x3C40
    ctx->r5 = ADD32(ctx->r5, -0X3C40);
    // 0x80081A4C: jal         0x8001EA68
    // 0x80081A50: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    DecompressFile(rdram, ctx);
        goto after_2;
    // 0x80081A50: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_2:
    // 0x80081A54: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081A58: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081A5C: addiu       $a2, $a2, 0x3690
    ctx->r6 = ADD32(ctx->r6, 0X3690);
    // 0x80081A60: addiu       $a1, $a1, 0x1EC0
    ctx->r5 = ADD32(ctx->r5, 0X1EC0);
    // 0x80081A64: jal         0x8001EA68
    // 0x80081A68: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    DecompressFile(rdram, ctx);
        goto after_3;
    // 0x80081A68: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_3:
    // 0x80081A6C: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081A70: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081A74: addiu       $a2, $a2, 0x4550
    ctx->r6 = ADD32(ctx->r6, 0X4550);
    // 0x80081A78: addiu       $a1, $a1, 0x3690
    ctx->r5 = ADD32(ctx->r5, 0X3690);
    // 0x80081A7C: jal         0x8001EA68
    // 0x80081A80: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    DecompressFile(rdram, ctx);
        goto after_4;
    // 0x80081A80: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_4:
    // 0x80081A84: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081A88: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081A8C: addiu       $a2, $a2, 0x5370
    ctx->r6 = ADD32(ctx->r6, 0X5370);
    // 0x80081A90: addiu       $a1, $a1, 0x4550
    ctx->r5 = ADD32(ctx->r5, 0X4550);
    // 0x80081A94: jal         0x8001EA68
    // 0x80081A98: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    DecompressFile(rdram, ctx);
        goto after_5;
    // 0x80081A98: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_5:
    // 0x80081A9C: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081AA0: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081AA4: addiu       $a2, $a2, 0x69E0
    ctx->r6 = ADD32(ctx->r6, 0X69E0);
    // 0x80081AA8: addiu       $a1, $a1, 0x5370
    ctx->r5 = ADD32(ctx->r5, 0X5370);
    // 0x80081AAC: jal         0x8001EA68
    // 0x80081AB0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    DecompressFile(rdram, ctx);
        goto after_6;
    // 0x80081AB0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x80081AB4: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081AB8: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081ABC: addiu       $a2, $a2, 0x7D30
    ctx->r6 = ADD32(ctx->r6, 0X7D30);
    // 0x80081AC0: addiu       $a1, $a1, 0x69E0
    ctx->r5 = ADD32(ctx->r5, 0X69E0);
    // 0x80081AC4: jal         0x8001EA68
    // 0x80081AC8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    DecompressFile(rdram, ctx);
        goto after_7;
    // 0x80081AC8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x80081ACC: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081AD0: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80081AD4: addiu       $a2, $a2, 0x7ED0
    ctx->r6 = ADD32(ctx->r6, 0X7ED0);
    // 0x80081AD8: addiu       $a1, $a1, 0x7D30
    ctx->r5 = ADD32(ctx->r5, 0X7D30);
    // 0x80081ADC: jal         0x8001EA68
    // 0x80081AE0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    DecompressFile(rdram, ctx);
        goto after_8;
    // 0x80081AE0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x80081AE4: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80081AE8: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081AEC: addiu       $a2, $a2, -0x7B50
    ctx->r6 = ADD32(ctx->r6, -0X7B50);
    // 0x80081AF0: addiu       $a1, $a1, 0x7ED0
    ctx->r5 = ADD32(ctx->r5, 0X7ED0);
    // 0x80081AF4: jal         0x8001EA68
    // 0x80081AF8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    DecompressFile(rdram, ctx);
        goto after_9;
    // 0x80081AF8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_9:
    // 0x80081AFC: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B00: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B04: addiu       $a2, $a2, -0x6230
    ctx->r6 = ADD32(ctx->r6, -0X6230);
    // 0x80081B08: addiu       $a1, $a1, -0x6990
    ctx->r5 = ADD32(ctx->r5, -0X6990);
    // 0x80081B0C: jal         0x8001EA68
    // 0x80081B10: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    DecompressFile(rdram, ctx);
        goto after_10;
    // 0x80081B10: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_10:
    // 0x80081B14: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B18: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B1C: addiu       $a2, $a2, -0x5C20
    ctx->r6 = ADD32(ctx->r6, -0X5C20);
    // 0x80081B20: addiu       $a1, $a1, -0x6230
    ctx->r5 = ADD32(ctx->r5, -0X6230);
    // 0x80081B24: jal         0x8001EA68
    // 0x80081B28: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    DecompressFile(rdram, ctx);
        goto after_11;
    // 0x80081B28: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_11:
    // 0x80081B2C: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B30: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B34: addiu       $a2, $a2, -0x5620
    ctx->r6 = ADD32(ctx->r6, -0X5620);
    // 0x80081B38: addiu       $a1, $a1, -0x5C20
    ctx->r5 = ADD32(ctx->r5, -0X5C20);
    // 0x80081B3C: jal         0x8001EA68
    // 0x80081B40: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    DecompressFile(rdram, ctx);
        goto after_12;
    // 0x80081B40: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_12:
    // 0x80081B44: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B48: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B4C: addiu       $a2, $a2, -0x6990
    ctx->r6 = ADD32(ctx->r6, -0X6990);
    // 0x80081B50: addiu       $a1, $a1, -0x6FE0
    ctx->r5 = ADD32(ctx->r5, -0X6FE0);
    // 0x80081B54: jal         0x8001EA68
    // 0x80081B58: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    DecompressFile(rdram, ctx);
        goto after_13;
    // 0x80081B58: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_13:
    // 0x80081B5C: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B60: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B64: addiu       $a2, $a2, -0x5080
    ctx->r6 = ADD32(ctx->r6, -0X5080);
    // 0x80081B68: addiu       $a1, $a1, -0x5620
    ctx->r5 = ADD32(ctx->r5, -0X5620);
    // 0x80081B6C: jal         0x8001EA68
    // 0x80081B70: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    DecompressFile(rdram, ctx);
        goto after_14;
    // 0x80081B70: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_14:
    // 0x80081B74: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B78: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B7C: addiu       $a2, $a2, -0x4790
    ctx->r6 = ADD32(ctx->r6, -0X4790);
    // 0x80081B80: addiu       $a1, $a1, -0x5080
    ctx->r5 = ADD32(ctx->r5, -0X5080);
    // 0x80081B84: jal         0x8001EA68
    // 0x80081B88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    DecompressFile(rdram, ctx);
        goto after_15;
    // 0x80081B88: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_15:
    // 0x80081B8C: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081B90: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081B94: addiu       $a2, $a2, -0x3C40
    ctx->r6 = ADD32(ctx->r6, -0X3C40);
    // 0x80081B98: addiu       $a1, $a1, -0x41F0
    ctx->r5 = ADD32(ctx->r5, -0X41F0);
    // 0x80081B9C: jal         0x8001EA68
    // 0x80081BA0: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    DecompressFile(rdram, ctx);
        goto after_16;
    // 0x80081BA0: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_16:
    // 0x80081BA4: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081BA8: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081BAC: addiu       $a2, $a2, -0x41F0
    ctx->r6 = ADD32(ctx->r6, -0X41F0);
    // 0x80081BB0: addiu       $a1, $a1, -0x4790
    ctx->r5 = ADD32(ctx->r5, -0X4790);
    // 0x80081BB4: jal         0x8001EA68
    // 0x80081BB8: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    DecompressFile(rdram, ctx);
        goto after_17;
    // 0x80081BB8: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_17:
    // 0x80081BBC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80081BC0: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x80081BC4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80081BC8: beq         $t0, $at, L_80081BDC
    if (ctx->r8 == ctx->r1) {
        // 0x80081BCC: nop
    
            goto L_80081BDC;
    }
    // 0x80081BCC: nop

    // 0x80081BD0: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x80081BD4: bne         $t0, $at, L_80081BF4
    if (ctx->r8 != ctx->r1) {
        // 0x80081BD8: nop
    
            goto L_80081BF4;
    }
    // 0x80081BD8: nop

L_80081BDC:
    // 0x80081BDC: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081BE0: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081BE4: addiu       $a2, $a2, -0x6FE0
    ctx->r6 = ADD32(ctx->r6, -0X6FE0);
    // 0x80081BE8: addiu       $a1, $a1, -0x74D0
    ctx->r5 = ADD32(ctx->r5, -0X74D0);
    // 0x80081BEC: jal         0x8001EA68
    // 0x80081BF0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    DecompressFile(rdram, ctx);
        goto after_18;
    // 0x80081BF0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_18:
L_80081BF4:
    // 0x80081BF4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80081BF8: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80081BFC: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x80081C00: bne         $t1, $at, L_80081C20
    if (ctx->r9 != ctx->r1) {
        // 0x80081C04: nop
    
            goto L_80081C20;
    }
    // 0x80081C04: nop

    // 0x80081C08: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081C0C: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081C10: addiu       $a2, $a2, -0x74D0
    ctx->r6 = ADD32(ctx->r6, -0X74D0);
    // 0x80081C14: addiu       $a1, $a1, -0x7650
    ctx->r5 = ADD32(ctx->r5, -0X7650);
    // 0x80081C18: jal         0x8001EA68
    // 0x80081C1C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    DecompressFile(rdram, ctx);
        goto after_19;
    // 0x80081C1C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_19:
L_80081C20:
    // 0x80081C20: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x80081C24: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x80081C28: addiu       $a2, $a2, 0x2B80
    ctx->r6 = ADD32(ctx->r6, 0X2B80);
    // 0x80081C2C: addiu       $a1, $a1, -0x13A0
    ctx->r5 = ADD32(ctx->r5, -0X13A0);
    // 0x80081C30: jal         0x8001EA68
    // 0x80081C34: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    DecompressFile(rdram, ctx);
        goto after_20;
    // 0x80081C34: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_20:
    // 0x80081C38: b           L_80081C40
    // 0x80081C3C: nop

        goto L_80081C40;
    // 0x80081C3C: nop

L_80081C40:
    // 0x80081C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80081C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80081C48: jr          $ra
    // 0x80081C4C: nop

    return;
    // 0x80081C4C: nop

;}
RECOMP_FUNC void func_800E5F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5F18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E5F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5F20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5F24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5F28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5F2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5F30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5F34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5F38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5F3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5F40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5F44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5F48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E5F4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E5F50: nop

    // 0x800E5F54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E5F58: nop

    // 0x800E5F5C: bne         $t1, $zero, L_800E5FF0
    if (ctx->r9 != 0) {
        // 0x800E5F60: nop
    
            goto L_800E5FF0;
    }
    // 0x800E5F60: nop

    // 0x800E5F64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E5F68: nop

    // 0x800E5F6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E5F70: nop

    // 0x800E5F74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E5F78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E5F7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E5F80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E5F84: nop

    // 0x800E5F88: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800E5F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E5F90: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E5F94: nop

    // 0x800E5F98: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800E5F9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E5FA0: nop

    // 0x800E5FA4: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E5FA8: nop

    // 0x800E5FAC: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800E5FB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5FB4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E5FB8: addiu       $t8, $t8, -0x6AFC
    ctx->r24 = ADD32(ctx->r24, -0X6AFC);
    // 0x800E5FBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5FC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E5FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5FC8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E5FCC: jal         0x8001C0EC
    // 0x800E5FD0: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E5FD0: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    after_0:
    // 0x800E5FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5FE0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x800E5FE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800E5FE8: jal         0x800175F0
    // 0x800E5FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800E5FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800E5FF0:
    // 0x800E5FF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5FF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5FF8: jal         0x8001B4AC
    // 0x800E5FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E6000: beq         $v0, $zero, L_800E6060
    if (ctx->r2 == 0) {
        // 0x800E6004: nop
    
            goto L_800E6060;
    }
    // 0x800E6004: nop

    // 0x800E6008: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E600C: nop

    // 0x800E6010: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x800E6014: nop

    // 0x800E6018: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800E601C: sh          $t1, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r9;
    // 0x800E6020: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E6024: nop

    // 0x800E6028: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800E602C: nop

    // 0x800E6030: bne         $t4, $zero, L_800E6060
    if (ctx->r12 != 0) {
        // 0x800E6034: nop
    
            goto L_800E6060;
    }
    // 0x800E6034: nop

    // 0x800E6038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E603C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6040: jal         0x8001BBDC
    // 0x800E6044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800E6044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800E6048: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E604C: nop

    // 0x800E6050: lh          $t5, 0xAA($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAA);
    // 0x800E6054: nop

    // 0x800E6058: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800E605C: sh          $t6, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r14;
L_800E6060:
    // 0x800E6060: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E6064: nop

    // 0x800E6068: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x800E606C: nop

    // 0x800E6070: beq         $t8, $zero, L_800E60C0
    if (ctx->r24 == 0) {
        // 0x800E6074: nop
    
            goto L_800E60C0;
    }
    // 0x800E6074: nop

    // 0x800E6078: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E607C: nop

    // 0x800E6080: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800E6084: nop

    // 0x800E6088: slti        $at, $t1, 0x9
    ctx->r1 = SIGNED(ctx->r9) < 0X9 ? 1 : 0;
    // 0x800E608C: beq         $at, $zero, L_800E60B0
    if (ctx->r1 == 0) {
        // 0x800E6090: nop
    
            goto L_800E60B0;
    }
    // 0x800E6090: nop

    // 0x800E6094: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E6098: nop

    // 0x800E609C: lh          $t3, 0xAA($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XAA);
    // 0x800E60A0: nop

    // 0x800E60A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E60A8: b           L_800E60C0
    // 0x800E60AC: sh          $t4, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r12;
        goto L_800E60C0;
    // 0x800E60AC: sh          $t4, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r12;
L_800E60B0:
    // 0x800E60B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E60B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E60B8: jal         0x8002B0E4
    // 0x800E60BC: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800E60BC: nop

    after_4:
L_800E60C0:
    // 0x800E60C0: b           L_800E60C8
    // 0x800E60C4: nop

        goto L_800E60C8;
    // 0x800E60C4: nop

L_800E60C8:
    // 0x800E60C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E60CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E60D0: jr          $ra
    // 0x800E60D4: nop

    return;
    // 0x800E60D4: nop

;}
RECOMP_FUNC void func_800D1D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1D74: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800D1D78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1D7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1D80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D1D84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1D88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1D8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1D90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1D94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1D98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D1D9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D1DA0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800D1DA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800D1DA8: nop

    // 0x800D1DAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D1DB0: nop

    // 0x800D1DB4: bne         $t1, $zero, L_800D1DD4
    if (ctx->r9 != 0) {
        // 0x800D1DB8: nop
    
            goto L_800D1DD4;
    }
    // 0x800D1DB8: nop

    // 0x800D1DBC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800D1DC0: nop

    // 0x800D1DC4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D1DC8: nop

    // 0x800D1DCC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D1DD0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_800D1DD4:
    // 0x800D1DD4: b           L_800D1DDC
    // 0x800D1DD8: nop

        goto L_800D1DDC;
    // 0x800D1DD8: nop

L_800D1DDC:
    // 0x800D1DDC: jr          $ra
    // 0x800D1DE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800D1DE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F2E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F2EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F2EA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2EA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2EAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F2EB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2EB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2EB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2EBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2EC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2EC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2EC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2ECC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F2ED0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F2ED4: nop

    // 0x800F2ED8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800F2EDC: nop

    // 0x800F2EE0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800F2EE4: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800F2EE8: beq         $at, $zero, L_800F2F6C
    if (ctx->r1 == 0) {
        // 0x800F2EEC: nop
    
            goto L_800F2F6C;
    }
    // 0x800F2EEC: nop

    // 0x800F2EF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F2EF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2EF8: addu        $at, $at, $t2
    gpr jr_addend_800F2F04 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F2EFC: lw          $t2, 0x56AC($at)
    ctx->r10 = ADD32(ctx->r1, 0X56AC);
    // 0x800F2F00: nop

    // 0x800F2F04: jr          $t2
    // 0x800F2F08: nop

    switch (jr_addend_800F2F04 >> 2) {
        case 0: goto L_800F2F0C; break;
        case 1: goto L_800F2F1C; break;
        case 2: goto L_800F2F2C; break;
        case 3: goto L_800F2F3C; break;
        case 4: goto L_800F2F4C; break;
        case 5: goto L_800F2F5C; break;
        default: switch_error(__func__, 0x800F2F04, 0x801156AC);
    }
    // 0x800F2F08: nop

L_800F2F0C:
    // 0x800F2F0C: jal         0x800F197C
    // 0x800F2F10: nop

    func_800F197C(rdram, ctx);
        goto after_0;
    // 0x800F2F10: nop

    after_0:
    // 0x800F2F14: b           L_800F2F74
    // 0x800F2F18: nop

        goto L_800F2F74;
    // 0x800F2F18: nop

L_800F2F1C:
    // 0x800F2F1C: jal         0x800F1C28
    // 0x800F2F20: nop

    func_800F1C28(rdram, ctx);
        goto after_1;
    // 0x800F2F20: nop

    after_1:
    // 0x800F2F24: b           L_800F2F74
    // 0x800F2F28: nop

        goto L_800F2F74;
    // 0x800F2F28: nop

L_800F2F2C:
    // 0x800F2F2C: jal         0x800F2008
    // 0x800F2F30: nop

    func_800F2008(rdram, ctx);
        goto after_2;
    // 0x800F2F30: nop

    after_2:
    // 0x800F2F34: b           L_800F2F74
    // 0x800F2F38: nop

        goto L_800F2F74;
    // 0x800F2F38: nop

L_800F2F3C:
    // 0x800F2F3C: jal         0x800F2428
    // 0x800F2F40: nop

    func_800F2428(rdram, ctx);
        goto after_3;
    // 0x800F2F40: nop

    after_3:
    // 0x800F2F44: b           L_800F2F74
    // 0x800F2F48: nop

        goto L_800F2F74;
    // 0x800F2F48: nop

L_800F2F4C:
    // 0x800F2F4C: jal         0x800F2BB8
    // 0x800F2F50: nop

    func_800F2BB8(rdram, ctx);
        goto after_4;
    // 0x800F2F50: nop

    after_4:
    // 0x800F2F54: b           L_800F2F74
    // 0x800F2F58: nop

        goto L_800F2F74;
    // 0x800F2F58: nop

L_800F2F5C:
    // 0x800F2F5C: jal         0x800F2E20
    // 0x800F2F60: nop

    func_800F2E20(rdram, ctx);
        goto after_5;
    // 0x800F2F60: nop

    after_5:
    // 0x800F2F64: b           L_800F2F74
    // 0x800F2F68: nop

        goto L_800F2F74;
    // 0x800F2F68: nop

L_800F2F6C:
    // 0x800F2F6C: b           L_800F2F74
    // 0x800F2F70: nop

        goto L_800F2F74;
    // 0x800F2F70: nop

L_800F2F74:
    // 0x800F2F74: b           L_800F2F7C
    // 0x800F2F78: nop

        goto L_800F2F7C;
    // 0x800F2F78: nop

L_800F2F7C:
    // 0x800F2F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F2F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F2F84: jr          $ra
    // 0x800F2F88: nop

    return;
    // 0x800F2F88: nop

;}
RECOMP_FUNC void func_800F7544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7544: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F754C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7550: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7554: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7558: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F755C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7560: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7564: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7568: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F756C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7570: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7574: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F7578: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F757C: nop

    // 0x800F7580: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7584: nop

    // 0x800F7588: bne         $t1, $zero, L_800F7648
    if (ctx->r9 != 0) {
        // 0x800F758C: nop
    
            goto L_800F7648;
    }
    // 0x800F758C: nop

    // 0x800F7590: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7594: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F7598: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F759C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F75A0: nop

    // 0x800F75A4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800F75A8: nop

    // 0x800F75AC: beq         $t5, $zero, L_800F7600
    if (ctx->r13 == 0) {
        // 0x800F75B0: nop
    
            goto L_800F7600;
    }
    // 0x800F75B0: nop

    // 0x800F75B4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F75B8: nop

    // 0x800F75BC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F75C0: nop

    // 0x800F75C4: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
    // 0x800F75C8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F75CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F75D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F75D4: lwc1        $f12, 0x40($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X40);
    // 0x800F75D8: jal         0x80015538
    // 0x800F75DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800F75DC: nop

    after_0:
    // 0x800F75E0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F75E4: nop

    // 0x800F75E8: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
    // 0x800F75EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F75F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F75F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F75F8: b           L_800F7624
    // 0x800F75FC: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
        goto L_800F7624;
    // 0x800F75FC: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
L_800F7600:
    // 0x800F7600: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F7604: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7608: nop

    // 0x800F760C: swc1        $f6, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f6.u32l;
    // 0x800F7610: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7614: nop

    // 0x800F7618: lwc1        $f8, 0x48($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X48);
    // 0x800F761C: nop

    // 0x800F7620: swc1        $f8, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f8.u32l;
L_800F7624:
    // 0x800F7624: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F7628: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F762C: nop

    // 0x800F7630: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
    // 0x800F7634: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7638: nop

    // 0x800F763C: lwc1        $f16, 0x44($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800F7640: nop

    // 0x800F7644: swc1        $f16, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f16.u32l;
L_800F7648:
    // 0x800F7648: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F764C: nop

    // 0x800F7650: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x800F7654: nop

    // 0x800F7658: bne         $t7, $zero, L_800F7668
    if (ctx->r15 != 0) {
        // 0x800F765C: nop
    
            goto L_800F7668;
    }
    // 0x800F765C: nop

    // 0x800F7660: b           L_800F76FC
    // 0x800F7664: nop

        goto L_800F76FC;
    // 0x800F7664: nop

L_800F7668:
    // 0x800F7668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F766C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7670: jal         0x80029D04
    // 0x800F7674: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800F7674: nop

    after_1:
    // 0x800F7678: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F767C: nop

    // 0x800F7680: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x800F7684: lwc1        $f6, 0x48($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X48);
    // 0x800F7688: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800F768C: nop

    // 0x800F7690: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F7694: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800F7698: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800F769C: nop

    // 0x800F76A0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800F76A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F76A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F76AC: nop

    // 0x800F76B0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800F76B4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800F76B8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800F76BC: sh          $t0, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r8;
    // 0x800F76C0: nop

    // 0x800F76C4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800F76C8: nop

    // 0x800F76CC: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800F76D0: nop

    // 0x800F76D4: bgtz        $t2, L_800F76F4
    if (SIGNED(ctx->r10) > 0) {
        // 0x800F76D8: nop
    
            goto L_800F76F4;
    }
    // 0x800F76D8: nop

    // 0x800F76DC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F76E0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800F76E4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F76E8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F76EC: nop

    // 0x800F76F0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800F76F4:
    // 0x800F76F4: b           L_800F76FC
    // 0x800F76F8: nop

        goto L_800F76FC;
    // 0x800F76F8: nop

L_800F76FC:
    // 0x800F76FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7704: jr          $ra
    // 0x800F7708: nop

    return;
    // 0x800F7708: nop

;}
RECOMP_FUNC void func_80069AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069AD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80069ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069AE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80069AE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80069AE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069AEC: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80069AF0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80069AF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80069AF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80069AFC: lw          $t8, -0x4C04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4C04);
    // 0x80069B00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80069B04: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80069B08: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80069B0C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80069B10: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80069B14: nop

    // 0x80069B18: sb          $t3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r11;
    // 0x80069B1C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80069B20: lw          $t4, -0x1BD8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BD8);
    // 0x80069B24: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80069B28: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80069B2C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80069B30: lw          $t6, -0x4C04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C04);
    // 0x80069B34: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80069B38: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80069B3C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80069B40: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80069B44: lbu         $t1, 0x1($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X1);
    // 0x80069B48: nop

    // 0x80069B4C: sb          $t1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r9;
    // 0x80069B50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80069B54: lw          $t2, -0x1BD8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1BD8);
    // 0x80069B58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069B5C: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x80069B60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069B64: sh          $zero, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = 0;
    // 0x80069B68: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069B6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069B70: sh          $t3, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r11;
    // 0x80069B74: lbu         $t4, 0x1F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069B78: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80069B7C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80069B80: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80069B84: lw          $t6, -0x7DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7DC8);
    // 0x80069B88: lbu         $t7, 0x1E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1E);
    // 0x80069B8C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80069B90: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80069B94: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80069B98: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80069B9C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80069BA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069BA4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80069BA8: nop

    // 0x80069BAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80069BB0: swc1        $f6, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f6.u32l;
    // 0x80069BB4: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069BB8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80069BBC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80069BC0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80069BC4: lw          $t5, -0x7DC8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7DC8);
    // 0x80069BC8: lbu         $t7, 0x1E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1E);
    // 0x80069BCC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80069BD0: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80069BD4: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x80069BD8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80069BDC: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x80069BE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069BE4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80069BE8: nop

    // 0x80069BEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80069BF0: swc1        $f10, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f10.u32l;
    // 0x80069BF4: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069BF8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80069BFC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80069C00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80069C04: lw          $t4, -0x7DC8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7DC8);
    // 0x80069C08: lbu         $t7, 0x1E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1E);
    // 0x80069C0C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80069C10: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80069C14: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x80069C18: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80069C1C: lh          $t9, 0x4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4);
    // 0x80069C20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069C24: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80069C28: nop

    // 0x80069C2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80069C30: swc1        $f18, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f18.u32l;
    // 0x80069C34: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069C38: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80069C3C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80069C40: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80069C44: lw          $t3, -0x7DC8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7DC8);
    // 0x80069C48: lbu         $t7, 0x1E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1E);
    // 0x80069C4C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80069C50: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80069C54: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x80069C58: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80069C5C: lh          $t8, 0x6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X6);
    // 0x80069C60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069C64: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80069C68: nop

    // 0x80069C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80069C70: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80069C74: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80069C78: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80069C7C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80069C80: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80069C84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80069C88: lw          $t2, -0x4C04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C04);
    // 0x80069C8C: nop

    // 0x80069C90: lb          $t3, 0x3($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X3);
    // 0x80069C94: nop

    // 0x80069C98: beq         $t3, $zero, L_80069CB0
    if (ctx->r11 == 0) {
        // 0x80069C9C: nop
    
            goto L_80069CB0;
    }
    // 0x80069C9C: nop

    // 0x80069CA0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80069CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069CA8: b           L_80069CBC
    // 0x80069CAC: sb          $t7, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r15;
        goto L_80069CBC;
    // 0x80069CAC: sb          $t7, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r15;
L_80069CB0:
    // 0x80069CB0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80069CB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069CB8: sb          $t0, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r8;
L_80069CBC:
    // 0x80069CBC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80069CC0: nop

    // 0x80069CC4: beq         $t4, $zero, L_80069CEC
    if (ctx->r12 == 0) {
        // 0x80069CC8: nop
    
            goto L_80069CEC;
    }
    // 0x80069CC8: nop

    // 0x80069CCC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80069CD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069CD4: sb          $t5, 0x7620($at)
    MEM_B(0X7620, ctx->r1) = ctx->r13;
    // 0x80069CD8: jal         0x8007121C
    // 0x80069CDC: nop

    func_8007121C(rdram, ctx);
        goto after_0;
    // 0x80069CDC: nop

    after_0:
    // 0x80069CE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069CE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069CE8: sb          $t6, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = ctx->r14;
L_80069CEC:
    // 0x80069CEC: b           L_80069CF4
    // 0x80069CF0: nop

        goto L_80069CF4;
    // 0x80069CF0: nop

L_80069CF4:
    // 0x80069CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80069CFC: jr          $ra
    // 0x80069D00: nop

    return;
    // 0x80069D00: nop

;}
RECOMP_FUNC void func_8007A488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A48C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A490: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007A494: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8007A498: lb          $t6, 0x5268($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X5268);
    // 0x8007A49C: nop

    // 0x8007A4A0: beq         $t6, $zero, L_8007A4B8
    if (ctx->r14 == 0) {
        // 0x8007A4A4: nop
    
            goto L_8007A4B8;
    }
    // 0x8007A4A4: nop

    // 0x8007A4A8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007A4AC: nop

    // 0x8007A4B0: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x8007A4B4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_8007A4B8:
    // 0x8007A4B8: jal         0x8007944C
    // 0x8007A4BC: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007A4BC: nop

    after_0:
    // 0x8007A4C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007A4C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A4C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A4CC: beq         $t9, $at, L_8007A608
    if (ctx->r25 == ctx->r1) {
        // 0x8007A4D0: nop
    
            goto L_8007A608;
    }
    // 0x8007A4D0: nop

    // 0x8007A4D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A4D8: jal         0x80079E9C
    // 0x8007A4DC: nop

    func_80079E9C(rdram, ctx);
        goto after_1;
    // 0x8007A4DC: nop

    after_1:
    // 0x8007A4E0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A4E4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007A4E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007A4EC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A4F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007A4F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A4F8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007A4FC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007A500: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007A504: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8007A508: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007A50C: addiu       $t4, $zero, 0x25
    ctx->r12 = ADD32(0, 0X25);
    // 0x8007A510: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8007A514: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A518: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8007A51C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007A520: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8007A524: nop

    // 0x8007A528: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x8007A52C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007A530: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007A534: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007A538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007A53C: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8007A540: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007A544: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007A548: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x8007A54C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007A550: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007A554: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007A558: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8007A55C: nop

    // 0x8007A560: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x8007A564: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007A568: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A56C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007A570: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007A574: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007A578: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007A57C: lwc1        $f18, -0x3818($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3818);
    // 0x8007A580: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007A584: nop

    // 0x8007A588: swc1        $f18, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f18.u32l;
    // 0x8007A58C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007A590: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007A594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A598: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007A59C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007A5A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A5A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A5A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007A5AC: lwc1        $f14, -0x3814($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3814);
    // 0x8007A5B0: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8007A5B4: jal         0x80015538
    // 0x8007A5B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8007A5B8: nop

    after_2:
    // 0x8007A5BC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007A5C0: nop

    // 0x8007A5C4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x8007A5C8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007A5CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A5D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007A5D4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8007A5D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8007A5DC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007A5E0: lwc1        $f4, -0x381C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X381C);
    // 0x8007A5E4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007A5E8: nop

    // 0x8007A5EC: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x8007A5F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A5F4: jal         0x800799A8
    // 0x8007A5F8: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007A5F8: nop

    after_3:
    // 0x8007A5FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A600: jal         0x80079AD8
    // 0x8007A604: nop

    func_80079AD8(rdram, ctx);
        goto after_4;
    // 0x8007A604: nop

    after_4:
L_8007A608:
    // 0x8007A608: b           L_8007A610
    // 0x8007A60C: nop

        goto L_8007A610;
    // 0x8007A60C: nop

L_8007A610:
    // 0x8007A610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A618: jr          $ra
    // 0x8007A61C: nop

    return;
    // 0x8007A61C: nop

;}
RECOMP_FUNC void func_80091644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091644: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091648: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009164C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091650: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091654: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091658: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009165C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091660: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091664: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091668: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009166C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091670: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091674: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091678: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009167C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091680: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091684: addiu       $a1, $a1, 0x1588
    ctx->r5 = ADD32(ctx->r5, 0X1588);
    // 0x80091688: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009168C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091690: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091694: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091698: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009169C: jal         0x80027464
    // 0x800916A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800916A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800916A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800916A8: b           L_800916B0
    // 0x800916AC: nop

        goto L_800916B0;
    // 0x800916AC: nop

L_800916B0:
    // 0x800916B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800916B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800916B8: jr          $ra
    // 0x800916BC: nop

    return;
    // 0x800916BC: nop

;}
RECOMP_FUNC void func_80077CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077CB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80077CB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80077CB8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80077CBC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80077CC0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80077CC4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80077CC8: lh          $t6, 0x62($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X62);
    // 0x80077CCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80077CD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80077CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80077CD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80077CDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80077CE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80077CE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80077CE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80077CEC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80077CF0: lh          $t0, 0x66($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X66);
    // 0x80077CF4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80077CF8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80077CFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80077D00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80077D04: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80077D08: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80077D0C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80077D10: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80077D14: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80077D18: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80077D1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80077D20: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x80077D24: lh          $t8, 0xFE($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XFE);
    // 0x80077D28: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80077D2C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80077D30: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x80077D34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80077D38: lw          $t7, 0x4DB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4DB0);
    // 0x80077D3C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80077D40: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80077D44: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80077D48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077D4C: sw          $t1, 0x4B54($at)
    MEM_W(0X4B54, ctx->r1) = ctx->r9;
    // 0x80077D50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80077D54: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80077D58: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x80077D5C: lh          $t4, 0xFE($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XFE);
    // 0x80077D60: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80077D64: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80077D68: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x80077D6C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077D70: lw          $t6, 0x4DB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4DB0);
    // 0x80077D74: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80077D78: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80077D7C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x80077D80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077D84: sw          $t9, 0x4B58($at)
    MEM_W(0X4B58, ctx->r1) = ctx->r25;
    // 0x80077D88: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80077D8C: lw          $t0, 0x4B54($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4B54);
    // 0x80077D90: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80077D94: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x80077D98: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80077D9C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80077DA0: nop

    // 0x80077DA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80077DA8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80077DAC: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x80077DB0: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80077DB4: lw          $t5, 0x4B54($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4B54);
    // 0x80077DB8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80077DBC: lh          $t2, 0x2($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X2);
    // 0x80077DC0: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80077DC4: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80077DC8: nop

    // 0x80077DCC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80077DD0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80077DD4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x80077DD8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80077DDC: lw          $t6, 0x4B54($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4B54);
    // 0x80077DE0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80077DE4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80077DE8: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80077DEC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80077DF0: nop

    // 0x80077DF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80077DF8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80077DFC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x80077E00: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80077E04: lw          $t9, 0x4B58($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4B58);
    // 0x80077E08: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80077E0C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80077E10: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80077E14: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80077E18: nop

    // 0x80077E1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80077E20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80077E24: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80077E28: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80077E2C: lw          $t3, 0x4B58($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4B58);
    // 0x80077E30: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80077E34: lh          $t5, 0x2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X2);
    // 0x80077E38: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80077E3C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80077E40: nop

    // 0x80077E44: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80077E48: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80077E4C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80077E50: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80077E54: lw          $t4, 0x4B58($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4B58);
    // 0x80077E58: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80077E5C: lh          $t6, 0x4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X4);
    // 0x80077E60: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80077E64: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80077E68: nop

    // 0x80077E6C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80077E70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80077E74: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80077E78: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80077E7C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80077E80: lw          $t9, 0x4B54($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4B54);
    // 0x80077E84: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80077E88: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x80077E8C: lh          $t0, 0x6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X6);
    // 0x80077E90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80077E94: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80077E98: lwc1        $f10, 0x14($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X14);
    // 0x80077E9C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80077EA0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80077EA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80077EA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80077EAC: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80077EB0: nop

    // 0x80077EB4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80077EB8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80077EBC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80077EC0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80077EC4: lw          $t3, 0x4B58($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4B58);
    // 0x80077EC8: lwc1        $f18, 0xC($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80077ECC: lwc1        $f4, 0x10($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X10);
    // 0x80077ED0: lh          $t5, 0x6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X6);
    // 0x80077ED4: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80077ED8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80077EDC: lwc1        $f6, 0x14($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X14);
    // 0x80077EE0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80077EE4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80077EE8: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80077EEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80077EF0: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80077EF4: nop

    // 0x80077EF8: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80077EFC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80077F00: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80077F04: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80077F08: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80077F0C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80077F10: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80077F14: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80077F18: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80077F1C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80077F20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80077F24: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80077F28: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80077F2C: jal         0x800778A0
    // 0x80077F30: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_800778A0(rdram, ctx);
        goto after_0;
    // 0x80077F30: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80077F34: bne         $v0, $zero, L_80077F44
    if (ctx->r2 != 0) {
        // 0x80077F38: nop
    
            goto L_80077F44;
    }
    // 0x80077F38: nop

    // 0x80077F3C: b           L_80078090
    // 0x80077F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80078090;
    // 0x80077F40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077F44:
    // 0x80077F44: lh          $a0, 0x62($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X62);
    // 0x80077F48: lh          $a1, 0x66($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X66);
    // 0x80077F4C: jal         0x80077580
    // 0x80077F50: nop

    func_80077580(rdram, ctx);
        goto after_1;
    // 0x80077F50: nop

    after_1:
    // 0x80077F54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077F58: sh          $zero, 0x4B5E($at)
    MEM_H(0X4B5E, ctx->r1) = 0;
    // 0x80077F5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077F60: sh          $zero, 0x4B60($at)
    MEM_H(0X4B60, ctx->r1) = 0;
    // 0x80077F64: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80077F68: sh          $t2, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r10;
L_80077F6C:
    // 0x80077F6C: lh          $t6, 0x5C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5C);
    // 0x80077F70: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80077F74: lw          $t4, 0x4B54($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4B54);
    // 0x80077F78: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80077F7C: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x80077F80: lh          $t9, 0x0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X0);
    // 0x80077F84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077F88: sh          $t9, 0x4B5C($at)
    MEM_H(0X4B5C, ctx->r1) = ctx->r25;
    // 0x80077F8C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80077F90: lh          $t0, 0x4B5C($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4B5C);
    // 0x80077F94: nop

    // 0x80077F98: bne         $t0, $zero, L_80077FA8
    if (ctx->r8 != 0) {
        // 0x80077F9C: nop
    
            goto L_80077FA8;
    }
    // 0x80077F9C: nop

    // 0x80077FA0: b           L_80078090
    // 0x80077FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80078090;
    // 0x80077FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077FA8:
    // 0x80077FA8: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x80077FAC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80077FB0: lh          $t1, 0x4B5C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4B5C);
    // 0x80077FB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077FB8: andi        $t3, $t1, 0x7F
    ctx->r11 = ctx->r9 & 0X7F;
    // 0x80077FBC: sh          $t3, 0x4B5C($at)
    MEM_H(0X4B5C, ctx->r1) = ctx->r11;
    // 0x80077FC0: lh          $t5, 0x5C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X5C);
    // 0x80077FC4: nop

    // 0x80077FC8: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x80077FCC: sh          $t2, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r10;
    // 0x80077FD0: lh          $t6, 0x5C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5C);
    // 0x80077FD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077FD8: sh          $t6, 0x4B50($at)
    MEM_H(0X4B50, ctx->r1) = ctx->r14;
    // 0x80077FDC: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80077FE0: lh          $t4, 0x4B5C($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4B5C);
    // 0x80077FE4: nop

    // 0x80077FE8: beq         $t4, $zero, L_80077FF8
    if (ctx->r12 == 0) {
        // 0x80077FEC: nop
    
            goto L_80077FF8;
    }
    // 0x80077FEC: nop

    // 0x80077FF0: b           L_80078004
    // 0x80077FF4: nop

        goto L_80078004;
    // 0x80077FF4: nop

L_80077FF8:
    // 0x80077FF8: jal         0x80077B90
    // 0x80077FFC: nop

    func_80077B90(rdram, ctx);
        goto after_2;
    // 0x80077FFC: nop

    after_2:
    // 0x80078000: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
L_80078004:
    // 0x80078004: lh          $t8, 0x5E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5E);
    // 0x80078008: nop

    // 0x8007800C: beq         $t8, $zero, L_80078044
    if (ctx->r24 == 0) {
        // 0x80078010: nop
    
            goto L_80078044;
    }
    // 0x80078010: nop

    // 0x80078014: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80078018: lh          $t7, 0x4B5E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4B5E);
    // 0x8007801C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80078020: nop

    // 0x80078024: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x80078028: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8007802C: lh          $t0, 0x4B60($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4B60);
    // 0x80078030: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80078034: nop

    // 0x80078038: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x8007803C: b           L_80078090
    // 0x80078040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80078090;
    // 0x80078040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80078044:
    // 0x80078044: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80078048: lh          $t3, 0x4B5E($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4B5E);
    // 0x8007804C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80078050: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80078054: sh          $t5, 0x4B5E($at)
    MEM_H(0X4B5E, ctx->r1) = ctx->r13;
    // 0x80078058: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8007805C: lh          $t6, 0x4B5C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4B5C);
    // 0x80078060: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80078064: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80078068: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8007806C: lh          $t8, -0x40D0($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X40D0);
    // 0x80078070: lh          $t2, 0x5C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5C);
    // 0x80078074: nop

    // 0x80078078: addu        $t7, $t2, $t8
    ctx->r15 = ADD32(ctx->r10, ctx->r24);
    // 0x8007807C: sh          $t7, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r15;
    // 0x80078080: b           L_80077F6C
    // 0x80078084: nop

        goto L_80077F6C;
    // 0x80078084: nop

    // 0x80078088: b           L_80078090
    // 0x8007808C: nop

        goto L_80078090;
    // 0x8007808C: nop

L_80078090:
    // 0x80078090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80078094: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80078098: jr          $ra
    // 0x8007809C: nop

    return;
    // 0x8007809C: nop

;}
RECOMP_FUNC void func_800B1FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B1FA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B1FAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B1FB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B1FB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B1FB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B1FBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B1FC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B1FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1FC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B1FCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1FD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B1FD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B1FD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B1FDC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B1FE0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B1FE4: nop

    // 0x800B1FE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B1FEC: nop

    // 0x800B1FF0: bne         $t1, $zero, L_800B2044
    if (ctx->r9 != 0) {
        // 0x800B1FF4: nop
    
            goto L_800B2044;
    }
    // 0x800B1FF4: nop

    // 0x800B1FF8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B1FFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B2000: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B2004: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2008: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B200C: nop

    // 0x800B2010: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B2014: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2018: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B201C: nop

    // 0x800B2020: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B2024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B202C: jal         0x8001BB34
    // 0x800B2030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B2030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B2034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B203C: jal         0x8001BBDC
    // 0x800B2040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800B2040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800B2044:
    // 0x800B2044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B204C: jal         0x8002A8B4
    // 0x800B2050: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B2050: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_2:
    // 0x800B2054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B205C: jal         0x80029C40
    // 0x800B2060: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B2060: nop

    after_3:
    // 0x800B2064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B206C: jal         0x80029D04
    // 0x800B2070: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B2070: nop

    after_4:
    // 0x800B2074: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B2078: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B207C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2080: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B2088: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B208C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B2090: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B2094: jal         0x80029018
    // 0x800B2098: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800B2098: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800B209C: beq         $v0, $zero, L_800B20C4
    if (ctx->r2 == 0) {
        // 0x800B20A0: nop
    
            goto L_800B20C4;
    }
    // 0x800B20A0: nop

    // 0x800B20A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B20A8: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x800B20AC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B20B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B20B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B20B8: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x800B20BC: b           L_800B2240
    // 0x800B20C0: nop

        goto L_800B2240;
    // 0x800B20C0: nop

L_800B20C4:
    // 0x800B20C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B20C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B20CC: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800B20D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B20D4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800B20D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B20DC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B20E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800B20E4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800B20E8: jal         0x800296AC
    // 0x800B20EC: nop

    func_800296AC(rdram, ctx);
        goto after_6;
    // 0x800B20EC: nop

    after_6:
    // 0x800B20F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B20F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B20F8: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x800B20FC: nop

    // 0x800B2100: bne         $t3, $at, L_800B216C
    if (ctx->r11 != ctx->r1) {
        // 0x800B2104: nop
    
            goto L_800B216C;
    }
    // 0x800B2104: nop

    // 0x800B2108: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B210C: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B2110: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800B2114: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800B2118: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B211C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B2120: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B2124: nop

    // 0x800B2128: bc1f        L_800B216C
    if (!c1cs) {
        // 0x800B212C: nop
    
            goto L_800B216C;
    }
    // 0x800B212C: nop

    // 0x800B2130: jal         0x800297DC
    // 0x800B2134: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800B2134: nop

    after_7:
    // 0x800B2138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B213C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2140: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B2144: jal         0x80029824
    // 0x800B2148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800B2148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800B214C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B2150: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2154: nop

    // 0x800B2158: swc1        $f10, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f10.u32l;
    // 0x800B215C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B2160: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2164: nop

    // 0x800B2168: swc1        $f16, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f16.u32l;
L_800B216C:
    // 0x800B216C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2170: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B2174: lh          $t8, 0xB4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB4);
    // 0x800B2178: nop

    // 0x800B217C: bne         $t8, $at, L_800B21E8
    if (ctx->r24 != ctx->r1) {
        // 0x800B2180: nop
    
            goto L_800B21E8;
    }
    // 0x800B2180: nop

    // 0x800B2184: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2188: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B218C: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800B2190: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800B2194: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B2198: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B219C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B21A0: nop

    // 0x800B21A4: bc1f        L_800B21E8
    if (!c1cs) {
        // 0x800B21A8: nop
    
            goto L_800B21E8;
    }
    // 0x800B21A8: nop

    // 0x800B21AC: jal         0x800297DC
    // 0x800B21B0: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800B21B0: nop

    after_9:
    // 0x800B21B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B21B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B21BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B21C0: jal         0x80029824
    // 0x800B21C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800B21C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800B21C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B21CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B21D0: nop

    // 0x800B21D4: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
    // 0x800B21D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B21DC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B21E0: nop

    // 0x800B21E4: swc1        $f16, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f16.u32l;
L_800B21E8:
    // 0x800B21E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B21EC: nop

    // 0x800B21F0: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B21F4: nop

    // 0x800B21F8: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
    // 0x800B21FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2200: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2204: jal         0x8002A560
    // 0x800B2208: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_11;
    // 0x800B2208: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_11:
    // 0x800B220C: bne         $v0, $zero, L_800B2238
    if (ctx->r2 != 0) {
        // 0x800B2210: nop
    
            goto L_800B2238;
    }
    // 0x800B2210: nop

    // 0x800B2214: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2218: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800B221C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B2220: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2224: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800B2228: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x800B222C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B2230: nop

    // 0x800B2234: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800B2238:
    // 0x800B2238: b           L_800B2240
    // 0x800B223C: nop

        goto L_800B2240;
    // 0x800B223C: nop

L_800B2240:
    // 0x800B2240: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B2244: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B2248: jr          $ra
    // 0x800B224C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B224C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800AEB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEB7C: jr          $ra
    // 0x800AEB80: nop

    return;
    // 0x800AEB80: nop

    // 0x800AEB84: jr          $ra
    // 0x800AEB88: nop

    return;
    // 0x800AEB88: nop

;}
RECOMP_FUNC void func_800B3640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3640: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B3644: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800B3648: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B364C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B3650: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B3654: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B3658: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B365C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B3660: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B3664: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B3668: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B366C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B3670: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B3674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B3678: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B367C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B3680: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B3684: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B3688: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B368C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B3690: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B3694: jr          $ra
    // 0x800B3698: nop

    return;
    // 0x800B3698: nop

    // 0x800B369C: jr          $ra
    // 0x800B36A0: nop

    return;
    // 0x800B36A0: nop

;}
RECOMP_FUNC void func_800EFE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EFE20: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800EFE24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EFE28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EFE2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EFE30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EFE34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFE38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EFE3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFE40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EFE44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EFE48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EFE4C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800EFE50: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800EFE54: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800EFE58: nop

    // 0x800EFE5C: bne         $t0, $zero, L_800EFEBC
    if (ctx->r8 != 0) {
        // 0x800EFE60: nop
    
            goto L_800EFEBC;
    }
    // 0x800EFE60: nop

    // 0x800EFE64: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800EFE68: nop

    // 0x800EFE6C: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800EFE70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EFE74: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800EFE78: nop

    // 0x800EFE7C: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x800EFE80: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800EFE84: nop

    // 0x800EFE88: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800EFE8C: nop

    // 0x800EFE90: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x800EFE94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EFE98: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800EFE9C: nop

    // 0x800EFEA0: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800EFEA4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800EFEA8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800EFEAC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800EFEB0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800EFEB4: nop

    // 0x800EFEB8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800EFEBC:
    // 0x800EFEBC: b           L_800EFEC4
    // 0x800EFEC0: nop

        goto L_800EFEC4;
    // 0x800EFEC0: nop

L_800EFEC4:
    // 0x800EFEC4: jr          $ra
    // 0x800EFEC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800EFEC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B34AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B34B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B34B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800B34B8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800B34BC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800B34C0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B34C4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B34C8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800B34CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B34D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B34D4: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B34D8: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B34DC: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800B34E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B34E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B34E8: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B34EC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800B34F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B34F4: addiu       $a1, $a1, 0x39C4
    ctx->r5 = ADD32(ctx->r5, 0X39C4);
    // 0x800B34F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B34FC: jal         0x80027464
    // 0x800B3500: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B3500: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800B3504: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B3508: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800B350C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B3510: beq         $t7, $at, L_800B3608
    if (ctx->r15 == ctx->r1) {
        // 0x800B3514: nop
    
            goto L_800B3608;
    }
    // 0x800B3514: nop

    // 0x800B3518: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x800B351C: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x800B3520: jal         0x80026F10
    // 0x800B3524: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800B3524: nop

    after_1:
    // 0x800B3528: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800B352C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800B3530: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B3534: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B3538: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B353C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B3540: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B3544: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800B3548: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800B354C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x800B3550: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800B3554: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3558: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B355C: nop

    // 0x800B3560: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x800B3564: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800B3568: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B356C: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800B3570: nop

    // 0x800B3574: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800B3578: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800B357C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B3580: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B3584: nop

    // 0x800B3588: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800B358C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B3590: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B3594: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B3598: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B359C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x800B35A0: sh          $t0, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r8;
    // 0x800B35A4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B35A8: nop

    // 0x800B35AC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B35B0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B35B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800B35B8: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x800B35BC: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B35C0: jal         0x80029C40
    // 0x800B35C4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B35C4: nop

    after_2:
    // 0x800B35C8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B35CC: jal         0x80029D04
    // 0x800B35D0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B35D0: nop

    after_3:
    // 0x800B35D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B35D8: lwc1        $f8, 0x4B88($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4B88);
    // 0x800B35DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B35E0: nop

    // 0x800B35E4: swc1        $f8, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f8.u32l;
    // 0x800B35E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B35EC: nop

    // 0x800B35F0: lwc1        $f20, 0x14($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800B35F4: nop

    // 0x800B35F8: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x800B35FC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B3600: nop

    // 0x800B3604: swc1        $f20, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f20.u32l;
L_800B3608:
    // 0x800B3608: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x800B360C: b           L_800B361C
    // 0x800B3610: nop

        goto L_800B361C;
    // 0x800B3610: nop

    // 0x800B3614: b           L_800B361C
    // 0x800B3618: nop

        goto L_800B361C;
    // 0x800B3618: nop

L_800B361C:
    // 0x800B361C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B3620: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B3624: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B3628: jr          $ra
    // 0x800B362C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B362C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800ECC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ECC54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800ECC58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ECC5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ECC60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ECC64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ECC68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ECC6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECC70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ECC74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECC78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ECC7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ECC80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ECC84: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800ECC88: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECC8C: nop

    // 0x800ECC90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ECC94: nop

    // 0x800ECC98: bne         $t1, $zero, L_800ECE18
    if (ctx->r9 != 0) {
        // 0x800ECC9C: nop
    
            goto L_800ECE18;
    }
    // 0x800ECC9C: nop

    // 0x800ECCA0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECCA4: nop

    // 0x800ECCA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800ECCAC: nop

    // 0x800ECCB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800ECCB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800ECCB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECCBC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800ECCC0: addiu       $t5, $t5, -0x65A0
    ctx->r13 = ADD32(ctx->r13, -0X65A0);
    // 0x800ECCC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECCC8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800ECCCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ECCD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800ECCD4: jal         0x8001C0EC
    // 0x800ECCD8: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ECCD8: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_0:
    // 0x800ECCDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ECCE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ECCE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECCE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECCEC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800ECCF0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800ECCF4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECCF8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800ECCFC: jal         0x800295C0
    // 0x800ECD00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x800ECD00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800ECD04: beq         $v0, $zero, L_800ECD1C
    if (ctx->r2 == 0) {
        // 0x800ECD08: nop
    
            goto L_800ECD1C;
    }
    // 0x800ECD08: nop

    // 0x800ECD0C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800ECD10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECD14: b           L_800ECD2C
    // 0x800ECD18: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
        goto L_800ECD2C;
    // 0x800ECD18: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_800ECD1C:
    // 0x800ECD1C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800ECD20: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECD24: nop

    // 0x800ECD28: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
L_800ECD2C:
    // 0x800ECD2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECD30: nop

    // 0x800ECD34: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800ECD38: nop

    // 0x800ECD3C: bne         $t9, $zero, L_800ECE18
    if (ctx->r25 != 0) {
        // 0x800ECD40: nop
    
            goto L_800ECE18;
    }
    // 0x800ECD40: nop

    // 0x800ECD44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECD48: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x800ECD4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800ECD50: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800ECD54: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800ECD58: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800ECD5C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ECD60: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800ECD64: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800ECD68: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800ECD6C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800ECD70: addiu       $a1, $a1, 0x44EC
    ctx->r5 = ADD32(ctx->r5, 0X44EC);
    // 0x800ECD74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800ECD78: jal         0x80027464
    // 0x800ECD7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x800ECD7C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800ECD80: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800ECD84: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800ECD88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800ECD8C: beq         $t1, $at, L_800ECE18
    if (ctx->r9 == ctx->r1) {
        // 0x800ECD90: nop
    
            goto L_800ECE18;
    }
    // 0x800ECD90: nop

    // 0x800ECD94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECD98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECD9C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800ECDA0: jal         0x80026F10
    // 0x800ECDA4: nop

    func_80026F10(rdram, ctx);
        goto after_3;
    // 0x800ECDA4: nop

    after_3:
    // 0x800ECDA8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800ECDAC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800ECDB0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800ECDB4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800ECDB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ECDBC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800ECDC0: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800ECDC4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ECDC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ECDCC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ECDD0: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x800ECDD4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800ECDD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ECDDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ECDE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECDE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ECDE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ECDEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ECDF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800ECDF4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800ECDF8: sh          $t5, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r13;
    // 0x800ECDFC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800ECE00: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE04: nop

    // 0x800ECE08: sh          $t8, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r24;
    // 0x800ECE0C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE10: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800ECE14: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_800ECE18:
    // 0x800ECE18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ECE1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ECE20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECE24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECE28: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800ECE2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800ECE30: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ECE34: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800ECE38: jal         0x800295C0
    // 0x800ECE3C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800ECE3C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800ECE40: beq         $v0, $zero, L_800ECE58
    if (ctx->r2 == 0) {
        // 0x800ECE44: nop
    
            goto L_800ECE58;
    }
    // 0x800ECE44: nop

    // 0x800ECE48: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800ECE4C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE50: b           L_800ECE68
    // 0x800ECE54: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
        goto L_800ECE68;
    // 0x800ECE54: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
L_800ECE58:
    // 0x800ECE58: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800ECE5C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE60: nop

    // 0x800ECE64: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
L_800ECE68:
    // 0x800ECE68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ECE6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ECE70: jal         0x8001B4AC
    // 0x800ECE74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x800ECE74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800ECE78: beq         $v0, $zero, L_800ECE98
    if (ctx->r2 == 0) {
        // 0x800ECE7C: nop
    
            goto L_800ECE98;
    }
    // 0x800ECE7C: nop

    // 0x800ECE80: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE84: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800ECE88: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x800ECE8C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ECE90: nop

    // 0x800ECE94: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800ECE98:
    // 0x800ECE98: b           L_800ECEA0
    // 0x800ECE9C: nop

        goto L_800ECEA0;
    // 0x800ECE9C: nop

L_800ECEA0:
    // 0x800ECEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ECEA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800ECEA8: jr          $ra
    // 0x800ECEAC: nop

    return;
    // 0x800ECEAC: nop

;}
RECOMP_FUNC void func_800BFAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFAD0: jr          $ra
    // 0x800BFAD4: nop

    return;
    // 0x800BFAD4: nop

    // 0x800BFAD8: jr          $ra
    // 0x800BFADC: nop

    return;
    // 0x800BFADC: nop

;}
RECOMP_FUNC void func_800BFAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFAE0: jr          $ra
    // 0x800BFAE4: nop

    return;
    // 0x800BFAE4: nop

    // 0x800BFAE8: jr          $ra
    // 0x800BFAEC: nop

    return;
    // 0x800BFAEC: nop

;}
RECOMP_FUNC void func_80085424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80085428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008542C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80085430: lw          $t6, -0x1DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DC8);
    // 0x80085434: nop

    // 0x80085438: bne         $t6, $zero, L_8008560C
    if (ctx->r14 != 0) {
        // 0x8008543C: nop
    
            goto L_8008560C;
    }
    // 0x8008543C: nop

    // 0x80085440: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80085444: lh          $t7, 0x5270($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5270);
    // 0x80085448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008544C: beq         $t7, $at, L_8008556C
    if (ctx->r15 == ctx->r1) {
        // 0x80085450: nop
    
            goto L_8008556C;
    }
    // 0x80085450: nop

    // 0x80085454: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80085458: lh          $t8, 0x5270($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X5270);
    // 0x8008545C: nop

    // 0x80085460: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80085464: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80085468: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008546C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80085470: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80085474: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80085478: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008547C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80085480: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80085484: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80085488: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8008548C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80085490: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085494: lwc1        $f6, 0x5288($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5288);
    // 0x80085498: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8008549C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800854A0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x800854A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800854A8: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x800854AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800854B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800854B4: lwc1        $f16, -0x3D70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3D70);
    // 0x800854B8: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800854BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800854C0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800854C4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800854C8: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x800854CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800854D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800854D4: lwc1        $f6, -0x3568($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3568);
    // 0x800854D8: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800854DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800854E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800854E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800854E8: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x800854EC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800854F0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800854F4: nop

    // 0x800854F8: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800854FC: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80085500: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80085504: jal         0x800843CC
    // 0x80085508: nop

    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80085508: nop

    after_0:
    // 0x8008550C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80085510: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80085514: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80085518: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8008551C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80085520: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80085524: lw          $t3, 0x7770($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7770);
    // 0x80085528: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008552C: nop

    // 0x80085530: bne         $t3, $t4, L_80085564
    if (ctx->r11 != ctx->r12) {
        // 0x80085534: nop
    
            goto L_80085564;
    }
    // 0x80085534: nop

    // 0x80085538: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8008553C: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80085540: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085544: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80085548: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008554C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80085550: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80085554: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80085558: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8008555C: nop

    // 0x80085560: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_80085564:
    // 0x80085564: b           L_80085604
    // 0x80085568: nop

        goto L_80085604;
    // 0x80085568: nop

L_8008556C:
    // 0x8008556C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80085570: lh          $t9, -0x1D58($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D58);
    // 0x80085574: nop

    // 0x80085578: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008557C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80085580: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80085584: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80085588: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008558C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80085590: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085594: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80085598: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008559C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800855A0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800855A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800855A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800855AC: lwc1        $f18, 0x5288($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5288);
    // 0x800855B0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800855B4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800855B8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800855BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800855C0: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x800855C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800855C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800855CC: lwc1        $f8, -0x3D70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D70);
    // 0x800855D0: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800855D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800855D8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800855DC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800855E0: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800855E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800855E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800855EC: lwc1        $f18, -0x3568($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3568);
    // 0x800855F0: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800855F4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800855F8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800855FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80085600: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
L_80085604:
    // 0x80085604: b           L_80085798
    // 0x80085608: nop

        goto L_80085798;
    // 0x80085608: nop

L_8008560C:
    // 0x8008560C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80085610: lw          $t0, -0x1DC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1DC0);
    // 0x80085614: nop

    // 0x80085618: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x8008561C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80085620: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80085624: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80085628: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008562C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80085630: lh          $t4, 0x79B0($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X79B0);
    // 0x80085634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80085638: beq         $t4, $at, L_80085798
    if (ctx->r12 == ctx->r1) {
        // 0x8008563C: nop
    
            goto L_80085798;
    }
    // 0x8008563C: nop

    // 0x80085640: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085644: lw          $t5, -0x1DC0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1DC0);
    // 0x80085648: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008564C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80085650: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80085654: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80085658: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008565C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80085660: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80085664: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80085668: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8008566C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80085670: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80085674: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80085678: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008567C: lh          $t1, 0x79B0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X79B0);
    // 0x80085680: nop

    // 0x80085684: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80085688: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008568C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80085690: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80085694: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80085698: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008569C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800856A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800856A4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800856A8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800856AC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800856B0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800856B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800856B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800856BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800856C0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800856C4: lwc1        $f6, 0x79D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79D0);
    // 0x800856C8: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800856CC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800856D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800856D4: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x800856D8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800856DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800856E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800856E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800856E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800856EC: lwc1        $f16, 0x79E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X79E8);
    // 0x800856F0: lwc1        $f18, 0x4($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800856F4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800856F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800856FC: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x80085700: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80085704: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80085708: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008570C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80085710: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80085714: lwc1        $f6, 0x7A00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A00);
    // 0x80085718: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8008571C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80085720: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80085724: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x80085728: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008572C: nop

    // 0x80085730: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80085734: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80085738: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x8008573C: jal         0x80078168
    // 0x80085740: nop

    func_80078168(rdram, ctx);
        goto after_1;
    // 0x80085740: nop

    after_1:
    // 0x80085744: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80085748: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x8008574C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80085750: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80085754: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80085758: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008575C: lw          $t2, 0x7770($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7770);
    // 0x80085760: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80085764: nop

    // 0x80085768: bne         $t2, $t3, L_80085798
    if (ctx->r10 != ctx->r11) {
        // 0x8008576C: nop
    
            goto L_80085798;
    }
    // 0x8008576C: nop

    // 0x80085770: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80085774: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x80085778: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008577C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80085780: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80085784: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80085788: lwc1        $f16, 0x7760($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8008578C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80085790: nop

    // 0x80085794: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
L_80085798:
    // 0x80085798: b           L_800857A0
    // 0x8008579C: nop

        goto L_800857A0;
    // 0x8008579C: nop

L_800857A0:
    // 0x800857A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800857A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800857A8: jr          $ra
    // 0x800857AC: nop

    return;
    // 0x800857AC: nop

;}
RECOMP_FUNC void func_800D2870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D2874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2878: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D287C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2880: jal         0x8002B0E4
    // 0x800D2884: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D2884: nop

    after_0:
    // 0x800D2888: b           L_800D2890
    // 0x800D288C: nop

        goto L_800D2890;
    // 0x800D288C: nop

L_800D2890:
    // 0x800D2890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2898: jr          $ra
    // 0x800D289C: nop

    return;
    // 0x800D289C: nop

;}
RECOMP_FUNC void func_8009FCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FCBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009FCC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FCC4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009FCC8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009FCCC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009FCD0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009FCD4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009FCD8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009FCDC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009FCE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009FCE4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009FCE8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009FCEC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009FCF0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009FCF4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009FCF8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009FCFC: addiu       $a1, $a1, 0x36E8
    ctx->r5 = ADD32(ctx->r5, 0X36E8);
    // 0x8009FD00: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009FD04: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009FD08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009FD0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009FD10: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009FD14: jal         0x80027464
    // 0x8009FD18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009FD18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009FD1C: b           L_8009FD24
    // 0x8009FD20: nop

        goto L_8009FD24;
    // 0x8009FD20: nop

L_8009FD24:
    // 0x8009FD24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FD28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009FD2C: jr          $ra
    // 0x8009FD30: nop

    return;
    // 0x8009FD30: nop

;}
RECOMP_FUNC void func_80090848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090848: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009084C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090850: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090854: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090858: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009085C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090860: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090864: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090868: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009086C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090870: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090874: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090878: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009087C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090880: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090884: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090888: addiu       $a1, $a1, 0x1444
    ctx->r5 = ADD32(ctx->r5, 0X1444);
    // 0x8009088C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090890: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090898: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009089C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800908A0: jal         0x80027464
    // 0x800908A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800908A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800908A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800908AC: b           L_800908B4
    // 0x800908B0: nop

        goto L_800908B4;
    // 0x800908B0: nop

L_800908B4:
    // 0x800908B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800908B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800908BC: jr          $ra
    // 0x800908C0: nop

    return;
    // 0x800908C0: nop

;}
RECOMP_FUNC void func_800E589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E589C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E58A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E58A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E58A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E58AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E58B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E58B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E58B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E58BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E58C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E58C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E58C8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E58CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E58D0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E58D4: nop

    // 0x800E58D8: bne         $t0, $zero, L_800E5924
    if (ctx->r8 != 0) {
        // 0x800E58DC: nop
    
            goto L_800E5924;
    }
    // 0x800E58DC: nop

    // 0x800E58E0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E58E4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800E58E8: lh          $t2, 0x106($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X106);
    // 0x800E58EC: nop

    // 0x800E58F0: beq         $t2, $at, L_800E5904
    if (ctx->r10 == ctx->r1) {
        // 0x800E58F4: nop
    
            goto L_800E5904;
    }
    // 0x800E58F4: nop

    // 0x800E58F8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800E58FC: bne         $t2, $at, L_800E591C
    if (ctx->r10 != ctx->r1) {
        // 0x800E5900: nop
    
            goto L_800E591C;
    }
    // 0x800E5900: nop

L_800E5904:
    // 0x800E5904: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E5908: nop

    // 0x800E590C: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x800E5910: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E5914: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800E5918: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800E591C:
    // 0x800E591C: b           L_800E5930
    // 0x800E5920: nop

        goto L_800E5930;
    // 0x800E5920: nop

L_800E5924:
    // 0x800E5924: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E5928: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800E592C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800E5930:
    // 0x800E5930: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E5934: nop

    // 0x800E5938: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E593C: b           L_800E5944
    // 0x800E5940: nop

        goto L_800E5944;
    // 0x800E5940: nop

L_800E5944:
    // 0x800E5944: jr          $ra
    // 0x800E5948: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E5948: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80091B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091B34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091B3C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091B40: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091B44: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091B48: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091B4C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091B50: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091B54: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091B58: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091B5C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091B60: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091B64: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091B68: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091B6C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091B70: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091B74: addiu       $a1, $a1, 0x15F4
    ctx->r5 = ADD32(ctx->r5, 0X15F4);
    // 0x80091B78: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091B7C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091B80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091B84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091B88: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091B8C: jal         0x80027464
    // 0x80091B90: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091B90: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091B94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091B98: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091B9C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091BA0: addiu       $a3, $a3, 0x2ADC
    ctx->r7 = ADD32(ctx->r7, 0X2ADC);
    // 0x80091BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091BA8: jal         0x8001ABF4
    // 0x80091BAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091BAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80091BB0: b           L_80091BB8
    // 0x80091BB4: nop

        goto L_80091BB8;
    // 0x80091BB4: nop

L_80091BB8:
    // 0x80091BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091BC0: jr          $ra
    // 0x80091BC4: nop

    return;
    // 0x80091BC4: nop

;}
RECOMP_FUNC void func_80090940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090948: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009094C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090950: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090954: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090958: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009095C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090960: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090964: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090968: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009096C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090970: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090974: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090978: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009097C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090980: addiu       $a1, $a1, 0x145C
    ctx->r5 = ADD32(ctx->r5, 0X145C);
    // 0x80090984: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090988: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009098C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090990: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090994: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090998: jal         0x80027464
    // 0x8009099C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009099C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800909A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800909A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800909A8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800909AC: addiu       $a3, $a3, 0x2370
    ctx->r7 = ADD32(ctx->r7, 0X2370);
    // 0x800909B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800909B4: jal         0x8001ABF4
    // 0x800909B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800909B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800909BC: b           L_800909C4
    // 0x800909C0: nop

        goto L_800909C4;
    // 0x800909C0: nop

L_800909C4:
    // 0x800909C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800909C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800909CC: jr          $ra
    // 0x800909D0: nop

    return;
    // 0x800909D0: nop

;}
RECOMP_FUNC void stub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB6AC: jr          $ra
    // 0x800BB6B0: nop

    return;
    // 0x800BB6B0: nop

    // 0x800BB6B4: jr          $ra
    // 0x800BB6B8: nop

    return;
    // 0x800BB6B8: nop

;}
RECOMP_FUNC void func_8009F0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F0B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009F0B4: lbu         $t6, 0x132($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X132);
    // 0x8009F0B8: nop

    // 0x8009F0BC: bne         $t6, $zero, L_8009F0FC
    if (ctx->r14 != 0) {
        // 0x8009F0C0: nop
    
            goto L_8009F0FC;
    }
    // 0x8009F0C0: nop

    // 0x8009F0C4: lbu         $t7, 0x132($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X132);
    // 0x8009F0C8: nop

    // 0x8009F0CC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8009F0D0: sb          $t8, 0x132($a0)
    MEM_B(0X132, ctx->r4) = ctx->r24;
    // 0x8009F0D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8009F0D8: sb          $t9, 0x102($a0)
    MEM_B(0X102, ctx->r4) = ctx->r25;
    // 0x8009F0DC: sh          $zero, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = 0;
    // 0x8009F0E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F0E4: nop

    // 0x8009F0E8: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x8009F0EC: lwc1        $f12, 0x2C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8009F0F0: nop

    // 0x8009F0F4: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x8009F0F8: swc1        $f12, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f12.u32l;
L_8009F0FC:
    // 0x8009F0FC: lh          $t0, 0xA6($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XA6);
    // 0x8009F100: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8009F104: bne         $t0, $at, L_8009F11C
    if (ctx->r8 != ctx->r1) {
        // 0x8009F108: nop
    
            goto L_8009F11C;
    }
    // 0x8009F108: nop

    // 0x8009F10C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8009F110: sh          $t1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r9;
    // 0x8009F114: b           L_8009F12C
    // 0x8009F118: sb          $zero, 0x132($a0)
    MEM_B(0X132, ctx->r4) = 0;
        goto L_8009F12C;
    // 0x8009F118: sb          $zero, 0x132($a0)
    MEM_B(0X132, ctx->r4) = 0;
L_8009F11C:
    // 0x8009F11C: lh          $t2, 0xA6($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XA6);
    // 0x8009F120: nop

    // 0x8009F124: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8009F128: sh          $t3, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r11;
L_8009F12C:
    // 0x8009F12C: b           L_8009F134
    // 0x8009F130: nop

        goto L_8009F134;
    // 0x8009F130: nop

L_8009F134:
    // 0x8009F134: jr          $ra
    // 0x8009F138: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8009F138: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DCE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCE2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DCE30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DCE34: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DCE38: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DCE3C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DCE40: lh          $t0, 0x6($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X6);
    // 0x800DCE44: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DCE48: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800DCE4C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DCE50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DCE54: addiu       $t9, $t8, -0x5
    ctx->r25 = ADD32(ctx->r24, -0X5);
    // 0x800DCE58: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800DCE5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DCE60: lh          $t1, 0x8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X8);
    // 0x800DCE64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DCE68: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DCE6C: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800DCE70: addiu       $a1, $a1, 0x4348
    ctx->r5 = ADD32(ctx->r5, 0X4348);
    // 0x800DCE74: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DCE78: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DCE7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DCE80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DCE84: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DCE88: jal         0x80027464
    // 0x800DCE8C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DCE8C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DCE90: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800DCE94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DCE98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DCE9C: beq         $t2, $at, L_800DCECC
    if (ctx->r10 == ctx->r1) {
        // 0x800DCEA0: nop
    
            goto L_800DCECC;
    }
    // 0x800DCEA0: nop

    // 0x800DCEA4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DCEA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DCEAC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800DCEB0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DCEB4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800DCEB8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DCEBC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800DCEC0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800DCEC4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800DCEC8: sb          $t3, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r11;
L_800DCECC:
    // 0x800DCECC: b           L_800DCED4
    // 0x800DCED0: nop

        goto L_800DCED4;
    // 0x800DCED0: nop

L_800DCED4:
    // 0x800DCED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCED8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DCEDC: jr          $ra
    // 0x800DCEE0: nop

    return;
    // 0x800DCEE0: nop

;}
RECOMP_FUNC void func_800EB9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB9A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EB9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EB9AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EB9B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EB9B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EB9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EB9BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB9C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EB9C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB9C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EB9CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EB9D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EB9D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EB9D8: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_800EB9DC:
    // 0x800EB9DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB9E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB9E4: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x800EB9E8: jal         0x800281A4
    // 0x800EB9EC: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800EB9EC: nop

    after_0:
    // 0x800EB9F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800EB9F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EB9F8: jal         0x8002B114
    // 0x800EB9FC: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x800EB9FC: nop

    after_1:
    // 0x800EBA00: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x800EBA04: nop

    // 0x800EBA08: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800EBA0C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800EBA10: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800EBA14: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800EBA18: bne         $at, $zero, L_800EB9DC
    if (ctx->r1 != 0) {
        // 0x800EBA1C: sh          $t1, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r9;
            goto L_800EB9DC;
    }
    // 0x800EBA1C: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x800EBA20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBA24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBA28: jal         0x8002B0E4
    // 0x800EBA2C: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800EBA2C: nop

    after_2:
    // 0x800EBA30: b           L_800EBA38
    // 0x800EBA34: nop

        goto L_800EBA38;
    // 0x800EBA34: nop

L_800EBA38:
    // 0x800EBA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBA3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EBA40: jr          $ra
    // 0x800EBA44: nop

    return;
    // 0x800EBA44: nop

;}
RECOMP_FUNC void func_80092218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009221C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092220: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092224: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092228: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009222C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092230: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092234: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092238: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009223C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092240: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092244: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092248: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009224C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092250: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092254: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092258: addiu       $a1, $a1, 0x1684
    ctx->r5 = ADD32(ctx->r5, 0X1684);
    // 0x8009225C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092260: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092268: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009226C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092270: jal         0x80027464
    // 0x80092274: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092274: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092278: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009227C: b           L_80092284
    // 0x80092280: nop

        goto L_80092284;
    // 0x80092280: nop

L_80092284:
    // 0x80092284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009228C: jr          $ra
    // 0x80092290: nop

    return;
    // 0x80092290: nop

;}
RECOMP_FUNC void func_800A44E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A44E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A44EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A44F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A44F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A44F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A44FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A4500: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4504: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4508: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A450C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A4510: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A4514: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4518: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A451C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A4520: nop

    // 0x800A4524: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A4528: nop

    // 0x800A452C: bne         $t1, $zero, L_800A4594
    if (ctx->r9 != 0) {
        // 0x800A4530: nop
    
            goto L_800A4594;
    }
    // 0x800A4530: nop

    // 0x800A4534: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A4538: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A453C: nop

    // 0x800A4540: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x800A4544: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A4548: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A454C: nop

    // 0x800A4550: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x800A4554: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A4558: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A455C: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800A4560: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A4564: nop

    // 0x800A4568: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800A456C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4570: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4574: jal         0x80029D04
    // 0x800A4578: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x800A4578: nop

    after_0:
    // 0x800A457C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4584: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800A4588: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x800A458C: jal         0x80029EF8
    // 0x800A4590: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800A4590: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
L_800A4594:
    // 0x800A4594: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4598: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A459C: jal         0x80029C40
    // 0x800A45A0: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A45A0: nop

    after_2:
    // 0x800A45A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A45A8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A45AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A45B0: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A45B4: jal         0x80015538
    // 0x800A45B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A45B8: nop

    after_3:
    // 0x800A45BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A45C0: nop

    // 0x800A45C4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A45C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A45CC: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x800A45D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A45D4: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800A45D8: jal         0x80015538
    // 0x800A45DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800A45DC: nop

    after_4:
    // 0x800A45E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A45E4: nop

    // 0x800A45E8: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x800A45EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A45F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A45F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A45F8: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800A45FC: nop

    // 0x800A4600: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800A4604: nop

    // 0x800A4608: bc1f        L_800A4638
    if (!c1cs) {
        // 0x800A460C: nop
    
            goto L_800A4638;
    }
    // 0x800A460C: nop

    // 0x800A4610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4618: jal         0x8001BB34
    // 0x800A461C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800A461C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A4620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4628: jal         0x8002B0E4
    // 0x800A462C: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800A462C: nop

    after_6:
    // 0x800A4630: b           L_800A46D4
    // 0x800A4634: nop

        goto L_800A46D4;
    // 0x800A4634: nop

L_800A4638:
    // 0x800A4638: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A463C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4640: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4644: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A4648: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A464C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A4650: jal         0x80029F58
    // 0x800A4654: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800A4654: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800A4658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A465C: bne         $v0, $at, L_800A468C
    if (ctx->r2 != ctx->r1) {
        // 0x800A4660: nop
    
            goto L_800A468C;
    }
    // 0x800A4660: nop

    // 0x800A4664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A466C: jal         0x8001BB34
    // 0x800A4670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x800A4670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800A4674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A467C: jal         0x8002B0E4
    // 0x800A4680: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800A4680: nop

    after_9:
    // 0x800A4684: b           L_800A46D4
    // 0x800A4688: nop

        goto L_800A46D4;
    // 0x800A4688: nop

L_800A468C:
    // 0x800A468C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4694: jal         0x80028FA0
    // 0x800A4698: nop

    func_80028FA0(rdram, ctx);
        goto after_10;
    // 0x800A4698: nop

    after_10:
    // 0x800A469C: beq         $v0, $zero, L_800A46CC
    if (ctx->r2 == 0) {
        // 0x800A46A0: nop
    
            goto L_800A46CC;
    }
    // 0x800A46A0: nop

    // 0x800A46A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A46A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A46AC: jal         0x8001BB34
    // 0x800A46B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x800A46B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800A46B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A46B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A46BC: jal         0x8002B0E4
    // 0x800A46C0: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x800A46C0: nop

    after_12:
    // 0x800A46C4: b           L_800A46D4
    // 0x800A46C8: nop

        goto L_800A46D4;
    // 0x800A46C8: nop

L_800A46CC:
    // 0x800A46CC: b           L_800A46D4
    // 0x800A46D0: nop

        goto L_800A46D4;
    // 0x800A46D0: nop

L_800A46D4:
    // 0x800A46D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A46D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A46DC: jr          $ra
    // 0x800A46E0: nop

    return;
    // 0x800A46E0: nop

;}
RECOMP_FUNC void func_800D28A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D28A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D28A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D28A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D28AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D28B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D28B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D28B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D28BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D28C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D28C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D28C8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D28CC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800D28D0: nop

    // 0x800D28D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800D28D8: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800D28DC: beq         $at, $zero, L_800D2960
    if (ctx->r1 == 0) {
        // 0x800D28E0: nop
    
            goto L_800D2960;
    }
    // 0x800D28E0: nop

    // 0x800D28E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D28E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D28EC: addu        $at, $at, $t9
    gpr jr_addend_800D28F8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D28F0: lw          $t9, 0x5090($at)
    ctx->r25 = ADD32(ctx->r1, 0X5090);
    // 0x800D28F4: nop

    // 0x800D28F8: jr          $t9
    // 0x800D28FC: nop

    switch (jr_addend_800D28F8 >> 2) {
        case 0: goto L_800D2900; break;
        case 1: goto L_800D2910; break;
        case 2: goto L_800D2920; break;
        case 3: goto L_800D2930; break;
        case 4: goto L_800D2940; break;
        case 5: goto L_800D2950; break;
        default: switch_error(__func__, 0x800D28F8, 0x80115090);
    }
    // 0x800D28FC: nop

L_800D2900:
    // 0x800D2900: jal         0x800D20E4
    // 0x800D2904: nop

    func_800D20E4(rdram, ctx);
        goto after_0;
    // 0x800D2904: nop

    after_0:
    // 0x800D2908: b           L_800D2968
    // 0x800D290C: nop

        goto L_800D2968;
    // 0x800D290C: nop

L_800D2910:
    // 0x800D2910: jal         0x800D2208
    // 0x800D2914: nop

    func_800D2208(rdram, ctx);
        goto after_1;
    // 0x800D2914: nop

    after_1:
    // 0x800D2918: b           L_800D2968
    // 0x800D291C: nop

        goto L_800D2968;
    // 0x800D291C: nop

L_800D2920:
    // 0x800D2920: jal         0x800D2334
    // 0x800D2924: nop

    func_800D2334(rdram, ctx);
        goto after_2;
    // 0x800D2924: nop

    after_2:
    // 0x800D2928: b           L_800D2968
    // 0x800D292C: nop

        goto L_800D2968;
    // 0x800D292C: nop

L_800D2930:
    // 0x800D2930: jal         0x800D247C
    // 0x800D2934: nop

    func_800D247C(rdram, ctx);
        goto after_3;
    // 0x800D2934: nop

    after_3:
    // 0x800D2938: b           L_800D2968
    // 0x800D293C: nop

        goto L_800D2968;
    // 0x800D293C: nop

L_800D2940:
    // 0x800D2940: jal         0x800D26A0
    // 0x800D2944: nop

    func_800D26A0(rdram, ctx);
        goto after_4;
    // 0x800D2944: nop

    after_4:
    // 0x800D2948: b           L_800D2968
    // 0x800D294C: nop

        goto L_800D2968;
    // 0x800D294C: nop

L_800D2950:
    // 0x800D2950: jal         0x800D2870
    // 0x800D2954: nop

    func_800D2870(rdram, ctx);
        goto after_5;
    // 0x800D2954: nop

    after_5:
    // 0x800D2958: b           L_800D2968
    // 0x800D295C: nop

        goto L_800D2968;
    // 0x800D295C: nop

L_800D2960:
    // 0x800D2960: b           L_800D2968
    // 0x800D2964: nop

        goto L_800D2968;
    // 0x800D2964: nop

L_800D2968:
    // 0x800D2968: b           L_800D2970
    // 0x800D296C: nop

        goto L_800D2970;
    // 0x800D296C: nop

L_800D2970:
    // 0x800D2970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D2978: jr          $ra
    // 0x800D297C: nop

    return;
    // 0x800D297C: nop

;}
RECOMP_FUNC void func_8006B5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B600: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B604: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B608: nop

    // 0x8006B60C: bne         $t6, $zero, L_8006B634
    if (ctx->r14 != 0) {
        // 0x8006B610: nop
    
            goto L_8006B634;
    }
    // 0x8006B610: nop

    // 0x8006B614: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B618: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B61C: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B624: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x8006B628: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B62C: jal         0x80017BEC
    // 0x8006B630: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B630: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_8006B634:
    // 0x8006B634: b           L_8006B63C
    // 0x8006B638: nop

        goto L_8006B63C;
    // 0x8006B638: nop

L_8006B63C:
    // 0x8006B63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B644: jr          $ra
    // 0x8006B648: nop

    return;
    // 0x8006B648: nop

;}
RECOMP_FUNC void func_800E764C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E764C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7658: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E765C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7660: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7668: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E766C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7670: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7674: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7678: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E767C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E7680: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7684: nop

    // 0x800E7688: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E768C: nop

    // 0x800E7690: bne         $t1, $zero, L_800E7744
    if (ctx->r9 != 0) {
        // 0x800E7694: nop
    
            goto L_800E7744;
    }
    // 0x800E7694: nop

    // 0x800E7698: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E769C: nop

    // 0x800E76A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E76A4: nop

    // 0x800E76A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E76AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E76B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E76B4: nop

    // 0x800E76B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E76BC: nop

    // 0x800E76C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E76C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E76C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E76CC: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E76D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E76D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E76D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E76DC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800E76E0: jal         0x8001C0EC
    // 0x800E76E4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E76E4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
    // 0x800E76E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E76EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E76F0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E76F4: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E76F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E76FC: jal         0x8001ABF4
    // 0x800E7700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E7700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E7704: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7708: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E770C: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E7710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7714: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E7718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E771C: jal         0x8001ABF4
    // 0x800E7720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E7720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E7724: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7728: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E772C: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E7730: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7734: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E7738: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800E773C: jal         0x8001ABF4
    // 0x800E7740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E7740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800E7744:
    // 0x800E7744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E774C: jal         0x8002A1FC
    // 0x800E7750: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800E7750: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_4:
    // 0x800E7754: beq         $v0, $zero, L_800E7774
    if (ctx->r2 == 0) {
        // 0x800E7758: nop
    
            goto L_800E7774;
    }
    // 0x800E7758: nop

    // 0x800E775C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E7760: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E7764: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E7768: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E776C: nop

    // 0x800E7770: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E7774:
    // 0x800E7774: b           L_800E777C
    // 0x800E7778: nop

        goto L_800E777C;
    // 0x800E7778: nop

L_800E777C:
    // 0x800E777C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E7784: jr          $ra
    // 0x800E7788: nop

    return;
    // 0x800E7788: nop

;}
RECOMP_FUNC void func_800B8B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B8B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8BA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8BA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8BA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8BAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8BB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8BB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8BBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8BC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8BC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B8BC8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B8BCC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8BD0: nop

    // 0x800B8BD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B8BD8: nop

    // 0x800B8BDC: bne         $t1, $zero, L_800B8CB0
    if (ctx->r9 != 0) {
        // 0x800B8BE0: nop
    
            goto L_800B8CB0;
    }
    // 0x800B8BE0: nop

    // 0x800B8BE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8BE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B8BEC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B8BF0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8BF4: nop

    // 0x800B8BF8: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800B8BFC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C00: nop

    // 0x800B8C04: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
    // 0x800B8C08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B8C0C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C10: nop

    // 0x800B8C14: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B8C18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B8C1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C20: nop

    // 0x800B8C24: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B8C28: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C2C: nop

    // 0x800B8C30: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800B8C34: nop

    // 0x800B8C38: bne         $t9, $zero, L_800B8C7C
    if (ctx->r25 != 0) {
        // 0x800B8C3C: nop
    
            goto L_800B8C7C;
    }
    // 0x800B8C3C: nop

    // 0x800B8C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8C48: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B8C4C: addiu       $a3, $a3, 0x7C38
    ctx->r7 = ADD32(ctx->r7, 0X7C38);
    // 0x800B8C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8C54: jal         0x8001ABF4
    // 0x800B8C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800B8C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800B8C5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B8C64: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B8C68: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C6C: nop

    // 0x800B8C70: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B8C74: b           L_800B8DBC
    // 0x800B8C78: nop

        goto L_800B8DBC;
    // 0x800B8C78: nop

L_800B8C7C:
    // 0x800B8C7C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8C80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B8C84: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800B8C88: nop

    // 0x800B8C8C: bne         $t4, $at, L_800B8CB0
    if (ctx->r12 != ctx->r1) {
        // 0x800B8C90: nop
    
            goto L_800B8CB0;
    }
    // 0x800B8C90: nop

    // 0x800B8C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8C9C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B8CA0: addiu       $a3, $a3, 0x7C1C
    ctx->r7 = ADD32(ctx->r7, 0X7C1C);
    // 0x800B8CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8CA8: jal         0x8001ABF4
    // 0x800B8CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B8CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800B8CB0:
    // 0x800B8CB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8CB4: nop

    // 0x800B8CB8: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800B8CBC: nop

    // 0x800B8CC0: blez        $t6, L_800B8D30
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800B8CC4: nop
    
            goto L_800B8D30;
    }
    // 0x800B8CC4: nop

    // 0x800B8CC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8CCC: nop

    // 0x800B8CD0: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800B8CD4: nop

    // 0x800B8CD8: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x800B8CDC: beq         $at, $zero, L_800B8D30
    if (ctx->r1 == 0) {
        // 0x800B8CE0: nop
    
            goto L_800B8D30;
    }
    // 0x800B8CE0: nop

    // 0x800B8CE4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8CE8: nop

    // 0x800B8CEC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800B8CF0: nop

    // 0x800B8CF4: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x800B8CF8: bne         $t1, $zero, L_800B8D30
    if (ctx->r9 != 0) {
        // 0x800B8CFC: nop
    
            goto L_800B8D30;
    }
    // 0x800B8CFC: nop

    // 0x800B8D00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8D04: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800B8D08: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800B8D0C: lh          $a2, 0xAA($t2)
    ctx->r6 = MEM_H(ctx->r10, 0XAA);
    // 0x800B8D10: jal         0x800B9070
    // 0x800B8D14: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_800B9070(rdram, ctx);
        goto after_2;
    // 0x800B8D14: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x800B8D18: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8D1C: nop

    // 0x800B8D20: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800B8D24: nop

    // 0x800B8D28: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800B8D2C: sh          $t5, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r13;
L_800B8D30:
    // 0x800B8D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8D38: jal         0x80029C40
    // 0x800B8D3C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B8D3C: nop

    after_3:
    // 0x800B8D40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8D44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8D48: jal         0x80029D04
    // 0x800B8D4C: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B8D4C: nop

    after_4:
    // 0x800B8D50: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8D54: nop

    // 0x800B8D58: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800B8D5C: nop

    // 0x800B8D60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800B8D64: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800B8D68: jal         0x800B8F38
    // 0x800B8D6C: nop

    func_800B8F38(rdram, ctx);
        goto after_5;
    // 0x800B8D6C: nop

    after_5:
    // 0x800B8D70: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x800B8D74: lb          $t9, 0x1B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1B);
    // 0x800B8D78: nop

    // 0x800B8D7C: bne         $t9, $zero, L_800B8DB4
    if (ctx->r25 != 0) {
        // 0x800B8D80: nop
    
            goto L_800B8DB4;
    }
    // 0x800B8D80: nop

    // 0x800B8D84: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8D88: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800B8D8C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B8D90: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8D94: nop

    // 0x800B8D98: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B8D9C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8DA0: nop

    // 0x800B8DA4: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800B8DA8: nop

    // 0x800B8DAC: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x800B8DB0: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800B8DB4:
    // 0x800B8DB4: b           L_800B8DBC
    // 0x800B8DB8: nop

        goto L_800B8DBC;
    // 0x800B8DB8: nop

L_800B8DBC:
    // 0x800B8DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B8DC4: jr          $ra
    // 0x800B8DC8: nop

    return;
    // 0x800B8DC8: nop

;}
RECOMP_FUNC void func_800AB564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB564: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AB568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB56C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800AB570: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800AB574: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800AB578: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800AB57C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800AB580: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AB584: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800AB588: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AB58C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AB590: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800AB594: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AB598: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800AB59C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AB5A0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800AB5A4: addiu       $a1, $a1, 0x3940
    ctx->r5 = ADD32(ctx->r5, 0X3940);
    // 0x800AB5A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AB5AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800AB5B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800AB5B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AB5B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AB5BC: jal         0x80027464
    // 0x800AB5C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800AB5C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800AB5C4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800AB5C8: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800AB5CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AB5D0: beq         $t1, $at, L_800AB644
    if (ctx->r9 == ctx->r1) {
        // 0x800AB5D4: nop
    
            goto L_800AB644;
    }
    // 0x800AB5D4: nop

    // 0x800AB5D8: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800AB5DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB5E0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AB5E4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AB5E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AB5EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AB5F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AB5F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AB5F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AB5FC: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800AB600: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800AB604: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB608: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800AB60C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AB610: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB614: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AB618: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB61C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800AB620: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AB624: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800AB628: addiu       $t8, $t8, 0x75D0
    ctx->r24 = ADD32(ctx->r24, 0X75D0);
    // 0x800AB62C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800AB630: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AB634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AB63C: jal         0x8001C0EC
    // 0x800AB640: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AB640: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
L_800AB644:
    // 0x800AB644: b           L_800AB64C
    // 0x800AB648: nop

        goto L_800AB64C;
    // 0x800AB648: nop

L_800AB64C:
    // 0x800AB64C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AB654: jr          $ra
    // 0x800AB658: nop

    return;
    // 0x800AB658: nop

;}
RECOMP_FUNC void func_800600B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800600B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800600BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800600C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800600C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800600C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800600CC: lb          $s0, 0x2B($sp)
    ctx->r16 = MEM_B(ctx->r29, 0X2B);
    // 0x800600D0: nop

    // 0x800600D4: beq         $s0, $zero, L_800600FC
    if (ctx->r16 == 0) {
        // 0x800600D8: nop
    
            goto L_800600FC;
    }
    // 0x800600D8: nop

    // 0x800600DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800600E0: beq         $s0, $at, L_80060174
    if (ctx->r16 == ctx->r1) {
        // 0x800600E4: nop
    
            goto L_80060174;
    }
    // 0x800600E4: nop

    // 0x800600E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800600EC: beq         $s0, $at, L_800601A0
    if (ctx->r16 == ctx->r1) {
        // 0x800600F0: nop
    
            goto L_800601A0;
    }
    // 0x800600F0: nop

    // 0x800600F4: b           L_80060258
    // 0x800600F8: nop

        goto L_80060258;
    // 0x800600F8: nop

L_800600FC:
    // 0x800600FC: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x80060100: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80060104: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80060108: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006010C: lbu         $t8, 0x39D4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39D4);
    // 0x80060110: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x80060114: blez        $t8, L_8006016C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80060118: nop
    
            goto L_8006016C;
    }
    // 0x80060118: nop

L_8006011C:
    // 0x8006011C: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x80060120: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80060124: jal         0x8005FE88
    // 0x80060128: nop

    func_8005FE88(rdram, ctx);
        goto after_0;
    // 0x80060128: nop

    after_0:
    // 0x8006012C: bne         $v0, $zero, L_8006013C
    if (ctx->r2 != 0) {
        // 0x80060130: nop
    
            goto L_8006013C;
    }
    // 0x80060130: nop

    // 0x80060134: b           L_80060268
    // 0x80060138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80060268;
    // 0x80060138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006013C:
    // 0x8006013C: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x80060140: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80060144: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80060148: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006014C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060150: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80060154: lbu         $t5, 0x39D4($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39D4);
    // 0x80060158: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8006015C: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80060160: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80060164: bne         $at, $zero, L_8006011C
    if (ctx->r1 != 0) {
        // 0x80060168: sh          $t0, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r8;
            goto L_8006011C;
    }
    // 0x80060168: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
L_8006016C:
    // 0x8006016C: b           L_80060258
    // 0x80060170: nop

        goto L_80060258;
    // 0x80060170: nop

L_80060174:
    // 0x80060174: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80060178: lb          $a0, 0x4801($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4801);
    // 0x8006017C: lb          $a1, 0x2F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2F);
    // 0x80060180: jal         0x8005FE88
    // 0x80060184: nop

    func_8005FE88(rdram, ctx);
        goto after_1;
    // 0x80060184: nop

    after_1:
    // 0x80060188: bne         $v0, $zero, L_80060198
    if (ctx->r2 != 0) {
        // 0x8006018C: nop
    
            goto L_80060198;
    }
    // 0x8006018C: nop

    // 0x80060190: b           L_80060268
    // 0x80060194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80060268;
    // 0x80060194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80060198:
    // 0x80060198: b           L_80060258
    // 0x8006019C: nop

        goto L_80060258;
    // 0x8006019C: nop

L_800601A0:
    // 0x800601A0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800601A4: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x800601A8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800601AC: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x800601B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800601B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800601B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800601BC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800601C0: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800601C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800601C8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800601CC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800601D0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800601D4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x800601D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800601DC: lbu         $t4, 0x4808($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X4808);
    // 0x800601E0: nop

    // 0x800601E4: andi        $t2, $t4, 0xF
    ctx->r10 = ctx->r12 & 0XF;
    // 0x800601E8: bne         $t2, $zero, L_800601F8
    if (ctx->r10 != 0) {
        // 0x800601EC: nop
    
            goto L_800601F8;
    }
    // 0x800601EC: nop

    // 0x800601F0: b           L_80060268
    // 0x800601F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80060268;
    // 0x800601F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800601F8:
    // 0x800601F8: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800601FC: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x80060200: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80060204: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80060208: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006020C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80060210: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80060214: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x80060218: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x8006021C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80060220: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80060224: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80060228: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8006022C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80060230: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80060234: lbu         $t3, 0x4808($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4808);
    // 0x80060238: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006023C: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x80060240: bne         $t4, $at, L_80060250
    if (ctx->r12 != ctx->r1) {
        // 0x80060244: nop
    
            goto L_80060250;
    }
    // 0x80060244: nop

    // 0x80060248: b           L_80060268
    // 0x8006024C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_80060268;
    // 0x8006024C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_80060250:
    // 0x80060250: b           L_80060258
    // 0x80060254: nop

        goto L_80060258;
    // 0x80060254: nop

L_80060258:
    // 0x80060258: b           L_80060268
    // 0x8006025C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80060268;
    // 0x8006025C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80060260: b           L_80060268
    // 0x80060264: nop

        goto L_80060268;
    // 0x80060264: nop

L_80060268:
    // 0x80060268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006026C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80060270: jr          $ra
    // 0x80060274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80060274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A7ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7ABC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A7AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A7AC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A7AC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A7ACC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A7AD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A7AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7AD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A7ADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7AE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A7AE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A7AE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A7AEC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A7AF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A7AF4: nop

    // 0x800A7AF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A7AFC: nop

    // 0x800A7B00: bne         $t1, $zero, L_800A7B74
    if (ctx->r9 != 0) {
        // 0x800A7B04: nop
    
            goto L_800A7B74;
    }
    // 0x800A7B04: nop

    // 0x800A7B08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A7B0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A7B10: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A7B14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7B18: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A7B1C: nop

    // 0x800A7B20: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A7B24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A7B28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A7B2C: nop

    // 0x800A7B30: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A7B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7B38: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800A7B3C: addiu       $t6, $t6, 0x72A0
    ctx->r14 = ADD32(ctx->r14, 0X72A0);
    // 0x800A7B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7B44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A7B48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A7B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A7B50: jal         0x8001C0EC
    // 0x800A7B54: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A7B54: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    after_0:
    // 0x800A7B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7B5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7B60: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A7B64: addiu       $a3, $a3, 0x72EC
    ctx->r7 = ADD32(ctx->r7, 0X72EC);
    // 0x800A7B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7B6C: jal         0x8001ABF4
    // 0x800A7B70: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A7B70: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_800A7B74:
    // 0x800A7B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7B7C: jal         0x80028FA0
    // 0x800A7B80: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800A7B80: nop

    after_2:
    // 0x800A7B84: beq         $v0, $zero, L_800A7B9C
    if (ctx->r2 == 0) {
        // 0x800A7B88: nop
    
            goto L_800A7B9C;
    }
    // 0x800A7B88: nop

    // 0x800A7B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7B94: jal         0x80029B60
    // 0x800A7B98: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800A7B98: nop

    after_3:
L_800A7B9C:
    // 0x800A7B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7BA4: jal         0x80029C40
    // 0x800A7BA8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A7BA8: nop

    after_4:
    // 0x800A7BAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7BB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7BB4: jal         0x80029D04
    // 0x800A7BB8: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A7BB8: nop

    after_5:
    // 0x800A7BBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7BC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7BC4: jal         0x8002A1FC
    // 0x800A7BC8: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x800A7BC8: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_6:
    // 0x800A7BCC: beq         $v0, $zero, L_800A7BEC
    if (ctx->r2 == 0) {
        // 0x800A7BD0: nop
    
            goto L_800A7BEC;
    }
    // 0x800A7BD0: nop

    // 0x800A7BD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A7BD8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800A7BDC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A7BE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A7BE4: nop

    // 0x800A7BE8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A7BEC:
    // 0x800A7BEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A7BF0: nop

    // 0x800A7BF4: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800A7BF8: nop

    // 0x800A7BFC: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x800A7C00: b           L_800A7C08
    // 0x800A7C04: nop

        goto L_800A7C08;
    // 0x800A7C04: nop

L_800A7C08:
    // 0x800A7C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A7C10: jr          $ra
    // 0x800A7C14: nop

    return;
    // 0x800A7C14: nop

;}
RECOMP_FUNC void func_8007C06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007C070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C074: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007C078: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007C07C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007C080: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007C084: jal         0x8007944C
    // 0x8007C088: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007C088: nop

    after_0:
    // 0x8007C08C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007C090: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007C098: beq         $t6, $at, L_8007C198
    if (ctx->r14 == ctx->r1) {
        // 0x8007C09C: nop
    
            goto L_8007C198;
    }
    // 0x8007C09C: nop

    // 0x8007C0A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C0A4: jal         0x8007BD30
    // 0x8007C0A8: nop

    func_8007BD30(rdram, ctx);
        goto after_1;
    // 0x8007C0A8: nop

    after_1:
    // 0x8007C0AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C0B0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007C0B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007C0B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007C0BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007C0C0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007C0C4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007C0C8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007C0CC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007C0D0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007C0D4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007C0D8: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x8007C0DC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007C0E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007C0E4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007C0E8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007C0EC: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8007C0F0: nop

    // 0x8007C0F4: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x8007C0F8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007C0FC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007C100: nop

    // 0x8007C104: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x8007C108: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007C10C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007C110: nop

    // 0x8007C114: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8007C118: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007C11C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007C120: nop

    // 0x8007C124: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x8007C128: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007C12C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007C130: nop

    // 0x8007C134: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
    // 0x8007C138: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007C13C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007C140: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007C144: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007C148: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007C14C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007C150: lwc1        $f14, -0x3704($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3704);
    // 0x8007C154: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8007C158: jal         0x80015538
    // 0x8007C15C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8007C15C: nop

    after_2:
    // 0x8007C160: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007C164: nop

    // 0x8007C168: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x8007C16C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8007C170: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007C174: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007C178: nop

    // 0x8007C17C: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x8007C180: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C184: jal         0x800799A8
    // 0x8007C188: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007C188: nop

    after_3:
    // 0x8007C18C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C190: jal         0x80079AD8
    // 0x8007C194: nop

    func_80079AD8(rdram, ctx);
        goto after_4;
    // 0x8007C194: nop

    after_4:
L_8007C198:
    // 0x8007C198: b           L_8007C1A0
    // 0x8007C19C: nop

        goto L_8007C1A0;
    // 0x8007C19C: nop

L_8007C1A0:
    // 0x8007C1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C1A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007C1A8: jr          $ra
    // 0x8007C1AC: nop

    return;
    // 0x8007C1AC: nop

;}
RECOMP_FUNC void func_800813B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800813B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800813BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800813C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800813C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800813C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800813CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800813D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800813D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800813D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800813DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800813E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800813E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800813E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800813EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800813F0: nop

    // 0x800813F4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800813F8: nop

    // 0x800813FC: bne         $t1, $zero, L_8008141C
    if (ctx->r9 != 0) {
        // 0x80081400: nop
    
            goto L_8008141C;
    }
    // 0x80081400: nop

    // 0x80081404: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081408: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8008140C: jal         0x8001A928
    // 0x80081410: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80081410: nop

    after_0:
    // 0x80081414: b           L_80081450
    // 0x80081418: nop

        goto L_80081450;
    // 0x80081418: nop

L_8008141C:
    // 0x8008141C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80081420: nop

    // 0x80081424: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80081428: nop

    // 0x8008142C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80081430: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80081434: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80081438: nop

    // 0x8008143C: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80081440: lwc1        $f6, 0x28($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80081444: nop

    // 0x80081448: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008144C: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_80081450:
    // 0x80081450: b           L_80081458
    // 0x80081454: nop

        goto L_80081458;
    // 0x80081454: nop

L_80081458:
    // 0x80081458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008145C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80081460: jr          $ra
    // 0x80081464: nop

    return;
    // 0x80081464: nop

;}
RECOMP_FUNC void func_800A0580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0588: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A058C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A0590: nop

    // 0x800A0594: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800A0598: nop

    // 0x800A059C: bne         $t7, $zero, L_800A05C0
    if (ctx->r15 != 0) {
        // 0x800A05A0: nop
    
            goto L_800A05C0;
    }
    // 0x800A05A0: nop

    // 0x800A05A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A05A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A05AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A05B0: jal         0x8001B6BC
    // 0x800A05B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800A05B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x800A05B8: b           L_800A05D4
    // 0x800A05BC: nop

        goto L_800A05D4;
    // 0x800A05BC: nop

L_800A05C0:
    // 0x800A05C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A05C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A05C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A05CC: jal         0x8001B6BC
    // 0x800A05D0: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x800A05D0: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
L_800A05D4:
    // 0x800A05D4: b           L_800A05DC
    // 0x800A05D8: nop

        goto L_800A05DC;
    // 0x800A05D8: nop

L_800A05DC:
    // 0x800A05DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A05E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A05E4: jr          $ra
    // 0x800A05E8: nop

    return;
    // 0x800A05E8: nop

;}
RECOMP_FUNC void func_800B846C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B846C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B8470: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B8474: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8478: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B847C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8480: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8484: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B848C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8490: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8494: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8498: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B849C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B84A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B84A4: nop

    // 0x800B84A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B84AC: nop

    // 0x800B84B0: bne         $t1, $zero, L_800B84E4
    if (ctx->r9 != 0) {
        // 0x800B84B4: nop
    
            goto L_800B84E4;
    }
    // 0x800B84B4: nop

    // 0x800B84B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B84BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B84C0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B84C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B84C8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B84CC: nop

    // 0x800B84D0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B84D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B84D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B84DC: nop

    // 0x800B84E0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800B84E4:
    // 0x800B84E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B84E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B84EC: jal         0x80029C40
    // 0x800B84F0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B84F0: nop

    after_0:
    // 0x800B84F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B84F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B84FC: jal         0x80029D04
    // 0x800B8500: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B8500: nop

    after_1:
    // 0x800B8504: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8508: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B850C: jal         0x8002A46C
    // 0x800B8510: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x800B8510: nop

    after_2:
    // 0x800B8514: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B8518: nop

    // 0x800B851C: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800B8520: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8524: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8528: jal         0x8001B44C
    // 0x800B852C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800B852C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800B8530: beq         $v0, $zero, L_800B85A8
    if (ctx->r2 == 0) {
        // 0x800B8534: nop
    
            goto L_800B85A8;
    }
    // 0x800B8534: nop

    // 0x800B8538: jal         0x80014E80
    // 0x800B853C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800B853C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x800B8540: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800B8544: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800B8548: nop

    // 0x800B854C: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x800B8550: beq         $at, $zero, L_800B8584
    if (ctx->r1 == 0) {
        // 0x800B8554: nop
    
            goto L_800B8584;
    }
    // 0x800B8554: nop

    // 0x800B8558: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B855C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B8560: addiu       $t8, $t8, 0x7BC0
    ctx->r24 = ADD32(ctx->r24, 0X7BC0);
    // 0x800B8564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8568: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B856C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B8574: jal         0x8001C0EC
    // 0x800B8578: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800B8578: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    after_5:
    // 0x800B857C: b           L_800B85A8
    // 0x800B8580: nop

        goto L_800B85A8;
    // 0x800B8580: nop

L_800B8584:
    // 0x800B8584: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8588: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800B858C: addiu       $t9, $t9, 0x7BC0
    ctx->r25 = ADD32(ctx->r25, 0X7BC0);
    // 0x800B8590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8594: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800B8598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B859C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800B85A0: jal         0x8001C0EC
    // 0x800B85A4: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800B85A4: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    after_6:
L_800B85A8:
    // 0x800B85A8: b           L_800B85B0
    // 0x800B85AC: nop

        goto L_800B85B0;
    // 0x800B85AC: nop

L_800B85B0:
    // 0x800B85B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B85B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B85B8: jr          $ra
    // 0x800B85BC: nop

    return;
    // 0x800B85BC: nop

;}
RECOMP_FUNC void func_800D3E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3E54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D3E58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D3E5C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D3E60: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D3E64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3E68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3E6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D3E70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3E74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3E78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3E7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3E80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D3E84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D3E88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D3E8C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D3E90: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3E94: nop

    // 0x800D3E98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D3E9C: nop

    // 0x800D3EA0: bne         $t1, $zero, L_800D3F24
    if (ctx->r9 != 0) {
        // 0x800D3EA4: nop
    
            goto L_800D3F24;
    }
    // 0x800D3EA4: nop

    // 0x800D3EA8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D3EAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D3EB0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D3EB4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D3EB8: nop

    // 0x800D3EBC: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
    // 0x800D3EC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D3EC4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D3EC8: nop

    // 0x800D3ECC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800D3ED0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D3ED4: nop

    // 0x800D3ED8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D3EDC: nop

    // 0x800D3EE0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800D3EE4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D3EE8: nop

    // 0x800D3EEC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800D3EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3EF4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D3EF8: addiu       $t8, $t8, -0x7844
    ctx->r24 = ADD32(ctx->r24, -0X7844);
    // 0x800D3EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3F00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D3F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D3F08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800D3F0C: jal         0x8001C0EC
    // 0x800D3F10: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D3F10: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    after_0:
    // 0x800D3F14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3F18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3F1C: jal         0x8001BBDC
    // 0x800D3F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D3F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800D3F24:
    // 0x800D3F24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3F28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3F2C: jal         0x8001B44C
    // 0x800D3F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800D3F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D3F34: beq         $v0, $zero, L_800D4048
    if (ctx->r2 == 0) {
        // 0x800D3F38: nop
    
            goto L_800D4048;
    }
    // 0x800D3F38: nop

    // 0x800D3F3C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x800D3F40: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_800D3F44:
    // 0x800D3F44: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800D3F48: jal         0x80026E58
    // 0x800D3F4C: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x800D3F4C: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    after_3:
    // 0x800D3F50: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800D3F54: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800D3F58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D3F5C: bne         $t0, $at, L_800D3F74
    if (ctx->r8 != ctx->r1) {
        // 0x800D3F60: nop
    
            goto L_800D3F74;
    }
    // 0x800D3F60: nop

    // 0x800D3F64: b           L_800D4038
    // 0x800D3F68: nop

        goto L_800D4038;
    // 0x800D3F68: nop

    // 0x800D3F6C: b           L_800D4030
    // 0x800D3F70: nop

        goto L_800D4030;
    // 0x800D3F70: nop

L_800D3F74:
    // 0x800D3F74: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800D3F78: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D3F7C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800D3F80: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800D3F84: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800D3F88: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800D3F8C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800D3F90: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800D3F94: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D3F98: lh          $t3, 0x420A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X420A);
    // 0x800D3F9C: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x800D3FA0: nop

    // 0x800D3FA4: bne         $t3, $t5, L_800D4020
    if (ctx->r11 != ctx->r13) {
        // 0x800D3FA8: nop
    
            goto L_800D4020;
    }
    // 0x800D3FA8: nop

    // 0x800D3FAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800D3FB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D3FB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3FB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3FBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3FC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3FC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D3FC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D3FCC: lh          $t8, 0x41F8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F8);
    // 0x800D3FD0: nop

    // 0x800D3FD4: beq         $t8, $zero, L_800D4010
    if (ctx->r24 == 0) {
        // 0x800D3FD8: nop
    
            goto L_800D4010;
    }
    // 0x800D3FD8: nop

    // 0x800D3FDC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800D3FE0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800D3FE4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D3FE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D3FEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D3FF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D3FF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D3FF8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800D3FFC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800D4000: lh          $t4, 0xA8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA8);
    // 0x800D4004: nop

    // 0x800D4008: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x800D400C: sh          $t3, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r11;
L_800D4010:
    // 0x800D4010: b           L_800D4038
    // 0x800D4014: nop

        goto L_800D4038;
    // 0x800D4014: nop

    // 0x800D4018: b           L_800D4030
    // 0x800D401C: nop

        goto L_800D4030;
    // 0x800D401C: nop

L_800D4020:
    // 0x800D4020: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800D4024: nop

    // 0x800D4028: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800D402C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_800D4030:
    // 0x800D4030: b           L_800D3F44
    // 0x800D4034: nop

        goto L_800D3F44;
    // 0x800D4034: nop

L_800D4038:
    // 0x800D4038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D403C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4040: jal         0x8002B0E4
    // 0x800D4044: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800D4044: nop

    after_4:
L_800D4048:
    // 0x800D4048: b           L_800D4050
    // 0x800D404C: nop

        goto L_800D4050;
    // 0x800D404C: nop

L_800D4050:
    // 0x800D4050: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D4054: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D4058: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D405C: jr          $ra
    // 0x800D4060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D4060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
