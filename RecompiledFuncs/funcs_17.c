#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800A9D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9D7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A9D80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9D84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9D88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A9D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9D90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9D98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A9D9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A9DA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A9DA4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9DA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DAC: nop

    // 0x800A9DB0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A9DB4: nop

    // 0x800A9DB8: bne         $t1, $zero, L_800A9E54
    if (ctx->r9 != 0) {
        // 0x800A9DBC: nop
    
            goto L_800A9E54;
    }
    // 0x800A9DBC: nop

    // 0x800A9DC0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A9DC8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A9DCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A9DD0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DD4: nop

    // 0x800A9DD8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A9DDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A9DE0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DE4: nop

    // 0x800A9DE8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A9DEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DF0: nop

    // 0x800A9DF4: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800A9DF8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A9DFC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800A9E00: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800A9E04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E08: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A9E0C: addiu       $t9, $t9, 0x75D0
    ctx->r25 = ADD32(ctx->r25, 0X75D0);
    // 0x800A9E10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E14: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A9E18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9E1C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800A9E20: jal         0x8001C0EC
    // 0x800A9E24: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A9E24: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800A9E28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E30: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A9E34: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800A9E38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A9E3C: jal         0x8001ABF4
    // 0x800A9E40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A9E40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800A9E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E4C: jal         0x8001BB34
    // 0x800A9E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800A9E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800A9E54:
    // 0x800A9E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E5C: jal         0x8002A8B4
    // 0x800A9E60: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800A9E60: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_3:
    // 0x800A9E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E6C: jal         0x80029C40
    // 0x800A9E70: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A9E70: nop

    after_4:
    // 0x800A9E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9E7C: jal         0x80029D04
    // 0x800A9E80: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A9E80: nop

    after_5:
    // 0x800A9E84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9E88: nop

    // 0x800A9E8C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A9E90: nop

    // 0x800A9E94: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800A9E98: beq         $t2, $zero, L_800A9EC0
    if (ctx->r10 == 0) {
        // 0x800A9E9C: nop
    
            goto L_800A9EC0;
    }
    // 0x800A9E9C: nop

    // 0x800A9EA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A9EA4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A9EA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A9EAC: lwc1        $f8, 0x20($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800A9EB0: nop

    // 0x800A9EB4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A9EB8: b           L_800A9EDC
    // 0x800A9EBC: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
        goto L_800A9EDC;
    // 0x800A9EBC: swc1        $f16, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f16.u32l;
L_800A9EC0:
    // 0x800A9EC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A9EC4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A9EC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A9ECC: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800A9ED0: nop

    // 0x800A9ED4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800A9ED8: swc1        $f6, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f6.u32l;
L_800A9EDC:
    // 0x800A9EDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A9EE0: nop

    // 0x800A9EE4: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800A9EE8: nop

    // 0x800A9EEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800A9EF0: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
    // 0x800A9EF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9EFC: jal         0x8001B44C
    // 0x800A9F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800A9F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800A9F04: beq         $v0, $zero, L_800A9F1C
    if (ctx->r2 == 0) {
        // 0x800A9F08: nop
    
            goto L_800A9F1C;
    }
    // 0x800A9F08: nop

    // 0x800A9F0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9F10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9F14: jal         0x8001BBDC
    // 0x800A9F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800A9F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_800A9F1C:
    // 0x800A9F1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A9F20: nop

    // 0x800A9F24: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A9F28: nop

    // 0x800A9F2C: bgtz        $t9, L_800A9F7C
    if (SIGNED(ctx->r25) > 0) {
        // 0x800A9F30: nop
    
            goto L_800A9F7C;
    }
    // 0x800A9F30: nop

    // 0x800A9F34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9F40: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800A9F44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A9F48: jal         0x800175F0
    // 0x800A9F4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x800A9F4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x800A9F50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9F54: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x800A9F58: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800A9F5C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800A9F60: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800A9F64: jal         0x8007EDF4
    // 0x800A9F68: nop

    func_8007EDF4(rdram, ctx);
        goto after_9;
    // 0x800A9F68: nop

    after_9:
    // 0x800A9F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9F74: jal         0x8002B114
    // 0x800A9F78: nop

    func_8002B114(rdram, ctx);
        goto after_10;
    // 0x800A9F78: nop

    after_10:
L_800A9F7C:
    // 0x800A9F7C: b           L_800A9F84
    // 0x800A9F80: nop

        goto L_800A9F84;
    // 0x800A9F80: nop

L_800A9F84:
    // 0x800A9F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A9F8C: jr          $ra
    // 0x800A9F90: nop

    return;
    // 0x800A9F90: nop

;}
RECOMP_FUNC void Cutscene_RenderChar(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A870: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008A874: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8008A878: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8008A87C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8008A880: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8008A884: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8008A888: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8008A88C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008A890: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008A894: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008A898: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008A89C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A8A0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8008A8A4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008A8A8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8008A8AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008A8B0: lui         $t8, 0xFD48
    ctx->r24 = S32(0XFD48 << 16);
    // 0x8008A8B4: ori         $t8, $t8, 0x7F
    ctx->r24 = ctx->r24 | 0X7F;
    // 0x8008A8B8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8008A8BC: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x8008A8C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008A8C4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8008A8C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008A8CC: lw          $t2, -0x3560($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3560);
    // 0x8008A8D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8008A8D4: addiu       $t3, $t2, 0x30
    ctx->r11 = ADD32(ctx->r10, 0X30);
    // 0x8008A8D8: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8008A8DC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8008A8E0: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8008A8E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A8E8: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8008A8EC: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8008A8F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8008A8F4: subu        $t7, $a2, $a2
    ctx->r15 = SUB32(ctx->r6, ctx->r6);
    // 0x8008A8F8: addiu       $t8, $t7, 0x9
    ctx->r24 = ADD32(ctx->r15, 0X9);
    // 0x8008A8FC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8008A900: addiu       $t0, $t9, 0x7
    ctx->r8 = ADD32(ctx->r25, 0X7);
    // 0x8008A904: sra         $t1, $t0, 3
    ctx->r9 = S32(SIGNED(ctx->r8) >> 3);
    // 0x8008A908: andi        $t2, $t1, 0x1FF
    ctx->r10 = ctx->r9 & 0X1FF;
    // 0x8008A90C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8008A910: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x8008A914: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8008A918: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8008A91C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8008A920: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008A924: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8008A928: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8008A92C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008A930: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8008A934: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A938: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8008A93C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8008A940: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8008A944: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008A948: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x8008A94C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8008A950: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008A954: nop

    // 0x8008A958: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8008A95C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008A960: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8008A964: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A968: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8008A96C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8008A970: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8008A974: sll         $t5, $a2, 1
    ctx->r13 = S32(ctx->r6 << 1);
    // 0x8008A978: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8008A97C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8008A980: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8008A984: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8008A988: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8008A98C: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8008A990: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8008A994: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8008A998: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8008A99C: addiu       $t3, $a2, 0x8
    ctx->r11 = ADD32(ctx->r6, 0X8);
    // 0x8008A9A0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008A9A4: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8008A9A8: addiu       $t9, $a3, 0x10
    ctx->r25 = ADD32(ctx->r7, 0X10);
    // 0x8008A9AC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8008A9B0: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x8008A9B4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8008A9B8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8008A9BC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8008A9C0: andi        $t0, $t8, 0xFFF
    ctx->r8 = ctx->r24 & 0XFFF;
    // 0x8008A9C4: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x8008A9C8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8008A9CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008A9D0: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8008A9D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A9D8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8008A9DC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8008A9E0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8008A9E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A9E8: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8008A9EC: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8008A9F0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A9F4: nop

    // 0x8008A9F8: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8008A9FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008AA00: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8008AA04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AA08: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x8008AA0C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008AA10: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8008AA14: subu        $t0, $a2, $a2
    ctx->r8 = SUB32(ctx->r6, ctx->r6);
    // 0x8008AA18: addiu       $t1, $t0, 0x9
    ctx->r9 = ADD32(ctx->r8, 0X9);
    // 0x8008AA1C: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8008AA20: addiu       $t3, $t2, 0x7
    ctx->r11 = ADD32(ctx->r10, 0X7);
    // 0x8008AA24: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8008AA28: andi        $t5, $t4, 0x1FF
    ctx->r13 = ctx->r12 & 0X1FF;
    // 0x8008AA2C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008AA30: sll         $t6, $t5, 9
    ctx->r14 = S32(ctx->r13 << 9);
    // 0x8008AA34: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8008AA38: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8008AA3C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x8008AA40: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008AA44: nop

    // 0x8008AA48: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8008AA4C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8008AA50: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8008AA54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AA58: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8008AA5C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8008AA60: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8008AA64: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8008AA68: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8008AA6C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8008AA70: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8008AA74: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x8008AA78: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8008AA7C: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8008AA80: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8008AA84: or          $t8, $t5, $t9
    ctx->r24 = ctx->r13 | ctx->r25;
    // 0x8008AA88: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8008AA8C: addiu       $t0, $a2, 0x8
    ctx->r8 = ADD32(ctx->r6, 0X8);
    // 0x8008AA90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008AA94: addiu       $t4, $a3, 0x10
    ctx->r12 = ADD32(ctx->r7, 0X10);
    // 0x8008AA98: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8008AA9C: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8008AAA0: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8008AAA4: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8008AAA8: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8008AAAC: or          $t9, $t3, $t5
    ctx->r25 = ctx->r11 | ctx->r13;
    // 0x8008AAB0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8008AAB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008AAB8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8008AABC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AAC0: addiu       $t0, $t7, 0x8
    ctx->r8 = ADD32(ctx->r15, 0X8);
    // 0x8008AAC4: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8008AAC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8008AACC: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8008AAD0: lui         $t1, 0xF200
    ctx->r9 = S32(0XF200 << 16);
    // 0x8008AAD4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8008AAD8: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8008AADC: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x8008AAE0: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x8008AAE4: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8008AAE8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008AAEC: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8008AAF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AAF4: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8008AAF8: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8008AAFC: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x8008AB00: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8008AB04: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8008AB08: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8008AB0C: addiu       $t2, $a1, 0x10
    ctx->r10 = ADD32(ctx->r5, 0X10);
    // 0x8008AB10: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8008AB14: sll         $t0, $t7, 12
    ctx->r8 = S32(ctx->r15 << 12);
    // 0x8008AB18: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8008AB1C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8008AB20: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x8008AB24: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8008AB28: or          $t3, $t1, $t6
    ctx->r11 = ctx->r9 | ctx->r14;
    // 0x8008AB2C: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8008AB30: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8008AB34: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8008AB38: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x8008AB3C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8008AB40: andi        $t2, $t0, 0xFFF
    ctx->r10 = ctx->r8 & 0XFFF;
    // 0x8008AB44: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8008AB48: or          $t4, $t7, $t2
    ctx->r12 = ctx->r15 | ctx->r10;
    // 0x8008AB4C: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8008AB50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008AB54: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008AB58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AB5C: addiu       $t3, $t6, 0x8
    ctx->r11 = ADD32(ctx->r14, 0X8);
    // 0x8008AB60: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8008AB64: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8008AB68: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8008AB6C: lui         $t5, 0xB400
    ctx->r13 = S32(0XB400 << 16);
    // 0x8008AB70: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x8008AB74: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008AB78: nop

    // 0x8008AB7C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8008AB80: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8008AB84: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8008AB88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008AB8C: addiu       $t7, $t0, 0x8
    ctx->r15 = ADD32(ctx->r8, 0X8);
    // 0x8008AB90: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008AB94: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8008AB98: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8008AB9C: lui         $t2, 0xB300
    ctx->r10 = S32(0XB300 << 16);
    // 0x8008ABA0: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8008ABA4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008ABA8: lui         $t1, 0x400
    ctx->r9 = S32(0X400 << 16);
    // 0x8008ABAC: ori         $t1, $t1, 0x400
    ctx->r9 = ctx->r9 | 0X400;
    // 0x8008ABB0: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x8008ABB4: b           L_8008ABBC
    // 0x8008ABB8: nop

        goto L_8008ABBC;
    // 0x8008ABB8: nop

L_8008ABBC:
    // 0x8008ABBC: jr          $ra
    // 0x8008ABC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008ABC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E4BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4BF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E4BF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E4BFC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E4C00: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E4C04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E4C08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E4C0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E4C10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4C14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4C18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4C1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4C20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4C24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E4C28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4C2C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E4C30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4C34: nop

    // 0x800E4C38: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E4C3C: nop

    // 0x800E4C40: bne         $t1, $zero, L_800E4CB8
    if (ctx->r9 != 0) {
        // 0x800E4C44: nop
    
            goto L_800E4CB8;
    }
    // 0x800E4C44: nop

    // 0x800E4C48: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4C4C: nop

    // 0x800E4C50: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E4C54: nop

    // 0x800E4C58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4C5C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4C60: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4C64: nop

    // 0x800E4C68: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E4C6C: nop

    // 0x800E4C70: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E4C74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4C78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E4C7C: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E4C80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4C84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E4C88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4C8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800E4C90: jal         0x8001C0EC
    // 0x800E4C94: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E4C94: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E4C98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4C9C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E4CA0: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E4CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4CA8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E4CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4CB0: jal         0x8001ABF4
    // 0x800E4CB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4CB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E4CB8:
    // 0x800E4CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4CC0: jal         0x8001B4AC
    // 0x800E4CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E4CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E4CC8: beq         $v0, $zero, L_800E4E20
    if (ctx->r2 == 0) {
        // 0x800E4CCC: nop
    
            goto L_800E4E20;
    }
    // 0x800E4CCC: nop

    // 0x800E4CD0: lui         $at, 0x435E
    ctx->r1 = S32(0X435E << 16);
    // 0x800E4CD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E4CD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E4CDC: nop

    // 0x800E4CE0: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800E4CE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4CE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4CEC: lui         $a1, 0x42AC
    ctx->r5 = S32(0X42AC << 16);
    // 0x800E4CF0: jal         0x80029EF8
    // 0x800E4CF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800E4CF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x800E4CF8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E4CFC: nop

    // 0x800E4D00: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800E4D04: nop

    // 0x800E4D08: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800E4D0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E4D10: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4D14: nop

    // 0x800E4D18: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x800E4D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4D24: jal         0x80029C40
    // 0x800E4D28: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800E4D28: nop

    after_4:
    // 0x800E4D2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E4D30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E4D34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4D38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4D40: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E4D44: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E4D48: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E4D4C: jal         0x80029018
    // 0x800E4D50: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E4D50: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800E4D54: beq         $v0, $zero, L_800E4D74
    if (ctx->r2 == 0) {
        // 0x800E4D58: nop
    
            goto L_800E4D74;
    }
    // 0x800E4D58: nop

    // 0x800E4D5C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E4D60: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800E4D64: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E4D68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E4D6C: b           L_800E4DD0
    // 0x800E4D70: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E4DD0;
    // 0x800E4D70: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E4D74:
    // 0x800E4D74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E4D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4D80: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E4D84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E4D88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E4D8C: jal         0x80029F58
    // 0x800E4D90: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800E4D90: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E4D94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E4D98: bne         $v0, $at, L_800E4DB8
    if (ctx->r2 != ctx->r1) {
        // 0x800E4D9C: nop
    
            goto L_800E4DB8;
    }
    // 0x800E4D9C: nop

    // 0x800E4DA0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DA4: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800E4DA8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x800E4DAC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DB0: b           L_800E4DD0
    // 0x800E4DB4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800E4DD0;
    // 0x800E4DB4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800E4DB8:
    // 0x800E4DB8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DBC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800E4DC0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E4DC4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DC8: nop

    // 0x800E4DCC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E4DD0:
    // 0x800E4DD0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E4DD4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DD8: nop

    // 0x800E4DDC: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x800E4DE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E4DE4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DE8: nop

    // 0x800E4DEC: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x800E4DF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E4DF4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E4DF8: nop

    // 0x800E4DFC: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x800E4E00: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E4E04: nop

    // 0x800E4E08: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E4E0C: nop

    // 0x800E4E10: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E4E14: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4E18: nop

    // 0x800E4E1C: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
L_800E4E20:
    // 0x800E4E20: b           L_800E4E28
    // 0x800E4E24: nop

        goto L_800E4E28;
    // 0x800E4E24: nop

L_800E4E28:
    // 0x800E4E28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E4E2C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E4E30: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E4E34: jr          $ra
    // 0x800E4E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E4E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DCD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DCD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DCD28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCD2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCD30: jal         0x8002B0E4
    // 0x800DCD34: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DCD34: nop

    after_0:
    // 0x800DCD38: b           L_800DCD40
    // 0x800DCD3C: nop

        goto L_800DCD40;
    // 0x800DCD3C: nop

L_800DCD40:
    // 0x800DCD40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DCD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DCD48: jr          $ra
    // 0x800DCD4C: nop

    return;
    // 0x800DCD4C: nop

;}
RECOMP_FUNC void Cutscene_HandlePrintText(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008A004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008A008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008A00C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008A010: lh          $t6, 0x4BF8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4BF8);
    // 0x8008A014: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008A018: bne         $t6, $at, L_8008A028
    if (ctx->r14 != ctx->r1) {
        // 0x8008A01C: nop
    
            goto L_8008A028;
    }
    // 0x8008A01C: nop

    // 0x8008A020: b           L_8008A374
    // 0x8008A024: nop

        goto L_8008A374;
    // 0x8008A024: nop

L_8008A028:
    // 0x8008A028: jal         0x8008A6A4
    // 0x8008A02C: nop

    Cutscene_RenderTextBG(rdram, ctx);
        goto after_0;
    // 0x8008A02C: nop

    after_0:
    // 0x8008A030: jal         0x8008A384
    // 0x8008A034: nop

    Cutscene_SetupTextPal(rdram, ctx);
        goto after_1;
    // 0x8008A034: nop

    after_1:
    // 0x8008A038: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008A03C: lw          $t7, 0x4C08($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C08);
    // 0x8008A040: nop

    // 0x8008A044: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x8008A048: lh          $a1, 0x2($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X2);
    // 0x8008A04C: lh          $a2, 0x4($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X4);
    // 0x8008A050: jal         0x8008A824
    // 0x8008A054: nop

    func_8008A824(rdram, ctx);
        goto after_2;
    // 0x8008A054: nop

    after_2:
    // 0x8008A058: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
    // 0x8008A05C: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x8008A060: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x8008A064: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x8008A068: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x8008A06C: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x8008A070: nop

    // 0x8008A074: bne         $t8, $zero, L_8008A364
    if (ctx->r24 != 0) {
        // 0x8008A078: nop
    
            goto L_8008A364;
    }
    // 0x8008A078: nop

L_8008A07C:
    // 0x8008A07C: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x8008A080: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008A084: lw          $t9, 0x4C08($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C08);
    // 0x8008A088: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8008A08C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8008A090: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8008A094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008A098: bne         $t3, $at, L_8008A104
    if (ctx->r11 != ctx->r1) {
        // 0x8008A09C: nop
    
            goto L_8008A104;
    }
    // 0x8008A09C: nop

    // 0x8008A0A0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008A0A4: lw          $t4, 0x4C08($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4C08);
    // 0x8008A0A8: lh          $t6, 0x38($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X38);
    // 0x8008A0AC: lh          $t5, 0x8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8);
    // 0x8008A0B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008A0B4: bne         $t5, $t7, L_8008A0C8
    if (ctx->r13 != ctx->r15) {
        // 0x8008A0B8: nop
    
            goto L_8008A0C8;
    }
    // 0x8008A0B8: nop

    // 0x8008A0BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008A0C0: b           L_8008A0FC
    // 0x8008A0C4: sh          $t8, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r24;
        goto L_8008A0FC;
    // 0x8008A0C4: sh          $t8, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r24;
L_8008A0C8:
    // 0x8008A0C8: lh          $t0, 0x38($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X38);
    // 0x8008A0CC: nop

    // 0x8008A0D0: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x8008A0D4: sh          $t9, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r25;
    // 0x8008A0D8: lh          $t1, 0x3E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3E);
    // 0x8008A0DC: nop

    // 0x8008A0E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008A0E4: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x8008A0E8: lh          $t3, 0x3C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3C);
    // 0x8008A0EC: nop

    // 0x8008A0F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008A0F4: sh          $t4, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r12;
    // 0x8008A0F8: sh          $zero, 0x36($sp)
    MEM_H(0X36, ctx->r29) = 0;
L_8008A0FC:
    // 0x8008A0FC: b           L_8008A354
    // 0x8008A100: nop

        goto L_8008A354;
    // 0x8008A100: nop

L_8008A104:
    // 0x8008A104: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x8008A108: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008A10C: lw          $t6, 0x4C08($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4C08);
    // 0x8008A110: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x8008A114: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008A118: lh          $t0, 0xA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA);
    // 0x8008A11C: nop

    // 0x8008A120: sh          $t0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r8;
    // 0x8008A124: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x8008A128: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
    // 0x8008A12C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8008A130: lh          $s0, 0x4BFA($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4BFA);
    // 0x8008A134: nop

    // 0x8008A138: beq         $s0, $zero, L_8008A160
    if (ctx->r16 == 0) {
        // 0x8008A13C: nop
    
            goto L_8008A160;
    }
    // 0x8008A13C: nop

    // 0x8008A140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008A144: beq         $s0, $at, L_8008A1A0
    if (ctx->r16 == ctx->r1) {
        // 0x8008A148: nop
    
            goto L_8008A1A0;
    }
    // 0x8008A148: nop

    // 0x8008A14C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008A150: beq         $s0, $at, L_8008A1B8
    if (ctx->r16 == ctx->r1) {
        // 0x8008A154: nop
    
            goto L_8008A1B8;
    }
    // 0x8008A154: nop

    // 0x8008A158: b           L_8008A1E4
    // 0x8008A15C: nop

        goto L_8008A1E4;
    // 0x8008A15C: nop

L_8008A160:
    // 0x8008A160: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008A164: lw          $t1, 0x4C08($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C08);
    // 0x8008A168: addiu       $t4, $zero, 0x140
    ctx->r12 = ADD32(0, 0X140);
    // 0x8008A16C: lh          $t2, 0x6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X6);
    // 0x8008A170: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x8008A174: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8008A178: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x8008A17C: bgez        $t5, L_8008A18C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8008A180: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_8008A18C;
    }
    // 0x8008A180: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8008A184: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x8008A188: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8008A18C:
    // 0x8008A18C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8008A190: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x8008A194: sh          $t0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r8;
    // 0x8008A198: b           L_8008A224
    // 0x8008A19C: nop

        goto L_8008A224;
    // 0x8008A19C: nop

L_8008A1A0:
    // 0x8008A1A0: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x8008A1A4: nop

    // 0x8008A1A8: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8008A1AC: sh          $t1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r9;
    // 0x8008A1B0: b           L_8008A224
    // 0x8008A1B4: nop

        goto L_8008A224;
    // 0x8008A1B4: nop

L_8008A1B8:
    // 0x8008A1B8: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008A1BC: lw          $t3, 0x4C08($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C08);
    // 0x8008A1C0: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x8008A1C4: lh          $t5, 0x6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X6);
    // 0x8008A1C8: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8008A1CC: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8008A1D0: subu        $t6, $t4, $t7
    ctx->r14 = SUB32(ctx->r12, ctx->r15);
    // 0x8008A1D4: addiu       $t8, $t6, 0x140
    ctx->r24 = ADD32(ctx->r14, 0X140);
    // 0x8008A1D8: sh          $t8, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r24;
    // 0x8008A1DC: b           L_8008A224
    // 0x8008A1E0: nop

        goto L_8008A224;
    // 0x8008A1E0: nop

L_8008A1E4:
    // 0x8008A1E4: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8008A1E8: lw          $t0, 0x4C08($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4C08);
    // 0x8008A1EC: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x8008A1F0: lh          $t9, 0x6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X6);
    // 0x8008A1F4: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x8008A1F8: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8008A1FC: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x8008A200: bgez        $t3, L_8008A210
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8008A204: sra         $t5, $t3, 1
        ctx->r13 = S32(SIGNED(ctx->r11) >> 1);
            goto L_8008A210;
    }
    // 0x8008A204: sra         $t5, $t3, 1
    ctx->r13 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008A208: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x8008A20C: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8008A210:
    // 0x8008A210: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x8008A214: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x8008A218: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    // 0x8008A21C: b           L_8008A224
    // 0x8008A220: nop

        goto L_8008A224;
    // 0x8008A220: nop

L_8008A224:
    // 0x8008A224: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8008A228: lh          $s0, 0x4BFC($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4BFC);
    // 0x8008A22C: nop

    // 0x8008A230: beq         $s0, $zero, L_8008A258
    if (ctx->r16 == 0) {
        // 0x8008A234: nop
    
            goto L_8008A258;
    }
    // 0x8008A234: nop

    // 0x8008A238: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008A23C: beq         $s0, $at, L_8008A298
    if (ctx->r16 == ctx->r1) {
        // 0x8008A240: nop
    
            goto L_8008A298;
    }
    // 0x8008A240: nop

    // 0x8008A244: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008A248: beq         $s0, $at, L_8008A2B0
    if (ctx->r16 == ctx->r1) {
        // 0x8008A24C: nop
    
            goto L_8008A2B0;
    }
    // 0x8008A24C: nop

    // 0x8008A250: b           L_8008A2CC
    // 0x8008A254: nop

        goto L_8008A2CC;
    // 0x8008A254: nop

L_8008A258:
    // 0x8008A258: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008A25C: lw          $t8, 0x4C08($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4C08);
    // 0x8008A260: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x8008A264: lh          $t0, 0x8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X8);
    // 0x8008A268: lh          $t4, 0x3C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3C);
    // 0x8008A26C: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x8008A270: subu        $t1, $t2, $t9
    ctx->r9 = SUB32(ctx->r10, ctx->r25);
    // 0x8008A274: bgez        $t1, L_8008A284
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8008A278: sra         $t3, $t1, 1
        ctx->r11 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8008A284;
    }
    // 0x8008A278: sra         $t3, $t1, 1
    ctx->r11 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8008A27C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8008A280: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_8008A284:
    // 0x8008A284: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8008A288: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x8008A28C: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x8008A290: b           L_8008A2E8
    // 0x8008A294: nop

        goto L_8008A2E8;
    // 0x8008A294: nop

L_8008A298:
    // 0x8008A298: lh          $t6, 0x3C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3C);
    // 0x8008A29C: nop

    // 0x8008A2A0: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8008A2A4: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    // 0x8008A2A8: b           L_8008A2E8
    // 0x8008A2AC: nop

        goto L_8008A2E8;
    // 0x8008A2AC: nop

L_8008A2B0:
    // 0x8008A2B0: lh          $t0, 0x3C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3C);
    // 0x8008A2B4: nop

    // 0x8008A2B8: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x8008A2BC: addiu       $t9, $t2, 0xB8
    ctx->r25 = ADD32(ctx->r10, 0XB8);
    // 0x8008A2C0: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x8008A2C4: b           L_8008A2E8
    // 0x8008A2C8: nop

        goto L_8008A2E8;
    // 0x8008A2C8: nop

L_8008A2CC:
    // 0x8008A2CC: lh          $t1, 0x3C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3C);
    // 0x8008A2D0: nop

    // 0x8008A2D4: sll         $t4, $t1, 4
    ctx->r12 = S32(ctx->r9 << 4);
    // 0x8008A2D8: addiu       $t3, $t4, 0xB8
    ctx->r11 = ADD32(ctx->r12, 0XB8);
    // 0x8008A2DC: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x8008A2E0: b           L_8008A2E8
    // 0x8008A2E4: nop

        goto L_8008A2E8;
    // 0x8008A2E4: nop

L_8008A2E8:
    // 0x8008A2E8: lh          $t5, 0x34($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X34);
    // 0x8008A2EC: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8008A2F0: lh          $a0, 0x30($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X30);
    // 0x8008A2F4: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x8008A2F8: bgez        $t5, L_8008A30C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8008A2FC: andi        $a2, $t5, 0x1F
        ctx->r6 = ctx->r13 & 0X1F;
            goto L_8008A30C;
    }
    // 0x8008A2FC: andi        $a2, $t5, 0x1F
    ctx->r6 = ctx->r13 & 0X1F;
    // 0x8008A300: beq         $a2, $zero, L_8008A30C
    if (ctx->r6 == 0) {
        // 0x8008A304: nop
    
            goto L_8008A30C;
    }
    // 0x8008A304: nop

    // 0x8008A308: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_8008A30C:
    // 0x8008A30C: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x8008A310: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8008A314: bgez        $t5, L_8008A324
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8008A318: sra         $a3, $t5, 5
        ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
            goto L_8008A324;
    }
    // 0x8008A318: sra         $a3, $t5, 5
    ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8008A31C: addiu       $at, $t5, 0x1F
    ctx->r1 = ADD32(ctx->r13, 0X1F);
    // 0x8008A320: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_8008A324:
    // 0x8008A324: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x8008A328: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8008A32C: jal         0x8008A870
    // 0x8008A330: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    Cutscene_RenderChar(rdram, ctx);
        goto after_3;
    // 0x8008A330: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x8008A334: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x8008A338: nop

    // 0x8008A33C: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8008A340: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x8008A344: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x8008A348: nop

    // 0x8008A34C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8008A350: sh          $t1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r9;
L_8008A354:
    // 0x8008A354: lh          $t4, 0x3A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3A);
    // 0x8008A358: nop

    // 0x8008A35C: beq         $t4, $zero, L_8008A07C
    if (ctx->r12 == 0) {
        // 0x8008A360: nop
    
            goto L_8008A07C;
    }
    // 0x8008A360: nop

L_8008A364:
    // 0x8008A364: jal         0x80089E48
    // 0x8008A368: nop

    Cutscene_HandleSpecialPrints(rdram, ctx);
        goto after_4;
    // 0x8008A368: nop

    after_4:
    // 0x8008A36C: b           L_8008A374
    // 0x8008A370: nop

        goto L_8008A374;
    // 0x8008A370: nop

L_8008A374:
    // 0x8008A374: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008A378: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008A37C: jr          $ra
    // 0x8008A380: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8008A380: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800804D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800804D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800804D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800804D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800804DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800804E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800804E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800804E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800804EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800804F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800804F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800804F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800804FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080500: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080504: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80080508: nop

    // 0x8008050C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80080510: nop

    // 0x80080514: sh          $t1, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r9;
    // 0x80080518: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008051C: nop

    // 0x80080520: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80080524: nop

    // 0x80080528: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008052C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80080530: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80080534: nop

    // 0x80080538: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x8008053C: nop

    // 0x80080540: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80080544: bne         $at, $zero, L_80080564
    if (ctx->r1 != 0) {
        // 0x80080548: nop
    
            goto L_80080564;
    }
    // 0x80080548: nop

    // 0x8008054C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080554: jal         0x8001A928
    // 0x80080558: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80080558: nop

    after_0:
    // 0x8008055C: b           L_8008056C
    // 0x80080560: nop

        goto L_8008056C;
    // 0x80080560: nop

L_80080564:
    // 0x80080564: b           L_8008056C
    // 0x80080568: nop

        goto L_8008056C;
    // 0x80080568: nop

L_8008056C:
    // 0x8008056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080574: jr          $ra
    // 0x80080578: nop

    return;
    // 0x80080578: nop

;}
RECOMP_FUNC void func_800E8DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E8DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8DF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8DFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8E00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8E04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8E08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8E0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8E10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8E14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8E18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8E1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8E20: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800E8E24: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E28: nop

    // 0x800E8E2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8E30: nop

    // 0x800E8E34: bne         $t1, $zero, L_800E8E80
    if (ctx->r9 != 0) {
        // 0x800E8E38: nop
    
            goto L_800E8E80;
    }
    // 0x800E8E38: nop

    // 0x800E8E3C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E40: nop

    // 0x800E8E44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E8E48: nop

    // 0x800E8E4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8E50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8E54: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E58: nop

    // 0x800E8E5C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8E60: nop

    // 0x800E8E64: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E8E68: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E6C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800E8E70: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800E8E74: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800E8E7C: sb          $t9, 0x13A($t0)
    MEM_B(0X13A, ctx->r8) = ctx->r25;
L_800E8E80:
    // 0x800E8E80: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8E84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E8E88: lh          $t3, 0x108($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X108);
    // 0x800E8E8C: nop

    // 0x800E8E90: bne         $t3, $at, L_800E8EA8
    if (ctx->r11 != ctx->r1) {
        // 0x800E8E94: nop
    
            goto L_800E8EA8;
    }
    // 0x800E8E94: nop

    // 0x800E8E98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8E9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8EA0: jal         0x8002B114
    // 0x800E8EA4: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800E8EA4: nop

    after_0:
L_800E8EA8:
    // 0x800E8EA8: b           L_800E8EB0
    // 0x800E8EAC: nop

        goto L_800E8EB0;
    // 0x800E8EAC: nop

L_800E8EB0:
    // 0x800E8EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E8EB8: jr          $ra
    // 0x800E8EBC: nop

    return;
    // 0x800E8EBC: nop

;}
RECOMP_FUNC void func_8009A674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A674: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009A678: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009A67C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A680: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A684: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A688: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A68C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A690: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A694: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A698: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A69C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009A6A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009A6A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009A6A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009A6AC: nop

    // 0x8009A6B0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8009A6B4: nop

    // 0x8009A6B8: bne         $t1, $zero, L_8009A70C
    if (ctx->r9 != 0) {
        // 0x8009A6BC: nop
    
            goto L_8009A70C;
    }
    // 0x8009A6BC: nop

    // 0x8009A6C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A6C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A6C8: jal         0x8002A2EC
    // 0x8009A6CC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x8009A6CC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_0:
    // 0x8009A6D0: beq         $v0, $zero, L_8009A6E4
    if (ctx->r2 == 0) {
        // 0x8009A6D4: nop
    
            goto L_8009A6E4;
    }
    // 0x8009A6D4: nop

    // 0x8009A6D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A6DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009A6E0: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_8009A6E4:
    // 0x8009A6E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8009A6E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009A6EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009A6F0: nop

    // 0x8009A6F4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8009A6F8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8009A6FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009A700: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009A704: b           L_8009A914
    // 0x8009A708: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
        goto L_8009A914;
    // 0x8009A708: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
L_8009A70C:
    // 0x8009A70C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009A710: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A714: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8009A718: nop

    // 0x8009A71C: bne         $t7, $at, L_8009A770
    if (ctx->r15 != ctx->r1) {
        // 0x8009A720: nop
    
            goto L_8009A770;
    }
    // 0x8009A720: nop

    // 0x8009A724: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A728: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A72C: jal         0x8002A2EC
    // 0x8009A730: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_1;
    // 0x8009A730: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_1:
    // 0x8009A734: bne         $v0, $zero, L_8009A748
    if (ctx->r2 != 0) {
        // 0x8009A738: nop
    
            goto L_8009A748;
    }
    // 0x8009A738: nop

    // 0x8009A73C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8009A740: nop

    // 0x8009A744: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_8009A748:
    // 0x8009A748: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009A74C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009A750: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009A754: nop

    // 0x8009A758: swc1        $f8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f8.u32l;
    // 0x8009A75C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009A760: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009A764: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009A768: b           L_8009A914
    // 0x8009A76C: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
        goto L_8009A914;
    // 0x8009A76C: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
L_8009A770:
    // 0x8009A770: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009A774: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009A778: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8009A77C: nop

    // 0x8009A780: bne         $t2, $at, L_8009A808
    if (ctx->r10 != ctx->r1) {
        // 0x8009A784: nop
    
            goto L_8009A808;
    }
    // 0x8009A784: nop

    // 0x8009A788: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009A78C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009A790: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A794: nop

    // 0x8009A798: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x8009A79C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009A7A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009A7A4: nop

    // 0x8009A7A8: swc1        $f18, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f18.u32l;
    // 0x8009A7AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009A7B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009A7B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009A7B8: nop

    // 0x8009A7BC: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x8009A7C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009A7C4: nop

    // 0x8009A7C8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x8009A7CC: nop

    // 0x8009A7D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8009A7D4: sh          $t8, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r24;
    // 0x8009A7D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009A7DC: nop

    // 0x8009A7E0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x8009A7E4: nop

    // 0x8009A7E8: slti        $at, $t0, 0x1E0
    ctx->r1 = SIGNED(ctx->r8) < 0X1E0 ? 1 : 0;
    // 0x8009A7EC: bne         $at, $zero, L_8009A800
    if (ctx->r1 != 0) {
        // 0x8009A7F0: nop
    
            goto L_8009A800;
    }
    // 0x8009A7F0: nop

    // 0x8009A7F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009A7F8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009A7FC: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_8009A800:
    // 0x8009A800: b           L_8009A914
    // 0x8009A804: nop

        goto L_8009A914;
    // 0x8009A804: nop

L_8009A808:
    // 0x8009A808: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A80C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A810: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8009A814: nop

    // 0x8009A818: bne         $t4, $at, L_8009A914
    if (ctx->r12 != ctx->r1) {
        // 0x8009A81C: nop
    
            goto L_8009A914;
    }
    // 0x8009A81C: nop

    // 0x8009A820: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009A824: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009A828: nop

    // 0x8009A82C: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x8009A830: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009A834: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009A838: nop

    // 0x8009A83C: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
    // 0x8009A840: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009A844: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8009A848: nop

    // 0x8009A84C: swc1        $f10, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f10.u32l;
    // 0x8009A850: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009A854: nop

    // 0x8009A858: lh          $t9, 0xAA($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XAA);
    // 0x8009A85C: nop

    // 0x8009A860: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009A864: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
    // 0x8009A868: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009A86C: nop

    // 0x8009A870: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x8009A874: nop

    // 0x8009A878: slti        $at, $t2, 0x78
    ctx->r1 = SIGNED(ctx->r10) < 0X78 ? 1 : 0;
    // 0x8009A87C: bne         $at, $zero, L_8009A914
    if (ctx->r1 != 0) {
        // 0x8009A880: nop
    
            goto L_8009A914;
    }
    // 0x8009A880: nop

    // 0x8009A884: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A888: nop

    // 0x8009A88C: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x8009A890: nop

    // 0x8009A894: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8009A898: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8009A89C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A8A0: beq         $t5, $at, L_8009A8C4
    if (ctx->r13 == ctx->r1) {
        // 0x8009A8A4: nop
    
            goto L_8009A8C4;
    }
    // 0x8009A8A4: nop

    // 0x8009A8A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A8AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A8B0: jal         0x800281A4
    // 0x8009A8B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x8009A8B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8009A8B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009A8BC: jal         0x8002B0E4
    // 0x8009A8C0: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x8009A8C0: nop

    after_3:
L_8009A8C4:
    // 0x8009A8C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009A8C8: nop

    // 0x8009A8CC: lh          $t8, 0xEC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEC);
    // 0x8009A8D0: nop

    // 0x8009A8D4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8009A8D8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8009A8DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A8E0: beq         $t9, $at, L_8009A904
    if (ctx->r25 == ctx->r1) {
        // 0x8009A8E4: nop
    
            goto L_8009A904;
    }
    // 0x8009A8E4: nop

    // 0x8009A8E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A8EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A8F0: jal         0x800281A4
    // 0x8009A8F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x8009A8F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8009A8F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009A8FC: jal         0x8002B0E4
    // 0x8009A900: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x8009A900: nop

    after_5:
L_8009A904:
    // 0x8009A904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A90C: jal         0x8002B0E4
    // 0x8009A910: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x8009A910: nop

    after_6:
L_8009A914:
    // 0x8009A914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A91C: jal         0x80028FA0
    // 0x8009A920: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x8009A920: nop

    after_7:
    // 0x8009A924: beq         $v0, $zero, L_8009A93C
    if (ctx->r2 == 0) {
        // 0x8009A928: nop
    
            goto L_8009A93C;
    }
    // 0x8009A928: nop

    // 0x8009A92C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A934: jal         0x80029B60
    // 0x8009A938: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x8009A938: nop

    after_8:
L_8009A93C:
    // 0x8009A93C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A944: jal         0x80029D8C
    // 0x8009A948: nop

    func_80029D8C(rdram, ctx);
        goto after_9;
    // 0x8009A948: nop

    after_9:
    // 0x8009A94C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009A950: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009A954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A95C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009A960: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x8009A964: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009A968: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009A96C: jal         0x80029018
    // 0x8009A970: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x8009A970: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x8009A974: beq         $v0, $zero, L_8009A97C
    if (ctx->r2 == 0) {
        // 0x8009A978: nop
    
            goto L_8009A97C;
    }
    // 0x8009A978: nop

L_8009A97C:
    // 0x8009A97C: b           L_8009A984
    // 0x8009A980: nop

        goto L_8009A984;
    // 0x8009A980: nop

L_8009A984:
    // 0x8009A984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009A988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009A98C: jr          $ra
    // 0x8009A990: nop

    return;
    // 0x8009A990: nop

;}
RECOMP_FUNC void func_800EF914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EF914: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EF918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EF91C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EF920: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EF924: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EF928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EF92C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF930: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EF934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF938: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EF93C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EF940: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF944: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800EF948: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF94C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF950: jal         0x800281A4
    // 0x800EF954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800EF954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800EF958: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800EF95C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800EF960: jal         0x8002B114
    // 0x800EF964: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x800EF964: nop

    after_1:
    // 0x800EF968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF96C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF970: jal         0x8002B0E4
    // 0x800EF974: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800EF974: nop

    after_2:
    // 0x800EF978: b           L_800EF980
    // 0x800EF97C: nop

        goto L_800EF980;
    // 0x800EF97C: nop

L_800EF980:
    // 0x800EF980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EF984: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EF988: jr          $ra
    // 0x800EF98C: nop

    return;
    // 0x800EF98C: nop

;}
RECOMP_FUNC void func_800F11A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F11A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F11AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F11B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F11B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F11B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F11BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F11C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F11C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F11C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F11CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F11D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F11D4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F11D8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F11DC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800F11E0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800F11E4: b           L_800F11EC
    // 0x800F11E8: nop

        goto L_800F11EC;
    // 0x800F11E8: nop

L_800F11EC:
    // 0x800F11EC: jr          $ra
    // 0x800F11F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F11F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008BB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BB0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BB14: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008BB18: lh          $t6, 0x4FA0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4FA0);
    // 0x8008BB1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB20: sw          $t6, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r14;
    // 0x8008BB24: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008BB28: lh          $t7, 0x4FA2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4FA2);
    // 0x8008BB2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB30: sb          $t7, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = ctx->r15;
    // 0x8008BB34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB38: lwc1        $f4, 0x4F78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F78);
    // 0x8008BB3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB40: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x8008BB44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB48: lwc1        $f6, 0x4F7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F7C);
    // 0x8008BB4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB50: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8008BB54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB58: lwc1        $f8, 0x4F80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F80);
    // 0x8008BB5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB60: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x8008BB64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB68: lwc1        $f10, 0x4F84($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F84);
    // 0x8008BB6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB70: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x8008BB74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB78: lwc1        $f16, 0x4F88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F88);
    // 0x8008BB7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB80: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x8008BB84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB88: lwc1        $f18, 0x4F8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F8C);
    // 0x8008BB8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BB90: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8008BB94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BB98: lwc1        $f4, 0x4F90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F90);
    // 0x8008BB9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BBA0: swc1        $f4, -0x1EB4($at)
    MEM_W(-0X1EB4, ctx->r1) = ctx->f4.u32l;
    // 0x8008BBA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BBA8: lwc1        $f6, 0x4F94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F94);
    // 0x8008BBAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BBB0: swc1        $f6, -0x1EB0($at)
    MEM_W(-0X1EB0, ctx->r1) = ctx->f6.u32l;
    // 0x8008BBB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BBB8: lwc1        $f8, 0x4F98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F98);
    // 0x8008BBBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BBC0: swc1        $f8, -0x1EAC($at)
    MEM_W(-0X1EAC, ctx->r1) = ctx->f8.u32l;
    // 0x8008BBC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BBC8: lwc1        $f10, 0x4F9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F9C);
    // 0x8008BBCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BBD0: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8008BBD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BBD8: sh          $zero, 0x4FA4($at)
    MEM_H(0X4FA4, ctx->r1) = 0;
    // 0x8008BBDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BBE0: sh          $zero, 0x4FA6($at)
    MEM_H(0X4FA6, ctx->r1) = 0;
    // 0x8008BBE4: jal         0x80019B7C
    // 0x8008BBE8: nop

    func_80019B7C(rdram, ctx);
        goto after_0;
    // 0x8008BBE8: nop

    after_0:
    // 0x8008BBEC: b           L_8008BBF4
    // 0x8008BBF0: nop

        goto L_8008BBF4;
    // 0x8008BBF0: nop

L_8008BBF4:
    // 0x8008BBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BBF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BBFC: jr          $ra
    // 0x8008BC00: nop

    return;
    // 0x8008BC00: nop

;}
RECOMP_FUNC void func_800C8F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8F54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8F5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8F60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8F64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C8F68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8F6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8F70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8F74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8F78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8F7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8F80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8F84: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800C8F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8F90: jal         0x8002B0E4
    // 0x800C8F94: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C8F94: nop

    after_0:
    // 0x800C8F98: b           L_800C8FA0
    // 0x800C8F9C: nop

        goto L_800C8FA0;
    // 0x800C8F9C: nop

L_800C8FA0:
    // 0x800C8FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8FA8: jr          $ra
    // 0x800C8FAC: nop

    return;
    // 0x800C8FAC: nop

;}
RECOMP_FUNC void func_800C00F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C00F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C00F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C00FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C0100: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C0104: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800C0108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C010C: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800C0110: lw          $a3, 0x24($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X24);
    // 0x800C0114: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C0118: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C011C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0120: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800C0124: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800C0128: jal         0x800294F0
    // 0x800C012C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800294F0(rdram, ctx);
        goto after_0;
    // 0x800C012C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C0130: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800C0134: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800C0138: nop

    // 0x800C013C: beq         $t7, $zero, L_800C015C
    if (ctx->r15 == 0) {
        // 0x800C0140: nop
    
            goto L_800C015C;
    }
    // 0x800C0140: nop

    // 0x800C0144: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C0148: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C014C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C0150: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800C0154: b           L_800C0170
    // 0x800C0158: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
        goto L_800C0170;
    // 0x800C0158: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
L_800C015C:
    // 0x800C015C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C0160: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C0164: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C0168: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800C016C: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
L_800C0170:
    // 0x800C0170: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800C0174: b           L_800C0184
    // 0x800C0178: nop

        goto L_800C0184;
    // 0x800C0178: nop

    // 0x800C017C: b           L_800C0184
    // 0x800C0180: nop

        goto L_800C0184;
    // 0x800C0180: nop

L_800C0184:
    // 0x800C0184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0188: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C018C: jr          $ra
    // 0x800C0190: nop

    return;
    // 0x800C0190: nop

;}
RECOMP_FUNC void func_800D3568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3568: jr          $ra
    // 0x800D356C: nop

    return;
    // 0x800D356C: nop

    // 0x800D3570: jr          $ra
    // 0x800D3574: nop

    return;
    // 0x800D3574: nop

;}
RECOMP_FUNC void func_8009F5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F5BC: lbu         $t6, 0x132($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X132);
    // 0x8009F5C0: nop

    // 0x8009F5C4: bne         $t6, $zero, L_8009F5DC
    if (ctx->r14 != 0) {
        // 0x8009F5C8: nop
    
            goto L_8009F5DC;
    }
    // 0x8009F5C8: nop

    // 0x8009F5CC: lbu         $t7, 0x132($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X132);
    // 0x8009F5D0: nop

    // 0x8009F5D4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8009F5D8: sb          $t8, 0x132($a0)
    MEM_B(0X132, ctx->r4) = ctx->r24;
L_8009F5DC:
    // 0x8009F5DC: jr          $ra
    // 0x8009F5E0: nop

    return;
    // 0x8009F5E0: nop

    // 0x8009F5E4: jr          $ra
    // 0x8009F5E8: nop

    return;
    // 0x8009F5E8: nop

;}
RECOMP_FUNC void func_800F4CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F4CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F4CE0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F4CE4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F4CE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F4CEC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F4CF0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F4CF4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F4CF8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F4CFC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F4D00: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F4D04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F4D08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F4D0C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F4D10: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F4D14: addiu       $a1, $a1, 0x370C
    ctx->r5 = ADD32(ctx->r5, 0X370C);
    // 0x800F4D18: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F4D1C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F4D20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F4D24: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F4D28: jal         0x80027464
    // 0x800F4D2C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F4D2C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F4D30: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F4D34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F4D38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F4D3C: beq         $t0, $at, L_800F4DD4
    if (ctx->r8 == ctx->r1) {
        // 0x800F4D40: nop
    
            goto L_800F4DD4;
    }
    // 0x800F4D40: nop

    // 0x800F4D44: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F4D48: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F4D4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F4D50: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F4D54: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F4D58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F4D5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F4D60: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F4D64: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F4D68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4D6C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F4D70: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
    // 0x800F4D74: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F4D78: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800F4D7C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x800F4D80: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800F4D84: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800F4D88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F4D8C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800F4D90: lh          $t7, 0xC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC);
    // 0x800F4D94: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F4D98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4D9C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F4DA0: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
    // 0x800F4DA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F4DA8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800F4DAC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800F4DB0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F4DB4: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800F4DB8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F4DBC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F4DC0: lh          $t0, 0xE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE);
    // 0x800F4DC4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F4DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4DCC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F4DD0: sh          $t0, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r8;
L_800F4DD4:
    // 0x800F4DD4: b           L_800F4DDC
    // 0x800F4DD8: nop

        goto L_800F4DDC;
    // 0x800F4DD8: nop

L_800F4DDC:
    // 0x800F4DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F4DE4: jr          $ra
    // 0x800F4DE8: nop

    return;
    // 0x800F4DE8: nop

;}
RECOMP_FUNC void func_800926FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800926FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092700: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092704: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092708: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009270C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092710: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092714: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092718: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009271C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092720: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092724: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092728: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009272C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092730: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092734: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092738: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009273C: addiu       $a1, $a1, 0x16F0
    ctx->r5 = ADD32(ctx->r5, 0X16F0);
    // 0x80092740: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092744: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009274C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092750: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092754: jal         0x80027464
    // 0x80092758: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092758: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009275C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092760: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092764: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092768: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x8009276C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092770: jal         0x8001ABF4
    // 0x80092774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80092778: b           L_80092780
    // 0x8009277C: nop

        goto L_80092780;
    // 0x8009277C: nop

L_80092780:
    // 0x80092780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092788: jr          $ra
    // 0x8009278C: nop

    return;
    // 0x8009278C: nop

;}
RECOMP_FUNC void func_800A62A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A62A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A62AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A62B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A62B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A62B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A62BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A62C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A62C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A62C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A62CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A62D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A62D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A62D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A62DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A62E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A62E4: nop

    // 0x800A62E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A62EC: nop

    // 0x800A62F0: bne         $t1, $zero, L_800A63E8
    if (ctx->r9 != 0) {
        // 0x800A62F4: nop
    
            goto L_800A63E8;
    }
    // 0x800A62F4: nop

    // 0x800A62F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A62FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A6300: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A6304: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A6308: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A630C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A6310: nop

    // 0x800A6314: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A6318: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A631C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A6320: nop

    // 0x800A6324: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A6328: jal         0x80014E80
    // 0x800A632C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A632C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x800A6330: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6334: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x800A6338: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x800A633C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A6340: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6344: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800A6348: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A634C: jal         0x80015538
    // 0x800A6350: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A6350: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x800A6354: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A6358: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A635C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800A6360: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A6364: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A6368: nop

    // 0x800A636C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A6370: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800A6374: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A6378: sh          $t9, 0xAE($t0)
    MEM_H(0XAE, ctx->r8) = ctx->r25;
    // 0x800A637C: nop

    // 0x800A6380: jal         0x80014E80
    // 0x800A6384: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800A6384: addiu       $a0, $zero, -0x1E
    ctx->r4 = ADD32(0, -0X1E);
    after_2:
    // 0x800A6388: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A638C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6390: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x800A6394: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x800A6398: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800A639C: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A63A0: jal         0x80015538
    // 0x800A63A4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A63A4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x800A63A8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A63AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A63B0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A63B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A63B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A63BC: nop

    // 0x800A63C0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A63C4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x800A63C8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A63CC: sh          $t4, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r12;
    // 0x800A63D0: nop

    // 0x800A63D4: jal         0x80014E80
    // 0x800A63D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800A63D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x800A63DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A63E0: addiu       $t6, $v0, 0xB4
    ctx->r14 = ADD32(ctx->r2, 0XB4);
    // 0x800A63E4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800A63E8:
    // 0x800A63E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A63EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A63F0: jal         0x80028FA0
    // 0x800A63F4: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800A63F4: nop

    after_5:
    // 0x800A63F8: beq         $v0, $zero, L_800A6410
    if (ctx->r2 == 0) {
        // 0x800A63FC: nop
    
            goto L_800A6410;
    }
    // 0x800A63FC: nop

    // 0x800A6400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6404: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6408: jal         0x80029B60
    // 0x800A640C: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800A640C: nop

    after_6:
L_800A6410:
    // 0x800A6410: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6414: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6418: jal         0x80029C40
    // 0x800A641C: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800A641C: nop

    after_7:
    // 0x800A6420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6428: jal         0x80029D04
    // 0x800A642C: nop

    func_80029D04(rdram, ctx);
        goto after_8;
    // 0x800A642C: nop

    after_8:
    // 0x800A6430: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A6434: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x800A6438: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x800A643C: lwc1        $f14, 0x3C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800A6440: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800A6444: jal         0x8002A800
    // 0x800A6448: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_8002A800(rdram, ctx);
        goto after_9;
    // 0x800A6448: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_9:
    // 0x800A644C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800A6450: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800A6454: nop

    // 0x800A6458: beq         $t0, $zero, L_800A64A8
    if (ctx->r8 == 0) {
        // 0x800A645C: nop
    
            goto L_800A64A8;
    }
    // 0x800A645C: nop

    // 0x800A6460: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800A6464: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A6468: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800A646C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800A6470: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800A6474: jal         0x80015538
    // 0x800A6478: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800A6478: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_10:
    // 0x800A647C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800A6480: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A6484: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800A6488: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A648C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A6490: nop

    // 0x800A6494: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A6498: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x800A649C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800A64A0: sh          $t5, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r13;
    // 0x800A64A4: nop

L_800A64A8:
    // 0x800A64A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A64AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A64B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A64B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A64B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A64BC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800A64C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A64C4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800A64C8: jal         0x80029018
    // 0x800A64CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x800A64CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x800A64D0: beq         $v0, $zero, L_800A64F4
    if (ctx->r2 == 0) {
        // 0x800A64D4: nop
    
            goto L_800A64F4;
    }
    // 0x800A64D4: nop

    // 0x800A64D8: jal         0x800297DC
    // 0x800A64DC: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800A64DC: nop

    after_12:
    // 0x800A64E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A64E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A64E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A64EC: jal         0x80029824
    // 0x800A64F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800A64F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
L_800A64F4:
    // 0x800A64F4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A64F8: nop

    // 0x800A64FC: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x800A6500: nop

    // 0x800A6504: addiu       $t8, $t9, -0x8
    ctx->r24 = ADD32(ctx->r25, -0X8);
    // 0x800A6508: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
    // 0x800A650C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A6510: nop

    // 0x800A6514: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800A6518: nop

    // 0x800A651C: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800A6520: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A6524: nop

    // 0x800A6528: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A652C: nop

    // 0x800A6530: bgez        $t2, L_800A655C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800A6534: nop
    
            goto L_800A655C;
    }
    // 0x800A6534: nop

    // 0x800A6538: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A653C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800A6540: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A6544: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A6548: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800A654C: sh          $t5, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = ctx->r13;
    // 0x800A6550: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A6554: nop

    // 0x800A6558: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A655C:
    // 0x800A655C: b           L_800A6564
    // 0x800A6560: nop

        goto L_800A6564;
    // 0x800A6560: nop

L_800A6564:
    // 0x800A6564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A6568: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A656C: jr          $ra
    // 0x800A6570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A6570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D33E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D33E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D33E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D33E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D33EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D33F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D33F4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D33F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D33FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3404: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3408: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D340C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D3410: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D3414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D3418: beq         $s0, $at, L_800D344C
    if (ctx->r16 == ctx->r1) {
        // 0x800D341C: nop
    
            goto L_800D344C;
    }
    // 0x800D341C: nop

    // 0x800D3420: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D3424: beq         $s0, $at, L_800D345C
    if (ctx->r16 == ctx->r1) {
        // 0x800D3428: nop
    
            goto L_800D345C;
    }
    // 0x800D3428: nop

    // 0x800D342C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D3430: beq         $s0, $at, L_800D346C
    if (ctx->r16 == ctx->r1) {
        // 0x800D3434: nop
    
            goto L_800D346C;
    }
    // 0x800D3434: nop

    // 0x800D3438: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D343C: beq         $s0, $at, L_800D347C
    if (ctx->r16 == ctx->r1) {
        // 0x800D3440: nop
    
            goto L_800D347C;
    }
    // 0x800D3440: nop

    // 0x800D3444: b           L_800D348C
    // 0x800D3448: nop

        goto L_800D348C;
    // 0x800D3448: nop

L_800D344C:
    // 0x800D344C: jal         0x800D2F1C
    // 0x800D3450: nop

    func_800D2F1C(rdram, ctx);
        goto after_0;
    // 0x800D3450: nop

    after_0:
    // 0x800D3454: b           L_800D3494
    // 0x800D3458: nop

        goto L_800D3494;
    // 0x800D3458: nop

L_800D345C:
    // 0x800D345C: jal         0x800D3048
    // 0x800D3460: nop

    func_800D3048(rdram, ctx);
        goto after_1;
    // 0x800D3460: nop

    after_1:
    // 0x800D3464: b           L_800D3494
    // 0x800D3468: nop

        goto L_800D3494;
    // 0x800D3468: nop

L_800D346C:
    // 0x800D346C: jal         0x800D31A8
    // 0x800D3470: nop

    func_800D31A8(rdram, ctx);
        goto after_2;
    // 0x800D3470: nop

    after_2:
    // 0x800D3474: b           L_800D3494
    // 0x800D3478: nop

        goto L_800D3494;
    // 0x800D3478: nop

L_800D347C:
    // 0x800D347C: jal         0x800D33B0
    // 0x800D3480: nop

    func_800D33B0(rdram, ctx);
        goto after_3;
    // 0x800D3480: nop

    after_3:
    // 0x800D3484: b           L_800D3494
    // 0x800D3488: nop

        goto L_800D3494;
    // 0x800D3488: nop

L_800D348C:
    // 0x800D348C: b           L_800D3494
    // 0x800D3490: nop

        goto L_800D3494;
    // 0x800D3490: nop

L_800D3494:
    // 0x800D3494: b           L_800D349C
    // 0x800D3498: nop

        goto L_800D349C;
    // 0x800D3498: nop

L_800D349C:
    // 0x800D349C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D34A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D34A4: jr          $ra
    // 0x800D34A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D34A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A2BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006A2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A2C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006A2C8: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8006A2CC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A2D0: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x8006A2D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006A2D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A2DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A2E0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8006A2E4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8006A2E8: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x8006A2EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A2F0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006A2F4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8006A2F8: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8006A2FC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8006A300: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A304: lbu         $t3, 0x4808($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4808);
    // 0x8006A308: nop

    // 0x8006A30C: andi        $t4, $t3, 0xF0
    ctx->r12 = ctx->r11 & 0XF0;
    // 0x8006A310: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x8006A314: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A318: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x8006A31C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8006A320: lb          $t9, 0x4802($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4802);
    // 0x8006A324: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8006A328: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8006A32C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A330: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8006A334: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8006A338: lb          $t2, 0x4803($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4803);
    // 0x8006A33C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8006A340: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8006A344: lbu         $t5, 0x1F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A348: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8006A34C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A350: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8006A354: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8006A358: ori         $t6, $t5, 0x6
    ctx->r14 = ctx->r13 | 0X6;
    // 0x8006A35C: sb          $t6, 0x4808($at)
    MEM_B(0X4808, ctx->r1) = ctx->r14;
    // 0x8006A360: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A364: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A368: jal         0x800250A0
    // 0x8006A36C: nop

    func_800250A0(rdram, ctx);
        goto after_0;
    // 0x8006A36C: nop

    after_0:
    // 0x8006A370: b           L_8006A378
    // 0x8006A374: nop

        goto L_8006A378;
    // 0x8006A374: nop

L_8006A378:
    // 0x8006A378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A37C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006A380: jr          $ra
    // 0x8006A384: nop

    return;
    // 0x8006A384: nop

;}
RECOMP_FUNC void func_800D1268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D126C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1278: jal         0x8002B0E4
    // 0x800D127C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D127C: nop

    after_0:
    // 0x800D1280: b           L_800D1288
    // 0x800D1284: nop

        goto L_800D1288;
    // 0x800D1284: nop

L_800D1288:
    // 0x800D1288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D128C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D1290: jr          $ra
    // 0x800D1294: nop

    return;
    // 0x800D1294: nop

;}
RECOMP_FUNC void func_800BE928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BE92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BE930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BE934: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BE938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BE93C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BE940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BE948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE94C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BE950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BE954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BE958: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BE95C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE960: nop

    // 0x800BE964: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BE968: nop

    // 0x800BE96C: bne         $t1, $zero, L_800BE9C8
    if (ctx->r9 != 0) {
        // 0x800BE970: nop
    
            goto L_800BE9C8;
    }
    // 0x800BE970: nop

    // 0x800BE974: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE978: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BE97C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BE980: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BE984: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE988: nop

    // 0x800BE98C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BE990: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BE994: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE998: nop

    // 0x800BE99C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BE9A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE9A4: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x800BE9A8: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800BE9AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE9B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE9B4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BE9B8: addiu       $a3, $a3, 0x7EC4
    ctx->r7 = ADD32(ctx->r7, 0X7EC4);
    // 0x800BE9BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE9C0: jal         0x8001ABF4
    // 0x800BE9C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800BE9C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800BE9C8:
    // 0x800BE9C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE9CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE9D0: jal         0x80029C40
    // 0x800BE9D4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BE9D4: nop

    after_1:
    // 0x800BE9D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE9DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE9E0: jal         0x80029D04
    // 0x800BE9E4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BE9E4: nop

    after_2:
    // 0x800BE9E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE9EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE9F0: jal         0x8002A8B4
    // 0x800BE9F4: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800BE9F4: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_3:
    // 0x800BE9F8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE9FC: nop

    // 0x800BEA00: lwc1        $f8, 0x3C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800BEA04: nop

    // 0x800BEA08: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x800BEA0C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BEA14: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800BEA18: nop

    // 0x800BEA1C: bne         $t0, $at, L_800BEA90
    if (ctx->r8 != ctx->r1) {
        // 0x800BEA20: nop
    
            goto L_800BEA90;
    }
    // 0x800BEA20: nop

    // 0x800BEA24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEA28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEA2C: jal         0x8002A560
    // 0x800BEA30: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A560(rdram, ctx);
        goto after_4;
    // 0x800BEA30: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_4:
    // 0x800BEA34: beq         $v0, $zero, L_800BEA54
    if (ctx->r2 == 0) {
        // 0x800BEA38: nop
    
            goto L_800BEA54;
    }
    // 0x800BEA38: nop

    // 0x800BEA3C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA40: nop

    // 0x800BEA44: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x800BEA48: nop

    // 0x800BEA4C: bne         $t2, $zero, L_800BEA90
    if (ctx->r10 != 0) {
        // 0x800BEA50: nop
    
            goto L_800BEA90;
    }
    // 0x800BEA50: nop

L_800BEA54:
    // 0x800BEA54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEA58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEA5C: jal         0x8001BBDC
    // 0x800BEA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800BEA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800BEA64: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800BEA68: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800BEA6C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA70: jal         0x800BFD94
    // 0x800BEA74: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800BFD94(rdram, ctx);
        goto after_6;
    // 0x800BEA74: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x800BEA78: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA7C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800BEA80: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x800BEA84: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA88: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x800BEA8C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800BEA90:
    // 0x800BEA90: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEA94: nop

    // 0x800BEA98: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800BEA9C: nop

    // 0x800BEAA0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800BEAA4: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800BEAA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEAAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BEAB0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BEAB4: nop

    // 0x800BEAB8: bne         $t1, $at, L_800BEAF8
    if (ctx->r9 != ctx->r1) {
        // 0x800BEABC: nop
    
            goto L_800BEAF8;
    }
    // 0x800BEABC: nop

    // 0x800BEAC0: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x800BEAC4: nop

    // 0x800BEAC8: bgtz        $t2, L_800BEAF8
    if (SIGNED(ctx->r10) > 0) {
        // 0x800BEACC: nop
    
            goto L_800BEAF8;
    }
    // 0x800BEACC: nop

    // 0x800BEAD0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEAD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800BEAD8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800BEADC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEAE0: nop

    // 0x800BEAE4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800BEAE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEAEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEAF0: jal         0x8001BBDC
    // 0x800BEAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800BEAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_800BEAF8:
    // 0x800BEAF8: b           L_800BEB00
    // 0x800BEAFC: nop

        goto L_800BEB00;
    // 0x800BEAFC: nop

L_800BEB00:
    // 0x800BEB00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BEB04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BEB08: jr          $ra
    // 0x800BEB0C: nop

    return;
    // 0x800BEB0C: nop

;}
RECOMP_FUNC void func_800F10B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F10B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F10BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F10C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F10C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F10C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F10CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F10D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F10D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F10D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F10DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F10E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F10E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F10E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F10EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F10F0: nop

    // 0x800F10F4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800F10F8: nop

    // 0x800F10FC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800F1100: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800F1104: beq         $at, $zero, L_800F1188
    if (ctx->r1 == 0) {
        // 0x800F1108: nop
    
            goto L_800F1188;
    }
    // 0x800F1108: nop

    // 0x800F110C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F1110: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1114: addu        $at, $at, $t2
    gpr jr_addend_800F1120 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F1118: lw          $t2, 0x5640($at)
    ctx->r10 = ADD32(ctx->r1, 0X5640);
    // 0x800F111C: nop

    // 0x800F1120: jr          $t2
    // 0x800F1124: nop

    switch (jr_addend_800F1120 >> 2) {
        case 0: goto L_800F1128; break;
        case 1: goto L_800F1138; break;
        case 2: goto L_800F1148; break;
        case 3: goto L_800F1158; break;
        case 4: goto L_800F1168; break;
        case 5: goto L_800F1178; break;
        default: switch_error(__func__, 0x800F1120, 0x80115640);
    }
    // 0x800F1124: nop

L_800F1128:
    // 0x800F1128: jal         0x800EFECC
    // 0x800F112C: nop

    func_800EFECC(rdram, ctx);
        goto after_0;
    // 0x800F112C: nop

    after_0:
    // 0x800F1130: b           L_800F1190
    // 0x800F1134: nop

        goto L_800F1190;
    // 0x800F1134: nop

L_800F1138:
    // 0x800F1138: jal         0x800F0178
    // 0x800F113C: nop

    func_800F0178(rdram, ctx);
        goto after_1;
    // 0x800F113C: nop

    after_1:
    // 0x800F1140: b           L_800F1190
    // 0x800F1144: nop

        goto L_800F1190;
    // 0x800F1144: nop

L_800F1148:
    // 0x800F1148: jal         0x800F0558
    // 0x800F114C: nop

    func_800F0558(rdram, ctx);
        goto after_2;
    // 0x800F114C: nop

    after_2:
    // 0x800F1150: b           L_800F1190
    // 0x800F1154: nop

        goto L_800F1190;
    // 0x800F1154: nop

L_800F1158:
    // 0x800F1158: jal         0x800F0978
    // 0x800F115C: nop

    func_800F0978(rdram, ctx);
        goto after_3;
    // 0x800F115C: nop

    after_3:
    // 0x800F1160: b           L_800F1190
    // 0x800F1164: nop

        goto L_800F1190;
    // 0x800F1164: nop

L_800F1168:
    // 0x800F1168: jal         0x800F0DD4
    // 0x800F116C: nop

    func_800F0DD4(rdram, ctx);
        goto after_4;
    // 0x800F116C: nop

    after_4:
    // 0x800F1170: b           L_800F1190
    // 0x800F1174: nop

        goto L_800F1190;
    // 0x800F1174: nop

L_800F1178:
    // 0x800F1178: jal         0x800F103C
    // 0x800F117C: nop

    func_800F103C(rdram, ctx);
        goto after_5;
    // 0x800F117C: nop

    after_5:
    // 0x800F1180: b           L_800F1190
    // 0x800F1184: nop

        goto L_800F1190;
    // 0x800F1184: nop

L_800F1188:
    // 0x800F1188: b           L_800F1190
    // 0x800F118C: nop

        goto L_800F1190;
    // 0x800F118C: nop

L_800F1190:
    // 0x800F1190: b           L_800F1198
    // 0x800F1194: nop

        goto L_800F1198;
    // 0x800F1194: nop

L_800F1198:
    // 0x800F1198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F119C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F11A0: jr          $ra
    // 0x800F11A4: nop

    return;
    // 0x800F11A4: nop

;}
RECOMP_FUNC void func_80067674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067674: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80067678: addiu       $t6, $t6, 0x76F0
    ctx->r14 = ADD32(ctx->r14, 0X76F0);
    // 0x8006767C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80067680: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80067684: addiu       $t8, $t8, 0x7700
    ctx->r24 = ADD32(ctx->r24, 0X7700);
    // 0x80067688: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006768C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80067690: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80067694: addiu       $t9, $t9, 0x7710
    ctx->r25 = ADD32(ctx->r25, 0X7710);
    // 0x80067698: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8006769C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800676A0: addiu       $t1, $t1, 0x7720
    ctx->r9 = ADD32(ctx->r9, 0X7720);
    // 0x800676A4: addiu       $t0, $zero, 0x7530
    ctx->r8 = ADD32(0, 0X7530);
    // 0x800676A8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800676AC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800676B0: addiu       $t3, $t3, 0x7730
    ctx->r11 = ADD32(ctx->r11, 0X7730);
    // 0x800676B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800676B8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x800676BC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800676C0: lwc1        $f4, 0x4F74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F74);
    // 0x800676C4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800676C8: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x800676CC: swc1        $f4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f4.u32l;
    // 0x800676D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800676D4: addiu       $t6, $t6, 0x7740
    ctx->r14 = ADD32(ctx->r14, 0X7740);
    // 0x800676D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800676DC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800676E0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800676E4: addiu       $t7, $t7, 0x7750
    ctx->r15 = ADD32(ctx->r15, 0X7750);
    // 0x800676E8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800676EC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800676F0: addiu       $t9, $t9, 0x7770
    ctx->r25 = ADD32(ctx->r25, 0X7770);
    // 0x800676F4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800676F8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800676FC: jr          $ra
    // 0x80067700: nop

    return;
    // 0x80067700: nop

    // 0x80067704: jr          $ra
    // 0x80067708: nop

    return;
    // 0x80067708: nop

;}
RECOMP_FUNC void func_800918E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800918E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800918E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800918E8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800918EC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800918F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800918F4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800918F8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800918FC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091900: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091904: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091908: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009190C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091910: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091914: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091918: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009191C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091920: addiu       $a1, $a1, 0x15C4
    ctx->r5 = ADD32(ctx->r5, 0X15C4);
    // 0x80091924: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091928: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009192C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091930: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091934: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091938: jal         0x80027464
    // 0x8009193C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009193C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091940: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091944: b           L_8009194C
    // 0x80091948: nop

        goto L_8009194C;
    // 0x80091948: nop

L_8009194C:
    // 0x8009194C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091954: jr          $ra
    // 0x80091958: nop

    return;
    // 0x80091958: nop

;}
RECOMP_FUNC void Demo_RenderChar(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BF70: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005BF74: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8005BF78: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005BF7C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8005BF80: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8005BF84: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8005BF88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005BF8C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005BF90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005BF94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005BF98: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005BF9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BFA0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BFA4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005BFA8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8005BFAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BFB0: lui         $t8, 0xFD48
    ctx->r24 = S32(0XFD48 << 16);
    // 0x8005BFB4: ori         $t8, $t8, 0x7F
    ctx->r24 = ctx->r24 | 0X7F;
    // 0x8005BFB8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BFBC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005BFC0: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8005BFC4: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x8005BFC8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BFCC: addiu       $t2, $t1, 0x30
    ctx->r10 = ADD32(ctx->r9, 0X30);
    // 0x8005BFD0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005BFD4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005BFD8: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005BFDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BFE0: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005BFE4: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005BFE8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8005BFEC: subu        $t6, $a2, $a2
    ctx->r14 = SUB32(ctx->r6, ctx->r6);
    // 0x8005BFF0: addiu       $t7, $t6, 0x9
    ctx->r15 = ADD32(ctx->r14, 0X9);
    // 0x8005BFF4: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8005BFF8: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8005BFFC: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005C000: andi        $t1, $t0, 0x1FF
    ctx->r9 = ctx->r8 & 0X1FF;
    // 0x8005C004: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8005C008: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x8005C00C: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005C010: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8005C014: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005C018: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005C01C: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8005C020: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005C024: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005C028: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005C02C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C030: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005C034: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005C038: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005C03C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8005C040: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005C044: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005C048: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005C04C: nop

    // 0x8005C050: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005C054: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005C058: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005C05C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C060: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005C064: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005C068: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8005C06C: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8005C070: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005C074: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x8005C078: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005C07C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8005C080: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005C084: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8005C088: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8005C08C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x8005C090: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005C094: addiu       $t2, $a2, 0x8
    ctx->r10 = ADD32(ctx->r6, 0X8);
    // 0x8005C098: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8005C09C: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8005C0A0: addiu       $t8, $a3, 0x10
    ctx->r24 = ADD32(ctx->r7, 0X10);
    // 0x8005C0A4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8005C0A8: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005C0AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005C0B0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005C0B4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005C0B8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8005C0BC: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x8005C0C0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005C0C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005C0C8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005C0CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C0D0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005C0D4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005C0D8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8005C0DC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C0E0: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8005C0E4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005C0E8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C0EC: nop

    // 0x8005C0F0: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005C0F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005C0F8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005C0FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C100: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x8005C104: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005C108: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005C10C: subu        $t9, $a2, $a2
    ctx->r25 = SUB32(ctx->r6, ctx->r6);
    // 0x8005C110: addiu       $t0, $t9, 0x9
    ctx->r8 = ADD32(ctx->r25, 0X9);
    // 0x8005C114: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8005C118: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x8005C11C: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8005C120: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x8005C124: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8005C128: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x8005C12C: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8005C130: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8005C134: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8005C138: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005C13C: nop

    // 0x8005C140: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005C144: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005C148: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005C14C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C150: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005C154: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8005C158: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8005C15C: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005C160: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005C164: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8005C168: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005C16C: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x8005C170: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x8005C174: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8005C178: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005C17C: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8005C180: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x8005C184: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8005C188: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8005C18C: addiu       $t3, $a3, 0x10
    ctx->r11 = ADD32(ctx->r7, 0X10);
    // 0x8005C190: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8005C194: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8005C198: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8005C19C: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8005C1A0: andi        $t4, $t5, 0xFFF
    ctx->r12 = ctx->r13 & 0XFFF;
    // 0x8005C1A4: or          $t8, $t2, $t4
    ctx->r24 = ctx->r10 | ctx->r12;
    // 0x8005C1A8: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x8005C1AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005C1B0: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005C1B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C1B8: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005C1BC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005C1C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8005C1C4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8005C1C8: lui         $t0, 0xF200
    ctx->r8 = S32(0XF200 << 16);
    // 0x8005C1CC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005C1D0: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8005C1D4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x8005C1D8: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x8005C1DC: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x8005C1E0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005C1E4: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005C1E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C1EC: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005C1F0: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005C1F4: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x8005C1F8: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x8005C1FC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8005C200: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8005C204: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
    // 0x8005C208: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8005C20C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8005C210: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005C214: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8005C218: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8005C21C: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8005C220: or          $t2, $t0, $t5
    ctx->r10 = ctx->r8 | ctx->r13;
    // 0x8005C224: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8005C228: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8005C22C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005C230: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x8005C234: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8005C238: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005C23C: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8005C240: or          $t3, $t6, $t1
    ctx->r11 = ctx->r14 | ctx->r9;
    // 0x8005C244: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x8005C248: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005C24C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8005C250: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C254: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8005C258: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005C25C: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8005C260: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8005C264: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x8005C268: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x8005C26C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8005C270: nop

    // 0x8005C274: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005C278: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005C27C: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005C280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C284: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8005C288: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005C28C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8005C290: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005C294: lui         $t1, 0xB300
    ctx->r9 = S32(0XB300 << 16);
    // 0x8005C298: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005C29C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8005C2A0: lui         $t0, 0x400
    ctx->r8 = S32(0X400 << 16);
    // 0x8005C2A4: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x8005C2A8: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x8005C2AC: b           L_8005C2B4
    // 0x8005C2B0: nop

        goto L_8005C2B4;
    // 0x8005C2B0: nop

L_8005C2B4:
    // 0x8005C2B4: jr          $ra
    // 0x8005C2B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005C2B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800BAC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAC94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BAC98: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800BAC9C: nop

    // 0x800BACA0: bne         $t6, $zero, L_800BAD24
    if (ctx->r14 != 0) {
        // 0x800BACA4: nop
    
            goto L_800BAD24;
    }
    // 0x800BACA4: nop

    // 0x800BACA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800BACAC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800BACB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BACB4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BACB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BACBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BACC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BACC4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BACC8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BACCC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800BACD0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800BACD4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800BACD8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800BACDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BACE0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BACE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BACE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800BACEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BACF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800BACF4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800BACF8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BACFC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800BAD00: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800BAD04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BAD08: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800BAD0C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800BAD10: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BAD14: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800BAD18: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BAD1C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BAD20: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800BAD24:
    // 0x800BAD24: jr          $ra
    // 0x800BAD28: nop

    return;
    // 0x800BAD28: nop

    // 0x800BAD2C: jr          $ra
    // 0x800BAD30: nop

    return;
    // 0x800BAD30: nop

;}
RECOMP_FUNC void func_800C5EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C5EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5EC0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C5EC4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C5EC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C5ECC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C5ED0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C5ED4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C5ED8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C5EDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C5EE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C5EE4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C5EE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C5EEC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C5EF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C5EF4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C5EF8: addiu       $a1, $a1, 0x3F4C
    ctx->r5 = ADD32(ctx->r5, 0X3F4C);
    // 0x800C5EFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C5F00: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C5F04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C5F08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C5F0C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C5F10: jal         0x80027464
    // 0x800C5F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C5F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C5F18: b           L_800C5F20
    // 0x800C5F1C: nop

        goto L_800C5F20;
    // 0x800C5F1C: nop

L_800C5F20:
    // 0x800C5F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C5F28: jr          $ra
    // 0x800C5F2C: nop

    return;
    // 0x800C5F2C: nop

;}
RECOMP_FUNC void func_800A0298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0298: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800A029C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A02A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A02A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A02A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A02AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A02B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A02B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A02B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A02BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A02C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A02C4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800A02C8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800A02CC: nop

    // 0x800A02D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A02D4: nop

    // 0x800A02D8: bne         $t1, $zero, L_800A0304
    if (ctx->r9 != 0) {
        // 0x800A02DC: nop
    
            goto L_800A0304;
    }
    // 0x800A02DC: nop

    // 0x800A02E0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800A02E4: nop

    // 0x800A02E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A02EC: nop

    // 0x800A02F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A02F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A02F8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800A02FC: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800A0300: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_800A0304:
    // 0x800A0304: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0308: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800A030C: nop

    // 0x800A0310: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800A0314: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800A0318: nop

    // 0x800A031C: lwc1        $f12, 0x2C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800A0320: nop

    // 0x800A0324: swc1        $f12, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f12.u32l;
    // 0x800A0328: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800A032C: nop

    // 0x800A0330: swc1        $f12, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f12.u32l;
    // 0x800A0334: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800A0338: nop

    // 0x800A033C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800A0340: nop

    // 0x800A0344: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800A0348: sh          $t3, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r11;
    // 0x800A034C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800A0350: nop

    // 0x800A0354: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x800A0358: nop

    // 0x800A035C: bgtz        $t2, L_800A037C
    if (SIGNED(ctx->r10) > 0) {
        // 0x800A0360: nop
    
            goto L_800A037C;
    }
    // 0x800A0360: nop

    // 0x800A0364: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800A0368: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A036C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800A0370: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800A0374: nop

    // 0x800A0378: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800A037C:
    // 0x800A037C: b           L_800A0384
    // 0x800A0380: nop

        goto L_800A0384;
    // 0x800A0380: nop

L_800A0384:
    // 0x800A0384: jr          $ra
    // 0x800A0388: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800A0388: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800711B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800711B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711B8: sb          $zero, 0x7A38($at)
    MEM_B(0X7A38, ctx->r1) = 0;
    // 0x800711BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711C0: sb          $zero, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = 0;
    // 0x800711C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711C8: sb          $zero, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = 0;
    // 0x800711CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711D0: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x800711D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711D8: sh          $zero, 0x7A40($at)
    MEM_H(0X7A40, ctx->r1) = 0;
    // 0x800711DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711E0: sh          $zero, 0x7A48($at)
    MEM_H(0X7A48, ctx->r1) = 0;
    // 0x800711E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711E8: sh          $zero, 0x7A50($at)
    MEM_H(0X7A50, ctx->r1) = 0;
    // 0x800711EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711F0: sw          $zero, 0x7A2C($at)
    MEM_W(0X7A2C, ctx->r1) = 0;
    // 0x800711F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800711F8: sw          $zero, 0x7A34($at)
    MEM_W(0X7A34, ctx->r1) = 0;
    // 0x800711FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071200: sw          $zero, 0x7A3C($at)
    MEM_W(0X7A3C, ctx->r1) = 0;
    // 0x80071204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071208: sw          $zero, 0x7A44($at)
    MEM_W(0X7A44, ctx->r1) = 0;
    // 0x8007120C: jr          $ra
    // 0x80071210: nop

    return;
    // 0x80071210: nop

    // 0x80071214: jr          $ra
    // 0x80071218: nop

    return;
    // 0x80071218: nop

;}
RECOMP_FUNC void func_800C8CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8CC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C8CCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C8CD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C8CD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8CD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8CDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C8CE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8CE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8CE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8CEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8CF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8CF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8CF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8CFC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800C8D00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8D04: nop

    // 0x800C8D08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C8D0C: nop

    // 0x800C8D10: bne         $t1, $zero, L_800C8D70
    if (ctx->r9 != 0) {
        // 0x800C8D14: nop
    
            goto L_800C8D70;
    }
    // 0x800C8D14: nop

    // 0x800C8D18: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8D1C: nop

    // 0x800C8D20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C8D24: nop

    // 0x800C8D28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C8D2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C8D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8D34: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C8D38: addiu       $t5, $t5, -0x7E84
    ctx->r13 = ADD32(ctx->r13, -0X7E84);
    // 0x800C8D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8D40: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C8D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8D48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C8D4C: jal         0x8001C0EC
    // 0x800C8D50: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C8D50: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C8D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8D5C: jal         0x8001BBDC
    // 0x800C8D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C8D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C8D64: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8D68: nop

    // 0x800C8D6C: sh          $zero, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = 0;
L_800C8D70:
    // 0x800C8D70: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8D74: nop

    // 0x800C8D78: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x800C8D7C: nop

    // 0x800C8D80: bne         $t8, $zero, L_800C8D9C
    if (ctx->r24 != 0) {
        // 0x800C8D84: nop
    
            goto L_800C8D9C;
    }
    // 0x800C8D84: nop

    // 0x800C8D88: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C8D8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C8D90: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8D94: b           L_800C8DC4
    // 0x800C8D98: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
        goto L_800C8DC4;
    // 0x800C8D98: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
L_800C8D9C:
    // 0x800C8D9C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8DA0: nop

    // 0x800C8DA4: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800C8DA8: nop

    // 0x800C8DAC: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800C8DB0: sh          $t3, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r11;
    // 0x800C8DB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C8DB8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8DBC: nop

    // 0x800C8DC0: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
L_800C8DC4:
    // 0x800C8DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8DCC: jal         0x80028FA0
    // 0x800C8DD0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800C8DD0: nop

    after_2:
    // 0x800C8DD4: beq         $v0, $zero, L_800C8DF8
    if (ctx->r2 == 0) {
        // 0x800C8DD8: nop
    
            goto L_800C8DF8;
    }
    // 0x800C8DD8: nop

    // 0x800C8DDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8DE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8DE4: jal         0x80029B60
    // 0x800C8DE8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800C8DE8: nop

    after_3:
    // 0x800C8DEC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8DF0: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x800C8DF4: sh          $t2, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r10;
L_800C8DF8:
    // 0x800C8DF8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8DFC: nop

    // 0x800C8E00: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800C8E04: nop

    // 0x800C8E08: bne         $t7, $zero, L_800C8E68
    if (ctx->r15 != 0) {
        // 0x800C8E0C: nop
    
            goto L_800C8E68;
    }
    // 0x800C8E0C: nop

    // 0x800C8E10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8E14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8E18: jal         0x8002A640
    // 0x800C8E1C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_4;
    // 0x800C8E1C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_4:
    // 0x800C8E20: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800C8E24: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C8E28: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8E2C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800C8E30: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800C8E34: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x800C8E38: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800C8E3C: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800C8E40: jal         0x80015538
    // 0x800C8E44: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800C8E44: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x800C8E48: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8E4C: nop

    // 0x800C8E50: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800C8E54: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8E58: nop

    // 0x800C8E5C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800C8E60: b           L_800C8E80
    // 0x800C8E64: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
        goto L_800C8E80;
    // 0x800C8E64: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
L_800C8E68:
    // 0x800C8E68: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8E6C: nop

    // 0x800C8E70: lh          $t2, 0xB0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB0);
    // 0x800C8E74: nop

    // 0x800C8E78: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800C8E7C: sh          $t5, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r13;
L_800C8E80:
    // 0x800C8E80: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C8E84: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8E88: nop

    // 0x800C8E8C: swc1        $f16, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f16.u32l;
    // 0x800C8E90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8E94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8E98: jal         0x80029C40
    // 0x800C8E9C: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800C8E9C: nop

    after_6:
    // 0x800C8EA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C8EA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C8EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8EB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800C8EB4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800C8EB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C8EBC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800C8EC0: jal         0x80029018
    // 0x800C8EC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800C8EC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800C8EC8: beq         $v0, $zero, L_800C8EEC
    if (ctx->r2 == 0) {
        // 0x800C8ECC: nop
    
            goto L_800C8EEC;
    }
    // 0x800C8ECC: nop

    // 0x800C8ED0: jal         0x800297DC
    // 0x800C8ED4: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800C8ED4: nop

    after_8:
    // 0x800C8ED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8EDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8EE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C8EE4: jal         0x80029824
    // 0x800C8EE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800C8EE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800C8EEC:
    // 0x800C8EEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C8EF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C8EF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8EFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800C8F00: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800C8F04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C8F08: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800C8F0C: jal         0x800295C0
    // 0x800C8F10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x800C8F10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x800C8F14: beq         $v0, $zero, L_800C8F2C
    if (ctx->r2 == 0) {
        // 0x800C8F18: nop
    
            goto L_800C8F2C;
    }
    // 0x800C8F18: nop

    // 0x800C8F1C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C8F20: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8F24: b           L_800C8F3C
    // 0x800C8F28: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
        goto L_800C8F3C;
    // 0x800C8F28: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
L_800C8F2C:
    // 0x800C8F2C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800C8F30: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8F34: nop

    // 0x800C8F38: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
L_800C8F3C:
    // 0x800C8F3C: b           L_800C8F44
    // 0x800C8F40: nop

        goto L_800C8F44;
    // 0x800C8F40: nop

L_800C8F44:
    // 0x800C8F44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C8F48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C8F4C: jr          $ra
    // 0x800C8F50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800C8F50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800778A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800778A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800778A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800778A8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800778AC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800778B0: nop

    // 0x800778B4: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x800778B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800778BC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800778C0: nop

    // 0x800778C4: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x800778C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800778CC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800778D0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800778D4: nop

    // 0x800778D8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800778DC: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x800778E0: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800778E4: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800778E8: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x800778EC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800778F0: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800778F4: nop

    // 0x800778F8: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800778FC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80077900: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80077904: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x80077908: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007790C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80077910: nop

    // 0x80077914: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80077918: mul.s       $f18, $f4, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8007791C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80077920: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80077924: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80077928: nop

    // 0x8007792C: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80077930: nop

    // 0x80077934: bc1f        L_80077944
    if (!c1cs) {
        // 0x80077938: nop
    
            goto L_80077944;
    }
    // 0x80077938: nop

    // 0x8007793C: b           L_80077954
    // 0x80077940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80077954;
    // 0x80077940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80077944:
    // 0x80077944: b           L_80077954
    // 0x80077948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077954;
    // 0x80077948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007794C: b           L_80077954
    // 0x80077950: nop

        goto L_80077954;
    // 0x80077950: nop

L_80077954:
    // 0x80077954: jr          $ra
    // 0x80077958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80077958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008AD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AD58: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008AD5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008AD64: nop

    // 0x8008AD68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008AD6C: swc1        $f6, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f6.u32l;
    // 0x8008AD70: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8008AD74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD78: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8008AD7C: nop

    // 0x8008AD80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008AD84: swc1        $f10, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f10.u32l;
    // 0x8008AD88: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x8008AD8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AD90: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8008AD94: nop

    // 0x8008AD98: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008AD9C: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
    // 0x8008ADA0: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x8008ADA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ADA8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008ADAC: nop

    // 0x8008ADB0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008ADB4: swc1        $f6, 0x4F34($at)
    MEM_W(0X4F34, ctx->r1) = ctx->f6.u32l;
    // 0x8008ADB8: lh          $t0, 0x8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X8);
    // 0x8008ADBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ADC0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008ADC4: nop

    // 0x8008ADC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008ADCC: swc1        $f10, 0x4F38($at)
    MEM_W(0X4F38, ctx->r1) = ctx->f10.u32l;
    // 0x8008ADD0: lh          $t1, 0xA($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XA);
    // 0x8008ADD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ADD8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8008ADDC: nop

    // 0x8008ADE0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008ADE4: swc1        $f18, 0x4F3C($at)
    MEM_W(0X4F3C, ctx->r1) = ctx->f18.u32l;
    // 0x8008ADE8: lh          $t2, 0xC($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XC);
    // 0x8008ADEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ADF0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8008ADF4: nop

    // 0x8008ADF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008ADFC: swc1        $f6, 0x4F40($at)
    MEM_W(0X4F40, ctx->r1) = ctx->f6.u32l;
    // 0x8008AE00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008AE04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE08: swc1        $f8, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f8.u32l;
    // 0x8008AE0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008AE10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE14: swc1        $f10, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f10.u32l;
    // 0x8008AE18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008AE1C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE20: swc1        $f16, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f16.u32l;
    // 0x8008AE24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008AE28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE2C: swc1        $f18, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f18.u32l;
    // 0x8008AE30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008AE34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE38: swc1        $f4, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f4.u32l;
    // 0x8008AE3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008AE40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE44: swc1        $f6, 0x4F64($at)
    MEM_W(0X4F64, ctx->r1) = ctx->f6.u32l;
    // 0x8008AE48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008AE4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AE50: swc1        $f8, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f8.u32l;
    // 0x8008AE54: jr          $ra
    // 0x8008AE58: nop

    return;
    // 0x8008AE58: nop

    // 0x8008AE5C: jr          $ra
    // 0x8008AE60: nop

    return;
    // 0x8008AE60: nop

;}
RECOMP_FUNC void Debug_DrawProfiler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E6A0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8005E6A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005E6A8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8005E6AC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8005E6B0: jal         0x8005F124
    // 0x8005E6B4: nop

    func_8005F124(rdram, ctx);
        goto after_0;
    // 0x8005E6B4: nop

    after_0:
    // 0x8005E6B8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005E6BC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8005E6C0: jal         0x8005F96C
    // 0x8005E6C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_1;
    // 0x8005E6C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x8005E6C8: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8005E6CC: lw          $a2, -0x1DBC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1DBC);
    // 0x8005E6D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8005E6D4: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8005E6D8: addiu       $a1, $a1, 0x39B0
    ctx->r5 = ADD32(ctx->r5, 0X39B0);
    // 0x8005E6DC: jal         0x80036BE4
    // 0x8005E6E0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x8005E6E0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_2:
    // 0x8005E6E4: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x8005E6E8: jal         0x8005F9EC
    // 0x8005E6EC: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x8005E6EC: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    after_3:
    // 0x8005E6F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005E6F4: lw          $t6, -0x1DAC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DAC);
    // 0x8005E6F8: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x8005E6FC: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x8005E700: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005E704: lw          $t7, -0x1D9C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1D9C);
    // 0x8005E708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8005E70C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8005E710: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8005E714: addiu       $a1, $a1, 0x39B4
    ctx->r5 = ADD32(ctx->r5, 0X39B4);
    // 0x8005E718: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8005E71C: mflo        $a2
    ctx->r6 = lo;
    // 0x8005E720: nop

    // 0x8005E724: nop

    // 0x8005E728: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x8005E72C: mflo        $a3
    ctx->r7 = lo;
    // 0x8005E730: nop

    // 0x8005E734: nop

    // 0x8005E738: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x8005E73C: mflo        $t9
    ctx->r25 = lo;
    // 0x8005E740: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8005E744: jal         0x80036BE4
    // 0x8005E748: nop

    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x8005E748: nop

    after_4:
    // 0x8005E74C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8005E750: jal         0x8005F9EC
    // 0x8005E754: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    Debug_PrintXY(rdram, ctx);
        goto after_5;
    // 0x8005E754: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    after_5:
    // 0x8005E758: jal         0x8005FA90
    // 0x8005E75C: nop

    stub_8005FA90(rdram, ctx);
        goto after_6;
    // 0x8005E75C: nop

    after_6:
    // 0x8005E760: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005E764: lw          $t0, -0x1EF4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1EF4);
    // 0x8005E768: nop

    // 0x8005E76C: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
    // 0x8005E770: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005E774: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005E778: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E77C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005E780: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005E784: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x8005E788: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8005E78C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005E790: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005E794: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8005E798: nop

    // 0x8005E79C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005E7A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005E7A4: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005E7A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E7AC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005E7B0: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005E7B4: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x8005E7B8: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8005E7BC: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8005E7C0: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8005E7C4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005E7C8: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8005E7CC: lui         $t0, 0x30
    ctx->r8 = S32(0X30 << 16);
    // 0x8005E7D0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005E7D4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005E7D8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005E7DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E7E0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005E7E4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005E7E8: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x8005E7EC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8005E7F0: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8005E7F4: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x8005E7F8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E7FC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8005E800: nop

    // 0x8005E804: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005E808: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005E80C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005E810: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E814: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005E818: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005E81C: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8005E820: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8005E824: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x8005E828: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005E82C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x8005E830: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8005E834: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8005E838: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005E83C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005E840: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E844: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005E848: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005E84C: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x8005E850: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x8005E854: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8005E858: addiu       $t6, $t5, 0xE4
    ctx->r14 = ADD32(ctx->r13, 0XE4);
    // 0x8005E85C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8005E860: addiu       $t1, $t0, 0x7
    ctx->r9 = ADD32(ctx->r8, 0X7);
    // 0x8005E864: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x8005E868: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8005E86C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005E870: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8005E874: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8005E878: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8005E87C: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x8005E880: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E884: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8005E888: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8005E88C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8005E890: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x8005E894: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8005E898: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8005E89C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8005E8A0: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x8005E8A4: sw          $t9, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r25;
    // 0x8005E8A8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005E8AC: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005E8B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E8B4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005E8B8: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005E8BC: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x8005E8C0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8005E8C4: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005E8C8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005E8CC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8005E8D0: nop

    // 0x8005E8D4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005E8D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005E8DC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005E8E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E8E4: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8005E8E8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005E8EC: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x8005E8F0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8005E8F4: lui         $t2, 0xF700
    ctx->r10 = S32(0XF700 << 16);
    // 0x8005E8F8: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x8005E8FC: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8005E900: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x8005E904: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x8005E908: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005E90C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005E910: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8005E914: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E918: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005E91C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005E920: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8005E924: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x8005E928: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x8005E92C: addiu       $t0, $t7, 0xE3
    ctx->r8 = ADD32(ctx->r15, 0XE3);
    // 0x8005E930: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x8005E934: addiu       $t3, $t9, 0x6
    ctx->r11 = ADD32(ctx->r25, 0X6);
    // 0x8005E938: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8005E93C: sll         $t8, $t1, 14
    ctx->r24 = S32(ctx->r9 << 14);
    // 0x8005E940: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005E944: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8005E948: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x8005E94C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8005E950: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8005E954: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005E958: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x8005E95C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x8005E960: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8005E964: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8005E968: andi        $t2, $t4, 0x3FF
    ctx->r10 = ctx->r12 & 0X3FF;
    // 0x8005E96C: andi        $t8, $t1, 0x3FF
    ctx->r24 = ctx->r9 & 0X3FF;
    // 0x8005E970: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8005E974: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x8005E978: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x8005E97C: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8005E980: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005E984: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005E988: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005E98C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E990: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005E994: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005E998: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x8005E99C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8005E9A0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005E9A4: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005E9A8: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8005E9AC: nop

    // 0x8005E9B0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005E9B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005E9B8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005E9BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E9C0: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x8005E9C4: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005E9C8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8005E9CC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8005E9D0: lui         $t5, 0xF700
    ctx->r13 = S32(0XF700 << 16);
    // 0x8005E9D4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005E9D8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8005E9DC: lui         $t7, 0xF801
    ctx->r15 = S32(0XF801 << 16);
    // 0x8005E9E0: ori         $t7, $t7, 0xF801
    ctx->r15 = ctx->r15 | 0XF801;
    // 0x8005E9E4: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8005E9E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005E9EC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005E9F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E9F4: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8005E9F8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005E9FC: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8005EA00: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8005EA04: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x8005EA08: lw          $t2, 0x58($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X58);
    // 0x8005EA0C: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x8005EA10: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x8005EA14: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x8005EA18: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005EA1C: addiu       $t4, $t8, 0x2
    ctx->r12 = ADD32(ctx->r24, 0X2);
    // 0x8005EA20: andi        $t2, $t4, 0x3FF
    ctx->r10 = ctx->r12 & 0X3FF;
    // 0x8005EA24: mflo        $t9
    ctx->r25 = lo;
    // 0x8005EA28: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x8005EA2C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005EA30: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8005EA34: sll         $t0, $t7, 14
    ctx->r8 = S32(ctx->r15 << 14);
    // 0x8005EA38: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8005EA3C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x8005EA40: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8005EA44: or          $t9, $t1, $t3
    ctx->r25 = ctx->r9 | ctx->r11;
    // 0x8005EA48: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005EA4C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8005EA50: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x8005EA54: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8005EA58: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x8005EA5C: andi        $t1, $t2, 0x3FF
    ctx->r9 = ctx->r10 & 0X3FF;
    // 0x8005EA60: andi        $t0, $t7, 0x3FF
    ctx->r8 = ctx->r15 & 0X3FF;
    // 0x8005EA64: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8005EA68: sll         $t8, $t0, 14
    ctx->r24 = S32(ctx->r8 << 14);
    // 0x8005EA6C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8005EA70: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8005EA74: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005EA78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005EA7C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005EA80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EA84: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005EA88: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005EA8C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005EA90: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8005EA94: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8005EA98: sw          $t0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r8;
    // 0x8005EA9C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8005EAA0: nop

    // 0x8005EAA4: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005EAA8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005EAAC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005EAB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EAB4: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8005EAB8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005EABC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x8005EAC0: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8005EAC4: lui         $t3, 0xF700
    ctx->r11 = S32(0XF700 << 16);
    // 0x8005EAC8: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x8005EACC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8005EAD0: lui         $t5, 0x7C1
    ctx->r13 = S32(0X7C1 << 16);
    // 0x8005EAD4: ori         $t5, $t5, 0x7C1
    ctx->r13 = ctx->r13 | 0X7C1;
    // 0x8005EAD8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005EADC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005EAE0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005EAE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EAE8: addiu       $t0, $t7, 0x8
    ctx->r8 = ADD32(ctx->r15, 0X8);
    // 0x8005EAEC: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8005EAF0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8005EAF4: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x8005EAF8: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x8005EAFC: lw          $t1, 0x60($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X60);
    // 0x8005EB00: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005EB04: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x8005EB08: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8005EB0C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005EB10: addiu       $t2, $t0, 0x4
    ctx->r10 = ADD32(ctx->r8, 0X4);
    // 0x8005EB14: andi        $t1, $t2, 0x3FF
    ctx->r9 = ctx->r10 & 0X3FF;
    // 0x8005EB18: mflo        $t8
    ctx->r24 = lo;
    // 0x8005EB1C: addu        $t3, $t4, $t8
    ctx->r11 = ADD32(ctx->r12, ctx->r24);
    // 0x8005EB20: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x8005EB24: andi        $t5, $t9, 0x3FF
    ctx->r13 = ctx->r25 & 0X3FF;
    // 0x8005EB28: sll         $t6, $t5, 14
    ctx->r14 = S32(ctx->r13 << 14);
    // 0x8005EB2C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8005EB30: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8005EB34: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8005EB38: or          $t8, $t7, $t4
    ctx->r24 = ctx->r15 | ctx->r12;
    // 0x8005EB3C: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005EB40: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x8005EB44: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x8005EB48: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8005EB4C: addiu       $t1, $t2, 0x3
    ctx->r9 = ADD32(ctx->r10, 0X3);
    // 0x8005EB50: andi        $t7, $t1, 0x3FF
    ctx->r15 = ctx->r9 & 0X3FF;
    // 0x8005EB54: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x8005EB58: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8005EB5C: sll         $t0, $t6, 14
    ctx->r8 = S32(ctx->r14 << 14);
    // 0x8005EB60: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8005EB64: or          $t8, $t0, $t4
    ctx->r24 = ctx->r8 | ctx->r12;
    // 0x8005EB68: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8005EB6C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005EB70: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005EB74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EB78: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x8005EB7C: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005EB80: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8005EB84: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EB88: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005EB8C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005EB90: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EB94: nop

    // 0x8005EB98: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005EB9C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005EBA0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005EBA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EBA8: addiu       $t0, $t7, 0x8
    ctx->r8 = ADD32(ctx->r15, 0X8);
    // 0x8005EBAC: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8005EBB0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x8005EBB4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8005EBB8: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x8005EBBC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x8005EBC0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8005EBC4: lui         $t3, 0xF83F
    ctx->r11 = S32(0XF83F << 16);
    // 0x8005EBC8: ori         $t3, $t3, 0xF83F
    ctx->r11 = ctx->r11 | 0XF83F;
    // 0x8005EBCC: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x8005EBD0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8005EBD4: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8005EBD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EBDC: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005EBE0: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8005EBE4: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8005EBE8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005EBEC: lw          $t1, -0x1DAC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1DAC);
    // 0x8005EBF0: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x8005EBF4: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x8005EBF8: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x8005EBFC: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x8005EC00: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005EC04: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x8005EC08: andi        $t1, $t6, 0x3FF
    ctx->r9 = ctx->r14 & 0X3FF;
    // 0x8005EC0C: mflo        $t7
    ctx->r15 = lo;
    // 0x8005EC10: addu        $t0, $t2, $t7
    ctx->r8 = ADD32(ctx->r10, ctx->r15);
    // 0x8005EC14: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8005EC18: andi        $t8, $t4, 0x3FF
    ctx->r24 = ctx->r12 & 0X3FF;
    // 0x8005EC1C: sll         $t3, $t8, 14
    ctx->r11 = S32(ctx->r24 << 14);
    // 0x8005EC20: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8005EC24: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8005EC28: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8005EC2C: or          $t7, $t9, $t2
    ctx->r15 = ctx->r25 | ctx->r10;
    // 0x8005EC30: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8005EC34: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005EC38: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8005EC3C: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x8005EC40: addiu       $t1, $t6, 0x5
    ctx->r9 = ADD32(ctx->r14, 0X5);
    // 0x8005EC44: andi        $t9, $t1, 0x3FF
    ctx->r25 = ctx->r9 & 0X3FF;
    // 0x8005EC48: andi        $t3, $t8, 0x3FF
    ctx->r11 = ctx->r24 & 0X3FF;
    // 0x8005EC4C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8005EC50: sll         $t5, $t3, 14
    ctx->r13 = S32(ctx->r11 << 14);
    // 0x8005EC54: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x8005EC58: or          $t7, $t5, $t2
    ctx->r15 = ctx->r13 | ctx->r10;
    // 0x8005EC5C: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8005EC60: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005EC64: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005EC68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EC6C: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005EC70: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005EC74: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x8005EC78: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8005EC7C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005EC80: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8005EC84: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8005EC88: nop

    // 0x8005EC8C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005EC90: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005EC94: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8005EC98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EC9C: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x8005ECA0: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005ECA4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8005ECA8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005ECAC: lui         $t2, 0xF700
    ctx->r10 = S32(0XF700 << 16);
    // 0x8005ECB0: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x8005ECB4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8005ECB8: lui         $t0, 0xFFC1
    ctx->r8 = S32(0XFFC1 << 16);
    // 0x8005ECBC: ori         $t0, $t0, 0xFFC1
    ctx->r8 = ctx->r8 | 0XFFC1;
    // 0x8005ECC0: sw          $t0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r8;
    // 0x8005ECC4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005ECC8: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005ECCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005ECD0: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8005ECD4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005ECD8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8005ECDC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005ECE0: lw          $t1, -0x1DAC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1DAC);
    // 0x8005ECE4: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x8005ECE8: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x8005ECEC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005ECF0: lw          $t2, -0x1D9C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1D9C);
    // 0x8005ECF4: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8005ECF8: mflo        $t9
    ctx->r25 = lo;
    // 0x8005ECFC: addu        $t5, $t6, $t9
    ctx->r13 = ADD32(ctx->r14, ctx->r25);
    // 0x8005ED00: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8005ED04: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x8005ED08: addiu       $t9, $t6, 0x6
    ctx->r25 = ADD32(ctx->r14, 0X6);
    // 0x8005ED0C: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x8005ED10: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005ED14: mflo        $t7
    ctx->r15 = lo;
    // 0x8005ED18: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x8005ED1C: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8005ED20: andi        $t8, $t4, 0x3FF
    ctx->r24 = ctx->r12 & 0X3FF;
    // 0x8005ED24: sll         $t3, $t8, 14
    ctx->r11 = S32(ctx->r24 << 14);
    // 0x8005ED28: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8005ED2C: or          $t1, $t3, $at
    ctx->r9 = ctx->r11 | ctx->r1;
    // 0x8005ED30: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x8005ED34: or          $t7, $t1, $t5
    ctx->r15 = ctx->r9 | ctx->r13;
    // 0x8005ED38: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8005ED3C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005ED40: lw          $t8, -0x1DAC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DAC);
    // 0x8005ED44: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x8005ED48: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x8005ED4C: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005ED50: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x8005ED54: nop

    // 0x8005ED58: addiu       $t7, $t5, 0x5
    ctx->r15 = ADD32(ctx->r13, 0X5);
    // 0x8005ED5C: andi        $t0, $t7, 0x3FF
    ctx->r8 = ctx->r15 & 0X3FF;
    // 0x8005ED60: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8005ED64: mflo        $t3
    ctx->r11 = lo;
    // 0x8005ED68: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x8005ED6C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8005ED70: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x8005ED74: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8005ED78: sll         $t1, $t2, 14
    ctx->r9 = S32(ctx->r10 << 14);
    // 0x8005ED7C: or          $t4, $t1, $t8
    ctx->r12 = ctx->r9 | ctx->r24;
    // 0x8005ED80: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x8005ED84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005ED88: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005ED8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005ED90: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005ED94: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005ED98: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8005ED9C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8005EDA0: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x8005EDA4: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x8005EDA8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8005EDAC: nop

    // 0x8005EDB0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005EDB4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005EDB8: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005EDBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EDC0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005EDC4: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005EDC8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8005EDCC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005EDD0: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x8005EDD4: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8005EDD8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005EDDC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8005EDE0: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x8005EDE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8005EDE8: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
L_8005EDEC:
    // 0x8005EDEC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005EDF0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005EDF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EDF8: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8005EDFC: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005EE00: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8005EE04: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8005EE08: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x8005EE0C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8005EE10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8005EE14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005EE18: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8005EE1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005EE20: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x8005EE24: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x8005EE28: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x8005EE2C: andi        $t3, $t4, 0x3FF
    ctx->r11 = ctx->r12 & 0X3FF;
    // 0x8005EE30: addiu       $t5, $t2, 0x6
    ctx->r13 = ADD32(ctx->r10, 0X6);
    // 0x8005EE34: andi        $t0, $t5, 0x3FF
    ctx->r8 = ctx->r13 & 0X3FF;
    // 0x8005EE38: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x8005EE3C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8005EE40: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EE44: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005EE48: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8005EE4C: or          $t1, $t9, $t7
    ctx->r9 = ctx->r25 | ctx->r15;
    // 0x8005EE50: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x8005EE54: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8005EE58: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005EE5C: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8005EE60: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8005EE64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005EE68: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x8005EE6C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8005EE70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005EE74: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x8005EE78: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8005EE7C: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x8005EE80: andi        $t8, $t1, 0x3FF
    ctx->r24 = ctx->r9 & 0X3FF;
    // 0x8005EE84: andi        $t0, $t5, 0x3FF
    ctx->r8 = ctx->r13 & 0X3FF;
    // 0x8005EE88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EE8C: sll         $t9, $t0, 14
    ctx->r25 = S32(ctx->r8 << 14);
    // 0x8005EE90: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x8005EE94: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x8005EE98: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8005EE9C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8005EEA0: nop

    // 0x8005EEA4: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8005EEA8: sltiu       $at, $t5, 0x3
    ctx->r1 = ctx->r13 < 0X3 ? 1 : 0;
    // 0x8005EEAC: bne         $at, $zero, L_8005EDEC
    if (ctx->r1 != 0) {
        // 0x8005EEB0: sw          $t5, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r13;
            goto L_8005EDEC;
    }
    // 0x8005EEB0: sw          $t5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r13;
    // 0x8005EEB4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005EEB8: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005EEBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EEC0: addiu       $t7, $t0, 0x8
    ctx->r15 = ADD32(ctx->r8, 0X8);
    // 0x8005EEC4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005EEC8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8005EECC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005EED0: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8005EED4: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x8005EED8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005EEDC: nop

    // 0x8005EEE0: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005EEE4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005EEE8: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005EEEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EEF0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005EEF4: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005EEF8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8005EEFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005EF00: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8005EF04: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8005EF08: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005EF0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005EF10: nop

    // 0x8005EF14: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005EF18: b           L_8005EF20
    // 0x8005EF1C: nop

        goto L_8005EF20;
    // 0x8005EF1C: nop

L_8005EF20:
    // 0x8005EF20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EF24: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x8005EF28: jr          $ra
    // 0x8005EF2C: nop

    return;
    // 0x8005EF2C: nop

;}
RECOMP_FUNC void func_800A05EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A05EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A05F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A05F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A05F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A05FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A0600: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A0604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0608: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A060C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0610: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0614: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A0618: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A061C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A0620: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0624: nop

    // 0x800A0628: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A062C: nop

    // 0x800A0630: bne         $t1, $zero, L_800A0674
    if (ctx->r9 != 0) {
        // 0x800A0634: nop
    
            goto L_800A0674;
    }
    // 0x800A0634: nop

    // 0x800A0638: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A063C: nop

    // 0x800A0640: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A0644: nop

    // 0x800A0648: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A064C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A0650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A0654: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A0658: addiu       $t5, $t5, 0x6938
    ctx->r13 = ADD32(ctx->r13, 0X6938);
    // 0x800A065C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0660: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A0664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A0668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A066C: jal         0x8001C0EC
    // 0x800A0670: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A0670: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    after_0:
L_800A0674:
    // 0x800A0674: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0678: jal         0x800A0580
    // 0x800A067C: nop

    func_800A0580(rdram, ctx);
        goto after_1;
    // 0x800A067C: nop

    after_1:
    // 0x800A0680: b           L_800A0688
    // 0x800A0684: nop

        goto L_800A0688;
    // 0x800A0684: nop

L_800A0688:
    // 0x800A0688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A068C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A0690: jr          $ra
    // 0x800A0694: nop

    return;
    // 0x800A0694: nop

;}
RECOMP_FUNC void func_800F2BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2BB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F2BBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F2BC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2BC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2BC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F2BCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2BD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2BD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2BD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2BDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2BE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2BE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2BE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F2BEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F2BF0: nop

    // 0x800F2BF4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F2BF8: nop

    // 0x800F2BFC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800F2C00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C04: nop

    // 0x800F2C08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F2C0C: nop

    // 0x800F2C10: bne         $t3, $zero, L_800F2D54
    if (ctx->r11 != 0) {
        // 0x800F2C14: nop
    
            goto L_800F2D54;
    }
    // 0x800F2C14: nop

    // 0x800F2C18: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C1C: nop

    // 0x800F2C20: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F2C24: nop

    // 0x800F2C28: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F2C2C: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F2C30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C34: nop

    // 0x800F2C38: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F2C3C: nop

    // 0x800F2C40: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F2C44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F2C48: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C4C: nop

    // 0x800F2C50: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x800F2C54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C58: nop

    // 0x800F2C5C: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F2C60: nop

    // 0x800F2C64: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x800F2C68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F2C6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F2C70: nop

    // 0x800F2C74: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800F2C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2C7C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800F2C80: addiu       $t2, $t2, -0x6A88
    ctx->r10 = ADD32(ctx->r10, -0X6A88);
    // 0x800F2C84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2C88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800F2C8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F2C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F2C94: jal         0x8001C0EC
    // 0x800F2C98: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F2C98: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F2C9C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800F2CA0: addiu       $t3, $t3, -0x69AC
    ctx->r11 = ADD32(ctx->r11, -0X69AC);
    // 0x800F2CA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F2CA8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800F2CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F2CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F2CB4: jal         0x8001C0EC
    // 0x800F2CB8: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F2CB8: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F2CBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2CC0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F2CC4: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F2CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2CCC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F2CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F2CD4: jal         0x8001ABF4
    // 0x800F2CD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F2CD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F2CDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F2CE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F2CE4: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F2CE8: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x800F2CEC: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F2CF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F2CF4: jal         0x8001ABF4
    // 0x800F2CF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F2CF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F2CFC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F2D00: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F2D04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F2D08: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F2D0C: nop

    // 0x800F2D10: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800F2D14: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800F2D18: nop

    // 0x800F2D1C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800F2D20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F2D24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F2D28: nop

    // 0x800F2D2C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800F2D30: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800F2D34: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800F2D38: sh          $t8, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r24;
    // 0x800F2D3C: nop

    // 0x800F2D40: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F2D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F2D48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F2D4C: nop

    // 0x800F2D50: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_800F2D54:
    // 0x800F2D54: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F2D58: nop

    // 0x800F2D5C: lh          $t0, 0xBE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBE);
    // 0x800F2D60: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F2D64: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800F2D68: nop

    // 0x800F2D6C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800F2D70: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800F2D74: nop

    // 0x800F2D78: bc1f        L_800F2DD4
    if (!c1cs) {
        // 0x800F2D7C: nop
    
            goto L_800F2DD4;
    }
    // 0x800F2D7C: nop

    // 0x800F2D80: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F2D84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F2D88: nop

    // 0x800F2D8C: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x800F2D90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F2D94: nop

    // 0x800F2D98: lh          $t3, 0xBE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBE);
    // 0x800F2D9C: nop

    // 0x800F2DA0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800F2DA4: nop

    // 0x800F2DA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F2DAC: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x800F2DB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F2DB4: nop

    // 0x800F2DB8: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800F2DBC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F2DC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F2DC4: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800F2DC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F2DCC: b           L_800F2E08
    // 0x800F2DD0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800F2E08;
    // 0x800F2DD0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F2DD4:
    // 0x800F2DD4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800F2DD8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F2DDC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F2DE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F2DE4: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800F2DE8: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800F2DEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F2DF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F2DF4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800F2DF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F2DFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2E00: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800F2E04: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_800F2E08:
    // 0x800F2E08: b           L_800F2E10
    // 0x800F2E0C: nop

        goto L_800F2E10;
    // 0x800F2E0C: nop

L_800F2E10:
    // 0x800F2E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F2E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F2E18: jr          $ra
    // 0x800F2E1C: nop

    return;
    // 0x800F2E1C: nop

;}
RECOMP_FUNC void func_800BFB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFB20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFB24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFB28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BFB2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BFB30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BFB34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BFB38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BFB3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BFB40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BFB44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BFB48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BFB4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BFB50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BFB54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BFB58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BFB5C: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800BFB60: nop

    // 0x800BFB64: bne         $t1, $at, L_800BFD7C
    if (ctx->r9 != ctx->r1) {
        // 0x800BFB68: nop
    
            goto L_800BFD7C;
    }
    // 0x800BFB68: nop

    // 0x800BFB6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BFB70: nop

    // 0x800BFB74: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800BFB78: nop

    // 0x800BFB7C: bne         $t3, $zero, L_800BFC0C
    if (ctx->r11 != 0) {
        // 0x800BFB80: nop
    
            goto L_800BFC0C;
    }
    // 0x800BFB80: nop

    // 0x800BFB84: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BFB88: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800BFB8C: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800BFB90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BFB94: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BFB98: nop

    // 0x800BFB9C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800BFBA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BFBA4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BFBA8: nop

    // 0x800BFBAC: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800BFBB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BFBB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BFBB8: nop

    // 0x800BFBBC: swc1        $f8, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f8.u32l;
    // 0x800BFBC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BFBC4: nop

    // 0x800BFBC8: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800BFBCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BFBD0: nop

    // 0x800BFBD4: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x800BFBD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFBDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFBE0: jal         0x8001BBDC
    // 0x800BFBE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800BFBE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800BFBE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFBEC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800BFBF0: addiu       $t1, $t1, 0x7EF0
    ctx->r9 = ADD32(ctx->r9, 0X7EF0);
    // 0x800BFBF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFBF8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800BFBFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BFC00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BFC04: jal         0x8001C0EC
    // 0x800BFC08: addiu       $a3, $zero, 0x117
    ctx->r7 = ADD32(0, 0X117);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800BFC08: addiu       $a3, $zero, 0x117
    ctx->r7 = ADD32(0, 0X117);
    after_1:
L_800BFC0C:
    // 0x800BFC0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC10: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800BFC14: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800BFC18: nop

    // 0x800BFC1C: bne         $t3, $at, L_800BFC70
    if (ctx->r11 != ctx->r1) {
        // 0x800BFC20: nop
    
            goto L_800BFC70;
    }
    // 0x800BFC20: nop

    // 0x800BFC24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800BFC28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BFC2C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC30: nop

    // 0x800BFC34: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x800BFC38: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC3C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800BFC40: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x800BFC44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFC48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BFC50: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x800BFC54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BFC58: jal         0x80017664
    // 0x800BFC5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_2;
    // 0x800BFC5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800BFC60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFC64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFC68: jal         0x8001BBDC
    // 0x800BFC6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800BFC6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_800BFC70:
    // 0x800BFC70: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC74: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800BFC78: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800BFC7C: nop

    // 0x800BFC80: bne         $t8, $at, L_800BFC94
    if (ctx->r24 != ctx->r1) {
        // 0x800BFC84: nop
    
            goto L_800BFC94;
    }
    // 0x800BFC84: nop

    // 0x800BFC88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC8C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800BFC90: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
L_800BFC94:
    // 0x800BFC94: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BFC98: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800BFC9C: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BFCA0: nop

    // 0x800BFCA4: bne         $t2, $at, L_800BFCB8
    if (ctx->r10 != ctx->r1) {
        // 0x800BFCA8: nop
    
            goto L_800BFCB8;
    }
    // 0x800BFCA8: nop

    // 0x800BFCAC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BFCB0: nop

    // 0x800BFCB4: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
L_800BFCB8:
    // 0x800BFCB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFCBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFCC0: jal         0x80029C40
    // 0x800BFCC4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800BFCC4: nop

    after_4:
    // 0x800BFCC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFCCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFCD0: jal         0x80029D04
    // 0x800BFCD4: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800BFCD4: nop

    after_5:
    // 0x800BFCD8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BFCDC: nop

    // 0x800BFCE0: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800BFCE4: nop

    // 0x800BFCE8: swc1        $f16, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f16.u32l;
    // 0x800BFCEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BFCF0: nop

    // 0x800BFCF4: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800BFCF8: nop

    // 0x800BFCFC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800BFD00: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
    // 0x800BFD04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BFD08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BFD0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFD10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFD14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BFD18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800BFD1C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BFD20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800BFD24: jal         0x80029018
    // 0x800BFD28: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800BFD28: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800BFD2C: beq         $v0, $zero, L_800BFD4C
    if (ctx->r2 == 0) {
        // 0x800BFD30: nop
    
            goto L_800BFD4C;
    }
    // 0x800BFD30: nop

    // 0x800BFD34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFD38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFD3C: jal         0x8002B0E4
    // 0x800BFD40: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800BFD40: nop

    after_7:
    // 0x800BFD44: b           L_800BFD84
    // 0x800BFD48: nop

        goto L_800BFD84;
    // 0x800BFD48: nop

L_800BFD4C:
    // 0x800BFD4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFD50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFD54: jal         0x8001B44C
    // 0x800BFD58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800BFD58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x800BFD5C: beq         $v0, $zero, L_800BFD7C
    if (ctx->r2 == 0) {
        // 0x800BFD60: nop
    
            goto L_800BFD7C;
    }
    // 0x800BFD60: nop

    // 0x800BFD64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFD68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFD6C: jal         0x8002B0E4
    // 0x800BFD70: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800BFD70: nop

    after_9:
    // 0x800BFD74: b           L_800BFD84
    // 0x800BFD78: nop

        goto L_800BFD84;
    // 0x800BFD78: nop

L_800BFD7C:
    // 0x800BFD7C: b           L_800BFD84
    // 0x800BFD80: nop

        goto L_800BFD84;
    // 0x800BFD80: nop

L_800BFD84:
    // 0x800BFD84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFD88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BFD8C: jr          $ra
    // 0x800BFD90: nop

    return;
    // 0x800BFD90: nop

;}
RECOMP_FUNC void func_800E302C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E302C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E3034: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3038: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E303C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3040: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3048: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E304C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3050: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3054: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3058: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E305C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E3060: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3064: nop

    // 0x800E3068: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E306C: nop

    // 0x800E3070: bne         $t1, $zero, L_800E30D4
    if (ctx->r9 != 0) {
        // 0x800E3074: nop
    
            goto L_800E30D4;
    }
    // 0x800E3074: nop

    // 0x800E3078: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E307C: nop

    // 0x800E3080: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E3084: nop

    // 0x800E3088: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E308C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E3090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3098: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x800E309C: jal         0x80029EF8
    // 0x800E30A0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E30A0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x800E30A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E30A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E30AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E30B0: nop

    // 0x800E30B4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800E30B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E30BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E30C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E30C4: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800E30C8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800E30CC: jal         0x800175F0
    // 0x800E30D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800E30D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800E30D4:
    // 0x800E30D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E30D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E30DC: jal         0x80028FA0
    // 0x800E30E0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800E30E0: nop

    after_2:
    // 0x800E30E4: beq         $v0, $zero, L_800E30FC
    if (ctx->r2 == 0) {
        // 0x800E30E8: nop
    
            goto L_800E30FC;
    }
    // 0x800E30E8: nop

    // 0x800E30EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E30F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E30F4: jal         0x8002B114
    // 0x800E30F8: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800E30F8: nop

    after_3:
L_800E30FC:
    // 0x800E30FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3104: jal         0x80029C40
    // 0x800E3108: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800E3108: nop

    after_4:
    // 0x800E310C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E3110: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E3114: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800E3118: nop

    // 0x800E311C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800E3120: nop

    // 0x800E3124: bc1f        L_800E319C
    if (!c1cs) {
        // 0x800E3128: nop
    
            goto L_800E319C;
    }
    // 0x800E3128: nop

    // 0x800E312C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E3130: nop

    // 0x800E3134: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800E3138: nop

    // 0x800E313C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x800E3140: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E3144: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E3148: nop

    // 0x800E314C: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x800E3150: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E3154: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E3158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E315C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800E3164: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E3168: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E316C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800E3170: jal         0x80029018
    // 0x800E3174: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E3174: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800E3178: beq         $v0, $zero, L_800E318C
    if (ctx->r2 == 0) {
        // 0x800E317C: nop
    
            goto L_800E318C;
    }
    // 0x800E317C: nop

    // 0x800E3180: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3184: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E3188: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_800E318C:
    // 0x800E318C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800E3190: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E3194: nop

    // 0x800E3198: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
L_800E319C:
    // 0x800E319C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E31A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E31A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E31A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E31AC: jal         0x8002A0D0
    // 0x800E31B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_6;
    // 0x800E31B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_6:
    // 0x800E31B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E31B8: bne         $v0, $at, L_800E31CC
    if (ctx->r2 != ctx->r1) {
        // 0x800E31BC: nop
    
            goto L_800E31CC;
    }
    // 0x800E31BC: nop

    // 0x800E31C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E31C4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E31C8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
L_800E31CC:
    // 0x800E31CC: b           L_800E31D4
    // 0x800E31D0: nop

        goto L_800E31D4;
    // 0x800E31D0: nop

L_800E31D4:
    // 0x800E31D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E31D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E31DC: jr          $ra
    // 0x800E31E0: nop

    return;
    // 0x800E31E0: nop

;}
RECOMP_FUNC void func_800E34A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E34A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E34A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E34AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E34B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E34B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E34B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E34BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E34C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E34C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E34C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E34CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E34D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E34D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E34D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E34DC: nop

    // 0x800E34E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E34E4: nop

    // 0x800E34E8: bne         $t1, $zero, L_800E3558
    if (ctx->r9 != 0) {
        // 0x800E34EC: nop
    
            goto L_800E3558;
    }
    // 0x800E34EC: nop

    // 0x800E34F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E34F4: nop

    // 0x800E34F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E34FC: nop

    // 0x800E3500: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E3504: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E3508: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E350C: nop

    // 0x800E3510: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800E3514: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800E3518: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E351C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3520: nop

    // 0x800E3524: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E3528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E352C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3530: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E3534: jal         0x80029EF8
    // 0x800E3538: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E3538: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x800E353C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3548: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800E354C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800E3550: jal         0x800175F0
    // 0x800E3554: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800E3554: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800E3558:
    // 0x800E3558: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E355C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3560: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800E3564: nop

    // 0x800E3568: bne         $t8, $at, L_800E36EC
    if (ctx->r24 != ctx->r1) {
        // 0x800E356C: nop
    
            goto L_800E36EC;
    }
    // 0x800E356C: nop

    // 0x800E3570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3578: jal         0x80028FA0
    // 0x800E357C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800E357C: nop

    after_2:
    // 0x800E3580: beq         $v0, $zero, L_800E3598
    if (ctx->r2 == 0) {
        // 0x800E3584: nop
    
            goto L_800E3598;
    }
    // 0x800E3584: nop

    // 0x800E3588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E358C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3590: jal         0x8002B114
    // 0x800E3594: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800E3594: nop

    after_3:
L_800E3598:
    // 0x800E3598: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E359C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E35A0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800E35A4: nop

    // 0x800E35A8: beq         $t0, $at, L_800E36EC
    if (ctx->r8 == ctx->r1) {
        // 0x800E35AC: nop
    
            goto L_800E36EC;
    }
    // 0x800E35AC: nop

    // 0x800E35B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E35B4: nop

    // 0x800E35B8: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x800E35BC: nop

    // 0x800E35C0: slti        $at, $t3, 0x3C
    ctx->r1 = SIGNED(ctx->r11) < 0X3C ? 1 : 0;
    // 0x800E35C4: beq         $at, $zero, L_800E36E0
    if (ctx->r1 == 0) {
        // 0x800E35C8: nop
    
            goto L_800E36E0;
    }
    // 0x800E35C8: nop

    // 0x800E35CC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E35D0: nop

    // 0x800E35D4: lh          $t2, 0xB0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB0);
    // 0x800E35D8: nop

    // 0x800E35DC: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x800E35E0: sh          $t5, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r13;
    // 0x800E35E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E35E8: nop

    // 0x800E35EC: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800E35F0: nop

    // 0x800E35F4: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x800E35F8: bne         $at, $zero, L_800E3638
    if (ctx->r1 != 0) {
        // 0x800E35FC: nop
    
            goto L_800E3638;
    }
    // 0x800E35FC: nop

    // 0x800E3600: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E3604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E360C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E3610: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E3614: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E3618: jal         0x80029F58
    // 0x800E361C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800E361C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800E3620: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3624: bne         $v0, $at, L_800E3638
    if (ctx->r2 != ctx->r1) {
        // 0x800E3628: nop
    
            goto L_800E3638;
    }
    // 0x800E3628: nop

    // 0x800E362C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3630: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E3634: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800E3638:
    // 0x800E3638: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E363C: nop

    // 0x800E3640: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800E3644: nop

    // 0x800E3648: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800E364C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E3650: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3654: nop

    // 0x800E3658: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
    // 0x800E365C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3664: jal         0x80029C40
    // 0x800E3668: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E3668: nop

    after_5:
    // 0x800E366C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E3670: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E3674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E367C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800E3680: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E3684: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E3688: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E368C: jal         0x80029018
    // 0x800E3690: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E3690: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E3694: beq         $v0, $zero, L_800E36A8
    if (ctx->r2 == 0) {
        // 0x800E3698: nop
    
            goto L_800E36A8;
    }
    // 0x800E3698: nop

    // 0x800E369C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E36A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E36A4: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
L_800E36A8:
    // 0x800E36A8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800E36AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E36B0: nop

    // 0x800E36B4: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x800E36B8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E36BC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E36C0: lwc1        $f6, 0x44($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800E36C4: lwc1        $f11, 0x5468($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5468);
    // 0x800E36C8: lwc1        $f10, 0x546C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X546C);
    // 0x800E36CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800E36D0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800E36D4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800E36D8: b           L_800E36EC
    // 0x800E36DC: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
        goto L_800E36EC;
    // 0x800E36DC: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_800E36E0:
    // 0x800E36E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E36E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E36E8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800E36EC:
    // 0x800E36EC: b           L_800E36F4
    // 0x800E36F0: nop

        goto L_800E36F4;
    // 0x800E36F0: nop

L_800E36F4:
    // 0x800E36F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E36F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E36FC: jr          $ra
    // 0x800E3700: nop

    return;
    // 0x800E3700: nop

;}
RECOMP_FUNC void func_800604A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800604A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800604AC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800604B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800604B4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800604B8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800604BC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800604C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800604C4: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x800604C8: nop

    // 0x800604CC: bne         $t7, $zero, L_800604DC
    if (ctx->r15 != 0) {
        // 0x800604D0: nop
    
            goto L_800604DC;
    }
    // 0x800604D0: nop

    // 0x800604D4: jr          $ra
    // 0x800604D8: nop

    return;
    // 0x800604D8: nop

L_800604DC:
    // 0x800604DC: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800604E0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800604E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800604E8: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800604EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800604F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800604F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800604F8: sh          $zero, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = 0;
    // 0x800604FC: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80060500: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80060504: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80060508: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8006050C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80060510: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80060514: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060518: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8006051C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80060520: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80060524: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80060528: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8006052C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80060530: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80060534: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80060538: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006053C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80060540: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80060544: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80060548: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8006054C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060550: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80060554: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80060558: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8006055C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060560: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80060564: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80060568: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x8006056C: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80060570: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80060574: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80060578: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006057C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80060580: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060584: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80060588: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x8006058C: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80060590: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80060594: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060598: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x8006059C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800605A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800605A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800605A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800605AC: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x800605B0: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x800605B4: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x800605B8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800605BC: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x800605C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800605C4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800605C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800605CC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800605D0: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x800605D4: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x800605D8: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x800605DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800605E0: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x800605E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800605E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800605EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800605F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800605F4: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x800605F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800605FC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80060600: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80060604: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80060608: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8006060C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060610: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80060614: sh          $zero, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = 0;
    // 0x80060618: jr          $ra
    // 0x8006061C: nop

    return;
    // 0x8006061C: nop

    // 0x80060620: jr          $ra
    // 0x80060624: nop

    return;
    // 0x80060624: nop

;}
RECOMP_FUNC void func_80072854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072854: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80072858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007285C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80072860: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80072864: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80072868: nop

    // 0x8007286C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80072870: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80072874: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80072878: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8007287C: nop

    // 0x80072880: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80072884: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80072888: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007288C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80072890: nop

    // 0x80072894: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80072898: jal         0x80065ACC
    // 0x8007289C: nop

    func_80065ACC(rdram, ctx);
        goto after_0;
    // 0x8007289C: nop

    after_0:
    // 0x800728A0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800728A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800728A8: nop

    // 0x800728AC: lh          $t0, 0x4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X4);
    // 0x800728B0: nop

    // 0x800728B4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800728B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800728BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800728C0: lh          $t2, 0x1C($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X1C);
    // 0x800728C4: lh          $t3, 0x22($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X22);
    // 0x800728C8: nop

    // 0x800728CC: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800728D0: mflo        $t4
    ctx->r12 = lo;
    // 0x800728D4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x800728D8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800728DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800728E0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800728E4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800728E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800728EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800728F0: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800728F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800728F8: swc1        $f10, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f10.u32l;
    // 0x800728FC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80072900: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80072904: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80072908: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007290C: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80072910: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072914: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80072918: swc1        $f4, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f4.u32l;
    // 0x8007291C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80072920: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80072924: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80072928: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007292C: swc1        $f6, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f6.u32l;
    // 0x80072930: b           L_80072938
    // 0x80072934: nop

        goto L_80072938;
    // 0x80072934: nop

L_80072938:
    // 0x80072938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007293C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80072940: jr          $ra
    // 0x80072944: nop

    return;
    // 0x80072944: nop

;}
RECOMP_FUNC void func_80082BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80082BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80082BC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80082BC8: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x80082BCC: nop

    // 0x80082BD0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80082BD4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80082BD8: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x80082BDC: nop

    // 0x80082BE0: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x80082BE4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80082BE8: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x80082BEC: nop

    // 0x80082BF0: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x80082BF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082BF8: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x80082BFC: nop

    // 0x80082C00: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80082C04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C08: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80082C0C: nop

    // 0x80082C10: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80082C14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C18: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80082C1C: nop

    // 0x80082C20: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80082C24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C28: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80082C2C: nop

    // 0x80082C30: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80082C34: addiu       $t9, $zero, 0xBB
    ctx->r25 = ADD32(0, 0XBB);
    // 0x80082C38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C3C: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x80082C40: jal         0x80081C50
    // 0x80082C44: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x80082C44: nop

    after_0:
    // 0x80082C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C4C: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80082C50: jal         0x800824A8
    // 0x80082C54: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082C54: nop

    after_1:
    // 0x80082C58: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x80082C5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C60: sh          $t0, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r8;
    // 0x80082C64: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80082C68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C6C: sh          $t1, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r9;
    // 0x80082C70: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80082C74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C78: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x80082C7C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082C80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C84: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082C88: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80082C8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C90: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x80082C94: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082C98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082C9C: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082CA0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082CA8: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082CAC: b           L_80082CB4
    // 0x80082CB0: nop

        goto L_80082CB4;
    // 0x80082CB0: nop

L_80082CB4:
    // 0x80082CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082CB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80082CBC: jr          $ra
    // 0x80082CC0: nop

    return;
    // 0x80082CC0: nop

;}
RECOMP_FUNC void func_8009C044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009C048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C04C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009C050: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009C054: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x8009C058: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8009C05C: nop

    // 0x8009C060: bne         $t7, $at, L_8009C078
    if (ctx->r15 != ctx->r1) {
        // 0x8009C064: nop
    
            goto L_8009C078;
    }
    // 0x8009C064: nop

    // 0x8009C068: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8009C06C: addiu       $t8, $t8, 0x3550
    ctx->r24 = ADD32(ctx->r24, 0X3550);
    // 0x8009C070: b           L_8009C0DC
    // 0x8009C074: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_8009C0DC;
    // 0x8009C074: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8009C078:
    // 0x8009C078: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8009C07C: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x8009C080: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x8009C084: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8009C088: nop

    // 0x8009C08C: bne         $t0, $at, L_8009C0A4
    if (ctx->r8 != ctx->r1) {
        // 0x8009C090: nop
    
            goto L_8009C0A4;
    }
    // 0x8009C090: nop

    // 0x8009C094: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009C098: addiu       $t1, $t1, 0x355C
    ctx->r9 = ADD32(ctx->r9, 0X355C);
    // 0x8009C09C: b           L_8009C0DC
    // 0x8009C0A0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_8009C0DC;
    // 0x8009C0A0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8009C0A4:
    // 0x8009C0A4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009C0A8: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8009C0AC: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x8009C0B0: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8009C0B4: nop

    // 0x8009C0B8: bne         $t3, $at, L_8009C0D0
    if (ctx->r11 != ctx->r1) {
        // 0x8009C0BC: nop
    
            goto L_8009C0D0;
    }
    // 0x8009C0BC: nop

    // 0x8009C0C0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8009C0C4: addiu       $t4, $t4, 0x3568
    ctx->r12 = ADD32(ctx->r12, 0X3568);
    // 0x8009C0C8: b           L_8009C0DC
    // 0x8009C0CC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
        goto L_8009C0DC;
    // 0x8009C0CC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_8009C0D0:
    // 0x8009C0D0: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009C0D4: addiu       $t5, $t5, 0x3574
    ctx->r13 = ADD32(ctx->r13, 0X3574);
    // 0x8009C0D8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8009C0DC:
    // 0x8009C0DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009C0E0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009C0E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8009C0E8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009C0EC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009C0F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009C0F4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009C0F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009C0FC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009C100: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009C104: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009C108: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009C10C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009C110: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009C114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009C118: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009C11C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009C120: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009C124: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009C128: jal         0x80027464
    // 0x8009C12C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009C12C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009C130: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8009C134: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8009C138: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009C13C: beq         $t1, $at, L_8009C174
    if (ctx->r9 == ctx->r1) {
        // 0x8009C140: nop
    
            goto L_8009C174;
    }
    // 0x8009C140: nop

    // 0x8009C144: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8009C148: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009C14C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009C150: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009C154: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8009C158: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009C15C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009C160: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8009C164: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009C168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C16C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009C170: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_8009C174:
    // 0x8009C174: b           L_8009C17C
    // 0x8009C178: nop

        goto L_8009C17C;
    // 0x8009C178: nop

L_8009C17C:
    // 0x8009C17C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C180: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009C184: jr          $ra
    // 0x8009C188: nop

    return;
    // 0x8009C188: nop

;}
RECOMP_FUNC void Skybox_LoadFromID(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E090: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E094: lbu         $t6, 0x792E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X792E);
    // 0x8006E098: nop

    // 0x8006E09C: beq         $t6, $zero, L_8006E114
    if (ctx->r14 == 0) {
        // 0x8006E0A0: nop
    
            goto L_8006E114;
    }
    // 0x8006E0A0: nop

    // 0x8006E0A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006E0A8: lbu         $t7, 0x792E($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X792E);
    // 0x8006E0AC: nop

    // 0x8006E0B0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006E0B4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8006E0B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8006E0BC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8006E0C0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8006E0C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006E0C8: lw          $t1, 0x51E0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51E0);
    // 0x8006E0CC: nop

    // 0x8006E0D0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8006E0D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8006E0D8: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x8006E0DC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8006E0E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006E0E4: lw          $t4, 0x51E4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51E4);
    // 0x8006E0E8: nop

    // 0x8006E0EC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8006E0F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006E0F4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E0F8: jal         0x8001EA68
    // 0x8006E0FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x8006E0FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8006E100: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006E104: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x8006E108: lw          $a0, 0xC0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC0);
    // 0x8006E10C: jal         0x8006DE90
    // 0x8006E110: nop

    Skybox_Format(rdram, ctx);
        goto after_1;
    // 0x8006E110: nop

    after_1:
L_8006E114:
    // 0x8006E114: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006E118: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E11C: swc1        $f4, 0x7A14($at)
    MEM_W(0X7A14, ctx->r1) = ctx->f4.u32l;
    // 0x8006E120: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8006E124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E128: sh          $t6, 0x7A1A($at)
    MEM_H(0X7A1A, ctx->r1) = ctx->r14;
    // 0x8006E12C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8006E130: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E134: sh          $t7, 0x7A1E($at)
    MEM_H(0X7A1E, ctx->r1) = ctx->r15;
    // 0x8006E138: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006E13C: lwc1        $f6, 0x55B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55B8);
    // 0x8006E140: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E144: swc1        $f6, 0x7A24($at)
    MEM_W(0X7A24, ctx->r1) = ctx->f6.u32l;
    // 0x8006E148: b           L_8006E150
    // 0x8006E14C: nop

        goto L_8006E150;
    // 0x8006E14C: nop

L_8006E150:
    // 0x8006E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006E158: jr          $ra
    // 0x8006E15C: nop

    return;
    // 0x8006E15C: nop

;}
RECOMP_FUNC void func_800BC134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC134: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800BC138: b           L_800BC140
    // 0x800BC13C: nop

        goto L_800BC140;
    // 0x800BC13C: nop

L_800BC140:
    // 0x800BC140: jr          $ra
    // 0x800BC144: nop

    return;
    // 0x800BC144: nop

;}
RECOMP_FUNC void func_800C5BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5BE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C5BE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C5BEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C5BF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C5BF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C5BF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C5BFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5C00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5C04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5C08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5C0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C5C10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C5C14: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C5C18: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C5C1C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C5C20: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C5C24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C5C28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C5C2C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C5C30: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C5C34: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C5C38: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C5C3C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C5C40: nop

    // 0x800C5C44: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800C5C48: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C5C4C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C5C50: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C5C54: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C5C58: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C5C5C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C5C60: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C5C64: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C5C68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C5C6C: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C5C70: nop

    // 0x800C5C74: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800C5C78: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5C7C: nop

    // 0x800C5C80: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C5C84: nop

    // 0x800C5C88: bne         $t7, $zero, L_800C5D64
    if (ctx->r15 != 0) {
        // 0x800C5C8C: nop
    
            goto L_800C5D64;
    }
    // 0x800C5C8C: nop

    // 0x800C5C90: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5C94: nop

    // 0x800C5C98: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C5C9C: nop

    // 0x800C5CA0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C5CA4: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C5CA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5CAC: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x800C5CB0: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800C5CB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5CB8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C5CBC: addiu       $t3, $t3, -0x7EF8
    ctx->r11 = ADD32(ctx->r11, -0X7EF8);
    // 0x800C5CC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5CC4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C5CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C5CD0: jal         0x8001C0EC
    // 0x800C5CD4: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C5CD4: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C5CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5CE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C5CE4: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5CEC: jal         0x8001ABF4
    // 0x800C5CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C5CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C5CF4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800C5CF8: addiu       $t4, $t4, -0x7EF8
    ctx->r12 = ADD32(ctx->r12, -0X7EF8);
    // 0x800C5CFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C5D00: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800C5D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C5D0C: jal         0x8001C0EC
    // 0x800C5D10: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C5D10: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
    // 0x800C5D14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800C5D18: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C5D1C: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5D24: jal         0x8001ABF4
    // 0x800C5D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C5D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C5D2C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C5D30: addiu       $t5, $t5, -0x7EF8
    ctx->r13 = ADD32(ctx->r13, -0X7EF8);
    // 0x800C5D34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C5D38: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C5D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C5D44: jal         0x8001C0EC
    // 0x800C5D48: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C5D48: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_4:
    // 0x800C5D4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800C5D50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C5D54: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5D5C: jal         0x8001ABF4
    // 0x800C5D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C5D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800C5D64:
    // 0x800C5D64: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5D68: nop

    // 0x800C5D6C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800C5D70: nop

    // 0x800C5D74: bne         $t7, $zero, L_800C5D98
    if (ctx->r15 != 0) {
        // 0x800C5D78: nop
    
            goto L_800C5D98;
    }
    // 0x800C5D78: nop

    // 0x800C5D7C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5D80: nop

    // 0x800C5D84: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800C5D88: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5D8C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C5D90: b           L_800C5DB0
    // 0x800C5D94: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
        goto L_800C5DB0;
    // 0x800C5D94: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
L_800C5D98:
    // 0x800C5D98: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5D9C: nop

    // 0x800C5DA0: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800C5DA4: nop

    // 0x800C5DA8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800C5DAC: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
L_800C5DB0:
    // 0x800C5DB0: b           L_800C5DB8
    // 0x800C5DB4: nop

        goto L_800C5DB8;
    // 0x800C5DB4: nop

L_800C5DB8:
    // 0x800C5DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C5DBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C5DC0: jr          $ra
    // 0x800C5DC4: nop

    return;
    // 0x800C5DC4: nop

;}
RECOMP_FUNC void func_800D20E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D20E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D20E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D20EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D20F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D20F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D20F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D20FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2100: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2108: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D210C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D2110: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2114: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D2118: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D211C: nop

    // 0x800D2120: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D2124: nop

    // 0x800D2128: bne         $t1, $zero, L_800D21C0
    if (ctx->r9 != 0) {
        // 0x800D212C: nop
    
            goto L_800D21C0;
    }
    // 0x800D212C: nop

    // 0x800D2130: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D2134: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D2138: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D213C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2140: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D2144: addiu       $t4, $t4, -0x7AD0
    ctx->r12 = ADD32(ctx->r12, -0X7AD0);
    // 0x800D2148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D214C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800D2150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2154: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D2158: jal         0x8001C0EC
    // 0x800D215C: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D215C: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    after_0:
    // 0x800D2160: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2164: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2168: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D216C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2170: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x800D2174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2178: jal         0x8001ABF4
    // 0x800D217C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D217C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800D2180: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2184: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2188: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D218C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2190: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x800D2194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D2198: jal         0x8001ABF4
    // 0x800D219C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800D219C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800D21A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D21A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D21A8: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D21AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D21B0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x800D21B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D21B8: jal         0x8001ABF4
    // 0x800D21BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800D21BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800D21C0:
    // 0x800D21C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D21C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D21C8: jal         0x8002A1FC
    // 0x800D21CC: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800D21CC: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_4:
    // 0x800D21D0: beq         $v0, $zero, L_800D21F0
    if (ctx->r2 == 0) {
        // 0x800D21D4: nop
    
            goto L_800D21F0;
    }
    // 0x800D21D4: nop

    // 0x800D21D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D21DC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800D21E0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800D21E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D21E8: nop

    // 0x800D21EC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800D21F0:
    // 0x800D21F0: b           L_800D21F8
    // 0x800D21F4: nop

        goto L_800D21F8;
    // 0x800D21F4: nop

L_800D21F8:
    // 0x800D21F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D21FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D2200: jr          $ra
    // 0x800D2204: nop

    return;
    // 0x800D2204: nop

;}
RECOMP_FUNC void func_800A8858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8858: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A885C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A8860: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A8864: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8868: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A886C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8870: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A8874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A887C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8880: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8884: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A8888: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A888C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A8890: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8894: nop

    // 0x800A8898: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A889C: nop

    // 0x800A88A0: bne         $t1, $zero, L_800A8900
    if (ctx->r9 != 0) {
        // 0x800A88A4: nop
    
            goto L_800A8900;
    }
    // 0x800A88A4: nop

    // 0x800A88A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A88B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A88B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800A88B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A88BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88C0: nop

    // 0x800A88C4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A88C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A88CC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88D0: nop

    // 0x800A88D4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A88D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A88DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88E0: nop

    // 0x800A88E4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800A88E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A88F0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800A88F4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A88F8: nop

    // 0x800A88FC: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_800A8900:
    // 0x800A8900: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8904: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8908: jal         0x80028FA0
    // 0x800A890C: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800A890C: nop

    after_0:
    // 0x800A8910: beq         $v0, $zero, L_800A8930
    if (ctx->r2 == 0) {
        // 0x800A8914: nop
    
            goto L_800A8930;
    }
    // 0x800A8914: nop

    // 0x800A8918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A891C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8920: jal         0x80029B60
    // 0x800A8924: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800A8924: nop

    after_1:
    // 0x800A8928: b           L_800A899C
    // 0x800A892C: nop

        goto L_800A899C;
    // 0x800A892C: nop

L_800A8930:
    // 0x800A8930: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8934: nop

    // 0x800A8938: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A893C: nop

    // 0x800A8940: andi        $t2, $t1, 0x1F
    ctx->r10 = ctx->r9 & 0X1F;
    // 0x800A8944: bne         $t2, $zero, L_800A899C
    if (ctx->r10 != 0) {
        // 0x800A8948: nop
    
            goto L_800A899C;
    }
    // 0x800A8948: nop

    // 0x800A894C: jal         0x80014E80
    // 0x800A8950: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800A8950: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_2:
    // 0x800A8954: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8958: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A895C: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800A8960: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A8964: jal         0x80015538
    // 0x800A8968: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A8968: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x800A896C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8970: nop

    // 0x800A8974: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800A8978: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A897C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8980: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A8984: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800A8988: jal         0x80015538
    // 0x800A898C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800A898C: nop

    after_4:
    // 0x800A8990: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8994: nop

    // 0x800A8998: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
L_800A899C:
    // 0x800A899C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A89A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A89A4: jal         0x80029C40
    // 0x800A89A8: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800A89A8: nop

    after_5:
    // 0x800A89AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A89B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A89B4: jal         0x80029D04
    // 0x800A89B8: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800A89B8: nop

    after_6:
    // 0x800A89BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A89C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A89C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A89C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A89CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A89D0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800A89D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A89D8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800A89DC: jal         0x80029018
    // 0x800A89E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800A89E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x800A89E4: beq         $v0, $zero, L_800A8A08
    if (ctx->r2 == 0) {
        // 0x800A89E8: nop
    
            goto L_800A8A08;
    }
    // 0x800A89E8: nop

    // 0x800A89EC: jal         0x800297DC
    // 0x800A89F0: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800A89F0: nop

    after_8:
    // 0x800A89F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A89F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A89FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A8A00: jal         0x80029824
    // 0x800A8A04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800A8A04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800A8A08:
    // 0x800A8A08: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8A0C: jal         0x800C00F4
    // 0x800A8A10: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_800C00F4(rdram, ctx);
        goto after_10;
    // 0x800A8A10: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_10:
    // 0x800A8A14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8A18: nop

    // 0x800A8A1C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A8A20: nop

    // 0x800A8A24: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800A8A28: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8A2C: nop

    // 0x800A8A30: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A8A34: nop

    // 0x800A8A38: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A8A3C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800A8A40: b           L_800A8A48
    // 0x800A8A44: nop

        goto L_800A8A48;
    // 0x800A8A44: nop

L_800A8A48:
    // 0x800A8A48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A8A4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A8A50: jr          $ra
    // 0x800A8A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A8A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F37BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F37BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F37C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F37C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F37C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F37CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F37D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F37D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F37D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F37DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F37E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F37E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F37E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F37EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F37F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F37F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F37F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F37FC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800F3800: nop

    // 0x800F3804: beq         $s0, $at, L_800F382C
    if (ctx->r16 == ctx->r1) {
        // 0x800F3808: nop
    
            goto L_800F382C;
    }
    // 0x800F3808: nop

    // 0x800F380C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F3810: beq         $s0, $at, L_800F383C
    if (ctx->r16 == ctx->r1) {
        // 0x800F3814: nop
    
            goto L_800F383C;
    }
    // 0x800F3814: nop

    // 0x800F3818: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F381C: beq         $s0, $at, L_800F384C
    if (ctx->r16 == ctx->r1) {
        // 0x800F3820: nop
    
            goto L_800F384C;
    }
    // 0x800F3820: nop

    // 0x800F3824: b           L_800F385C
    // 0x800F3828: nop

        goto L_800F385C;
    // 0x800F3828: nop

L_800F382C:
    // 0x800F382C: jal         0x800F32C4
    // 0x800F3830: nop

    func_800F32C4(rdram, ctx);
        goto after_0;
    // 0x800F3830: nop

    after_0:
    // 0x800F3834: b           L_800F3864
    // 0x800F3838: nop

        goto L_800F3864;
    // 0x800F3838: nop

L_800F383C:
    // 0x800F383C: jal         0x800F33AC
    // 0x800F3840: nop

    func_800F33AC(rdram, ctx);
        goto after_1;
    // 0x800F3840: nop

    after_1:
    // 0x800F3844: b           L_800F3864
    // 0x800F3848: nop

        goto L_800F3864;
    // 0x800F3848: nop

L_800F384C:
    // 0x800F384C: jal         0x800F3568
    // 0x800F3850: nop

    func_800F3568(rdram, ctx);
        goto after_2;
    // 0x800F3850: nop

    after_2:
    // 0x800F3854: b           L_800F3864
    // 0x800F3858: nop

        goto L_800F3864;
    // 0x800F3858: nop

L_800F385C:
    // 0x800F385C: b           L_800F3864
    // 0x800F3860: nop

        goto L_800F3864;
    // 0x800F3860: nop

L_800F3864:
    // 0x800F3864: b           L_800F386C
    // 0x800F3868: nop

        goto L_800F386C;
    // 0x800F3868: nop

L_800F386C:
    // 0x800F386C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3870: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F3874: jr          $ra
    // 0x800F3878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F3878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80063104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063104: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063108: sw          $zero, 0x4890($at)
    MEM_W(0X4890, ctx->r1) = 0;
    // 0x8006310C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063110: sw          $zero, 0x4894($at)
    MEM_W(0X4894, ctx->r1) = 0;
    // 0x80063114: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063118: sw          $zero, 0x4898($at)
    MEM_W(0X4898, ctx->r1) = 0;
    // 0x8006311C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80063120: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063124: sw          $t6, 0x489C($at)
    MEM_W(0X489C, ctx->r1) = ctx->r14;
    // 0x80063128: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006312C: sw          $zero, 0x48A0($at)
    MEM_W(0X48A0, ctx->r1) = 0;
    // 0x80063130: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063134: sw          $zero, 0x48A4($at)
    MEM_W(0X48A4, ctx->r1) = 0;
    // 0x80063138: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006313C: sw          $zero, 0x48A8($at)
    MEM_W(0X48A8, ctx->r1) = 0;
    // 0x80063140: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063144: sb          $zero, 0x48AC($at)
    MEM_B(0X48AC, ctx->r1) = 0;
    // 0x80063148: jr          $ra
    // 0x8006314C: nop

    return;
    // 0x8006314C: nop

    // 0x80063150: jr          $ra
    // 0x80063154: nop

    return;
    // 0x80063154: nop

;}
