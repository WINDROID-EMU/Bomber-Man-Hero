#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001B44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B44C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B450: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B454: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B458: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B45C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B460: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B464: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B468: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B46C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B470: lh          $t9, 0x4290($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4290);
    // 0x8001B474: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8001B478: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001B47C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001B480: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001B484: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8001B488: lbu         $v0, 0x52A6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52A6);
    // 0x8001B48C: nop

    // 0x8001B490: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x8001B494: jr          $ra
    // 0x8001B498: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8001B498: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8001B49C: jr          $ra
    // 0x8001B4A0: nop

    return;
    // 0x8001B4A0: nop

    // 0x8001B4A4: jr          $ra
    // 0x8001B4A8: nop

    return;
    // 0x8001B4A8: nop

;}
RECOMP_FUNC void func_8001FDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FDF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001FDF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001FDFC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001FE00: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FE04: jal         0x8001F238
    // 0x8001FE08: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F238(rdram, ctx);
        goto after_0;
    // 0x8001FE08: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x8001FE0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001FE10: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001FE14: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8001FE18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001FE1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001FE20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001FE24: lw          $t8, 0x6E98($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6E98);
    // 0x8001FE28: nop

    // 0x8001FE2C: beq         $t8, $zero, L_8001FE3C
    if (ctx->r24 == 0) {
        // 0x8001FE30: nop
    
            goto L_8001FE3C;
    }
    // 0x8001FE30: nop

    // 0x8001FE34: b           L_8001FF68
    // 0x8001FE38: nop

        goto L_8001FF68;
    // 0x8001FE38: nop

L_8001FE3C:
    // 0x8001FE3C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FE40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FE44: jal         0x8001F174
    // 0x8001FE48: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F174(rdram, ctx);
        goto after_1;
    // 0x8001FE48: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_1:
    // 0x8001FE4C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001FE50: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001FE54: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8001FE58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8001FE5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001FE60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001FE64: lw          $t1, 0x6E9C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6E9C);
    // 0x8001FE68: nop

    // 0x8001FE6C: beq         $t1, $zero, L_8001FE7C
    if (ctx->r9 == 0) {
        // 0x8001FE70: nop
    
            goto L_8001FE7C;
    }
    // 0x8001FE70: nop

    // 0x8001FE74: b           L_8001FF68
    // 0x8001FE78: nop

        goto L_8001FF68;
    // 0x8001FE78: nop

L_8001FE7C:
    // 0x8001FE7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8001FE80:
    // 0x8001FE80: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001FE84: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FE88: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001FE8C: sw          $t3, -0x5A0C($at)
    MEM_W(-0X5A0C, ctx->r1) = ctx->r11;
    // 0x8001FE90: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001FE94: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001FE98: addiu       $t6, $t6, -0x5A10
    ctx->r14 = ADD32(ctx->r14, -0X5A10);
    // 0x8001FE9C: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x8001FEA0: sb          $t5, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r13;
    // 0x8001FEA4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FEA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FEAC: jal         0x8001F4B8
    // 0x8001FEB0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_2;
    // 0x8001FEB0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_2:
    // 0x8001FEB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001FEB8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001FEBC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001FEC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001FEC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001FEC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001FECC: lw          $t9, 0x6EA4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6EA4);
    // 0x8001FED0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8001FED4: bne         $t9, $at, L_8001FEFC
    if (ctx->r25 != ctx->r1) {
        // 0x8001FED8: nop
    
            goto L_8001FEFC;
    }
    // 0x8001FED8: nop

    // 0x8001FEDC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FEE0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FEE4: jal         0x8001F550
    // 0x8001FEE8: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F550(rdram, ctx);
        goto after_3;
    // 0x8001FEE8: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_3:
    // 0x8001FEEC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FEF0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FEF4: jal         0x8001F4B8
    // 0x8001FEF8: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_4;
    // 0x8001FEF8: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_4:
L_8001FEFC:
    // 0x8001FEFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001FF00: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001FF04: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8001FF08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001FF0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001FF10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001FF14: lw          $t2, 0x6EA4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6EA4);
    // 0x8001FF18: nop

    // 0x8001FF1C: bne         $t2, $zero, L_8001FF48
    if (ctx->r10 != 0) {
        // 0x8001FF20: nop
    
            goto L_8001FF48;
    }
    // 0x8001FF20: nop

    // 0x8001FF24: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001FF28: addiu       $t3, $t3, -0x59F0
    ctx->r11 = ADD32(ctx->r11, -0X59F0);
    // 0x8001FF2C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FF30: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FF34: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x8001FF38: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8001FF3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001FF40: jal         0x8001F5F0
    // 0x8001FF44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8001F5F0(rdram, ctx);
        goto after_5;
    // 0x8001FF44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
L_8001FF48:
    // 0x8001FF48: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8001FF4C: nop

    // 0x8001FF50: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001FF54: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x8001FF58: bne         $at, $zero, L_8001FE80
    if (ctx->r1 != 0) {
        // 0x8001FF5C: sw          $t5, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r13;
            goto L_8001FE80;
    }
    // 0x8001FF5C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8001FF60: b           L_8001FF70
    // 0x8001FF64: nop

        goto L_8001FF70;
    // 0x8001FF64: nop

L_8001FF68:
    // 0x8001FF68: b           L_8001FF70
    // 0x8001FF6C: nop

        goto L_8001FF70;
    // 0x8001FF6C: nop

L_8001FF70:
    // 0x8001FF70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001FF74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001FF78: jr          $ra
    // 0x8001FF7C: nop

    return;
    // 0x8001FF7C: nop

;}
RECOMP_FUNC void free_game(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800309D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800309D4: beq         $a0, $zero, L_80030A48
    if (ctx->r4 == 0) {
        // 0x800309D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80030A48;
    }
    // 0x800309D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800309DC: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x800309E0: lw          $v0, -0x58A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X58A0);
    // 0x800309E4: nop

    // 0x800309E8: beq         $v0, $zero, L_80030A1C
    if (ctx->r2 == 0) {
        // 0x800309EC: nop
    
            goto L_80030A1C;
    }
    // 0x800309EC: nop

L_800309F0:
    // 0x800309F0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800309F4: nop

    // 0x800309F8: bne         $a0, $t6, L_80030A0C
    if (ctx->r4 != ctx->r14) {
        // 0x800309FC: nop
    
            goto L_80030A0C;
    }
    // 0x800309FC: nop

    // 0x80030A00: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80030A04: b           L_80030A1C
    // 0x80030A08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
        goto L_80030A1C;
    // 0x80030A08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_80030A0C:
    // 0x80030A0C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030A10: nop

    // 0x80030A14: bne         $v0, $zero, L_800309F0
    if (ctx->r2 != 0) {
        // 0x80030A18: nop
    
            goto L_800309F0;
    }
    // 0x80030A18: nop

L_80030A1C:
    // 0x80030A1C: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80030A20: lw          $v0, 0x7F60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F60);
    // 0x80030A24: nop

    // 0x80030A28: beq         $v0, $zero, L_80030A40
    if (ctx->r2 == 0) {
        // 0x80030A2C: nop
    
            goto L_80030A40;
    }
    // 0x80030A2C: nop

    // 0x80030A30: jalr        $v0
    // 0x80030A34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80030A34: nop

    after_0:
    // 0x80030A38: b           L_80030A4C
    // 0x80030A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030A4C;
    // 0x80030A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030A40:
    // 0x80030A40: jal         0x800303F0
    // 0x80030A44: nop

    _free_internal(rdram, ctx);
        goto after_1;
    // 0x80030A44: nop

    after_1:
L_80030A48:
    // 0x80030A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030A4C:
    // 0x80030A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030A50: jr          $ra
    // 0x80030A54: nop

    return;
    // 0x80030A54: nop

;}
RECOMP_FUNC void func_8000124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000124C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001254: lui         $t6, 0x19
    ctx->r14 = S32(0X19 << 16);
    // 0x80001258: lui         $t7, 0x1A
    ctx->r15 = S32(0X1A << 16);
    // 0x8000125C: addiu       $t7, $t7, -0x7EC0
    ctx->r15 = ADD32(ctx->r15, -0X7EC0);
    // 0x80001260: addiu       $t6, $t6, 0x4F10
    ctx->r14 = ADD32(ctx->r14, 0X4F10);
    // 0x80001264: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001268: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x8000126C: jal         0x8000068C
    // 0x80001270: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001270: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001274: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001278: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x8000127C: addiu       $t9, $t9, -0x55B0
    ctx->r25 = ADD32(ctx->r25, -0X55B0);
    // 0x80001280: addiu       $t8, $t8, -0x5650
    ctx->r24 = ADD32(ctx->r24, -0X5650);
    // 0x80001284: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001288: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x8000128C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001290: jal         0x8000068C
    // 0x80001294: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001294: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001298: b           L_800012A0
    // 0x8000129C: nop

        goto L_800012A0;
    // 0x8000129C: nop

L_800012A0:
    // 0x800012A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800012A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800012A8: jr          $ra
    // 0x800012AC: nop

    return;
    // 0x800012AC: nop

;}
RECOMP_FUNC void alSeqFileNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033B18: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80033B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033B20: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80033B24: blez        $t6, L_80033B50
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80033B28: nop
    
            goto L_80033B50;
    }
    // 0x80033B28: nop

    // 0x80033B2C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_80033B30:
    // 0x80033B30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033B34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80033B38: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80033B3C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80033B40: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80033B44: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80033B48: bnel        $at, $zero, L_80033B30
    if (ctx->r1 != 0) {
        // 0x80033B4C: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_80033B30;
    }
    goto skip_0;
    // 0x80033B4C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_80033B50:
    // 0x80033B50: jr          $ra
    // 0x80033B54: nop

    return;
    // 0x80033B54: nop

;}
RECOMP_FUNC void func_80003FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003FA8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003FAC: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003FB0: jal         0x80034720
    // 0x80003FB4: nop

    alSeqpStop(rdram, ctx);
        goto after_0;
    // 0x80003FB4: nop

    after_0:
    // 0x80003FB8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003FBC: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003FC0: jal         0x80034750
    // 0x80003FC4: nop

    alSeqpDelete(rdram, ctx);
        goto after_1;
    // 0x80003FC4: nop

    after_1:
    // 0x80003FC8: b           L_80003FD0
    // 0x80003FCC: nop

        goto L_80003FD0;
    // 0x80003FCC: nop

L_80003FD0:
    // 0x80003FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003FD8: jr          $ra
    // 0x80003FDC: nop

    return;
    // 0x80003FDC: nop

;}
RECOMP_FUNC void Get_Level_LightsType(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017FF8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80017FFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018000: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80018004: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80018008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001800C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80018010: lw          $t8, -0x4C04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4C04);
    // 0x80018014: nop

    // 0x80018018: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x8001801C: nop

    // 0x80018020: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80018024: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80018028: nop

    // 0x8001802C: beq         $t0, $zero, L_800180AC
    if (ctx->r8 == 0) {
        // 0x80018030: nop
    
            goto L_800180AC;
    }
    // 0x80018030: nop

    // 0x80018034: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80018038: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001803C: addiu       $t1, $t1, -0x5A48
    ctx->r9 = ADD32(ctx->r9, -0X5A48);
    // 0x80018040: addiu       $t5, $t2, 0x24
    ctx->r13 = ADD32(ctx->r10, 0X24);
L_80018044:
    // 0x80018044: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80018048: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8001804C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80018050: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80018054: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80018058: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x8001805C: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80018060: bne         $t2, $t5, L_80018044
    if (ctx->r10 != ctx->r13) {
        // 0x80018064: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_80018044;
    }
    // 0x80018064: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80018068: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8001806C: nop

    // 0x80018070: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80018074: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018078: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8001807C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x80018080: beq         $t6, $at, L_80018094
    if (ctx->r14 == ctx->r1) {
        // 0x80018084: nop
    
            goto L_80018094;
    }
    // 0x80018084: nop

    // 0x80018088: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8001808C: bne         $t6, $at, L_800180A4
    if (ctx->r14 != ctx->r1) {
        // 0x80018090: nop
    
            goto L_800180A4;
    }
    // 0x80018090: nop

L_80018094:
    // 0x80018094: b           L_800180BC
    // 0x80018098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800180BC;
    // 0x80018098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8001809C: b           L_800180AC
    // 0x800180A0: nop

        goto L_800180AC;
    // 0x800180A0: nop

L_800180A4:
    // 0x800180A4: b           L_800180BC
    // 0x800180A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800180BC;
    // 0x800180A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800180AC:
    // 0x800180AC: b           L_800180BC
    // 0x800180B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800180BC;
    // 0x800180B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800180B4: b           L_800180BC
    // 0x800180B8: nop

        goto L_800180BC;
    // 0x800180B8: nop

L_800180BC:
    // 0x800180BC: jr          $ra
    // 0x800180C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800180C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001D000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001D004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D008: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D00C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D010: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001D014: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001D018: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001D01C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D020: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001D024: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001D028: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D02C: nop

    // 0x8001D030: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8001D034: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001D038: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8001D03C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D040: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001D044: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8001D048: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8001D04C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8001D050: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8001D054: ori         $t3, $t3, 0x1402
    ctx->r11 = ctx->r11 | 0X1402;
    // 0x8001D058: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8001D05C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8001D060: nop

    // 0x8001D064: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8001D068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D06C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D070: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D074: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001D078: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001D07C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8001D080: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8001D084: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x8001D088: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001D08C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8001D090: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x8001D094: ori         $t0, $t0, 0x3204
    ctx->r8 = ctx->r8 | 0X3204;
    // 0x8001D098: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8001D09C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001D0A0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8001D0A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D0A8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8001D0AC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8001D0B0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8001D0B4: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8001D0B8: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x8001D0BC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001D0C0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x8001D0C4: addiu       $t6, $zero, 0x2204
    ctx->r14 = ADD32(0, 0X2204);
    // 0x8001D0C8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8001D0CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001D0D0: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8001D0D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D0D8: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8001D0DC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001D0E0: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8001D0E4: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8001D0E8: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x8001D0EC: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x8001D0F0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8001D0F4: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8001D0F8: lui         $t2, 0xFFFD
    ctx->r10 = S32(0XFFFD << 16);
    // 0x8001D0FC: ori         $t2, $t2, 0xF6FB
    ctx->r10 = ctx->r10 | 0XF6FB;
    // 0x8001D100: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8001D104: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001D108: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8001D10C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D110: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8001D114: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8001D118: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
    // 0x8001D11C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8001D120: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x8001D124: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x8001D128: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8001D12C: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8001D130: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x8001D134: ori         $t8, $t8, 0x41C8
    ctx->r24 = ctx->r24 | 0X41C8;
    // 0x8001D138: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8001D13C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001D140: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8001D144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D148: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8001D14C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8001D150: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8001D154: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8001D158: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x8001D15C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8001D160: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x8001D164: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8001D168: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8001D16C: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x8001D170: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x8001D174: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x8001D178: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8001D17C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001D180: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8001D184: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x8001D188: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x8001D18C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8001D190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D194: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001D198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D19C: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x8001D1A0: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8001D1A4: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x8001D1A8: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8001D1AC: lui         $t7, 0xF64F
    ctx->r15 = S32(0XF64F << 16);
    // 0x8001D1B0: ori         $t7, $t7, 0xC3BC
    ctx->r15 = ctx->r15 | 0XC3BC;
    // 0x8001D1B4: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8001D1B8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8001D1BC: nop

    // 0x8001D1C0: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8001D1C4: b           L_8001D1CC
    // 0x8001D1C8: nop

        goto L_8001D1CC;
    // 0x8001D1C8: nop

L_8001D1CC:
    // 0x8001D1CC: jr          $ra
    // 0x8001D1D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001D1D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alEvtqPostEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E80C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E814: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003E818: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003E81C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8003E820: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003E824: jal         0x80031F70
    // 0x8003E828: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E828: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003E82C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8003E830: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8003E834: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003E838: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x8003E83C: bne         $t0, $zero, L_8003E854
    if (ctx->r8 != 0) {
        // 0x8003E840: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8003E854;
    }
    // 0x8003E840: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003E844: jal         0x80031F70
    // 0x8003E848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8003E848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8003E84C: b           L_8003E924
    // 0x8003E850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003E924;
    // 0x8003E850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E854:
    // 0x8003E854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003E858: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x8003E85C: jal         0x800357B0
    // 0x8003E860: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x8003E860: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x8003E864: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E868: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8003E86C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8003E870: jal         0x80046380
    // 0x8003E874: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    alCopy(rdram, ctx);
        goto after_3;
    // 0x8003E874: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8003E878: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8003E87C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8003E880: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8003E884: bne         $a3, $at, L_8003E894
    if (ctx->r7 != ctx->r1) {
        // 0x8003E888: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_8003E894;
    }
    // 0x8003E888: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E88C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003E890: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_8003E894:
    // 0x8003E894: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8003E898: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8003E89C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8003E8A0: beq         $v0, $at, L_8003E918
    if (ctx->r2 == ctx->r1) {
        // 0x8003E8A4: addiu       $a1, $v0, 0x8
        ctx->r5 = ADD32(ctx->r2, 0X8);
            goto L_8003E918;
    }
    // 0x8003E8A4: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
L_8003E8A8:
    // 0x8003E8A8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003E8AC: bnel        $v0, $zero, L_8003E8DC
    if (ctx->r2 != 0) {
        // 0x8003E8B0: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8003E8DC;
    }
    goto skip_0;
    // 0x8003E8B0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8003E8B4: beql        $t8, $zero, L_8003E8C8
    if (ctx->r24 == 0) {
        // 0x8003E8B8: sw          $a3, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r7;
            goto L_8003E8C8;
    }
    goto skip_1;
    // 0x8003E8B8: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    skip_1:
    // 0x8003E8BC: b           L_8003E8C8
    // 0x8003E8C0: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
        goto L_8003E8C8;
    // 0x8003E8C0: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x8003E8C4: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
L_8003E8C8:
    // 0x8003E8C8: jal         0x800357E0
    // 0x8003E8CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    alLink(rdram, ctx);
        goto after_4;
    // 0x8003E8CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x8003E8D0: b           L_8003E918
    // 0x8003E8D4: nop

        goto L_8003E918;
    // 0x8003E8D4: nop

    // 0x8003E8D8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8003E8DC:
    // 0x8003E8DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003E8E0: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003E8E4: beql        $at, $zero, L_8003E910
    if (ctx->r1 == 0) {
        // 0x8003E8E8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003E910;
    }
    goto skip_2;
    // 0x8003E8E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    skip_2:
    // 0x8003E8EC: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    // 0x8003E8F0: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x8003E8F4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003E8F8: subu        $t1, $t9, $a3
    ctx->r9 = SUB32(ctx->r25, ctx->r7);
    // 0x8003E8FC: jal         0x800357E0
    // 0x8003E900: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    alLink(rdram, ctx);
        goto after_5;
    // 0x8003E900: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    after_5:
    // 0x8003E904: b           L_8003E918
    // 0x8003E908: nop

        goto L_8003E918;
    // 0x8003E908: nop

    // 0x8003E90C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8003E910:
    // 0x8003E910: bne         $v0, $zero, L_8003E8A8
    if (ctx->r2 != 0) {
        // 0x8003E914: subu        $a3, $a3, $v1
        ctx->r7 = SUB32(ctx->r7, ctx->r3);
            goto L_8003E8A8;
    }
    // 0x8003E914: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
L_8003E918:
    // 0x8003E918: jal         0x80031F70
    // 0x8003E91C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x8003E91C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8003E920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E924:
    // 0x8003E924: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003E928: jr          $ra
    // 0x8003E92C: nop

    return;
    // 0x8003E92C: nop

;}
RECOMP_FUNC void memmove_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E274: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8000E278: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x8000E27C: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x8000E280: beq         $a2, $zero, L_8000E334
    if (ctx->r6 == 0) {
        // 0x8000E284: nop
    
            goto L_8000E334;
    }
    // 0x8000E284: nop

    // 0x8000E288: beq         $a0, $a1, L_8000E334
    if (ctx->r4 == ctx->r5) {
        // 0x8000E28C: nop
    
            goto L_8000E334;
    }
    // 0x8000E28C: nop

    // 0x8000E290: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8000E294: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8000E298: nop

    // 0x8000E29C: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x8000E2A0: beq         $at, $zero, L_8000E2F0
    if (ctx->r1 == 0) {
        // 0x8000E2A4: nop
    
            goto L_8000E2F0;
    }
    // 0x8000E2A4: nop

    // 0x8000E2A8: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8000E2AC: sltu        $at, $t6, $t8
    ctx->r1 = ctx->r14 < ctx->r24 ? 1 : 0;
    // 0x8000E2B0: beq         $at, $zero, L_8000E2F0
    if (ctx->r1 == 0) {
        // 0x8000E2B4: nop
    
            goto L_8000E2F0;
    }
    // 0x8000E2B4: nop

    // 0x8000E2B8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E2BC: beq         $a3, $zero, L_8000E2E8
    if (ctx->r7 == 0) {
        // 0x8000E2C0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E2E8;
    }
    // 0x8000E2C0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E2C4:
    // 0x8000E2C4: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8000E2C8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8000E2CC: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x8000E2D0: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8000E2D4: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x8000E2D8: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
    // 0x8000E2DC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E2E0: bne         $a3, $zero, L_8000E2C4
    if (ctx->r7 != 0) {
        // 0x8000E2E4: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E2C4;
    }
    // 0x8000E2E4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E2E8:
    // 0x8000E2E8: b           L_8000E334
    // 0x8000E2EC: nop

        goto L_8000E334;
    // 0x8000E2EC: nop

L_8000E2F0:
    // 0x8000E2F0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E2F4: beq         $a3, $zero, L_8000E334
    if (ctx->r7 == 0) {
        // 0x8000E2F8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E334;
    }
    // 0x8000E2F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E2FC:
    // 0x8000E2FC: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8000E300: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x8000E304: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8000E308: nop

    // 0x8000E30C: sb          $t5, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r13;
    // 0x8000E310: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8000E314: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8000E318: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8000E31C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8000E320: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8000E324: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x8000E328: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E32C: bne         $a3, $zero, L_8000E2FC
    if (ctx->r7 != 0) {
        // 0x8000E330: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E2FC;
    }
    // 0x8000E330: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E334:
    // 0x8000E334: b           L_8000E344
    // 0x8000E338: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8000E344;
    // 0x8000E338: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000E33C: b           L_8000E344
    // 0x8000E340: nop

        goto L_8000E344;
    // 0x8000E340: nop

L_8000E344:
    // 0x8000E344: jr          $ra
    // 0x8000E348: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8000E348: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void UpdateRawControllers(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001E20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E210: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001E214: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001E218: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001E21C: lbu         $t7, -0x1D84($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1D84);
    // 0x8001E220: nop

    // 0x8001E224: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8001E228: beq         $t8, $zero, L_8001E270
    if (ctx->r24 == 0) {
        // 0x8001E22C: nop
    
            goto L_8001E270;
    }
    // 0x8001E22C: nop

    // 0x8001E230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001E234: jal         0x80037AB0
    // 0x8001E238: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    osContStartReadData_recomp(rdram, ctx);
        goto after_0;
    // 0x8001E238: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    after_0:
    // 0x8001E23C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001E240: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E244: nop

    // 0x8001E248: bne         $t9, $zero, L_8001E270
    if (ctx->r25 != 0) {
        // 0x8001E24C: nop
    
            goto L_8001E270;
    }
    // 0x8001E24C: nop

    // 0x8001E250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001E254: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001E258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001E25C: jal         0x80031880
    // 0x8001E260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8001E260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001E264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001E268: jal         0x80037B74
    // 0x8001E26C: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    osContGetReadData_recomp(rdram, ctx);
        goto after_2;
    // 0x8001E26C: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    after_2:
L_8001E270:
    // 0x8001E270: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_8001E274:
    // 0x8001E274: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001E278: lbu         $t0, -0x1D84($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1D84);
    // 0x8001E27C: lhu         $t1, 0x20($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E280: nop

    // 0x8001E284: srav        $t2, $t0, $t1
    ctx->r10 = S32(SIGNED(ctx->r8) >> (ctx->r9 & 31));
    // 0x8001E288: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8001E28C: beq         $t3, $zero, L_8001E52C
    if (ctx->r11 == 0) {
        // 0x8001E290: nop
    
            goto L_8001E52C;
    }
    // 0x8001E290: nop

    // 0x8001E294: lhu         $t4, 0x20($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E298: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001E29C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8001E2A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001E2A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8001E2A8: addiu       $t6, $t6, 0x7668
    ctx->r14 = ADD32(ctx->r14, 0X7668);
    // 0x8001E2AC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8001E2B0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8001E2B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001E2B8: nop

    // 0x8001E2BC: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x8001E2C0: nop

    // 0x8001E2C4: bne         $t9, $zero, L_8001E2DC
    if (ctx->r25 != 0) {
        // 0x8001E2C8: nop
    
            goto L_8001E2DC;
    }
    // 0x8001E2C8: nop

    // 0x8001E2CC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E2D0: nop

    // 0x8001E2D4: beq         $t0, $zero, L_8001E2F8
    if (ctx->r8 == 0) {
        // 0x8001E2D8: nop
    
            goto L_8001E2F8;
    }
    // 0x8001E2D8: nop

L_8001E2DC:
    // 0x8001E2DC: lhu         $t1, 0x20($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E2E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E2E4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E2E8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E2EC: sh          $zero, -0x1D00($at)
    MEM_H(-0X1D00, ctx->r1) = 0;
    // 0x8001E2F0: b           L_8001E52C
    // 0x8001E2F4: nop

        goto L_8001E52C;
    // 0x8001E2F4: nop

L_8001E2F8:
    // 0x8001E2F8: lhu         $t4, 0x20($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E2FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E300: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8001E304: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001E308: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001E30C: sh          $t3, -0x1D00($at)
    MEM_H(-0X1D00, ctx->r1) = ctx->r11;
    // 0x8001E310: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x8001E314: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001E318: lhu         $t8, 0x20($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E31C: lb          $t7, 0x2($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2);
    // 0x8001E320: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E324: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001E328: sb          $t7, -0x1CC4($at)
    MEM_B(-0X1CC4, ctx->r1) = ctx->r15;
    // 0x8001E32C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8001E330: lhu         $t1, 0x20($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E334: lb          $t0, 0x3($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X3);
    // 0x8001E338: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E33C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8001E340: sb          $t0, -0x1CBC($at)
    MEM_B(-0X1CBC, ctx->r1) = ctx->r8;
    // 0x8001E344: lhu         $t2, 0x20($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E348: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001E34C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8001E350: lb          $t4, -0x1CC4($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X1CC4);
    // 0x8001E354: nop

    // 0x8001E358: slti        $at, $t4, 0x32
    ctx->r1 = SIGNED(ctx->r12) < 0X32 ? 1 : 0;
    // 0x8001E35C: bne         $at, $zero, L_8001E378
    if (ctx->r1 != 0) {
        // 0x8001E360: nop
    
            goto L_8001E378;
    }
    // 0x8001E360: nop

    // 0x8001E364: lhu         $t3, 0x22($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E368: nop

    // 0x8001E36C: ori         $t5, $t3, 0x100
    ctx->r13 = ctx->r11 | 0X100;
    // 0x8001E370: b           L_8001E3A8
    // 0x8001E374: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
        goto L_8001E3A8;
    // 0x8001E374: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
L_8001E378:
    // 0x8001E378: lhu         $t6, 0x20($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E37C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001E380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001E384: lb          $t7, -0x1CC4($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1CC4);
    // 0x8001E388: nop

    // 0x8001E38C: slti        $at, $t7, -0x31
    ctx->r1 = SIGNED(ctx->r15) < -0X31 ? 1 : 0;
    // 0x8001E390: beq         $at, $zero, L_8001E3A8
    if (ctx->r1 == 0) {
        // 0x8001E394: nop
    
            goto L_8001E3A8;
    }
    // 0x8001E394: nop

    // 0x8001E398: lhu         $t8, 0x22($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E39C: nop

    // 0x8001E3A0: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x8001E3A4: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
L_8001E3A8:
    // 0x8001E3A8: lhu         $t0, 0x20($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E3AC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001E3B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001E3B4: lb          $t1, -0x1CBC($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1CBC);
    // 0x8001E3B8: nop

    // 0x8001E3BC: slti        $at, $t1, 0x32
    ctx->r1 = SIGNED(ctx->r9) < 0X32 ? 1 : 0;
    // 0x8001E3C0: bne         $at, $zero, L_8001E3DC
    if (ctx->r1 != 0) {
        // 0x8001E3C4: nop
    
            goto L_8001E3DC;
    }
    // 0x8001E3C4: nop

    // 0x8001E3C8: lhu         $t2, 0x22($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E3CC: nop

    // 0x8001E3D0: ori         $t4, $t2, 0x800
    ctx->r12 = ctx->r10 | 0X800;
    // 0x8001E3D4: b           L_8001E40C
    // 0x8001E3D8: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
        goto L_8001E40C;
    // 0x8001E3D8: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
L_8001E3DC:
    // 0x8001E3DC: lhu         $t3, 0x20($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E3E0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001E3E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8001E3E8: lb          $t5, -0x1CBC($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1CBC);
    // 0x8001E3EC: nop

    // 0x8001E3F0: slti        $at, $t5, -0x31
    ctx->r1 = SIGNED(ctx->r13) < -0X31 ? 1 : 0;
    // 0x8001E3F4: beq         $at, $zero, L_8001E40C
    if (ctx->r1 == 0) {
        // 0x8001E3F8: nop
    
            goto L_8001E40C;
    }
    // 0x8001E3F8: nop

    // 0x8001E3FC: lhu         $t6, 0x22($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E400: nop

    // 0x8001E404: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8001E408: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
L_8001E40C:
    // 0x8001E40C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001E410: lw          $t8, 0x525C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X525C);
    // 0x8001E414: nop

    // 0x8001E418: beq         $t8, $zero, L_8001E44C
    if (ctx->r24 == 0) {
        // 0x8001E41C: nop
    
            goto L_8001E44C;
    }
    // 0x8001E41C: nop

    // 0x8001E420: lhu         $t9, 0x20($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E428: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001E42C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E430: sh          $zero, -0x1CF0($at)
    MEM_H(-0X1CF0, ctx->r1) = 0;
    // 0x8001E434: lhu         $t1, 0x20($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E43C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E440: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E444: b           L_8001E52C
    // 0x8001E448: sh          $zero, -0x1CB0($at)
    MEM_H(-0X1CB0, ctx->r1) = 0;
        goto L_8001E52C;
    // 0x8001E448: sh          $zero, -0x1CB0($at)
    MEM_H(-0X1CB0, ctx->r1) = 0;
L_8001E44C:
    // 0x8001E44C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001E450: lw          $t4, 0x5284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5284);
    // 0x8001E454: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001E458: bne         $t4, $at, L_8001E4D8
    if (ctx->r12 != ctx->r1) {
        // 0x8001E45C: nop
    
            goto L_8001E4D8;
    }
    // 0x8001E45C: nop

    // 0x8001E460: lhu         $t3, 0x20($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E464: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001E468: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x8001E46C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8001E470: lhu         $t6, -0x1CF0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1CF0);
    // 0x8001E474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E478: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001E47C: sh          $t6, -0x1CE0($at)
    MEM_H(-0X1CE0, ctx->r1) = ctx->r14;
    // 0x8001E480: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001E484: lhu         $t9, 0x20($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E488: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x8001E48C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E490: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001E494: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001E498: sh          $t8, -0x1CF0($at)
    MEM_H(-0X1CF0, ctx->r1) = ctx->r24;
    // 0x8001E49C: lhu         $t1, 0x20($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E4A0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001E4A4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001E4A8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8001E4AC: lhu         $t4, -0x1CB0($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1CB0);
    // 0x8001E4B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E4B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001E4B8: sh          $t4, -0x1CA0($at)
    MEM_H(-0X1CA0, ctx->r1) = ctx->r12;
    // 0x8001E4BC: lhu         $t6, 0x20($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E4C0: lhu         $t3, 0x22($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E4C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E4C8: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8001E4CC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001E4D0: b           L_8001E52C
    // 0x8001E4D4: sh          $t3, -0x1CB0($at)
    MEM_H(-0X1CB0, ctx->r1) = ctx->r11;
        goto L_8001E52C;
    // 0x8001E4D4: sh          $t3, -0x1CB0($at)
    MEM_H(-0X1CB0, ctx->r1) = ctx->r11;
L_8001E4D8:
    // 0x8001E4D8: lhu         $t7, 0x20($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E4DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001E4E0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8001E4E4: addiu       $t8, $t8, -0x1CF0
    ctx->r24 = ADD32(ctx->r24, -0X1CF0);
    // 0x8001E4E8: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8001E4EC: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x8001E4F0: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8001E4F4: lhu         $t2, 0x0($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X0);
    // 0x8001E4F8: nop

    // 0x8001E4FC: or          $t6, $t1, $t2
    ctx->r14 = ctx->r9 | ctx->r10;
    // 0x8001E500: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
    // 0x8001E504: lhu         $t3, 0x20($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E508: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001E50C: addiu       $t7, $t7, -0x1CB0
    ctx->r15 = ADD32(ctx->r15, -0X1CB0);
    // 0x8001E510: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x8001E514: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8001E518: lhu         $t8, 0x0($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X0);
    // 0x8001E51C: lhu         $t4, 0x22($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X22);
    // 0x8001E520: nop

    // 0x8001E524: or          $t1, $t8, $t4
    ctx->r9 = ctx->r24 | ctx->r12;
    // 0x8001E528: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
L_8001E52C:
    // 0x8001E52C: lhu         $t2, 0x20($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X20);
    // 0x8001E530: nop

    // 0x8001E534: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x8001E538: andi        $t0, $t6, 0xFFFF
    ctx->r8 = ctx->r14 & 0XFFFF;
    // 0x8001E53C: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8001E540: bne         $at, $zero, L_8001E274
    if (ctx->r1 != 0) {
        // 0x8001E544: sh          $t6, 0x20($sp)
        MEM_H(0X20, ctx->r29) = ctx->r14;
            goto L_8001E274;
    }
    // 0x8001E544: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8001E548: b           L_8001E550
    // 0x8001E54C: nop

        goto L_8001E550;
    // 0x8001E54C: nop

L_8001E550:
    // 0x8001E550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001E558: jr          $ra
    // 0x8001E55C: nop

    return;
    // 0x8001E55C: nop

;}
RECOMP_FUNC void func_80021584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021584: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80021588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002158C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80021590: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80021594: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80021598: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8002159C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800215A0: jal         0x80077CB0
    // 0x800215A4: addiu       $a3, $sp, 0x3A
    ctx->r7 = ADD32(ctx->r29, 0X3A);
    func_80077CB0(rdram, ctx);
        goto after_0;
    // 0x800215A4: addiu       $a3, $sp, 0x3A
    ctx->r7 = ADD32(ctx->r29, 0X3A);
    after_0:
    // 0x800215A8: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x800215AC: lh          $t6, 0x3E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3E);
    // 0x800215B0: nop

    // 0x800215B4: beq         $t6, $zero, L_80021B54
    if (ctx->r14 == 0) {
        // 0x800215B8: nop
    
            goto L_80021B54;
    }
    // 0x800215B8: nop

    // 0x800215BC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800215C0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800215C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800215C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800215CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800215D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800215D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800215D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800215DC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800215E0: sh          $t7, 0x4254($at)
    MEM_H(0X4254, ctx->r1) = ctx->r15;
    // 0x800215E4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800215E8: lh          $t0, 0x3C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3C);
    // 0x800215EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800215F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800215F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800215F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800215FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80021600: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021604: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80021608: sb          $t0, 0x425B($at)
    MEM_B(0X425B, ctx->r1) = ctx->r8;
    // 0x8002160C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80021610: lh          $t3, 0x3A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3A);
    // 0x80021614: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80021618: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002161C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80021620: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021624: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80021628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002162C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80021630: sb          $t3, 0x425C($at)
    MEM_B(0X425C, ctx->r1) = ctx->r11;
    // 0x80021634: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80021638: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8002163C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021640: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021644: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021648: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8002164C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80021650: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021654: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80021658: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8002165C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021660: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80021664: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80021668: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8002166C: lh          $t1, 0xE4($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XE4);
    // 0x80021670: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80021674: addu        $t4, $t2, $t7
    ctx->r12 = ADD32(ctx->r10, ctx->r15);
    // 0x80021678: sh          $t1, 0x106($t4)
    MEM_H(0X106, ctx->r12) = ctx->r9;
    // 0x8002167C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80021680: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80021684: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80021688: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002168C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021690: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80021694: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80021698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002169C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800216A0: sh          $t3, 0x4254($at)
    MEM_H(0X4254, ctx->r1) = ctx->r11;
    // 0x800216A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800216A8: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x800216AC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800216B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800216B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800216B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800216BC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800216C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800216C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800216C8: sb          $t8, 0x425B($at)
    MEM_B(0X425B, ctx->r1) = ctx->r24;
    // 0x800216CC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800216D0: lh          $t2, 0x3C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3C);
    // 0x800216D4: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x800216D8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x800216DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800216E0: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x800216E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800216E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800216EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800216F0: sb          $t2, 0x425C($at)
    MEM_B(0X425C, ctx->r1) = ctx->r10;
    // 0x800216F4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800216F8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800216FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80021700: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021704: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80021708: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8002170C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80021710: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021714: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80021718: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002171C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80021720: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80021724: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x80021728: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002172C: lh          $t9, 0xE4($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XE4);
    // 0x80021730: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021734: addu        $t7, $t0, $t3
    ctx->r15 = ADD32(ctx->r8, ctx->r11);
    // 0x80021738: sh          $t9, 0x106($t7)
    MEM_H(0X106, ctx->r15) = ctx->r25;
    // 0x8002173C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80021740:
    // 0x80021740: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80021744: nop

    // 0x80021748: bne         $t2, $zero, L_80021768
    if (ctx->r10 != 0) {
        // 0x8002174C: nop
    
            goto L_80021768;
    }
    // 0x8002174C: nop

    // 0x80021750: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80021754: nop

    // 0x80021758: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8002175C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80021760: b           L_80021780
    // 0x80021764: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_80021780;
    // 0x80021764: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80021768:
    // 0x80021768: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8002176C: nop

    // 0x80021770: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80021774: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80021778: nop

    // 0x8002177C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80021780:
    // 0x80021780: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80021784: nop

    // 0x80021788: bne         $t8, $zero, L_800217B8
    if (ctx->r24 != 0) {
        // 0x8002178C: nop
    
            goto L_800217B8;
    }
    // 0x8002178C: nop

    // 0x80021790: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80021794: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021798: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8002179C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800217A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800217A4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800217A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800217AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800217B0: b           L_800218D4
    // 0x800217B4: sb          $zero, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = 0;
        goto L_800218D4;
    // 0x800217B4: sb          $zero, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = 0;
L_800217B8:
    // 0x800217B8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800217BC: nop

    // 0x800217C0: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x800217C4: beq         $at, $zero, L_800217F8
    if (ctx->r1 == 0) {
        // 0x800217C8: nop
    
            goto L_800217F8;
    }
    // 0x800217C8: nop

    // 0x800217CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800217D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800217D4: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800217D8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800217DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800217E0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800217E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800217E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800217EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800217F0: b           L_800218D4
    // 0x800217F4: sb          $t7, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r15;
        goto L_800218D4;
    // 0x800217F4: sb          $t7, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r15;
L_800217F8:
    // 0x800217F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800217FC: nop

    // 0x80021800: slti        $at, $t4, 0xE
    ctx->r1 = SIGNED(ctx->r12) < 0XE ? 1 : 0;
    // 0x80021804: beq         $at, $zero, L_80021838
    if (ctx->r1 == 0) {
        // 0x80021808: nop
    
            goto L_80021838;
    }
    // 0x80021808: nop

    // 0x8002180C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80021810: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021814: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021818: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8002181C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021820: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021824: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021828: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002182C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80021830: b           L_800218D4
    // 0x80021834: sb          $t5, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r13;
        goto L_800218D4;
    // 0x80021834: sb          $t5, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r13;
L_80021838:
    // 0x80021838: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002183C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80021840: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80021844: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80021848: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002184C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80021850: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80021854: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80021858: lh          $t9, 0x4234($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4234);
    // 0x8002185C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021860: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80021864: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x80021868: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x8002186C: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80021870: lbu         $t7, 0x4D92($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4D92);
    // 0x80021874: nop

    // 0x80021878: bne         $t7, $zero, L_800218AC
    if (ctx->r15 != 0) {
        // 0x8002187C: nop
    
            goto L_800218AC;
    }
    // 0x8002187C: nop

    // 0x80021880: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80021884: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021888: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8002188C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80021890: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021894: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80021898: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002189C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800218A0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800218A4: b           L_800218D4
    // 0x800218A8: sb          $t1, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r9;
        goto L_800218D4;
    // 0x800218A8: sb          $t1, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r9;
L_800218AC:
    // 0x800218AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800218B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800218B4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800218B8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800218BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800218C0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800218C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800218C8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800218CC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800218D0: sb          $t5, 0x425A($at)
    MEM_B(0X425A, ctx->r1) = ctx->r13;
L_800218D4:
    // 0x800218D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800218D8: nop

    // 0x800218DC: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x800218E0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800218E4: bne         $at, $zero, L_80021740
    if (ctx->r1 != 0) {
        // 0x800218E8: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80021740;
    }
    // 0x800218E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800218EC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800218F0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800218F4: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800218F8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800218FC: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80021900: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021904: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021908: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002190C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80021910: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80021914: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80021918: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8002191C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021920: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80021924: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x80021928: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x8002192C: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80021930: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80021934: nop

    // 0x80021938: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002193C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80021940: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80021944: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80021948: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8002194C: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80021950: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80021954: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80021958: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8002195C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80021960: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80021964: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80021968: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8002196C: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80021970: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80021974: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80021978: addu        $t2, $t3, $t9
    ctx->r10 = ADD32(ctx->r11, ctx->r25);
    // 0x8002197C: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x80021980: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80021984: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80021988: nop

    // 0x8002198C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80021990: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80021994: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80021998: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8002199C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x800219A0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800219A4: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x800219A8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800219AC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800219B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800219B4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800219B8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800219BC: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x800219C0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800219C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800219C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800219CC: addu        $t0, $t4, $t5
    ctx->r8 = ADD32(ctx->r12, ctx->r13);
    // 0x800219D0: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x800219D4: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800219D8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800219DC: nop

    // 0x800219E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800219E4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800219E8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800219EC: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800219F0: jal         0x800155A8
    // 0x800219F4: nop

    Math_CalcAngle2D(rdram, ctx);
        goto after_1;
    // 0x800219F4: nop

    after_1:
    // 0x800219F8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800219FC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80021A00: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80021A04: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80021A08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80021A0C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80021A10: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021A14: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80021A18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021A1C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80021A20: swc1        $f10, 0x4274($at)
    MEM_W(0X4274, ctx->r1) = ctx->f10.u32l;
    // 0x80021A24: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80021A28: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80021A2C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021A30: jal         0x80015538
    // 0x80021A34: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80021A34: nop

    after_2:
    // 0x80021A38: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80021A3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021A40: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021A44: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021A48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021A4C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021A50: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021A54: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80021A58: swc1        $f0, 0x4274($at)
    MEM_W(0X4274, ctx->r1) = ctx->f0.u32l;
    // 0x80021A5C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80021A60: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80021A64: jal         0x80015634
    // 0x80021A68: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_3;
    // 0x80021A68: nop

    after_3:
    // 0x80021A6C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80021A70: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80021A74: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80021A78: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80021A7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80021A80: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80021A84: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021A88: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021A90: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80021A94: swc1        $f16, 0x4278($at)
    MEM_W(0X4278, ctx->r1) = ctx->f16.u32l;
    // 0x80021A98: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80021A9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80021AA0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021AA4: jal         0x80015538
    // 0x80021AA8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80021AA8: nop

    after_4:
    // 0x80021AAC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80021AB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021AB4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80021AB8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80021ABC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80021AC0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80021AC4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80021AC8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80021ACC: swc1        $f0, 0x4278($at)
    MEM_W(0X4278, ctx->r1) = ctx->f0.u32l;
    // 0x80021AD0: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80021AD4: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80021AD8: jal         0x800156C4
    // 0x80021ADC: nop

    Math_CalcAngleSimple(rdram, ctx);
        goto after_5;
    // 0x80021ADC: nop

    after_5:
    // 0x80021AE0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80021AE4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80021AE8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80021AEC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80021AF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80021AF4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80021AF8: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021AFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80021B00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021B04: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80021B08: swc1        $f18, 0x427C($at)
    MEM_W(0X427C, ctx->r1) = ctx->f18.u32l;
    // 0x80021B0C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80021B10: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80021B14: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80021B18: jal         0x80015538
    // 0x80021B1C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80021B1C: nop

    after_6:
    // 0x80021B20: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80021B24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021B28: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80021B2C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80021B30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80021B34: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80021B38: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80021B3C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80021B40: swc1        $f0, 0x427C($at)
    MEM_W(0X427C, ctx->r1) = ctx->f0.u32l;
    // 0x80021B44: b           L_80021B64
    // 0x80021B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80021B64;
    // 0x80021B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80021B4C: b           L_80021B5C
    // 0x80021B50: nop

        goto L_80021B5C;
    // 0x80021B50: nop

L_80021B54:
    // 0x80021B54: b           L_80021B64
    // 0x80021B58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80021B64;
    // 0x80021B58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80021B5C:
    // 0x80021B5C: b           L_80021B64
    // 0x80021B60: nop

        goto L_80021B64;
    // 0x80021B60: nop

L_80021B64:
    // 0x80021B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021B68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80021B6C: jr          $ra
    // 0x80021B70: nop

    return;
    // 0x80021B70: nop

;}
RECOMP_FUNC void func_8001F238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F238: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F240: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F244: jal         0x8001EED8
    // 0x8001F248: nop

    func_8001EED8(rdram, ctx);
        goto after_0;
    // 0x8001F248: nop

    after_0:
    // 0x8001F24C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001F250: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001F254: jal         0x80038030
    // 0x8001F258: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    osPfsIsPlug_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F258: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    after_1:
    // 0x8001F25C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8001F260:
    // 0x8001F260: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8001F264: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001F268: nop

    // 0x8001F26C: srav        $t8, $t6, $t7
    ctx->r24 = S32(SIGNED(ctx->r14) >> (ctx->r15 & 31));
    // 0x8001F270: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001F274: beq         $t9, $zero, L_8001F2C0
    if (ctx->r25 == 0) {
        // 0x8001F278: nop
    
            goto L_8001F2C0;
    }
    // 0x8001F278: nop

    // 0x8001F27C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8001F280: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001F284: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8001F288: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x8001F28C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001F290: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8001F294: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8001F298: lw          $t4, 0x70($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X70);
    // 0x8001F29C: nop

    // 0x8001F2A0: beq         $t4, $zero, L_8001F2B8
    if (ctx->r12 == 0) {
        // 0x8001F2A4: nop
    
            goto L_8001F2B8;
    }
    // 0x8001F2A4: nop

    // 0x8001F2A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001F2AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001F2B0: jal         0x8001F174
    // 0x8001F2B4: nop

    func_8001F174(rdram, ctx);
        goto after_2;
    // 0x8001F2B4: nop

    after_2:
L_8001F2B8:
    // 0x8001F2B8: b           L_8001F2D8
    // 0x8001F2BC: nop

        goto L_8001F2D8;
    // 0x8001F2BC: nop

L_8001F2C0:
    // 0x8001F2C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001F2C4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8001F2C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001F2CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001F2D0: jal         0x8001EFD0
    // 0x8001F2D4: nop

    func_8001EFD0(rdram, ctx);
        goto after_3;
    // 0x8001F2D4: nop

    after_3:
L_8001F2D8:
    // 0x8001F2D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001F2DC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8001F2E0: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8001F2E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001F2E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001F2EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001F2F0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8001F2F4: sw          $t6, 0x70($t1)
    MEM_W(0X70, ctx->r9) = ctx->r14;
    // 0x8001F2F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001F2FC: nop

    // 0x8001F300: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8001F304: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8001F308: bne         $at, $zero, L_8001F260
    if (ctx->r1 != 0) {
        // 0x8001F30C: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_8001F260;
    }
    // 0x8001F30C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8001F310: b           L_8001F318
    // 0x8001F314: nop

        goto L_8001F318;
    // 0x8001F314: nop

L_8001F318:
    // 0x8001F318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F31C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F320: jr          $ra
    // 0x8001F324: nop

    return;
    // 0x8001F324: nop

;}
RECOMP_FUNC void func_8001BB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001BB08: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BB0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BB10: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BB14: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BB18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001BB1C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001BB20: sb          $a1, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r5;
    // 0x8001BB24: jr          $ra
    // 0x8001BB28: nop

    return;
    // 0x8001BB28: nop

    // 0x8001BB2C: jr          $ra
    // 0x8001BB30: nop

    return;
    // 0x8001BB30: nop

;}
RECOMP_FUNC void func_800145C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800145C8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800145CC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x800145D0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800145D4: nop

    // 0x800145D8: slti        $at, $t6, 0x30
    ctx->r1 = SIGNED(ctx->r14) < 0X30 ? 1 : 0;
    // 0x800145DC: bne         $at, $zero, L_80014610
    if (ctx->r1 != 0) {
        // 0x800145E0: nop
    
            goto L_80014610;
    }
    // 0x800145E0: nop

    // 0x800145E4: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x800145E8: nop

    // 0x800145EC: slti        $at, $t7, 0x34
    ctx->r1 = SIGNED(ctx->r15) < 0X34 ? 1 : 0;
    // 0x800145F0: beq         $at, $zero, L_80014610
    if (ctx->r1 == 0) {
        // 0x800145F4: nop
    
            goto L_80014610;
    }
    // 0x800145F4: nop

    // 0x800145F8: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x800145FC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80014600: addiu       $t0, $t9, -0x30
    ctx->r8 = ADD32(ctx->r25, -0X30);
    // 0x80014604: sll         $t1, $t0, 30
    ctx->r9 = S32(ctx->r8 << 30);
    // 0x80014608: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x8001460C: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
L_80014610:
    // 0x80014610: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80014614: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x80014618: nop

    // 0x8001461C: slti        $at, $t3, 0x30
    ctx->r1 = SIGNED(ctx->r11) < 0X30 ? 1 : 0;
    // 0x80014620: bne         $at, $zero, L_80014654
    if (ctx->r1 != 0) {
        // 0x80014624: nop
    
            goto L_80014654;
    }
    // 0x80014624: nop

    // 0x80014628: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8001462C: nop

    // 0x80014630: slti        $at, $t4, 0x34
    ctx->r1 = SIGNED(ctx->r12) < 0X34 ? 1 : 0;
    // 0x80014634: beq         $at, $zero, L_80014654
    if (ctx->r1 == 0) {
        // 0x80014638: nop
    
            goto L_80014654;
    }
    // 0x80014638: nop

    // 0x8001463C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80014640: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80014644: addiu       $t7, $t6, -0x30
    ctx->r15 = ADD32(ctx->r14, -0X30);
    // 0x80014648: sll         $t9, $t7, 26
    ctx->r25 = S32(ctx->r15 << 26);
    // 0x8001464C: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x80014650: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_80014654:
    // 0x80014654: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80014658: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8001465C: nop

    // 0x80014660: slti        $at, $t8, 0x30
    ctx->r1 = SIGNED(ctx->r24) < 0X30 ? 1 : 0;
    // 0x80014664: bne         $at, $zero, L_80014698
    if (ctx->r1 != 0) {
        // 0x80014668: nop
    
            goto L_80014698;
    }
    // 0x80014668: nop

    // 0x8001466C: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x80014670: nop

    // 0x80014674: slti        $at, $t1, 0x34
    ctx->r1 = SIGNED(ctx->r9) < 0X34 ? 1 : 0;
    // 0x80014678: beq         $at, $zero, L_80014698
    if (ctx->r1 == 0) {
        // 0x8001467C: nop
    
            goto L_80014698;
    }
    // 0x8001467C: nop

    // 0x80014680: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x80014684: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80014688: addiu       $t4, $t3, -0x30
    ctx->r12 = ADD32(ctx->r11, -0X30);
    // 0x8001468C: sll         $t6, $t4, 22
    ctx->r14 = S32(ctx->r12 << 22);
    // 0x80014690: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x80014694: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_80014698:
    // 0x80014698: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001469C: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x800146A0: nop

    // 0x800146A4: slti        $at, $t5, 0x30
    ctx->r1 = SIGNED(ctx->r13) < 0X30 ? 1 : 0;
    // 0x800146A8: bne         $at, $zero, L_800146DC
    if (ctx->r1 != 0) {
        // 0x800146AC: nop
    
            goto L_800146DC;
    }
    // 0x800146AC: nop

    // 0x800146B0: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x800146B4: nop

    // 0x800146B8: slti        $at, $t9, 0x34
    ctx->r1 = SIGNED(ctx->r25) < 0X34 ? 1 : 0;
    // 0x800146BC: beq         $at, $zero, L_800146DC
    if (ctx->r1 == 0) {
        // 0x800146C0: nop
    
            goto L_800146DC;
    }
    // 0x800146C0: nop

    // 0x800146C4: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x800146C8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800146CC: addiu       $t1, $t8, -0x30
    ctx->r9 = ADD32(ctx->r24, -0X30);
    // 0x800146D0: sll         $t3, $t1, 18
    ctx->r11 = S32(ctx->r9 << 18);
    // 0x800146D4: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x800146D8: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_800146DC:
    // 0x800146DC: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x800146E0: b           L_800146F0
    // 0x800146E4: nop

        goto L_800146F0;
    // 0x800146E4: nop

    // 0x800146E8: b           L_800146F0
    // 0x800146EC: nop

        goto L_800146F0;
    // 0x800146EC: nop

L_800146F0:
    // 0x800146F0: jr          $ra
    // 0x800146F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800146F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001445C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001445C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80014460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014464: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80014468: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8001446C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014470: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_80014474:
    // 0x80014474: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80014478: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8001447C: nop

    // 0x80014480: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80014484: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80014488: jal         0x80014414
    // 0x8001448C: nop

    ctoi(rdram, ctx);
        goto after_0;
    // 0x8001448C: nop

    after_0:
    // 0x80014490: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80014494: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80014498: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001449C: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x800144A0: sw          $s0, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->r16;
    // 0x800144A4: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x800144A8: nop

    // 0x800144AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800144B0: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x800144B4: sw          $s0, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r16;
    // 0x800144B8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800144BC: nop

    // 0x800144C0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800144C4: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x800144C8: bne         $at, $zero, L_80014474
    if (ctx->r1 != 0) {
        // 0x800144CC: sw          $t6, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r14;
            goto L_80014474;
    }
    // 0x800144CC: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x800144D0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x800144D4: jal         0x800142F0
    // 0x800144D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800142F0(rdram, ctx);
        goto after_1;
    // 0x800144D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x800144DC: b           L_800144E4
    // 0x800144E0: nop

        goto L_800144E4;
    // 0x800144E0: nop

L_800144E4:
    // 0x800144E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800144E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800144EC: jr          $ra
    // 0x800144F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800144F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void Debug_BackupMemTest_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020844: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80020848: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8002084C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80020850: jal         0x8001D4D0
    // 0x80020854: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x80020854: nop

    after_0:
    // 0x80020858: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8002085C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80020860: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80020864: jal         0x8001D638
    // 0x80020868: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x80020868: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8002086C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80020870: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80020874: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80020878: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002087C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80020880: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80020884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020888: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8002088C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80020890: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80020894: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x80020898: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8002089C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800208A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800208A4: jal         0x80036E70
    // 0x800208A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x800208A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800208AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800208B0: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800208B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800208B8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800208BC: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800208C0: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x800208C4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800208C8: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x800208CC: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x800208D0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800208D4: lhu         $t0, 0x4E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4E);
    // 0x800208D8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800208DC: nop

    // 0x800208E0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800208E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800208E8: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800208EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800208F0: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x800208F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800208F8: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x800208FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020900: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80020904: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020908: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x8002090C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020910: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020914: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80020918: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x8002091C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80020920: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80020924: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80020928: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x8002092C: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80020930: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80020934: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80020938: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8002093C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80020940: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80020944: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80020948: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8002094C: jal         0x80037188
    // 0x80020950: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x80020950: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80020954: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80020958: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8002095C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020960: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80020964: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80020968: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8002096C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80020970: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80020974: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80020978: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8002097C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020980: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80020984: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80020988: nop

    // 0x8002098C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80020990: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80020994: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80020998: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8002099C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800209A0: jal         0x8005F96C
    // 0x800209A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_4;
    // 0x800209A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x800209A8: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x800209AC: lb          $s0, 0x7441($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7441);
    // 0x800209B0: nop

    // 0x800209B4: beq         $s0, $zero, L_800209D0
    if (ctx->r16 == 0) {
        // 0x800209B8: nop
    
            goto L_800209D0;
    }
    // 0x800209B8: nop

    // 0x800209BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800209C0: beq         $s0, $at, L_80020B64
    if (ctx->r16 == ctx->r1) {
        // 0x800209C4: nop
    
            goto L_80020B64;
    }
    // 0x800209C4: nop

    // 0x800209C8: b           L_80020C2C
    // 0x800209CC: nop

        goto L_80020C2C;
    // 0x800209CC: nop

L_800209D0:
    // 0x800209D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800209D4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800209D8: addiu       $a1, $a1, -0x43A0
    ctx->r5 = ADD32(ctx->r5, -0X43A0);
    // 0x800209DC: jal         0x80036BE4
    // 0x800209E0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800209E0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_5:
    // 0x800209E4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800209E8: jal         0x8005F9EC
    // 0x800209EC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_6;
    // 0x800209EC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_6:
    // 0x800209F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800209F4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800209F8: addiu       $a1, $a1, -0x438C
    ctx->r5 = ADD32(ctx->r5, -0X438C);
    // 0x800209FC: jal         0x80036BE4
    // 0x80020A00: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x80020A00: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_7:
    // 0x80020A04: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020A08: jal         0x8005F9EC
    // 0x80020A0C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_8;
    // 0x80020A0C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_8:
    // 0x80020A10: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80020A14:
    // 0x80020A14: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80020A18: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80020A1C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80020A20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80020A24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80020A28: addiu       $t0, $t0, 0x6E28
    ctx->r8 = ADD32(ctx->r8, 0X6E28);
    // 0x80020A2C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80020A30: lw          $t2, 0x74($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X74);
    // 0x80020A34: lw          $a3, 0x70($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X70);
    // 0x80020A38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80020A3C: lw          $t3, 0x78($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X78);
    // 0x80020A40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020A44: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80020A48: lw          $t4, 0x7C($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X7C);
    // 0x80020A4C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020A50: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80020A54: lw          $t5, 0x80($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X80);
    // 0x80020A58: addiu       $a1, $a1, -0x4374
    ctx->r5 = ADD32(ctx->r5, -0X4374);
    // 0x80020A5C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80020A60: lw          $t6, 0x6C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X6C);
    // 0x80020A64: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x80020A68: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80020A6C: lw          $t7, 0x68($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X68);
    // 0x80020A70: addiu       $a2, $t8, 0x1
    ctx->r6 = ADD32(ctx->r24, 0X1);
    // 0x80020A74: jal         0x80036BE4
    // 0x80020A78: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80020A78: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_9:
    // 0x80020A7C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80020A80: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020A84: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x80020A88: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80020A8C: jal         0x8005F9EC
    // 0x80020A90: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_10;
    // 0x80020A90: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_10:
    // 0x80020A94: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80020A98: nop

    // 0x80020A9C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80020AA0: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80020AA4: bne         $at, $zero, L_80020A14
    if (ctx->r1 != 0) {
        // 0x80020AA8: sw          $t0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r8;
            goto L_80020A14;
    }
    // 0x80020AA8: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x80020AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020AB0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020AB4: addiu       $a1, $a1, -0x4354
    ctx->r5 = ADD32(ctx->r5, -0X4354);
    // 0x80020AB8: jal         0x80036BE4
    // 0x80020ABC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x80020ABC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_11:
    // 0x80020AC0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020AC4: jal         0x8005F9EC
    // 0x80020AC8: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_12;
    // 0x80020AC8: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_12:
    // 0x80020ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020AD0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020AD4: addiu       $a1, $a1, -0x4344
    ctx->r5 = ADD32(ctx->r5, -0X4344);
    // 0x80020AD8: jal         0x80036BE4
    // 0x80020ADC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x80020ADC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_13:
    // 0x80020AE0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020AE4: jal         0x8005F9EC
    // 0x80020AE8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    Debug_PrintXY(rdram, ctx);
        goto after_14;
    // 0x80020AE8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_14:
    // 0x80020AEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020AF0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020AF4: addiu       $a1, $a1, -0x4334
    ctx->r5 = ADD32(ctx->r5, -0X4334);
    // 0x80020AF8: jal         0x80036BE4
    // 0x80020AFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_15;
    // 0x80020AFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_15:
    // 0x80020B00: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020B04: jal         0x8005F9EC
    // 0x80020B08: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    Debug_PrintXY(rdram, ctx);
        goto after_16;
    // 0x80020B08: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_16:
    // 0x80020B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020B10: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020B14: addiu       $a1, $a1, -0x4320
    ctx->r5 = ADD32(ctx->r5, -0X4320);
    // 0x80020B18: jal         0x80036BE4
    // 0x80020B1C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_17;
    // 0x80020B1C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_17:
    // 0x80020B20: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80020B24: jal         0x8005F9EC
    // 0x80020B28: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    Debug_PrintXY(rdram, ctx);
        goto after_18;
    // 0x80020B28: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_18:
    // 0x80020B2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020B30: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020B34: addiu       $a1, $a1, -0x430C
    ctx->r5 = ADD32(ctx->r5, -0X430C);
    // 0x80020B38: jal         0x80036BE4
    // 0x80020B3C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_19;
    // 0x80020B3C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_19:
    // 0x80020B40: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020B44: lb          $a1, 0x7440($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X7440);
    // 0x80020B48: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80020B4C: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x80020B50: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80020B54: jal         0x8005F9EC
    // 0x80020B58: addiu       $a1, $a1, 0x90
    ctx->r5 = ADD32(ctx->r5, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_20;
    // 0x80020B58: addiu       $a1, $a1, 0x90
    ctx->r5 = ADD32(ctx->r5, 0X90);
    after_20:
    // 0x80020B5C: b           L_80020C2C
    // 0x80020B60: nop

        goto L_80020C2C;
    // 0x80020B60: nop

L_80020B64:
    // 0x80020B64: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80020B68:
    // 0x80020B68: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_80020B6C:
    // 0x80020B6C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80020B70: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80020B74: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x80020B78: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80020B7C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80020B80: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x80020B84: lbu         $a2, 0x704E($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X704E);
    // 0x80020B88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020B8C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020B90: addiu       $a1, $a1, -0x4308
    ctx->r5 = ADD32(ctx->r5, -0X4308);
    // 0x80020B94: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x80020B98: jal         0x80036BE4
    // 0x80020B9C: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    sprintf_recomp(rdram, ctx);
        goto after_21;
    // 0x80020B9C: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_21:
    // 0x80020BA0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80020BA4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80020BA8: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x80020BAC: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80020BB0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80020BB4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80020BB8: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80020BBC: jal         0x8005F9EC
    // 0x80020BC0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_22;
    // 0x80020BC0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_22:
    // 0x80020BC4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80020BC8: nop

    // 0x80020BCC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80020BD0: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x80020BD4: bne         $at, $zero, L_80020B6C
    if (ctx->r1 != 0) {
        // 0x80020BD8: sw          $t9, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r25;
            goto L_80020B6C;
    }
    // 0x80020BD8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80020BDC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80020BE0: nop

    // 0x80020BE4: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80020BE8: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80020BEC: bne         $at, $zero, L_80020B68
    if (ctx->r1 != 0) {
        // 0x80020BF0: sw          $t2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r10;
            goto L_80020B68;
    }
    // 0x80020BF0: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x80020BF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80020BF8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020BFC: addiu       $a1, $a1, -0x4304
    ctx->r5 = ADD32(ctx->r5, -0X4304);
    // 0x80020C00: jal         0x80036BE4
    // 0x80020C04: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_23;
    // 0x80020C04: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_23:
    // 0x80020C08: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80020C0C: lb          $a1, 0x7440($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X7440);
    // 0x80020C10: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80020C14: sll         $t3, $a1, 4
    ctx->r11 = S32(ctx->r5 << 4);
    // 0x80020C18: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80020C1C: jal         0x8005F9EC
    // 0x80020C20: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_24;
    // 0x80020C20: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_24:
    // 0x80020C24: b           L_80020C2C
    // 0x80020C28: nop

        goto L_80020C2C;
    // 0x80020C28: nop

L_80020C2C:
    // 0x80020C2C: b           L_80020C34
    // 0x80020C30: nop

        goto L_80020C34;
    // 0x80020C30: nop

L_80020C34:
    // 0x80020C34: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80020C38: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80020C3C: jr          $ra
    // 0x80020C40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80020C40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800031FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800031FC: jr          $ra
    // 0x80003200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80003200: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80003204: jr          $ra
    // 0x80003208: nop

    return;
    // 0x80003208: nop

    // 0x8000320C: jr          $ra
    // 0x80003210: nop

    return;
    // 0x80003210: nop

;}
RECOMP_FUNC void func_80000F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000F8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80000F98: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80000F9C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80000FA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80000FA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80000FA8: lw          $t8, 0x10F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X10F0);
    // 0x80000FAC: lui         $at, 0x7FCC
    ctx->r1 = S32(0X7FCC << 16);
    // 0x80000FB0: ori         $at, $at, 0x6000
    ctx->r1 = ctx->r1 | 0X6000;
    // 0x80000FB4: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80000FB8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80000FBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80000FC0: lui         $t1, 0x21
    ctx->r9 = S32(0X21 << 16);
    // 0x80000FC4: addiu       $t1, $t1, -0xA50
    ctx->r9 = ADD32(ctx->r9, -0XA50);
    // 0x80000FC8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80000FCC: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x80000FD0: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    // 0x80000FD4: jal         0x8000068C
    // 0x80000FD8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000FD8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x80000FDC: b           L_80000FE4
    // 0x80000FE0: nop

        goto L_80000FE4;
    // 0x80000FE0: nop

L_80000FE4:
    // 0x80000FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000FEC: jr          $ra
    // 0x80000FF0: nop

    return;
    // 0x80000FF0: nop

;}
RECOMP_FUNC void Debug_SetupSetMode(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002F004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F008: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F00C: sb          $zero, 0x7688($at)
    MEM_B(0X7688, ctx->r1) = 0;
    // 0x8002F010: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F014: sb          $zero, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = 0;
    // 0x8002F018: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002F01C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F020: sb          $t6, 0x768A($at)
    MEM_B(0X768A, ctx->r1) = ctx->r14;
    // 0x8002F024: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x8002F028: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F02C: sh          $t7, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r15;
    // 0x8002F030: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F034: sb          $zero, 0x769E($at)
    MEM_B(0X769E, ctx->r1) = 0;
    // 0x8002F038: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F03C: sh          $zero, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = 0;
    // 0x8002F040: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F044: sh          $zero, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = 0;
    // 0x8002F048: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F04C: sh          $zero, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = 0;
    // 0x8002F050: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F054: sh          $zero, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = 0;
    // 0x8002F058: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F05C: sh          $zero, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = 0;
    // 0x8002F060: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F064: sh          $zero, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = 0;
    // 0x8002F068: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F06C: sh          $zero, 0x76A2($at)
    MEM_H(0X76A2, ctx->r1) = 0;
    // 0x8002F070: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8002F074:
    // 0x8002F074: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8002F078: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F07C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8002F080: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002F084: sw          $zero, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = 0;
    // 0x8002F088: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8002F08C: nop

    // 0x8002F090: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8002F094: slti        $at, $t1, 0x2BC
    ctx->r1 = SIGNED(ctx->r9) < 0X2BC ? 1 : 0;
    // 0x8002F098: bne         $at, $zero, L_8002F074
    if (ctx->r1 != 0) {
        // 0x8002F09C: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_8002F074;
    }
    // 0x8002F09C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8002F0A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8002F0A4: jal         0x8001E954
    // 0x8002F0A8: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_0;
    // 0x8002F0A8: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_0:
    // 0x8002F0AC: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8002F0B0: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x8002F0B4: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x8002F0B8: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x8002F0BC: jal         0x8001E98C
    // 0x8002F0C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_1;
    // 0x8002F0C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8002F0C4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8002F0C8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8002F0CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F0D0: sw          $t2, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r10;
    // 0x8002F0D4: jal         0x80019C84
    // 0x8002F0D8: nop

    func_80019C84(rdram, ctx);
        goto after_2;
    // 0x8002F0D8: nop

    after_2:
    // 0x8002F0DC: jal         0x80019D2C
    // 0x8002F0E0: nop

    func_80019D2C(rdram, ctx);
        goto after_3;
    // 0x8002F0E0: nop

    after_3:
    // 0x8002F0E4: jal         0x8001A258
    // 0x8002F0E8: nop

    func_8001A258(rdram, ctx);
        goto after_4;
    // 0x8002F0E8: nop

    after_4:
    // 0x8002F0EC: jal         0x80088B80
    // 0x8002F0F0: nop

    func_80088B80(rdram, ctx);
        goto after_5;
    // 0x8002F0F0: nop

    after_5:
    // 0x8002F0F4: jal         0x8001E954
    // 0x8002F0F8: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    Set_DecompressHeap(rdram, ctx);
        goto after_6;
    // 0x8002F0F8: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    after_6:
    // 0x8002F0FC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002F100: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x8002F104: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8002F108: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002F10C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002F110: lw          $t5, -0x7DC8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7DC8);
    // 0x8002F114: nop

    // 0x8002F118: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8002F11C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F120: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8002F124: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x8002F128: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8002F12C: jal         0x8001EA68
    // 0x8002F130: nop

    DecompressFile(rdram, ctx);
        goto after_7;
    // 0x8002F130: nop

    after_7:
    // 0x8002F134: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F138: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x8002F13C: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x8002F140: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x8002F144: jal         0x8001EB68
    // 0x8002F148: nop

    func_8001EB68(rdram, ctx);
        goto after_8;
    // 0x8002F148: nop

    after_8:
    // 0x8002F14C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002F150: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x8002F154: jal         0x80000FF4
    // 0x8002F158: nop

    func_80000FF4(rdram, ctx);
        goto after_9;
    // 0x8002F158: nop

    after_9:
    // 0x8002F15C: jal         0x8006707C
    // 0x8002F160: nop

    func_8006707C(rdram, ctx);
        goto after_10;
    // 0x8002F160: nop

    after_10:
    // 0x8002F164: jal         0x800695A0
    // 0x8002F168: nop

    func_800695A0(rdram, ctx);
        goto after_11;
    // 0x8002F168: nop

    after_11:
    // 0x8002F16C: jal         0x8006E088
    // 0x8002F170: nop

    Skybox_LoadFromID(rdram, ctx);
        goto after_12;
    // 0x8002F170: nop

    after_12:
    // 0x8002F174: jal         0x8002629C
    // 0x8002F178: nop

    func_8002629C(rdram, ctx);
        goto after_13;
    // 0x8002F178: nop

    after_13:
    // 0x8002F17C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002F180: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x8002F184: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8002F188: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002F18C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002F190: lw          $t0, -0x4C04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4C04);
    // 0x8002F194: nop

    // 0x8002F198: lw          $t9, 0x24($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X24);
    // 0x8002F19C: nop

    // 0x8002F1A0: jalr        $t9
    // 0x8002F1A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x8002F1A4: nop

    after_14:
    // 0x8002F1A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002F1AC: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x8002F1B0: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8002F1B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002F1B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002F1BC: lw          $t3, -0x4C04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C04);
    // 0x8002F1C0: nop

    // 0x8002F1C4: lw          $t9, 0x28($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X28);
    // 0x8002F1C8: nop

    // 0x8002F1CC: jalr        $t9
    // 0x8002F1D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x8002F1D0: nop

    after_15:
    // 0x8002F1D4: jal         0x8002B670
    // 0x8002F1D8: nop

    func_8002B670(rdram, ctx);
        goto after_16;
    // 0x8002F1D8: nop

    after_16:
    // 0x8002F1DC: jal         0x8001E96C
    // 0x8002F1E0: nop

    Get_DecompressHeap(rdram, ctx);
        goto after_17;
    // 0x8002F1E0: nop

    after_17:
    // 0x8002F1E4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F1E8: sw          $v0, 0x768C($at)
    MEM_W(0X768C, ctx->r1) = ctx->r2;
    // 0x8002F1EC: jal         0x8002D538
    // 0x8002F1F0: nop

    func_8002D538(rdram, ctx);
        goto after_18;
    // 0x8002F1F0: nop

    after_18:
    // 0x8002F1F4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002F1F8: lw          $t4, -0x1BD8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BD8);
    // 0x8002F1FC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8002F200: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002F204: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002F208: lw          $t6, -0x7DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7DC8);
    // 0x8002F20C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002F210: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8002F214: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002F218: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8002F21C: nop

    // 0x8002F220: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002F224: nop

    // 0x8002F228: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002F22C: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x8002F230: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002F234: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x8002F238: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8002F23C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002F240: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002F244: lw          $t3, -0x7DC8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7DC8);
    // 0x8002F248: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002F24C: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8002F250: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002F254: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x8002F258: nop

    // 0x8002F25C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8002F260: nop

    // 0x8002F264: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002F268: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x8002F26C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002F270: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8002F274: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8002F278: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002F27C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002F280: lw          $t8, -0x7DC8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7DC8);
    // 0x8002F284: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002F288: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x8002F28C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002F290: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x8002F294: nop

    // 0x8002F298: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8002F29C: nop

    // 0x8002F2A0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002F2A4: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x8002F2A8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002F2AC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002F2B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002F2B4: nop

    // 0x8002F2B8: swc1        $f4, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f4.u32l;
    // 0x8002F2BC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002F2C0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002F2C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002F2C8: nop

    // 0x8002F2CC: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x8002F2D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002F2D4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8002F2D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002F2DC: nop

    // 0x8002F2E0: swc1        $f8, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f8.u32l;
    // 0x8002F2E4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8002F2E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F2EC: sw          $t5, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r13;
    // 0x8002F2F0: jal         0x80076458
    // 0x8002F2F4: nop

    func_80076458(rdram, ctx);
        goto after_19;
    // 0x8002F2F4: nop

    after_19:
    // 0x8002F2F8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8002F2FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8002F300: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8002F304: jal         0x8001D244
    // 0x8002F308: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_20;
    // 0x8002F308: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_20:
    // 0x8002F30C: jal         0x8001D284
    // 0x8002F310: nop

    func_8001D284(rdram, ctx);
        goto after_21;
    // 0x8002F310: nop

    after_21:
    // 0x8002F314: b           L_8002F31C
    // 0x8002F318: nop

        goto L_8002F31C;
    // 0x8002F318: nop

L_8002F31C:
    // 0x8002F31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002F324: jr          $ra
    // 0x8002F328: nop

    return;
    // 0x8002F328: nop

;}
RECOMP_FUNC void func_80001508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000150C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001510: lui         $t6, 0x1B
    ctx->r14 = S32(0X1B << 16);
    // 0x80001514: lui         $t7, 0x1C
    ctx->r15 = S32(0X1C << 16);
    // 0x80001518: addiu       $t7, $t7, -0x3B20
    ctx->r15 = ADD32(ctx->r15, -0X3B20);
    // 0x8000151C: addiu       $t6, $t6, 0x6C30
    ctx->r14 = ADD32(ctx->r14, 0X6C30);
    // 0x80001520: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001524: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001528: jal         0x8000068C
    // 0x8000152C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8000152C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001530: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001534: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001538: addiu       $t9, $t9, -0x57D0
    ctx->r25 = ADD32(ctx->r25, -0X57D0);
    // 0x8000153C: addiu       $t8, $t8, -0x66C0
    ctx->r24 = ADD32(ctx->r24, -0X66C0);
    // 0x80001540: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001544: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001548: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8000154C: jal         0x8000068C
    // 0x80001550: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001550: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001554: b           L_8000155C
    // 0x80001558: nop

        goto L_8000155C;
    // 0x80001558: nop

L_8000155C:
    // 0x8000155C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001564: jr          $ra
    // 0x80001568: nop

    return;
    // 0x80001568: nop

;}
RECOMP_FUNC void hgetc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B00: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80014B04: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80014B08: nop

    // 0x80014B0C: bne         $t6, $zero, L_80014B1C
    if (ctx->r14 != 0) {
        // 0x80014B10: nop
    
            goto L_80014B1C;
    }
    // 0x80014B10: nop

    // 0x80014B14: b           L_80014B64
    // 0x80014B18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80014B64;
    // 0x80014B18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80014B1C:
    // 0x80014B1C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80014B20: nop

    // 0x80014B24: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80014B28: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80014B2C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80014B30: nop

    // 0x80014B34: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80014B38: nop

    // 0x80014B3C: sh          $t0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r8;
    // 0x80014B40: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80014B44: nop

    // 0x80014B48: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80014B4C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80014B50: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
    // 0x80014B54: b           L_80014B64
    // 0x80014B58: nop

        goto L_80014B64;
    // 0x80014B58: nop

    // 0x80014B5C: b           L_80014B64
    // 0x80014B60: nop

        goto L_80014B64;
    // 0x80014B60: nop

L_80014B64:
    // 0x80014B64: jr          $ra
    // 0x80014B68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80014B68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void __voiceNeedsNoteKill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D118: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003D11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D120: lw          $a3, 0x50($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X50);
    // 0x8003D124: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8003D128: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8003D12C: beq         $a3, $zero, L_8003D1AC
    if (ctx->r7 == 0) {
        // 0x8003D130: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8003D1AC;
    }
    // 0x8003D130: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003D134: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_8003D138:
    // 0x8003D138: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8003D13C: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x8003D140: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8003D144: bne         $a0, $t6, L_8003D1A4
    if (ctx->r4 != ctx->r14) {
        // 0x8003D148: addu        $t0, $t0, $v1
        ctx->r8 = ADD32(ctx->r8, ctx->r3);
            goto L_8003D1A4;
    }
    // 0x8003D148: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x8003D14C: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x8003D150: bne         $a1, $t7, L_8003D1A4
    if (ctx->r5 != ctx->r15) {
        // 0x8003D154: slt         $at, $a2, $t0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_8003D1A4;
    }
    // 0x8003D154: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003D158: beq         $at, $zero, L_8003D19C
    if (ctx->r1 == 0) {
        // 0x8003D15C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8003D19C;
    }
    // 0x8003D15C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8003D160: beql        $v0, $zero, L_8003D178
    if (ctx->r2 == 0) {
        // 0x8003D164: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8003D178;
    }
    goto skip_0;
    // 0x8003D164: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    skip_0:
    // 0x8003D168: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8003D16C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8003D170: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8003D174: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
L_8003D178:
    // 0x8003D178: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x8003D17C: jal         0x800357B0
    // 0x8003D180: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x8003D180: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_0:
    // 0x8003D184: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8003D188: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D18C: jal         0x800357E0
    // 0x8003D190: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    alLink(rdram, ctx);
        goto after_1;
    // 0x8003D190: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    after_1:
    // 0x8003D194: b           L_8003D1AC
    // 0x8003D198: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
        goto L_8003D1AC;
    // 0x8003D198: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
L_8003D19C:
    // 0x8003D19C: b           L_8003D1AC
    // 0x8003D1A0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_8003D1AC;
    // 0x8003D1A0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_8003D1A4:
    // 0x8003D1A4: bne         $v0, $zero, L_8003D138
    if (ctx->r2 != 0) {
        // 0x8003D1A8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8003D138;
    }
    // 0x8003D1A8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_8003D1AC:
    // 0x8003D1AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D1B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003D1B4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8003D1B8: jr          $ra
    // 0x8003D1BC: nop

    return;
    // 0x8003D1BC: nop

;}
RECOMP_FUNC void alSeqpNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E564: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003E568: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E56C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003E570: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003E574: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x8003E578: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8003E57C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8003E580: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8003E584: lw          $t6, -0x4AF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4AF0);
    // 0x8003E588: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8003E58C: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x8003E590: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x8003E594: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8003E598: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x8003E59C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8003E5A0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8003E5A4: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x8003E5A8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8003E5AC: lbu         $t0, 0x9($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X9);
    // 0x8003E5B0: addiu       $t1, $zero, 0x3E80
    ctx->r9 = ADD32(0, 0X3E80);
    // 0x8003E5B4: sw          $t1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r9;
    // 0x8003E5B8: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8003E5BC: sb          $t0, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r8;
    // 0x8003E5C0: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x8003E5C4: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x8003E5C8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8003E5CC: sw          $t2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r10;
    // 0x8003E5D0: lw          $t3, 0x14($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X14);
    // 0x8003E5D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003E5D8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8003E5DC: sw          $t3, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r11;
    // 0x8003E5E0: lw          $t4, 0x18($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X18);
    // 0x8003E5E4: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x8003E5E8: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x8003E5EC: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x8003E5F0: sh          $t5, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r13;
    // 0x8003E5F4: sw          $t4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r12;
    // 0x8003E5F8: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x8003E5FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E600: sb          $t6, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r14;
    // 0x8003E604: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x8003E608: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003E60C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003E610: jal         0x80035870
    // 0x8003E614: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8003E614: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003E618: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x8003E61C: jal         0x8003E4F4
    // 0x8003E620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __initChanState(rdram, ctx);
        goto after_1;
    // 0x8003E620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003E624: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8003E628: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x8003E62C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8003E630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003E634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E638: jal         0x80035870
    // 0x8003E63C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8003E63C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8003E640: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x8003E644: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8003E648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003E64C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E650: blez        $t9, L_8003E680
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8003E654: addiu       $t2, $zero, 0x1C
        ctx->r10 = ADD32(0, 0X1C);
            goto L_8003E680;
    }
    // 0x8003E654: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x8003E658: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003E65C: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
L_8003E660:
    // 0x8003E660: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003E664: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8003E668: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x8003E66C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8003E670: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x8003E674: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003E678: bnel        $at, $zero, L_8003E660
    if (ctx->r1 != 0) {
        // 0x8003E67C: lw          $t0, 0x6C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X6C);
            goto L_8003E660;
    }
    goto skip_0;
    // 0x8003E67C: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_8003E680:
    // 0x8003E680: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8003E684: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x8003E688: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x8003E68C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003E690: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E694: jal         0x80035870
    // 0x8003E698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8003E698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8003E69C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x8003E6A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003E6A4: jal         0x8003E9BC
    // 0x8003E6A8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    alEvtqNew(rdram, ctx);
        goto after_4;
    // 0x8003E6A8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x8003E6AC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x8003E6B0: addiu       $t3, $t3, -0x2234
    ctx->r11 = ADD32(ctx->r11, -0X2234);
    // 0x8003E6B4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8003E6B8: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x8003E6BC: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x8003E6C0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8003E6C4: lw          $a0, -0x4AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AF0);
    // 0x8003E6C8: jal         0x8003EA30
    // 0x8003E6CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynAddPlayer(rdram, ctx);
        goto after_5;
    // 0x8003E6CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8003E6D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E6D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E6D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003E6DC: jr          $ra
    // 0x8003E6E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003E6E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80011424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011424: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80011428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001142C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80011430: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80011434: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80011438: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8001143C: nop

    // 0x80011440: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x80011444: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80011448: nop

    // 0x8001144C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80011450: nop

    // 0x80011454: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80011458: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001145C: jal         0x80010098
    // 0x80011460: nop

    func_80010098(rdram, ctx);
        goto after_0;
    // 0x80011460: nop

    after_0:
    // 0x80011464: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80011468: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8001146C: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x80011470: nop

    // 0x80011474: blez        $t0, L_800117E0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80011478: nop
    
            goto L_800117E0;
    }
    // 0x80011478: nop

L_8001147C:
    // 0x8001147C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80011480: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x80011484: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80011488: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x8001148C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80011490: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80011494: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80011498: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8001149C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800114A0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800114A4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x800114A8: nop

    // 0x800114AC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800114B0: nop

    // 0x800114B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800114B8: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x800114BC: nop

    // 0x800114C0: bc1t        L_800114EC
    if (c1cs) {
        // 0x800114C4: nop
    
            goto L_800114EC;
    }
    // 0x800114C4: nop

    // 0x800114C8: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x800114CC: nop

    // 0x800114D0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800114D4: nop

    // 0x800114D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800114DC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x800114E0: nop

    // 0x800114E4: bc1f        L_800114F4
    if (!c1cs) {
        // 0x800114E8: nop
    
            goto L_800114F4;
    }
    // 0x800114E8: nop

L_800114EC:
    // 0x800114EC: b           L_800117BC
    // 0x800114F0: nop

        goto L_800117BC;
    // 0x800114F0: nop

L_800114F4:
    // 0x800114F4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800114F8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800114FC: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80011500: nop

    // 0x80011504: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80011508: nop

    // 0x8001150C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80011510: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80011514: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80011518: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8001151C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80011520: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80011524: nop

    // 0x80011528: bne         $t3, $at, L_80011774
    if (ctx->r11 != ctx->r1) {
        // 0x8001152C: nop
    
            goto L_80011774;
    }
    // 0x8001152C: nop

    // 0x80011530: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80011534: nop

    // 0x80011538: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x8001153C: nop

    // 0x80011540: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80011544: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80011548: nop

    // 0x8001154C: lw          $t7, 0x14($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X14);
    // 0x80011550: nop

    // 0x80011554: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80011558: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001155C: nop

    // 0x80011560: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80011564: nop

    // 0x80011568: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8001156C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80011570: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80011574: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80011578: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001157C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80011580: nop

    // 0x80011584: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80011588: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8001158C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80011590: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80011594: nop

    // 0x80011598: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001159C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800115A0: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x800115A4: bne         $at, $zero, L_800115F4
    if (ctx->r1 != 0) {
        // 0x800115A8: sw          $t1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r9;
            goto L_800115F4;
    }
    // 0x800115A8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
L_800115AC:
    // 0x800115AC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800115B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800115B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800115B8: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x800115BC: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x800115C0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800115C4: nop

    // 0x800115C8: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800115CC: beq         $at, $zero, L_800115DC
    if (ctx->r1 == 0) {
        // 0x800115D0: nop
    
            goto L_800115DC;
    }
    // 0x800115D0: nop

    // 0x800115D4: b           L_800115F4
    // 0x800115D8: nop

        goto L_800115F4;
    // 0x800115D8: nop

L_800115DC:
    // 0x800115DC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800115E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800115E4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800115E8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800115EC: bne         $at, $zero, L_800115AC
    if (ctx->r1 != 0) {
        // 0x800115F0: sw          $t0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r8;
            goto L_800115AC;
    }
    // 0x800115F0: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
L_800115F4:
    // 0x800115F4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800115F8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800115FC: nop

    // 0x80011600: bne         $t3, $t4, L_80011640
    if (ctx->r11 != ctx->r12) {
        // 0x80011604: nop
    
            goto L_80011640;
    }
    // 0x80011604: nop

    // 0x80011608: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8001160C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80011610: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80011614: nop

    // 0x80011618: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001161C: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x80011620: nop

    // 0x80011624: bc1f        L_80011640
    if (!c1cs) {
        // 0x80011628: nop
    
            goto L_80011640;
    }
    // 0x80011628: nop

    // 0x8001162C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80011630: nop

    // 0x80011634: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80011638: b           L_80011640
    // 0x8001163C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
        goto L_80011640;
    // 0x8001163C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80011640:
    // 0x80011640: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80011644: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80011648: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8001164C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80011650: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80011654: lw          $t1, -0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X4);
    // 0x80011658: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x8001165C: nop

    // 0x80011660: beq         $t1, $t4, L_800116AC
    if (ctx->r9 == ctx->r12) {
        // 0x80011664: nop
    
            goto L_800116AC;
    }
    // 0x80011664: nop

    // 0x80011668: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8001166C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80011670: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80011674: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x80011678: lw          $t6, -0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, -0X4);
    // 0x8001167C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80011680: nop

    // 0x80011684: sw          $t6, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->r14;
    // 0x80011688: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8001168C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80011690: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80011694: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80011698: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001169C: lw          $a1, -0x4($t5)
    ctx->r5 = MEM_W(ctx->r13, -0X4);
    // 0x800116A0: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    // 0x800116A4: jal         0x80010E0C
    // 0x800116A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80010E0C(rdram, ctx);
        goto after_1;
    // 0x800116A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800116AC:
    // 0x800116AC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800116B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800116B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800116B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800116BC: addu        $t6, $t2, $t8
    ctx->r14 = ADD32(ctx->r10, ctx->r24);
    // 0x800116C0: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x800116C4: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x800116C8: nop

    // 0x800116CC: beq         $t9, $t1, L_80011718
    if (ctx->r25 == ctx->r9) {
        // 0x800116D0: nop
    
            goto L_80011718;
    }
    // 0x800116D0: nop

    // 0x800116D4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800116D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800116DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800116E0: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x800116E4: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x800116E8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800116EC: nop

    // 0x800116F0: sw          $t2, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->r10;
    // 0x800116F4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800116F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800116FC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80011700: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80011704: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x80011708: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x8001170C: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x80011710: jal         0x80010E0C
    // 0x80011714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80010E0C(rdram, ctx);
        goto after_2;
    // 0x80011714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_80011718:
    // 0x80011718: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8001171C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80011720: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80011724: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x80011728: lw          $t6, -0x4($t2)
    ctx->r14 = MEM_W(ctx->r10, -0X4);
    // 0x8001172C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80011730: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80011734: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x80011738: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001173C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80011740: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80011744: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80011748: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8001174C: nop

    // 0x80011750: div.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80011754: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80011758: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8001175C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80011760: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    // 0x80011764: jal         0x80011084
    // 0x80011768: nop

    func_80011084(rdram, ctx);
        goto after_3;
    // 0x80011768: nop

    after_3:
    // 0x8001176C: b           L_800117BC
    // 0x80011770: nop

        goto L_800117BC;
    // 0x80011770: nop

L_80011774:
    // 0x80011774: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80011778: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x8001177C: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x80011780: nop

    // 0x80011784: bne         $t4, $at, L_800117BC
    if (ctx->r12 != ctx->r1) {
        // 0x80011788: nop
    
            goto L_800117BC;
    }
    // 0x80011788: nop

    // 0x8001178C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80011790: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80011794: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x80011798: jal         0x800108D0
    // 0x8001179C: nop

    func_800108D0(rdram, ctx);
        goto after_4;
    // 0x8001179C: nop

    after_4:
    // 0x800117A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800117A4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800117A8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800117AC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800117B0: lw          $a1, 0x10($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X10);
    // 0x800117B4: jal         0x800111D4
    // 0x800117B8: nop

    func_800111D4(rdram, ctx);
        goto after_5;
    // 0x800117B8: nop

    after_5:
L_800117BC:
    // 0x800117BC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800117C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800117C4: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x800117C8: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x800117CC: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x800117D0: nop

    // 0x800117D4: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800117D8: bne         $at, $zero, L_8001147C
    if (ctx->r1 != 0) {
        // 0x800117DC: nop
    
            goto L_8001147C;
    }
    // 0x800117DC: nop

L_800117E0:
    // 0x800117E0: b           L_800117E8
    // 0x800117E4: nop

        goto L_800117E8;
    // 0x800117E4: nop

L_800117E8:
    // 0x800117E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800117EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800117F0: jr          $ra
    // 0x800117F4: nop

    return;
    // 0x800117F4: nop

;}
RECOMP_FUNC void alResampleNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F35C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003F364: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F368: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8003F36C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F370: addiu       $a2, $a2, 0x750
    ctx->r6 = ADD32(ctx->r6, 0X750);
    // 0x8003F374: addiu       $a1, $a1, 0x83C
    ctx->r5 = ADD32(ctx->r5, 0X83C);
    // 0x8003F378: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003F37C: jal         0x80046400
    // 0x8003F380: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F380: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8003F384: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8003F388: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003F38C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F394: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8003F398: jal         0x80035870
    // 0x8003F39C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8003F39C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8003F3A0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8003F3A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003F3A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8003F3AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003F3B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003F3B4: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8003F3B8: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x8003F3BC: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x8003F3C0: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x8003F3C4: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x8003F3C8: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8003F3CC: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x8003F3D0: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x8003F3D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F3D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003F3DC: jr          $ra
    // 0x8003F3E0: nop

    return;
    // 0x8003F3E0: nop

;}
RECOMP_FUNC void Math_Random(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014E80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80014E84: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80014E88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80014E8C: lh          $t6, -0x1F6E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F6E);
    // 0x80014E90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80014E94: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80014E98: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80014E9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80014EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80014EA4: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80014EA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80014EAC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80014EB0: sh          $t9, -0x1F6E($at)
    MEM_H(-0X1F6E, ctx->r1) = ctx->r25;
    // 0x80014EB4: bne         $a0, $zero, L_80014ED4
    if (ctx->r4 != 0) {
        // 0x80014EB8: nop
    
            goto L_80014ED4;
    }
    // 0x80014EB8: nop

    // 0x80014EBC: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80014EC0: lh          $v0, -0x1F6E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1F6E);
    // 0x80014EC4: jr          $ra
    // 0x80014EC8: nop

    return;
    // 0x80014EC8: nop

    // 0x80014ECC: b           L_80014F40
    // 0x80014ED0: nop

        goto L_80014F40;
    // 0x80014ED0: nop

L_80014ED4:
    // 0x80014ED4: blez        $a0, L_80014F14
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80014ED8: nop
    
            goto L_80014F14;
    }
    // 0x80014ED8: nop

    // 0x80014EDC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80014EE0: lhu         $t0, -0x1F6E($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1F6E);
    // 0x80014EE4: nop

    // 0x80014EE8: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014EEC: mflo        $v0
    ctx->r2 = lo;
    // 0x80014EF0: bgez        $v0, L_80014F04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80014EF4: sra         $t1, $v0, 16
        ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80014F04;
    }
    // 0x80014EF4: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80014EF8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80014EFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80014F00: sra         $t1, $at, 16
    ctx->r9 = S32(SIGNED(ctx->r1) >> 16);
L_80014F04:
    // 0x80014F04: jr          $ra
    // 0x80014F08: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x80014F08: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80014F0C: b           L_80014F40
    // 0x80014F10: nop

        goto L_80014F40;
    // 0x80014F10: nop

L_80014F14:
    // 0x80014F14: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80014F18: lh          $t2, -0x1F6E($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F6E);
    // 0x80014F1C: nop

    // 0x80014F20: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014F24: mflo        $v0
    ctx->r2 = lo;
    // 0x80014F28: bgez        $v0, L_80014F38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80014F2C: sra         $t3, $v0, 15
        ctx->r11 = S32(SIGNED(ctx->r2) >> 15);
            goto L_80014F38;
    }
    // 0x80014F2C: sra         $t3, $v0, 15
    ctx->r11 = S32(SIGNED(ctx->r2) >> 15);
    // 0x80014F30: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80014F34: sra         $t3, $at, 15
    ctx->r11 = S32(SIGNED(ctx->r1) >> 15);
L_80014F38:
    // 0x80014F38: jr          $ra
    // 0x80014F3C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x80014F3C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80014F40:
    // 0x80014F40: jr          $ra
    // 0x80014F44: nop

    return;
    // 0x80014F44: nop

    // 0x80014F48: jr          $ra
    // 0x80014F4C: nop

    return;
    // 0x80014F4C: nop

;}
RECOMP_FUNC void func_80025428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025428: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002542C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80025430: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025434: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025438: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8002543C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025440: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025444: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025448: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002544C: sb          $a1, 0x7494($at)
    MEM_B(0X7494, ctx->r1) = ctx->r5;
    // 0x80025450: b           L_80025458
    // 0x80025454: nop

        goto L_80025458;
    // 0x80025454: nop

L_80025458:
    // 0x80025458: jr          $ra
    // 0x8002545C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002545C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void guRotate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037434: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80037438: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8003743C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80037440: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80037444: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80037448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003744C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80037450: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80037454: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80037458: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8003745C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80037460: jal         0x800372A0
    // 0x80037464: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x80037464: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80037468: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8003746C: jal         0x800360F0
    // 0x80037470: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80037470: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x80037474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80037478: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8003747C: jr          $ra
    // 0x80037480: nop

    return;
    // 0x80037480: nop

;}
RECOMP_FUNC void __lookupSoundQuick(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D4B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003D4B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8003D4B8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8003D4BC: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8003D4C0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x8003D4C4: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8003D4C8: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x8003D4CC: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8003D4D0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8003D4D4: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x8003D4D8: lh          $t0, 0xE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XE);
    // 0x8003D4DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003D4E0: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8003D4E4: blez        $t0, L_8003D5A0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003D4E8: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_8003D5A0;
    }
    // 0x8003D4E8: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
L_8003D4EC:
    // 0x8003D4EC: bgez        $a1, L_8003D4FC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8003D4F0: sra         $t5, $a1, 1
        ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
            goto L_8003D4FC;
    }
    // 0x8003D4F0: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8003D4F4: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x8003D4F8: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8003D4FC:
    // 0x8003D4FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8003D500: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8003D504: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8003D508: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8003D50C: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x8003D510: lbu         $t2, 0x2($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X2);
    // 0x8003D514: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003D518: bnel        $at, $zero, L_8003D560
    if (ctx->r1 != 0) {
        // 0x8003D51C: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8003D560;
    }
    goto skip_0;
    // 0x8003D51C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_0:
    // 0x8003D520: lbu         $t8, 0x3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3);
    // 0x8003D524: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003D528: bnel        $at, $zero, L_8003D560
    if (ctx->r1 != 0) {
        // 0x8003D52C: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8003D560;
    }
    goto skip_1;
    // 0x8003D52C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_1:
    // 0x8003D530: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x8003D534: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8003D538: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003D53C: bnel        $at, $zero, L_8003D560
    if (ctx->r1 != 0) {
        // 0x8003D540: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8003D560;
    }
    goto skip_2;
    // 0x8003D540: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_2:
    // 0x8003D544: lbu         $t4, 0x1($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X1);
    // 0x8003D548: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003D54C: bnel        $at, $zero, L_8003D560
    if (ctx->r1 != 0) {
        // 0x8003D550: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8003D560;
    }
    goto skip_3;
    // 0x8003D550: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_3:
    // 0x8003D554: jr          $ra
    // 0x8003D558: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8003D558: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8003D55C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
L_8003D560:
    // 0x8003D560: bne         $at, $zero, L_8003D588
    if (ctx->r1 != 0) {
        // 0x8003D564: nop
    
            goto L_8003D588;
    }
    // 0x8003D564: nop

    // 0x8003D568: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8003D56C: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003D570: beql        $at, $zero, L_8003D594
    if (ctx->r1 == 0) {
        // 0x8003D574: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_8003D594;
    }
    goto skip_4;
    // 0x8003D574: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x8003D578: lbu         $t6, 0x3($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3);
    // 0x8003D57C: slt         $at, $t6, $t1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003D580: bnel        $at, $zero, L_8003D594
    if (ctx->r1 != 0) {
        // 0x8003D584: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_8003D594;
    }
    goto skip_5;
    // 0x8003D584: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_5:
L_8003D588:
    // 0x8003D588: b           L_8003D594
    // 0x8003D58C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
        goto L_8003D594;
    // 0x8003D58C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x8003D590: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_8003D594:
    // 0x8003D594: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003D598: beql        $at, $zero, L_8003D4EC
    if (ctx->r1 == 0) {
        // 0x8003D59C: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_8003D4EC;
    }
    goto skip_6;
    // 0x8003D59C: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_8003D5A0:
    // 0x8003D5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003D5A4: jr          $ra
    // 0x8003D5A8: nop

    return;
    // 0x8003D5A8: nop

;}
RECOMP_FUNC void Get_AngleToPlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002A478: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8002A47C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002A480: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002A484: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002A488: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002A48C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002A490: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002A494: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002A498: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002A49C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8002A4A0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002A4A4: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A4A8: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8002A4AC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002A4B0: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8002A4B4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A4B8: jal         0x80015634
    // 0x8002A4BC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x8002A4BC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8002A4C0: b           L_8002A4D0
    // 0x8002A4C4: nop

        goto L_8002A4D0;
    // 0x8002A4C4: nop

    // 0x8002A4C8: b           L_8002A4D0
    // 0x8002A4CC: nop

        goto L_8002A4D0;
    // 0x8002A4CC: nop

L_8002A4D0:
    // 0x8002A4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A4D8: jr          $ra
    // 0x8002A4DC: nop

    return;
    // 0x8002A4DC: nop

;}
RECOMP_FUNC void func_80013814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001381C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80013820: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80013824: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80013828: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001382C: blez        $t6, L_80013924
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80013830: nop
    
            goto L_80013924;
    }
    // 0x80013830: nop

L_80013834:
    // 0x80013834: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80013838: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001383C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80013840: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80013844: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80013848: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8001384C: bne         $t1, $at, L_800138B4
    if (ctx->r9 != ctx->r1) {
        // 0x80013850: nop
    
            goto L_800138B4;
    }
    // 0x80013850: nop

    // 0x80013854: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80013858: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001385C: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x80013860: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80013864: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80013868: nop

    // 0x8001386C: beq         $t6, $zero, L_800138AC
    if (ctx->r14 == 0) {
        // 0x80013870: nop
    
            goto L_800138AC;
    }
    // 0x80013870: nop

    // 0x80013874: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80013878: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8001387C: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x80013880: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80013884: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x80013888: jal         0x800309D0
    // 0x8001388C: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x8001388C: nop

    after_0:
    // 0x80013890: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80013894: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80013898: sll         $t2, $t3, 5
    ctx->r10 = S32(ctx->r11 << 5);
    // 0x8001389C: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800138A0: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x800138A4: jal         0x800309D0
    // 0x800138A8: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x800138A8: nop

    after_1:
L_800138AC:
    // 0x800138AC: b           L_8001390C
    // 0x800138B0: nop

        goto L_8001390C;
    // 0x800138B0: nop

L_800138B4:
    // 0x800138B4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800138B8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800138BC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800138C0: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800138C4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800138C8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x800138CC: bne         $t9, $at, L_8001390C
    if (ctx->r25 != ctx->r1) {
        // 0x800138D0: nop
    
            goto L_8001390C;
    }
    // 0x800138D0: nop

    // 0x800138D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800138D8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800138DC: sll         $t1, $t3, 5
    ctx->r9 = S32(ctx->r11 << 5);
    // 0x800138E0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800138E4: lw          $a0, 0x1C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1C);
    // 0x800138E8: jal         0x800309D0
    // 0x800138EC: nop

    free_game(rdram, ctx);
        goto after_2;
    // 0x800138EC: nop

    after_2:
    // 0x800138F0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800138F4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800138F8: sll         $t5, $t6, 5
    ctx->r13 = S32(ctx->r14 << 5);
    // 0x800138FC: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80013900: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    // 0x80013904: jal         0x800309D0
    // 0x80013908: nop

    free_game(rdram, ctx);
        goto after_3;
    // 0x80013908: nop

    after_3:
L_8001390C:
    // 0x8001390C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80013910: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80013914: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80013918: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001391C: bne         $at, $zero, L_80013834
    if (ctx->r1 != 0) {
        // 0x80013920: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_80013834;
    }
    // 0x80013920: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80013924:
    // 0x80013924: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80013928: jal         0x800309D0
    // 0x8001392C: nop

    free_game(rdram, ctx);
        goto after_4;
    // 0x8001392C: nop

    after_4:
    // 0x80013930: b           L_80013938
    // 0x80013934: nop

        goto L_80013938;
    // 0x80013934: nop

L_80013938:
    // 0x80013938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001393C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80013940: jr          $ra
    // 0x80013944: nop

    return;
    // 0x80013944: nop

;}
RECOMP_FUNC void func_8001191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001191C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80011920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80011924: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80011928: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8001192C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011930: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80011934: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80011938: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8001193C: nop

    // 0x80011940: beq         $t7, $at, L_80011950
    if (ctx->r15 == ctx->r1) {
        // 0x80011944: nop
    
            goto L_80011950;
    }
    // 0x80011944: nop

    // 0x80011948: b           L_80011D08
    // 0x8001194C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80011D08;
    // 0x8001194C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011950:
    // 0x80011950: jal         0x8002FC34
    // 0x80011954: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80011954: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80011958: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8001195C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80011960: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80011964: nop

    // 0x80011968: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001196C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80011970: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80011974: nop

    // 0x80011978: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x8001197C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80011980: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80011984: lw          $t1, 0x5D5C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D5C);
    // 0x80011988: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8001198C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80011990: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80011994: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80011998: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8001199C: sw          $t5, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r13;
    // 0x800119A0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x800119A4: nop

    // 0x800119A8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800119AC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800119B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800119B4: jal         0x8002FC34
    // 0x800119B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x800119B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x800119BC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800119C0: nop

    // 0x800119C4: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    // 0x800119C8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x800119CC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800119D0: lw          $t9, 0x5D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D5C);
    // 0x800119D4: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x800119D8: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x800119DC: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x800119E0: nop

    // 0x800119E4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800119E8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x800119EC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800119F0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x800119F4: blez        $t4, L_80011CD8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800119F8: nop
    
            goto L_80011CD8;
    }
    // 0x800119F8: nop

L_800119FC:
    // 0x800119FC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80011A00: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80011A04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80011A08: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80011A0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80011A10: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80011A14: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80011A18: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80011A1C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x80011A20: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80011A24: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80011A28: sll         $t1, $t2, 5
    ctx->r9 = S32(ctx->r10 << 5);
    // 0x80011A2C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80011A30: lw          $s0, 0x0($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X0);
    // 0x80011A34: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80011A38: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80011A3C: beq         $s0, $at, L_80011A58
    if (ctx->r16 == ctx->r1) {
        // 0x80011A40: sw          $s0, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r16;
            goto L_80011A58;
    }
    // 0x80011A40: sw          $s0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r16;
    // 0x80011A44: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80011A48: beq         $s0, $at, L_80011BE4
    if (ctx->r16 == ctx->r1) {
        // 0x80011A4C: nop
    
            goto L_80011BE4;
    }
    // 0x80011A4C: nop

    // 0x80011A50: b           L_80011C70
    // 0x80011A54: nop

        goto L_80011C70;
    // 0x80011A54: nop

L_80011A58:
    // 0x80011A58: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80011A5C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80011A60: sll         $t6, $t7, 5
    ctx->r14 = S32(ctx->r15 << 5);
    // 0x80011A64: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80011A68: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x80011A6C: nop

    // 0x80011A70: bgtz        $t0, L_80011A78
    if (SIGNED(ctx->r8) > 0) {
        // 0x80011A74: nop
    
            goto L_80011A78;
    }
    // 0x80011A74: nop

L_80011A78:
    // 0x80011A78: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80011A7C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80011A80: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x80011A84: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80011A88: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x80011A8C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80011A90: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80011A94: nop

    // 0x80011A98: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x80011A9C: nop

    // 0x80011AA0: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80011AA4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80011AA8: nop

    // 0x80011AAC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80011AB0: jal         0x8002FC34
    // 0x80011AB4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    malloc_game(rdram, ctx);
        goto after_2;
    // 0x80011AB4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x80011AB8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80011ABC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80011AC0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80011AC4: nop

    // 0x80011AC8: sw          $t8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r24;
    // 0x80011ACC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80011AD0: nop

    // 0x80011AD4: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80011AD8: jal         0x8002FC34
    // 0x80011ADC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    malloc_game(rdram, ctx);
        goto after_3;
    // 0x80011ADC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x80011AE0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80011AE4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80011AE8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80011AEC: nop

    // 0x80011AF0: sw          $t9, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r25;
    // 0x80011AF4: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80011AF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80011AFC: nop

    // 0x80011B00: sw          $t3, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r11;
    // 0x80011B04: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80011B08: nop

    // 0x80011B0C: lw          $a0, 0x28($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X28);
    // 0x80011B10: jal         0x800117F8
    // 0x80011B14: nop

    func_800117F8(rdram, ctx);
        goto after_4;
    // 0x80011B14: nop

    after_4:
    // 0x80011B18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80011B1C: nop

    // 0x80011B20: sw          $v0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->r2;
    // 0x80011B24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80011B28: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80011B2C: sw          $t6, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->r14;
    // 0x80011B30: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80011B34: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80011B38: sw          $t0, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r8;
    // 0x80011B3C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80011B40: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x80011B44: blez        $t9, L_80011BC8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80011B48: nop
    
            goto L_80011BC8;
    }
    // 0x80011B48: nop

L_80011B4C:
    // 0x80011B4C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80011B50: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80011B54: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x80011B58: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80011B5C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80011B60: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x80011B64: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80011B68: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x80011B6C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80011B70: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80011B74: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80011B78: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80011B7C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80011B80: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x80011B84: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80011B88: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80011B8C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80011B90: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x80011B94: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80011B98: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x80011B9C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80011BA0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80011BA4: nop

    // 0x80011BA8: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x80011BAC: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x80011BB0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80011BB4: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80011BB8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80011BBC: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80011BC0: bne         $at, $zero, L_80011B4C
    if (ctx->r1 != 0) {
        // 0x80011BC4: sw          $t3, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r11;
            goto L_80011B4C;
    }
    // 0x80011BC4: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
L_80011BC8:
    // 0x80011BC8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80011BCC: nop

    // 0x80011BD0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80011BD4: nop

    // 0x80011BD8: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x80011BDC: b           L_80011C78
    // 0x80011BE0: nop

        goto L_80011C78;
    // 0x80011BE0: nop

L_80011BE4:
    // 0x80011BE4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80011BE8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80011BEC: sll         $t0, $t6, 5
    ctx->r8 = S32(ctx->r14 << 5);
    // 0x80011BF0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x80011BF4: addiu       $t4, $t1, 0x4
    ctx->r12 = ADD32(ctx->r9, 0X4);
    // 0x80011BF8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80011BFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80011C00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80011C04: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80011C08: nop

    // 0x80011C0C: sw          $t3, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r11;
    // 0x80011C10: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80011C14: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80011C18: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80011C1C: nop

    // 0x80011C20: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80011C24: sw          $t8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r24;
    // 0x80011C28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80011C2C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80011C30: addiu       $t9, $t0, 0xC
    ctx->r25 = ADD32(ctx->r8, 0XC);
    // 0x80011C34: sw          $t9, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r25;
    // 0x80011C38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80011C3C: nop

    // 0x80011C40: lw          $t2, 0x0($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X0);
    // 0x80011C44: nop

    // 0x80011C48: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80011C4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80011C50: nop

    // 0x80011C54: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80011C58: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x80011C5C: nop

    // 0x80011C60: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80011C64: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80011C68: b           L_80011C78
    // 0x80011C6C: nop

        goto L_80011C78;
    // 0x80011C6C: nop

L_80011C70:
    // 0x80011C70: b           L_80011C78
    // 0x80011C74: nop

        goto L_80011C78;
    // 0x80011C74: nop

L_80011C78:
    // 0x80011C78: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80011C7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80011C80: nop

    // 0x80011C84: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
    // 0x80011C88: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80011C8C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80011C90: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80011C94: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x80011C98: sw          $t4, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r12;
    // 0x80011C9C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80011CA0: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80011CA4: nop

    // 0x80011CA8: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80011CAC: beq         $at, $zero, L_80011CC0
    if (ctx->r1 == 0) {
        // 0x80011CB0: nop
    
            goto L_80011CC0;
    }
    // 0x80011CB0: nop

    // 0x80011CB4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80011CB8: nop

    // 0x80011CBC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_80011CC0:
    // 0x80011CC0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80011CC4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80011CC8: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80011CCC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80011CD0: bne         $at, $zero, L_800119FC
    if (ctx->r1 != 0) {
        // 0x80011CD4: sw          $t6, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r14;
            goto L_800119FC;
    }
    // 0x80011CD4: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
L_80011CD8:
    // 0x80011CD8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80011CDC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80011CE0: nop

    // 0x80011CE4: sw          $t9, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r25;
    // 0x80011CE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80011CEC: jal         0x80011424
    // 0x80011CF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80011424(rdram, ctx);
        goto after_5;
    // 0x80011CF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80011CF4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80011CF8: b           L_80011D08
    // 0x80011CFC: nop

        goto L_80011D08;
    // 0x80011CFC: nop

    // 0x80011D00: b           L_80011D08
    // 0x80011D04: nop

        goto L_80011D08;
    // 0x80011D04: nop

L_80011D08:
    // 0x80011D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80011D0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80011D10: jr          $ra
    // 0x80011D14: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80011D14: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void guScale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800374E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800374E8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800374EC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x800374F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800374F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800374F8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800374FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80037500: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80037504: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80037508: jal         0x80037490
    // 0x8003750C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guScaleF(rdram, ctx);
        goto after_0;
    // 0x8003750C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80037510: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80037514: jal         0x800360F0
    // 0x80037518: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80037518: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x8003751C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037520: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80037524: jr          $ra
    // 0x80037528: nop

    return;
    // 0x80037528: nop

;}
RECOMP_FUNC void func_80000E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000E14: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000E18: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000E1C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000E20: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000E24: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000E28: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000E2C: jal         0x8000068C
    // 0x80000E30: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000E30: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000E34: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000E38: lui         $t9, 0x16
    ctx->r25 = S32(0X16 << 16);
    // 0x80000E3C: addiu       $t9, $t9, -0x5F10
    ctx->r25 = ADD32(ctx->r25, -0X5F10);
    // 0x80000E40: addiu       $t8, $t8, 0x7A00
    ctx->r24 = ADD32(ctx->r24, 0X7A00);
    // 0x80000E44: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000E48: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000E4C: jal         0x8000068C
    // 0x80000E50: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000E50: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000E54: b           L_80000E5C
    // 0x80000E58: nop

        goto L_80000E5C;
    // 0x80000E58: nop

L_80000E5C:
    // 0x80000E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000E64: jr          $ra
    // 0x80000E68: nop

    return;
    // 0x80000E68: nop

;}
RECOMP_FUNC void func_80005B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005B14: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80005B18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005B1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80005B20: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005B24: sw          $zero, 0x2D80($at)
    MEM_W(0X2D80, ctx->r1) = 0;
    // 0x80005B28: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005B2C: sw          $zero, 0x2D60($at)
    MEM_W(0X2D60, ctx->r1) = 0;
    // 0x80005B30: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80005B34: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x80005B38: nop

    // 0x80005B3C: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x80005B40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005B44: sh          $zero, -0x5C9C($at)
    MEM_H(-0X5C9C, ctx->r1) = 0;
    // 0x80005B48: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80005B4C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80005B50: lw          $t8, -0x5CF8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF8);
    // 0x80005B54: lw          $t7, -0x5CFC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CFC);
    // 0x80005B58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005B5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80005B60: sw          $t9, -0x5CF4($at)
    MEM_W(-0X5CF4, ctx->r1) = ctx->r25;
    // 0x80005B64: jal         0x8000D84C
    // 0x80005B68: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x80005B68: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_0:
    // 0x80005B6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005B70: sw          $v0, 0x2D54($at)
    MEM_W(0X2D54, ctx->r1) = ctx->r2;
    // 0x80005B74: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80005B78: lw          $t0, 0x2D54($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D54);
    // 0x80005B7C: nop

    // 0x80005B80: bne         $t0, $zero, L_80005B90
    if (ctx->r8 != 0) {
        // 0x80005B84: nop
    
            goto L_80005B90;
    }
    // 0x80005B84: nop

    // 0x80005B88: b           L_8000609C
    // 0x80005B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005B90:
    // 0x80005B90: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80005B94: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80005B98: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80005B9C: jal         0x80035104
    // 0x80005BA0: addiu       $a1, $a1, -0x5CF4
    ctx->r5 = ADD32(ctx->r5, -0X5CF4);
    alSndpNew(rdram, ctx);
        goto after_1;
    // 0x80005BA0: addiu       $a1, $a1, -0x5CF4
    ctx->r5 = ADD32(ctx->r5, -0X5CF4);
    after_1:
    // 0x80005BA4: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80005BA8: lw          $t1, -0x5CF4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CF4);
    // 0x80005BAC: nop

    // 0x80005BB0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80005BB4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80005BB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80005BBC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80005BC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80005BC4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80005BC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80005BCC: jal         0x8000D84C
    // 0x80005BD0: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_2;
    // 0x80005BD0: nop

    after_2:
    // 0x80005BD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005BD8: sw          $v0, 0x2D5C($at)
    MEM_W(0X2D5C, ctx->r1) = ctx->r2;
    // 0x80005BDC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80005BE0: lw          $t3, 0x2D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D5C);
    // 0x80005BE4: nop

    // 0x80005BE8: bne         $t3, $zero, L_80005BF8
    if (ctx->r11 != 0) {
        // 0x80005BEC: nop
    
            goto L_80005BF8;
    }
    // 0x80005BEC: nop

    // 0x80005BF0: b           L_8000609C
    // 0x80005BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005BF8:
    // 0x80005BF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005BFC: sh          $zero, 0x2D78($at)
    MEM_H(0X2D78, ctx->r1) = 0;
    // 0x80005C00: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x80005C04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C08: sb          $t4, 0x2D7A($at)
    MEM_B(0X2D7A, ctx->r1) = ctx->r12;
    // 0x80005C0C: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x80005C10: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C14: sb          $t5, 0x2D7B($at)
    MEM_B(0X2D7B, ctx->r1) = ctx->r13;
    // 0x80005C18: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C1C: sb          $zero, 0x2D7C($at)
    MEM_B(0X2D7C, ctx->r1) = 0;
    // 0x80005C20: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x80005C24: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C28: sh          $t6, 0x2D74($at)
    MEM_H(0X2D74, ctx->r1) = ctx->r14;
    // 0x80005C2C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C30: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80005C34: sh          $t7, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r15;
    // 0x80005C38: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C3C: sw          $zero, 0x2D64($at)
    MEM_W(0X2D64, ctx->r1) = 0;
    // 0x80005C40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C44: sw          $zero, 0x2D68($at)
    MEM_W(0X2D68, ctx->r1) = 0;
    // 0x80005C48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80005C4C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005C50: swc1        $f4, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f4.u32l;
    // 0x80005C54: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80005C58: lw          $t8, -0x5CF4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF4);
    // 0x80005C5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80005C60: blez        $t8, L_80005D88
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80005C64: nop
    
            goto L_80005D88;
    }
    // 0x80005C64: nop

L_80005C68:
    // 0x80005C68: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80005C6C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80005C70: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80005C74: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80005C78: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80005C7C: lw          $t1, 0x2D5C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D5C);
    // 0x80005C80: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80005C84: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80005C88: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80005C8C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80005C90: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80005C94: nop

    // 0x80005C98: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    // 0x80005C9C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CA0: nop

    // 0x80005CA4: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x80005CA8: nop

    // 0x80005CAC: sw          $t5, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r13;
    // 0x80005CB0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CB4: nop

    // 0x80005CB8: sw          $zero, 0x8($t6)
    MEM_W(0X8, ctx->r14) = 0;
    // 0x80005CBC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CC0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80005CC4: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x80005CC8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CCC: nop

    // 0x80005CD0: sb          $zero, 0x26($t9)
    MEM_B(0X26, ctx->r25) = 0;
    // 0x80005CD4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80005CD8: lb          $t0, 0x2D7A($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X2D7A);
    // 0x80005CDC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CE0: nop

    // 0x80005CE4: sb          $t0, 0x22($t1)
    MEM_B(0X22, ctx->r9) = ctx->r8;
    // 0x80005CE8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80005CEC: lbu         $t2, 0x2D7B($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2D7B);
    // 0x80005CF0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80005CF4: nop

    // 0x80005CF8: sb          $t2, 0x24($t3)
    MEM_B(0X24, ctx->r11) = ctx->r10;
    // 0x80005CFC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D00: nop

    // 0x80005D04: lbu         $t4, 0x24($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X24);
    // 0x80005D08: nop

    // 0x80005D0C: sb          $t4, 0x25($t5)
    MEM_B(0X25, ctx->r13) = ctx->r12;
    // 0x80005D10: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80005D14: lbu         $t6, 0x2D7C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2D7C);
    // 0x80005D18: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D1C: nop

    // 0x80005D20: sb          $t6, 0x28($t7)
    MEM_B(0X28, ctx->r15) = ctx->r14;
    // 0x80005D24: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80005D28: lh          $t8, 0x2D78($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X2D78);
    // 0x80005D2C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D30: nop

    // 0x80005D34: sh          $t8, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r24;
    // 0x80005D38: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D3C: nop

    // 0x80005D40: lh          $t1, 0x18($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X18);
    // 0x80005D44: nop

    // 0x80005D48: sh          $t1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r9;
    // 0x80005D4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80005D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80005D54: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D58: nop

    // 0x80005D5C: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x80005D60: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80005D64: nop

    // 0x80005D68: sb          $zero, 0x29($t3)
    MEM_B(0X29, ctx->r11) = 0;
    // 0x80005D6C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80005D70: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80005D74: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x80005D78: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80005D7C: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80005D80: bne         $at, $zero, L_80005C68
    if (ctx->r1 != 0) {
        // 0x80005D84: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_80005C68;
    }
    // 0x80005D84: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_80005D88:
    // 0x80005D88: jal         0x800080D8
    // 0x80005D8C: nop

    func_800080D8(rdram, ctx);
        goto after_3;
    // 0x80005D8C: nop

    after_3:
    // 0x80005D90: beq         $v0, $zero, L_80005DA0
    if (ctx->r2 == 0) {
        // 0x80005D94: nop
    
            goto L_80005DA0;
    }
    // 0x80005D94: nop

    // 0x80005D98: b           L_8000609C
    // 0x80005D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005DA0:
    // 0x80005DA0: jal         0x800060AC
    // 0x80005DA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800060AC(rdram, ctx);
        goto after_4;
    // 0x80005DA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x80005DA8: beq         $v0, $zero, L_80005DB8
    if (ctx->r2 == 0) {
        // 0x80005DAC: nop
    
            goto L_80005DB8;
    }
    // 0x80005DAC: nop

    // 0x80005DB0: b           L_8000609C
    // 0x80005DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005DB8:
    // 0x80005DB8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80005DBC: lw          $t7, 0x2D58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D58);
    // 0x80005DC0: addiu       $at, $zero, 0x5431
    ctx->r1 = ADD32(0, 0X5431);
    // 0x80005DC4: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x80005DC8: nop

    // 0x80005DCC: beq         $s0, $at, L_80005DF4
    if (ctx->r16 == ctx->r1) {
        // 0x80005DD0: nop
    
            goto L_80005DF4;
    }
    // 0x80005DD0: nop

    // 0x80005DD4: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80005DD8: beq         $s0, $at, L_80005E7C
    if (ctx->r16 == ctx->r1) {
        // 0x80005DDC: nop
    
            goto L_80005E7C;
    }
    // 0x80005DDC: nop

    // 0x80005DE0: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x80005DE4: beq         $s0, $at, L_80005E7C
    if (ctx->r16 == ctx->r1) {
        // 0x80005DE8: nop
    
            goto L_80005E7C;
    }
    // 0x80005DE8: nop

    // 0x80005DEC: b           L_80006028
    // 0x80005DF0: nop

        goto L_80006028;
    // 0x80005DF0: nop

L_80005DF4:
    // 0x80005DF4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80005DF8: lw          $t8, -0x5CA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CA8);
    // 0x80005DFC: nop

    // 0x80005E00: bne         $t8, $zero, L_80005E10
    if (ctx->r24 != 0) {
        // 0x80005E04: nop
    
            goto L_80005E10;
    }
    // 0x80005E04: nop

    // 0x80005E08: b           L_8000609C
    // 0x80005E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000609C;
    // 0x80005E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80005E10:
    // 0x80005E10: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80005E14: lw          $t9, 0x2D58($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D58);
    // 0x80005E18: nop

    // 0x80005E1C: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x80005E20: nop

    // 0x80005E24: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x80005E28: addiu       $t2, $t0, 0x4
    ctx->r10 = ADD32(ctx->r8, 0X4);
    // 0x80005E2C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80005E30: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80005E34: jal         0x800060AC
    // 0x80005E38: nop

    func_800060AC(rdram, ctx);
        goto after_5;
    // 0x80005E38: nop

    after_5:
    // 0x80005E3C: beq         $v0, $zero, L_80005E4C
    if (ctx->r2 == 0) {
        // 0x80005E40: nop
    
            goto L_80005E4C;
    }
    // 0x80005E40: nop

    // 0x80005E44: b           L_8000609C
    // 0x80005E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005E4C:
    // 0x80005E4C: jal         0x8000616C
    // 0x80005E50: nop

    func_8000616C(rdram, ctx);
        goto after_6;
    // 0x80005E50: nop

    after_6:
    // 0x80005E54: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80005E58: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80005E5C: nop

    // 0x80005E60: beq         $t3, $zero, L_80005E74
    if (ctx->r11 == 0) {
        // 0x80005E64: nop
    
            goto L_80005E74;
    }
    // 0x80005E64: nop

    // 0x80005E68: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80005E6C: b           L_8000609C
    // 0x80005E70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8000609C;
    // 0x80005E70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80005E74:
    // 0x80005E74: b           L_8000608C
    // 0x80005E78: nop

        goto L_8000608C;
    // 0x80005E78: nop

L_80005E7C:
    // 0x80005E7C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80005E80: lw          $t4, 0x2D58($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D58);
    // 0x80005E84: nop

    // 0x80005E88: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x80005E8C: nop

    // 0x80005E90: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80005E94: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80005E98: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80005E9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80005EA0: jal         0x800060AC
    // 0x80005EA4: nop

    func_800060AC(rdram, ctx);
        goto after_7;
    // 0x80005EA4: nop

    after_7:
    // 0x80005EA8: beq         $v0, $zero, L_80005EB8
    if (ctx->r2 == 0) {
        // 0x80005EAC: nop
    
            goto L_80005EB8;
    }
    // 0x80005EAC: nop

    // 0x80005EB0: b           L_8000609C
    // 0x80005EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005EB8:
    // 0x80005EB8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80005EBC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80005EC0: lw          $t8, -0x5CAC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CAC);
    // 0x80005EC4: nop

    // 0x80005EC8: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80005ECC: bgez        $t9, L_80005EE0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80005ED0: andi        $t0, $t9, 0x7
        ctx->r8 = ctx->r25 & 0X7;
            goto L_80005EE0;
    }
    // 0x80005ED0: andi        $t0, $t9, 0x7
    ctx->r8 = ctx->r25 & 0X7;
    // 0x80005ED4: beq         $t0, $zero, L_80005EE0
    if (ctx->r8 == 0) {
        // 0x80005ED8: nop
    
            goto L_80005EE0;
    }
    // 0x80005ED8: nop

    // 0x80005EDC: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80005EE0:
    // 0x80005EE0: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80005EE4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80005EE8: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x80005EEC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80005EF0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80005EF4: jal         0x8000D84C
    // 0x80005EF8: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_8;
    // 0x80005EF8: nop

    after_8:
    // 0x80005EFC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80005F00: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80005F04: nop

    // 0x80005F08: bne         $t4, $zero, L_80005F18
    if (ctx->r12 != 0) {
        // 0x80005F0C: nop
    
            goto L_80005F18;
    }
    // 0x80005F0C: nop

    // 0x80005F10: b           L_8000609C
    // 0x80005F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005F14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005F18:
    // 0x80005F18: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80005F1C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80005F20: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80005F24: jal         0x80002CD0
    // 0x80005F28: nop

    func_80002CD0(rdram, ctx);
        goto after_9;
    // 0x80005F28: nop

    after_9:
    // 0x80005F2C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80005F30: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80005F34: lw          $t5, -0x5CAC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5CAC);
    // 0x80005F38: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80005F3C: nop

    // 0x80005F40: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80005F44: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80005F48: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80005F4C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80005F50: lw          $t9, -0x5CAC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5CAC);
    // 0x80005F54: lw          $t0, 0xC($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XC);
    // 0x80005F58: nop

    // 0x80005F5C: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80005F60: sw          $t2, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r10;
    // 0x80005F64: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80005F68: jal         0x80006284
    // 0x80005F6C: nop

    func_80006284(rdram, ctx);
        goto after_10;
    // 0x80005F6C: nop

    after_10:
    // 0x80005F70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80005F74: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80005F78: nop

    // 0x80005F7C: beq         $t3, $zero, L_80005F90
    if (ctx->r11 == 0) {
        // 0x80005F80: nop
    
            goto L_80005F90;
    }
    // 0x80005F80: nop

    // 0x80005F84: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80005F88: b           L_8000609C
    // 0x80005F8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8000609C;
    // 0x80005F8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80005F90:
    // 0x80005F90: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80005F94: jal         0x800065B8
    // 0x80005F98: nop

    func_800065B8(rdram, ctx);
        goto after_11;
    // 0x80005F98: nop

    after_11:
    // 0x80005F9C: beq         $v0, $zero, L_80005FAC
    if (ctx->r2 == 0) {
        // 0x80005FA0: nop
    
            goto L_80005FAC;
    }
    // 0x80005FA0: nop

    // 0x80005FA4: b           L_8000609C
    // 0x80005FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x80005FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80005FAC:
    // 0x80005FAC: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80005FB0: lw          $t4, 0x2D58($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D58);
    // 0x80005FB4: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80005FB8: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80005FBC: nop

    // 0x80005FC0: bne         $t5, $at, L_80005FD0
    if (ctx->r13 != ctx->r1) {
        // 0x80005FC4: nop
    
            goto L_80005FD0;
    }
    // 0x80005FC4: nop

    // 0x80005FC8: b           L_8000608C
    // 0x80005FCC: nop

        goto L_8000608C;
    // 0x80005FCC: nop

L_80005FD0:
    // 0x80005FD0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80005FD4: jal         0x800064BC
    // 0x80005FD8: nop

    func_800064BC(rdram, ctx);
        goto after_12;
    // 0x80005FD8: nop

    after_12:
    // 0x80005FDC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80005FE0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80005FE4: nop

    // 0x80005FE8: beq         $t7, $zero, L_80005FFC
    if (ctx->r15 == 0) {
        // 0x80005FEC: nop
    
            goto L_80005FFC;
    }
    // 0x80005FEC: nop

    // 0x80005FF0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80005FF4: b           L_8000609C
    // 0x80005FF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8000609C;
    // 0x80005FF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80005FFC:
    // 0x80005FFC: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80006000: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006004: sh          $t8, -0x5C9C($at)
    MEM_H(-0X5C9C, ctx->r1) = ctx->r24;
    // 0x80006008: jal         0x800081B0
    // 0x8000600C: nop

    func_800081B0(rdram, ctx);
        goto after_13;
    // 0x8000600C: nop

    after_13:
    // 0x80006010: beq         $v0, $zero, L_80006020
    if (ctx->r2 == 0) {
        // 0x80006014: nop
    
            goto L_80006020;
    }
    // 0x80006014: nop

    // 0x80006018: b           L_8000609C
    // 0x8000601C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000609C;
    // 0x8000601C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80006020:
    // 0x80006020: b           L_8000608C
    // 0x80006024: nop

        goto L_8000608C;
    // 0x80006024: nop

L_80006028:
    // 0x80006028: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000602C: lw          $t6, -0x5CA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CA8);
    // 0x80006030: nop

    // 0x80006034: bne         $t6, $zero, L_80006044
    if (ctx->r14 != 0) {
        // 0x80006038: nop
    
            goto L_80006044;
    }
    // 0x80006038: nop

    // 0x8000603C: b           L_8000609C
    // 0x80006040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000609C;
    // 0x80006040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006044:
    // 0x80006044: jal         0x8000616C
    // 0x80006048: nop

    func_8000616C(rdram, ctx);
        goto after_14;
    // 0x80006048: nop

    after_14:
    // 0x8000604C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80006050: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80006054: nop

    // 0x80006058: beq         $t9, $zero, L_8000606C
    if (ctx->r25 == 0) {
        // 0x8000605C: nop
    
            goto L_8000606C;
    }
    // 0x8000605C: nop

    // 0x80006060: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80006064: b           L_8000609C
    // 0x80006068: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8000609C;
    // 0x80006068: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8000606C:
    // 0x8000606C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006070: lw          $a0, 0x2D50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D50);
    // 0x80006074: jal         0x80006DF4
    // 0x80006078: nop

    func_80006DF4(rdram, ctx);
        goto after_15;
    // 0x80006078: nop

    after_15:
    // 0x8000607C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80006080: lw          $t0, 0x2D58($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D58);
    // 0x80006084: nop

    // 0x80006088: sh          $v0, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r2;
L_8000608C:
    // 0x8000608C: b           L_8000609C
    // 0x80006090: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000609C;
    // 0x80006090: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006094: b           L_8000609C
    // 0x80006098: nop

        goto L_8000609C;
    // 0x80006098: nop

L_8000609C:
    // 0x8000609C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800060A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800060A4: jr          $ra
    // 0x800060A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800060A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001EC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EC54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC58: sw          $t6, -0x1F58($at)
    MEM_W(-0X1F58, ctx->r1) = ctx->r14;
    // 0x8001EC5C: jr          $ra
    // 0x8001EC60: nop

    return;
    // 0x8001EC60: nop

    // 0x8001EC64: jr          $ra
    // 0x8001EC68: nop

    return;
    // 0x8001EC68: nop

;}
RECOMP_FUNC void stub1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D7F4: jr          $ra
    // 0x8001D7F8: nop

    return;
    // 0x8001D7F8: nop

    // 0x8001D7FC: jr          $ra
    // 0x8001D800: nop

    return;
    // 0x8001D800: nop

;}
RECOMP_FUNC void func_80006DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006DF8: sh          $zero, 0xA($sp)
    MEM_H(0XA, ctx->r29) = 0;
    // 0x80006DFC: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80006E00: nop

    // 0x80006E04: sh          $t6, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r14;
    // 0x80006E08: lh          $t7, 0x8($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8);
    // 0x80006E0C: sh          $zero, 0xE($sp)
    MEM_H(0XE, ctx->r29) = 0;
    // 0x80006E10: blez        $t7, L_80006ECC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80006E14: nop
    
            goto L_80006ECC;
    }
    // 0x80006E14: nop

L_80006E18:
    // 0x80006E18: lh          $t8, 0xE($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XE);
    // 0x80006E1C: nop

    // 0x80006E20: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80006E24: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80006E28: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80006E2C: nop

    // 0x80006E30: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80006E34: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80006E38: nop

    // 0x80006E3C: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80006E40: nop

    // 0x80006E44: sh          $t3, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r11;
    // 0x80006E48: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x80006E4C: sh          $zero, 0xC($sp)
    MEM_H(0XC, ctx->r29) = 0;
    // 0x80006E50: blez        $t4, L_80006EAC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80006E54: nop
    
            goto L_80006EAC;
    }
    // 0x80006E54: nop

L_80006E58:
    // 0x80006E58: lh          $t6, 0xC($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XC);
    // 0x80006E5C: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80006E60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80006E64: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80006E68: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80006E6C: nop

    // 0x80006E70: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80006E74: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x80006E78: lh          $t0, 0xA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XA);
    // 0x80006E7C: lh          $t2, 0xE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE);
    // 0x80006E80: nop

    // 0x80006E84: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80006E88: sh          $t3, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r11;
    // 0x80006E8C: lh          $t4, 0xC($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XC);
    // 0x80006E90: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x80006E94: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x80006E98: sll         $t5, $t6, 16
    ctx->r13 = S32(ctx->r14 << 16);
    // 0x80006E9C: sra         $t7, $t5, 16
    ctx->r15 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80006EA0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80006EA4: bne         $at, $zero, L_80006E58
    if (ctx->r1 != 0) {
        // 0x80006EA8: sh          $t6, 0xC($sp)
        MEM_H(0XC, ctx->r29) = ctx->r14;
            goto L_80006E58;
    }
    // 0x80006EA8: sh          $t6, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r14;
L_80006EAC:
    // 0x80006EAC: lh          $t9, 0xE($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE);
    // 0x80006EB0: lh          $t3, 0x8($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X8);
    // 0x80006EB4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80006EB8: sll         $t0, $t1, 16
    ctx->r8 = S32(ctx->r9 << 16);
    // 0x80006EBC: sra         $t2, $t0, 16
    ctx->r10 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80006EC0: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80006EC4: bne         $at, $zero, L_80006E18
    if (ctx->r1 != 0) {
        // 0x80006EC8: sh          $t1, 0xE($sp)
        MEM_H(0XE, ctx->r29) = ctx->r9;
            goto L_80006E18;
    }
    // 0x80006EC8: sh          $t1, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r9;
L_80006ECC:
    // 0x80006ECC: lh          $v0, 0xA($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XA);
    // 0x80006ED0: b           L_80006EE0
    // 0x80006ED4: nop

        goto L_80006EE0;
    // 0x80006ED4: nop

    // 0x80006ED8: b           L_80006EE0
    // 0x80006EDC: nop

        goto L_80006EE0;
    // 0x80006EDC: nop

L_80006EE0:
    // 0x80006EE0: jr          $ra
    // 0x80006EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80006EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void Unused_DebugFunction(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017EE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80017EE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80017EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80017EEC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80017EF0: addiu       $a1, $a1, -0x43E0
    ctx->r5 = ADD32(ctx->r5, -0X43E0);
    // 0x80017EF4: jal         0x80036BE4
    // 0x80017EF8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80017EF8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x80017EFC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80017F00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80017F04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80017F08: lwc1        $f6, -0x43D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X43D0);
    // 0x80017F0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80017F10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80017F14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80017F18: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80017F1C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80017F20: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80017F24: addiu       $a1, $sp, 0x36
    ctx->r5 = ADD32(ctx->r29, 0X36);
    // 0x80017F28: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80017F2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80017F30: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80017F34: jal         0x80036E70
    // 0x80017F38: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_1;
    // 0x80017F38: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80017F3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F40: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80017F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F48: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80017F4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F50: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80017F54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F58: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80017F5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F60: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80017F64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017F68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80017F6C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80017F70: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80017F74: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80017F78: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80017F7C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80017F80: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80017F84: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80017F88: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80017F8C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80017F90: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80017F94: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80017F98: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80017F9C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80017FA0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x80017FA4: jal         0x80037188
    // 0x80017FA8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_2;
    // 0x80017FA8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80017FAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80017FB0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80017FB4: jal         0x800366E0
    // 0x80017FB8: nop

    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80017FB8: nop

    after_3:
    // 0x80017FBC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80017FC0: b           L_80017FC8
    // 0x80017FC4: nop

        goto L_80017FC8;
    // 0x80017FC4: nop

L_80017FC8:
    // 0x80017FC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80017FCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80017FD0: jr          $ra
    // 0x80017FD4: nop

    return;
    // 0x80017FD4: nop

;}
RECOMP_FUNC void func_8001A5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001A604: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001A608: jal         0x8001A488
    // 0x8001A60C: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001A60C: nop

    after_0:
    // 0x8001A610: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001A614: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001A618: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001A61C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001A620: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001A624: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001A628: lw          $t8, 0x52B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X52B0);
    // 0x8001A62C: nop

    // 0x8001A630: beq         $t8, $zero, L_8001A678
    if (ctx->r24 == 0) {
        // 0x8001A634: nop
    
            goto L_8001A678;
    }
    // 0x8001A634: nop

    // 0x8001A638: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001A63C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001A640: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001A644: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001A648: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001A64C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8001A650: lw          $a0, 0x52B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52B0);
    // 0x8001A654: jal         0x80011DD0
    // 0x8001A658: nop

    func_80011DD0(rdram, ctx);
        goto after_1;
    // 0x8001A658: nop

    after_1:
    // 0x8001A65C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001A660: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001A664: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001A668: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001A66C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001A670: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001A674: sw          $zero, 0x52B0($at)
    MEM_W(0X52B0, ctx->r1) = 0;
L_8001A678:
    // 0x8001A678: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001A67C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8001A680: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001A684: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001A688: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001A68C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001A690: lw          $t5, 0x52AC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X52AC);
    // 0x8001A694: nop

    // 0x8001A698: beq         $t5, $zero, L_8001A6E0
    if (ctx->r13 == 0) {
        // 0x8001A69C: nop
    
            goto L_8001A6E0;
    }
    // 0x8001A69C: nop

    // 0x8001A6A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001A6A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001A6A8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001A6AC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001A6B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001A6B4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8001A6B8: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001A6BC: jal         0x800105D8
    // 0x8001A6C0: nop

    func_800105D8(rdram, ctx);
        goto after_2;
    // 0x8001A6C0: nop

    after_2:
    // 0x8001A6C4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001A6C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001A6CC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001A6D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001A6D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001A6D8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001A6DC: sw          $zero, 0x52AC($at)
    MEM_W(0X52AC, ctx->r1) = 0;
L_8001A6E0:
    // 0x8001A6E0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001A6E4: lw          $t0, -0x1C54($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1C54);
    // 0x8001A6E8: nop

    // 0x8001A6EC: beq         $t0, $zero, L_8001A720
    if (ctx->r8 == 0) {
        // 0x8001A6F0: nop
    
            goto L_8001A720;
    }
    // 0x8001A6F0: nop

    // 0x8001A6F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001A6F8: lw          $a0, -0x1C54($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C54);
    // 0x8001A6FC: jal         0x80013A00
    // 0x8001A700: nop

    func_80013A00(rdram, ctx);
        goto after_3;
    // 0x8001A700: nop

    after_3:
    // 0x8001A704: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001A708: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001A70C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001A710: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001A714: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001A718: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8001A71C: sw          $zero, 0x52A8($at)
    MEM_W(0X52A8, ctx->r1) = 0;
L_8001A720:
    // 0x8001A720: b           L_8001A728
    // 0x8001A724: nop

        goto L_8001A728;
    // 0x8001A724: nop

L_8001A728:
    // 0x8001A728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A730: jr          $ra
    // 0x8001A734: nop

    return;
    // 0x8001A734: nop

;}
RECOMP_FUNC void func_80001184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000118C: lui         $t6, 0x17
    ctx->r14 = S32(0X17 << 16);
    // 0x80001190: lui         $t7, 0x18
    ctx->r15 = S32(0X18 << 16);
    // 0x80001194: addiu       $t7, $t7, 0x4EE0
    ctx->r15 = ADD32(ctx->r15, 0X4EE0);
    // 0x80001198: addiu       $t6, $t6, 0x5420
    ctx->r14 = ADD32(ctx->r14, 0X5420);
    // 0x8000119C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800011A0: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800011A4: jal         0x8000068C
    // 0x800011A8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800011A8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800011AC: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x800011B0: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x800011B4: addiu       $t9, $t9, -0x57D0
    ctx->r25 = ADD32(ctx->r25, -0X57D0);
    // 0x800011B8: addiu       $t8, $t8, -0x66C0
    ctx->r24 = ADD32(ctx->r24, -0X66C0);
    // 0x800011BC: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800011C0: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800011C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800011C8: jal         0x8000068C
    // 0x800011CC: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800011CC: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800011D0: b           L_800011D8
    // 0x800011D4: nop

        goto L_800011D8;
    // 0x800011D4: nop

L_800011D8:
    // 0x800011D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800011DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800011E0: jr          $ra
    // 0x800011E4: nop

    return;
    // 0x800011E4: nop

;}
RECOMP_FUNC void func_8002A720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A728: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002A72C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002A730: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A734: jal         0x8002A4E0
    // 0x8002A738: nop

    func_8002A4E0(rdram, ctx);
        goto after_0;
    // 0x8002A738: nop

    after_0:
    // 0x8002A73C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8002A740: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002A744: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A748: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A74C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A750: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A758: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A75C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002A760: lwc1        $f14, 0x4190($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x8002A764: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A768: jal         0x80015538
    // 0x8002A76C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8002A76C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002A770: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8002A774: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A778: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A77C: nop

    // 0x8002A780: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A784: nop

    // 0x8002A788: bc1t        L_8002A7B0
    if (c1cs) {
        // 0x8002A78C: nop
    
            goto L_8002A7B0;
    }
    // 0x8002A78C: nop

    // 0x8002A790: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002A794: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002A798: nop

    // 0x8002A79C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8002A7A0: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002A7A4: nop

    // 0x8002A7A8: bc1f        L_8002A7B8
    if (!c1cs) {
        // 0x8002A7AC: nop
    
            goto L_8002A7B8;
    }
    // 0x8002A7AC: nop

L_8002A7B0:
    // 0x8002A7B0: b           L_8002A7F0
    // 0x8002A7B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A7F0;
    // 0x8002A7B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A7B8:
    // 0x8002A7B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002A7BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002A7C0: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A7C4: nop

    // 0x8002A7C8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8002A7CC: nop

    // 0x8002A7D0: bc1f        L_8002A7E0
    if (!c1cs) {
        // 0x8002A7D4: nop
    
            goto L_8002A7E0;
    }
    // 0x8002A7D4: nop

    // 0x8002A7D8: b           L_8002A7F0
    // 0x8002A7DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A7F0;
    // 0x8002A7DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A7E0:
    // 0x8002A7E0: b           L_8002A7F0
    // 0x8002A7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A7F0;
    // 0x8002A7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A7E8: b           L_8002A7F0
    // 0x8002A7EC: nop

        goto L_8002A7F0;
    // 0x8002A7EC: nop

L_8002A7F0:
    // 0x8002A7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A7F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A7F8: jr          $ra
    // 0x8002A7FC: nop

    return;
    // 0x8002A7FC: nop

;}
RECOMP_FUNC void func_80029D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029D8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80029D90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029D94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80029D98: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80029D9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80029DA0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80029DA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029DA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029DAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029DB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029DB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029DB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029DBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029DC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029DC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80029DC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80029DCC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029DD0: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80029DD4: lwc1        $f9, -0x41F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X41F0);
    // 0x80029DD8: lwc1        $f8, -0x41EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X41EC);
    // 0x80029DDC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80029DE0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80029DE4: jal         0x80036570
    // 0x80029DE8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_0;
    // 0x80029DE8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80029DEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80029DF0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029DF4: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80029DF8: lwc1        $f5, -0x41E8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X41E8);
    // 0x80029DFC: lwc1        $f4, -0x41E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X41E4);
    // 0x80029E00: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80029E04: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80029E08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80029E0C: jal         0x80034970
    // 0x80029E10: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80029E10: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x80029E14: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80029E18: nop

    // 0x80029E1C: lwc1        $f8, 0x44($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80029E20: nop

    // 0x80029E24: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80029E28: nop

    // 0x80029E2C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80029E30: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
    // 0x80029E34: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80029E38: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029E3C: lwc1        $f18, 0x40($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80029E40: lwc1        $f7, -0x41E0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X41E0);
    // 0x80029E44: lwc1        $f6, -0x41DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X41DC);
    // 0x80029E48: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80029E4C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80029E50: jal         0x80036570
    // 0x80029E54: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80029E54: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x80029E58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80029E5C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029E60: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80029E64: lwc1        $f19, -0x41D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X41D8);
    // 0x80029E68: lwc1        $f18, -0x41D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X41D4);
    // 0x80029E6C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80029E70: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80029E74: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80029E78: jal         0x80036570
    // 0x80029E7C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80029E7C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x80029E80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80029E84: nop

    // 0x80029E88: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80029E8C: nop

    // 0x80029E90: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80029E94: nop

    // 0x80029E98: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80029E9C: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x80029EA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80029EA4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80029EA8: lwc1        $f16, 0x40($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80029EAC: lwc1        $f5, -0x41D0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X41D0);
    // 0x80029EB0: lwc1        $f4, -0x41CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X41CC);
    // 0x80029EB4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80029EB8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80029EBC: jal         0x80034970
    // 0x80029EC0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80029EC0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_4:
    // 0x80029EC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80029EC8: nop

    // 0x80029ECC: lwc1        $f8, 0x44($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80029ED0: nop

    // 0x80029ED4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80029ED8: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
    // 0x80029EDC: b           L_80029EE4
    // 0x80029EE0: nop

        goto L_80029EE4;
    // 0x80029EE0: nop

L_80029EE4:
    // 0x80029EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80029EE8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80029EEC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80029EF0: jr          $ra
    // 0x80029EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80029EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alFxPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046D2C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80046D30: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80046D34: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80046D38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80046D3C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80046D40: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80046D44: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80046D48: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80046D4C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046D50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046D54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046D58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046D5C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80046D60: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80046D64: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80046D68: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80046D6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80046D70: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80046D74: jalr        $t9
    // 0x80046D78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80046D78: nop

    after_0:
    // 0x80046D7C: sll         $s1, $s6, 1
    ctx->r17 = S32(ctx->r22 << 1);
    // 0x80046D80: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x80046D84: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x80046D88: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x80046D8C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80046D90: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x80046D94: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80046D98: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x80046D9C: ori         $t8, $t8, 0xDA83
    ctx->r24 = ctx->r24 | 0XDA83;
    // 0x80046DA0: ori         $t4, $t4, 0x6C0
    ctx->r12 = ctx->r12 | 0X6C0;
    // 0x80046DA4: ori         $t3, $t3, 0x5A82
    ctx->r11 = ctx->r11 | 0X5A82;
    // 0x80046DA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80046DAC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80046DB0: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x80046DB4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80046DB8: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x80046DBC: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80046DC0: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x80046DC4: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x80046DC8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80046DCC: addiu       $s2, $zero, 0x140
    ctx->r18 = ADD32(0, 0X140);
    // 0x80046DD0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80046DD4: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x80046DD8: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x80046DDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046DE0: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x80046DE4: jal         0x80046580
    // 0x80046DE8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    _saveBuffer(rdram, ctx);
        goto after_1;
    // 0x80046DE8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x80046DEC: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x80046DF0: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80046DF4: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x80046DF8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80046DFC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x80046E00: lbu         $t9, 0x24($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X24);
    // 0x80046E04: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x80046E08: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80046E0C: blezl       $t9, L_80046FEC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80046E10: lw          $v1, 0x1C($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X1C);
            goto L_80046FEC;
    }
    goto skip_0;
    // 0x80046E10: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    skip_0:
    // 0x80046E14: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_80046E18:
    // 0x80046E18: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x80046E1C: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x80046E20: addu        $t8, $t8, $s7
    ctx->r24 = ADD32(ctx->r24, ctx->r23);
    // 0x80046E24: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80046E28: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x80046E2C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80046E30: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x80046E34: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046E38: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x80046E3C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80046E40: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x80046E44: addu        $s4, $v0, $t4
    ctx->r20 = ADD32(ctx->r2, ctx->r12);
    // 0x80046E48: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80046E4C: bne         $s4, $v1, L_80046E74
    if (ctx->r20 != ctx->r3) {
        // 0x80046E50: addu        $fp, $v0, $t9
        ctx->r30 = ADD32(ctx->r2, ctx->r25);
            goto L_80046E74;
    }
    // 0x80046E50: addu        $fp, $v0, $t9
    ctx->r30 = ADD32(ctx->r2, ctx->r25);
    // 0x80046E54: or          $t7, $s2, $zero
    ctx->r15 = ctx->r18 | 0;
    // 0x80046E58: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x80046E5C: sll         $s5, $t7, 16
    ctx->r21 = S32(ctx->r15 << 16);
    // 0x80046E60: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80046E64: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80046E68: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x80046E6C: b           L_80046E8C
    // 0x80046E70: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
        goto L_80046E8C;
    // 0x80046E70: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
L_80046E74:
    // 0x80046E74: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80046E78: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80046E7C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80046E80: jal         0x80046708
    // 0x80046E84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _loadBuffer(rdram, ctx);
        goto after_2;
    // 0x80046E84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x80046E88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80046E8C:
    // 0x80046E8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046E90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80046E94: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80046E98: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80046E9C: jal         0x80046894
    // 0x80046EA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _loadOutputBuffer(rdram, ctx);
        goto after_3;
    // 0x80046EA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80046EA4: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x80046EA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80046EAC: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x80046EB0: beq         $a0, $zero, L_80046F04
    if (ctx->r4 == 0) {
        // 0x80046EB4: andi        $t4, $a0, 0xFFFF
        ctx->r12 = ctx->r4 & 0XFFFF;
            goto L_80046F04;
    }
    // 0x80046EB4: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80046EB8: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x80046EBC: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x80046EC0: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80046EC4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80046EC8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80046ECC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80046ED0: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x80046ED4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x80046ED8: bnel        $t2, $zero, L_80046F08
    if (ctx->r10 != 0) {
        // 0x80046EDC: lh          $v1, 0xA($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XA);
            goto L_80046F08;
    }
    goto skip_1;
    // 0x80046EDC: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    skip_1:
    // 0x80046EE0: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80046EE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046EE8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80046EEC: bne         $t3, $zero, L_80046F04
    if (ctx->r11 != 0) {
        // 0x80046EF0: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80046F04;
    }
    // 0x80046EF0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80046EF4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80046EF8: jal         0x80046580
    // 0x80046EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _saveBuffer(rdram, ctx);
        goto after_4;
    // 0x80046EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x80046F00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80046F04:
    // 0x80046F04: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
L_80046F08:
    // 0x80046F08: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80046F0C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x80046F10: beq         $v1, $zero, L_80046F50
    if (ctx->r3 == 0) {
        // 0x80046F14: andi        $t5, $v1, 0xFFFF
        ctx->r13 = ctx->r3 & 0XFFFF;
            goto L_80046F50;
    }
    // 0x80046F14: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x80046F18: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80046F1C: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x80046F20: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x80046F24: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80046F28: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80046F2C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80046F30: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80046F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80046F38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046F3C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80046F40: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80046F44: jal         0x80046580
    // 0x80046F48: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    _saveBuffer(rdram, ctx);
        goto after_5;
    // 0x80046F48: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x80046F4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80046F50:
    // 0x80046F50: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80046F54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80046F58: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80046F5C: beql        $a0, $zero, L_80046F74
    if (ctx->r4 == 0) {
        // 0x80046F60: lw          $t3, 0x24($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X24);
            goto L_80046F74;
    }
    goto skip_2;
    // 0x80046F60: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x80046F64: jal         0x800464C8
    // 0x80046F68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    _filterBuffer(rdram, ctx);
        goto after_6;
    // 0x80046F68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x80046F6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80046F70: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
L_80046F74:
    // 0x80046F74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80046F78: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80046F7C: bne         $t3, $zero, L_80046F94
    if (ctx->r11 != 0) {
        // 0x80046F80: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80046F94;
    }
    // 0x80046F80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80046F84: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x80046F88: jal         0x80046580
    // 0x80046F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    _saveBuffer(rdram, ctx);
        goto after_7;
    // 0x80046F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
    // 0x80046F90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80046F94:
    // 0x80046F94: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80046F98: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80046F9C: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x80046FA0: beq         $v1, $zero, L_80046FCC
    if (ctx->r3 == 0) {
        // 0x80046FA4: sra         $s7, $t4, 16
        ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
            goto L_80046FCC;
    }
    // 0x80046FA4: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80046FA8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80046FAC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x80046FB0: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x80046FB4: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80046FB8: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x80046FBC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80046FC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80046FC4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80046FC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80046FCC:
    // 0x80046FCC: lbu         $t6, 0x24($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X24);
    // 0x80046FD0: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x80046FD4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x80046FD8: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80046FDC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80046FE0: bne         $at, $zero, L_80046E18
    if (ctx->r1 != 0) {
        // 0x80046FE4: addu        $v1, $v0, $t3
        ctx->r3 = ADD32(ctx->r2, ctx->r11);
            goto L_80046E18;
    }
    // 0x80046FE4: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x80046FE8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
L_80046FEC:
    // 0x80046FEC: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x80046FF0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80046FF4: lw          $t3, 0x14($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X14);
    // 0x80046FF8: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x80046FFC: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80047000: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80047004: sltu        $at, $t4, $t8
    ctx->r1 = ctx->r12 < ctx->r24 ? 1 : 0;
    // 0x80047008: beq         $at, $zero, L_80047018
    if (ctx->r1 == 0) {
        // 0x8004700C: sw          $t8, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r24;
            goto L_80047018;
    }
    // 0x8004700C: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
    // 0x80047010: subu        $t5, $t8, $t2
    ctx->r13 = SUB32(ctx->r24, ctx->r10);
    // 0x80047014: sw          $t5, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r13;
L_80047018:
    // 0x80047018: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8004701C: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x80047020: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80047024: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80047028: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8004702C: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x80047030: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80047034: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80047038: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8004703C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80047040: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80047044: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80047048: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8004704C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80047050: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047054: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047058: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8004705C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047060: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047064: jr          $ra
    // 0x80047068: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80047068: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void initOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000488C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80004890: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80004894: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80004898: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000489C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800048A0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800048A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800048A8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x800048AC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800048B0: lw          $t6, 0x2ED4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2ED4);
    // 0x800048B4: nop

    // 0x800048B8: beq         $t6, $zero, L_80004EBC
    if (ctx->r14 == 0) {
        // 0x800048BC: nop
    
            goto L_80004EBC;
    }
    // 0x800048BC: nop

    // 0x800048C0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800048C4: lw          $t7, 0x2ED4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2ED4);
    // 0x800048C8: nop

    // 0x800048CC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800048D0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800048D4: lw          $t8, 0x2ED4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2ED4);
    // 0x800048D8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800048DC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800048E0: nop

    // 0x800048E4: sw          $t9, 0x2ED4($at)
    MEM_W(0X2ED4, ctx->r1) = ctx->r25;
    // 0x800048E8: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x800048EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800048F0: nop

    // 0x800048F4: sb          $t0, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r8;
    // 0x800048F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800048FC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80004900: nop

    // 0x80004904: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80004908: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x8000490C: nop

    // 0x80004910: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x80004914: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80004918: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x8000491C: nop

    // 0x80004920: slti        $at, $s0, 0x81
    ctx->r1 = SIGNED(ctx->r16) < 0X81 ? 1 : 0;
    // 0x80004924: bne         $at, $zero, L_80004964
    if (ctx->r1 != 0) {
        // 0x80004928: nop
    
            goto L_80004964;
    }
    // 0x80004928: nop

    // 0x8000492C: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x80004930: beq         $s0, $at, L_80004C00
    if (ctx->r16 == ctx->r1) {
        // 0x80004934: nop
    
            goto L_80004C00;
    }
    // 0x80004934: nop

    // 0x80004938: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x8000493C: beq         $s0, $at, L_80004CB8
    if (ctx->r16 == ctx->r1) {
        // 0x80004940: nop
    
            goto L_80004CB8;
    }
    // 0x80004940: nop

    // 0x80004944: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x80004948: beq         $s0, $at, L_80004D60
    if (ctx->r16 == ctx->r1) {
        // 0x8000494C: nop
    
            goto L_80004D60;
    }
    // 0x8000494C: nop

    // 0x80004950: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x80004954: beq         $s0, $at, L_80004E08
    if (ctx->r16 == ctx->r1) {
        // 0x80004958: nop
    
            goto L_80004E08;
    }
    // 0x80004958: nop

    // 0x8000495C: b           L_80004EB0
    // 0x80004960: nop

        goto L_80004EB0;
    // 0x80004960: nop

L_80004964:
    // 0x80004964: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004968: beq         $s0, $at, L_800049A8
    if (ctx->r16 == ctx->r1) {
        // 0x8000496C: nop
    
            goto L_800049A8;
    }
    // 0x8000496C: nop

    // 0x80004970: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80004974: beq         $s0, $at, L_80004A30
    if (ctx->r16 == ctx->r1) {
        // 0x80004978: nop
    
            goto L_80004A30;
    }
    // 0x80004978: nop

    // 0x8000497C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80004980: beq         $s0, $at, L_80004AAC
    if (ctx->r16 == ctx->r1) {
        // 0x80004984: nop
    
            goto L_80004AAC;
    }
    // 0x80004984: nop

    // 0x80004988: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8000498C: beq         $s0, $at, L_80004B28
    if (ctx->r16 == ctx->r1) {
        // 0x80004990: nop
    
            goto L_80004B28;
    }
    // 0x80004990: nop

    // 0x80004994: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80004998: beq         $s0, $at, L_80004BAC
    if (ctx->r16 == ctx->r1) {
        // 0x8000499C: nop
    
            goto L_80004BAC;
    }
    // 0x8000499C: nop

    // 0x800049A0: b           L_80004EB0
    // 0x800049A4: nop

        goto L_80004EB0;
    // 0x800049A4: nop

L_800049A8:
    // 0x800049A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800049AC: nop

    // 0x800049B0: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
    // 0x800049B4: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x800049B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800049BC: addiu       $t8, $zero, 0x103
    ctx->r24 = ADD32(0, 0X103);
    // 0x800049C0: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x800049C4: sh          $t9, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r25;
    // 0x800049C8: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x800049CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800049D0: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800049D4: sb          $t2, 0xC($t3)
    MEM_B(0XC, ctx->r11) = ctx->r10;
    // 0x800049D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800049DC: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x800049E0: lbu         $t5, 0xC($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XC);
    // 0x800049E4: nop

    // 0x800049E8: subu        $t8, $t6, $t5
    ctx->r24 = SUB32(ctx->r14, ctx->r13);
    // 0x800049EC: sb          $t8, 0xD($t4)
    MEM_B(0XD, ctx->r12) = ctx->r24;
    // 0x800049F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800049F4: nop

    // 0x800049F8: lbu         $t9, 0xD($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0XD);
    // 0x800049FC: nop

    // 0x80004A00: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80004A04: bgez        $t9, L_80004A1C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80004A08: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80004A1C;
    }
    // 0x80004A08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80004A0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80004A10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80004A14: nop

    // 0x80004A18: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80004A1C:
    // 0x80004A1C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80004A20: nop

    // 0x80004A24: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80004A28: b           L_80004EBC
    // 0x80004A2C: nop

        goto L_80004EBC;
    // 0x80004A2C: nop

L_80004A30:
    // 0x80004A30: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004A34: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A38: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x80004A3C: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x80004A40: sh          $t3, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r11;
    // 0x80004A44: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A48: nop

    // 0x80004A4C: lhu         $t8, 0x6($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X6);
    // 0x80004A50: nop

    // 0x80004A54: sh          $t8, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r24;
    // 0x80004A58: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A5C: nop

    // 0x80004A60: sb          $zero, 0x5($t4)
    MEM_B(0X5, ctx->r12) = 0;
    // 0x80004A64: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80004A68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A6C: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80004A70: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x80004A74: sb          $t0, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r8;
    // 0x80004A78: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A7C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80004A80: sb          $t1, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r9;
    // 0x80004A84: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004A88: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x80004A8C: sb          $t6, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r14;
    // 0x80004A90: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80004A94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80004A98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80004A9C: nop

    // 0x80004AA0: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80004AA4: b           L_80004EBC
    // 0x80004AA8: nop

        goto L_80004EBC;
    // 0x80004AA8: nop

L_80004AAC:
    // 0x80004AAC: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004AB0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80004AB4: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80004AB8: subu        $t7, $t9, $t4
    ctx->r15 = SUB32(ctx->r25, ctx->r12);
    // 0x80004ABC: sh          $t7, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r15;
    // 0x80004AC0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80004AC4: nop

    // 0x80004AC8: sh          $zero, 0x8($t2)
    MEM_H(0X8, ctx->r10) = 0;
    // 0x80004ACC: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x80004AD0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004AD4: nop

    // 0x80004AD8: sb          $t1, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r9;
    // 0x80004ADC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004AE0: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x80004AE4: sb          $t6, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r14;
    // 0x80004AE8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80004AEC: nop

    // 0x80004AF0: lbu         $t9, 0xC($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0XC);
    // 0x80004AF4: nop

    // 0x80004AF8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80004AFC: bgez        $t9, L_80004B14
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80004B00: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80004B14;
    }
    // 0x80004B00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80004B04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80004B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80004B0C: nop

    // 0x80004B10: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80004B14:
    // 0x80004B14: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80004B18: nop

    // 0x80004B1C: swc1        $f18, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f18.u32l;
    // 0x80004B20: b           L_80004EBC
    // 0x80004B24: nop

        goto L_80004EBC;
    // 0x80004B24: nop

L_80004B28:
    // 0x80004B28: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004B2C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80004B30: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x80004B34: subu        $t2, $t0, $t7
    ctx->r10 = SUB32(ctx->r8, ctx->r15);
    // 0x80004B38: sh          $t2, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r10;
    // 0x80004B3C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004B40: nop

    // 0x80004B44: sh          $zero, 0x8($t3)
    MEM_H(0X8, ctx->r11) = 0;
    // 0x80004B48: lbu         $t6, 0x43($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X43);
    // 0x80004B4C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004B50: nop

    // 0x80004B54: sb          $t6, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r14;
    // 0x80004B58: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x80004B5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80004B60: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80004B64: subu        $t4, $t9, $t5
    ctx->r12 = SUB32(ctx->r25, ctx->r13);
    // 0x80004B68: sb          $t4, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r12;
    // 0x80004B6C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80004B70: nop

    // 0x80004B74: lbu         $t2, 0xC($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0XC);
    // 0x80004B78: nop

    // 0x80004B7C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80004B80: bgez        $t2, L_80004B98
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80004B84: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80004B98;
    }
    // 0x80004B84: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80004B88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80004B8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80004B90: nop

    // 0x80004B94: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_80004B98:
    // 0x80004B98: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80004B9C: nop

    // 0x80004BA0: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80004BA4: b           L_80004EBC
    // 0x80004BA8: nop

        goto L_80004EBC;
    // 0x80004BA8: nop

L_80004BAC:
    // 0x80004BAC: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80004BB0: jal         0x80005A80
    // 0x80004BB4: nop

    _depth2Cents(rdram, ctx);
        goto after_0;
    // 0x80004BB4: nop

    after_0:
    // 0x80004BB8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004BBC: nop

    // 0x80004BC0: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x80004BC4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80004BC8: nop

    // 0x80004BCC: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
    // 0x80004BD0: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004BD4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80004BD8: addiu       $t9, $zero, 0x103
    ctx->r25 = ADD32(0, 0X103);
    // 0x80004BDC: subu        $t5, $t9, $t8
    ctx->r13 = SUB32(ctx->r25, ctx->r24);
    // 0x80004BE0: sh          $t5, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r13;
    // 0x80004BE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80004BE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80004BEC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80004BF0: nop

    // 0x80004BF4: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x80004BF8: b           L_80004EBC
    // 0x80004BFC: nop

        goto L_80004EBC;
    // 0x80004BFC: nop

L_80004C00:
    // 0x80004C00: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004C04: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004C08: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x80004C0C: subu        $t1, $t2, $t7
    ctx->r9 = SUB32(ctx->r10, ctx->r15);
    // 0x80004C10: sh          $t1, 0x6($t3)
    MEM_H(0X6, ctx->r11) = ctx->r9;
    // 0x80004C14: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80004C18: nop

    // 0x80004C1C: lhu         $t9, 0x6($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X6);
    // 0x80004C20: nop

    // 0x80004C24: sh          $t9, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r25;
    // 0x80004C28: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004C2C: nop

    // 0x80004C30: sb          $zero, 0x5($t8)
    MEM_B(0X5, ctx->r24) = 0;
    // 0x80004C34: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80004C38: jal         0x80005A80
    // 0x80004C3C: nop

    _depth2Cents(rdram, ctx);
        goto after_1;
    // 0x80004C3C: nop

    after_1:
    // 0x80004C40: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80004C44: nop

    // 0x80004C48: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80004C4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80004C50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80004C54: nop

    // 0x80004C58: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80004C5C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80004C60: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80004C64: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80004C68: nop

    // 0x80004C6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80004C70: jal         0x80034920
    // 0x80004C74: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    alCents2Ratio(rdram, ctx);
        goto after_2;
    // 0x80004C74: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_2:
    // 0x80004C78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80004C7C: nop

    // 0x80004C80: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x80004C84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80004C88: jal         0x80034920
    // 0x80004C8C: nop

    alCents2Ratio(rdram, ctx);
        goto after_3;
    // 0x80004C8C: nop

    after_3:
    // 0x80004C90: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80004C94: nop

    // 0x80004C98: swc1        $f0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f0.u32l;
    // 0x80004C9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80004CA0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80004CA4: lwc1        $f18, 0x10($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X10);
    // 0x80004CA8: nop

    // 0x80004CAC: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x80004CB0: b           L_80004EBC
    // 0x80004CB4: nop

        goto L_80004EBC;
    // 0x80004CB4: nop

L_80004CB8:
    // 0x80004CB8: lbu         $t3, 0x3F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004CBC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004CC0: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80004CC4: subu        $t6, $t9, $t3
    ctx->r14 = SUB32(ctx->r25, ctx->r11);
    // 0x80004CC8: sh          $t6, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r14;
    // 0x80004CCC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80004CD0: nop

    // 0x80004CD4: lhu         $t4, 0x6($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0X6);
    // 0x80004CD8: nop

    // 0x80004CDC: sh          $t4, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r12;
    // 0x80004CE0: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80004CE4: jal         0x80005A80
    // 0x80004CE8: nop

    _depth2Cents(rdram, ctx);
        goto after_4;
    // 0x80004CE8: nop

    after_4:
    // 0x80004CEC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80004CF0: nop

    // 0x80004CF4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80004CF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80004CFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80004D00: nop

    // 0x80004D04: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80004D08: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80004D0C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80004D10: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80004D14: nop

    // 0x80004D18: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80004D1C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80004D20: nop

    // 0x80004D24: sw          $t7, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r15;
    // 0x80004D28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80004D2C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80004D30: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x80004D34: sw          $t3, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r11;
    // 0x80004D38: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80004D3C: nop

    // 0x80004D40: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x80004D44: jal         0x80034920
    // 0x80004D48: nop

    alCents2Ratio(rdram, ctx);
        goto after_5;
    // 0x80004D48: nop

    after_5:
    // 0x80004D4C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80004D50: nop

    // 0x80004D54: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x80004D58: b           L_80004EBC
    // 0x80004D5C: nop

        goto L_80004EBC;
    // 0x80004D5C: nop

L_80004D60:
    // 0x80004D60: lbu         $t5, 0x3F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004D64: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80004D68: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x80004D6C: subu        $t2, $t0, $t5
    ctx->r10 = SUB32(ctx->r8, ctx->r13);
    // 0x80004D70: sh          $t2, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r10;
    // 0x80004D74: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80004D78: nop

    // 0x80004D7C: lhu         $t9, 0x6($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X6);
    // 0x80004D80: nop

    // 0x80004D84: sh          $t9, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r25;
    // 0x80004D88: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80004D8C: jal         0x80005A80
    // 0x80004D90: nop

    _depth2Cents(rdram, ctx);
        goto after_6;
    // 0x80004D90: nop

    after_6:
    // 0x80004D94: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80004D98: nop

    // 0x80004D9C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80004DA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80004DA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80004DA8: nop

    // 0x80004DAC: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80004DB0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80004DB4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80004DB8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80004DBC: nop

    // 0x80004DC0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80004DC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80004DC8: negu        $t4, $t8
    ctx->r12 = SUB32(0, ctx->r24);
    // 0x80004DCC: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
    // 0x80004DD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80004DD4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80004DD8: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x80004DDC: sw          $t2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r10;
    // 0x80004DE0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80004DE4: nop

    // 0x80004DE8: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x80004DEC: jal         0x80034920
    // 0x80004DF0: nop

    alCents2Ratio(rdram, ctx);
        goto after_7;
    // 0x80004DF0: nop

    after_7:
    // 0x80004DF4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80004DF8: nop

    // 0x80004DFC: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x80004E00: b           L_80004EBC
    // 0x80004E04: nop

        goto L_80004EBC;
    // 0x80004E04: nop

L_80004E08:
    // 0x80004E08: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80004E0C: jal         0x80005A80
    // 0x80004E10: nop

    _depth2Cents(rdram, ctx);
        goto after_8;
    // 0x80004E10: nop

    after_8:
    // 0x80004E14: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80004E18: nop

    // 0x80004E1C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80004E20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80004E24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80004E28: nop

    // 0x80004E2C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80004E30: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80004E34: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80004E38: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80004E3C: nop

    // 0x80004E40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80004E44: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80004E48: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80004E4C: nop

    // 0x80004E50: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80004E54: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x80004E58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80004E5C: nop

    // 0x80004E60: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
    // 0x80004E64: lbu         $t5, 0x3F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3F);
    // 0x80004E68: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80004E6C: addiu       $t2, $zero, 0x103
    ctx->r10 = ADD32(0, 0X103);
    // 0x80004E70: subu        $t7, $t2, $t5
    ctx->r15 = SUB32(ctx->r10, ctx->r13);
    // 0x80004E74: sh          $t7, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r15;
    // 0x80004E78: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x80004E7C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80004E80: nop

    // 0x80004E84: sb          $t1, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r9;
    // 0x80004E88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80004E8C: jal         0x80034920
    // 0x80004E90: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    alCents2Ratio(rdram, ctx);
        goto after_9;
    // 0x80004E90: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_9:
    // 0x80004E94: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80004E98: nop

    // 0x80004E9C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80004EA0: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x80004EA4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80004EA8: b           L_80004EBC
    // 0x80004EAC: nop

        goto L_80004EBC;
    // 0x80004EAC: nop

L_80004EB0:
    // 0x80004EB0: lui         $t4, 0x3F
    ctx->r12 = S32(0X3F << 16);
    // 0x80004EB4: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x80004EB8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_80004EBC:
    // 0x80004EBC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80004EC0: b           L_80004ED0
    // 0x80004EC4: nop

        goto L_80004ED0;
    // 0x80004EC4: nop

    // 0x80004EC8: b           L_80004ED0
    // 0x80004ECC: nop

        goto L_80004ED0;
    // 0x80004ECC: nop

L_80004ED0:
    // 0x80004ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80004ED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80004ED8: jr          $ra
    // 0x80004EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80004EDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800108D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800108D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800108D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800108D8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800108DC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800108E0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800108E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800108E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800108EC: nop

    // 0x800108F0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800108F4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800108F8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800108FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80010900: nop

    // 0x80010904: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80010908: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x8001090C: bne         $t8, $at, L_80010A40
    if (ctx->r24 != ctx->r1) {
        // 0x80010910: nop
    
            goto L_80010A40;
    }
    // 0x80010910: nop

    // 0x80010914: b           L_8001091C
    // 0x80010918: nop

        goto L_8001091C;
    // 0x80010918: nop

L_8001091C:
    // 0x8001091C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80010920: nop

    // 0x80010924: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80010928: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x8001092C: nop

    // 0x80010930: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80010934: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x80010938: nop

    // 0x8001093C: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x80010940: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80010944: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80010948: blez        $t2, L_8001099C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8001094C: nop
    
            goto L_8001099C;
    }
    // 0x8001094C: nop

L_80010950:
    // 0x80010950: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80010954: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x80010958: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8001095C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80010960: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80010964: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80010968: nop

    // 0x8001096C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010970: bne         $at, $zero, L_80010980
    if (ctx->r1 != 0) {
        // 0x80010974: nop
    
            goto L_80010980;
    }
    // 0x80010974: nop

    // 0x80010978: b           L_8001099C
    // 0x8001097C: nop

        goto L_8001099C;
    // 0x8001097C: nop

L_80010980:
    // 0x80010980: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80010984: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80010988: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001098C: slt         $t1, $t0, $t0
    ctx->r9 = SIGNED(ctx->r8) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80010990: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80010994: bne         $at, $zero, L_80010950
    if (ctx->r1 != 0) {
        // 0x80010998: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_80010950;
    }
    // 0x80010998: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_8001099C:
    // 0x8001099C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800109A0: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800109A4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800109A8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800109AC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800109B0: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x800109B4: nop

    // 0x800109B8: bne         $t7, $t8, L_800109DC
    if (ctx->r15 != ctx->r24) {
        // 0x800109BC: nop
    
            goto L_800109DC;
    }
    // 0x800109BC: nop

    // 0x800109C0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800109C4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800109C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800109CC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800109D0: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800109D4: b           L_80010A38
    // 0x800109D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
        goto L_80010A38;
    // 0x800109D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
L_800109DC:
    // 0x800109DC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800109E0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800109E4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800109E8: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x800109EC: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x800109F0: lw          $t9, -0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X4);
    // 0x800109F4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800109F8: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x800109FC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80010A00: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80010A04: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80010A08: lwc1        $f16, -0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, -0X4);
    // 0x80010A0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80010A10: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80010A14: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80010A18: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80010A1C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80010A20: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80010A24: nop

    // 0x80010A28: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80010A2C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80010A30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80010A34: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
L_80010A38:
    // 0x80010A38: b           L_80010A40
    // 0x80010A3C: nop

        goto L_80010A40;
    // 0x80010A3C: nop

L_80010A40:
    // 0x80010A40: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80010A44: b           L_80010A54
    // 0x80010A48: nop

        goto L_80010A54;
    // 0x80010A48: nop

    // 0x80010A4C: b           L_80010A54
    // 0x80010A50: nop

        goto L_80010A54;
    // 0x80010A50: nop

L_80010A54:
    // 0x80010A54: jr          $ra
    // 0x80010A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80010A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001D1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D1F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D1F8: sb          $zero, -0x1EE4($at)
    MEM_B(-0X1EE4, ctx->r1) = 0;
    // 0x8001D1FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D200: sh          $zero, -0x1EDC($at)
    MEM_H(-0X1EDC, ctx->r1) = 0;
    // 0x8001D204: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8001D208: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D20C: sb          $t6, -0x1EEF($at)
    MEM_B(-0X1EEF, ctx->r1) = ctx->r14;
    // 0x8001D210: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8001D214: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D218: sb          $t7, -0x1EEC($at)
    MEM_B(-0X1EEC, ctx->r1) = ctx->r15;
    // 0x8001D21C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8001D220: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D224: sb          $t8, -0x1EEA($at)
    MEM_B(-0X1EEA, ctx->r1) = ctx->r24;
    // 0x8001D228: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8001D22C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D230: sb          $t9, -0x1ED4($at)
    MEM_B(-0X1ED4, ctx->r1) = ctx->r25;
    // 0x8001D234: jr          $ra
    // 0x8001D238: nop

    return;
    // 0x8001D238: nop

    // 0x8001D23C: jr          $ra
    // 0x8001D240: nop

    return;
    // 0x8001D240: nop

;}
RECOMP_FUNC void func_8001EB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EB68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001EB6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001EB70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001EB74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001EB78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001EB7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001EB80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001EB84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EB88: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8001EB8C: jal         0x8001EA68
    // 0x8001EB90: nop

    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x8001EB90: nop

    after_0:
    // 0x8001EB94: jal         0x80017FF8
    // 0x8001EB98: nop

    Get_Level_LightsType(rdram, ctx);
        goto after_1;
    // 0x8001EB98: nop

    after_1:
    // 0x8001EB9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001EBA0: bne         $v0, $at, L_8001EBD0
    if (ctx->r2 != ctx->r1) {
        // 0x8001EBA4: nop
    
            goto L_8001EBD0;
    }
    // 0x8001EBA4: nop

    // 0x8001EBA8: jal         0x8001E96C
    // 0x8001EBAC: nop

    Get_DecompressHeap(rdram, ctx);
        goto after_2;
    // 0x8001EBAC: nop

    after_2:
    // 0x8001EBB0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001EBB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001EBB8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001EBBC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8001EBC0: lw          $a0, -0x3560($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3560);
    // 0x8001EBC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001EBC8: jal         0x800180C4
    // 0x8001EBCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800180C4(rdram, ctx);
        goto after_3;
    // 0x8001EBCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_8001EBD0:
    // 0x8001EBD0: b           L_8001EBD8
    // 0x8001EBD4: nop

        goto L_8001EBD8;
    // 0x8001EBD4: nop

L_8001EBD8:
    // 0x8001EBD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EBDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001EBE0: jr          $ra
    // 0x8001EBE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001EBE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000156C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001574: lui         $t6, 0x1C
    ctx->r14 = S32(0X1C << 16);
    // 0x80001578: lui         $t7, 0x1C
    ctx->r15 = S32(0X1C << 16);
    // 0x8000157C: addiu       $t7, $t7, 0x73D0
    ctx->r15 = ADD32(ctx->r15, 0X73D0);
    // 0x80001580: addiu       $t6, $t6, -0x3B20
    ctx->r14 = ADD32(ctx->r14, -0X3B20);
    // 0x80001584: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001588: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x8000158C: jal         0x8000068C
    // 0x80001590: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001590: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001594: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001598: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x8000159C: addiu       $t9, $t9, -0x3320
    ctx->r25 = ADD32(ctx->r25, -0X3320);
    // 0x800015A0: addiu       $t8, $t8, -0x4080
    ctx->r24 = ADD32(ctx->r24, -0X4080);
    // 0x800015A4: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800015A8: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800015AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800015B0: jal         0x8000068C
    // 0x800015B4: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800015B4: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800015B8: b           L_800015C0
    // 0x800015BC: nop

        goto L_800015C0;
    // 0x800015BC: nop

L_800015C0:
    // 0x800015C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800015C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800015C8: jr          $ra
    // 0x800015CC: nop

    return;
    // 0x800015CC: nop

;}
