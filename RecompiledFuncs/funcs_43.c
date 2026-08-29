#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80088A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088A88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80088A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088A90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80088A94: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80088A98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088A9C: sb          $t6, 0x523E($at)
    MEM_B(0X523E, ctx->r1) = ctx->r14;
    // 0x80088AA0: jal         0x8001EC04
    // 0x80088AA4: nop

    func_8001EC04(rdram, ctx);
        goto after_0;
    // 0x80088AA4: nop

    after_0:
    // 0x80088AA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80088AAC:
    // 0x80088AAC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80088AB0: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x80088AB4: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x80088AB8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80088ABC: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80088AC0: bne         $at, $zero, L_80088AAC
    if (ctx->r1 != 0) {
        // 0x80088AC4: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_80088AAC;
    }
    // 0x80088AC4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80088AC8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80088ACC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80088AD0: nop

    // 0x80088AD4: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80088AD8: nop

    // 0x80088ADC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80088AE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80088AE4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80088AE8: nop

    // 0x80088AEC: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80088AF0: nop

    // 0x80088AF4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80088AF8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80088AFC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80088B00: nop

    // 0x80088B04: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80088B08: nop

    // 0x80088B0C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80088B10: jal         0x800883A8
    // 0x80088B14: nop

    func_800883A8(rdram, ctx);
        goto after_1;
    // 0x80088B14: nop

    after_1:
    // 0x80088B18: jal         0x80088694
    // 0x80088B1C: nop

    func_80088694(rdram, ctx);
        goto after_2;
    // 0x80088B1C: nop

    after_2:
    // 0x80088B20: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80088B24: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80088B28: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80088B2C: nop

    // 0x80088B30: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x80088B34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80088B38: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80088B3C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80088B40: nop

    // 0x80088B44: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x80088B48: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80088B4C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80088B50: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80088B54: nop

    // 0x80088B58: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x80088B5C: jal         0x8001EBE8
    // 0x80088B60: nop

    func_8001EBE8(rdram, ctx);
        goto after_3;
    // 0x80088B60: nop

    after_3:
    // 0x80088B64: b           L_80088B6C
    // 0x80088B68: nop

        goto L_80088B6C;
    // 0x80088B68: nop

L_80088B6C:
    // 0x80088B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80088B74: jr          $ra
    // 0x80088B78: nop

    return;
    // 0x80088B78: nop

;}
RECOMP_FUNC void func_8009766C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009766C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80097678: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009767C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80097680: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80097684: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80097688: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009768C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80097690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097694: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80097698: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009769C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800976A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800976A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800976A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800976AC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800976B0: nop

    // 0x800976B4: beq         $s0, $at, L_800976DC
    if (ctx->r16 == ctx->r1) {
        // 0x800976B8: nop
    
            goto L_800976DC;
    }
    // 0x800976B8: nop

    // 0x800976BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800976C0: beq         $s0, $at, L_800976F0
    if (ctx->r16 == ctx->r1) {
        // 0x800976C4: nop
    
            goto L_800976F0;
    }
    // 0x800976C4: nop

    // 0x800976C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800976CC: beq         $s0, $at, L_80097704
    if (ctx->r16 == ctx->r1) {
        // 0x800976D0: nop
    
            goto L_80097704;
    }
    // 0x800976D0: nop

    // 0x800976D4: b           L_80097718
    // 0x800976D8: nop

        goto L_80097718;
    // 0x800976D8: nop

L_800976DC:
    // 0x800976DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800976E0: jal         0x80097438
    // 0x800976E4: nop

    func_80097438(rdram, ctx);
        goto after_0;
    // 0x800976E4: nop

    after_0:
    // 0x800976E8: b           L_80097718
    // 0x800976EC: nop

        goto L_80097718;
    // 0x800976EC: nop

L_800976F0:
    // 0x800976F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800976F4: jal         0x800974C0
    // 0x800976F8: nop

    func_800974C0(rdram, ctx);
        goto after_1;
    // 0x800976F8: nop

    after_1:
    // 0x800976FC: b           L_80097718
    // 0x80097700: nop

        goto L_80097718;
    // 0x80097700: nop

L_80097704:
    // 0x80097704: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80097708: jal         0x80097634
    // 0x8009770C: nop

    func_80097634(rdram, ctx);
        goto after_2;
    // 0x8009770C: nop

    after_2:
    // 0x80097710: b           L_80097718
    // 0x80097714: nop

        goto L_80097718;
    // 0x80097714: nop

L_80097718:
    // 0x80097718: b           L_80097720
    // 0x8009771C: nop

        goto L_80097720;
    // 0x8009771C: nop

L_80097720:
    // 0x80097720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097724: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097728: jr          $ra
    // 0x8009772C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009772C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A528C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A528C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A5290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A5294: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A5298: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A529C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A52A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A52A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A52A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A52AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A52B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A52B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A52B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A52BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A52C0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A52C4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A52C8: nop

    // 0x800A52CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A52D0: nop

    // 0x800A52D4: bne         $t1, $zero, L_800A533C
    if (ctx->r9 != 0) {
        // 0x800A52D8: nop
    
            goto L_800A533C;
    }
    // 0x800A52D8: nop

    // 0x800A52DC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A52E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A52E4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A52E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A52EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A52F0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A52F4: nop

    // 0x800A52F8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A52FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A5300: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A5304: nop

    // 0x800A5308: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A530C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A5310: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800A5314: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800A5318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A531C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800A5320: addiu       $t8, $t8, 0x7028
    ctx->r24 = ADD32(ctx->r24, 0X7028);
    // 0x800A5324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5328: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A532C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A5334: jal         0x8001C0EC
    // 0x800A5338: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A5338: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    after_0:
L_800A533C:
    // 0x800A533C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5344: jal         0x80028FA0
    // 0x800A5348: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800A5348: nop

    after_1:
    // 0x800A534C: beq         $v0, $zero, L_800A5364
    if (ctx->r2 == 0) {
        // 0x800A5350: nop
    
            goto L_800A5364;
    }
    // 0x800A5350: nop

    // 0x800A5354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A535C: jal         0x80029B60
    // 0x800A5360: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800A5360: nop

    after_2:
L_800A5364:
    // 0x800A5364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A536C: jal         0x80029C40
    // 0x800A5370: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800A5370: nop

    after_3:
    // 0x800A5374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A537C: jal         0x80029D04
    // 0x800A5380: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800A5380: nop

    after_4:
    // 0x800A5384: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A5388: nop

    // 0x800A538C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800A5390: nop

    // 0x800A5394: addiu       $t1, $t0, -0x4
    ctx->r9 = ADD32(ctx->r8, -0X4);
    // 0x800A5398: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800A539C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A53A0: nop

    // 0x800A53A4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800A53A8: nop

    // 0x800A53AC: bgez        $t3, L_800A53D8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800A53B0: nop
    
            goto L_800A53D8;
    }
    // 0x800A53B0: nop

    // 0x800A53B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A53B8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800A53BC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A53C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A53C4: nop

    // 0x800A53C8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800A53CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A53D0: jal         0x800C00F4
    // 0x800A53D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_5;
    // 0x800A53D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
L_800A53D8:
    // 0x800A53D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A53DC: jal         0x800C0194
    // 0x800A53E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C0194(rdram, ctx);
        goto after_6;
    // 0x800A53E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x800A53E4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800A53E8: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800A53EC: nop

    // 0x800A53F0: slti        $at, $t7, -0xB4
    ctx->r1 = SIGNED(ctx->r15) < -0XB4 ? 1 : 0;
    // 0x800A53F4: beq         $at, $zero, L_800A5434
    if (ctx->r1 == 0) {
        // 0x800A53F8: nop
    
            goto L_800A5434;
    }
    // 0x800A53F8: nop

    // 0x800A53FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A5400: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800A5404: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x800A5408: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A540C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A5410: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800A5414: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A5418: nop

    // 0x800A541C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800A5420: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A5424: jal         0x800C00F4
    // 0x800A5428: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_7;
    // 0x800A5428: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x800A542C: b           L_800A54A4
    // 0x800A5430: nop

        goto L_800A54A4;
    // 0x800A5430: nop

L_800A5434:
    // 0x800A5434: sb          $zero, 0x31($sp)
    MEM_B(0X31, ctx->r29) = 0;
    // 0x800A5438: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A543C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5440: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5448: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A544C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800A5450: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A5454: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A5458: jal         0x80029018
    // 0x800A545C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800A545C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x800A5460: beq         $v0, $zero, L_800A549C
    if (ctx->r2 == 0) {
        // 0x800A5464: nop
    
            goto L_800A549C;
    }
    // 0x800A5464: nop

    // 0x800A5468: jal         0x800297DC
    // 0x800A546C: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800A546C: nop

    after_9:
    // 0x800A5470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5478: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A547C: jal         0x80029824
    // 0x800A5480: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800A5480: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800A5484: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A5488: sb          $t3, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r11;
    // 0x800A548C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A5490: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A5494: nop

    // 0x800A5498: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
L_800A549C:
    // 0x800A549C: b           L_800A54A4
    // 0x800A54A0: nop

        goto L_800A54A4;
    // 0x800A54A0: nop

L_800A54A4:
    // 0x800A54A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A54A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A54AC: jr          $ra
    // 0x800A54B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A54B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FA4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA4D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA4D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA4DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA4E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA4E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FA4E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA4EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA4F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA4F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA4F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA4FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FA500: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FA504: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FA508: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA50C: nop

    // 0x800FA510: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FA514: nop

    // 0x800FA518: bne         $t1, $zero, L_800FA52C
    if (ctx->r9 != 0) {
        // 0x800FA51C: nop
    
            goto L_800FA52C;
    }
    // 0x800FA51C: nop

    // 0x800FA520: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA524: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FA528: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_800FA52C:
    // 0x800FA52C: jal         0x800FA27C
    // 0x800FA530: nop

    func_800FA27C(rdram, ctx);
        goto after_0;
    // 0x800FA530: nop

    after_0:
    // 0x800FA534: b           L_800FA53C
    // 0x800FA538: nop

        goto L_800FA53C;
    // 0x800FA538: nop

L_800FA53C:
    // 0x800FA53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FA544: jr          $ra
    // 0x800FA548: nop

    return;
    // 0x800FA548: nop

;}
RECOMP_FUNC void func_80094370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094370: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80094374: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094378: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009437C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80094380: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80094384: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80094388: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009438C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80094390: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80094394: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80094398: bne         $t6, $at, L_800943A8
    if (ctx->r14 != ctx->r1) {
        // 0x8009439C: nop
    
            goto L_800943A8;
    }
    // 0x8009439C: nop

    // 0x800943A0: b           L_8009455C
    // 0x800943A4: nop

        goto L_8009455C;
    // 0x800943A4: nop

L_800943A8:
    // 0x800943A8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800943AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800943B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800943B4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800943B8: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x800943BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800943C0: lw          $t9, 0x59B4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X59B4);
    // 0x800943C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800943C8: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x800943CC: nop

    // 0x800943D0: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800943D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800943D8: lw          $t2, -0x3560($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3560);
    // 0x800943DC: nop

    // 0x800943E0: beq         $t2, $zero, L_80094554
    if (ctx->r10 == 0) {
        // 0x800943E4: nop
    
            goto L_80094554;
    }
    // 0x800943E4: nop

    // 0x800943E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800943EC: jal         0x80093940
    // 0x800943F0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80093940(rdram, ctx);
        goto after_0;
    // 0x800943F0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x800943F4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800943F8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800943FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094400: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80094404: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80094408: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8009440C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80094410: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80094414: jal         0x80027464
    // 0x80094418: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80094418: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8009441C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80094420: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80094424: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80094428: beq         $t3, $at, L_80094554
    if (ctx->r11 == ctx->r1) {
        // 0x8009442C: nop
    
            goto L_80094554;
    }
    // 0x8009442C: nop

    // 0x80094430: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80094434: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094438: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009443C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80094440: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80094444: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80094448: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009444C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80094450: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80094454: sh          $t4, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r12;
    // 0x80094458: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8009445C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80094460: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80094464: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80094468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009446C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80094470: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80094474: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094478: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009447C: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x80094480: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80094484: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80094488: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8009448C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80094490: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80094494: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80094498: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009449C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800944A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800944A4: swc1        $f10, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f10.u32l;
    // 0x800944A8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800944AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800944B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800944B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800944B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800944BC: lwc1        $f16, 0x33EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X33EC);
    // 0x800944C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800944C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800944C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800944CC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800944D0: swc1        $f16, 0x419C($at)
    MEM_W(0X419C, ctx->r1) = ctx->f16.u32l;
    // 0x800944D4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800944D8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800944DC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800944E0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800944E4: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800944E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800944EC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800944F0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800944F4: lwc1        $f18, 0x33F0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X33F0);
    // 0x800944F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800944FC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80094500: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80094504: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094508: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8009450C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80094510: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80094514: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80094518: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009451C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80094520: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x80094524: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80094528: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009452C: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80094530: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80094534: nop

    // 0x80094538: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8009453C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80094540: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80094544: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80094548: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009454C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80094550: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_80094554:
    // 0x80094554: b           L_8009455C
    // 0x80094558: nop

        goto L_8009455C;
    // 0x80094558: nop

L_8009455C:
    // 0x8009455C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094560: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80094564: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80094568: jr          $ra
    // 0x8009456C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009456C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800EBA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBA48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EBA4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EBA50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EBA54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EBA58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EBA5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EBA60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EBA64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBA68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EBA6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBA70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EBA74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EBA78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EBA7C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EBA80: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBA84: nop

    // 0x800EBA88: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800EBA8C: nop

    // 0x800EBA90: bne         $t1, $zero, L_800EBAF0
    if (ctx->r9 != 0) {
        // 0x800EBA94: nop
    
            goto L_800EBAF0;
    }
    // 0x800EBA94: nop

    // 0x800EBA98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBA9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBAA0: jal         0x8001BB34
    // 0x800EBAA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800EBAA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800EBAA8: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_800EBAAC:
    // 0x800EBAAC: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x800EBAB0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBAB4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800EBAB8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800EBABC: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x800EBAC0: jal         0x8001BB34
    // 0x800EBAC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800EBAC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800EBAC8: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x800EBACC: nop

    // 0x800EBAD0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800EBAD4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800EBAD8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800EBADC: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x800EBAE0: bne         $at, $zero, L_800EBAAC
    if (ctx->r1 != 0) {
        // 0x800EBAE4: sh          $t7, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r15;
            goto L_800EBAAC;
    }
    // 0x800EBAE4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x800EBAE8: b           L_800EBB6C
    // 0x800EBAEC: nop

        goto L_800EBB6C;
    // 0x800EBAEC: nop

L_800EBAF0:
    // 0x800EBAF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBAF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBAF8: lh          $s0, 0x108($t0)
    ctx->r16 = MEM_H(ctx->r8, 0X108);
    // 0x800EBAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBB00: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x800EBB04: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800EBB08: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800EBB0C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800EBB10: jal         0x8001BB34
    // 0x800EBB14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800EBB14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800EBB18: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_800EBB1C:
    // 0x800EBB1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBB20: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x800EBB24: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800EBB28: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800EBB2C: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x800EBB30: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800EBB34: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800EBB38: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x800EBB3C: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x800EBB40: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x800EBB44: jal         0x8001BB34
    // 0x800EBB48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800EBB48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800EBB4C: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x800EBB50: nop

    // 0x800EBB54: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800EBB58: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x800EBB5C: sra         $t3, $t1, 16
    ctx->r11 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800EBB60: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800EBB64: bne         $at, $zero, L_800EBB1C
    if (ctx->r1 != 0) {
        // 0x800EBB68: sh          $t0, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r8;
            goto L_800EBB1C;
    }
    // 0x800EBB68: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
L_800EBB6C:
    // 0x800EBB6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EBB70: nop

    // 0x800EBB74: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x800EBB78: nop

    // 0x800EBB7C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800EBB80: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x800EBB84: beq         $at, $zero, L_800EBC38
    if (ctx->r1 == 0) {
        // 0x800EBB88: nop
    
            goto L_800EBC38;
    }
    // 0x800EBB88: nop

    // 0x800EBB8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EBB90: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EBB94: addu        $at, $at, $t6
    gpr jr_addend_800EBBA0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800EBB98: lw          $t6, 0x5564($at)
    ctx->r14 = ADD32(ctx->r1, 0X5564);
    // 0x800EBB9C: nop

    // 0x800EBBA0: jr          $t6
    // 0x800EBBA4: nop

    switch (jr_addend_800EBBA0 >> 2) {
        case 0: goto L_800EBBA8; break;
        case 1: goto L_800EBBB8; break;
        case 2: goto L_800EBBC8; break;
        case 3: goto L_800EBBD8; break;
        case 4: goto L_800EBBE8; break;
        case 5: goto L_800EBBF8; break;
        case 6: goto L_800EBC08; break;
        case 7: goto L_800EBC18; break;
        case 8: goto L_800EBC28; break;
        default: switch_error(__func__, 0x800EBBA0, 0x80115564);
    }
    // 0x800EBBA4: nop

L_800EBBA8:
    // 0x800EBBA8: jal         0x800E91E4
    // 0x800EBBAC: nop

    func_800E91E4(rdram, ctx);
        goto after_4;
    // 0x800EBBAC: nop

    after_4:
    // 0x800EBBB0: b           L_800EBC40
    // 0x800EBBB4: nop

        goto L_800EBC40;
    // 0x800EBBB4: nop

L_800EBBB8:
    // 0x800EBBB8: jal         0x800E9420
    // 0x800EBBBC: nop

    func_800E9420(rdram, ctx);
        goto after_5;
    // 0x800EBBBC: nop

    after_5:
    // 0x800EBBC0: b           L_800EBC40
    // 0x800EBBC4: nop

        goto L_800EBC40;
    // 0x800EBBC4: nop

L_800EBBC8:
    // 0x800EBBC8: jal         0x800E9AFC
    // 0x800EBBCC: nop

    func_800E9AFC(rdram, ctx);
        goto after_6;
    // 0x800EBBCC: nop

    after_6:
    // 0x800EBBD0: b           L_800EBC40
    // 0x800EBBD4: nop

        goto L_800EBC40;
    // 0x800EBBD4: nop

L_800EBBD8:
    // 0x800EBBD8: jal         0x800EA194
    // 0x800EBBDC: nop

    func_800EA194(rdram, ctx);
        goto after_7;
    // 0x800EBBDC: nop

    after_7:
    // 0x800EBBE0: b           L_800EBC40
    // 0x800EBBE4: nop

        goto L_800EBC40;
    // 0x800EBBE4: nop

L_800EBBE8:
    // 0x800EBBE8: jal         0x800EA55C
    // 0x800EBBEC: nop

    func_800EA55C(rdram, ctx);
        goto after_8;
    // 0x800EBBEC: nop

    after_8:
    // 0x800EBBF0: b           L_800EBC40
    // 0x800EBBF4: nop

        goto L_800EBC40;
    // 0x800EBBF4: nop

L_800EBBF8:
    // 0x800EBBF8: jal         0x800EAAB8
    // 0x800EBBFC: nop

    func_800EAAB8(rdram, ctx);
        goto after_9;
    // 0x800EBBFC: nop

    after_9:
    // 0x800EBC00: b           L_800EBC40
    // 0x800EBC04: nop

        goto L_800EBC40;
    // 0x800EBC04: nop

L_800EBC08:
    // 0x800EBC08: jal         0x800EB01C
    // 0x800EBC0C: nop

    func_800EB01C(rdram, ctx);
        goto after_10;
    // 0x800EBC0C: nop

    after_10:
    // 0x800EBC10: b           L_800EBC40
    // 0x800EBC14: nop

        goto L_800EBC40;
    // 0x800EBC14: nop

L_800EBC18:
    // 0x800EBC18: jal         0x800EB61C
    // 0x800EBC1C: nop

    func_800EB61C(rdram, ctx);
        goto after_11;
    // 0x800EBC1C: nop

    after_11:
    // 0x800EBC20: b           L_800EBC40
    // 0x800EBC24: nop

        goto L_800EBC40;
    // 0x800EBC24: nop

L_800EBC28:
    // 0x800EBC28: jal         0x800EB9A4
    // 0x800EBC2C: nop

    func_800EB9A4(rdram, ctx);
        goto after_12;
    // 0x800EBC2C: nop

    after_12:
    // 0x800EBC30: b           L_800EBC40
    // 0x800EBC34: nop

        goto L_800EBC40;
    // 0x800EBC34: nop

L_800EBC38:
    // 0x800EBC38: b           L_800EBC40
    // 0x800EBC3C: nop

        goto L_800EBC40;
    // 0x800EBC3C: nop

L_800EBC40:
    // 0x800EBC40: b           L_800EBC48
    // 0x800EBC44: nop

        goto L_800EBC48;
    // 0x800EBC44: nop

L_800EBC48:
    // 0x800EBC48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBC4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EBC50: jr          $ra
    // 0x800EBC54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800EBC54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A5B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5B74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A5B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A5B7C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A5B80: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A5B84: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A5B88: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A5B8C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A5B90: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A5B94: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A5B98: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A5B9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A5BA0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A5BA4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A5BA8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A5BAC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A5BB0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A5BB4: addiu       $a1, $a1, 0x38F8
    ctx->r5 = ADD32(ctx->r5, 0X38F8);
    // 0x800A5BB8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A5BBC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A5BC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A5BC4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A5BC8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A5BCC: jal         0x80027464
    // 0x800A5BD0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A5BD0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A5BD4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800A5BD8: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A5BDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A5BE0: beq         $t1, $at, L_800A5D00
    if (ctx->r9 == ctx->r1) {
        // 0x800A5BE4: nop
    
            goto L_800A5D00;
    }
    // 0x800A5BE4: nop

    // 0x800A5BE8: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A5BEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A5BF0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A5BF4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A5BF8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A5BFC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A5C00: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A5C04: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A5C08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A5C0C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A5C10: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A5C14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A5C18: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A5C1C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A5C20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A5C24: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A5C28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A5C2C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A5C30: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A5C34: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800A5C38: addiu       $t8, $t8, 0x7088
    ctx->r24 = ADD32(ctx->r24, 0X7088);
    // 0x800A5C3C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A5C40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A5C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5C48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A5C4C: jal         0x8001C0EC
    // 0x800A5C50: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A5C50: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_1:
    // 0x800A5C54: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A5C58: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A5C5C: addiu       $a3, $a3, 0x7108
    ctx->r7 = ADD32(ctx->r7, 0X7108);
    // 0x800A5C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5C64: jal         0x8001ABF4
    // 0x800A5C68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800A5C68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800A5C6C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A5C70: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A5C74: addiu       $a3, $a3, 0x7124
    ctx->r7 = ADD32(ctx->r7, 0X7124);
    // 0x800A5C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A5C7C: jal         0x8001ABF4
    // 0x800A5C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800A5C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800A5C84: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x800A5C88: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800A5C8C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A5C90: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A5C94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A5C98: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A5C9C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A5CA0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A5CA4: lh          $t0, 0x4238($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4238);
    // 0x800A5CA8: nop

    // 0x800A5CAC: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x800A5CB0: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x800A5CB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A5CB8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A5CBC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A5CC0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A5CC4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A5CC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A5CCC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A5CD0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A5CD4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800A5CD8: addiu       $t2, $t2, 0x71B0
    ctx->r10 = ADD32(ctx->r10, 0X71B0);
    // 0x800A5CDC: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A5CE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A5CE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5CE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A5CEC: jal         0x8001C0EC
    // 0x800A5CF0: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800A5CF0: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_4:
    // 0x800A5CF4: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A5CF8: jal         0x8001BB04
    // 0x800A5CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_5;
    // 0x800A5CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_800A5D00:
    // 0x800A5D00: b           L_800A5D08
    // 0x800A5D04: nop

        goto L_800A5D08;
    // 0x800A5D04: nop

L_800A5D08:
    // 0x800A5D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A5D10: jr          $ra
    // 0x800A5D14: nop

    return;
    // 0x800A5D14: nop

;}
RECOMP_FUNC void func_800FCF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCF68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FCF6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FCF70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FCF74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FCF78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FCF7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FCF80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCF84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FCF88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCF8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FCF90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FCF94: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800FCF98: nop

    // 0x800FCF9C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800FCFA0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCFA4: nop

    // 0x800FCFA8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800FCFAC: sltiu       $at, $t0, 0x6
    ctx->r1 = ctx->r8 < 0X6 ? 1 : 0;
    // 0x800FCFB0: beq         $at, $zero, L_800FD02C
    if (ctx->r1 == 0) {
        // 0x800FCFB4: nop
    
            goto L_800FD02C;
    }
    // 0x800FCFB4: nop

    // 0x800FCFB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800FCFBC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FCFC0: addu        $at, $at, $t0
    gpr jr_addend_800FCFCC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800FCFC4: lw          $t0, 0x57D0($at)
    ctx->r8 = ADD32(ctx->r1, 0X57D0);
    // 0x800FCFC8: nop

    // 0x800FCFCC: jr          $t0
    // 0x800FCFD0: nop

    switch (jr_addend_800FCFCC >> 2) {
        case 0: goto L_800FCFD4; break;
        case 1: goto L_800FCFE4; break;
        case 2: goto L_800FD014; break;
        case 3: goto L_800FD004; break;
        case 4: goto L_800FD024; break;
        case 5: goto L_800FCFF4; break;
        default: switch_error(__func__, 0x800FCFCC, 0x801157D0);
    }
    // 0x800FCFD0: nop

L_800FCFD4:
    // 0x800FCFD4: jal         0x800FC2E4
    // 0x800FCFD8: nop

    func_800FC2E4(rdram, ctx);
        goto after_0;
    // 0x800FCFD8: nop

    after_0:
    // 0x800FCFDC: b           L_800FD034
    // 0x800FCFE0: nop

        goto L_800FD034;
    // 0x800FCFE0: nop

L_800FCFE4:
    // 0x800FCFE4: jal         0x800FC6BC
    // 0x800FCFE8: nop

    func_800FC6BC(rdram, ctx);
        goto after_1;
    // 0x800FCFE8: nop

    after_1:
    // 0x800FCFEC: b           L_800FD034
    // 0x800FCFF0: nop

        goto L_800FD034;
    // 0x800FCFF0: nop

L_800FCFF4:
    // 0x800FCFF4: jal         0x800FC8D0
    // 0x800FCFF8: nop

    func_800FC8D0(rdram, ctx);
        goto after_2;
    // 0x800FCFF8: nop

    after_2:
    // 0x800FCFFC: b           L_800FD034
    // 0x800FD000: nop

        goto L_800FD034;
    // 0x800FD000: nop

L_800FD004:
    // 0x800FD004: jal         0x800FCC98
    // 0x800FD008: nop

    func_800FCC98(rdram, ctx);
        goto after_3;
    // 0x800FD008: nop

    after_3:
    // 0x800FD00C: b           L_800FD034
    // 0x800FD010: nop

        goto L_800FD034;
    // 0x800FD010: nop

L_800FD014:
    // 0x800FD014: jal         0x800FCA8C
    // 0x800FD018: nop

    func_800FCA8C(rdram, ctx);
        goto after_4;
    // 0x800FD018: nop

    after_4:
    // 0x800FD01C: b           L_800FD034
    // 0x800FD020: nop

        goto L_800FD034;
    // 0x800FD020: nop

L_800FD024:
    // 0x800FD024: b           L_800FD034
    // 0x800FD028: nop

        goto L_800FD034;
    // 0x800FD028: nop

L_800FD02C:
    // 0x800FD02C: b           L_800FD034
    // 0x800FD030: nop

        goto L_800FD034;
    // 0x800FD030: nop

L_800FD034:
    // 0x800FD034: b           L_800FD03C
    // 0x800FD038: nop

        goto L_800FD03C;
    // 0x800FD038: nop

L_800FD03C:
    // 0x800FD03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FD040: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FD044: jr          $ra
    // 0x800FD048: nop

    return;
    // 0x800FD048: nop

;}
RECOMP_FUNC void func_800CB0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB0DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CB0E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CB0E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB0E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CB0EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CB0F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB0F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB0FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB104: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CB108: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB10C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CB110: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CB114: nop

    // 0x800CB118: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CB11C: nop

    // 0x800CB120: bne         $t1, $zero, L_800CB1CC
    if (ctx->r9 != 0) {
        // 0x800CB124: nop
    
            goto L_800CB1CC;
    }
    // 0x800CB124: nop

    // 0x800CB128: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CB12C: nop

    // 0x800CB130: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CB134: nop

    // 0x800CB138: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CB13C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CB140: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CB144: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800CB148: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CB14C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CB150: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CB154: nop

    // 0x800CB158: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800CB15C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800CB160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB164: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CB168: nop

    // 0x800CB16C: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x800CB170: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800CB174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CB178: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CB17C: nop

    // 0x800CB180: swc1        $f8, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f8.u32l;
    // 0x800CB184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB188: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800CB18C: addiu       $t0, $t0, -0x7E10
    ctx->r8 = ADD32(ctx->r8, -0X7E10);
    // 0x800CB190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB194: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800CB198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CB19C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CB1A0: jal         0x8001C0EC
    // 0x800CB1A4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CB1A4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CB1A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB1AC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800CB1B0: addiu       $t1, $t1, -0x7E00
    ctx->r9 = ADD32(ctx->r9, -0X7E00);
    // 0x800CB1B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB1B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800CB1BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CB1C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CB1C4: jal         0x8001C0EC
    // 0x800CB1C8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CB1C8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
L_800CB1CC:
    // 0x800CB1CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB1D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB1D4: jal         0x80029C40
    // 0x800CB1D8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800CB1D8: nop

    after_2:
    // 0x800CB1DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB1E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB1E4: jal         0x80029D04
    // 0x800CB1E8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800CB1E8: nop

    after_3:
    // 0x800CB1EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CB1F0: nop

    // 0x800CB1F4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800CB1F8: nop

    // 0x800CB1FC: bne         $t4, $zero, L_800CB21C
    if (ctx->r12 != 0) {
        // 0x800CB200: nop
    
            goto L_800CB21C;
    }
    // 0x800CB200: nop

    // 0x800CB204: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CB208: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CB20C: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800CB210: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CB214: b           L_800CB234
    // 0x800CB218: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800CB234;
    // 0x800CB218: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800CB21C:
    // 0x800CB21C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CB220: nop

    // 0x800CB224: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800CB228: nop

    // 0x800CB22C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800CB230: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_800CB234:
    // 0x800CB234: b           L_800CB23C
    // 0x800CB238: nop

        goto L_800CB23C;
    // 0x800CB238: nop

L_800CB23C:
    // 0x800CB23C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CB244: jr          $ra
    // 0x800CB248: nop

    return;
    // 0x800CB248: nop

;}
RECOMP_FUNC void func_800965EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800965EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800965F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800965F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800965F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800965FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096600: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096608: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009660C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096610: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096614: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80096618: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009661C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80096620: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096624: nop

    // 0x80096628: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009662C: nop

    // 0x80096630: bne         $t1, $zero, L_80096698
    if (ctx->r9 != 0) {
        // 0x80096634: nop
    
            goto L_80096698;
    }
    // 0x80096634: nop

    // 0x80096638: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009663C: nop

    // 0x80096640: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80096644: nop

    // 0x80096648: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009664C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80096650: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80096654: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80096658: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x8009665C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80096660: lb          $t7, -0x1CD8($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1CD8);
    // 0x80096664: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80096668: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8009666C: sb          $t8, -0x1CD8($at)
    MEM_B(-0X1CD8, ctx->r1) = ctx->r24;
    // 0x80096670: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80096674: jal         0x800964CC
    // 0x80096678: nop

    func_800964CC(rdram, ctx);
        goto after_0;
    // 0x80096678: nop

    after_0:
    // 0x8009667C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80096688: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x8009668C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80096690: jal         0x800175F0
    // 0x80096694: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80096694: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80096698:
    // 0x80096698: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009669C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800966A0: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800966A4: nop

    // 0x800966A8: bne         $t0, $at, L_800966BC
    if (ctx->r8 != ctx->r1) {
        // 0x800966AC: nop
    
            goto L_800966BC;
    }
    // 0x800966AC: nop

    // 0x800966B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800966B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800966B8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
L_800966BC:
    // 0x800966BC: b           L_800966C4
    // 0x800966C0: nop

        goto L_800966C4;
    // 0x800966C0: nop

L_800966C4:
    // 0x800966C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800966C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800966CC: jr          $ra
    // 0x800966D0: nop

    return;
    // 0x800966D0: nop

;}
RECOMP_FUNC void func_80082678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082678: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008267C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80082680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80082684: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x80082688: nop

    // 0x8008268C: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80082690: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80082694: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x80082698: nop

    // 0x8008269C: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
    // 0x800826A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800826A4: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x800826A8: nop

    // 0x800826AC: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x800826B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800826B4: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800826B8: nop

    // 0x800826BC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800826C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800826C4: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x800826C8: nop

    // 0x800826CC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800826D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800826D4: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x800826D8: nop

    // 0x800826DC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800826E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800826E4: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x800826E8: nop

    // 0x800826EC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x800826F0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800826F4: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x800826F8: nop

    // 0x800826FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80082700: addiu       $t0, $zero, 0xAB
    ctx->r8 = ADD32(0, 0XAB);
    // 0x80082704: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082708: sw          $t0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r8;
    // 0x8008270C: jal         0x80081C50
    // 0x80082710: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x80082710: nop

    after_0:
    // 0x80082714: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082718: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x8008271C: jal         0x800824A8
    // 0x80082720: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082720: nop

    after_1:
    // 0x80082724: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80082728: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008272C: sw          $t1, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r9;
    // 0x80082730: lh          $t2, 0x20($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X20);
    // 0x80082734: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082738: sh          $t2, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r10;
    // 0x8008273C: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x80082740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082744: sh          $t3, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r11;
    // 0x80082748: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x8008274C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082750: sh          $t4, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r12;
    // 0x80082754: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082758: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008275C: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082760: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082764: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082768: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x8008276C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80082770: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082774: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082778: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8008277C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082780: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082784: b           L_8008278C
    // 0x80082788: nop

        goto L_8008278C;
    // 0x80082788: nop

L_8008278C:
    // 0x8008278C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80082794: jr          $ra
    // 0x80082798: nop

    return;
    // 0x80082798: nop

;}
RECOMP_FUNC void func_80093374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093374: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009337C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093380: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093384: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093388: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009338C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093390: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093394: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093398: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009339C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800933A0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800933A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800933A8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800933AC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800933B0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800933B4: addiu       $a1, $a1, 0x17EC
    ctx->r5 = ADD32(ctx->r5, 0X17EC);
    // 0x800933B8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800933BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800933C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800933C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800933C8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800933CC: jal         0x80027464
    // 0x800933D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800933D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800933D4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800933D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800933DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800933E0: addiu       $a3, $a3, 0x2064
    ctx->r7 = ADD32(ctx->r7, 0X2064);
    // 0x800933E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800933E8: jal         0x8001ABF4
    // 0x800933EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800933EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800933F0: b           L_800933F8
    // 0x800933F4: nop

        goto L_800933F8;
    // 0x800933F4: nop

L_800933F8:
    // 0x800933F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800933FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093400: jr          $ra
    // 0x80093404: nop

    return;
    // 0x80093404: nop

;}
RECOMP_FUNC void func_800D6C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D6C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D6C1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6C20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6C24: jal         0x8002B114
    // 0x800D6C28: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800D6C28: nop

    after_0:
    // 0x800D6C2C: b           L_800D6C34
    // 0x800D6C30: nop

        goto L_800D6C34;
    // 0x800D6C30: nop

L_800D6C34:
    // 0x800D6C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D6C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D6C3C: jr          $ra
    // 0x800D6C40: nop

    return;
    // 0x800D6C40: nop

;}
RECOMP_FUNC void func_80076640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076640: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076644: sb          $zero, 0x790A($at)
    MEM_B(0X790A, ctx->r1) = 0;
    // 0x80076648: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007664C: sw          $zero, 0x7924($at)
    MEM_W(0X7924, ctx->r1) = 0;
    // 0x80076650: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076654: sb          $zero, 0x790E($at)
    MEM_B(0X790E, ctx->r1) = 0;
    // 0x80076658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007665C: sb          $zero, 0x7912($at)
    MEM_B(0X7912, ctx->r1) = 0;
    // 0x80076660: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076664: sb          $zero, 0x791A($at)
    MEM_B(0X791A, ctx->r1) = 0;
    // 0x80076668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007666C: sh          $zero, 0x792A($at)
    MEM_H(0X792A, ctx->r1) = 0;
    // 0x80076670: jr          $ra
    // 0x80076674: nop

    return;
    // 0x80076674: nop

    // 0x80076678: jr          $ra
    // 0x8007667C: nop

    return;
    // 0x8007667C: nop

;}
RECOMP_FUNC void func_800D8AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8AD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D8AD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D8AD8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D8ADC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D8AE0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D8AE4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D8AE8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D8AEC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D8AF0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D8AF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D8AF8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D8AFC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D8B00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D8B04: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D8B08: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D8B0C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D8B10: addiu       $a1, $a1, 0x4270
    ctx->r5 = ADD32(ctx->r5, 0X4270);
    // 0x800D8B14: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D8B18: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D8B1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D8B20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D8B24: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D8B28: jal         0x80027464
    // 0x800D8B2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D8B2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D8B30: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800D8B34: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D8B38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D8B3C: beq         $t1, $at, L_800D8E18
    if (ctx->r9 == ctx->r1) {
        // 0x800D8B40: nop
    
            goto L_800D8E18;
    }
    // 0x800D8B40: nop

    // 0x800D8B44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D8B48: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800D8B4C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800D8B50: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D8B54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D8B58: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800D8B5C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D8B60: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D8B64: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800D8B68: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800D8B6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D8B70: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800D8B74: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800D8B78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D8B7C: nop

    // 0x800D8B80: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800D8B84: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800D8B88: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800D8B8C: sh          $t8, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r24;
    // 0x800D8B90: nop

    // 0x800D8B94: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D8B98: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D8B9C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800D8BA0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800D8BA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D8BA8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800D8BAC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800D8BB0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D8BB4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800D8BB8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D8BBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D8BC0: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800D8BC4: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800D8BC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D8BCC: nop

    // 0x800D8BD0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D8BD4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800D8BD8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D8BDC: sh          $t3, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r11;
    // 0x800D8BE0: nop

    // 0x800D8BE4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800D8BE8: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800D8BEC: nop

    // 0x800D8BF0: lh          $t7, 0xA($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA);
    // 0x800D8BF4: nop

    // 0x800D8BF8: bne         $t7, $zero, L_800D8C10
    if (ctx->r15 != 0) {
        // 0x800D8BFC: nop
    
            goto L_800D8C10;
    }
    // 0x800D8BFC: nop

    // 0x800D8C00: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800D8C04: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800D8C08: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x800D8C0C: sh          $t8, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r24;
L_800D8C10:
    // 0x800D8C10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D8C14: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800D8C18: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800D8C1C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800D8C20: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800D8C24: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800D8C28: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800D8C2C: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x800D8C30: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800D8C34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D8C38: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800D8C3C: sh          $t6, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r14;
    // 0x800D8C40: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800D8C44: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x800D8C48: nop

    // 0x800D8C4C: lh          $t1, 0xC($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XC);
    // 0x800D8C50: nop

    // 0x800D8C54: bne         $t1, $zero, L_800D8C6C
    if (ctx->r9 != 0) {
        // 0x800D8C58: nop
    
            goto L_800D8C6C;
    }
    // 0x800D8C58: nop

    // 0x800D8C5C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800D8C60: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800D8C64: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800D8C68: sh          $t4, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r12;
L_800D8C6C:
    // 0x800D8C6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D8C70: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800D8C74: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D8C78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D8C7C: lw          $t8, 0x5100($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5100);
    // 0x800D8C80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D8C84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D8C88: lh          $t5, 0xC($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XC);
    // 0x800D8C8C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D8C90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D8C94: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800D8C98: sh          $t5, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r13;
    // 0x800D8C9C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D8CA0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D8CA4: nop

    // 0x800D8CA8: lh          $t2, 0xE($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XE);
    // 0x800D8CAC: nop

    // 0x800D8CB0: bne         $t2, $zero, L_800D8CC8
    if (ctx->r10 != 0) {
        // 0x800D8CB4: nop
    
            goto L_800D8CC8;
    }
    // 0x800D8CB4: nop

    // 0x800D8CB8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800D8CBC: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800D8CC0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800D8CC4: sh          $t3, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r11;
L_800D8CC8:
    // 0x800D8CC8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D8CCC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800D8CD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D8CD4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D8CD8: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800D8CDC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D8CE0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D8CE4: lh          $t7, 0xE($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XE);
    // 0x800D8CE8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D8CEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D8CF0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D8CF4: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
    // 0x800D8CF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D8CFC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800D8D00: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x800D8D04: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x800D8D08: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D8D0C: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x800D8D10: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D8D14: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800D8D18: lh          $t6, 0x41F6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F6);
    // 0x800D8D1C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D8D20: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800D8D24: lwc1        $f5, 0x5110($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5110);
    // 0x800D8D28: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800D8D2C: lwc1        $f4, 0x5114($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5114);
    // 0x800D8D30: nop

    // 0x800D8D34: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800D8D38: jal         0x80034970
    // 0x800D8D3C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800D8D3C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x800D8D40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D8D44: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800D8D48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800D8D4C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D8D50: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D8D54: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800D8D58: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D8D5C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800D8D60: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x800D8D64: lh          $t8, 0xBA($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XBA);
    // 0x800D8D68: lh          $t7, 0xB6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XB6);
    // 0x800D8D6C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800D8D70: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800D8D74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D8D78: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800D8D7C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D8D80: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800D8D84: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    // 0x800D8D88: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D8D8C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800D8D90: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x800D8D94: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x800D8D98: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D8D9C: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x800D8DA0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D8DA4: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x800D8DA8: lh          $t0, 0x41F6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F6);
    // 0x800D8DAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D8DB0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800D8DB4: lwc1        $f19, 0x5118($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5118);
    // 0x800D8DB8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800D8DBC: lwc1        $f18, 0x511C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X511C);
    // 0x800D8DC0: nop

    // 0x800D8DC4: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800D8DC8: jal         0x80036570
    // 0x800D8DCC: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x800D8DCC: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x800D8DD0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D8DD4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800D8DD8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x800D8DDC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x800D8DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800D8DE4: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x800D8DE8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800D8DEC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800D8DF0: addu        $t1, $t2, $t3
    ctx->r9 = ADD32(ctx->r10, ctx->r11);
    // 0x800D8DF4: lh          $t8, 0xBA($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XBA);
    // 0x800D8DF8: lh          $t7, 0xB8($t1)
    ctx->r15 = MEM_H(ctx->r9, 0XB8);
    // 0x800D8DFC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800D8E00: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800D8E04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D8E08: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800D8E0C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D8E10: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800D8E14: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_800D8E18:
    // 0x800D8E18: b           L_800D8E20
    // 0x800D8E1C: nop

        goto L_800D8E20;
    // 0x800D8E1C: nop

L_800D8E20:
    // 0x800D8E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D8E28: jr          $ra
    // 0x800D8E2C: nop

    return;
    // 0x800D8E2C: nop

;}
RECOMP_FUNC void func_80096900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096900: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096904: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096908: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009690C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096910: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009691C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096924: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096928: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009692C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80096930: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80096934: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096938: nop

    // 0x8009693C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80096940: nop

    // 0x80096944: bne         $t1, $zero, L_80096988
    if (ctx->r9 != 0) {
        // 0x80096948: nop
    
            goto L_80096988;
    }
    // 0x80096948: nop

    // 0x8009694C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80096950: nop

    // 0x80096954: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80096958: nop

    // 0x8009695C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80096960: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80096964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096968: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009696C: addiu       $t5, $t5, 0x6938
    ctx->r13 = ADD32(ctx->r13, 0X6938);
    // 0x80096970: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096974: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80096978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009697C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80096980: jal         0x8001C0EC
    // 0x80096984: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80096984: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    after_0:
L_80096988:
    // 0x80096988: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009698C: jal         0x80096894
    // 0x80096990: nop

    func_80096894(rdram, ctx);
        goto after_1;
    // 0x80096990: nop

    after_1:
    // 0x80096994: b           L_8009699C
    // 0x80096998: nop

        goto L_8009699C;
    // 0x80096998: nop

L_8009699C:
    // 0x8009699C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800969A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800969A4: jr          $ra
    // 0x800969A8: nop

    return;
    // 0x800969A8: nop

;}
RECOMP_FUNC void func_800E6D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6D2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6D34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6D38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6D3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6D40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6D44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6D48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6D4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6D50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6D54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6D58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6D5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E6D60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6D64: nop

    // 0x800E6D68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6D6C: nop

    // 0x800E6D70: bne         $t1, $zero, L_800E6DC8
    if (ctx->r9 != 0) {
        // 0x800E6D74: nop
    
            goto L_800E6DC8;
    }
    // 0x800E6D74: nop

    // 0x800E6D78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E6D7C: nop

    // 0x800E6D80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6D84: nop

    // 0x800E6D88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6D8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6D90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6D94: nop

    // 0x800E6D98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E6D9C: nop

    // 0x800E6DA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6DA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E6DAC: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E6DB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6DB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E6DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6DBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800E6DC0: jal         0x8001C0EC
    // 0x800E6DC4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6DC4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E6DC8:
    // 0x800E6DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6DD0: jal         0x8002A8B4
    // 0x800E6DD4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800E6DD4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x800E6DD8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E6DDC: nop

    // 0x800E6DE0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E6DE4: nop

    // 0x800E6DE8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E6DEC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E6DF0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E6DF4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E6DF8: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800E6DFC: jal         0x80015538
    // 0x800E6E00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800E6E00: nop

    after_2:
    // 0x800E6E04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6E08: nop

    // 0x800E6E0C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800E6E10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6E14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6E18: jal         0x8001B4AC
    // 0x800E6E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E6E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E6E20: beq         $v0, $zero, L_800E6E68
    if (ctx->r2 == 0) {
        // 0x800E6E24: nop
    
            goto L_800E6E68;
    }
    // 0x800E6E24: nop

    // 0x800E6E28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E6E2C: nop

    // 0x800E6E30: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800E6E34: nop

    // 0x800E6E38: bne         $t3, $zero, L_800E6E50
    if (ctx->r11 != 0) {
        // 0x800E6E3C: nop
    
            goto L_800E6E50;
    }
    // 0x800E6E3C: nop

    // 0x800E6E40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E6E44: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800E6E48: b           L_800E6E5C
    // 0x800E6E4C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
        goto L_800E6E5C;
    // 0x800E6E4C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
L_800E6E50:
    // 0x800E6E50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6E54: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800E6E58: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
L_800E6E5C:
    // 0x800E6E5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E6E60: nop

    // 0x800E6E64: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800E6E68:
    // 0x800E6E68: b           L_800E6E70
    // 0x800E6E6C: nop

        goto L_800E6E70;
    // 0x800E6E6C: nop

L_800E6E70:
    // 0x800E6E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E6E78: jr          $ra
    // 0x800E6E7C: nop

    return;
    // 0x800E6E7C: nop

;}
RECOMP_FUNC void func_8009ECE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ECE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009ECEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009ECF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009ECF4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009ECF8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009ECFC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009ED00: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009ED04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009ED08: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009ED0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009ED10: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009ED14: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009ED18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009ED1C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009ED20: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009ED24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009ED28: addiu       $a1, $a1, 0x36A0
    ctx->r5 = ADD32(ctx->r5, 0X36A0);
    // 0x8009ED2C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009ED30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009ED34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009ED38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009ED3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009ED40: jal         0x80027464
    // 0x8009ED44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009ED44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009ED48: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009ED4C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009ED50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009ED54: beq         $t1, $at, L_8009ED70
    if (ctx->r9 == ctx->r1) {
        // 0x8009ED58: nop
    
            goto L_8009ED70;
    }
    // 0x8009ED58: nop

    // 0x8009ED5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009ED60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009ED64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009ED68: jal         0x80019448
    // 0x8009ED6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8009ED6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_8009ED70:
    // 0x8009ED70: b           L_8009ED78
    // 0x8009ED74: nop

        goto L_8009ED78;
    // 0x8009ED74: nop

L_8009ED78:
    // 0x8009ED78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009ED7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009ED80: jr          $ra
    // 0x8009ED84: nop

    return;
    // 0x8009ED84: nop

;}
RECOMP_FUNC void Update_ObjPyonPyon(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C38A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C38AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C38B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C38B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C38B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C38BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C38C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C38C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C38C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C38CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C38D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C38D4: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C38D8: nop

    // 0x800C38DC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C38E0: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x800C38E4: beq         $at, $zero, L_800C3958
    if (ctx->r1 == 0) {
        // 0x800C38E8: nop
    
            goto L_800C3958;
    }
    // 0x800C38E8: nop

    // 0x800C38EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C38F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C38F4: addu        $at, $at, $t9
    gpr jr_addend_800C3900 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C38F8: lw          $t9, 0x4D60($at)
    ctx->r25 = ADD32(ctx->r1, 0X4D60);
    // 0x800C38FC: nop

    // 0x800C3900: jr          $t9
    // 0x800C3904: nop

    switch (jr_addend_800C3900 >> 2) {
        case 0: goto L_800C3908; break;
        case 1: goto L_800C3918; break;
        case 2: goto L_800C3928; break;
        case 3: goto L_800C3938; break;
        case 4: goto L_800C3948; break;
        default: switch_error(__func__, 0x800C3900, 0x80114D60);
    }
    // 0x800C3904: nop

L_800C3908:
    // 0x800C3908: jal         0x800C2EC8
    // 0x800C390C: nop

    func_800C2EC8(rdram, ctx);
        goto after_0;
    // 0x800C390C: nop

    after_0:
    // 0x800C3910: b           L_800C3960
    // 0x800C3914: nop

        goto L_800C3960;
    // 0x800C3914: nop

L_800C3918:
    // 0x800C3918: jal         0x800C304C
    // 0x800C391C: nop

    func_800C304C(rdram, ctx);
        goto after_1;
    // 0x800C391C: nop

    after_1:
    // 0x800C3920: b           L_800C3960
    // 0x800C3924: nop

        goto L_800C3960;
    // 0x800C3924: nop

L_800C3928:
    // 0x800C3928: jal         0x800C31D4
    // 0x800C392C: nop

    func_800C31D4(rdram, ctx);
        goto after_2;
    // 0x800C392C: nop

    after_2:
    // 0x800C3930: b           L_800C3960
    // 0x800C3934: nop

        goto L_800C3960;
    // 0x800C3934: nop

L_800C3938:
    // 0x800C3938: jal         0x800C3454
    // 0x800C393C: nop

    func_800C3454(rdram, ctx);
        goto after_3;
    // 0x800C393C: nop

    after_3:
    // 0x800C3940: b           L_800C3960
    // 0x800C3944: nop

        goto L_800C3960;
    // 0x800C3944: nop

L_800C3948:
    // 0x800C3948: jal         0x800C3670
    // 0x800C394C: nop

    func_800C3670(rdram, ctx);
        goto after_4;
    // 0x800C394C: nop

    after_4:
    // 0x800C3950: b           L_800C3960
    // 0x800C3954: nop

        goto L_800C3960;
    // 0x800C3954: nop

L_800C3958:
    // 0x800C3958: b           L_800C3960
    // 0x800C395C: nop

        goto L_800C3960;
    // 0x800C395C: nop

L_800C3960:
    // 0x800C3960: b           L_800C3968
    // 0x800C3964: nop

        goto L_800C3968;
    // 0x800C3964: nop

L_800C3968:
    // 0x800C3968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C396C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C3970: jr          $ra
    // 0x800C3974: nop

    return;
    // 0x800C3974: nop

;}
RECOMP_FUNC void func_80080978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008097C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080984: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080988: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008098C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080994: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080998: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008099C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800809A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800809A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800809A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800809AC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800809B0: nop

    // 0x800809B4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800809B8: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x800809BC: nop

    // 0x800809C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800809C4: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x800809C8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800809CC: nop

    // 0x800809D0: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800809D4: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800809D8: nop

    // 0x800809DC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800809E0: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x800809E4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800809E8: nop

    // 0x800809EC: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800809F0: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800809F4: nop

    // 0x800809F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800809FC: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
    // 0x80080A00: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80080A04: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080A08: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80080A0C: lwc1        $f19, -0x34E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X34E8);
    // 0x80080A10: lwc1        $f18, -0x34E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X34E4);
    // 0x80080A14: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80080A18: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80080A1C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80080A20: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x80080A24: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80080A28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80080A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80080A30: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80080A34: nop

    // 0x80080A38: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80080A3C: nop

    // 0x80080A40: bc1f        L_80080AB4
    if (!c1cs) {
        // 0x80080A44: nop
    
            goto L_80080AB4;
    }
    // 0x80080A44: nop

    // 0x80080A48: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80080A4C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080A50: lwc1        $f16, 0xC($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80080A54: lwc1        $f5, -0x34E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X34E0);
    // 0x80080A58: lwc1        $f4, -0x34DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X34DC);
    // 0x80080A5C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80080A60: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80080A64: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80080A68: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x80080A6C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80080A70: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080A74: lwc1        $f10, 0x10($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X10);
    // 0x80080A78: lwc1        $f19, -0x34D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X34D8);
    // 0x80080A7C: lwc1        $f18, -0x34D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X34D4);
    // 0x80080A80: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80080A84: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80080A88: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80080A8C: swc1        $f6, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f6.u32l;
    // 0x80080A90: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80080A94: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080A98: lwc1        $f8, 0x14($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X14);
    // 0x80080A9C: lwc1        $f17, -0x34D0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X34D0);
    // 0x80080AA0: lwc1        $f16, -0x34CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X34CC);
    // 0x80080AA4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80080AA8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80080AAC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80080AB0: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
L_80080AB4:
    // 0x80080AB4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80080AB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80080ABC: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80080AC0: nop

    // 0x80080AC4: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80080AC8: nop

    // 0x80080ACC: bc1f        L_80080AE4
    if (!c1cs) {
        // 0x80080AD0: nop
    
            goto L_80080AE4;
    }
    // 0x80080AD0: nop

    // 0x80080AD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080AD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080ADC: jal         0x8001A928
    // 0x80080AE0: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80080AE0: nop

    after_0:
L_80080AE4:
    // 0x80080AE4: b           L_80080AEC
    // 0x80080AE8: nop

        goto L_80080AEC;
    // 0x80080AE8: nop

L_80080AEC:
    // 0x80080AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080AF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080AF4: jr          $ra
    // 0x80080AF8: nop

    return;
    // 0x80080AF8: nop

;}
RECOMP_FUNC void func_8008EBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EBEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008EBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EBF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008EBF8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008EBFC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008EC00: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008EC04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008EC08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EC0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EC10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EC14: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8008EC18: lw          $a0, 0x4D48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4D48);
    // 0x8008EC1C: jal         0x8001BBDC
    // 0x8008EC20: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8008EC20: nop

    after_0:
    // 0x8008EC24: b           L_8008EC2C
    // 0x8008EC28: nop

        goto L_8008EC2C;
    // 0x8008EC28: nop

L_8008EC2C:
    // 0x8008EC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008EC30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008EC34: jr          $ra
    // 0x8008EC38: nop

    return;
    // 0x8008EC38: nop

;}
RECOMP_FUNC void func_800AD8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD8CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AD8D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AD8D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AD8D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD8DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AD8E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AD8E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AD8E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD8EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AD8F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD8F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AD8F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AD8FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AD900: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AD904: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD908: nop

    // 0x800AD90C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AD910: nop

    // 0x800AD914: bne         $t1, $zero, L_800AD990
    if (ctx->r9 != 0) {
        // 0x800AD918: nop
    
            goto L_800AD990;
    }
    // 0x800AD918: nop

    // 0x800AD91C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD920: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AD924: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AD928: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800AD92C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AD930: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD934: nop

    // 0x800AD938: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AD93C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AD940: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD944: nop

    // 0x800AD948: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AD94C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD950: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x800AD954: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800AD958: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD95C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD960: jal         0x8002A560
    // 0x800AD964: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x800AD964: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_0:
    // 0x800AD968: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD96C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x800AD970: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800AD974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD97C: jal         0x8002A46C
    // 0x800AD980: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800AD980: nop

    after_1:
    // 0x800AD984: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD988: nop

    // 0x800AD98C: swc1        $f0, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f0.u32l;
L_800AD990:
    // 0x800AD990: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AD998: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800AD99C: nop

    // 0x800AD9A0: bne         $t2, $at, L_800AD9E4
    if (ctx->r10 != ctx->r1) {
        // 0x800AD9A4: nop
    
            goto L_800AD9E4;
    }
    // 0x800AD9A4: nop

    // 0x800AD9A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD9AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AD9B0: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800AD9B4: lw          $a2, 0xD4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0XD4);
    // 0x800AD9B8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800AD9BC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800AD9C0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AD9C4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800AD9C8: jal         0x800BFFCC
    // 0x800AD9CC: nop

    func_800BFFCC(rdram, ctx);
        goto after_2;
    // 0x800AD9CC: nop

    after_2:
    // 0x800AD9D0: bne         $v0, $zero, L_800AD9E4
    if (ctx->r2 != 0) {
        // 0x800AD9D4: nop
    
            goto L_800AD9E4;
    }
    // 0x800AD9D4: nop

    // 0x800AD9D8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD9DC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800AD9E0: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_800AD9E4:
    // 0x800AD9E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD9E8: nop

    // 0x800AD9EC: lwc1        $f10, 0x3C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800AD9F0: nop

    // 0x800AD9F4: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    // 0x800AD9F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD9FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADA00: jal         0x80029C40
    // 0x800ADA04: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800ADA04: nop

    after_3:
    // 0x800ADA08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ADA0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADA10: jal         0x80028FA0
    // 0x800ADA14: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800ADA14: nop

    after_4:
    // 0x800ADA18: beq         $v0, $zero, L_800ADA30
    if (ctx->r2 == 0) {
        // 0x800ADA1C: nop
    
            goto L_800ADA30;
    }
    // 0x800ADA1C: nop

    // 0x800ADA20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ADA24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADA28: jal         0x80029B60
    // 0x800ADA2C: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800ADA2C: nop

    after_5:
L_800ADA30:
    // 0x800ADA30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ADA34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800ADA38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ADA3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADA44: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800ADA48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ADA4C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800ADA50: jal         0x80029018
    // 0x800ADA54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800ADA54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800ADA58: beq         $v0, $zero, L_800ADA88
    if (ctx->r2 == 0) {
        // 0x800ADA5C: nop
    
            goto L_800ADA88;
    }
    // 0x800ADA5C: nop

    // 0x800ADA60: jal         0x800297DC
    // 0x800ADA64: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800ADA64: nop

    after_7:
    // 0x800ADA68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ADA6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADA70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800ADA74: jal         0x80029824
    // 0x800ADA78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800ADA78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800ADA7C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ADA80: nop

    // 0x800ADA84: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800ADA88:
    // 0x800ADA88: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ADA8C: nop

    // 0x800ADA90: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800ADA94: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800ADA98: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800ADA9C: nop

    // 0x800ADAA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ADAA4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800ADAA8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800ADAAC: nop

    // 0x800ADAB0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800ADAB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800ADAB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800ADABC: nop

    // 0x800ADAC0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800ADAC4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x800ADAC8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800ADACC: sh          $t2, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r10;
    // 0x800ADAD0: nop

    // 0x800ADAD4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ADAD8: nop

    // 0x800ADADC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800ADAE0: nop

    // 0x800ADAE4: bgez        $t4, L_800ADB04
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800ADAE8: nop
    
            goto L_800ADB04;
    }
    // 0x800ADAE8: nop

    // 0x800ADAEC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ADAF0: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800ADAF4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800ADAF8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ADAFC: nop

    // 0x800ADB00: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800ADB04:
    // 0x800ADB04: b           L_800ADB0C
    // 0x800ADB08: nop

        goto L_800ADB0C;
    // 0x800ADB08: nop

L_800ADB0C:
    // 0x800ADB0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800ADB10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800ADB14: jr          $ra
    // 0x800ADB18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800ADB18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CF4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF4B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF4B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF4BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CF4C0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CF4C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CF4C8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CF4CC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CF4D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CF4D4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CF4D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CF4DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CF4E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CF4E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CF4E8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800CF4EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CF4F0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800CF4F4: addiu       $a1, $a1, 0x409C
    ctx->r5 = ADD32(ctx->r5, 0X409C);
    // 0x800CF4F8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CF4FC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CF500: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF504: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CF508: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CF50C: jal         0x80027464
    // 0x800CF510: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CF510: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800CF514: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CF518: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CF51C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CF520: beq         $t1, $at, L_800CF558
    if (ctx->r9 == ctx->r1) {
        // 0x800CF524: nop
    
            goto L_800CF558;
    }
    // 0x800CF524: nop

    // 0x800CF528: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CF52C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800CF530: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800CF534: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CF538: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800CF53C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CF540: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CF544: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x800CF548: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CF54C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CF550: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CF554: sh          $t3, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r11;
L_800CF558:
    // 0x800CF558: b           L_800CF560
    // 0x800CF55C: nop

        goto L_800CF560;
    // 0x800CF55C: nop

L_800CF560:
    // 0x800CF560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF564: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF568: jr          $ra
    // 0x800CF56C: nop

    return;
    // 0x800CF56C: nop

;}
RECOMP_FUNC void func_800B33E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B33E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B33E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B33EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B33F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B33F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B33F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B33FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B3400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B340C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3410: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B3414: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800B3418: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B341C: bne         $t8, $at, L_800B3494
    if (ctx->r24 != ctx->r1) {
        // 0x800B3420: nop
    
            goto L_800B3494;
    }
    // 0x800B3420: nop

    // 0x800B3424: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B3428: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B342C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800B3430: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B3434: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B3438: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B343C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B3440: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B3444: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800B3448: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800B344C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B3450: beq         $s0, $at, L_800B346C
    if (ctx->r16 == ctx->r1) {
        // 0x800B3454: nop
    
            goto L_800B346C;
    }
    // 0x800B3454: nop

    // 0x800B3458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B345C: beq         $s0, $at, L_800B347C
    if (ctx->r16 == ctx->r1) {
        // 0x800B3460: nop
    
            goto L_800B347C;
    }
    // 0x800B3460: nop

    // 0x800B3464: b           L_800B348C
    // 0x800B3468: nop

        goto L_800B348C;
    // 0x800B3468: nop

L_800B346C:
    // 0x800B346C: jal         0x800B3118
    // 0x800B3470: nop

    func_800B3118(rdram, ctx);
        goto after_0;
    // 0x800B3470: nop

    after_0:
    // 0x800B3474: b           L_800B3494
    // 0x800B3478: nop

        goto L_800B3494;
    // 0x800B3478: nop

L_800B347C:
    // 0x800B347C: jal         0x800B33B4
    // 0x800B3480: nop

    func_800B33B4(rdram, ctx);
        goto after_1;
    // 0x800B3480: nop

    after_1:
    // 0x800B3484: b           L_800B3494
    // 0x800B3488: nop

        goto L_800B3494;
    // 0x800B3488: nop

L_800B348C:
    // 0x800B348C: b           L_800B3494
    // 0x800B3490: nop

        goto L_800B3494;
    // 0x800B3490: nop

L_800B3494:
    // 0x800B3494: b           L_800B349C
    // 0x800B3498: nop

        goto L_800B349C;
    // 0x800B3498: nop

L_800B349C:
    // 0x800B349C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B34A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B34A4: jr          $ra
    // 0x800B34A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B34A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80094800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80094804: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094808: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009480C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80094810: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094814: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80094818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009481C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80094824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009482C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80094830: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80094834: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80094838: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8009483C: nop

    // 0x80094840: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80094844: nop

    // 0x80094848: bne         $t1, $zero, L_80094894
    if (ctx->r9 != 0) {
        // 0x8009484C: nop
    
            goto L_80094894;
    }
    // 0x8009484C: nop

    // 0x80094850: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80094854: nop

    // 0x80094858: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009485C: nop

    // 0x80094860: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80094864: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80094868: jal         0x80014E80
    // 0x8009486C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8009486C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80094870: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80094874: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80094878: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009487C: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80094880: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80094884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80094888: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8009488C: nop

    // 0x80094890: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
L_80094894:
    // 0x80094894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009489C: jal         0x80028FA0
    // 0x800948A0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800948A0: nop

    after_1:
    // 0x800948A4: beq         $v0, $zero, L_800948BC
    if (ctx->r2 == 0) {
        // 0x800948A8: nop
    
            goto L_800948BC;
    }
    // 0x800948A8: nop

    // 0x800948AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800948B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800948B4: jal         0x80029B60
    // 0x800948B8: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800948B8: nop

    after_2:
L_800948BC:
    // 0x800948BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800948C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800948C4: nop

    // 0x800948C8: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
    // 0x800948CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800948D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800948D4: jal         0x80029C40
    // 0x800948D8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800948D8: nop

    after_3:
    // 0x800948DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800948E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800948E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800948E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800948EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800948F0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800948F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800948F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800948FC: jal         0x80029018
    // 0x80094900: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x80094900: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x80094904: beq         $v0, $zero, L_80094928
    if (ctx->r2 == 0) {
        // 0x80094908: nop
    
            goto L_80094928;
    }
    // 0x80094908: nop

    // 0x8009490C: jal         0x800297DC
    // 0x80094910: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x80094910: nop

    after_5:
    // 0x80094914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009491C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80094920: jal         0x80029824
    // 0x80094924: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x80094924: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_80094928:
    // 0x80094928: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009492C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094930: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094938: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8009493C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80094940: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094944: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80094948: jal         0x800295C0
    // 0x8009494C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x8009494C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80094950: beq         $v0, $zero, L_80094968
    if (ctx->r2 == 0) {
        // 0x80094954: nop
    
            goto L_80094968;
    }
    // 0x80094954: nop

    // 0x80094958: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009495C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80094960: b           L_80094978
    // 0x80094964: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
        goto L_80094978;
    // 0x80094964: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
L_80094968:
    // 0x80094968: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009496C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80094970: nop

    // 0x80094974: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_80094978:
    // 0x80094978: b           L_80094980
    // 0x8009497C: nop

        goto L_80094980;
    // 0x8009497C: nop

L_80094980:
    // 0x80094980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094984: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80094988: jr          $ra
    // 0x8009498C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009498C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F71C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F71C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F71C4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800F71C8: nop

    // 0x800F71CC: bne         $t6, $zero, L_800F7204
    if (ctx->r14 != 0) {
        // 0x800F71D0: nop
    
            goto L_800F7204;
    }
    // 0x800F71D0: nop

    // 0x800F71D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F71D8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F71DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F71E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F71E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F71E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F71EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F71F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F71F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F71F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800F71FC: b           L_800F7274
    // 0x800F7200: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
        goto L_800F7274;
    // 0x800F7200: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
L_800F7204:
    // 0x800F7204: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F7208: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F720C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F7210: bne         $t0, $at, L_800F7248
    if (ctx->r8 != ctx->r1) {
        // 0x800F7214: nop
    
            goto L_800F7248;
    }
    // 0x800F7214: nop

    // 0x800F7218: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800F721C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800F7220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7224: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F7228: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F722C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F7230: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F7234: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F7238: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F723C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F7240: b           L_800F7274
    // 0x800F7244: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
        goto L_800F7274;
    // 0x800F7244: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
L_800F7248:
    // 0x800F7248: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800F724C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800F7250: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7254: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F7258: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F725C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F7260: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F7264: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F7268: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F726C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F7270: sh          $t4, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r12;
L_800F7274:
    // 0x800F7274: jr          $ra
    // 0x800F7278: nop

    return;
    // 0x800F7278: nop

    // 0x800F727C: jr          $ra
    // 0x800F7280: nop

    return;
    // 0x800F7280: nop

;}
RECOMP_FUNC void func_800DC984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC984: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800DC988: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DC98C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DC990: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DC994: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC998: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC99C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC9A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC9A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC9A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC9AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC9B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC9B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC9B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC9BC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800DC9C0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DC9C4: nop

    // 0x800DC9C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DC9CC: nop

    // 0x800DC9D0: bne         $t1, $zero, L_800DCA44
    if (ctx->r9 != 0) {
        // 0x800DC9D4: nop
    
            goto L_800DCA44;
    }
    // 0x800DC9D4: nop

    // 0x800DC9D8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DC9DC: nop

    // 0x800DC9E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DC9E4: nop

    // 0x800DC9E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DC9EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DC9F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DC9F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DC9F8: nop

    // 0x800DC9FC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800DCA00: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DCA04: nop

    // 0x800DCA08: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800DCA0C: nop

    // 0x800DCA10: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800DCA14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DCA18: nop

    // 0x800DCA1C: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800DCA20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCA24: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800DCA28: addiu       $t8, $t8, -0x7018
    ctx->r24 = ADD32(ctx->r24, -0X7018);
    // 0x800DCA2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCA30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800DCA34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DCA38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DCA3C: jal         0x8001C0EC
    // 0x800DCA40: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DCA40: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
L_800DCA44:
    // 0x800DCA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCA4C: jal         0x8002A8B4
    // 0x800DCA50: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800DCA50: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x800DCA54: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DCA58: nop

    // 0x800DCA5C: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800DCA60: nop

    // 0x800DCA64: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x800DCA68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DCA6C: lui         $at, 0x430B
    ctx->r1 = S32(0X430B << 16);
    // 0x800DCA70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DCA74: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800DCA78: nop

    // 0x800DCA7C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800DCA80: nop

    // 0x800DCA84: bc1f        L_800DCAB0
    if (!c1cs) {
        // 0x800DCA88: nop
    
            goto L_800DCAB0;
    }
    // 0x800DCA88: nop

    // 0x800DCA8C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DCA90: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800DCA94: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800DCA98: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800DCA9C: jal         0x80015538
    // 0x800DCAA0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800DCAA0: nop

    after_2:
    // 0x800DCAA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DCAA8: nop

    // 0x800DCAAC: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
L_800DCAB0:
    // 0x800DCAB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCAB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCAB8: jal         0x8001B4AC
    // 0x800DCABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800DCABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800DCAC0: beq         $v0, $zero, L_800DCAE0
    if (ctx->r2 == 0) {
        // 0x800DCAC4: nop
    
            goto L_800DCAE0;
    }
    // 0x800DCAC4: nop

    // 0x800DCAC8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DCACC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800DCAD0: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800DCAD4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DCAD8: nop

    // 0x800DCADC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800DCAE0:
    // 0x800DCAE0: b           L_800DCAE8
    // 0x800DCAE4: nop

        goto L_800DCAE8;
    // 0x800DCAE4: nop

L_800DCAE8:
    // 0x800DCAE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DCAEC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DCAF0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DCAF4: jr          $ra
    // 0x800DCAF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800DCAF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008B030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B030: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B034: lwc1        $f4, 0x4F28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8008B038: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B03C: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x8008B040: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B044: lwc1        $f6, 0x4F2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F2C);
    // 0x8008B048: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B04C: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8008B050: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B054: lwc1        $f8, 0x4F30($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F30);
    // 0x8008B058: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B05C: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x8008B060: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B064: lwc1        $f10, 0x4F34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B068: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B06C: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x8008B070: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B074: lwc1        $f16, 0x4F38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B078: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B07C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x8008B080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B084: lwc1        $f18, 0x4F3C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F3C);
    // 0x8008B088: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B08C: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8008B090: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B094: lwc1        $f4, 0x4F40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F40);
    // 0x8008B098: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B09C: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x8008B0A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008B0A4: lb          $t6, -0x1ECC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1ECC);
    // 0x8008B0A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B0AC: bne         $t6, $at, L_8008B0E4
    if (ctx->r14 != ctx->r1) {
        // 0x8008B0B0: nop
    
            goto L_8008B0E4;
    }
    // 0x8008B0B0: nop

    // 0x8008B0B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B0B8: lwc1        $f6, 0x4F44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F44);
    // 0x8008B0BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B0C0: swc1        $f6, -0x1EB4($at)
    MEM_W(-0X1EB4, ctx->r1) = ctx->f6.u32l;
    // 0x8008B0C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B0C8: lwc1        $f8, 0x4F48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F48);
    // 0x8008B0CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B0D0: swc1        $f8, -0x1EB0($at)
    MEM_W(-0X1EB0, ctx->r1) = ctx->f8.u32l;
    // 0x8008B0D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B0D8: lwc1        $f10, 0x4F4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F4C);
    // 0x8008B0DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008B0E0: swc1        $f10, -0x1EAC($at)
    MEM_W(-0X1EAC, ctx->r1) = ctx->f10.u32l;
L_8008B0E4:
    // 0x8008B0E4: jr          $ra
    // 0x8008B0E8: nop

    return;
    // 0x8008B0E8: nop

    // 0x8008B0EC: jr          $ra
    // 0x8008B0F0: nop

    return;
    // 0x8008B0F0: nop

;}
RECOMP_FUNC void func_800C2C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C2C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2C68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2C6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2C70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2C74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2C7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2C84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2C88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C2C8C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C2C90: nop

    // 0x800C2C94: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C2C98: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800C2C9C: beq         $at, $zero, L_800C2D20
    if (ctx->r1 == 0) {
        // 0x800C2CA0: nop
    
            goto L_800C2D20;
    }
    // 0x800C2CA0: nop

    // 0x800C2CA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C2CA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C2CAC: addu        $at, $at, $t9
    gpr jr_addend_800C2CB8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C2CB0: lw          $t9, 0x4D48($at)
    ctx->r25 = ADD32(ctx->r1, 0X4D48);
    // 0x800C2CB4: nop

    // 0x800C2CB8: jr          $t9
    // 0x800C2CBC: nop

    switch (jr_addend_800C2CB8 >> 2) {
        case 0: goto L_800C2CC0; break;
        case 1: goto L_800C2CD0; break;
        case 2: goto L_800C2CE0; break;
        case 3: goto L_800C2CF0; break;
        case 4: goto L_800C2D00; break;
        case 5: goto L_800C2D10; break;
        default: switch_error(__func__, 0x800C2CB8, 0x80114D48);
    }
    // 0x800C2CBC: nop

L_800C2CC0:
    // 0x800C2CC0: jal         0x800C24EC
    // 0x800C2CC4: nop

    func_800C24EC(rdram, ctx);
        goto after_0;
    // 0x800C2CC4: nop

    after_0:
    // 0x800C2CC8: b           L_800C2D28
    // 0x800C2CCC: nop

        goto L_800C2D28;
    // 0x800C2CCC: nop

L_800C2CD0:
    // 0x800C2CD0: jal         0x800C2624
    // 0x800C2CD4: nop

    func_800C2624(rdram, ctx);
        goto after_1;
    // 0x800C2CD4: nop

    after_1:
    // 0x800C2CD8: b           L_800C2D28
    // 0x800C2CDC: nop

        goto L_800C2D28;
    // 0x800C2CDC: nop

L_800C2CE0:
    // 0x800C2CE0: jal         0x800C27B0
    // 0x800C2CE4: nop

    func_800C27B0(rdram, ctx);
        goto after_2;
    // 0x800C2CE4: nop

    after_2:
    // 0x800C2CE8: b           L_800C2D28
    // 0x800C2CEC: nop

        goto L_800C2D28;
    // 0x800C2CEC: nop

L_800C2CF0:
    // 0x800C2CF0: jal         0x800C29F4
    // 0x800C2CF4: nop

    func_800C29F4(rdram, ctx);
        goto after_3;
    // 0x800C2CF4: nop

    after_3:
    // 0x800C2CF8: b           L_800C2D28
    // 0x800C2CFC: nop

        goto L_800C2D28;
    // 0x800C2CFC: nop

L_800C2D00:
    // 0x800C2D00: jal         0x800C2B04
    // 0x800C2D04: nop

    func_800C2B04(rdram, ctx);
        goto after_4;
    // 0x800C2D04: nop

    after_4:
    // 0x800C2D08: b           L_800C2D28
    // 0x800C2D0C: nop

        goto L_800C2D28;
    // 0x800C2D0C: nop

L_800C2D10:
    // 0x800C2D10: jal         0x800C2C30
    // 0x800C2D14: nop

    func_800C2C30(rdram, ctx);
        goto after_5;
    // 0x800C2D14: nop

    after_5:
    // 0x800C2D18: b           L_800C2D28
    // 0x800C2D1C: nop

        goto L_800C2D28;
    // 0x800C2D1C: nop

L_800C2D20:
    // 0x800C2D20: b           L_800C2D28
    // 0x800C2D24: nop

        goto L_800C2D28;
    // 0x800C2D24: nop

L_800C2D28:
    // 0x800C2D28: b           L_800C2D30
    // 0x800C2D2C: nop

        goto L_800C2D30;
    // 0x800C2D2C: nop

L_800C2D30:
    // 0x800C2D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2D38: jr          $ra
    // 0x800C2D3C: nop

    return;
    // 0x800C2D3C: nop

;}
RECOMP_FUNC void func_8008E4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E4A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008E4A8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E4AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E4B0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E4B4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008E4B8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008E4BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E4C0: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x8008E4C4: nop

    // 0x8008E4C8: addiu       $t8, $t7, -0x244
    ctx->r24 = ADD32(ctx->r15, -0X244);
    // 0x8008E4CC: sltiu       $at, $t8, 0x3E
    ctx->r1 = ctx->r24 < 0X3E ? 1 : 0;
    // 0x8008E4D0: beq         $at, $zero, L_8008E770
    if (ctx->r1 == 0) {
        // 0x8008E4D4: nop
    
            goto L_8008E770;
    }
    // 0x8008E4D4: nop

    // 0x8008E4D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E4DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008E4E0: addu        $at, $at, $t8
    gpr jr_addend_8008E4EC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008E4E4: lw          $t8, -0x3120($at)
    ctx->r24 = ADD32(ctx->r1, -0X3120);
    // 0x8008E4E8: nop

    // 0x8008E4EC: jr          $t8
    // 0x8008E4F0: nop

    switch (jr_addend_8008E4EC >> 2) {
        case 0: goto L_8008E520; break;
        case 1: goto L_8008E770; break;
        case 2: goto L_8008E770; break;
        case 3: goto L_8008E770; break;
        case 4: goto L_8008E770; break;
        case 5: goto L_8008E770; break;
        case 6: goto L_8008E770; break;
        case 7: goto L_8008E770; break;
        case 8: goto L_8008E770; break;
        case 9: goto L_8008E770; break;
        case 10: goto L_8008E770; break;
        case 11: goto L_8008E770; break;
        case 12: goto L_8008E770; break;
        case 13: goto L_8008E770; break;
        case 14: goto L_8008E770; break;
        case 15: goto L_8008E770; break;
        case 16: goto L_8008E770; break;
        case 17: goto L_8008E770; break;
        case 18: goto L_8008E5A4; break;
        case 19: goto L_8008E770; break;
        case 20: goto L_8008E770; break;
        case 21: goto L_8008E770; break;
        case 22: goto L_8008E770; break;
        case 23: goto L_8008E770; break;
        case 24: goto L_8008E5D4; break;
        case 25: goto L_8008E600; break;
        case 26: goto L_8008E62C; break;
        case 27: goto L_8008E658; break;
        case 28: goto L_8008E688; break;
        case 29: goto L_8008E6B8; break;
        case 30: goto L_8008E770; break;
        case 31: goto L_8008E770; break;
        case 32: goto L_8008E770; break;
        case 33: goto L_8008E770; break;
        case 34: goto L_8008E4F4; break;
        case 35: goto L_8008E6E8; break;
        case 36: goto L_8008E770; break;
        case 37: goto L_8008E770; break;
        case 38: goto L_8008E54C; break;
        case 39: goto L_8008E770; break;
        case 40: goto L_8008E770; break;
        case 41: goto L_8008E770; break;
        case 42: goto L_8008E770; break;
        case 43: goto L_8008E770; break;
        case 44: goto L_8008E770; break;
        case 45: goto L_8008E770; break;
        case 46: goto L_8008E770; break;
        case 47: goto L_8008E770; break;
        case 48: goto L_8008E770; break;
        case 49: goto L_8008E714; break;
        case 50: goto L_8008E770; break;
        case 51: goto L_8008E770; break;
        case 52: goto L_8008E770; break;
        case 53: goto L_8008E770; break;
        case 54: goto L_8008E770; break;
        case 55: goto L_8008E770; break;
        case 56: goto L_8008E770; break;
        case 57: goto L_8008E770; break;
        case 58: goto L_8008E770; break;
        case 59: goto L_8008E770; break;
        case 60: goto L_8008E740; break;
        case 61: goto L_8008E578; break;
        default: switch_error(__func__, 0x8008E4EC, 0x8010CEE0);
    }
    // 0x8008E4F0: nop

L_8008E4F4:
    // 0x8008E4F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E4F8: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E4FC: addiu       $t9, $zero, 0x223
    ctx->r25 = ADD32(0, 0X223);
    // 0x8008E500: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E504: sw          $t9, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r25;
    // 0x8008E508: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8008E50C: addiu       $t0, $t0, 0x1888
    ctx->r8 = ADD32(ctx->r8, 0X1888);
    // 0x8008E510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E514: sw          $t0, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r8;
    // 0x8008E518: b           L_8008E778
    // 0x8008E51C: nop

        goto L_8008E778;
    // 0x8008E51C: nop

L_8008E520:
    // 0x8008E520: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E524: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E528: addiu       $t1, $zero, 0x22A
    ctx->r9 = ADD32(0, 0X22A);
    // 0x8008E52C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E530: sw          $t1, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r9;
    // 0x8008E534: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008E538: addiu       $t2, $t2, 0x6164
    ctx->r10 = ADD32(ctx->r10, 0X6164);
    // 0x8008E53C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E540: sw          $t2, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r10;
    // 0x8008E544: b           L_8008E778
    // 0x8008E548: nop

        goto L_8008E778;
    // 0x8008E548: nop

L_8008E54C:
    // 0x8008E54C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E550: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E554: addiu       $t3, $zero, 0x275
    ctx->r11 = ADD32(0, 0X275);
    // 0x8008E558: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E55C: sw          $t3, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r11;
    // 0x8008E560: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008E564: addiu       $t4, $t4, 0x5CF8
    ctx->r12 = ADD32(ctx->r12, 0X5CF8);
    // 0x8008E568: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E56C: sw          $t4, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r12;
    // 0x8008E570: b           L_8008E778
    // 0x8008E574: nop

        goto L_8008E778;
    // 0x8008E574: nop

L_8008E578:
    // 0x8008E578: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E57C: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E580: addiu       $t5, $zero, 0x28A
    ctx->r13 = ADD32(0, 0X28A);
    // 0x8008E584: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E588: sw          $t5, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r13;
    // 0x8008E58C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8008E590: addiu       $t6, $t6, 0x6058
    ctx->r14 = ADD32(ctx->r14, 0X6058);
    // 0x8008E594: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E598: sw          $t6, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r14;
    // 0x8008E59C: b           L_8008E778
    // 0x8008E5A0: nop

        goto L_8008E778;
    // 0x8008E5A0: nop

L_8008E5A4:
    // 0x8008E5A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8008E5A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5AC: sw          $t7, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r15;
    // 0x8008E5B0: addiu       $t8, $zero, 0x16A
    ctx->r24 = ADD32(0, 0X16A);
    // 0x8008E5B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5B8: sw          $t8, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r24;
    // 0x8008E5BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008E5C0: addiu       $t9, $t9, -0x76EC
    ctx->r25 = ADD32(ctx->r25, -0X76EC);
    // 0x8008E5C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5C8: sw          $t9, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r25;
    // 0x8008E5CC: b           L_8008E778
    // 0x8008E5D0: nop

        goto L_8008E778;
    // 0x8008E5D0: nop

L_8008E5D4:
    // 0x8008E5D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5D8: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E5DC: addiu       $t0, $zero, 0x268
    ctx->r8 = ADD32(0, 0X268);
    // 0x8008E5E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5E4: sw          $t0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r8;
    // 0x8008E5E8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008E5EC: addiu       $t1, $t1, 0x2F30
    ctx->r9 = ADD32(ctx->r9, 0X2F30);
    // 0x8008E5F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E5F4: sw          $t1, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r9;
    // 0x8008E5F8: b           L_8008E778
    // 0x8008E5FC: nop

        goto L_8008E778;
    // 0x8008E5FC: nop

L_8008E600:
    // 0x8008E600: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E604: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E608: addiu       $t2, $zero, 0x268
    ctx->r10 = ADD32(0, 0X268);
    // 0x8008E60C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E610: sw          $t2, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r10;
    // 0x8008E614: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8008E618: addiu       $t3, $t3, 0x2F30
    ctx->r11 = ADD32(ctx->r11, 0X2F30);
    // 0x8008E61C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E620: sw          $t3, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r11;
    // 0x8008E624: b           L_8008E778
    // 0x8008E628: nop

        goto L_8008E778;
    // 0x8008E628: nop

L_8008E62C:
    // 0x8008E62C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E630: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E634: addiu       $t4, $zero, 0x268
    ctx->r12 = ADD32(0, 0X268);
    // 0x8008E638: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E63C: sw          $t4, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r12;
    // 0x8008E640: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8008E644: addiu       $t5, $t5, 0x2F30
    ctx->r13 = ADD32(ctx->r13, 0X2F30);
    // 0x8008E648: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E64C: sw          $t5, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r13;
    // 0x8008E650: b           L_8008E778
    // 0x8008E654: nop

        goto L_8008E778;
    // 0x8008E654: nop

L_8008E658:
    // 0x8008E658: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8008E65C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E660: sw          $t6, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r14;
    // 0x8008E664: addiu       $t7, $zero, 0x269
    ctx->r15 = ADD32(0, 0X269);
    // 0x8008E668: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E66C: sw          $t7, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r15;
    // 0x8008E670: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008E674: addiu       $t8, $t8, 0x2FC4
    ctx->r24 = ADD32(ctx->r24, 0X2FC4);
    // 0x8008E678: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E67C: sw          $t8, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r24;
    // 0x8008E680: b           L_8008E778
    // 0x8008E684: nop

        goto L_8008E778;
    // 0x8008E684: nop

L_8008E688:
    // 0x8008E688: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8008E68C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E690: sw          $t9, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r25;
    // 0x8008E694: addiu       $t0, $zero, 0x269
    ctx->r8 = ADD32(0, 0X269);
    // 0x8008E698: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E69C: sw          $t0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r8;
    // 0x8008E6A0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008E6A4: addiu       $t1, $t1, 0x2FC4
    ctx->r9 = ADD32(ctx->r9, 0X2FC4);
    // 0x8008E6A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6AC: sw          $t1, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r9;
    // 0x8008E6B0: b           L_8008E778
    // 0x8008E6B4: nop

        goto L_8008E778;
    // 0x8008E6B4: nop

L_8008E6B8:
    // 0x8008E6B8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8008E6BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6C0: sw          $t2, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r10;
    // 0x8008E6C4: addiu       $t3, $zero, 0x269
    ctx->r11 = ADD32(0, 0X269);
    // 0x8008E6C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6CC: sw          $t3, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r11;
    // 0x8008E6D0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8008E6D4: addiu       $t4, $t4, 0x2FC4
    ctx->r12 = ADD32(ctx->r12, 0X2FC4);
    // 0x8008E6D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6DC: sw          $t4, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r12;
    // 0x8008E6E0: b           L_8008E778
    // 0x8008E6E4: nop

        goto L_8008E778;
    // 0x8008E6E4: nop

L_8008E6E8:
    // 0x8008E6E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6EC: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E6F0: addiu       $t5, $zero, 0x12B
    ctx->r13 = ADD32(0, 0X12B);
    // 0x8008E6F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E6F8: sw          $t5, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r13;
    // 0x8008E6FC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8008E700: addiu       $t6, $t6, 0x313C
    ctx->r14 = ADD32(ctx->r14, 0X313C);
    // 0x8008E704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E708: sw          $t6, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r14;
    // 0x8008E70C: b           L_8008E778
    // 0x8008E710: nop

        goto L_8008E778;
    // 0x8008E710: nop

L_8008E714:
    // 0x8008E714: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E718: sw          $zero, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = 0;
    // 0x8008E71C: addiu       $t7, $zero, 0x280
    ctx->r15 = ADD32(0, 0X280);
    // 0x8008E720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E724: sw          $t7, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r15;
    // 0x8008E728: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8008E72C: addiu       $t8, $t8, 0x31A0
    ctx->r24 = ADD32(ctx->r24, 0X31A0);
    // 0x8008E730: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E734: sw          $t8, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r24;
    // 0x8008E738: b           L_8008E778
    // 0x8008E73C: nop

        goto L_8008E778;
    // 0x8008E73C: nop

L_8008E740:
    // 0x8008E740: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8008E744: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E748: sw          $t9, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r25;
    // 0x8008E74C: addiu       $t0, $zero, 0x288
    ctx->r8 = ADD32(0, 0X288);
    // 0x8008E750: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E754: sw          $t0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r8;
    // 0x8008E758: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008E75C: addiu       $t1, $t1, 0x31A8
    ctx->r9 = ADD32(ctx->r9, 0X31A8);
    // 0x8008E760: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E764: sw          $t1, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r9;
    // 0x8008E768: b           L_8008E778
    // 0x8008E76C: nop

        goto L_8008E778;
    // 0x8008E76C: nop

L_8008E770:
    // 0x8008E770: b           L_8008E778
    // 0x8008E774: nop

        goto L_8008E778;
    // 0x8008E774: nop

L_8008E778:
    // 0x8008E778: jr          $ra
    // 0x8008E77C: nop

    return;
    // 0x8008E77C: nop

    // 0x8008E780: jr          $ra
    // 0x8008E784: nop

    return;
    // 0x8008E784: nop

;}
RECOMP_FUNC void func_8008E418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E41C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008E420: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008E424: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008E428: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008E42C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008E430: nop

    // 0x8008E434: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008E438: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E43C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E440: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E444: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008E448: nop

    // 0x8008E44C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008E450: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008E454: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008E458: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8008E45C: jal         0x8008E788
    // 0x8008E460: nop

    func_8008E788(rdram, ctx);
        goto after_0;
    // 0x8008E460: nop

    after_0:
    // 0x8008E464: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008E468: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008E46C: lw          $t2, 0x4FB8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4FB8);
    // 0x8008E470: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8008E474: lw          $a3, 0x4FB4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4FB4);
    // 0x8008E478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008E47C: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x8008E480: lh          $a2, 0x4($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X4);
    // 0x8008E484: jal         0x8001C0EC
    // 0x8008E488: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8008E488: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x8008E48C: b           L_8008E494
    // 0x8008E490: nop

        goto L_8008E494;
    // 0x8008E490: nop

L_8008E494:
    // 0x8008E494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E49C: jr          $ra
    // 0x8008E4A0: nop

    return;
    // 0x8008E4A0: nop

;}
RECOMP_FUNC void func_80063158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063158: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006315C: beq         $a0, $at, L_80063190
    if (ctx->r4 == ctx->r1) {
        // 0x80063160: nop
    
            goto L_80063190;
    }
    // 0x80063160: nop

    // 0x80063164: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80063168: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8006316C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80063170: lw          $t7, 0x3CDC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3CDC);
    // 0x80063174: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063178: sw          $t7, 0x4890($at)
    MEM_W(0X4890, ctx->r1) = ctx->r15;
    // 0x8006317C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063180: sw          $a1, 0x4894($at)
    MEM_W(0X4894, ctx->r1) = ctx->r5;
    // 0x80063184: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063188: b           L_80063198
    // 0x8006318C: sw          $a2, 0x4898($at)
    MEM_W(0X4898, ctx->r1) = ctx->r6;
        goto L_80063198;
    // 0x8006318C: sw          $a2, 0x4898($at)
    MEM_W(0X4898, ctx->r1) = ctx->r6;
L_80063190:
    // 0x80063190: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063194: sw          $zero, 0x4890($at)
    MEM_W(0X4890, ctx->r1) = 0;
L_80063198:
    // 0x80063198: jr          $ra
    // 0x8006319C: nop

    return;
    // 0x8006319C: nop

    // 0x800631A0: jr          $ra
    // 0x800631A4: nop

    return;
    // 0x800631A4: nop

;}
RECOMP_FUNC void func_800DE654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DE658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DE65C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE660: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE664: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE668: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE66C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE670: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE678: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE67C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE680: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE684: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DE688: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE68C: nop

    // 0x800DE690: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DE694: nop

    // 0x800DE698: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DE69C: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x800DE6A0: beq         $at, $zero, L_800DE734
    if (ctx->r1 == 0) {
        // 0x800DE6A4: nop
    
            goto L_800DE734;
    }
    // 0x800DE6A4: nop

    // 0x800DE6A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DE6AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DE6B0: addu        $at, $at, $t2
    gpr jr_addend_800DE6BC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DE6B4: lw          $t2, 0x5378($at)
    ctx->r10 = ADD32(ctx->r1, 0X5378);
    // 0x800DE6B8: nop

    // 0x800DE6BC: jr          $t2
    // 0x800DE6C0: nop

    switch (jr_addend_800DE6BC >> 2) {
        case 0: goto L_800DE6C4; break;
        case 1: goto L_800DE6D4; break;
        case 2: goto L_800DE6E4; break;
        case 3: goto L_800DE6F4; break;
        case 4: goto L_800DE704; break;
        case 5: goto L_800DE714; break;
        case 6: goto L_800DE724; break;
        default: switch_error(__func__, 0x800DE6BC, 0x80115378);
    }
    // 0x800DE6C0: nop

L_800DE6C4:
    // 0x800DE6C4: jal         0x800DD9E0
    // 0x800DE6C8: nop

    func_800DD9E0(rdram, ctx);
        goto after_0;
    // 0x800DE6C8: nop

    after_0:
    // 0x800DE6CC: b           L_800DE73C
    // 0x800DE6D0: nop

        goto L_800DE73C;
    // 0x800DE6D0: nop

L_800DE6D4:
    // 0x800DE6D4: jal         0x800DDAA8
    // 0x800DE6D8: nop

    func_800DDAA8(rdram, ctx);
        goto after_1;
    // 0x800DE6D8: nop

    after_1:
    // 0x800DE6DC: b           L_800DE73C
    // 0x800DE6E0: nop

        goto L_800DE73C;
    // 0x800DE6E0: nop

L_800DE6E4:
    // 0x800DE6E4: jal         0x800DDC5C
    // 0x800DE6E8: nop

    func_800DDC5C(rdram, ctx);
        goto after_2;
    // 0x800DE6E8: nop

    after_2:
    // 0x800DE6EC: b           L_800DE73C
    // 0x800DE6F0: nop

        goto L_800DE73C;
    // 0x800DE6F0: nop

L_800DE6F4:
    // 0x800DE6F4: jal         0x800DDE08
    // 0x800DE6F8: nop

    func_800DDE08(rdram, ctx);
        goto after_3;
    // 0x800DE6F8: nop

    after_3:
    // 0x800DE6FC: b           L_800DE73C
    // 0x800DE700: nop

        goto L_800DE73C;
    // 0x800DE700: nop

L_800DE704:
    // 0x800DE704: jal         0x800DE1E8
    // 0x800DE708: nop

    func_800DE1E8(rdram, ctx);
        goto after_4;
    // 0x800DE708: nop

    after_4:
    // 0x800DE70C: b           L_800DE73C
    // 0x800DE710: nop

        goto L_800DE73C;
    // 0x800DE710: nop

L_800DE714:
    // 0x800DE714: jal         0x800DE534
    // 0x800DE718: nop

    func_800DE534(rdram, ctx);
        goto after_5;
    // 0x800DE718: nop

    after_5:
    // 0x800DE71C: b           L_800DE73C
    // 0x800DE720: nop

        goto L_800DE73C;
    // 0x800DE720: nop

L_800DE724:
    // 0x800DE724: jal         0x800DE564
    // 0x800DE728: nop

    func_800DE564(rdram, ctx);
        goto after_6;
    // 0x800DE728: nop

    after_6:
    // 0x800DE72C: b           L_800DE73C
    // 0x800DE730: nop

        goto L_800DE73C;
    // 0x800DE730: nop

L_800DE734:
    // 0x800DE734: b           L_800DE73C
    // 0x800DE738: nop

        goto L_800DE73C;
    // 0x800DE738: nop

L_800DE73C:
    // 0x800DE73C: b           L_800DE744
    // 0x800DE740: nop

        goto L_800DE744;
    // 0x800DE740: nop

L_800DE744:
    // 0x800DE744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DE748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DE74C: jr          $ra
    // 0x800DE750: nop

    return;
    // 0x800DE750: nop

;}
RECOMP_FUNC void func_8005FC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FC98: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8005FC9C: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8005FCA0: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x8005FCA4: sll         $a3, $a3, 24
    ctx->r7 = S32(ctx->r7 << 24);
    // 0x8005FCA8: sra         $a3, $a3, 24
    ctx->r7 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8005FCAC: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8005FCB0: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8005FCB4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8005FCB8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005FCBC: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x8005FCC0: blez        $t6, L_8005FD68
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8005FCC4: sh          $zero, 0x6($sp)
        MEM_H(0X6, ctx->r29) = 0;
            goto L_8005FD68;
    }
    // 0x8005FCC4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8005FCC8:
    // 0x8005FCC8: sh          $zero, 0x4($sp)
    MEM_H(0X4, ctx->r29) = 0;
L_8005FCCC:
    // 0x8005FCCC: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
L_8005FCD0:
    // 0x8005FCD0: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x8005FCD4: lh          $t9, 0x4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4);
    // 0x8005FCD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005FCDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005FCE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005FCE4: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8005FCE8: lh          $t2, 0x2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2);
    // 0x8005FCEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005FCF0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8005FCF4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8005FCF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005FCFC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8005FD00: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8005FD04: sb          $a3, 0x4808($at)
    MEM_B(0X4808, ctx->r1) = ctx->r7;
    // 0x8005FD08: lh          $t4, 0x2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2);
    // 0x8005FD0C: nop

    // 0x8005FD10: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005FD14: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8005FD18: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005FD1C: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x8005FD20: bne         $at, $zero, L_8005FCD0
    if (ctx->r1 != 0) {
        // 0x8005FD24: sh          $t5, 0x2($sp)
        MEM_H(0X2, ctx->r29) = ctx->r13;
            goto L_8005FCD0;
    }
    // 0x8005FD24: sh          $t5, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r13;
    // 0x8005FD28: lh          $t9, 0x4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4);
    // 0x8005FD2C: nop

    // 0x8005FD30: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8005FD34: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x8005FD38: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8005FD3C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8005FD40: bne         $at, $zero, L_8005FCCC
    if (ctx->r1 != 0) {
        // 0x8005FD44: sh          $t8, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r24;
            goto L_8005FCCC;
    }
    // 0x8005FD44: sh          $t8, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r24;
    // 0x8005FD48: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x8005FD4C: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x8005FD50: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005FD54: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8005FD58: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8005FD5C: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005FD60: bne         $at, $zero, L_8005FCC8
    if (ctx->r1 != 0) {
        // 0x8005FD64: sh          $t3, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r11;
            goto L_8005FCC8;
    }
    // 0x8005FD64: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
L_8005FD68:
    // 0x8005FD68: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x8005FD6C: blez        $t7, L_8005FDEC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8005FD70: sh          $zero, 0x4($sp)
        MEM_H(0X4, ctx->r29) = 0;
            goto L_8005FDEC;
    }
    // 0x8005FD70: sh          $zero, 0x4($sp)
    MEM_H(0X4, ctx->r29) = 0;
L_8005FD74:
    // 0x8005FD74: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
L_8005FD78:
    // 0x8005FD78: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x8005FD7C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8005FD80: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8005FD84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005FD88: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x8005FD8C: lh          $t2, 0x2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2);
    // 0x8005FD90: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8005FD94: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8005FD98: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8005FD9C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005FDA0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8005FDA4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8005FDA8: sb          $a3, 0x47F3($at)
    MEM_B(0X47F3, ctx->r1) = ctx->r7;
    // 0x8005FDAC: lh          $t4, 0x2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2);
    // 0x8005FDB0: nop

    // 0x8005FDB4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005FDB8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8005FDBC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8005FDC0: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x8005FDC4: bne         $at, $zero, L_8005FD78
    if (ctx->r1 != 0) {
        // 0x8005FDC8: sh          $t5, 0x2($sp)
        MEM_H(0X2, ctx->r29) = ctx->r13;
            goto L_8005FD78;
    }
    // 0x8005FDC8: sh          $t5, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r13;
    // 0x8005FDCC: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x8005FDD0: addiu       $t2, $a1, -0x1
    ctx->r10 = ADD32(ctx->r5, -0X1);
    // 0x8005FDD4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8005FDD8: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8005FDDC: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8005FDE0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8005FDE4: bne         $at, $zero, L_8005FD74
    if (ctx->r1 != 0) {
        // 0x8005FDE8: sh          $t9, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r25;
            goto L_8005FD74;
    }
    // 0x8005FDE8: sh          $t9, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r25;
L_8005FDEC:
    // 0x8005FDEC: blez        $a2, L_8005FE44
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8005FDF0: sh          $zero, 0x2($sp)
        MEM_H(0X2, ctx->r29) = 0;
            goto L_8005FE44;
    }
    // 0x8005FDF0: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
L_8005FDF4:
    // 0x8005FDF4: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8005FDF8: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8005FDFC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8005FE00: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8005FE04: lh          $t6, 0x2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2);
    // 0x8005FE08: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8005FE0C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8005FE10: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8005FE14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005FE18: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8005FE1C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005FE20: sb          $a3, 0x47EC($at)
    MEM_B(0X47EC, ctx->r1) = ctx->r7;
    // 0x8005FE24: lh          $t8, 0x2($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2);
    // 0x8005FE28: nop

    // 0x8005FE2C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8005FE30: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8005FE34: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8005FE38: slt         $at, $t1, $a2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8005FE3C: bne         $at, $zero, L_8005FDF4
    if (ctx->r1 != 0) {
        // 0x8005FE40: sh          $t9, 0x2($sp)
        MEM_H(0X2, ctx->r29) = ctx->r25;
            goto L_8005FDF4;
    }
    // 0x8005FE40: sh          $t9, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r25;
L_8005FE44:
    // 0x8005FE44: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8005FE48: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8005FE4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8005FE50: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8005FE54: lh          $t6, 0x2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2);
    // 0x8005FE58: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8005FE5C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8005FE60: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8005FE64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005FE68: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8005FE6C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005FE70: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8005FE74: sb          $t2, 0x47EB($at)
    MEM_B(0X47EB, ctx->r1) = ctx->r10;
    // 0x8005FE78: b           L_8005FE80
    // 0x8005FE7C: nop

        goto L_8005FE80;
    // 0x8005FE7C: nop

L_8005FE80:
    // 0x8005FE80: jr          $ra
    // 0x8005FE84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8005FE84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F4164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4164: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F4168: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F416C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F4170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4174: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4178: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F417C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4184: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F418C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4190: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F4194: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4198: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800F419C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F41A0: nop

    // 0x800F41A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F41A8: nop

    // 0x800F41AC: bne         $t1, $zero, L_800F4258
    if (ctx->r9 != 0) {
        // 0x800F41B0: nop
    
            goto L_800F4258;
    }
    // 0x800F41B0: nop

    // 0x800F41B4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800F41B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F41BC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F41C0: jal         0x80014E80
    // 0x800F41C4: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800F41C4: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800F41C8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800F41CC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F41D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F41D4: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x800F41D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800F41DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F41E0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F41E4: nop

    // 0x800F41E8: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
    // 0x800F41EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F41F0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F41F4: nop

    // 0x800F41F8: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
    // 0x800F41FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F4200: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F4204: nop

    // 0x800F4208: swc1        $f16, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f16.u32l;
    // 0x800F420C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800F4210: nop

    // 0x800F4214: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x800F4218: nop

    // 0x800F421C: sh          $t9, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r25;
    // 0x800F4220: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F4224: nop

    // 0x800F4228: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F422C: nop

    // 0x800F4230: sh          $t1, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = ctx->r9;
    // 0x800F4234: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4238: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800F423C: addiu       $t2, $t2, -0x4720
    ctx->r10 = ADD32(ctx->r10, -0X4720);
    // 0x800F4240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4244: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800F4248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F424C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F4250: jal         0x8001C0EC
    // 0x800F4254: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F4254: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_1:
L_800F4258:
    // 0x800F4258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F425C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4260: jal         0x80028FA0
    // 0x800F4264: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800F4264: nop

    after_2:
    // 0x800F4268: beq         $v0, $zero, L_800F4280
    if (ctx->r2 == 0) {
        // 0x800F426C: nop
    
            goto L_800F4280;
    }
    // 0x800F426C: nop

    // 0x800F4270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4278: jal         0x80029B60
    // 0x800F427C: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800F427C: nop

    after_3:
L_800F4280:
    // 0x800F4280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4288: jal         0x80029C40
    // 0x800F428C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800F428C: nop

    after_4:
    // 0x800F4290: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4294: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4298: jal         0x80029D04
    // 0x800F429C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800F429C: nop

    after_5:
    // 0x800F42A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F42A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F42A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F42AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F42B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F42B4: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F42B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F42BC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800F42C0: jal         0x80029018
    // 0x800F42C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800F42C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800F42C8: beq         $v0, $zero, L_800F42EC
    if (ctx->r2 == 0) {
        // 0x800F42CC: nop
    
            goto L_800F42EC;
    }
    // 0x800F42CC: nop

    // 0x800F42D0: jal         0x800297DC
    // 0x800F42D4: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800F42D4: nop

    after_7:
    // 0x800F42D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F42DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F42E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800F42E4: jal         0x80029824
    // 0x800F42E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800F42E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800F42EC:
    // 0x800F42EC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800F42F0: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800F42F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F42F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F42FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F4300: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F4304: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F4308: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F430C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F4310: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800F4314: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F4318: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F431C: jal         0x80015538
    // 0x800F4320: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800F4320: nop

    after_9:
    // 0x800F4324: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F4328: nop

    // 0x800F432C: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800F4330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4338: jal         0x8002A1FC
    // 0x800F433C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x800F433C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_10:
    // 0x800F4340: beq         $v0, $zero, L_800F4360
    if (ctx->r2 == 0) {
        // 0x800F4344: nop
    
            goto L_800F4360;
    }
    // 0x800F4344: nop

    // 0x800F4348: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F434C: nop

    // 0x800F4350: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800F4354: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F4358: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800F435C: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
L_800F4360:
    // 0x800F4360: b           L_800F4368
    // 0x800F4364: nop

        goto L_800F4368;
    // 0x800F4364: nop

L_800F4368:
    // 0x800F4368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F436C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F4370: jr          $ra
    // 0x800F4374: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800F4374: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8008ABF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ABF4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8008ABF8: b           L_8008AC00
    // 0x8008ABFC: nop

        goto L_8008AC00;
    // 0x8008ABFC: nop

L_8008AC00:
    // 0x8008AC00: jr          $ra
    // 0x8008AC04: nop

    return;
    // 0x8008AC04: nop

;}
RECOMP_FUNC void func_8008D188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008D18C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D190: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008D194: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D198: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008D19C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008D1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D1A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D1A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D1AC: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008D1B0: nop

    // 0x8008D1B4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8008D1B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008D1BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D1C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008D1C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D1C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008D1CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D1D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008D1D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008D1D8: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8008D1DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008D1E0: lwc1        $f9, -0x3130($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3130);
    // 0x8008D1E4: lwc1        $f8, -0x312C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X312C);
    // 0x8008D1E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8008D1EC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8008D1F0: jal         0x80034970
    // 0x8008D1F4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8008D1F4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8008D1F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008D1FC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008D200: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008D204: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D208: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008D20C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D210: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008D214: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8008D218: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008D21C: lwc1        $f16, 0x44($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X44);
    // 0x8008D220: nop

    // 0x8008D224: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8008D228: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x8008D22C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8008D230: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D234: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008D238: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D23C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008D240: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D244: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008D248: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008D24C: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8008D250: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008D254: lwc1        $f9, -0x3128($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3128);
    // 0x8008D258: lwc1        $f8, -0x3124($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3124);
    // 0x8008D25C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8008D260: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8008D264: jal         0x80036570
    // 0x8008D268: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8008D268: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8008D26C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008D270: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8008D274: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008D278: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D27C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008D280: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D284: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008D288: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8008D28C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008D290: lwc1        $f16, 0x44($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8008D294: nop

    // 0x8008D298: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8008D29C: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x8008D2A0: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D2A4: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008D2A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008D2AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D2B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008D2B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008D2B8: lh          $t3, 0x4D56($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4D56);
    // 0x8008D2BC: nop

    // 0x8008D2C0: bne         $t3, $zero, L_8008D2D4
    if (ctx->r11 != 0) {
        // 0x8008D2C4: nop
    
            goto L_8008D2D4;
    }
    // 0x8008D2C4: nop

    // 0x8008D2C8: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D2CC: jal         0x8008DA20
    // 0x8008D2D0: nop

    func_8008DA20(rdram, ctx);
        goto after_2;
    // 0x8008D2D0: nop

    after_2:
L_8008D2D4:
    // 0x8008D2D4: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8008D2D8:
    // 0x8008D2D8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008D2DC: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8008D2E0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008D2E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008D2E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008D2EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008D2F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008D2F4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008D2F8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8008D2FC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8008D300: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008D304: lh          $t9, 0x4238($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4238);
    // 0x8008D308: nop

    // 0x8008D30C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8008D310: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008D314: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008D318: beq         $t0, $at, L_8008D3C0
    if (ctx->r8 == ctx->r1) {
        // 0x8008D31C: nop
    
            goto L_8008D3C0;
    }
    // 0x8008D31C: nop

    // 0x8008D320: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008D324: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008D328: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008D32C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D330: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008D334: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008D338: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D33C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008D340: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8008D344: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008D348: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8008D34C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8008D350: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8008D354: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8008D358: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008D35C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8008D360: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008D364: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008D368: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x8008D36C: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x8008D370: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008D374: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8008D378: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008D37C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008D380: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008D384: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008D388: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008D38C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008D390: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008D394: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008D398: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8008D39C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008D3A0: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8008D3A4: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8008D3A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008D3AC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008D3B0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008D3B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008D3B8: addu        $t6, $t4, $t0
    ctx->r14 = ADD32(ctx->r12, ctx->r8);
    // 0x8008D3BC: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
L_8008D3C0:
    // 0x8008D3C0: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x8008D3C4: nop

    // 0x8008D3C8: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8008D3CC: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x8008D3D0: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8008D3D4: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x8008D3D8: bne         $at, $zero, L_8008D2D8
    if (ctx->r1 != 0) {
        // 0x8008D3DC: sh          $t3, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r11;
            goto L_8008D2D8;
    }
    // 0x8008D3DC: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
    // 0x8008D3E0: b           L_8008D3E8
    // 0x8008D3E4: nop

        goto L_8008D3E8;
    // 0x8008D3E4: nop

L_8008D3E8:
    // 0x8008D3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D3EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008D3F0: jr          $ra
    // 0x8008D3F4: nop

    return;
    // 0x8008D3F4: nop

;}
RECOMP_FUNC void func_800F4DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4DEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F4DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F4DF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4DF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4DFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F4E00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4E04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4E08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4E10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4E14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F4E18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4E1C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F4E20: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F4E24: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F4E28: nop

    // 0x800F4E2C: bne         $t0, $zero, L_800F4FAC
    if (ctx->r8 != 0) {
        // 0x800F4E30: nop
    
            goto L_800F4FAC;
    }
    // 0x800F4E30: nop

    // 0x800F4E34: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_800F4E38:
    // 0x800F4E38: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800F4E3C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F4E40: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800F4E44: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800F4E48: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800F4E4C: nop

    // 0x800F4E50: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800F4E54: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800F4E58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F4E5C: beq         $t6, $at, L_800F4F64
    if (ctx->r14 == ctx->r1) {
        // 0x800F4E60: nop
    
            goto L_800F4F64;
    }
    // 0x800F4E60: nop

    // 0x800F4E64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800F4E68: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800F4E6C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800F4E70: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F4E74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F4E78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F4E7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F4E80: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F4E84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F4E88: lh          $t9, 0x4254($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4254);
    // 0x800F4E8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F4E90: beq         $t9, $at, L_800F4EE0
    if (ctx->r25 == ctx->r1) {
        // 0x800F4E94: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_800F4EE0;
    }
    // 0x800F4E94: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800F4E98: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800F4E9C: nop

    // 0x800F4EA0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800F4EA4: bne         $at, $zero, L_800F4EB8
    if (ctx->r1 != 0) {
        // 0x800F4EA8: nop
    
            goto L_800F4EB8;
    }
    // 0x800F4EA8: nop

    // 0x800F4EAC: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x800F4EB0: bne         $at, $zero, L_800F4ED8
    if (ctx->r1 != 0) {
        // 0x800F4EB4: nop
    
            goto L_800F4ED8;
    }
    // 0x800F4EB4: nop

L_800F4EB8:
    // 0x800F4EB8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800F4EBC: nop

    // 0x800F4EC0: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x800F4EC4: bne         $at, $zero, L_800F4EE0
    if (ctx->r1 != 0) {
        // 0x800F4EC8: nop
    
            goto L_800F4EE0;
    }
    // 0x800F4EC8: nop

    // 0x800F4ECC: slti        $at, $t2, 0xE
    ctx->r1 = SIGNED(ctx->r10) < 0XE ? 1 : 0;
    // 0x800F4ED0: beq         $at, $zero, L_800F4EE0
    if (ctx->r1 == 0) {
        // 0x800F4ED4: nop
    
            goto L_800F4EE0;
    }
    // 0x800F4ED4: nop

L_800F4ED8:
    // 0x800F4ED8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F4EDC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_800F4EE0:
    // 0x800F4EE0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4EE4: nop

    // 0x800F4EE8: beq         $t3, $zero, L_800F4F30
    if (ctx->r11 == 0) {
        // 0x800F4EEC: nop
    
            goto L_800F4F30;
    }
    // 0x800F4EEC: nop

    // 0x800F4EF0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F4EF4: nop

    // 0x800F4EF8: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x800F4EFC: nop

    // 0x800F4F00: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800F4F04: sh          $t6, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r14;
    // 0x800F4F08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4F10: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x800F4F14: jal         0x800281A4
    // 0x800F4F18: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800F4F18: nop

    after_0:
    // 0x800F4F1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F4F20: jal         0x8002B0E4
    // 0x800F4F24: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800F4F24: nop

    after_1:
    // 0x800F4F28: b           L_800F4F64
    // 0x800F4F2C: nop

        goto L_800F4F64;
    // 0x800F4F2C: nop

L_800F4F30:
    // 0x800F4F30: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F4F34: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800F4F38: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
    // 0x800F4F3C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800F4F40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4F44: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800F4F48: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800F4F4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F4F50: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800F4F54: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F4F58: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F4F5C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800F4F60: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
L_800F4F64:
    // 0x800F4F64: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800F4F68: nop

    // 0x800F4F6C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800F4F70: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x800F4F74: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800F4F78: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x800F4F7C: bne         $at, $zero, L_800F4E38
    if (ctx->r1 != 0) {
        // 0x800F4F80: sh          $t3, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r11;
            goto L_800F4E38;
    }
    // 0x800F4F80: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
    // 0x800F4F84: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F4F88: nop

    // 0x800F4F8C: lh          $t7, 0xAC($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XAC);
    // 0x800F4F90: nop

    // 0x800F4F94: bgtz        $t7, L_800F4FAC
    if (SIGNED(ctx->r15) > 0) {
        // 0x800F4F98: nop
    
            goto L_800F4FAC;
    }
    // 0x800F4F98: nop

    // 0x800F4F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4FA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4FA4: jal         0x8002B0E4
    // 0x800F4FA8: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800F4FA8: nop

    after_2:
L_800F4FAC:
    // 0x800F4FAC: b           L_800F4FB4
    // 0x800F4FB0: nop

        goto L_800F4FB4;
    // 0x800F4FB0: nop

L_800F4FB4:
    // 0x800F4FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F4FB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F4FBC: jr          $ra
    // 0x800F4FC0: nop

    return;
    // 0x800F4FC0: nop

;}
RECOMP_FUNC void func_80093AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093AB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80093ABC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80093AC0: nop

    // 0x80093AC4: bne         $t6, $zero, L_80093B54
    if (ctx->r14 != 0) {
        // 0x80093AC8: nop
    
            goto L_80093B54;
    }
    // 0x80093AC8: nop

    // 0x80093ACC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80093AD0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80093AD4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80093AD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80093ADC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80093AE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80093AE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80093AE8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80093AEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80093AF0: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x80093AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80093AF8: bne         $t9, $at, L_80093B54
    if (ctx->r25 != ctx->r1) {
        // 0x80093AFC: nop
    
            goto L_80093B54;
    }
    // 0x80093AFC: nop

    // 0x80093B00: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80093B04: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80093B08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093B0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80093B10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80093B14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80093B18: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80093B1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80093B20: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80093B24: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80093B28: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80093B2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80093B30: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80093B34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093B38: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80093B3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80093B40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80093B44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80093B48: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80093B4C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80093B50: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80093B54:
    // 0x80093B54: jr          $ra
    // 0x80093B58: nop

    return;
    // 0x80093B58: nop

    // 0x80093B5C: jr          $ra
    // 0x80093B60: nop

    return;
    // 0x80093B60: nop

;}
RECOMP_FUNC void func_8009ED88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ED88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009ED8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009ED90: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009ED94: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009ED98: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009ED9C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009EDA0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009EDA4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009EDA8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009EDAC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009EDB0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009EDB4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009EDB8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009EDBC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009EDC0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009EDC4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009EDC8: addiu       $a1, $a1, 0x36AC
    ctx->r5 = ADD32(ctx->r5, 0X36AC);
    // 0x8009EDCC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009EDD0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009EDD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009EDD8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009EDDC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009EDE0: jal         0x80027464
    // 0x8009EDE4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009EDE4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009EDE8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009EDEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009EDF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009EDF4: beq         $t1, $at, L_8009EE3C
    if (ctx->r9 == ctx->r1) {
        // 0x8009EDF8: nop
    
            goto L_8009EE3C;
    }
    // 0x8009EDF8: nop

    // 0x8009EDFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009EE00: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009EE04: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009EE08: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009EE0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009EE10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009EE14: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009EE18: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009EE1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009EE20: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009EE24: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x8009EE28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009EE2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009EE30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009EE34: jal         0x80019448
    // 0x8009EE38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8009EE38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_8009EE3C:
    // 0x8009EE3C: b           L_8009EE44
    // 0x8009EE40: nop

        goto L_8009EE44;
    // 0x8009EE40: nop

L_8009EE44:
    // 0x8009EE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009EE48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009EE4C: jr          $ra
    // 0x8009EE50: nop

    return;
    // 0x8009EE50: nop

;}
RECOMP_FUNC void func_800C8A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8A08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C8A0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C8A10: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C8A14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C8A18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8A1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8A20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C8A24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8A2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8A34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8A38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8A3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8A40: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C8A44: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C8A48: nop

    // 0x800C8A4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C8A50: nop

    // 0x800C8A54: bne         $t1, $zero, L_800C8B18
    if (ctx->r9 != 0) {
        // 0x800C8A58: nop
    
            goto L_800C8B18;
    }
    // 0x800C8A58: nop

    // 0x800C8A5C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C8A60: nop

    // 0x800C8A64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C8A68: nop

    // 0x800C8A6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C8A70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C8A74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8A78: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C8A7C: addiu       $t5, $t5, -0x7E84
    ctx->r13 = ADD32(ctx->r13, -0X7E84);
    // 0x800C8A80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8A84: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C8A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8A8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C8A90: jal         0x8001C0EC
    // 0x800C8A94: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C8A94: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C8A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8AA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C8AA4: addiu       $a3, $a3, -0x7E4C
    ctx->r7 = ADD32(ctx->r7, -0X7E4C);
    // 0x800C8AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8AAC: jal         0x8001ABF4
    // 0x800C8AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C8AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C8AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8ABC: jal         0x8001BBDC
    // 0x800C8AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C8AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C8AC4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C8AC8: lwc1        $f4, 0x4F00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F00);
    // 0x800C8ACC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C8AD0: nop

    // 0x800C8AD4: swc1        $f4, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f4.u32l;
    // 0x800C8AD8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C8ADC: nop

    // 0x800C8AE0: lwc1        $f20, 0x14($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800C8AE4: nop

    // 0x800C8AE8: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x800C8AEC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C8AF0: nop

    // 0x800C8AF4: swc1        $f20, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f20.u32l;
    // 0x800C8AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8B00: jal         0x8001BB34
    // 0x800C8B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800C8B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800C8B08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8B0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8B10: jal         0x8001BB04
    // 0x800C8B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_4;
    // 0x800C8B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_800C8B18:
    // 0x800C8B18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8B1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8B20: jal         0x8002A1FC
    // 0x800C8B24: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800C8B24: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800C8B28: beq         $v0, $zero, L_800C8B48
    if (ctx->r2 == 0) {
        // 0x800C8B2C: nop
    
            goto L_800C8B48;
    }
    // 0x800C8B2C: nop

    // 0x800C8B30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C8B34: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C8B38: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C8B3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C8B40: nop

    // 0x800C8B44: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C8B48:
    // 0x800C8B48: b           L_800C8B50
    // 0x800C8B4C: nop

        goto L_800C8B50;
    // 0x800C8B4C: nop

L_800C8B50:
    // 0x800C8B50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C8B54: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C8B58: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C8B5C: jr          $ra
    // 0x800C8B60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C8B60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008ECD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ECD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008ECD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008ECD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008ECDC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008ECE0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008ECE4: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008ECE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008ECEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008ECF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008ECF4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008ECF8: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8008ECFC: lw          $a0, 0x4D48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4D48);
    // 0x8008ED00: jal         0x8001BB34
    // 0x8008ED04: nop

    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008ED04: nop

    after_0:
    // 0x8008ED08: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008ED0C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008ED10: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8008ED14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008ED18: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008ED1C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008ED20: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008ED24: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008ED28: lw          $t3, 0x4D48($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4D48);
    // 0x8008ED2C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008ED30: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008ED34: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008ED38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008ED3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008ED40: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008ED44: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008ED48: sb          $t9, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r25;
    // 0x8008ED4C: b           L_8008ED54
    // 0x8008ED50: nop

        goto L_8008ED54;
    // 0x8008ED50: nop

L_8008ED54:
    // 0x8008ED54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008ED58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008ED5C: jr          $ra
    // 0x8008ED60: nop

    return;
    // 0x8008ED60: nop

;}
RECOMP_FUNC void func_800BC7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC7F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BC7F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BC7F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BC7FC: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x800BC800: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
L_800BC804:
    // 0x800BC804: lb          $a0, 0x26($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X26);
    // 0x800BC808: jal         0x800BC774
    // 0x800BC80C: nop

    func_800BC774(rdram, ctx);
        goto after_0;
    // 0x800BC80C: nop

    after_0:
    // 0x800BC810: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x800BC814: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BC818: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800BC81C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800BC820: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800BC824: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x800BC828: lb          $t9, 0x26($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X26);
    // 0x800BC82C: nop

    // 0x800BC830: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800BC834: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x800BC838: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x800BC83C: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x800BC840: bne         $at, $zero, L_800BC804
    if (ctx->r1 != 0) {
        // 0x800BC844: sb          $t0, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r8;
            goto L_800BC804;
    }
    // 0x800BC844: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x800BC848: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800BC84C: b           L_800BC85C
    // 0x800BC850: nop

        goto L_800BC85C;
    // 0x800BC850: nop

    // 0x800BC854: b           L_800BC85C
    // 0x800BC858: nop

        goto L_800BC85C;
    // 0x800BC858: nop

L_800BC85C:
    // 0x800BC85C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BC864: jr          $ra
    // 0x800BC868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BC868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D1F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D1F54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D1F58: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D1F5C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D1F60: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D1F64: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D1F68: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D1F6C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D1F70: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D1F74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D1F78: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D1F7C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D1F80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D1F84: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D1F88: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D1F8C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D1F90: addiu       $a1, $a1, 0x40F0
    ctx->r5 = ADD32(ctx->r5, 0X40F0);
    // 0x800D1F94: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D1F98: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D1F9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D1FA0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D1FA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D1FA8: jal         0x80027464
    // 0x800D1FAC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D1FAC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D1FB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800D1FB4: b           L_800D1FBC
    // 0x800D1FB8: nop

        goto L_800D1FBC;
    // 0x800D1FB8: nop

L_800D1FBC:
    // 0x800D1FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1FC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D1FC4: jr          $ra
    // 0x800D1FC8: nop

    return;
    // 0x800D1FC8: nop

;}
RECOMP_FUNC void func_8006AB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AB14: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006AB18: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8006AB1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AB20: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8006AB24: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8006AB28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006AB2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006AB30: lw          $t8, -0x4C04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4C04);
    // 0x8006AB34: nop

    // 0x8006AB38: lb          $t9, 0x34($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X34);
    // 0x8006AB3C: nop

    // 0x8006AB40: sb          $t9, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r25;
    // 0x8006AB44: lb          $t0, 0x3($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X3);
    // 0x8006AB48: nop

    // 0x8006AB4C: bne         $t0, $zero, L_8006AB60
    if (ctx->r8 != 0) {
        // 0x8006AB50: nop
    
            goto L_8006AB60;
    }
    // 0x8006AB50: nop

    // 0x8006AB54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006AB58: b           L_8006AC34
    // 0x8006AB5C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
        goto L_8006AC34;
    // 0x8006AB5C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
L_8006AB60:
    // 0x8006AB60: lb          $t2, 0x3($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X3);
    // 0x8006AB64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006AB68: bne         $t2, $at, L_8006AC34
    if (ctx->r10 != ctx->r1) {
        // 0x8006AB6C: nop
    
            goto L_8006AC34;
    }
    // 0x8006AB6C: nop

    // 0x8006AB70: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006AB74: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x8006AB78: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x8006AB7C: bne         $t3, $at, L_8006ABA8
    if (ctx->r11 != ctx->r1) {
        // 0x8006AB80: nop
    
            goto L_8006ABA8;
    }
    // 0x8006AB80: nop

    // 0x8006AB84: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006AB88: lh          $t4, -0x1BCC($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1BCC);
    // 0x8006AB8C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8006AB90: beq         $t4, $at, L_8006ABA0
    if (ctx->r12 == ctx->r1) {
        // 0x8006AB94: nop
    
            goto L_8006ABA0;
    }
    // 0x8006AB94: nop

    // 0x8006AB98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006AB9C: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
L_8006ABA0:
    // 0x8006ABA0: b           L_8006AC34
    // 0x8006ABA4: nop

        goto L_8006AC34;
    // 0x8006ABA4: nop

L_8006ABA8:
    // 0x8006ABA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006ABAC: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8006ABB0: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x8006ABB4: bne         $t6, $at, L_8006ABE0
    if (ctx->r14 != ctx->r1) {
        // 0x8006ABB8: nop
    
            goto L_8006ABE0;
    }
    // 0x8006ABB8: nop

    // 0x8006ABBC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006ABC0: lh          $t7, -0x1BCC($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCC);
    // 0x8006ABC4: addiu       $at, $zero, 0x5C
    ctx->r1 = ADD32(0, 0X5C);
    // 0x8006ABC8: beq         $t7, $at, L_8006ABD8
    if (ctx->r15 == ctx->r1) {
        // 0x8006ABCC: nop
    
            goto L_8006ABD8;
    }
    // 0x8006ABCC: nop

    // 0x8006ABD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006ABD4: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_8006ABD8:
    // 0x8006ABD8: b           L_8006AC34
    // 0x8006ABDC: nop

        goto L_8006AC34;
    // 0x8006ABDC: nop

L_8006ABE0:
    // 0x8006ABE0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006ABE4: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x8006ABE8: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x8006ABEC: bne         $t9, $at, L_8006AC18
    if (ctx->r25 != ctx->r1) {
        // 0x8006ABF0: nop
    
            goto L_8006AC18;
    }
    // 0x8006ABF0: nop

    // 0x8006ABF4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006ABF8: lh          $t0, -0x1BCC($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1BCC);
    // 0x8006ABFC: addiu       $at, $zero, 0x5F
    ctx->r1 = ADD32(0, 0X5F);
    // 0x8006AC00: beq         $t0, $at, L_8006AC10
    if (ctx->r8 == ctx->r1) {
        // 0x8006AC04: nop
    
            goto L_8006AC10;
    }
    // 0x8006AC04: nop

    // 0x8006AC08: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006AC0C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
L_8006AC10:
    // 0x8006AC10: b           L_8006AC34
    // 0x8006AC14: nop

        goto L_8006AC34;
    // 0x8006AC14: nop

L_8006AC18:
    // 0x8006AC18: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006AC1C: lb          $t2, -0x1C34($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1C34);
    // 0x8006AC20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006AC24: beq         $t2, $at, L_8006AC34
    if (ctx->r10 == ctx->r1) {
        // 0x8006AC28: nop
    
            goto L_8006AC34;
    }
    // 0x8006AC28: nop

    // 0x8006AC2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006AC30: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_8006AC34:
    // 0x8006AC34: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8006AC38: nop

    // 0x8006AC3C: beq         $t4, $zero, L_8006AD10
    if (ctx->r12 == 0) {
        // 0x8006AC40: nop
    
            goto L_8006AD10;
    }
    // 0x8006AC40: nop

    // 0x8006AC44: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006AC48: lbu         $t5, 0x79E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X79E0);
    // 0x8006AC4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006AC50: bne         $t5, $at, L_8006AC74
    if (ctx->r13 != ctx->r1) {
        // 0x8006AC54: nop
    
            goto L_8006AC74;
    }
    // 0x8006AC54: nop

    // 0x8006AC58: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8006AC5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AC60: sh          $t6, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r14;
    // 0x8006AC64: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x8006AC68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AC6C: b           L_8006AD10
    // 0x8006AC70: sh          $t7, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r15;
        goto L_8006AD10;
    // 0x8006AC70: sh          $t7, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r15;
L_8006AC74:
    // 0x8006AC74: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006AC78: lbu         $t8, 0x79E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X79E0);
    // 0x8006AC7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AC80: bne         $t8, $at, L_8006ACA4
    if (ctx->r24 != ctx->r1) {
        // 0x8006AC84: nop
    
            goto L_8006ACA4;
    }
    // 0x8006AC84: nop

    // 0x8006AC88: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8006AC8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AC90: sh          $t9, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r25;
    // 0x8006AC94: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x8006AC98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AC9C: b           L_8006AD10
    // 0x8006ACA0: sh          $t0, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r8;
        goto L_8006AD10;
    // 0x8006ACA0: sh          $t0, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r8;
L_8006ACA4:
    // 0x8006ACA4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006ACA8: lbu         $t1, 0x79E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X79E0);
    // 0x8006ACAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006ACB0: bne         $t1, $at, L_8006ACD4
    if (ctx->r9 != ctx->r1) {
        // 0x8006ACB4: nop
    
            goto L_8006ACD4;
    }
    // 0x8006ACB4: nop

    // 0x8006ACB8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006ACBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ACC0: sh          $t2, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r10;
    // 0x8006ACC4: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x8006ACC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ACCC: b           L_8006AD10
    // 0x8006ACD0: sh          $t3, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r11;
        goto L_8006AD10;
    // 0x8006ACD0: sh          $t3, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r11;
L_8006ACD4:
    // 0x8006ACD4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006ACD8: lbu         $t4, 0x79E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X79E0);
    // 0x8006ACDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006ACE0: bne         $t4, $at, L_8006AD00
    if (ctx->r12 != ctx->r1) {
        // 0x8006ACE4: nop
    
            goto L_8006AD00;
    }
    // 0x8006ACE4: nop

    // 0x8006ACE8: addiu       $t5, $zero, 0x82
    ctx->r13 = ADD32(0, 0X82);
    // 0x8006ACEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ACF0: sh          $t5, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r13;
    // 0x8006ACF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ACF8: b           L_8006AD10
    // 0x8006ACFC: sh          $zero, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = 0;
        goto L_8006AD10;
    // 0x8006ACFC: sh          $zero, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = 0;
L_8006AD00:
    // 0x8006AD00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AD04: sh          $zero, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = 0;
    // 0x8006AD08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AD0C: sh          $zero, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = 0;
L_8006AD10:
    // 0x8006AD10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AD14: sb          $zero, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = 0;
    // 0x8006AD18: b           L_8006AD20
    // 0x8006AD1C: nop

        goto L_8006AD20;
    // 0x8006AD1C: nop

L_8006AD20:
    // 0x8006AD20: jr          $ra
    // 0x8006AD24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006AD24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B03E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B03E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B03E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B03E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B03EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B03F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B03F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B03F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B03FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B0400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B040C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B0410: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B0414: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0418: nop

    // 0x800B041C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B0420: nop

    // 0x800B0424: bne         $t1, $zero, L_800B0470
    if (ctx->r9 != 0) {
        // 0x800B0428: nop
    
            goto L_800B0470;
    }
    // 0x800B0428: nop

    // 0x800B042C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0430: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B0434: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B0438: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B043C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0440: nop

    // 0x800B0444: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B0448: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B044C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0450: nop

    // 0x800B0454: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B0458: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B045C: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x800B0460: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x800B0464: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0468: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800B046C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800B0470:
    // 0x800B0470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0478: jal         0x80029C40
    // 0x800B047C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B047C: nop

    after_0:
    // 0x800B0480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0488: jal         0x80029D04
    // 0x800B048C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B048C: nop

    after_1:
    // 0x800B0490: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0494: nop

    // 0x800B0498: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800B049C: nop

    // 0x800B04A0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800B04A4: sh          $t2, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r10;
    // 0x800B04A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B04AC: nop

    // 0x800B04B0: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800B04B4: nop

    // 0x800B04B8: bgtz        $t4, L_800B04E4
    if (SIGNED(ctx->r12) > 0) {
        // 0x800B04BC: nop
    
            goto L_800B04E4;
    }
    // 0x800B04BC: nop

    // 0x800B04C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B04C4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800B04C8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800B04CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B04D0: nop

    // 0x800B04D4: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800B04D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B04DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B04E0: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800B04E4:
    // 0x800B04E4: b           L_800B04EC
    // 0x800B04E8: nop

        goto L_800B04EC;
    // 0x800B04E8: nop

L_800B04EC:
    // 0x800B04EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B04F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B04F4: jr          $ra
    // 0x800B04F8: nop

    return;
    // 0x800B04F8: nop

;}
RECOMP_FUNC void func_800DE534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DE538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DE53C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE544: jal         0x8002B0E4
    // 0x800DE548: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DE548: nop

    after_0:
    // 0x800DE54C: b           L_800DE554
    // 0x800DE550: nop

        goto L_800DE554;
    // 0x800DE550: nop

L_800DE554:
    // 0x800DE554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DE558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DE55C: jr          $ra
    // 0x800DE560: nop

    return;
    // 0x800DE560: nop

;}
RECOMP_FUNC void func_800C187C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C187C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C1880: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C1884: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C1888: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C188C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C1890: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1894: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C1898: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C189C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C18A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C18A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C18A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C18AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C18B0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800C18B4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C18B8: nop

    // 0x800C18BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C18C0: nop

    // 0x800C18C4: bne         $t1, $zero, L_800C1930
    if (ctx->r9 != 0) {
        // 0x800C18C8: nop
    
            goto L_800C1930;
    }
    // 0x800C18C8: nop

    // 0x800C18CC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C18D0: nop

    // 0x800C18D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C18D8: nop

    // 0x800C18DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C18E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C18E4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C18E8: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x800C18EC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800C18F0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C18F4: nop

    // 0x800C18F8: sh          $zero, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = 0;
    // 0x800C18FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1900: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1904: jal         0x8001BBDC
    // 0x800C1908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C1908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C190C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1910: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800C1914: addiu       $t8, $t8, 0x7FF0
    ctx->r24 = ADD32(ctx->r24, 0X7FF0);
    // 0x800C1918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C191C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C1920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C1924: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800C1928: jal         0x8001C0EC
    // 0x800C192C: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C192C: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
L_800C1930:
    // 0x800C1930: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1934: nop

    // 0x800C1938: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800C193C: nop

    // 0x800C1940: bne         $t0, $zero, L_800C195C
    if (ctx->r8 != 0) {
        // 0x800C1944: nop
    
            goto L_800C195C;
    }
    // 0x800C1944: nop

    // 0x800C1948: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C194C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C1950: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1954: b           L_800C1984
    // 0x800C1958: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
        goto L_800C1984;
    // 0x800C1958: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
L_800C195C:
    // 0x800C195C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1960: nop

    // 0x800C1964: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800C1968: nop

    // 0x800C196C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800C1970: sh          $t2, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r10;
    // 0x800C1974: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C1978: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C197C: nop

    // 0x800C1980: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
L_800C1984:
    // 0x800C1984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C198C: jal         0x80028FA0
    // 0x800C1990: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800C1990: nop

    after_2:
    // 0x800C1994: beq         $v0, $zero, L_800C19B8
    if (ctx->r2 == 0) {
        // 0x800C1998: nop
    
            goto L_800C19B8;
    }
    // 0x800C1998: nop

    // 0x800C199C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C19A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C19A4: jal         0x80029B60
    // 0x800C19A8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800C19A8: nop

    after_3:
    // 0x800C19AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C19B0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x800C19B4: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
L_800C19B8:
    // 0x800C19B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C19BC: nop

    // 0x800C19C0: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x800C19C4: nop

    // 0x800C19C8: bne         $t9, $zero, L_800C1A28
    if (ctx->r25 != 0) {
        // 0x800C19CC: nop
    
            goto L_800C1A28;
    }
    // 0x800C19CC: nop

    // 0x800C19D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C19D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C19D8: jal         0x8002A640
    // 0x800C19DC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_4;
    // 0x800C19DC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_4:
    // 0x800C19E0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800C19E4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C19E8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C19EC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800C19F0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800C19F4: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x800C19F8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800C19FC: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800C1A00: jal         0x80015538
    // 0x800C1A04: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800C1A04: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x800C1A08: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1A0C: nop

    // 0x800C1A10: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x800C1A14: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1A18: nop

    // 0x800C1A1C: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800C1A20: b           L_800C1A40
    // 0x800C1A24: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
        goto L_800C1A40;
    // 0x800C1A24: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
L_800C1A28:
    // 0x800C1A28: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1A2C: nop

    // 0x800C1A30: lh          $t6, 0xB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB0);
    // 0x800C1A34: nop

    // 0x800C1A38: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800C1A3C: sh          $t7, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r15;
L_800C1A40:
    // 0x800C1A40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C1A44: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1A48: nop

    // 0x800C1A4C: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x800C1A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1A58: jal         0x80029C40
    // 0x800C1A5C: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800C1A5C: nop

    after_6:
    // 0x800C1A60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C1A64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C1A68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1A6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C1A74: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x800C1A78: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C1A7C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800C1A80: jal         0x80029018
    // 0x800C1A84: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800C1A84: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800C1A88: beq         $v0, $zero, L_800C1AAC
    if (ctx->r2 == 0) {
        // 0x800C1A8C: nop
    
            goto L_800C1AAC;
    }
    // 0x800C1A8C: nop

    // 0x800C1A90: jal         0x800297DC
    // 0x800C1A94: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800C1A94: nop

    after_8:
    // 0x800C1A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1AA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C1AA4: jal         0x80029824
    // 0x800C1AA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800C1AA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800C1AAC:
    // 0x800C1AAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C1AB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C1AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1ABC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800C1AC0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800C1AC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C1AC8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800C1ACC: jal         0x800295C0
    // 0x800C1AD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x800C1AD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x800C1AD4: beq         $v0, $zero, L_800C1AEC
    if (ctx->r2 == 0) {
        // 0x800C1AD8: nop
    
            goto L_800C1AEC;
    }
    // 0x800C1AD8: nop

    // 0x800C1ADC: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C1AE0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1AE4: b           L_800C1AFC
    // 0x800C1AE8: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
        goto L_800C1AFC;
    // 0x800C1AE8: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_800C1AEC:
    // 0x800C1AEC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C1AF0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1AF4: nop

    // 0x800C1AF8: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
L_800C1AFC:
    // 0x800C1AFC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1B00: nop

    // 0x800C1B04: lh          $t4, 0xA6($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA6);
    // 0x800C1B08: nop

    // 0x800C1B0C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800C1B10: sh          $t2, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r10;
    // 0x800C1B14: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1B18: nop

    // 0x800C1B1C: lh          $t6, 0xA6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA6);
    // 0x800C1B20: nop

    // 0x800C1B24: bne         $t6, $zero, L_800C1B44
    if (ctx->r14 != 0) {
        // 0x800C1B28: nop
    
            goto L_800C1B44;
    }
    // 0x800C1B28: nop

    // 0x800C1B2C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1B30: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800C1B34: sh          $t7, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r15;
    // 0x800C1B38: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1B3C: nop

    // 0x800C1B40: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800C1B44:
    // 0x800C1B44: b           L_800C1B4C
    // 0x800C1B48: nop

        goto L_800C1B4C;
    // 0x800C1B48: nop

L_800C1B4C:
    // 0x800C1B4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C1B50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C1B54: jr          $ra
    // 0x800C1B58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800C1B58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8009CC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC88: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8009CC8C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009CC90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009CC94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009CC98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009CC9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009CCA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CCA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009CCA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CCAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009CCB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009CCB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009CCB8: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8009CCBC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CCC0: nop

    // 0x8009CCC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009CCC8: nop

    // 0x8009CCCC: bne         $t1, $zero, L_8009CCEC
    if (ctx->r9 != 0) {
        // 0x8009CCD0: nop
    
            goto L_8009CCEC;
    }
    // 0x8009CCD0: nop

    // 0x8009CCD4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CCD8: nop

    // 0x8009CCDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009CCE0: nop

    // 0x8009CCE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009CCE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_8009CCEC:
    // 0x8009CCEC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CCF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009CCF4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8009CCF8: nop

    // 0x8009CCFC: bne         $t6, $at, L_8009CDFC
    if (ctx->r14 != ctx->r1) {
        // 0x8009CD00: nop
    
            goto L_8009CDFC;
    }
    // 0x8009CD00: nop

    // 0x8009CD04: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8009CD08:
    // 0x8009CD08: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8009CD0C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8009CD10: addiu       $t9, $t9, 0x48A4
    ctx->r25 = ADD32(ctx->r25, 0X48A4);
    // 0x8009CD14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009CD18: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8009CD1C: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8009CD20: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x8009CD24: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8009CD28: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CD2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009CD30: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8009CD34: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8009CD38: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8009CD3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009CD40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009CD44: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009CD48: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8009CD4C: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8009CD50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009CD54: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8009CD58: jal         0x80067748
    // 0x8009CD5C: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8009CD5C: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_0:
    // 0x8009CD60: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009CD64: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x8009CD68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009CD6C: andi        $t5, $t2, 0x1
    ctx->r13 = ctx->r10 & 0X1;
    // 0x8009CD70: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009CD74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CD78: lw          $t7, 0x7740($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7740);
    // 0x8009CD7C: addiu       $at, $zero, 0xE5
    ctx->r1 = ADD32(0, 0XE5);
    // 0x8009CD80: bne         $t7, $at, L_8009CDA4
    if (ctx->r15 != ctx->r1) {
        // 0x8009CD84: nop
    
            goto L_8009CDA4;
    }
    // 0x8009CD84: nop

    // 0x8009CD88: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CD8C: nop

    // 0x8009CD90: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x8009CD94: nop

    // 0x8009CD98: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8009CD9C: b           L_8009CDE4
    // 0x8009CDA0: sh          $t1, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r9;
        goto L_8009CDE4;
    // 0x8009CDA0: sh          $t1, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r9;
L_8009CDA4:
    // 0x8009CDA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009CDA8: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x8009CDAC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009CDB0: andi        $t4, $t0, 0x1
    ctx->r12 = ctx->r8 & 0X1;
    // 0x8009CDB4: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8009CDB8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8009CDBC: lw          $t2, 0x7740($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7740);
    // 0x8009CDC0: addiu       $at, $zero, 0xE4
    ctx->r1 = ADD32(0, 0XE4);
    // 0x8009CDC4: bne         $t2, $at, L_8009CDE4
    if (ctx->r10 != ctx->r1) {
        // 0x8009CDC8: nop
    
            goto L_8009CDE4;
    }
    // 0x8009CDC8: nop

    // 0x8009CDCC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CDD0: nop

    // 0x8009CDD4: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x8009CDD8: nop

    // 0x8009CDDC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8009CDE0: sh          $t7, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r15;
L_8009CDE4:
    // 0x8009CDE4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8009CDE8: nop

    // 0x8009CDEC: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8009CDF0: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8009CDF4: bne         $at, $zero, L_8009CD08
    if (ctx->r1 != 0) {
        // 0x8009CDF8: sw          $t1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r9;
            goto L_8009CD08;
    }
    // 0x8009CDF8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
L_8009CDFC:
    // 0x8009CDFC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CE00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009CE04: lh          $t0, 0xB2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB2);
    // 0x8009CE08: nop

    // 0x8009CE0C: bne         $t0, $at, L_8009CFE0
    if (ctx->r8 != ctx->r1) {
        // 0x8009CE10: nop
    
            goto L_8009CFE0;
    }
    // 0x8009CE10: nop

    // 0x8009CE14: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CE18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009CE1C: lbu         $t3, 0x132($t4)
    ctx->r11 = MEM_BU(ctx->r12, 0X132);
    // 0x8009CE20: nop

    // 0x8009CE24: bne         $t3, $at, L_8009CFD8
    if (ctx->r11 != ctx->r1) {
        // 0x8009CE28: nop
    
            goto L_8009CFD8;
    }
    // 0x8009CE28: nop

    // 0x8009CE2C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CE30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009CE34: lwc1        $f10, 0x18($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8009CE38: nop

    // 0x8009CE3C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8009CE40: nop

    // 0x8009CE44: bc1f        L_8009CEAC
    if (!c1cs) {
        // 0x8009CE48: nop
    
            goto L_8009CEAC;
    }
    // 0x8009CE48: nop

    // 0x8009CE4C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CE50: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x8009CE54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009CE58: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8009CE5C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8009CE60: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009CE64: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x8009CE68: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009CE6C: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8009CE70: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009CE74: addiu       $a1, $a1, 0x35B0
    ctx->r5 = ADD32(ctx->r5, 0X35B0);
    // 0x8009CE78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009CE7C: jal         0x80027464
    // 0x8009CE80: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x8009CE80: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8009CE84: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8009CE88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CE8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CE90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009CE94: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x8009CE98: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009CE9C: jal         0x800175F0
    // 0x8009CEA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x8009CEA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8009CEA4: b           L_8009CF08
    // 0x8009CEA8: nop

        goto L_8009CF08;
    // 0x8009CEA8: nop

L_8009CEAC:
    // 0x8009CEAC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CEB0: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x8009CEB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009CEB8: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8009CEBC: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8009CEC0: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x8009CEC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009CEC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009CECC: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8009CED0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8009CED4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009CED8: addiu       $a1, $a1, 0x35B0
    ctx->r5 = ADD32(ctx->r5, 0X35B0);
    // 0x8009CEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009CEE0: jal         0x80027464
    // 0x8009CEE4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x8009CEE4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8009CEE8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8009CEEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CEF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009CEF8: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x8009CEFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009CF00: jal         0x800175F0
    // 0x8009CF04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8009CF04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_8009CF08:
    // 0x8009CF08: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8009CF0C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8009CF10: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8009CF14: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8009CF18: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009CF1C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8009CF20: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8009CF24: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009CF28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009CF2C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009CF30: sh          $t5, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r13;
    // 0x8009CF34: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8009CF38: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x8009CF3C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009CF40: jal         0x80026F10
    // 0x8009CF44: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x8009CF44: nop

    after_5:
    // 0x8009CF48: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CF4C: nop

    // 0x8009CF50: lbu         $t0, 0x132($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X132);
    // 0x8009CF54: nop

    // 0x8009CF58: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8009CF5C: sb          $t4, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r12;
    // 0x8009CF60: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8009CF64: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CF68: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8009CF6C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8009CF70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CF74: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8009CF78: lwc1        $f8, 0x18($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8009CF7C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009CF80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009CF84: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009CF88: swc1        $f8, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f8.u32l;
    // 0x8009CF8C: jal         0x80026DBC
    // 0x8009CF90: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_6;
    // 0x8009CF90: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_6:
    // 0x8009CF94: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8009CF98: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8009CF9C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8009CFA0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8009CFA4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8009CFA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009CFAC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8009CFB0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009CFB4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8009CFB8: addu        $t1, $t9, $t5
    ctx->r9 = ADD32(ctx->r25, ctx->r13);
    // 0x8009CFBC: lh          $t0, 0xB2($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XB2);
    // 0x8009CFC0: nop

    // 0x8009CFC4: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8009CFC8: sh          $t4, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r12;
    // 0x8009CFCC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CFD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8009CFD4: sh          $t8, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r24;
L_8009CFD8:
    // 0x8009CFD8: b           L_8009CFEC
    // 0x8009CFDC: nop

        goto L_8009CFEC;
    // 0x8009CFDC: nop

L_8009CFE0:
    // 0x8009CFE0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CFE4: nop

    // 0x8009CFE8: sh          $zero, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = 0;
L_8009CFEC:
    // 0x8009CFEC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8009CFF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009CFF4: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x8009CFF8: nop

    // 0x8009CFFC: bne         $t7, $at, L_8009D048
    if (ctx->r15 != ctx->r1) {
        // 0x8009D000: nop
    
            goto L_8009D048;
    }
    // 0x8009D000: nop

    // 0x8009D004: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D00C: lbu         $t5, 0x132($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X132);
    // 0x8009D010: nop

    // 0x8009D014: bne         $t5, $at, L_8009D040
    if (ctx->r13 != ctx->r1) {
        // 0x8009D018: nop
    
            goto L_8009D040;
    }
    // 0x8009D018: nop

    // 0x8009D01C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D020: addiu       $t0, $zero, 0x3D
    ctx->r8 = ADD32(0, 0X3D);
    // 0x8009D024: sh          $t0, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r8;
    // 0x8009D028: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D02C: nop

    // 0x8009D030: lbu         $t8, 0x132($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X132);
    // 0x8009D034: nop

    // 0x8009D038: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x8009D03C: sb          $t3, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r11;
L_8009D040:
    // 0x8009D040: b           L_8009D054
    // 0x8009D044: nop

        goto L_8009D054;
    // 0x8009D044: nop

L_8009D048:
    // 0x8009D048: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D04C: nop

    // 0x8009D050: sh          $zero, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = 0;
L_8009D054:
    // 0x8009D054: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D058: nop

    // 0x8009D05C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x8009D060: nop

    // 0x8009D064: bne         $t7, $zero, L_8009D184
    if (ctx->r15 != 0) {
        // 0x8009D068: nop
    
            goto L_8009D184;
    }
    // 0x8009D068: nop

    // 0x8009D06C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D070: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D074: lh          $t5, 0xA6($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XA6);
    // 0x8009D078: nop

    // 0x8009D07C: bne         $t5, $at, L_8009D0A4
    if (ctx->r13 != ctx->r1) {
        // 0x8009D080: nop
    
            goto L_8009D0A4;
    }
    // 0x8009D080: nop

    // 0x8009D084: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D088: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009D08C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009D090: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8009D094: nop

    // 0x8009D098: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009D09C: b           L_8009D148
    // 0x8009D0A0: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
        goto L_8009D148;
    // 0x8009D0A0: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
L_8009D0A4:
    // 0x8009D0A4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D0A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009D0AC: lh          $t8, 0xA6($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XA6);
    // 0x8009D0B0: nop

    // 0x8009D0B4: bne         $t8, $at, L_8009D0DC
    if (ctx->r24 != ctx->r1) {
        // 0x8009D0B8: nop
    
            goto L_8009D0DC;
    }
    // 0x8009D0B8: nop

    // 0x8009D0BC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D0C0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009D0C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D0C8: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8009D0CC: nop

    // 0x8009D0D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009D0D4: b           L_8009D148
    // 0x8009D0D8: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
        goto L_8009D148;
    // 0x8009D0D8: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
L_8009D0DC:
    // 0x8009D0DC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D0E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009D0E4: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8009D0E8: nop

    // 0x8009D0EC: bne         $t2, $at, L_8009D114
    if (ctx->r10 != ctx->r1) {
        // 0x8009D0F0: nop
    
            goto L_8009D114;
    }
    // 0x8009D0F0: nop

    // 0x8009D0F4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D0F8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009D0FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009D100: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8009D104: nop

    // 0x8009D108: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8009D10C: b           L_8009D148
    // 0x8009D110: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
        goto L_8009D148;
    // 0x8009D110: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
L_8009D114:
    // 0x8009D114: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D118: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009D11C: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x8009D120: nop

    // 0x8009D124: bne         $t9, $at, L_8009D148
    if (ctx->r25 != ctx->r1) {
        // 0x8009D128: nop
    
            goto L_8009D148;
    }
    // 0x8009D128: nop

    // 0x8009D12C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D130: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009D134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D138: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8009D13C: nop

    // 0x8009D140: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009D144: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
L_8009D148:
    // 0x8009D148: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D14C: nop

    // 0x8009D150: lh          $t4, 0xA6($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XA6);
    // 0x8009D154: nop

    // 0x8009D158: beq         $t4, $zero, L_8009D17C
    if (ctx->r12 == 0) {
        // 0x8009D15C: nop
    
            goto L_8009D17C;
    }
    // 0x8009D15C: nop

    // 0x8009D160: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D16C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8009D170: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009D174: jal         0x800175F0
    // 0x8009D178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x8009D178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_8009D17C:
    // 0x8009D17C: b           L_8009D220
    // 0x8009D180: nop

        goto L_8009D220;
    // 0x8009D180: nop

L_8009D184:
    // 0x8009D184: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D18C: lh          $t3, 0xA8($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA8);
    // 0x8009D190: nop

    // 0x8009D194: bne         $t3, $at, L_8009D1EC
    if (ctx->r11 != ctx->r1) {
        // 0x8009D198: nop
    
            goto L_8009D1EC;
    }
    // 0x8009D198: nop

    // 0x8009D19C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1A0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009D1A4: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x8009D1A8: nop

    // 0x8009D1AC: beq         $t2, $at, L_8009D1E4
    if (ctx->r10 == ctx->r1) {
        // 0x8009D1B0: nop
    
            goto L_8009D1E4;
    }
    // 0x8009D1B0: nop

    // 0x8009D1B4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009D1BC: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
    // 0x8009D1C0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1C4: nop

    // 0x8009D1C8: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x8009D1CC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1D0: nop

    // 0x8009D1D4: sh          $zero, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = 0;
    // 0x8009D1D8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1DC: nop

    // 0x8009D1E0: sh          $zero, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = 0;
L_8009D1E4:
    // 0x8009D1E4: b           L_8009D220
    // 0x8009D1E8: nop

        goto L_8009D220;
    // 0x8009D1E8: nop

L_8009D1EC:
    // 0x8009D1EC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D1F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009D1F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009D1F8: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8009D1FC: nop

    // 0x8009D200: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009D204: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x8009D208: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D20C: nop

    // 0x8009D210: lh          $t3, 0xA8($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XA8);
    // 0x8009D214: nop

    // 0x8009D218: addiu       $t1, $t3, -0x1
    ctx->r9 = ADD32(ctx->r11, -0X1);
    // 0x8009D21C: sh          $t1, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r9;
L_8009D220:
    // 0x8009D220: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D224: nop

    // 0x8009D228: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x8009D22C: nop

    // 0x8009D230: beq         $t6, $zero, L_8009D3BC
    if (ctx->r14 == 0) {
        // 0x8009D234: nop
    
            goto L_8009D3BC;
    }
    // 0x8009D234: nop

    // 0x8009D238: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8009D23C:
    // 0x8009D23C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D240: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8009D244: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x8009D248: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009D24C: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8009D250: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x8009D254: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x8009D258: addiu       $t1, $t1, 0x4874
    ctx->r9 = ADD32(ctx->r9, 0X4874);
    // 0x8009D25C: addu        $t8, $t3, $t1
    ctx->r24 = ADD32(ctx->r11, ctx->r9);
    // 0x8009D260: lh          $t2, -0x8($t8)
    ctx->r10 = MEM_H(ctx->r24, -0X8);
    // 0x8009D264: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8009D268: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8009D26C: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x8009D270: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009D274: lh          $t3, -0x6($t0)
    ctx->r11 = MEM_H(ctx->r8, -0X6);
    // 0x8009D278: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8009D27C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8009D280: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009D284: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8009D288: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009D28C: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8009D290: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8009D294: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8009D298: lh          $t2, 0x4890($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4890);
    // 0x8009D29C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8009D2A0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8009D2A4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009D2A8: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8009D2AC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8009D2B0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8009D2B4: lh          $t4, 0x4892($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4892);
    // 0x8009D2B8: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8009D2BC: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8009D2C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009D2C4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8009D2C8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8009D2CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009D2D0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8009D2D4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8009D2D8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8009D2DC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x8009D2E0: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x8009D2E4: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x8009D2E8: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x8009D2EC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8009D2F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8009D2F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8009D2F8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8009D2FC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009D300: jal         0x800293B8
    // 0x8009D304: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800293B8(rdram, ctx);
        goto after_8;
    // 0x8009D304: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x8009D308: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8009D30C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8009D310: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D314: bne         $t7, $at, L_8009D3A4
    if (ctx->r15 != ctx->r1) {
        // 0x8009D318: nop
    
            goto L_8009D3A4;
    }
    // 0x8009D318: nop

    // 0x8009D31C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D320: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8009D324: lh          $t2, 0xA6($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XA6);
    // 0x8009D328: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8009D32C: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    // 0x8009D330: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8009D334: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009D338: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8009D33C: lh          $t1, 0x486C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X486C);
    // 0x8009D340: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8009D344: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8009D348: nop

    // 0x8009D34C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009D350: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8009D354: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x8009D358: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009D35C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D360: nop

    // 0x8009D364: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x8009D368: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D36C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8009D370: lh          $t7, 0xA6($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XA6);
    // 0x8009D374: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8009D378: sll         $t2, $t7, 3
    ctx->r10 = S32(ctx->r15 << 3);
    // 0x8009D37C: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x8009D380: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009D384: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8009D388: lh          $t6, 0x486E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X486E);
    // 0x8009D38C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009D390: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8009D394: nop

    // 0x8009D398: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009D39C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009D3A0: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
L_8009D3A4:
    // 0x8009D3A4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8009D3A8: nop

    // 0x8009D3AC: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8009D3B0: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8009D3B4: bne         $at, $zero, L_8009D23C
    if (ctx->r1 != 0) {
        // 0x8009D3B8: sw          $t8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r24;
            goto L_8009D23C;
    }
    // 0x8009D3B8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_8009D3BC:
    // 0x8009D3BC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D3C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009D3C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009D3C8: lwc1        $f16, 0xD4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x8009D3CC: nop

    // 0x8009D3D0: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8009D3D4: swc1        $f8, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f8.u32l;
    // 0x8009D3D8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D3DC: nop

    // 0x8009D3E0: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8009D3E4: lwc1        $f6, 0xD4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x8009D3E8: nop

    // 0x8009D3EC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009D3F0: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x8009D3F4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8009D3F8:
    // 0x8009D3F8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8009D3FC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8009D400: addiu       $t9, $t9, 0x48A4
    ctx->r25 = ADD32(ctx->r25, 0X48A4);
    // 0x8009D404: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8009D408: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x8009D40C: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x8009D410: lh          $t1, 0x2($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X2);
    // 0x8009D414: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8009D418: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D41C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009D420: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8009D424: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8009D428: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8009D42C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009D430: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D434: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8009D438: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8009D43C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8009D440: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8009D444: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8009D448: jal         0x80067748
    // 0x8009D44C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_80067748(rdram, ctx);
        goto after_9;
    // 0x8009D44C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_9:
    // 0x8009D450: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009D454: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x8009D458: nop

    // 0x8009D45C: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x8009D460: beq         $t0, $zero, L_8009D4B0
    if (ctx->r8 == 0) {
        // 0x8009D464: nop
    
            goto L_8009D4B0;
    }
    // 0x8009D464: nop

    // 0x8009D468: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009D46C: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x8009D470: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8009D474: andi        $t5, $t7, 0x1
    ctx->r13 = ctx->r15 & 0X1;
    // 0x8009D478: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8009D47C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009D480: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8009D484: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009D488: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D48C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D490: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009D494: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x8009D498: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009D49C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D4A0: nop

    // 0x8009D4A4: swc1        $f16, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f16.u32l;
    // 0x8009D4A8: b           L_8009D4C8
    // 0x8009D4AC: nop

        goto L_8009D4C8;
    // 0x8009D4AC: nop

L_8009D4B0:
    // 0x8009D4B0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8009D4B4: nop

    // 0x8009D4B8: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x8009D4BC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8009D4C0: bne         $at, $zero, L_8009D3F8
    if (ctx->r1 != 0) {
        // 0x8009D4C4: sw          $t1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r9;
            goto L_8009D3F8;
    }
    // 0x8009D4C4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
L_8009D4C8:
    // 0x8009D4C8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8009D4CC: nop

    // 0x8009D4D0: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x8009D4D4: b           L_8009D4DC
    // 0x8009D4D8: nop

        goto L_8009D4DC;
    // 0x8009D4D8: nop

L_8009D4DC:
    // 0x8009D4DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009D4E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8009D4E4: jr          $ra
    // 0x8009D4E8: nop

    return;
    // 0x8009D4E8: nop

;}
RECOMP_FUNC void func_800D1FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1FCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1FD0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D1FD4: nop

    // 0x800D1FD8: bne         $t6, $zero, L_800D2038
    if (ctx->r14 != 0) {
        // 0x800D1FDC: nop
    
            goto L_800D2038;
    }
    // 0x800D1FDC: nop

    // 0x800D1FE0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D1FE4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D1FE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1FEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D1FF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D1FF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D1FF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D1FFC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D2000: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D2004: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800D2008: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D200C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D2010: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D2014: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D2018: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D201C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D2020: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D2024: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D2028: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D202C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D2030: b           L_800D20D4
    // 0x800D2034: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_800D20D4;
    // 0x800D2034: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D2038:
    // 0x800D2038: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800D203C: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x800D2040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D2044: bne         $t2, $at, L_800D20D4
    if (ctx->r10 != ctx->r1) {
        // 0x800D2048: nop
    
            goto L_800D20D4;
    }
    // 0x800D2048: nop

    // 0x800D204C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800D2050: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800D2054: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800D2058: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D205C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D2060: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D2064: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D2068: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D206C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D2070: lh          $t5, 0x4258($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4258);
    // 0x800D2074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D2078: bne         $t5, $at, L_800D20D4
    if (ctx->r13 != ctx->r1) {
        // 0x800D207C: nop
    
            goto L_800D20D4;
    }
    // 0x800D207C: nop

    // 0x800D2080: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D2084: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D2088: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D208C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800D2090: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2094: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2098: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800D209C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D20A0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D20A4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800D20A8: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800D20AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D20B0: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800D20B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D20B8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D20BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D20C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D20C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D20C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D20CC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800D20D0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D20D4:
    // 0x800D20D4: jr          $ra
    // 0x800D20D8: nop

    return;
    // 0x800D20D8: nop

    // 0x800D20DC: jr          $ra
    // 0x800D20E0: nop

    return;
    // 0x800D20E0: nop

;}
