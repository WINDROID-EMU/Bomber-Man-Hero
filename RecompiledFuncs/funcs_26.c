#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800F38AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F38AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F38B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F38B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F38B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F38BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F38C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F38C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F38C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F38CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F38D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F38D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F38D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F38DC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F38E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F38E4: nop

    // 0x800F38E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F38EC: nop

    // 0x800F38F0: bne         $t1, $zero, L_800F3980
    if (ctx->r9 != 0) {
        // 0x800F38F4: nop
    
            goto L_800F3980;
    }
    // 0x800F38F4: nop

    // 0x800F38F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F38FC: nop

    // 0x800F3900: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F3904: nop

    // 0x800F3908: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F390C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F3910: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3914: nop

    // 0x800F3918: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800F391C: nop

    // 0x800F3920: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800F3924: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800F3928: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F392C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3930: nop

    // 0x800F3934: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800F3938: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F393C: nop

    // 0x800F3940: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800F3944: nop

    // 0x800F3948: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x800F394C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800F3950: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F3954: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3958: nop

    // 0x800F395C: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
    // 0x800F3960: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F3964: lwc1        $f10, 0x56D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X56D8);
    // 0x800F3968: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F396C: nop

    // 0x800F3970: swc1        $f10, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f10.u32l;
    // 0x800F3974: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3978: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800F397C: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
L_800F3980:
    // 0x800F3980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3988: jal         0x80028FA0
    // 0x800F398C: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800F398C: nop

    after_0:
    // 0x800F3990: beq         $v0, $zero, L_800F39B0
    if (ctx->r2 == 0) {
        // 0x800F3994: nop
    
            goto L_800F39B0;
    }
    // 0x800F3994: nop

    // 0x800F3998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F399C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F39A0: jal         0x8002B0E4
    // 0x800F39A4: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800F39A4: nop

    after_1:
    // 0x800F39A8: b           L_800F3A58
    // 0x800F39AC: nop

        goto L_800F3A58;
    // 0x800F39AC: nop

L_800F39B0:
    // 0x800F39B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F39B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F39B8: jal         0x80029D8C
    // 0x800F39BC: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x800F39BC: nop

    after_2:
    // 0x800F39C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F39C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F39C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F39CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F39D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F39D4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800F39D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F39DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800F39E0: jal         0x80029018
    // 0x800F39E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800F39E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800F39E8: beq         $v0, $zero, L_800F3A08
    if (ctx->r2 == 0) {
        // 0x800F39EC: nop
    
            goto L_800F3A08;
    }
    // 0x800F39EC: nop

    // 0x800F39F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F39F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F39F8: jal         0x8002B0E4
    // 0x800F39FC: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800F39FC: nop

    after_4:
    // 0x800F3A00: b           L_800F3A58
    // 0x800F3A04: nop

        goto L_800F3A58;
    // 0x800F3A04: nop

L_800F3A08:
    // 0x800F3A08: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3A0C: nop

    // 0x800F3A10: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800F3A14: nop

    // 0x800F3A18: bne         $t2, $zero, L_800F3A38
    if (ctx->r10 != 0) {
        // 0x800F3A1C: nop
    
            goto L_800F3A38;
    }
    // 0x800F3A1C: nop

    // 0x800F3A20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3A24: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800F3A28: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x800F3A2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3A30: b           L_800F3A50
    // 0x800F3A34: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_800F3A50;
    // 0x800F3A34: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F3A38:
    // 0x800F3A38: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3A3C: nop

    // 0x800F3A40: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800F3A44: nop

    // 0x800F3A48: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800F3A4C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_800F3A50:
    // 0x800F3A50: b           L_800F3A58
    // 0x800F3A54: nop

        goto L_800F3A58;
    // 0x800F3A54: nop

L_800F3A58:
    // 0x800F3A58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3A5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F3A60: jr          $ra
    // 0x800F3A64: nop

    return;
    // 0x800F3A64: nop

;}
RECOMP_FUNC void func_800D36E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D36E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D36EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D36F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D36F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D36F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D36FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D370C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D3710: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D3714: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800D3718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D371C: bne         $t8, $at, L_800D373C
    if (ctx->r24 != ctx->r1) {
        // 0x800D3720: nop
    
            goto L_800D373C;
    }
    // 0x800D3720: nop

    // 0x800D3724: b           L_800D372C
    // 0x800D3728: nop

        goto L_800D372C;
    // 0x800D3728: nop

L_800D372C:
    // 0x800D372C: jal         0x800D3578
    // 0x800D3730: nop

    func_800D3578(rdram, ctx);
        goto after_0;
    // 0x800D3730: nop

    after_0:
    // 0x800D3734: b           L_800D3744
    // 0x800D3738: nop

        goto L_800D3744;
    // 0x800D3738: nop

L_800D373C:
    // 0x800D373C: b           L_800D3744
    // 0x800D3740: nop

        goto L_800D3744;
    // 0x800D3740: nop

L_800D3744:
    // 0x800D3744: b           L_800D374C
    // 0x800D3748: nop

        goto L_800D374C;
    // 0x800D3748: nop

L_800D374C:
    // 0x800D374C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D3750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D3754: jr          $ra
    // 0x800D3758: nop

    return;
    // 0x800D3758: nop

;}
RECOMP_FUNC void func_800818CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800818CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800818D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800818D4: jal         0x8001838C
    // 0x800818D8: nop

    func_8001838C(rdram, ctx);
        goto after_0;
    // 0x800818D8: nop

    after_0:
    // 0x800818DC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800818E0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800818E4: ori         $at, $zero, 0xBBB0
    ctx->r1 = 0 | 0XBBB0;
    // 0x800818E8: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x800818EC: addiu       $t6, $zero, 0x8F
    ctx->r14 = ADD32(0, 0X8F);
    // 0x800818F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800818F4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_800818F8:
    // 0x800818F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800818FC: nop

    // 0x80081900: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80081904: nop

    // 0x80081908: beq         $t0, $zero, L_800819A8
    if (ctx->r8 == 0) {
        // 0x8008190C: nop
    
            goto L_800819A8;
    }
    // 0x8008190C: nop

    // 0x80081910: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80081914: addiu       $at, $zero, 0x2CA
    ctx->r1 = ADD32(0, 0X2CA);
    // 0x80081918: lh          $t2, 0xE4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE4);
    // 0x8008191C: nop

    // 0x80081920: beq         $t2, $at, L_80081940
    if (ctx->r10 == ctx->r1) {
        // 0x80081924: nop
    
            goto L_80081940;
    }
    // 0x80081924: nop

    // 0x80081928: addiu       $at, $zero, 0x2CB
    ctx->r1 = ADD32(0, 0X2CB);
    // 0x8008192C: beq         $t2, $at, L_80081940
    if (ctx->r10 == ctx->r1) {
        // 0x80081930: nop
    
            goto L_80081940;
    }
    // 0x80081930: nop

    // 0x80081934: addiu       $at, $zero, 0x2CC
    ctx->r1 = ADD32(0, 0X2CC);
    // 0x80081938: bne         $t2, $at, L_8008197C
    if (ctx->r10 != ctx->r1) {
        // 0x8008193C: nop
    
            goto L_8008197C;
    }
    // 0x8008193C: nop

L_80081940:
    // 0x80081940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80081944: jal         0x8001C1A8
    // 0x80081948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_1;
    // 0x80081948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8008194C: beq         $v0, $zero, L_80081974
    if (ctx->r2 == 0) {
        // 0x80081950: nop
    
            goto L_80081974;
    }
    // 0x80081950: nop

    // 0x80081954: jal         0x8001838C
    // 0x80081958: nop

    func_8001838C(rdram, ctx);
        goto after_2;
    // 0x80081958: nop

    after_2:
    // 0x8008195C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80081960: jal         0x8001B014
    // 0x80081964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_3;
    // 0x80081964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80081968: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008196C: jal         0x8001C384
    // 0x80081970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_4;
    // 0x80081970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80081974:
    // 0x80081974: b           L_800819A8
    // 0x80081978: nop

        goto L_800819A8;
    // 0x80081978: nop

L_8008197C:
    // 0x8008197C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80081980: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80081984: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80081988: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008198C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80081990: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x80081994: lw          $a3, -0x3560($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3560);
    // 0x80081998: lh          $a1, 0xC0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0XC0);
    // 0x8008199C: lh          $a2, 0xBE($t3)
    ctx->r6 = MEM_H(ctx->r11, 0XBE);
    // 0x800819A0: jal         0x8001CDF4
    // 0x800819A4: nop

    func_8001CDF4(rdram, ctx);
        goto after_5;
    // 0x800819A4: nop

    after_5:
L_800819A8:
    // 0x800819A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800819AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800819B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800819B4: slti        $at, $t7, 0xCF
    ctx->r1 = SIGNED(ctx->r15) < 0XCF ? 1 : 0;
    // 0x800819B8: addiu       $t9, $t8, 0x150
    ctx->r25 = ADD32(ctx->r24, 0X150);
    // 0x800819BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800819C0: bne         $at, $zero, L_800818F8
    if (ctx->r1 != 0) {
        // 0x800819C4: sw          $t7, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r15;
            goto L_800818F8;
    }
    // 0x800819C4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800819C8: b           L_800819D0
    // 0x800819CC: nop

        goto L_800819D0;
    // 0x800819CC: nop

L_800819D0:
    // 0x800819D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800819D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800819D8: jr          $ra
    // 0x800819DC: nop

    return;
    // 0x800819DC: nop

;}
RECOMP_FUNC void func_800938C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800938C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800938C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800938CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800938D0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800938D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800938D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800938DC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800938E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800938E4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800938E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800938EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800938F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800938F4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800938F8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800938FC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093900: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093904: addiu       $a1, $a1, 0x1874
    ctx->r5 = ADD32(ctx->r5, 0X1874);
    // 0x80093908: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009390C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093914: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093918: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009391C: jal         0x80027464
    // 0x80093920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093924: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093928: b           L_80093930
    // 0x8009392C: nop

        goto L_80093930;
    // 0x8009392C: nop

L_80093930:
    // 0x80093930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093938: jr          $ra
    // 0x8009393C: nop

    return;
    // 0x8009393C: nop

;}
RECOMP_FUNC void func_800CB7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB7A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CB7A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CB7A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CB7AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB7B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CB7B4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CB7B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB7BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB7C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB7C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB7C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB7CC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800CB7D0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CB7D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CB7D8: beq         $s0, $at, L_800CB7F4
    if (ctx->r16 == ctx->r1) {
        // 0x800CB7DC: nop
    
            goto L_800CB7F4;
    }
    // 0x800CB7DC: nop

    // 0x800CB7E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CB7E4: beq         $s0, $at, L_800CB804
    if (ctx->r16 == ctx->r1) {
        // 0x800CB7E8: nop
    
            goto L_800CB804;
    }
    // 0x800CB7E8: nop

    // 0x800CB7EC: b           L_800CB814
    // 0x800CB7F0: nop

        goto L_800CB814;
    // 0x800CB7F0: nop

L_800CB7F4:
    // 0x800CB7F4: jal         0x800CB3D8
    // 0x800CB7F8: nop

    func_800CB3D8(rdram, ctx);
        goto after_0;
    // 0x800CB7F8: nop

    after_0:
    // 0x800CB7FC: b           L_800CB81C
    // 0x800CB800: nop

        goto L_800CB81C;
    // 0x800CB800: nop

L_800CB804:
    // 0x800CB804: jal         0x800CB770
    // 0x800CB808: nop

    func_800CB770(rdram, ctx);
        goto after_1;
    // 0x800CB808: nop

    after_1:
    // 0x800CB80C: b           L_800CB81C
    // 0x800CB810: nop

        goto L_800CB81C;
    // 0x800CB810: nop

L_800CB814:
    // 0x800CB814: b           L_800CB81C
    // 0x800CB818: nop

        goto L_800CB81C;
    // 0x800CB818: nop

L_800CB81C:
    // 0x800CB81C: b           L_800CB824
    // 0x800CB820: nop

        goto L_800CB824;
    // 0x800CB820: nop

L_800CB824:
    // 0x800CB824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB828: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CB82C: jr          $ra
    // 0x800CB830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CB830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80076C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076C4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80076C50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076C54: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80076C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076C5C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80076C60: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80076C64: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80076C68: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80076C6C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80076C70: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80076C74: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80076C78: nop

    // 0x80076C7C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80076C80: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80076C84: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x80076C88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076C8C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80076C90: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80076C94: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80076C98: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80076C9C: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x80076CA0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80076CA4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80076CA8: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x80076CAC: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x80076CB0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80076CB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076CB8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80076CBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076CC0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80076CC4: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80076CC8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80076CCC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80076CD0: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80076CD4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80076CD8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80076CDC: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x80076CE0: ori         $t1, $t1, 0x2205
    ctx->r9 = ctx->r9 | 0X2205;
    // 0x80076CE4: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80076CE8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80076CEC: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80076CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076CF4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80076CF8: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80076CFC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80076D00: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80076D04: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x80076D08: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x80076D0C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80076D10: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80076D14: nop

    // 0x80076D18: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80076D1C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80076D20: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80076D24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076D28: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80076D2C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80076D30: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80076D34: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80076D38: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x80076D3C: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x80076D40: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80076D44: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80076D48: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x80076D4C: ori         $t2, $t2, 0x3048
    ctx->r10 = ctx->r10 | 0X3048;
    // 0x80076D50: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80076D54: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80076D58: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80076D5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076D60: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80076D64: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80076D68: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80076D6C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80076D70: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x80076D74: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80076D78: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80076D7C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80076D80: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80076D84: ori         $t8, $t8, 0xF279
    ctx->r24 = ctx->r24 | 0XF279;
    // 0x80076D88: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80076D8C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80076D90: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x80076D94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076D98: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80076D9C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80076DA0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80076DA4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80076DA8: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x80076DAC: ori         $t2, $t2, 0x602
    ctx->r10 = ctx->r10 | 0X602;
    // 0x80076DB0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80076DB4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80076DB8: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x80076DBC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80076DC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076DC4: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80076DC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076DCC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80076DD0: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80076DD4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80076DD8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80076DDC: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80076DE0: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x80076DE4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80076DE8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80076DEC: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x80076DF0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80076DF4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80076DF8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80076DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076E00: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80076E04: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80076E08: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80076E0C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80076E10: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x80076E14: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x80076E18: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80076E1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80076E20: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80076E24: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80076E28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80076E2C: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80076E30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076E34: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80076E38: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80076E3C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80076E40: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80076E44: lui         $t0, 0xFD10
    ctx->r8 = S32(0XFD10 << 16);
    // 0x80076E48: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80076E4C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80076E50: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x80076E54: lw          $t3, 0xD0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD0);
    // 0x80076E58: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80076E5C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x80076E60: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80076E64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076E68: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80076E6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076E70: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80076E74: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80076E78: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80076E7C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80076E80: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x80076E84: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80076E88: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80076E8C: nop

    // 0x80076E90: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80076E94: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80076E98: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x80076E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076EA0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80076EA4: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80076EA8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80076EAC: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80076EB0: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x80076EB4: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x80076EB8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80076EBC: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80076EC0: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x80076EC4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80076EC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076ECC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80076ED0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076ED4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80076ED8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80076EDC: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80076EE0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80076EE4: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80076EE8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80076EEC: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80076EF0: nop

    // 0x80076EF4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80076EF8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80076EFC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80076F00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076F04: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80076F08: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80076F0C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x80076F10: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80076F14: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x80076F18: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80076F1C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80076F20: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x80076F24: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x80076F28: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80076F2C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80076F30: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80076F34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076F38: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80076F3C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80076F40: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80076F44: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80076F48: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80076F4C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80076F50: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80076F54: nop

    // 0x80076F58: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80076F5C: b           L_80076F64
    // 0x80076F60: nop

        goto L_80076F64;
    // 0x80076F60: nop

L_80076F64:
    // 0x80076F64: jr          $ra
    // 0x80076F68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80076F68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800C24EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C24EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C24F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C24F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C24F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C24FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2500: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C250C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2510: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2514: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2518: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C251C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2520: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2524: nop

    // 0x800C2528: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C252C: nop

    // 0x800C2530: bne         $t1, $zero, L_800C25DC
    if (ctx->r9 != 0) {
        // 0x800C2534: nop
    
            goto L_800C25DC;
    }
    // 0x800C2534: nop

    // 0x800C2538: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C253C: nop

    // 0x800C2540: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C2544: nop

    // 0x800C2548: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C254C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C2550: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2554: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C2558: nop

    // 0x800C255C: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C2560: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C2564: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C2568: nop

    // 0x800C256C: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C2570: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C2574: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C2578: nop

    // 0x800C257C: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C2580: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C2584: nop

    // 0x800C2588: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
    // 0x800C258C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2594: jal         0x8001BBDC
    // 0x800C2598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C2598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C259C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C25A0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800C25A4: addiu       $t9, $t9, 0x7FF0
    ctx->r25 = ADD32(ctx->r25, 0X7FF0);
    // 0x800C25A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C25AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C25B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C25B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C25B8: jal         0x8001C0EC
    // 0x800C25BC: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C25BC: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
    // 0x800C25C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C25C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C25C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C25CC: addiu       $a3, $a3, -0x7FBC
    ctx->r7 = ADD32(ctx->r7, -0X7FBC);
    // 0x800C25D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C25D4: jal         0x8001ABF4
    // 0x800C25D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800C25D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800C25DC:
    // 0x800C25DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C25E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C25E4: jal         0x8002A1FC
    // 0x800C25E8: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800C25E8: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_3:
    // 0x800C25EC: beq         $v0, $zero, L_800C260C
    if (ctx->r2 == 0) {
        // 0x800C25F0: nop
    
            goto L_800C260C;
    }
    // 0x800C25F0: nop

    // 0x800C25F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C25F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C25FC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800C2600: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C2604: nop

    // 0x800C2608: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800C260C:
    // 0x800C260C: b           L_800C2614
    // 0x800C2610: nop

        goto L_800C2614;
    // 0x800C2610: nop

L_800C2614:
    // 0x800C2614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C261C: jr          $ra
    // 0x800C2620: nop

    return;
    // 0x800C2620: nop

;}
RECOMP_FUNC void func_800A0FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0FA8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800A0FAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A0FB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A0FB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A0FB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A0FBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0FC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0FC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0FCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A0FD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A0FD4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800A0FD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0FDC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800A0FE0: nop

    // 0x800A0FE4: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x800A0FE8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800A0FEC: nop

    // 0x800A0FF0: lwc1        $f12, 0x2C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800A0FF4: nop

    // 0x800A0FF8: swc1        $f12, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f12.u32l;
    // 0x800A0FFC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800A1000: nop

    // 0x800A1004: swc1        $f12, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f12.u32l;
    // 0x800A1008: b           L_800A1010
    // 0x800A100C: nop

        goto L_800A1010;
    // 0x800A100C: nop

L_800A1010:
    // 0x800A1010: jr          $ra
    // 0x800A1014: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800A1014: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007AA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AA80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007AA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AA88: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007AA8C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007AA90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007AA94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007AA98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007AA9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007AAA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007AAA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007AAA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007AAAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007AAB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007AAB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007AAB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007AABC: jal         0x8001B880
    // 0x8007AAC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x8007AAC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007AAC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007AAC8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007AACC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8007AAD0: bne         $t0, $at, L_8007AAE8
    if (ctx->r8 != ctx->r1) {
        // 0x8007AAD4: nop
    
            goto L_8007AAE8;
    }
    // 0x8007AAD4: nop

    // 0x8007AAD8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8007AADC: addiu       $t1, $t1, -0x40C0
    ctx->r9 = ADD32(ctx->r9, -0X40C0);
    // 0x8007AAE0: b           L_8007AC44
    // 0x8007AAE4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_8007AC44;
    // 0x8007AAE4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_8007AAE8:
    // 0x8007AAE8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007AAEC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8007AAF0: bne         $t2, $at, L_8007AB08
    if (ctx->r10 != ctx->r1) {
        // 0x8007AAF4: nop
    
            goto L_8007AB08;
    }
    // 0x8007AAF4: nop

    // 0x8007AAF8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8007AAFC: addiu       $t3, $t3, -0x4004
    ctx->r11 = ADD32(ctx->r11, -0X4004);
    // 0x8007AB00: b           L_8007AC44
    // 0x8007AB04: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
        goto L_8007AC44;
    // 0x8007AB04: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8007AB08:
    // 0x8007AB08: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB0C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8007AB10: bne         $t4, $at, L_8007AB28
    if (ctx->r12 != ctx->r1) {
        // 0x8007AB14: nop
    
            goto L_8007AB28;
    }
    // 0x8007AB14: nop

    // 0x8007AB18: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007AB1C: addiu       $t5, $t5, -0x3F3C
    ctx->r13 = ADD32(ctx->r13, -0X3F3C);
    // 0x8007AB20: b           L_8007AC44
    // 0x8007AB24: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_8007AC44;
    // 0x8007AB24: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8007AB28:
    // 0x8007AB28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB2C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8007AB30: bne         $t6, $at, L_8007AB48
    if (ctx->r14 != ctx->r1) {
        // 0x8007AB34: nop
    
            goto L_8007AB48;
    }
    // 0x8007AB34: nop

    // 0x8007AB38: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007AB3C: addiu       $t7, $t7, -0x3EA4
    ctx->r15 = ADD32(ctx->r15, -0X3EA4);
    // 0x8007AB40: b           L_8007AC44
    // 0x8007AB44: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_8007AC44;
    // 0x8007AB44: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8007AB48:
    // 0x8007AB48: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB4C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8007AB50: bne         $t8, $at, L_8007AB68
    if (ctx->r24 != ctx->r1) {
        // 0x8007AB54: nop
    
            goto L_8007AB68;
    }
    // 0x8007AB54: nop

    // 0x8007AB58: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007AB5C: addiu       $t9, $t9, -0x3E3C
    ctx->r25 = ADD32(ctx->r25, -0X3E3C);
    // 0x8007AB60: b           L_8007AC44
    // 0x8007AB64: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_8007AC44;
    // 0x8007AB64: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8007AB68:
    // 0x8007AB68: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB6C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8007AB70: bne         $t0, $at, L_8007AB88
    if (ctx->r8 != ctx->r1) {
        // 0x8007AB74: nop
    
            goto L_8007AB88;
    }
    // 0x8007AB74: nop

    // 0x8007AB78: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8007AB7C: addiu       $t1, $t1, -0x3E04
    ctx->r9 = ADD32(ctx->r9, -0X3E04);
    // 0x8007AB80: b           L_8007AC44
    // 0x8007AB84: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_8007AC44;
    // 0x8007AB84: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_8007AB88:
    // 0x8007AB88: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB8C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8007AB90: bne         $t2, $at, L_8007ABA8
    if (ctx->r10 != ctx->r1) {
        // 0x8007AB94: nop
    
            goto L_8007ABA8;
    }
    // 0x8007AB94: nop

    // 0x8007AB98: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8007AB9C: addiu       $t3, $t3, -0x3DEC
    ctx->r11 = ADD32(ctx->r11, -0X3DEC);
    // 0x8007ABA0: b           L_8007AC44
    // 0x8007ABA4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
        goto L_8007AC44;
    // 0x8007ABA4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8007ABA8:
    // 0x8007ABA8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007ABAC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007ABB0: bne         $t4, $at, L_8007ABC8
    if (ctx->r12 != ctx->r1) {
        // 0x8007ABB4: nop
    
            goto L_8007ABC8;
    }
    // 0x8007ABB4: nop

    // 0x8007ABB8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007ABBC: addiu       $t5, $t5, -0x3D84
    ctx->r13 = ADD32(ctx->r13, -0X3D84);
    // 0x8007ABC0: b           L_8007AC44
    // 0x8007ABC4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_8007AC44;
    // 0x8007ABC4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8007ABC8:
    // 0x8007ABC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007ABCC: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8007ABD0: bne         $t6, $at, L_8007ABE8
    if (ctx->r14 != ctx->r1) {
        // 0x8007ABD4: nop
    
            goto L_8007ABE8;
    }
    // 0x8007ABD4: nop

    // 0x8007ABD8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007ABDC: addiu       $t7, $t7, -0x3D24
    ctx->r15 = ADD32(ctx->r15, -0X3D24);
    // 0x8007ABE0: b           L_8007AC44
    // 0x8007ABE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_8007AC44;
    // 0x8007ABE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8007ABE8:
    // 0x8007ABE8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007ABEC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x8007ABF0: bne         $t8, $at, L_8007AC08
    if (ctx->r24 != ctx->r1) {
        // 0x8007ABF4: nop
    
            goto L_8007AC08;
    }
    // 0x8007ABF4: nop

    // 0x8007ABF8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007ABFC: addiu       $t9, $t9, -0x3CF8
    ctx->r25 = ADD32(ctx->r25, -0X3CF8);
    // 0x8007AC00: b           L_8007AC44
    // 0x8007AC04: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_8007AC44;
    // 0x8007AC04: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8007AC08:
    // 0x8007AC08: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007AC0C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8007AC10: bne         $t0, $at, L_8007AC28
    if (ctx->r8 != ctx->r1) {
        // 0x8007AC14: nop
    
            goto L_8007AC28;
    }
    // 0x8007AC14: nop

    // 0x8007AC18: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8007AC1C: addiu       $t1, $t1, -0x3C90
    ctx->r9 = ADD32(ctx->r9, -0X3C90);
    // 0x8007AC20: b           L_8007AC44
    // 0x8007AC24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_8007AC44;
    // 0x8007AC24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_8007AC28:
    // 0x8007AC28: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007AC2C: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x8007AC30: bne         $t2, $at, L_8007AC44
    if (ctx->r10 != ctx->r1) {
        // 0x8007AC34: nop
    
            goto L_8007AC44;
    }
    // 0x8007AC34: nop

    // 0x8007AC38: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8007AC3C: addiu       $t3, $t3, -0x3C30
    ctx->r11 = ADD32(ctx->r11, -0X3C30);
    // 0x8007AC40: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8007AC44:
    // 0x8007AC44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007AC48: jal         0x8001B62C
    // 0x8007AC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8007AC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007AC50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007AC54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007AC58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007AC5C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007AC60: nop

    // 0x8007AC64: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007AC68: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8007AC6C: nop

    // 0x8007AC70: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8007AC74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007AC78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007AC7C: nop

    // 0x8007AC80: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007AC84: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8007AC88: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8007AC8C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8007AC90: nop

    // 0x8007AC94: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007AC98: nop

    // 0x8007AC9C: bgez        $t6, L_8007ACEC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8007ACA0: nop
    
            goto L_8007ACEC;
    }
    // 0x8007ACA0: nop

    // 0x8007ACA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007ACA8: jal         0x8001B580
    // 0x8007ACAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x8007ACAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007ACB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007ACB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007ACB8: nop

    // 0x8007ACBC: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007ACC0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007ACC4: nop

    // 0x8007ACC8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8007ACCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007ACD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007ACD4: nop

    // 0x8007ACD8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007ACDC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8007ACE0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007ACE4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8007ACE8: nop

L_8007ACEC:
    // 0x8007ACEC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007ACF0: nop

    // 0x8007ACF4: beq         $t9, $zero, L_8007AD18
    if (ctx->r25 == 0) {
        // 0x8007ACF8: nop
    
            goto L_8007AD18;
    }
    // 0x8007ACF8: nop

    // 0x8007ACFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8007AD00: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007AD04: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AD08: jal         0x80079BEC
    // 0x8007AD0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80079BEC(rdram, ctx);
        goto after_3;
    // 0x8007AD0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x8007AD10: b           L_8007AD30
    // 0x8007AD14: nop

        goto L_8007AD30;
    // 0x8007AD14: nop

L_8007AD18:
    // 0x8007AD18: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007AD1C: jal         0x80079874
    // 0x8007AD20: nop

    func_80079874(rdram, ctx);
        goto after_4;
    // 0x8007AD20: nop

    after_4:
    // 0x8007AD24: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007AD28: jal         0x80079960
    // 0x8007AD2C: nop

    func_80079960(rdram, ctx);
        goto after_5;
    // 0x8007AD2C: nop

    after_5:
L_8007AD30:
    // 0x8007AD30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007AD34: jal         0x80079688
    // 0x8007AD38: nop

    func_80079688(rdram, ctx);
        goto after_6;
    // 0x8007AD38: nop

    after_6:
    // 0x8007AD3C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007AD40: jal         0x800797FC
    // 0x8007AD44: nop

    func_800797FC(rdram, ctx);
        goto after_7;
    // 0x8007AD44: nop

    after_7:
    // 0x8007AD48: b           L_8007AD50
    // 0x8007AD4C: nop

        goto L_8007AD50;
    // 0x8007AD4C: nop

L_8007AD50:
    // 0x8007AD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AD54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007AD58: jr          $ra
    // 0x8007AD5C: nop

    return;
    // 0x8007AD5C: nop

;}
RECOMP_FUNC void func_800FD440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD440: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800FD444: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FD448: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FD44C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800FD450: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800FD454: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800FD458: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x800FD45C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FD460: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800FD464: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800FD468: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FD46C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FD470: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FD474: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FD478: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800FD47C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800FD480: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800FD484: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x800FD488: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800FD48C: nop

    // 0x800FD490: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800FD494: nop

    // 0x800FD498: bne         $t2, $zero, L_800FD508
    if (ctx->r10 != 0) {
        // 0x800FD49C: nop
    
            goto L_800FD508;
    }
    // 0x800FD49C: nop

    // 0x800FD4A0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800FD4A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800FD4A8: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x800FD4AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD4B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD4B4: jal         0x800272E8
    // 0x800FD4B8: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x800FD4B8: nop

    after_0:
    // 0x800FD4BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD4C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD4C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD4C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FD4CC: jal         0x80019448
    // 0x800FD4D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800FD4D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800FD4D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD4D8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800FD4DC: addiu       $t5, $t5, 0x75C4
    ctx->r13 = ADD32(ctx->r13, 0X75C4);
    // 0x800FD4E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD4E4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800FD4E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FD4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FD4F0: jal         0x8001C0EC
    // 0x800FD4F4: addiu       $a3, $zero, 0x1A8
    ctx->r7 = ADD32(0, 0X1A8);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800FD4F4: addiu       $a3, $zero, 0x1A8
    ctx->r7 = ADD32(0, 0X1A8);
    after_2:
    // 0x800FD4F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD4FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD500: jal         0x8001BB34
    // 0x800FD504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800FD504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_800FD508:
    // 0x800FD508: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800FD50C: nop

    // 0x800FD510: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800FD514: nop

    // 0x800FD518: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FD51C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800FD520: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800FD524: nop

    // 0x800FD528: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800FD52C: nop

    // 0x800FD530: slti        $at, $t0, 0x12
    ctx->r1 = SIGNED(ctx->r8) < 0X12 ? 1 : 0;
    // 0x800FD534: bne         $at, $zero, L_800FD734
    if (ctx->r1 != 0) {
        // 0x800FD538: nop
    
            goto L_800FD734;
    }
    // 0x800FD538: nop

    // 0x800FD53C: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x800FD540: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800FD544: nop

    // 0x800FD548: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800FD54C: nop

    // 0x800FD550: bne         $t2, $zero, L_800FD578
    if (ctx->r10 != 0) {
        // 0x800FD554: nop
    
            goto L_800FD578;
    }
    // 0x800FD554: nop

    // 0x800FD558: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800FD55C: nop

    // 0x800FD560: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800FD564: nop

    // 0x800FD568: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x800FD56C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800FD570: addiu       $t8, $t7, 0xC
    ctx->r24 = ADD32(ctx->r15, 0XC);
    // 0x800FD574: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
L_800FD578:
    // 0x800FD578: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800FD57C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800FD580: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800FD584: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800FD588: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800FD58C: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800FD590: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800FD594: jal         0x80015634
    // 0x800FD598: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_4;
    // 0x800FD598: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_4:
    // 0x800FD59C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800FD5A0: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800FD5A4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800FD5A8: addiu       $t2, $t1, 0xC
    ctx->r10 = ADD32(ctx->r9, 0XC);
    // 0x800FD5AC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800FD5B0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800FD5B4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FD5B8: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800FD5BC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800FD5C0: jal         0x800157EC
    // 0x800FD5C4: nop

    func_800157EC(rdram, ctx);
        goto after_5;
    // 0x800FD5C4: nop

    after_5:
    // 0x800FD5C8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800FD5CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800FD5D0: nop

    // 0x800FD5D4: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800FD5D8: nop

    // 0x800FD5DC: bne         $t4, $zero, L_800FD5FC
    if (ctx->r12 != 0) {
        // 0x800FD5E0: nop
    
            goto L_800FD5FC;
    }
    // 0x800FD5E0: nop

    // 0x800FD5E4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800FD5E8: nop

    // 0x800FD5EC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800FD5F0: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x800FD5F4: b           L_800FD65C
    // 0x800FD5F8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
        goto L_800FD65C;
    // 0x800FD5F8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_800FD5FC:
    // 0x800FD5FC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800FD600: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FD604: lwc1        $f4, 0x57F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X57F8);
    // 0x800FD608: lwc1        $f18, 0xC($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800FD60C: nop

    // 0x800FD610: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800FD614: nop

    // 0x800FD618: bc1f        L_800FD65C
    if (!c1cs) {
        // 0x800FD61C: nop
    
            goto L_800FD65C;
    }
    // 0x800FD61C: nop

    // 0x800FD620: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800FD624: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FD628: lwc1        $f8, 0x57FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57FC);
    // 0x800FD62C: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x800FD630: nop

    // 0x800FD634: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800FD638: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x800FD63C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800FD640: nop

    // 0x800FD644: lwc1        $f20, 0xC($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800FD648: nop

    // 0x800FD64C: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x800FD650: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800FD654: nop

    // 0x800FD658: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
L_800FD65C:
    // 0x800FD65C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800FD660: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800FD664: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800FD668: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800FD66C: jal         0x80015538
    // 0x800FD670: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800FD670: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_6:
    // 0x800FD674: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800FD678: nop

    // 0x800FD67C: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x800FD680: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800FD684: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800FD688: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800FD68C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800FD690: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800FD694: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800FD698: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800FD69C: jal         0x800156C4
    // 0x800FD6A0: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_7;
    // 0x800FD6A0: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_7:
    // 0x800FD6A4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800FD6A8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800FD6AC: jal         0x80015744
    // 0x800FD6B0: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_8;
    // 0x800FD6B0: nop

    after_8:
    // 0x800FD6B4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800FD6B8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800FD6BC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800FD6C0: addiu       $t6, $t8, 0xC
    ctx->r14 = ADD32(ctx->r24, 0XC);
    // 0x800FD6C4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800FD6C8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800FD6CC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800FD6D0: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x800FD6D4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800FD6D8: jal         0x800157EC
    // 0x800FD6DC: nop

    func_800157EC(rdram, ctx);
        goto after_9;
    // 0x800FD6DC: nop

    after_9:
    // 0x800FD6E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800FD6E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800FD6E8: nop

    // 0x800FD6EC: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800FD6F0: nop

    // 0x800FD6F4: bne         $t0, $zero, L_800FD710
    if (ctx->r8 != 0) {
        // 0x800FD6F8: nop
    
            goto L_800FD710;
    }
    // 0x800FD6F8: nop

    // 0x800FD6FC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800FD700: nop

    // 0x800FD704: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800FD708: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800FD70C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_800FD710:
    // 0x800FD710: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800FD714: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800FD718: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800FD71C: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x800FD720: jal         0x80015538
    // 0x800FD724: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800FD724: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_10:
    // 0x800FD728: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800FD72C: nop

    // 0x800FD730: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
L_800FD734:
    // 0x800FD734: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800FD738: nop

    // 0x800FD73C: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800FD740: nop

    // 0x800FD744: swc1        $f18, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f18.u32l;
    // 0x800FD748: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800FD74C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800FD750: lwc1        $f14, 0x40($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X40);
    // 0x800FD754: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800FD758: jal         0x80015538
    // 0x800FD75C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800FD75C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_11:
    // 0x800FD760: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800FD764: nop

    // 0x800FD768: swc1        $f0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f0.u32l;
    // 0x800FD76C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD770: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD774: jal         0x80029D8C
    // 0x800FD778: nop

    func_80029D8C(rdram, ctx);
        goto after_12;
    // 0x800FD778: nop

    after_12:
    // 0x800FD77C: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x800FD780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD784: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FD788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD78C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD790: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800FD794: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800FD798: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800FD79C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800FD7A0: jal         0x800295C0
    // 0x800FD7A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x800FD7A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x800FD7A8: beq         $v0, $zero, L_800FD7C8
    if (ctx->r2 == 0) {
        // 0x800FD7AC: nop
    
            goto L_800FD7C8;
    }
    // 0x800FD7AC: nop

    // 0x800FD7B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD7B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD7B8: jal         0x8002B0E4
    // 0x800FD7BC: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x800FD7BC: nop

    after_14:
    // 0x800FD7C0: b           L_800FD860
    // 0x800FD7C4: nop

        goto L_800FD860;
    // 0x800FD7C4: nop

L_800FD7C8:
    // 0x800FD7C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FD7CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FD7D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD7D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD7D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800FD7DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800FD7E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800FD7E4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800FD7E8: jal         0x80029018
    // 0x800FD7EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_15;
    // 0x800FD7EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x800FD7F0: beq         $v0, $zero, L_800FD810
    if (ctx->r2 == 0) {
        // 0x800FD7F4: nop
    
            goto L_800FD810;
    }
    // 0x800FD7F4: nop

    // 0x800FD7F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD7FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD800: jal         0x8002B0E4
    // 0x800FD804: nop

    func_8002B0E4(rdram, ctx);
        goto after_16;
    // 0x800FD804: nop

    after_16:
    // 0x800FD808: b           L_800FD860
    // 0x800FD80C: nop

        goto L_800FD860;
    // 0x800FD80C: nop

L_800FD810:
    // 0x800FD810: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800FD814: nop

    // 0x800FD818: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800FD81C: nop

    // 0x800FD820: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FD824: sh          $t1, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r9;
    // 0x800FD828: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800FD82C: nop

    // 0x800FD830: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800FD834: nop

    // 0x800FD838: bgtz        $t3, L_800FD858
    if (SIGNED(ctx->r11) > 0) {
        // 0x800FD83C: nop
    
            goto L_800FD858;
    }
    // 0x800FD83C: nop

    // 0x800FD840: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800FD844: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800FD848: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800FD84C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800FD850: nop

    // 0x800FD854: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800FD858:
    // 0x800FD858: b           L_800FD860
    // 0x800FD85C: nop

        goto L_800FD860;
    // 0x800FD85C: nop

L_800FD860:
    // 0x800FD860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FD864: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800FD868: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FD86C: jr          $ra
    // 0x800FD870: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800FD870: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800D0C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0C28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D0C2C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D0C30: nop

    // 0x800D0C34: bne         $t6, $zero, L_800D0C90
    if (ctx->r14 != 0) {
        // 0x800D0C38: nop
    
            goto L_800D0C90;
    }
    // 0x800D0C38: nop

    // 0x800D0C3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D0C40: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D0C44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D0C48: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D0C4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D0C50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D0C54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D0C58: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D0C5C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D0C60: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D0C64: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D0C68: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D0C6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D0C70: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D0C74: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D0C78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D0C7C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D0C80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D0C84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D0C88: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800D0C8C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D0C90:
    // 0x800D0C90: jr          $ra
    // 0x800D0C94: nop

    return;
    // 0x800D0C94: nop

    // 0x800D0C98: jr          $ra
    // 0x800D0C9C: nop

    return;
    // 0x800D0C9C: nop

;}
RECOMP_FUNC void func_800745C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800745C0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800745C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800745C8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800745CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800745D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800745D4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800745D8: nop

    // 0x800745DC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800745E0: nop

    // 0x800745E4: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x800745E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800745EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800745F0: nop

    // 0x800745F4: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800745F8: nop

    // 0x800745FC: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x80074600: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80074604: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80074608: nop

    // 0x8007460C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80074610: nop

    // 0x80074614: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x80074618: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8007461C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074620: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x80074624: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80074628: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007462C: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80074630: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074634: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80074638: swc1        $f4, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f4.u32l;
    // 0x8007463C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80074640: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074644: swc1        $f6, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f6.u32l;
    // 0x80074648: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007464C: lwc1        $f8, -0x1EB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x80074650: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074654: lwc1        $f10, 0x75A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80074658: jal         0x8003670C
    // 0x8007465C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    __f_to_ll_recomp(rdram, ctx);
        goto after_0;
    // 0x8007465C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80074660: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80074664: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x80074668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007466C: lwc1        $f16, -0x1EAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x80074670: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074674: lwc1        $f18, 0x75B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80074678: jal         0x8003670C
    // 0x8007467C: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    __f_to_ll_recomp(rdram, ctx);
        goto after_1;
    // 0x8007467C: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    after_1:
    // 0x80074680: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80074684: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80074688: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007468C: lwc1        $f4, 0x75C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80074690: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80074694: lwc1        $f9, 0x5650($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5650);
    // 0x80074698: lwc1        $f8, 0x5654($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5654);
    // 0x8007469C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800746A0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800746A4: jal         0x80034970
    // 0x800746A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800746A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x800746AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800746B0: lwc1        $f16, 0x75D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x800746B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800746B8: mul.s       $f12, $f20, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x800746BC: jal         0x8003670C
    // 0x800746C0: nop

    __f_to_ll_recomp(rdram, ctx);
        goto after_3;
    // 0x800746C0: nop

    after_3:
    // 0x800746C4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800746C8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x800746CC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800746D0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800746D4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800746D8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800746DC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800746E0: jal         0x80036A68
    // 0x800746E4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_4;
    // 0x800746E4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    after_4:
    // 0x800746E8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800746EC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800746F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800746F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800746F8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800746FC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80074700: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80074704: jal         0x80036A68
    // 0x80074708: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_5;
    // 0x80074708: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    after_5:
    // 0x8007470C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80074710: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80074714: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80074718: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8007471C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80074720: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80074724: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80074728: jal         0x80036A68
    // 0x8007472C: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_6;
    // 0x8007472C: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    after_6:
    // 0x80074730: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80074734: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80074738: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8007473C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80074740: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80074744: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80074748: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8007474C: sltu        $at, $t1, $t9
    ctx->r1 = ctx->r9 < ctx->r25 ? 1 : 0;
    // 0x80074750: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80074754: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80074758: addu        $a1, $t3, $t1
    ctx->r5 = ADD32(ctx->r11, ctx->r9);
    // 0x8007475C: addu        $t0, $at, $t6
    ctx->r8 = ADD32(ctx->r1, ctx->r14);
    // 0x80074760: sltu        $at, $a1, $t1
    ctx->r1 = ctx->r5 < ctx->r9 ? 1 : 0;
    // 0x80074764: addu        $a0, $at, $t2
    ctx->r4 = ADD32(ctx->r1, ctx->r10);
    // 0x80074768: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8007476C: jal         0x8003687C
    // 0x80074770: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    __ll_to_f_recomp(rdram, ctx);
        goto after_7;
    // 0x80074770: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    after_7:
    // 0x80074774: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80074778: jal         0x800366E0
    // 0x8007477C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_8;
    // 0x8007477C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x80074780: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074784: lwc1        $f18, -0x1E90($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80074788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007478C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80074790: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
    // 0x80074794: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074798: lwc1        $f4, 0x75D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x8007479C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800747A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800747A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800747A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800747AC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800747B0: nop

    // 0x800747B4: bc1t        L_800747D8
    if (c1cs) {
        // 0x800747B8: nop
    
            goto L_800747D8;
    }
    // 0x800747B8: nop

    // 0x800747BC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800747C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800747C4: nop

    // 0x800747C8: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x800747CC: nop

    // 0x800747D0: bc1f        L_800747E4
    if (!c1cs) {
        // 0x800747D4: nop
    
            goto L_800747E4;
    }
    // 0x800747D4: nop

L_800747D8:
    // 0x800747D8: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800747DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800747E0: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
L_800747E4:
    // 0x800747E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800747E8: lwc1        $f4, 0x75D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x800747EC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800747F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800747F4: nop

    // 0x800747F8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800747FC: nop

    // 0x80074800: bc1f        L_8007481C
    if (!c1cs) {
        // 0x80074804: nop
    
            goto L_8007481C;
    }
    // 0x80074804: nop

    // 0x80074808: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8007480C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074810: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074814: b           L_80074850
    // 0x80074818: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
        goto L_80074850;
    // 0x80074818: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
L_8007481C:
    // 0x8007481C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074820: lwc1        $f8, 0x75D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80074824: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80074828: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007482C: nop

    // 0x80074830: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80074834: nop

    // 0x80074838: bc1f        L_80074850
    if (!c1cs) {
        // 0x8007483C: nop
    
            goto L_80074850;
    }
    // 0x8007483C: nop

    // 0x80074840: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80074844: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80074848: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007484C: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
L_80074850:
    // 0x80074850: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80074854: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80074858: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007485C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074860: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80074864: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80074868: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8007486C: jal         0x80015538
    // 0x80074870: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80074870: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_9:
    // 0x80074874: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80074878: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8007487C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074880: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074884: jal         0x80015538
    // 0x80074888: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80074888: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_10:
    // 0x8007488C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80074890: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80074894: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80074898: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8007489C: nop

    // 0x800748A0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800748A4: nop

    // 0x800748A8: bc1t        L_800748CC
    if (c1cs) {
        // 0x800748AC: nop
    
            goto L_800748CC;
    }
    // 0x800748AC: nop

    // 0x800748B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800748B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800748B8: nop

    // 0x800748BC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x800748C0: nop

    // 0x800748C4: bc1f        L_80074924
    if (!c1cs) {
        // 0x800748C8: nop
    
            goto L_80074924;
    }
    // 0x800748C8: nop

L_800748CC:
    // 0x800748CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800748D0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800748D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800748D8: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800748DC: nop

    // 0x800748E0: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800748E4: nop

    // 0x800748E8: bc1f        L_80074914
    if (!c1cs) {
        // 0x800748EC: nop
    
            goto L_80074914;
    }
    // 0x800748EC: nop

    // 0x800748F0: lwc1        $f6, 0x2C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800748F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800748F8: nop

    // 0x800748FC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80074900: nop

    // 0x80074904: bc1f        L_80074914
    if (!c1cs) {
        // 0x80074908: nop
    
            goto L_80074914;
    }
    // 0x80074908: nop

    // 0x8007490C: b           L_8007491C
    // 0x80074910: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
        goto L_8007491C;
    // 0x80074910: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_80074914:
    // 0x80074914: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80074918: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
L_8007491C:
    // 0x8007491C: b           L_800749A4
    // 0x80074920: nop

        goto L_800749A4;
    // 0x80074920: nop

L_80074924:
    // 0x80074924: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80074928: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007492C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80074930: lwc1        $f10, 0x24($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80074934: nop

    // 0x80074938: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8007493C: nop

    // 0x80074940: bc1f        L_8007496C
    if (!c1cs) {
        // 0x80074944: nop
    
            goto L_8007496C;
    }
    // 0x80074944: nop

    // 0x80074948: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8007494C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80074950: nop

    // 0x80074954: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80074958: nop

    // 0x8007495C: bc1f        L_8007496C
    if (!c1cs) {
        // 0x80074960: nop
    
            goto L_8007496C;
    }
    // 0x80074960: nop

    // 0x80074964: b           L_800749A4
    // 0x80074968: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
        goto L_800749A4;
    // 0x80074968: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_8007496C:
    // 0x8007496C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074970: lwc1        $f6, -0x1E90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80074974: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80074978: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007497C: nop

    // 0x80074980: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80074984: nop

    // 0x80074988: bc1f        L_8007499C
    if (!c1cs) {
        // 0x8007498C: nop
    
            goto L_8007499C;
    }
    // 0x8007498C: nop

    // 0x80074990: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80074994: b           L_800749A4
    // 0x80074998: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
        goto L_800749A4;
    // 0x80074998: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_8007499C:
    // 0x8007499C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800749A0: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_800749A4:
    // 0x800749A4: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800749A8: nop

    // 0x800749AC: beq         $t2, $zero, L_80074A64
    if (ctx->r10 == 0) {
        // 0x800749B0: nop
    
            goto L_80074A64;
    }
    // 0x800749B0: nop

    // 0x800749B4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800749B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800749BC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800749C0: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800749C4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800749C8: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800749CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800749D0: jal         0x800157EC
    // 0x800749D4: nop

    func_800157EC(rdram, ctx);
        goto after_11;
    // 0x800749D4: nop

    after_11:
    // 0x800749D8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800749DC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800749E0: nop

    // 0x800749E4: bne         $t0, $zero, L_80074A00
    if (ctx->r8 != 0) {
        // 0x800749E8: nop
    
            goto L_80074A00;
    }
    // 0x800749E8: nop

    // 0x800749EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800749F0: lwc1        $f16, -0x1EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800749F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800749F8: b           L_80074A64
    // 0x800749FC: swc1        $f16, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f16.u32l;
        goto L_80074A64;
    // 0x800749FC: swc1        $f16, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f16.u32l;
L_80074A00:
    // 0x80074A00: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80074A04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074A08: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80074A0C: nop

    // 0x80074A10: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80074A14: nop

    // 0x80074A18: bc1f        L_80074A38
    if (!c1cs) {
        // 0x80074A1C: nop
    
            goto L_80074A38;
    }
    // 0x80074A1C: nop

    // 0x80074A20: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80074A24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074A28: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80074A2C: nop

    // 0x80074A30: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80074A34: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
L_80074A38:
    // 0x80074A38: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80074A3C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80074A40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A44: multu       $t1, $t4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80074A48: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074A4C: mflo        $t5
    ctx->r13 = lo;
    // 0x80074A50: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80074A54: jal         0x80015538
    // 0x80074A58: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80074A58: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_12:
    // 0x80074A5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A60: swc1        $f0, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f0.u32l;
L_80074A64:
    // 0x80074A64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A68: lwc1        $f12, -0x1EBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80074A6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A70: lwc1        $f14, 0x75B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x80074A74: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80074A78: jal         0x80071A88
    // 0x80074A7C: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    func_80071A88(rdram, ctx);
        goto after_13;
    // 0x80074A7C: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    after_13:
    // 0x80074A80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A84: swc1        $f0, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f0.u32l;
    // 0x80074A88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A8C: lwc1        $f18, 0x75A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80074A90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A94: swc1        $f18, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f18.u32l;
    // 0x80074A98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074A9C: lwc1        $f4, 0x75B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80074AA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AA4: swc1        $f4, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f4.u32l;
    // 0x80074AA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AAC: lwc1        $f6, 0x75D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80074AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AB4: swc1        $f6, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f6.u32l;
    // 0x80074AB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074ABC: lwc1        $f8, 0x75C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80074AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AC4: swc1        $f8, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f8.u32l;
    // 0x80074AC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074ACC: lwc1        $f10, 0x75C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x80074AD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AD4: swc1        $f10, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f10.u32l;
    // 0x80074AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074ADC: lwc1        $f16, 0x75D0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x80074AE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074AE4: swc1        $f16, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f16.u32l;
    // 0x80074AE8: b           L_80074AF0
    // 0x80074AEC: nop

        goto L_80074AF0;
    // 0x80074AEC: nop

L_80074AF0:
    // 0x80074AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074AF4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80074AF8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80074AFC: jr          $ra
    // 0x80074B00: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80074B00: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800EF990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EF990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EF994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EF998: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EF99C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EF9A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EF9A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EF9A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF9AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EF9B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF9B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EF9B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EF9BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF9C0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800EF9C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800EF9C8: nop

    // 0x800EF9CC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800EF9D0: nop

    // 0x800EF9D4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800EF9D8: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800EF9DC: beq         $at, $zero, L_800EFA60
    if (ctx->r1 == 0) {
        // 0x800EF9E0: nop
    
            goto L_800EFA60;
    }
    // 0x800EF9E0: nop

    // 0x800EF9E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800EF9E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EF9EC: addu        $at, $at, $t2
    gpr jr_addend_800EF9F8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800EF9F0: lw          $t2, 0x55F8($at)
    ctx->r10 = ADD32(ctx->r1, 0X55F8);
    // 0x800EF9F4: nop

    // 0x800EF9F8: jr          $t2
    // 0x800EF9FC: nop

    switch (jr_addend_800EF9F8 >> 2) {
        case 0: goto L_800EFA00; break;
        case 1: goto L_800EFA10; break;
        case 2: goto L_800EFA20; break;
        case 3: goto L_800EFA30; break;
        case 4: goto L_800EFA40; break;
        case 5: goto L_800EFA50; break;
        default: switch_error(__func__, 0x800EF9F8, 0x801155F8);
    }
    // 0x800EF9FC: nop

L_800EFA00:
    // 0x800EFA00: jal         0x800EE7A4
    // 0x800EFA04: nop

    func_800EE7A4(rdram, ctx);
        goto after_0;
    // 0x800EFA04: nop

    after_0:
    // 0x800EFA08: b           L_800EFA68
    // 0x800EFA0C: nop

        goto L_800EFA68;
    // 0x800EFA0C: nop

L_800EFA10:
    // 0x800EFA10: jal         0x800EEA50
    // 0x800EFA14: nop

    func_800EEA50(rdram, ctx);
        goto after_1;
    // 0x800EFA14: nop

    after_1:
    // 0x800EFA18: b           L_800EFA68
    // 0x800EFA1C: nop

        goto L_800EFA68;
    // 0x800EFA1C: nop

L_800EFA20:
    // 0x800EFA20: jal         0x800EEE30
    // 0x800EFA24: nop

    func_800EEE30(rdram, ctx);
        goto after_2;
    // 0x800EFA24: nop

    after_2:
    // 0x800EFA28: b           L_800EFA68
    // 0x800EFA2C: nop

        goto L_800EFA68;
    // 0x800EFA2C: nop

L_800EFA30:
    // 0x800EFA30: jal         0x800EF250
    // 0x800EFA34: nop

    func_800EF250(rdram, ctx);
        goto after_3;
    // 0x800EFA34: nop

    after_3:
    // 0x800EFA38: b           L_800EFA68
    // 0x800EFA3C: nop

        goto L_800EFA68;
    // 0x800EFA3C: nop

L_800EFA40:
    // 0x800EFA40: jal         0x800EF6AC
    // 0x800EFA44: nop

    func_800EF6AC(rdram, ctx);
        goto after_4;
    // 0x800EFA44: nop

    after_4:
    // 0x800EFA48: b           L_800EFA68
    // 0x800EFA4C: nop

        goto L_800EFA68;
    // 0x800EFA4C: nop

L_800EFA50:
    // 0x800EFA50: jal         0x800EF914
    // 0x800EFA54: nop

    func_800EF914(rdram, ctx);
        goto after_5;
    // 0x800EFA54: nop

    after_5:
    // 0x800EFA58: b           L_800EFA68
    // 0x800EFA5C: nop

        goto L_800EFA68;
    // 0x800EFA5C: nop

L_800EFA60:
    // 0x800EFA60: b           L_800EFA68
    // 0x800EFA64: nop

        goto L_800EFA68;
    // 0x800EFA64: nop

L_800EFA68:
    // 0x800EFA68: b           L_800EFA70
    // 0x800EFA6C: nop

        goto L_800EFA70;
    // 0x800EFA6C: nop

L_800EFA70:
    // 0x800EFA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EFA74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EFA78: jr          $ra
    // 0x800EFA7C: nop

    return;
    // 0x800EFA7C: nop

;}
RECOMP_FUNC void func_800DC66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC66C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DC670: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC674: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC678: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC67C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC680: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC684: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC688: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC68C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC690: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC694: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC698: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DC69C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DC6A0: nop

    // 0x800DC6A4: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x800DC6A8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DC6AC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800DC6B0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800DC6B4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DC6B8: nop

    // 0x800DC6BC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800DC6C0: b           L_800DC6C8
    // 0x800DC6C4: nop

        goto L_800DC6C8;
    // 0x800DC6C4: nop

L_800DC6C8:
    // 0x800DC6C8: jr          $ra
    // 0x800DC6CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DC6CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BC148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BC14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC154: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC158: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC15C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC164: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC16C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC170: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC174: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC178: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BC17C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC180: nop

    // 0x800BC184: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BC188: nop

    // 0x800BC18C: bne         $t1, $zero, L_800BC21C
    if (ctx->r9 != 0) {
        // 0x800BC190: nop
    
            goto L_800BC21C;
    }
    // 0x800BC190: nop

    // 0x800BC194: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC198: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BC19C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BC1A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BC1A4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC1A8: nop

    // 0x800BC1AC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BC1B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BC1B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC1B8: nop

    // 0x800BC1BC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BC1C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC1C4: nop

    // 0x800BC1C8: lwc1        $f8, 0x50($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X50);
    // 0x800BC1CC: nop

    // 0x800BC1D0: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x800BC1D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC1D8: nop

    // 0x800BC1DC: lwc1        $f10, 0x54($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X54);
    // 0x800BC1E0: nop

    // 0x800BC1E4: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800BC1E8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC1EC: nop

    // 0x800BC1F0: lwc1        $f16, 0x58($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X58);
    // 0x800BC1F4: nop

    // 0x800BC1F8: swc1        $f16, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f16.u32l;
    // 0x800BC1FC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800BC200: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BC204: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC208: nop

    // 0x800BC20C: swc1        $f18, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f18.u32l;
    // 0x800BC210: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC214: nop

    // 0x800BC218: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
L_800BC21C:
    // 0x800BC21C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC224: jal         0x80029C40
    // 0x800BC228: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BC228: nop

    after_0:
    // 0x800BC22C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC234: jal         0x80029D04
    // 0x800BC238: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BC238: nop

    after_1:
    // 0x800BC23C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC240: nop

    // 0x800BC244: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BC248: nop

    // 0x800BC24C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800BC250: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800BC254: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC258: nop

    // 0x800BC25C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BC260: lh          $t6, 0xB2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB2);
    // 0x800BC264: nop

    // 0x800BC268: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800BC26C: bne         $at, $zero, L_800BC28C
    if (ctx->r1 != 0) {
        // 0x800BC270: nop
    
            goto L_800BC28C;
    }
    // 0x800BC270: nop

    // 0x800BC274: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC278: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800BC27C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800BC280: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC284: nop

    // 0x800BC288: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800BC28C:
    // 0x800BC28C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC290: nop

    // 0x800BC294: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x800BC298: nop

    // 0x800BC29C: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x800BC2A0: bne         $t3, $zero, L_800BC2B0
    if (ctx->r11 != 0) {
        // 0x800BC2A4: nop
    
            goto L_800BC2B0;
    }
    // 0x800BC2A4: nop

    // 0x800BC2A8: jal         0x800BC86C
    // 0x800BC2AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BC86C(rdram, ctx);
        goto after_2;
    // 0x800BC2AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_800BC2B0:
    // 0x800BC2B0: b           L_800BC2B8
    // 0x800BC2B4: nop

        goto L_800BC2B8;
    // 0x800BC2B4: nop

L_800BC2B8:
    // 0x800BC2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BC2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BC2C0: jr          $ra
    // 0x800BC2C4: nop

    return;
    // 0x800BC2C4: nop

;}
RECOMP_FUNC void func_800A3D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A3D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3D88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A3D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A3D90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A3D94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A3D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A3D9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3DA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3DAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A3DB0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A3DB4: nop

    // 0x800A3DB8: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
    // 0x800A3DBC: lh          $s0, 0x26($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X26);
    // 0x800A3DC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A3DC4: beq         $s0, $at, L_800A3DE0
    if (ctx->r16 == ctx->r1) {
        // 0x800A3DC8: nop
    
            goto L_800A3DE0;
    }
    // 0x800A3DC8: nop

    // 0x800A3DCC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800A3DD0: beq         $s0, $at, L_800A3DF0
    if (ctx->r16 == ctx->r1) {
        // 0x800A3DD4: nop
    
            goto L_800A3DF0;
    }
    // 0x800A3DD4: nop

    // 0x800A3DD8: b           L_800A3E00
    // 0x800A3DDC: nop

        goto L_800A3E00;
    // 0x800A3DDC: nop

L_800A3DE0:
    // 0x800A3DE0: jal         0x800A3E28
    // 0x800A3DE4: nop

    func_800A3E28(rdram, ctx);
        goto after_0;
    // 0x800A3DE4: nop

    after_0:
    // 0x800A3DE8: b           L_800A3E10
    // 0x800A3DEC: nop

        goto L_800A3E10;
    // 0x800A3DEC: nop

L_800A3DF0:
    // 0x800A3DF0: jal         0x800A4178
    // 0x800A3DF4: nop

    func_800A4178(rdram, ctx);
        goto after_1;
    // 0x800A3DF4: nop

    after_1:
    // 0x800A3DF8: b           L_800A3E10
    // 0x800A3DFC: nop

        goto L_800A3E10;
    // 0x800A3DFC: nop

L_800A3E00:
    // 0x800A3E00: jal         0x800A44E8
    // 0x800A3E04: nop

    func_800A44E8(rdram, ctx);
        goto after_2;
    // 0x800A3E04: nop

    after_2:
    // 0x800A3E08: b           L_800A3E10
    // 0x800A3E0C: nop

        goto L_800A3E10;
    // 0x800A3E0C: nop

L_800A3E10:
    // 0x800A3E10: b           L_800A3E18
    // 0x800A3E14: nop

        goto L_800A3E18;
    // 0x800A3E14: nop

L_800A3E18:
    // 0x800A3E18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3E1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A3E20: jr          $ra
    // 0x800A3E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A3E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006C1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C1DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006C1E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006C1E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006C1E8: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8006C1EC: lw          $s0, -0x1BD8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1BD8);
    // 0x8006C1F0: nop

    // 0x8006C1F4: slti        $at, $s0, 0x56
    ctx->r1 = SIGNED(ctx->r16) < 0X56 ? 1 : 0;
    // 0x8006C1F8: bne         $at, $zero, L_8006C22C
    if (ctx->r1 != 0) {
        // 0x8006C1FC: nop
    
            goto L_8006C22C;
    }
    // 0x8006C1FC: nop

    // 0x8006C200: addiu       $t6, $s0, -0x85
    ctx->r14 = ADD32(ctx->r16, -0X85);
    // 0x8006C204: sltiu       $at, $t6, 0x37
    ctx->r1 = ctx->r14 < 0X37 ? 1 : 0;
    // 0x8006C208: beq         $at, $zero, L_8006C3B0
    if (ctx->r1 == 0) {
        // 0x8006C20C: nop
    
            goto L_8006C3B0;
    }
    // 0x8006C20C: nop

    // 0x8006C210: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006C214: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006C218: addu        $at, $at, $t6
    gpr jr_addend_8006C224 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8006C21C: lw          $t6, 0x4FB8($at)
    ctx->r14 = ADD32(ctx->r1, 0X4FB8);
    // 0x8006C220: nop

    // 0x8006C224: jr          $t6
    // 0x8006C228: nop

    switch (jr_addend_8006C224 >> 2) {
        case 0: goto L_8006C2F0; break;
        case 1: goto L_8006C3B0; break;
        case 2: goto L_8006C3B0; break;
        case 3: goto L_8006C3B0; break;
        case 4: goto L_8006C3B0; break;
        case 5: goto L_8006C3B0; break;
        case 6: goto L_8006C3B0; break;
        case 7: goto L_8006C3B0; break;
        case 8: goto L_8006C3B0; break;
        case 9: goto L_8006C3B0; break;
        case 10: goto L_8006C3B0; break;
        case 11: goto L_8006C300; break;
        case 12: goto L_8006C310; break;
        case 13: goto L_8006C3B0; break;
        case 14: goto L_8006C3B0; break;
        case 15: goto L_8006C3B0; break;
        case 16: goto L_8006C3B0; break;
        case 17: goto L_8006C3B0; break;
        case 18: goto L_8006C3B0; break;
        case 19: goto L_8006C3B0; break;
        case 20: goto L_8006C320; break;
        case 21: goto L_8006C3B0; break;
        case 22: goto L_8006C3B0; break;
        case 23: goto L_8006C3B0; break;
        case 24: goto L_8006C3B0; break;
        case 25: goto L_8006C3B0; break;
        case 26: goto L_8006C330; break;
        case 27: goto L_8006C340; break;
        case 28: goto L_8006C3B0; break;
        case 29: goto L_8006C3B0; break;
        case 30: goto L_8006C3B0; break;
        case 31: goto L_8006C360; break;
        case 32: goto L_8006C3B0; break;
        case 33: goto L_8006C3B0; break;
        case 34: goto L_8006C3B0; break;
        case 35: goto L_8006C350; break;
        case 36: goto L_8006C370; break;
        case 37: goto L_8006C380; break;
        case 38: goto L_8006C3B0; break;
        case 39: goto L_8006C390; break;
        case 40: goto L_8006C3B0; break;
        case 41: goto L_8006C3B0; break;
        case 42: goto L_8006C3B0; break;
        case 43: goto L_8006C3B0; break;
        case 44: goto L_8006C3B0; break;
        case 45: goto L_8006C3B0; break;
        case 46: goto L_8006C3B0; break;
        case 47: goto L_8006C3B0; break;
        case 48: goto L_8006C3B0; break;
        case 49: goto L_8006C3B0; break;
        case 50: goto L_8006C3B0; break;
        case 51: goto L_8006C3B0; break;
        case 52: goto L_8006C3B0; break;
        case 53: goto L_8006C3B0; break;
        case 54: goto L_8006C3A0; break;
        default: switch_error(__func__, 0x8006C224, 0x80104FB8);
    }
    // 0x8006C228: nop

L_8006C22C:
    // 0x8006C22C: addiu       $t7, $s0, -0x4
    ctx->r15 = ADD32(ctx->r16, -0X4);
    // 0x8006C230: sltiu       $at, $t7, 0x52
    ctx->r1 = ctx->r15 < 0X52 ? 1 : 0;
    // 0x8006C234: beq         $at, $zero, L_8006C3B0
    if (ctx->r1 == 0) {
        // 0x8006C238: nop
    
            goto L_8006C3B0;
    }
    // 0x8006C238: nop

    // 0x8006C23C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006C240: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006C244: addu        $at, $at, $t7
    gpr jr_addend_8006C250 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006C248: lw          $t7, 0x5094($at)
    ctx->r15 = ADD32(ctx->r1, 0X5094);
    // 0x8006C24C: nop

    // 0x8006C250: jr          $t7
    // 0x8006C254: nop

    switch (jr_addend_8006C250 >> 2) {
        case 0: goto L_8006C258; break;
        case 1: goto L_8006C3B0; break;
        case 2: goto L_8006C3B0; break;
        case 3: goto L_8006C3B0; break;
        case 4: goto L_8006C3B0; break;
        case 5: goto L_8006C3B0; break;
        case 6: goto L_8006C3B0; break;
        case 7: goto L_8006C3B0; break;
        case 8: goto L_8006C3B0; break;
        case 9: goto L_8006C3B0; break;
        case 10: goto L_8006C268; break;
        case 11: goto L_8006C3B0; break;
        case 12: goto L_8006C3B0; break;
        case 13: goto L_8006C3B0; break;
        case 14: goto L_8006C3B0; break;
        case 15: goto L_8006C3B0; break;
        case 16: goto L_8006C3B0; break;
        case 17: goto L_8006C3B0; break;
        case 18: goto L_8006C3B0; break;
        case 19: goto L_8006C3B0; break;
        case 20: goto L_8006C278; break;
        case 21: goto L_8006C288; break;
        case 22: goto L_8006C3B0; break;
        case 23: goto L_8006C3B0; break;
        case 24: goto L_8006C3B0; break;
        case 25: goto L_8006C3B0; break;
        case 26: goto L_8006C3B0; break;
        case 27: goto L_8006C3B0; break;
        case 28: goto L_8006C3B0; break;
        case 29: goto L_8006C298; break;
        case 30: goto L_8006C3B0; break;
        case 31: goto L_8006C3B0; break;
        case 32: goto L_8006C3B0; break;
        case 33: goto L_8006C3B0; break;
        case 34: goto L_8006C3B0; break;
        case 35: goto L_8006C3B0; break;
        case 36: goto L_8006C2A8; break;
        case 37: goto L_8006C3B0; break;
        case 38: goto L_8006C3B0; break;
        case 39: goto L_8006C3B0; break;
        case 40: goto L_8006C3B0; break;
        case 41: goto L_8006C3B0; break;
        case 42: goto L_8006C3B0; break;
        case 43: goto L_8006C3B0; break;
        case 44: goto L_8006C3B0; break;
        case 45: goto L_8006C3B0; break;
        case 46: goto L_8006C3B0; break;
        case 47: goto L_8006C3B0; break;
        case 48: goto L_8006C3B0; break;
        case 49: goto L_8006C3B0; break;
        case 50: goto L_8006C3B0; break;
        case 51: goto L_8006C3B0; break;
        case 52: goto L_8006C3B0; break;
        case 53: goto L_8006C3B0; break;
        case 54: goto L_8006C3B0; break;
        case 55: goto L_8006C3B0; break;
        case 56: goto L_8006C2B8; break;
        case 57: goto L_8006C3B0; break;
        case 58: goto L_8006C3B0; break;
        case 59: goto L_8006C3B0; break;
        case 60: goto L_8006C3B0; break;
        case 61: goto L_8006C2C8; break;
        case 62: goto L_8006C3B0; break;
        case 63: goto L_8006C3B0; break;
        case 64: goto L_8006C3B0; break;
        case 65: goto L_8006C3B0; break;
        case 66: goto L_8006C3B0; break;
        case 67: goto L_8006C3B0; break;
        case 68: goto L_8006C3B0; break;
        case 69: goto L_8006C3B0; break;
        case 70: goto L_8006C3B0; break;
        case 71: goto L_8006C3B0; break;
        case 72: goto L_8006C3B0; break;
        case 73: goto L_8006C3B0; break;
        case 74: goto L_8006C3B0; break;
        case 75: goto L_8006C3B0; break;
        case 76: goto L_8006C3B0; break;
        case 77: goto L_8006C3B0; break;
        case 78: goto L_8006C3B0; break;
        case 79: goto L_8006C3B0; break;
        case 80: goto L_8006C3B0; break;
        case 81: goto L_8006C2E0; break;
        default: switch_error(__func__, 0x8006C250, 0x80105094);
    }
    // 0x8006C254: nop

L_8006C258:
    // 0x8006C258: jal         0x8006B1B4
    // 0x8006C25C: nop

    func_8006B1B4(rdram, ctx);
        goto after_0;
    // 0x8006C25C: nop

    after_0:
    // 0x8006C260: b           L_8006C3B0
    // 0x8006C264: nop

        goto L_8006C3B0;
    // 0x8006C264: nop

L_8006C268:
    // 0x8006C268: jal         0x8006B3BC
    // 0x8006C26C: nop

    func_8006B3BC(rdram, ctx);
        goto after_1;
    // 0x8006C26C: nop

    after_1:
    // 0x8006C270: b           L_8006C3B0
    // 0x8006C274: nop

        goto L_8006C3B0;
    // 0x8006C274: nop

L_8006C278:
    // 0x8006C278: jal         0x8006B5A4
    // 0x8006C27C: nop

    func_8006B5A4(rdram, ctx);
        goto after_2;
    // 0x8006C27C: nop

    after_2:
    // 0x8006C280: b           L_8006C3B0
    // 0x8006C284: nop

        goto L_8006C3B0;
    // 0x8006C284: nop

L_8006C288:
    // 0x8006C288: jal         0x8006B5F8
    // 0x8006C28C: nop

    func_8006B5F8(rdram, ctx);
        goto after_3;
    // 0x8006C28C: nop

    after_3:
    // 0x8006C290: b           L_8006C3B0
    // 0x8006C294: nop

        goto L_8006C3B0;
    // 0x8006C294: nop

L_8006C298:
    // 0x8006C298: jal         0x8006B64C
    // 0x8006C29C: nop

    func_8006B64C(rdram, ctx);
        goto after_4;
    // 0x8006C29C: nop

    after_4:
    // 0x8006C2A0: b           L_8006C3B0
    // 0x8006C2A4: nop

        goto L_8006C3B0;
    // 0x8006C2A4: nop

L_8006C2A8:
    // 0x8006C2A8: jal         0x8006B754
    // 0x8006C2AC: nop

    func_8006B754(rdram, ctx);
        goto after_5;
    // 0x8006C2AC: nop

    after_5:
    // 0x8006C2B0: b           L_8006C3B0
    // 0x8006C2B4: nop

        goto L_8006C3B0;
    // 0x8006C2B4: nop

L_8006C2B8:
    // 0x8006C2B8: jal         0x8006B084
    // 0x8006C2BC: nop

    func_8006B084(rdram, ctx);
        goto after_6;
    // 0x8006C2BC: nop

    after_6:
    // 0x8006C2C0: b           L_8006C3B0
    // 0x8006C2C4: nop

        goto L_8006C3B0;
    // 0x8006C2C4: nop

L_8006C2C8:
    // 0x8006C2C8: jal         0x8006AFB0
    // 0x8006C2CC: nop

    func_8006AFB0(rdram, ctx);
        goto after_7;
    // 0x8006C2CC: nop

    after_7:
    // 0x8006C2D0: jal         0x8006B7BC
    // 0x8006C2D4: nop

    func_8006B7BC(rdram, ctx);
        goto after_8;
    // 0x8006C2D4: nop

    after_8:
    // 0x8006C2D8: b           L_8006C3B0
    // 0x8006C2DC: nop

        goto L_8006C3B0;
    // 0x8006C2DC: nop

L_8006C2E0:
    // 0x8006C2E0: jal         0x8006B084
    // 0x8006C2E4: nop

    func_8006B084(rdram, ctx);
        goto after_9;
    // 0x8006C2E4: nop

    after_9:
    // 0x8006C2E8: b           L_8006C3B0
    // 0x8006C2EC: nop

        goto L_8006C3B0;
    // 0x8006C2EC: nop

L_8006C2F0:
    // 0x8006C2F0: jal         0x8006B8CC
    // 0x8006C2F4: nop

    func_8006B8CC(rdram, ctx);
        goto after_10;
    // 0x8006C2F4: nop

    after_10:
    // 0x8006C2F8: b           L_8006C3B0
    // 0x8006C2FC: nop

        goto L_8006C3B0;
    // 0x8006C2FC: nop

L_8006C300:
    // 0x8006C300: jal         0x8006B920
    // 0x8006C304: nop

    func_8006B920(rdram, ctx);
        goto after_11;
    // 0x8006C304: nop

    after_11:
    // 0x8006C308: b           L_8006C3B0
    // 0x8006C30C: nop

        goto L_8006C3B0;
    // 0x8006C30C: nop

L_8006C310:
    // 0x8006C310: jal         0x8006B920
    // 0x8006C314: nop

    func_8006B920(rdram, ctx);
        goto after_12;
    // 0x8006C314: nop

    after_12:
    // 0x8006C318: b           L_8006C3B0
    // 0x8006C31C: nop

        goto L_8006C3B0;
    // 0x8006C31C: nop

L_8006C320:
    // 0x8006C320: jal         0x8006B9A0
    // 0x8006C324: nop

    func_8006B9A0(rdram, ctx);
        goto after_13;
    // 0x8006C324: nop

    after_13:
    // 0x8006C328: b           L_8006C3B0
    // 0x8006C32C: nop

        goto L_8006C3B0;
    // 0x8006C32C: nop

L_8006C330:
    // 0x8006C330: jal         0x8006B9F4
    // 0x8006C334: nop

    func_8006B9F4(rdram, ctx);
        goto after_14;
    // 0x8006C334: nop

    after_14:
    // 0x8006C338: b           L_8006C3B0
    // 0x8006C33C: nop

        goto L_8006C3B0;
    // 0x8006C33C: nop

L_8006C340:
    // 0x8006C340: jal         0x8006BA5C
    // 0x8006C344: nop

    func_8006BA5C(rdram, ctx);
        goto after_15;
    // 0x8006C344: nop

    after_15:
    // 0x8006C348: b           L_8006C3B0
    // 0x8006C34C: nop

        goto L_8006C3B0;
    // 0x8006C34C: nop

L_8006C350:
    // 0x8006C350: jal         0x8006BAC4
    // 0x8006C354: nop

    func_8006BAC4(rdram, ctx);
        goto after_16;
    // 0x8006C354: nop

    after_16:
    // 0x8006C358: b           L_8006C3B0
    // 0x8006C35C: nop

        goto L_8006C3B0;
    // 0x8006C35C: nop

L_8006C360:
    // 0x8006C360: jal         0x8006B920
    // 0x8006C364: nop

    func_8006B920(rdram, ctx);
        goto after_17;
    // 0x8006C364: nop

    after_17:
    // 0x8006C368: b           L_8006C3B0
    // 0x8006C36C: nop

        goto L_8006C3B0;
    // 0x8006C36C: nop

L_8006C370:
    // 0x8006C370: jal         0x8006BBF4
    // 0x8006C374: nop

    func_8006BBF4(rdram, ctx);
        goto after_18;
    // 0x8006C374: nop

    after_18:
    // 0x8006C378: b           L_8006C3B0
    // 0x8006C37C: nop

        goto L_8006C3B0;
    // 0x8006C37C: nop

L_8006C380:
    // 0x8006C380: jal         0x8006BE9C
    // 0x8006C384: nop

    func_8006BE9C(rdram, ctx);
        goto after_19;
    // 0x8006C384: nop

    after_19:
    // 0x8006C388: b           L_8006C3B0
    // 0x8006C38C: nop

        goto L_8006C3B0;
    // 0x8006C38C: nop

L_8006C390:
    // 0x8006C390: jal         0x8006BF5C
    // 0x8006C394: nop

    func_8006BF5C(rdram, ctx);
        goto after_20;
    // 0x8006C394: nop

    after_20:
    // 0x8006C398: b           L_8006C3B0
    // 0x8006C39C: nop

        goto L_8006C3B0;
    // 0x8006C39C: nop

L_8006C3A0:
    // 0x8006C3A0: jal         0x8006C18C
    // 0x8006C3A4: nop

    func_8006C18C(rdram, ctx);
        goto after_21;
    // 0x8006C3A4: nop

    after_21:
    // 0x8006C3A8: b           L_8006C3B0
    // 0x8006C3AC: nop

        goto L_8006C3B0;
    // 0x8006C3AC: nop

L_8006C3B0:
    // 0x8006C3B0: b           L_8006C3B8
    // 0x8006C3B4: nop

        goto L_8006C3B8;
    // 0x8006C3B4: nop

L_8006C3B8:
    // 0x8006C3B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C3BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006C3C0: jr          $ra
    // 0x8006C3C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006C3C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80081120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80081124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80081128: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8008112C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80081130: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80081134: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80081138: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008113C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80081140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081144: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80081148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008114C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80081150: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80081154: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80081158: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008115C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80081160: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80081164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8008116C: lw          $a3, 0x150($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X150);
    // 0x80081170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80081174: jal         0x8001BD44
    // 0x80081178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80081178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008117C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80081180: addiu       $t1, $zero, 0x2CC
    ctx->r9 = ADD32(0, 0X2CC);
    // 0x80081184: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x80081188: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008118C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80081190: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80081194: nop

    // 0x80081198: swc1        $f4, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f4.u32l;
    // 0x8008119C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800811A0: nop

    // 0x800811A4: lwc1        $f20, 0x14($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800811A8: nop

    // 0x800811AC: swc1        $f20, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f20.u32l;
    // 0x800811B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800811B4: nop

    // 0x800811B8: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    // 0x800811BC: b           L_800811C4
    // 0x800811C0: nop

        goto L_800811C4;
    // 0x800811C0: nop

L_800811C4:
    // 0x800811C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800811C8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800811CC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800811D0: jr          $ra
    // 0x800811D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800811D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80063EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063EE0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80063EE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063EE8: sb          $zero, 0x48B2($at)
    MEM_B(0X48B2, ctx->r1) = 0;
    // 0x80063EEC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063EF0: sh          $zero, 0x48B0($at)
    MEM_H(0X48B0, ctx->r1) = 0;
    // 0x80063EF4: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
    // 0x80063EF8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80063EFC:
    // 0x80063EFC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80063F00: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80063F04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80063F08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80063F0C: lw          $t8, 0x4A14($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4A14);
    // 0x80063F10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063F14: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x80063F18: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80063F1C: sw          $t8, 0x48B8($at)
    MEM_W(0X48B8, ctx->r1) = ctx->r24;
    // 0x80063F20: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80063F24: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x80063F28: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80063F2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80063F30: lh          $t2, 0x4B64($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4B64);
    // 0x80063F34: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x80063F38: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80063F3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80063F40: lh          $t4, 0x4C18($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4C18);
    // 0x80063F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063F48: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x80063F4C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80063F50: sh          $t4, 0x48BC($at)
    MEM_H(0X48BC, ctx->r1) = ctx->r12;
    // 0x80063F54: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80063F58: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80063F5C: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x80063F60: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80063F64: lh          $t8, 0x4B64($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4B64);
    // 0x80063F68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80063F6C: bne         $t8, $at, L_80063F84
    if (ctx->r24 != ctx->r1) {
        // 0x80063F70: nop
    
            goto L_80063F84;
    }
    // 0x80063F70: nop

    // 0x80063F74: lh          $t9, 0x2($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2);
    // 0x80063F78: nop

    // 0x80063F7C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80063F80: sh          $t1, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r9;
L_80063F84:
    // 0x80063F84: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80063F88: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80063F8C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80063F90: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80063F94: lh          $t0, 0x4B64($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4B64);
    // 0x80063F98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80063F9C: bne         $t0, $at, L_80063FB4
    if (ctx->r8 != ctx->r1) {
        // 0x80063FA0: nop
    
            goto L_80063FB4;
    }
    // 0x80063FA0: nop

    // 0x80063FA4: lh          $t4, 0x2($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2);
    // 0x80063FA8: nop

    // 0x80063FAC: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x80063FB0: sh          $t5, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r13;
L_80063FB4:
    // 0x80063FB4: lh          $t7, 0x2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2);
    // 0x80063FB8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80063FBC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80063FC0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80063FC4: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80063FC8: sll         $t2, $t6, 3
    ctx->r10 = S32(ctx->r14 << 3);
    // 0x80063FCC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80063FD0: addiu       $t1, $t9, 0xFA
    ctx->r9 = ADD32(ctx->r25, 0XFA);
    // 0x80063FD4: sh          $t1, 0x48BE($at)
    MEM_H(0X48BE, ctx->r1) = ctx->r9;
    // 0x80063FD8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80063FDC: nop

    // 0x80063FE0: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x80063FE4: slti        $at, $t0, 0x53
    ctx->r1 = SIGNED(ctx->r8) < 0X53 ? 1 : 0;
    // 0x80063FE8: bne         $at, $zero, L_80063EFC
    if (ctx->r1 != 0) {
        // 0x80063FEC: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_80063EFC;
    }
    // 0x80063FEC: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80063FF0: b           L_80063FF8
    // 0x80063FF4: nop

        goto L_80063FF8;
    // 0x80063FF4: nop

L_80063FF8:
    // 0x80063FF8: jr          $ra
    // 0x80063FFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80063FFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DF92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF92C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DF930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF934: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF93C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF94C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF958: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DF95C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DF960: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800DF964: nop

    // 0x800DF968: bne         $t0, $zero, L_800DF98C
    if (ctx->r8 != 0) {
        // 0x800DF96C: nop
    
            goto L_800DF98C;
    }
    // 0x800DF96C: nop

    // 0x800DF970: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DF974: nop

    // 0x800DF978: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800DF97C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DF980: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800DF984: b           L_800DF998
    // 0x800DF988: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800DF998;
    // 0x800DF988: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800DF98C:
    // 0x800DF98C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DF990: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800DF994: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800DF998:
    // 0x800DF998: b           L_800DF9A0
    // 0x800DF99C: nop

        goto L_800DF9A0;
    // 0x800DF99C: nop

L_800DF9A0:
    // 0x800DF9A0: jr          $ra
    // 0x800DF9A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DF9A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BA648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BA64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA654: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA658: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA65C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA660: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA66C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA670: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BA674: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800BA678: nop

    // 0x800BA67C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800BA680: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA684: nop

    // 0x800BA688: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BA68C: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x800BA690: beq         $at, $zero, L_800BA704
    if (ctx->r1 == 0) {
        // 0x800BA694: nop
    
            goto L_800BA704;
    }
    // 0x800BA694: nop

    // 0x800BA698: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BA69C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BA6A0: addu        $at, $at, $t0
    gpr jr_addend_800BA6AC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BA6A4: lw          $t0, 0x4C30($at)
    ctx->r8 = ADD32(ctx->r1, 0X4C30);
    // 0x800BA6A8: nop

    // 0x800BA6AC: jr          $t0
    // 0x800BA6B0: nop

    switch (jr_addend_800BA6AC >> 2) {
        case 0: goto L_800BA6B4; break;
        case 1: goto L_800BA6C4; break;
        case 2: goto L_800BA6D4; break;
        case 3: goto L_800BA6E4; break;
        case 4: goto L_800BA6F4; break;
        default: switch_error(__func__, 0x800BA6AC, 0x80114C30);
    }
    // 0x800BA6B0: nop

L_800BA6B4:
    // 0x800BA6B4: jal         0x800BA09C
    // 0x800BA6B8: nop

    func_800BA09C(rdram, ctx);
        goto after_0;
    // 0x800BA6B8: nop

    after_0:
    // 0x800BA6BC: b           L_800BA70C
    // 0x800BA6C0: nop

        goto L_800BA70C;
    // 0x800BA6C0: nop

L_800BA6C4:
    // 0x800BA6C4: jal         0x800BA1E4
    // 0x800BA6C8: nop

    func_800BA1E4(rdram, ctx);
        goto after_1;
    // 0x800BA6C8: nop

    after_1:
    // 0x800BA6CC: b           L_800BA70C
    // 0x800BA6D0: nop

        goto L_800BA70C;
    // 0x800BA6D0: nop

L_800BA6D4:
    // 0x800BA6D4: jal         0x800BA334
    // 0x800BA6D8: nop

    func_800BA334(rdram, ctx);
        goto after_2;
    // 0x800BA6D8: nop

    after_2:
    // 0x800BA6DC: b           L_800BA70C
    // 0x800BA6E0: nop

        goto L_800BA70C;
    // 0x800BA6E0: nop

L_800BA6E4:
    // 0x800BA6E4: jal         0x800BA468
    // 0x800BA6E8: nop

    func_800BA468(rdram, ctx);
        goto after_3;
    // 0x800BA6E8: nop

    after_3:
    // 0x800BA6EC: b           L_800BA70C
    // 0x800BA6F0: nop

        goto L_800BA70C;
    // 0x800BA6F0: nop

L_800BA6F4:
    // 0x800BA6F4: jal         0x800BA5A8
    // 0x800BA6F8: nop

    func_800BA5A8(rdram, ctx);
        goto after_4;
    // 0x800BA6F8: nop

    after_4:
    // 0x800BA6FC: b           L_800BA70C
    // 0x800BA700: nop

        goto L_800BA70C;
    // 0x800BA700: nop

L_800BA704:
    // 0x800BA704: b           L_800BA70C
    // 0x800BA708: nop

        goto L_800BA70C;
    // 0x800BA708: nop

L_800BA70C:
    // 0x800BA70C: b           L_800BA714
    // 0x800BA710: nop

        goto L_800BA714;
    // 0x800BA710: nop

L_800BA714:
    // 0x800BA714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BA71C: jr          $ra
    // 0x800BA720: nop

    return;
    // 0x800BA720: nop

;}
RECOMP_FUNC void func_800E70D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E70D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E70D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E70D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E70DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E70E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E70E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E70E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E70EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E70F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E70F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E70F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E70FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7100: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E7104: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7108: nop

    // 0x800E710C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E7110: nop

    // 0x800E7114: bne         $t1, $zero, L_800E716C
    if (ctx->r9 != 0) {
        // 0x800E7118: nop
    
            goto L_800E716C;
    }
    // 0x800E7118: nop

    // 0x800E711C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E7120: nop

    // 0x800E7124: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E7128: nop

    // 0x800E712C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E7130: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E7134: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E7138: nop

    // 0x800E713C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E7140: nop

    // 0x800E7144: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E7148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E714C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7150: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E7154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7158: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E715C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7160: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E7164: jal         0x8001C0EC
    // 0x800E7168: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E7168: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E716C:
    // 0x800E716C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7174: jal         0x8001B4AC
    // 0x800E7178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800E7178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800E717C: beq         $v0, $zero, L_800E71A8
    if (ctx->r2 == 0) {
        // 0x800E7180: nop
    
            goto L_800E71A8;
    }
    // 0x800E7180: nop

    // 0x800E7184: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E7188: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E718C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E7190: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7194: nop

    // 0x800E7198: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x800E719C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E71A0: nop

    // 0x800E71A4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E71A8:
    // 0x800E71A8: b           L_800E71B0
    // 0x800E71AC: nop

        goto L_800E71B0;
    // 0x800E71AC: nop

L_800E71B0:
    // 0x800E71B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E71B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E71B8: jr          $ra
    // 0x800E71BC: nop

    return;
    // 0x800E71BC: nop

;}
RECOMP_FUNC void func_8007BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BD34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BD38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007BD3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BD40: jal         0x800794C4
    // 0x8007BD44: nop

    func_800794C4(rdram, ctx);
        goto after_0;
    // 0x8007BD44: nop

    after_0:
    // 0x8007BD48: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007BD4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007BD50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007BD54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BD58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007BD5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BD60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007BD64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007BD68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007BD6C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007BD70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007BD74: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8007BD78: lw          $a3, 0x50($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X50);
    // 0x8007BD7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BD80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007BD84: jal         0x8001BD44
    // 0x8007BD88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007BD88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x8007BD8C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BD90: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8007BD94: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007BD98: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BD9C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x8007BDA0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x8007BDA4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BDA8: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8007BDAC: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8007BDB0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BDB4: nop

    // 0x8007BDB8: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x8007BDBC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BDC0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007BDC4: sh          $t8, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r24;
    // 0x8007BDC8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BDCC: nop

    // 0x8007BDD0: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
    // 0x8007BDD4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007BDD8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007BDDC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BDE0: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007BDE4: nop

    // 0x8007BDE8: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x8007BDEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BDF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007BDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007BDF8: jal         0x80019448
    // 0x8007BDFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8007BDFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8007BE00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE04: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007BE08: addiu       $a3, $a3, 0x649C
    ctx->r7 = ADD32(ctx->r7, 0X649C);
    // 0x8007BE0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007BE10: jal         0x8001ABF4
    // 0x8007BE14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007BE14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8007BE18: b           L_8007BE20
    // 0x8007BE1C: nop

        goto L_8007BE20;
    // 0x8007BE1C: nop

L_8007BE20:
    // 0x8007BE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007BE28: jr          $ra
    // 0x8007BE2C: nop

    return;
    // 0x8007BE2C: nop

;}
RECOMP_FUNC void func_800D4114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D4118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D411C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D4120: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D4124: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D4128: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D412C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D4130: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D4134: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D4138: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D413C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D4140: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D4144: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D4148: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D414C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D4150: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D4154: addiu       $a1, $a1, 0x412C
    ctx->r5 = ADD32(ctx->r5, 0X412C);
    // 0x800D4158: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D415C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D4160: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D4164: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D4168: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D416C: jal         0x80027464
    // 0x800D4170: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D4170: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D4174: b           L_800D417C
    // 0x800D4178: nop

        goto L_800D417C;
    // 0x800D4178: nop

L_800D417C:
    // 0x800D417C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D4184: jr          $ra
    // 0x800D4188: nop

    return;
    // 0x800D4188: nop

;}
RECOMP_FUNC void func_800D1CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1D00: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D1D04: nop

    // 0x800D1D08: bne         $t6, $zero, L_800D1D64
    if (ctx->r14 != 0) {
        // 0x800D1D0C: nop
    
            goto L_800D1D64;
    }
    // 0x800D1D0C: nop

    // 0x800D1D10: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D1D14: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D1D18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1D1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D1D20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D1D24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D1D28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D1D2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D1D30: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D1D34: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D1D38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D1D3C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D1D40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1D44: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D1D48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D1D4C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D1D50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D1D54: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D1D58: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D1D5C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D1D60: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D1D64:
    // 0x800D1D64: jr          $ra
    // 0x800D1D68: nop

    return;
    // 0x800D1D68: nop

    // 0x800D1D6C: jr          $ra
    // 0x800D1D70: nop

    return;
    // 0x800D1D70: nop

;}
RECOMP_FUNC void func_80069D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069D0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069D10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80069D14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069D18: lb          $t6, -0x1C34($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C34);
    // 0x80069D1C: nop

    // 0x80069D20: beq         $t6, $zero, L_80069D30
    if (ctx->r14 == 0) {
        // 0x80069D24: nop
    
            goto L_80069D30;
    }
    // 0x80069D24: nop

    // 0x80069D28: b           L_80069D78
    // 0x80069D2C: nop

        goto L_80069D78;
    // 0x80069D2C: nop

L_80069D30:
    // 0x80069D30: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80069D34: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80069D38: nop

    // 0x80069D3C: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80069D40: nop

    // 0x80069D44: bne         $t8, $zero, L_80069D54
    if (ctx->r24 != 0) {
        // 0x80069D48: nop
    
            goto L_80069D54;
    }
    // 0x80069D48: nop

    // 0x80069D4C: b           L_80069D78
    // 0x80069D50: nop

        goto L_80069D78;
    // 0x80069D50: nop

L_80069D54:
    // 0x80069D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80069D58: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80069D5C: jal         0x80069AD8
    // 0x80069D60: nop

    func_80069AD8(rdram, ctx);
        goto after_0;
    // 0x80069D60: nop

    after_0:
    // 0x80069D64: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80069D68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069D6C: sb          $t9, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r25;
    // 0x80069D70: b           L_80069D78
    // 0x80069D74: nop

        goto L_80069D78;
    // 0x80069D74: nop

L_80069D78:
    // 0x80069D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069D80: jr          $ra
    // 0x80069D84: nop

    return;
    // 0x80069D84: nop

;}
RECOMP_FUNC void func_800C1224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C1228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C122C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1230: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C1234: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1238: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C123C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C1244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1248: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C124C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C1250: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C1254: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800C1258: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C125C: nop

    // 0x800C1260: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800C1264: nop

    // 0x800C1268: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800C126C: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800C1270: beq         $at, $zero, L_800C12F4
    if (ctx->r1 == 0) {
        // 0x800C1274: nop
    
            goto L_800C12F4;
    }
    // 0x800C1274: nop

    // 0x800C1278: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C127C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C1280: addu        $at, $at, $t2
    gpr jr_addend_800C128C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C1284: lw          $t2, 0x4CF0($at)
    ctx->r10 = ADD32(ctx->r1, 0X4CF0);
    // 0x800C1288: nop

    // 0x800C128C: jr          $t2
    // 0x800C1290: nop

    switch (jr_addend_800C128C >> 2) {
        case 0: goto L_800C1294; break;
        case 1: goto L_800C12A4; break;
        case 2: goto L_800C12B4; break;
        case 3: goto L_800C12C4; break;
        case 4: goto L_800C12D4; break;
        case 5: goto L_800C12E4; break;
        default: switch_error(__func__, 0x800C128C, 0x80114CF0);
    }
    // 0x800C1290: nop

L_800C1294:
    // 0x800C1294: jal         0x800C0CC0
    // 0x800C1298: nop

    func_800C0CC0(rdram, ctx);
        goto after_0;
    // 0x800C1298: nop

    after_0:
    // 0x800C129C: b           L_800C12FC
    // 0x800C12A0: nop

        goto L_800C12FC;
    // 0x800C12A0: nop

L_800C12A4:
    // 0x800C12A4: jal         0x800C0D78
    // 0x800C12A8: nop

    func_800C0D78(rdram, ctx);
        goto after_1;
    // 0x800C12A8: nop

    after_1:
    // 0x800C12AC: b           L_800C12FC
    // 0x800C12B0: nop

        goto L_800C12FC;
    // 0x800C12B0: nop

L_800C12B4:
    // 0x800C12B4: jal         0x800C11F4
    // 0x800C12B8: nop

    func_800C11F4(rdram, ctx);
        goto after_2;
    // 0x800C12B8: nop

    after_2:
    // 0x800C12BC: b           L_800C12FC
    // 0x800C12C0: nop

        goto L_800C12FC;
    // 0x800C12C0: nop

L_800C12C4:
    // 0x800C12C4: jal         0x800C1204
    // 0x800C12C8: nop

    func_800C1204(rdram, ctx);
        goto after_3;
    // 0x800C12C8: nop

    after_3:
    // 0x800C12CC: b           L_800C12FC
    // 0x800C12D0: nop

        goto L_800C12FC;
    // 0x800C12D0: nop

L_800C12D4:
    // 0x800C12D4: jal         0x800C1214
    // 0x800C12D8: nop

    func_800C1214(rdram, ctx);
        goto after_4;
    // 0x800C12D8: nop

    after_4:
    // 0x800C12DC: b           L_800C12FC
    // 0x800C12E0: nop

        goto L_800C12FC;
    // 0x800C12E0: nop

L_800C12E4:
    // 0x800C12E4: jal         0x800C0F18
    // 0x800C12E8: nop

    func_800C0F18(rdram, ctx);
        goto after_5;
    // 0x800C12E8: nop

    after_5:
    // 0x800C12EC: b           L_800C12FC
    // 0x800C12F0: nop

        goto L_800C12FC;
    // 0x800C12F0: nop

L_800C12F4:
    // 0x800C12F4: b           L_800C12FC
    // 0x800C12F8: nop

        goto L_800C12FC;
    // 0x800C12F8: nop

L_800C12FC:
    // 0x800C12FC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1300: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C1304: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800C1308: nop

    // 0x800C130C: beq         $t4, $at, L_800C1360
    if (ctx->r12 == ctx->r1) {
        // 0x800C1310: nop
    
            goto L_800C1360;
    }
    // 0x800C1310: nop

    // 0x800C1314: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1318: nop

    // 0x800C131C: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x800C1320: nop

    // 0x800C1324: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800C1328: sh          $t7, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r15;
    // 0x800C132C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1330: nop

    // 0x800C1334: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x800C1338: nop

    // 0x800C133C: slti        $at, $t9, 0x27
    ctx->r1 = SIGNED(ctx->r25) < 0X27 ? 1 : 0;
    // 0x800C1340: bne         $at, $zero, L_800C1360
    if (ctx->r1 != 0) {
        // 0x800C1344: nop
    
            goto L_800C1360;
    }
    // 0x800C1344: nop

    // 0x800C1348: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C134C: nop

    // 0x800C1350: sh          $zero, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = 0;
    // 0x800C1354: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1358: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800C135C: sh          $t1, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r9;
L_800C1360:
    // 0x800C1360: b           L_800C1368
    // 0x800C1364: nop

        goto L_800C1368;
    // 0x800C1364: nop

L_800C1368:
    // 0x800C1368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C136C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C1370: jr          $ra
    // 0x800C1374: nop

    return;
    // 0x800C1374: nop

;}
RECOMP_FUNC void func_80095604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095604: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095608: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009560C: nop

    // 0x80095610: bne         $t6, $zero, L_80095648
    if (ctx->r14 != 0) {
        // 0x80095614: nop
    
            goto L_80095648;
    }
    // 0x80095614: nop

    // 0x80095618: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009561C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80095620: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095624: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80095628: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009562C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80095630: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80095634: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80095638: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009563C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80095640: b           L_800956B8
    // 0x80095644: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800956B8;
    // 0x80095644: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_80095648:
    // 0x80095648: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009564C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80095650: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80095654: bne         $t0, $at, L_8009568C
    if (ctx->r8 != ctx->r1) {
        // 0x80095658: nop
    
            goto L_8009568C;
    }
    // 0x80095658: nop

    // 0x8009565C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80095660: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80095664: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095668: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009566C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80095670: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80095674: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80095678: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009567C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80095680: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80095684: b           L_800956B8
    // 0x80095688: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800956B8;
    // 0x80095688: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_8009568C:
    // 0x8009568C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80095690: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80095694: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095698: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009569C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800956A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800956A4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800956A8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800956AC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800956B0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800956B4: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_800956B8:
    // 0x800956B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800956BC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800956C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800956C4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800956C8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800956CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800956D0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800956D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800956D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800956DC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800956E0: jr          $ra
    // 0x800956E4: nop

    return;
    // 0x800956E4: nop

    // 0x800956E8: jr          $ra
    // 0x800956EC: nop

    return;
    // 0x800956EC: nop

;}
RECOMP_FUNC void func_800E8EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8EC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8EC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E8ECC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8ED0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8ED4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8ED8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8EDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8EE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8EE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8EEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8EF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8EF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8EF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8EFC: nop

    // 0x800E8F00: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E8F04: nop

    // 0x800E8F08: bne         $t1, $zero, L_800E8F28
    if (ctx->r9 != 0) {
        // 0x800E8F0C: nop
    
            goto L_800E8F28;
    }
    // 0x800E8F0C: nop

    // 0x800E8F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8F18: jal         0x8001BB34
    // 0x800E8F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E8F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E8F20: b           L_800E8F50
    // 0x800E8F24: nop

        goto L_800E8F50;
    // 0x800E8F24: nop

L_800E8F28:
    // 0x800E8F28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8F2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8F30: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E8F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8F38: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E8F3C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E8F40: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E8F44: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E8F48: jal         0x8001BB34
    // 0x800E8F4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E8F4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E8F50:
    // 0x800E8F50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8F54: nop

    // 0x800E8F58: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8F5C: nop

    // 0x800E8F60: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E8F64: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x800E8F68: beq         $at, $zero, L_800E902C
    if (ctx->r1 == 0) {
        // 0x800E8F6C: nop
    
            goto L_800E902C;
    }
    // 0x800E8F6C: nop

    // 0x800E8F70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8F74: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E8F78: addu        $at, $at, $t7
    gpr jr_addend_800E8F84 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E8F7C: lw          $t7, 0x5514($at)
    ctx->r15 = ADD32(ctx->r1, 0X5514);
    // 0x800E8F80: nop

    // 0x800E8F84: jr          $t7
    // 0x800E8F88: nop

    switch (jr_addend_800E8F84 >> 2) {
        case 0: goto L_800E8F8C; break;
        case 1: goto L_800E8F9C; break;
        case 2: goto L_800E8FAC; break;
        case 3: goto L_800E8FBC; break;
        case 4: goto L_800E8FCC; break;
        case 5: goto L_800E8FDC; break;
        case 6: goto L_800E8FEC; break;
        case 7: goto L_800E8FFC; break;
        case 8: goto L_800E900C; break;
        case 9: goto L_800E901C; break;
        default: switch_error(__func__, 0x800E8F84, 0x80115514);
    }
    // 0x800E8F88: nop

L_800E8F8C:
    // 0x800E8F8C: jal         0x800E816C
    // 0x800E8F90: nop

    func_800E816C(rdram, ctx);
        goto after_2;
    // 0x800E8F90: nop

    after_2:
    // 0x800E8F94: b           L_800E9034
    // 0x800E8F98: nop

        goto L_800E9034;
    // 0x800E8F98: nop

L_800E8F9C:
    // 0x800E8F9C: jal         0x800E8250
    // 0x800E8FA0: nop

    func_800E8250(rdram, ctx);
        goto after_3;
    // 0x800E8FA0: nop

    after_3:
    // 0x800E8FA4: b           L_800E9034
    // 0x800E8FA8: nop

        goto L_800E9034;
    // 0x800E8FA8: nop

L_800E8FAC:
    // 0x800E8FAC: jal         0x800E839C
    // 0x800E8FB0: nop

    func_800E839C(rdram, ctx);
        goto after_4;
    // 0x800E8FB0: nop

    after_4:
    // 0x800E8FB4: b           L_800E9034
    // 0x800E8FB8: nop

        goto L_800E9034;
    // 0x800E8FB8: nop

L_800E8FBC:
    // 0x800E8FBC: jal         0x800E84D4
    // 0x800E8FC0: nop

    func_800E84D4(rdram, ctx);
        goto after_5;
    // 0x800E8FC0: nop

    after_5:
    // 0x800E8FC4: b           L_800E9034
    // 0x800E8FC8: nop

        goto L_800E9034;
    // 0x800E8FC8: nop

L_800E8FCC:
    // 0x800E8FCC: jal         0x800E8804
    // 0x800E8FD0: nop

    func_800E8804(rdram, ctx);
        goto after_6;
    // 0x800E8FD0: nop

    after_6:
    // 0x800E8FD4: b           L_800E9034
    // 0x800E8FD8: nop

        goto L_800E9034;
    // 0x800E8FD8: nop

L_800E8FDC:
    // 0x800E8FDC: jal         0x800E8934
    // 0x800E8FE0: nop

    func_800E8934(rdram, ctx);
        goto after_7;
    // 0x800E8FE0: nop

    after_7:
    // 0x800E8FE4: b           L_800E9034
    // 0x800E8FE8: nop

        goto L_800E9034;
    // 0x800E8FE8: nop

L_800E8FEC:
    // 0x800E8FEC: jal         0x800E8AAC
    // 0x800E8FF0: nop

    func_800E8AAC(rdram, ctx);
        goto after_8;
    // 0x800E8FF0: nop

    after_8:
    // 0x800E8FF4: b           L_800E9034
    // 0x800E8FF8: nop

        goto L_800E9034;
    // 0x800E8FF8: nop

L_800E8FFC:
    // 0x800E8FFC: jal         0x800E8BC8
    // 0x800E9000: nop

    func_800E8BC8(rdram, ctx);
        goto after_9;
    // 0x800E9000: nop

    after_9:
    // 0x800E9004: b           L_800E9034
    // 0x800E9008: nop

        goto L_800E9034;
    // 0x800E9008: nop

L_800E900C:
    // 0x800E900C: jal         0x800E8CD4
    // 0x800E9010: nop

    func_800E8CD4(rdram, ctx);
        goto after_10;
    // 0x800E9010: nop

    after_10:
    // 0x800E9014: b           L_800E9034
    // 0x800E9018: nop

        goto L_800E9034;
    // 0x800E9018: nop

L_800E901C:
    // 0x800E901C: jal         0x800E8DF0
    // 0x800E9020: nop

    func_800E8DF0(rdram, ctx);
        goto after_11;
    // 0x800E9020: nop

    after_11:
    // 0x800E9024: b           L_800E9034
    // 0x800E9028: nop

        goto L_800E9034;
    // 0x800E9028: nop

L_800E902C:
    // 0x800E902C: b           L_800E9034
    // 0x800E9030: nop

        goto L_800E9034;
    // 0x800E9030: nop

L_800E9034:
    // 0x800E9034: b           L_800E903C
    // 0x800E9038: nop

        goto L_800E903C;
    // 0x800E9038: nop

L_800E903C:
    // 0x800E903C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9040: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E9044: jr          $ra
    // 0x800E9048: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E9048: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008CE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CE8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008CE90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CE94: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008CE98: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8008CE9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8008CEA0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008CEA4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008CEA8: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008CEAC: nop

    // 0x8008CEB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008CEB4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008CEB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008CEBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008CEC0: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008CEC4: nop

    // 0x8008CEC8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008CECC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008CED0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8008CED4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CED8: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x8008CEDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CEE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CEE4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8008CEE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CEEC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CEF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CEF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008CEF8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008CEFC: lwc1        $f8, 0x4150($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8008CF00: nop

    // 0x8008CF04: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8008CF08: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8008CF0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008CF10: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8008CF14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008CF18: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x8008CF1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CF20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008CF24: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8008CF28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CF2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008CF30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CF34: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008CF38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008CF3C: lwc1        $f4, 0x4158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8008CF40: nop

    // 0x8008CF44: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8008CF48: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8008CF4C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008CF50: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008CF54: jal         0x80015634
    // 0x8008CF58: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x8008CF58: nop

    after_0:
    // 0x8008CF5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008CF60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CF64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008CF68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008CF6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008CF70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008CF74: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008CF78: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008CF7C: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x8008CF80: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008CF84: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008CF88: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8008CF8C: nop

    // 0x8008CF90: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8008CF94: jal         0x800366E0
    // 0x8008CF98: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8008CF98: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_1:
    // 0x8008CF9C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8008CFA0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8008CFA4: lh          $t1, 0x6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X6);
    // 0x8008CFA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008CFAC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8008CFB0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CFB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008CFB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CFBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CFC0: div.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8008CFC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CFC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CFCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CFD0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008CFD4: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x8008CFD8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8008CFDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008CFE0: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x8008CFE4: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x8008CFE8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008CFEC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008CFF0: sh          $t5, 0x4C28($at)
    MEM_H(0X4C28, ctx->r1) = ctx->r13;
    // 0x8008CFF4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8008CFF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008CFFC: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x8008D000: nop

    // 0x8008D004: bne         $t9, $at, L_8008D034
    if (ctx->r25 != ctx->r1) {
        // 0x8008D008: nop
    
            goto L_8008D034;
    }
    // 0x8008D008: nop

    // 0x8008D00C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008D010: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008D014: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8008D018: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008D01C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008D020: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008D024: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008D028: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008D02C: b           L_8008D058
    // 0x8008D030: sh          $t0, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r8;
        goto L_8008D058;
    // 0x8008D030: sh          $t0, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r8;
L_8008D034:
    // 0x8008D034: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8008D038: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008D03C: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x8008D040: nop

    // 0x8008D044: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8008D048: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8008D04C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008D050: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008D054: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
L_8008D058:
    // 0x8008D058: b           L_8008D060
    // 0x8008D05C: nop

        goto L_8008D060;
    // 0x8008D05C: nop

L_8008D060:
    // 0x8008D060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D064: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8008D068: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8008D06C: jr          $ra
    // 0x8008D070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008D070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80072358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072358: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007235C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072360: sb          $t6, 0x76DC($at)
    MEM_B(0X76DC, ctx->r1) = ctx->r14;
    // 0x80072364: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072368: lwc1        $f4, -0x1EA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8007236C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072370: swc1        $f4, 0x76C8($at)
    MEM_W(0X76C8, ctx->r1) = ctx->f4.u32l;
    // 0x80072374: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072378: lwc1        $f6, -0x1EA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8007237C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072380: swc1        $f6, 0x76D0($at)
    MEM_W(0X76D0, ctx->r1) = ctx->f6.u32l;
    // 0x80072384: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80072388: lbu         $t7, 0x7974($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7974);
    // 0x8007238C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072390: sb          $t7, 0x76D8($at)
    MEM_B(0X76D8, ctx->r1) = ctx->r15;
    // 0x80072394: jr          $ra
    // 0x80072398: nop

    return;
    // 0x80072398: nop

    // 0x8007239C: jr          $ra
    // 0x800723A0: nop

    return;
    // 0x800723A0: nop

;}
RECOMP_FUNC void func_80060F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060F00: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80060F04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80060F08: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80060F0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80060F10: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80060F14: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80060F18: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x80060F1C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x80060F20: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80060F24: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80060F28: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x80060F2C: nop

    // 0x80060F30: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80060F34: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80060F38: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x80060F3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80060F40: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80060F44: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80060F48: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
    // 0x80060F4C: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x80060F50: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x80060F54: ori         $t3, $t3, 0x1402
    ctx->r11 = ctx->r11 | 0X1402;
    // 0x80060F58: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80060F5C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x80060F60: nop

    // 0x80060F64: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80060F68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80060F6C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80060F70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80060F74: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80060F78: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80060F7C: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x80060F80: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x80060F84: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x80060F88: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80060F8C: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x80060F90: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x80060F94: ori         $t0, $t0, 0x3204
    ctx->r8 = ctx->r8 | 0X3204;
    // 0x80060F98: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80060F9C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80060FA0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80060FA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80060FA8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80060FAC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80060FB0: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x80060FB4: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80060FB8: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x80060FBC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80060FC0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80060FC4: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x80060FC8: ori         $t6, $t6, 0x2205
    ctx->r14 = ctx->r14 | 0X2205;
    // 0x80060FCC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80060FD0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80060FD4: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80060FD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80060FDC: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80060FE0: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80060FE4: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x80060FE8: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x80060FEC: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x80060FF0: ori         $t0, $t0, 0x1301
    ctx->r8 = ctx->r8 | 0X1301;
    // 0x80060FF4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80060FF8: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x80060FFC: nop

    // 0x80061000: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80061004: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80061008: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006100C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061010: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80061014: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80061018: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x8006101C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80061020: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x80061024: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x80061028: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006102C: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80061030: lui         $t7, 0x55
    ctx->r15 = S32(0X55 << 16);
    // 0x80061034: ori         $t7, $t7, 0x3048
    ctx->r15 = ctx->r15 | 0X3048;
    // 0x80061038: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006103C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80061040: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80061044: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061048: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006104C: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80061050: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x80061054: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x80061058: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x8006105C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80061060: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80061064: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x80061068: lui         $t3, 0xFFFC
    ctx->r11 = S32(0XFFFC << 16);
    // 0x8006106C: ori         $t3, $t3, 0xF279
    ctx->r11 = ctx->r11 | 0XF279;
    // 0x80061070: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80061074: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80061078: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006107C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061080: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80061084: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80061088: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    // 0x8006108C: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x80061090: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80061094: ori         $t7, $t7, 0x602
    ctx->r15 = ctx->r15 | 0X602;
    // 0x80061098: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006109C: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x800610A0: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x800610A4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800610A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800610AC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800610B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800610B4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800610B8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800610BC: sw          $t1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r9;
    // 0x800610C0: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x800610C4: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x800610C8: ori         $t3, $t3, 0xC02
    ctx->r11 = ctx->r11 | 0XC02;
    // 0x800610CC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800610D0: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x800610D4: addiu       $t5, $zero, 0x2000
    ctx->r13 = ADD32(0, 0X2000);
    // 0x800610D8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800610DC: lh          $t7, 0x122($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X122);
    // 0x800610E0: nop

    // 0x800610E4: bne         $t7, $zero, L_80061254
    if (ctx->r15 != 0) {
        // 0x800610E8: nop
    
            goto L_80061254;
    }
    // 0x800610E8: nop

    // 0x800610EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800610F0: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x800610F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800610F8: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x800610FC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80061100: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x80061104: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x80061108: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x8006110C: ori         $t0, $t0, 0xE02
    ctx->r8 = ctx->r8 | 0XE02;
    // 0x80061110: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80061114: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x80061118: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x8006111C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80061120: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061124: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061128: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006112C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80061130: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80061134: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x80061138: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8006113C: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80061140: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80061144: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x80061148: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8006114C: nop

    // 0x80061150: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80061154: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80061158: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006115C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061160: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80061164: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80061168: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x8006116C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x80061170: lui         $t2, 0xE800
    ctx->r10 = S32(0XE800 << 16);
    // 0x80061174: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80061178: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x8006117C: nop

    // 0x80061180: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80061184: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80061188: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006118C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061190: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80061194: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80061198: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x8006119C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x800611A0: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x800611A4: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x800611A8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800611AC: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x800611B0: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x800611B4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800611B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800611BC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800611C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800611C4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800611C8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800611CC: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x800611D0: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x800611D4: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x800611D8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800611DC: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x800611E0: nop

    // 0x800611E4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x800611E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800611EC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800611F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800611F4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800611F8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800611FC: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x80061200: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x80061204: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80061208: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006120C: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x80061210: lui         $t0, 0x703
    ctx->r8 = S32(0X703 << 16);
    // 0x80061214: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x80061218: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006121C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80061220: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80061224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061228: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006122C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80061230: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x80061234: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x80061238: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8006123C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80061240: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80061244: nop

    // 0x80061248: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8006124C: b           L_80061400
    // 0x80061250: nop

        goto L_80061400;
    // 0x80061250: nop

L_80061254:
    // 0x80061254: lh          $t7, 0x122($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X122);
    // 0x80061258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006125C: bne         $t7, $at, L_800613CC
    if (ctx->r15 != ctx->r1) {
        // 0x80061260: nop
    
            goto L_800613CC;
    }
    // 0x80061260: nop

    // 0x80061264: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80061268: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006126C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061270: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80061274: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80061278: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8006127C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x80061280: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x80061284: ori         $t0, $t0, 0xE02
    ctx->r8 = ctx->r8 | 0XE02;
    // 0x80061288: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006128C: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x80061290: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x80061294: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80061298: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006129C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x800612A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800612A4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800612A8: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x800612AC: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x800612B0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x800612B4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x800612B8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800612BC: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x800612C0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x800612C4: nop

    // 0x800612C8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800612CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800612D0: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x800612D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800612D8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800612DC: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x800612E0: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x800612E4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x800612E8: lui         $t2, 0xE800
    ctx->r10 = S32(0XE800 << 16);
    // 0x800612EC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800612F0: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x800612F4: nop

    // 0x800612F8: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x800612FC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80061300: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80061304: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061308: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006130C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80061310: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x80061314: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80061318: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8006131C: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80061320: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80061324: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80061328: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8006132C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80061330: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80061334: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x80061338: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006133C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80061340: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80061344: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x80061348: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x8006134C: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x80061350: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80061354: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80061358: nop

    // 0x8006135C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80061360: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80061364: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80061368: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006136C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80061370: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80061374: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x80061378: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8006137C: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80061380: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80061384: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80061388: lui         $t0, 0x73F
    ctx->r8 = S32(0X73F << 16);
    // 0x8006138C: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x80061390: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80061394: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80061398: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006139C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800613A0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x800613A4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800613A8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x800613AC: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x800613B0: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800613B4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800613B8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x800613BC: nop

    // 0x800613C0: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x800613C4: b           L_80061400
    // 0x800613C8: nop

        goto L_80061400;
    // 0x800613C8: nop

L_800613CC:
    // 0x800613CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800613D0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x800613D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800613D8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800613DC: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x800613E0: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x800613E4: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x800613E8: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x800613EC: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x800613F0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800613F4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x800613F8: nop

    // 0x800613FC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
L_80061400:
    // 0x80061400: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80061404: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80061408: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8006140C: nop

    // 0x80061410: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80061414: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80061418: nop

    // 0x8006141C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80061420: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061424: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061428: nop

    // 0x8006142C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80061430: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80061434: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80061438: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x8006143C: nop

    // 0x80061440: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80061444: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80061448: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8006144C: nop

    // 0x80061450: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80061454: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80061458: nop

    // 0x8006145C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80061460: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061464: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061468: nop

    // 0x8006146C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80061470: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80061474: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80061478: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
    // 0x8006147C: nop

    // 0x80061480: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x80061484: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x80061488: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x8006148C: sw          $a2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r6;
    // 0x80061490: sw          $a3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r7;
    // 0x80061494: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80061498: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006149C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800614A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800614A4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800614A8: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800614AC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x800614B0: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x800614B4: nop

    // 0x800614B8: bc1f        L_80061624
    if (!c1cs) {
        // 0x800614BC: nop
    
            goto L_80061624;
    }
    // 0x800614BC: nop

    // 0x800614C0: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800614C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800614C8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800614CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800614D0: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x800614D4: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x800614D8: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x800614DC: sub.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d - ctx->f18.d;
    // 0x800614E0: neg.d       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = -ctx->f4.d;
    // 0x800614E4: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x800614E8: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x800614EC: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800614F0: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800614F4: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x800614F8: div.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800614FC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80061500: nop

    // 0x80061504: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80061508: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006150C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80061510: nop

    // 0x80061514: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80061518: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006151C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061520: nop

    // 0x80061524: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80061528: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8006152C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80061530: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    // 0x80061534: nop

    // 0x80061538: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x8006153C: nop

    // 0x80061540: subu        $a2, $a2, $t9
    ctx->r6 = SUB32(ctx->r6, ctx->r25);
    // 0x80061544: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80061548: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006154C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80061550: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80061554: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80061558: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8006155C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80061560: nop

    // 0x80061564: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80061568: nop

    // 0x8006156C: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x80061570: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80061574: nop

    // 0x80061578: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8006157C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061580: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061584: nop

    // 0x80061588: cvt.w.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_D(ctx->f4.d);
    // 0x8006158C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80061590: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x80061594: nop

    // 0x80061598: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8006159C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800615A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800615A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800615A8: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x800615AC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800615B0: mul.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x800615B4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800615B8: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800615BC: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x800615C0: mul.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x800615C4: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x800615C8: sub.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f10.d - ctx->f6.d;
    // 0x800615CC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800615D0: nop

    // 0x800615D4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800615D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800615DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800615E0: nop

    // 0x800615E4: cvt.w.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_D(ctx->f4.d);
    // 0x800615E8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800615EC: swc1        $f18, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f18.u32l;
    // 0x800615F0: nop

    // 0x800615F4: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800615F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800615FC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80061600: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80061604: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80061608: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8006160C: mul.d       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x80061610: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80061614: nop

    // 0x80061618: cvt.d.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.d = CVT_D_W(ctx->f4.u32l);
    // 0x8006161C: sub.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d - ctx->f18.d;
    // 0x80061620: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_80061624:
    // 0x80061624: lwc1        $f16, 0x114($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80061628: nop

    // 0x8006162C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80061630: nop

    // 0x80061634: bc1f        L_80061744
    if (!c1cs) {
        // 0x80061638: nop
    
            goto L_80061744;
    }
    // 0x80061638: nop

    // 0x8006163C: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80061640: nop

    // 0x80061644: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80061648: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8006164C: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x80061650: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80061654: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80061658: lw          $t4, 0xF0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF0);
    // 0x8006165C: div.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80061660: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80061664: nop

    // 0x80061668: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006166C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80061670: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80061674: nop

    // 0x80061678: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8006167C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061680: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061684: nop

    // 0x80061688: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8006168C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80061690: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80061694: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
    // 0x80061698: nop

    // 0x8006169C: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x800616A0: nop

    // 0x800616A4: subu        $a3, $a3, $t7
    ctx->r7 = SUB32(ctx->r7, ctx->r15);
    // 0x800616A8: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800616AC: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800616B0: nop

    // 0x800616B4: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800616B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800616BC: nop

    // 0x800616C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800616C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800616C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800616CC: nop

    // 0x800616D0: cvt.w.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800616D4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x800616D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800616DC: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x800616E0: nop

    // 0x800616E4: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x800616E8: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800616EC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800616F0: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800616F4: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800616F8: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x800616FC: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80061700: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80061704: nop

    // 0x80061708: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8006170C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061710: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061714: nop

    // 0x80061718: cvt.w.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006171C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80061720: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80061724: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x80061728: nop

    // 0x8006172C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80061730: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80061734: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80061738: nop

    // 0x8006173C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80061740: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
L_80061744:
    // 0x80061744: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80061748: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8006174C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80061750: lui         $at, 0x43A4
    ctx->r1 = S32(0X43A4 << 16);
    // 0x80061754: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80061758: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8006175C: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80061760: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80061764: nop

    // 0x80061768: bc1f        L_800617CC
    if (!c1cs) {
        // 0x8006176C: nop
    
            goto L_800617CC;
    }
    // 0x8006176C: nop

    // 0x80061770: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80061774: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80061778: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006177C: lui         $at, 0x43A4
    ctx->r1 = S32(0X43A4 << 16);
    // 0x80061780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80061784: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80061788: add.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8006178C: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80061790: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80061794: nop

    // 0x80061798: div.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8006179C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800617A0: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800617A4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800617A8: nop

    // 0x800617AC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800617B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800617B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800617B8: nop

    // 0x800617BC: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800617C0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800617C4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800617C8: nop

L_800617CC:
    // 0x800617CC: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x800617D0: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800617D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800617D8: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x800617DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800617E0: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800617E4: add.s       $f4, $f16, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x800617E8: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800617EC: nop

    // 0x800617F0: bc1f        L_80061854
    if (!c1cs) {
        // 0x800617F4: nop
    
            goto L_80061854;
    }
    // 0x800617F4: nop

    // 0x800617F8: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x800617FC: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80061800: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80061804: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x80061808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006180C: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80061810: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x80061814: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80061818: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8006181C: nop

    // 0x80061820: div.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80061824: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80061828: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8006182C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80061830: nop

    // 0x80061834: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80061838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006183C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061840: nop

    // 0x80061844: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80061848: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8006184C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80061850: nop

L_80061854:
    // 0x80061854: bgez        $a2, L_80061860
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80061858: nop
    
            goto L_80061860;
    }
    // 0x80061858: nop

    // 0x8006185C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80061860:
    // 0x80061860: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80061864: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80061868: nop

    // 0x8006186C: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80061870: beq         $at, $zero, L_80061884
    if (ctx->r1 == 0) {
        // 0x80061874: nop
    
            goto L_80061884;
    }
    // 0x80061874: nop

    // 0x80061878: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x8006187C: nop

    // 0x80061880: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
L_80061884:
    // 0x80061884: bgez        $a3, L_80061890
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80061888: nop
    
            goto L_80061890;
    }
    // 0x80061888: nop

    // 0x8006188C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80061890:
    // 0x80061890: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x80061894: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x80061898: nop

    // 0x8006189C: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800618A0: beq         $at, $zero, L_800618B4
    if (ctx->r1 == 0) {
        // 0x800618A4: nop
    
            goto L_800618B4;
    }
    // 0x800618A4: nop

    // 0x800618A8: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x800618AC: nop

    // 0x800618B0: sw          $t1, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r9;
L_800618B4:
    // 0x800618B4: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800618B8: mflo        $t2
    ctx->r10 = lo;
    // 0x800618BC: slti        $at, $t2, 0x5DD
    ctx->r1 = SIGNED(ctx->r10) < 0X5DD ? 1 : 0;
    // 0x800618C0: bne         $at, $zero, L_80061990
    if (ctx->r1 != 0) {
        // 0x800618C4: nop
    
            goto L_80061990;
    }
    // 0x800618C4: nop

    // 0x800618C8: addiu       $t3, $zero, 0x5DC
    ctx->r11 = ADD32(0, 0X5DC);
    // 0x800618CC: div         $zero, $t3, $a2
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r6)));
    // 0x800618D0: bne         $a2, $zero, L_800618DC
    if (ctx->r6 != 0) {
        // 0x800618D4: nop
    
            goto L_800618DC;
    }
    // 0x800618D4: nop

    // 0x800618D8: break       7
    do_break(2147883224);
L_800618DC:
    // 0x800618DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800618E0: bne         $a2, $at, L_800618F4
    if (ctx->r6 != ctx->r1) {
        // 0x800618E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800618F4;
    }
    // 0x800618E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800618E8: bne         $t3, $at, L_800618F4
    if (ctx->r11 != ctx->r1) {
        // 0x800618EC: nop
    
            goto L_800618F4;
    }
    // 0x800618EC: nop

    // 0x800618F0: break       6
    do_break(2147883248);
L_800618F4:
    // 0x800618F4: mflo        $t4
    ctx->r12 = lo;
    // 0x800618F8: sw          $t4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r12;
    // 0x800618FC: nop

    // 0x80061900: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x80061904: nop

    // 0x80061908: div         $zero, $a3, $t5
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r13)));
    // 0x8006190C: bne         $t5, $zero, L_80061918
    if (ctx->r13 != 0) {
        // 0x80061910: nop
    
            goto L_80061918;
    }
    // 0x80061910: nop

    // 0x80061914: break       7
    do_break(2147883284);
L_80061918:
    // 0x80061918: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006191C: bne         $t5, $at, L_80061930
    if (ctx->r13 != ctx->r1) {
        // 0x80061920: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80061930;
    }
    // 0x80061920: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80061924: bne         $a3, $at, L_80061930
    if (ctx->r7 != ctx->r1) {
        // 0x80061928: nop
    
            goto L_80061930;
    }
    // 0x80061928: nop

    // 0x8006192C: break       6
    do_break(2147883308);
L_80061930:
    // 0x80061930: mflo        $t6
    ctx->r14 = lo;
    // 0x80061934: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
    // 0x80061938: nop

    // 0x8006193C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80061940: nop

    // 0x80061944: div         $zero, $a3, $t7
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r15)));
    // 0x80061948: bne         $t7, $zero, L_80061954
    if (ctx->r15 != 0) {
        // 0x8006194C: nop
    
            goto L_80061954;
    }
    // 0x8006194C: nop

    // 0x80061950: break       7
    do_break(2147883344);
L_80061954:
    // 0x80061954: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80061958: bne         $t7, $at, L_8006196C
    if (ctx->r15 != ctx->r1) {
        // 0x8006195C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006196C;
    }
    // 0x8006195C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80061960: bne         $a3, $at, L_8006196C
    if (ctx->r7 != ctx->r1) {
        // 0x80061964: nop
    
            goto L_8006196C;
    }
    // 0x80061964: nop

    // 0x80061968: break       6
    do_break(2147883368);
L_8006196C:
    // 0x8006196C: mfhi        $t8
    ctx->r24 = hi;
    // 0x80061970: beq         $t8, $zero, L_80061988
    if (ctx->r24 == 0) {
        // 0x80061974: nop
    
            goto L_80061988;
    }
    // 0x80061974: nop

    // 0x80061978: lh          $t9, 0xE6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE6);
    // 0x8006197C: nop

    // 0x80061980: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80061984: sh          $t0, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r8;
L_80061988:
    // 0x80061988: b           L_8006199C
    // 0x8006198C: nop

        goto L_8006199C;
    // 0x8006198C: nop

L_80061990:
    // 0x80061990: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80061994: sh          $t1, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r9;
    // 0x80061998: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
L_8006199C:
    // 0x8006199C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800619A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800619A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800619A8: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x800619AC: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x800619B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800619B4: nop

    // 0x800619B8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800619BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800619C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800619C4: nop

    // 0x800619C8: cvt.w.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_D(ctx->f4.d);
    // 0x800619CC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800619D0: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x800619D4: nop

    // 0x800619D8: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x800619DC: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800619E0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800619E4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800619E8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800619EC: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800619F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800619F4: lw          $t3, 0xE0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE0);
    // 0x800619F8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800619FC: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80061A00: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80061A04: nop

    // 0x80061A08: cvt.d.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.d = CVT_D_W(ctx->f6.u32l);
    // 0x80061A0C: add.d       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f18.d + ctx->f10.d;
    // 0x80061A10: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80061A14: nop

    // 0x80061A18: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80061A1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061A20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061A24: nop

    // 0x80061A28: cvt.w.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_D(ctx->f16.d);
    // 0x80061A2C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80061A30: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x80061A34: nop

    // 0x80061A38: lh          $t5, 0xE6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XE6);
    // 0x80061A3C: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x80061A40: blez        $t5, L_800623D0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80061A44: nop
    
            goto L_800623D0;
    }
    // 0x80061A44: nop

L_80061A48:
    // 0x80061A48: lh          $t6, 0xE4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE4);
    // 0x80061A4C: lh          $t8, 0xE6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XE6);
    // 0x80061A50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80061A54: bne         $t7, $t8, L_80061A78
    if (ctx->r15 != ctx->r24) {
        // 0x80061A58: nop
    
            goto L_80061A78;
    }
    // 0x80061A58: nop

    // 0x80061A5C: lh          $t9, 0xE4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE4);
    // 0x80061A60: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x80061A64: nop

    // 0x80061A68: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061A6C: mflo        $t1
    ctx->r9 = lo;
    // 0x80061A70: subu        $t2, $a3, $t1
    ctx->r10 = SUB32(ctx->r7, ctx->r9);
    // 0x80061A74: sw          $t2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r10;
L_80061A78:
    // 0x80061A78: lh          $t3, 0x122($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X122);
    // 0x80061A7C: nop

    // 0x80061A80: bne         $t3, $zero, L_80061CE8
    if (ctx->r11 != 0) {
        // 0x80061A84: nop
    
            goto L_80061CE8;
    }
    // 0x80061A84: nop

    // 0x80061A88: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061A8C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061A90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061A94: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80061A98: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80061A9C: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x80061AA0: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x80061AA4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80061AA8: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80061AAC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80061AB0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80061AB4: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x80061AB8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80061ABC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80061AC0: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x80061AC4: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80061AC8: nop

    // 0x80061ACC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80061AD0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061AD4: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061ADC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80061AE0: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80061AE4: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x80061AE8: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80061AEC: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80061AF0: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80061AF4: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80061AF8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80061AFC: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80061B00: addiu       $t1, $t0, 0x7
    ctx->r9 = ADD32(ctx->r8, 0X7);
    // 0x80061B04: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80061B08: andi        $t3, $t2, 0x1FF
    ctx->r11 = ctx->r10 & 0X1FF;
    // 0x80061B0C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80061B10: sll         $t4, $t3, 9
    ctx->r12 = S32(ctx->r11 << 9);
    // 0x80061B14: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80061B18: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80061B1C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80061B20: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80061B24: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80061B28: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80061B2C: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80061B30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061B34: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80061B38: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80061B3C: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x80061B40: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80061B44: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x80061B48: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80061B4C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80061B50: nop

    // 0x80061B54: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80061B58: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061B5C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061B60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061B64: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80061B68: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80061B6C: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x80061B70: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x80061B74: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x80061B78: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x80061B7C: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80061B80: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80061B84: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80061B88: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80061B8C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80061B90: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80061B94: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80061B98: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x80061B9C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80061BA0: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x80061BA4: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x80061BA8: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x80061BAC: addu        $t0, $t2, $a2
    ctx->r8 = ADD32(ctx->r10, ctx->r6);
    // 0x80061BB0: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x80061BB4: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80061BB8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80061BBC: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80061BC0: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80061BC4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80061BC8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80061BCC: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80061BD0: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80061BD4: or          $t6, $t7, $t1
    ctx->r14 = ctx->r15 | ctx->r9;
    // 0x80061BD8: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80061BDC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80061BE0: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80061BE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061BE8: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x80061BEC: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80061BF0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x80061BF4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80061BF8: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80061BFC: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x80061C00: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80061C04: nop

    // 0x80061C08: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80061C0C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80061C10: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80061C14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061C18: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80061C1C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80061C20: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x80061C24: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x80061C28: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80061C2C: addu        $t6, $t1, $a2
    ctx->r14 = ADD32(ctx->r9, ctx->r6);
    // 0x80061C30: subu        $t8, $t6, $t1
    ctx->r24 = SUB32(ctx->r14, ctx->r9);
    // 0x80061C34: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80061C38: sra         $t2, $t9, 1
    ctx->r10 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80061C3C: addiu       $t0, $t2, 0x7
    ctx->r8 = ADD32(ctx->r10, 0X7);
    // 0x80061C40: sra         $t3, $t0, 3
    ctx->r11 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80061C44: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x80061C48: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80061C4C: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x80061C50: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80061C54: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x80061C58: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80061C5C: nop

    // 0x80061C60: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80061C64: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80061C68: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80061C6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061C70: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80061C74: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80061C78: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80061C7C: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x80061C80: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x80061C84: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80061C88: andi        $t3, $t0, 0xFFF
    ctx->r11 = ctx->r8 & 0XFFF;
    // 0x80061C8C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80061C90: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80061C94: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80061C98: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80061C9C: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x80061CA0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80061CA4: or          $t8, $t5, $t1
    ctx->r24 = ctx->r13 | ctx->r9;
    // 0x80061CA8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80061CAC: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80061CB0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x80061CB4: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x80061CB8: addu        $t5, $t6, $a2
    ctx->r13 = ADD32(ctx->r14, ctx->r6);
    // 0x80061CBC: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80061CC0: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x80061CC4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80061CC8: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x80061CCC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80061CD0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80061CD4: andi        $t7, $t4, 0xFFF
    ctx->r15 = ctx->r12 & 0XFFF;
    // 0x80061CD8: or          $t2, $t9, $t7
    ctx->r10 = ctx->r25 | ctx->r15;
    // 0x80061CDC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x80061CE0: b           L_80062190
    // 0x80061CE4: nop

        goto L_80062190;
    // 0x80061CE4: nop

L_80061CE8:
    // 0x80061CE8: lh          $t3, 0x122($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X122);
    // 0x80061CEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80061CF0: bne         $t3, $at, L_80061F44
    if (ctx->r11 != ctx->r1) {
        // 0x80061CF4: nop
    
            goto L_80061F44;
    }
    // 0x80061CF4: nop

    // 0x80061CF8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061CFC: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061D00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061D04: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80061D08: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80061D0C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80061D10: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80061D14: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80061D18: addiu       $t1, $t5, -0x1
    ctx->r9 = ADD32(ctx->r13, -0X1);
    // 0x80061D1C: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x80061D20: lui         $at, 0xFD08
    ctx->r1 = S32(0XFD08 << 16);
    // 0x80061D24: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80061D28: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80061D2C: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x80061D30: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80061D34: nop

    // 0x80061D38: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x80061D3C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80061D40: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80061D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061D48: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80061D4C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80061D50: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x80061D54: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80061D58: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80061D5C: addu        $t5, $t6, $a2
    ctx->r13 = ADD32(ctx->r14, ctx->r6);
    // 0x80061D60: subu        $t1, $t5, $t6
    ctx->r9 = SUB32(ctx->r13, ctx->r14);
    // 0x80061D64: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x80061D68: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80061D6C: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x80061D70: sll         $t2, $t7, 9
    ctx->r10 = S32(ctx->r15 << 9);
    // 0x80061D74: lui         $at, 0xF508
    ctx->r1 = S32(0XF508 << 16);
    // 0x80061D78: or          $t0, $t2, $at
    ctx->r8 = ctx->r10 | ctx->r1;
    // 0x80061D7C: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x80061D80: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80061D84: lui         $t4, 0x700
    ctx->r12 = S32(0X700 << 16);
    // 0x80061D88: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80061D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80061D90: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80061D94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061D98: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80061D9C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80061DA0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80061DA4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80061DA8: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80061DAC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80061DB0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80061DB4: nop

    // 0x80061DB8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80061DBC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80061DC0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80061DC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061DC8: addiu       $t0, $t2, 0x8
    ctx->r8 = ADD32(ctx->r10, 0X8);
    // 0x80061DCC: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80061DD0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80061DD4: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x80061DD8: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x80061DDC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80061DE0: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x80061DE4: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x80061DE8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80061DEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80061DF0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80061DF4: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80061DF8: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x80061DFC: or          $t2, $t1, $t7
    ctx->r10 = ctx->r9 | ctx->r15;
    // 0x80061E00: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x80061E04: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x80061E08: lw          $t3, 0xF0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF0);
    // 0x80061E0C: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x80061E10: addu        $t1, $t9, $a2
    ctx->r9 = ADD32(ctx->r25, ctx->r6);
    // 0x80061E14: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80061E18: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80061E1C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80061E20: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x80061E24: sll         $t0, $t2, 12
    ctx->r8 = S32(ctx->r10 << 12);
    // 0x80061E28: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80061E2C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80061E30: or          $t3, $t0, $at
    ctx->r11 = ctx->r8 | ctx->r1;
    // 0x80061E34: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80061E38: or          $t4, $t3, $t8
    ctx->r12 = ctx->r11 | ctx->r24;
    // 0x80061E3C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80061E40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80061E44: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80061E48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061E4C: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x80061E50: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80061E54: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80061E58: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80061E5C: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80061E60: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x80061E64: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80061E68: nop

    // 0x80061E6C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80061E70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80061E74: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x80061E78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061E7C: addiu       $t3, $t0, 0x8
    ctx->r11 = ADD32(ctx->r8, 0X8);
    // 0x80061E80: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80061E84: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80061E88: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x80061E8C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80061E90: addu        $t4, $t8, $a2
    ctx->r12 = ADD32(ctx->r24, ctx->r6);
    // 0x80061E94: subu        $t5, $t4, $t8
    ctx->r13 = SUB32(ctx->r12, ctx->r24);
    // 0x80061E98: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80061E9C: sra         $t9, $t6, 3
    ctx->r25 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80061EA0: andi        $t1, $t9, 0x1FF
    ctx->r9 = ctx->r25 & 0X1FF;
    // 0x80061EA4: sll         $t7, $t1, 9
    ctx->r15 = S32(ctx->r9 << 9);
    // 0x80061EA8: lui         $at, 0xF508
    ctx->r1 = S32(0XF508 << 16);
    // 0x80061EAC: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x80061EB0: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x80061EB4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80061EB8: nop

    // 0x80061EBC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80061EC0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80061EC4: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80061EC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061ECC: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x80061ED0: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80061ED4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80061ED8: lw          $t5, 0xF4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF4);
    // 0x80061EDC: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x80061EE0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80061EE4: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80061EE8: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x80061EEC: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80061EF0: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80061EF4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80061EF8: andi        $t3, $t0, 0xFFF
    ctx->r11 = ctx->r8 & 0XFFF;
    // 0x80061EFC: or          $t7, $t1, $at
    ctx->r15 = ctx->r9 | ctx->r1;
    // 0x80061F00: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x80061F04: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80061F08: lw          $t0, 0xF4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF4);
    // 0x80061F0C: lw          $t5, 0xF0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF0);
    // 0x80061F10: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x80061F14: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x80061F18: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80061F1C: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x80061F20: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80061F24: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80061F28: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80061F2C: sll         $t8, $t4, 12
    ctx->r24 = S32(ctx->r12 << 12);
    // 0x80061F30: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x80061F34: or          $t5, $t8, $t2
    ctx->r13 = ctx->r24 | ctx->r10;
    // 0x80061F38: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80061F3C: b           L_80062190
    // 0x80061F40: nop

        goto L_80062190;
    // 0x80061F40: nop

L_80061F44:
    // 0x80061F44: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80061F48: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80061F4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061F50: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80061F54: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80061F58: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80061F5C: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x80061F60: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80061F64: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x80061F68: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80061F6C: lui         $at, 0xFD18
    ctx->r1 = S32(0XFD18 << 16);
    // 0x80061F70: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80061F74: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80061F78: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x80061F7C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80061F80: nop

    // 0x80061F84: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
    // 0x80061F88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80061F8C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80061F90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061F94: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x80061F98: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80061F9C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80061FA0: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x80061FA4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80061FA8: addu        $t0, $t1, $a2
    ctx->r8 = ADD32(ctx->r9, ctx->r6);
    // 0x80061FAC: subu        $t7, $t0, $t1
    ctx->r15 = SUB32(ctx->r8, ctx->r9);
    // 0x80061FB0: sll         $t3, $t7, 1
    ctx->r11 = S32(ctx->r15 << 1);
    // 0x80061FB4: addiu       $t4, $t3, 0x9
    ctx->r12 = ADD32(ctx->r11, 0X9);
    // 0x80061FB8: sra         $t8, $t4, 3
    ctx->r24 = S32(SIGNED(ctx->r12) >> 3);
    // 0x80061FBC: andi        $t2, $t8, 0x1FF
    ctx->r10 = ctx->r24 & 0X1FF;
    // 0x80061FC0: sll         $t5, $t2, 9
    ctx->r13 = S32(ctx->r10 << 9);
    // 0x80061FC4: lui         $at, 0xF518
    ctx->r1 = S32(0XF518 << 16);
    // 0x80061FC8: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80061FCC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80061FD0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80061FD4: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x80061FD8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80061FDC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80061FE0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80061FE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80061FE8: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80061FEC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80061FF0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80061FF4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80061FF8: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80061FFC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80062000: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80062004: nop

    // 0x80062008: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006200C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80062010: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80062014: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80062018: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006201C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80062020: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80062024: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x80062028: lw          $t4, 0xF0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF0);
    // 0x8006202C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80062030: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80062034: sll         $t7, $t1, 12
    ctx->r15 = S32(ctx->r9 << 12);
    // 0x80062038: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006203C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80062040: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80062044: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80062048: or          $t3, $t7, $at
    ctx->r11 = ctx->r15 | ctx->r1;
    // 0x8006204C: or          $t5, $t3, $t2
    ctx->r13 = ctx->r11 | ctx->r10;
    // 0x80062050: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80062054: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x80062058: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x8006205C: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x80062060: addu        $t3, $t8, $a2
    ctx->r11 = ADD32(ctx->r24, ctx->r6);
    // 0x80062064: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80062068: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006206C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80062070: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x80062074: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x80062078: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006207C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80062080: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80062084: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x80062088: or          $t0, $t9, $t4
    ctx->r8 = ctx->r25 | ctx->r12;
    // 0x8006208C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80062090: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80062094: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80062098: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006209C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800620A0: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x800620A4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800620A8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800620AC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x800620B0: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x800620B4: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x800620B8: nop

    // 0x800620BC: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x800620C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800620C4: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800620C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800620CC: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x800620D0: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800620D4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800620D8: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x800620DC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x800620E0: addu        $t0, $t4, $a2
    ctx->r8 = ADD32(ctx->r12, ctx->r6);
    // 0x800620E4: subu        $t1, $t0, $t4
    ctx->r9 = SUB32(ctx->r8, ctx->r12);
    // 0x800620E8: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x800620EC: addiu       $t8, $t7, 0x9
    ctx->r24 = ADD32(ctx->r15, 0X9);
    // 0x800620F0: sra         $t3, $t8, 3
    ctx->r11 = S32(SIGNED(ctx->r24) >> 3);
    // 0x800620F4: andi        $t2, $t3, 0x1FF
    ctx->r10 = ctx->r11 & 0X1FF;
    // 0x800620F8: sll         $t5, $t2, 9
    ctx->r13 = S32(ctx->r10 << 9);
    // 0x800620FC: lui         $at, 0xF518
    ctx->r1 = S32(0XF518 << 16);
    // 0x80062100: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80062104: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80062108: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8006210C: nop

    // 0x80062110: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80062114: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80062118: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006211C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80062120: addiu       $t1, $t4, 0x8
    ctx->r9 = ADD32(ctx->r12, 0X8);
    // 0x80062124: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80062128: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8006212C: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x80062130: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x80062134: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80062138: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x8006213C: sll         $t2, $t3, 12
    ctx->r10 = S32(ctx->r11 << 12);
    // 0x80062140: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80062144: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80062148: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8006214C: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x80062150: or          $t5, $t2, $at
    ctx->r13 = ctx->r10 | ctx->r1;
    // 0x80062154: or          $t4, $t5, $t0
    ctx->r12 = ctx->r13 | ctx->r8;
    // 0x80062158: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8006215C: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x80062160: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x80062164: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x80062168: addu        $t5, $t9, $a2
    ctx->r13 = ADD32(ctx->r25, ctx->r6);
    // 0x8006216C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80062170: addu        $t3, $t7, $t8
    ctx->r11 = ADD32(ctx->r15, ctx->r24);
    // 0x80062174: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80062178: andi        $t4, $t0, 0xFFF
    ctx->r12 = ctx->r8 & 0XFFF;
    // 0x8006217C: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x80062180: sll         $t1, $t4, 12
    ctx->r9 = S32(ctx->r12 << 12);
    // 0x80062184: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x80062188: or          $t7, $t1, $t6
    ctx->r15 = ctx->r9 | ctx->r14;
    // 0x8006218C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
L_80062190:
    // 0x80062190: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80062194: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80062198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006219C: addiu       $t2, $t3, 0x8
    ctx->r10 = ADD32(ctx->r11, 0X8);
    // 0x800621A0: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800621A4: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x800621A8: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x800621AC: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x800621B0: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x800621B4: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x800621B8: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x800621BC: andi        $t4, $t0, 0xFFF
    ctx->r12 = ctx->r8 & 0XFFF;
    // 0x800621C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800621C4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800621C8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800621CC: sll         $t1, $t4, 12
    ctx->r9 = S32(ctx->r12 << 12);
    // 0x800621D0: or          $t3, $t1, $t8
    ctx->r11 = ctx->r9 | ctx->r24;
    // 0x800621D4: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x800621D8: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x800621DC: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800621E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800621E4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800621E8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800621EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800621F0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800621F4: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800621F8: add.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x800621FC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80062200: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80062204: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80062208: nop

    // 0x8006220C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80062210: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80062214: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80062218: nop

    // 0x8006221C: cvt.w.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_D(ctx->f6.d);
    // 0x80062220: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80062224: swc1        $f18, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f18.u32l;
    // 0x80062228: nop

    // 0x8006222C: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x80062230: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80062234: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80062238: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8006223C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80062240: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80062244: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80062248: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8006224C: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x80062250: nop

    // 0x80062254: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80062258: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8006225C: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80062260: cvt.d.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
    // 0x80062264: add.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d + ctx->f10.d;
    // 0x80062268: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006226C: nop

    // 0x80062270: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80062274: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80062278: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006227C: nop

    // 0x80062280: cvt.w.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_D(ctx->f8.d);
    // 0x80062284: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80062288: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    // 0x8006228C: nop

    // 0x80062290: lh          $t7, 0xE4($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XE4);
    // 0x80062294: lh          $t8, 0xE6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XE6);
    // 0x80062298: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x8006229C: bne         $t1, $t8, L_800622B4
    if (ctx->r9 != ctx->r24) {
        // 0x800622A0: nop
    
            goto L_800622B4;
    }
    // 0x800622A0: nop

    // 0x800622A4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x800622A8: nop

    // 0x800622AC: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x800622B0: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
L_800622B4:
    // 0x800622B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800622B8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800622BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800622C0: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x800622C4: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x800622C8: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x800622CC: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x800622D0: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x800622D4: andi        $t4, $t0, 0xFFF
    ctx->r12 = ctx->r8 & 0XFFF;
    // 0x800622D8: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x800622DC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800622E0: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x800622E4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800622E8: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x800622EC: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x800622F0: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x800622F4: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x800622F8: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x800622FC: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x80062300: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80062304: sll         $t0, $t5, 12
    ctx->r8 = S32(ctx->r13 << 12);
    // 0x80062308: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8006230C: or          $t1, $t0, $t6
    ctx->r9 = ctx->r8 | ctx->r14;
    // 0x80062310: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x80062314: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80062318: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006231C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80062320: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x80062324: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80062328: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8006232C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80062330: lui         $t2, 0xB400
    ctx->r10 = S32(0XB400 << 16);
    // 0x80062334: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x80062338: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8006233C: nop

    // 0x80062340: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80062344: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80062348: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006234C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80062350: addiu       $t0, $t4, 0x8
    ctx->r8 = ADD32(ctx->r12, 0X8);
    // 0x80062354: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80062358: sw          $t4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r12;
    // 0x8006235C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80062360: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x80062364: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80062368: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x8006236C: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x80062370: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80062374: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80062378: sll         $t3, $t8, 16
    ctx->r11 = S32(ctx->r24 << 16);
    // 0x8006237C: andi        $t9, $t2, 0xFFFF
    ctx->r25 = ctx->r10 & 0XFFFF;
    // 0x80062380: or          $t5, $t3, $t9
    ctx->r13 = ctx->r11 | ctx->r25;
    // 0x80062384: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x80062388: lw          $t0, 0xF0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF0);
    // 0x8006238C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x80062390: nop

    // 0x80062394: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x80062398: sw          $t1, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r9;
    // 0x8006239C: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x800623A0: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x800623A4: nop

    // 0x800623A8: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x800623AC: sw          $t2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r10;
    // 0x800623B0: lh          $t3, 0xE4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XE4);
    // 0x800623B4: lh          $t0, 0xE6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XE6);
    // 0x800623B8: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x800623BC: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x800623C0: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800623C4: slt         $at, $t4, $t0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800623C8: bne         $at, $zero, L_80061A48
    if (ctx->r1 != 0) {
        // 0x800623CC: sh          $t9, 0xE4($sp)
        MEM_H(0XE4, ctx->r29) = ctx->r25;
            goto L_80061A48;
    }
    // 0x800623CC: sh          $t9, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r25;
L_800623D0:
    // 0x800623D0: b           L_800623D8
    // 0x800623D4: nop

        goto L_800623D8;
    // 0x800623D4: nop

L_800623D8:
    // 0x800623D8: jr          $ra
    // 0x800623DC: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x800623DC: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_800EC4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC4AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC4B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC4B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC4BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC4C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC4C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC4C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC4CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC4D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC4D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC4D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC4DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800EC4E0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800EC4E4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800EC4E8: nop

    // 0x800EC4EC: bne         $t0, $zero, L_800EC51C
    if (ctx->r8 != 0) {
        // 0x800EC4F0: nop
    
            goto L_800EC51C;
    }
    // 0x800EC4F0: nop

    // 0x800EC4F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC4F8: nop

    // 0x800EC4FC: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800EC500: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC504: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800EC508: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800EC50C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800EC510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EC514: jal         0x80069E60
    // 0x800EC518: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x800EC518: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
L_800EC51C:
    // 0x800EC51C: b           L_800EC524
    // 0x800EC520: nop

        goto L_800EC524;
    // 0x800EC520: nop

L_800EC524:
    // 0x800EC524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EC52C: jr          $ra
    // 0x800EC530: nop

    return;
    // 0x800EC530: nop

;}
RECOMP_FUNC void func_80098000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098008: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009800C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80098010: nop

    // 0x80098014: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80098018: nop

    // 0x8009801C: bne         $t7, $zero, L_8009808C
    if (ctx->r15 != 0) {
        // 0x80098020: nop
    
            goto L_8009808C;
    }
    // 0x80098020: nop

    // 0x80098024: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80098028: nop

    // 0x8009802C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80098030: nop

    // 0x80098034: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80098038: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009803C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80098040: nop

    // 0x80098044: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x80098048: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009804C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098050: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80098054: nop

    // 0x80098058: swc1        $f4, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f4.u32l;
    // 0x8009805C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80098060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80098064: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80098068: nop

    // 0x8009806C: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x80098070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009807C: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80098080: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80098084: jal         0x800175F0
    // 0x80098088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80098088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_8009808C:
    // 0x8009808C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098090: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80098098: jal         0x8001B6BC
    // 0x8009809C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x8009809C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
    // 0x800980A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800980A4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800980A8: nop

    // 0x800980AC: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x800980B0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800980B4: nop

    // 0x800980B8: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800980BC: nop

    // 0x800980C0: swc1        $f10, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f10.u32l;
    // 0x800980C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800980C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800980CC: jal         0x80029D04
    // 0x800980D0: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800980D0: nop

    after_2:
    // 0x800980D4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800980D8: nop

    // 0x800980DC: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800980E0: lwc1        $f4, 0x48($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X48);
    // 0x800980E4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800980E8: nop

    // 0x800980EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800980F0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800980F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800980F8: nop

    // 0x800980FC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80098100: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80098104: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80098108: nop

    // 0x8009810C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80098110: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80098114: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80098118: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
    // 0x8009811C: nop

    // 0x80098120: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80098124: nop

    // 0x80098128: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x8009812C: nop

    // 0x80098130: slti        $at, $t1, 0xB4
    ctx->r1 = SIGNED(ctx->r9) < 0XB4 ? 1 : 0;
    // 0x80098134: bne         $at, $zero, L_8009814C
    if (ctx->r1 != 0) {
        // 0x80098138: nop
    
            goto L_8009814C;
    }
    // 0x80098138: nop

    // 0x8009813C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80098140: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80098144: nop

    // 0x80098148: swc1        $f10, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f10.u32l;
L_8009814C:
    // 0x8009814C: b           L_80098154
    // 0x80098150: nop

        goto L_80098154;
    // 0x80098150: nop

L_80098154:
    // 0x80098154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009815C: jr          $ra
    // 0x80098160: nop

    return;
    // 0x80098160: nop

;}
RECOMP_FUNC void func_8005E040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E040: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005E044: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005E048: jal         0x8001D4D0
    // 0x8005E04C: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x8005E04C: nop

    after_0:
    // 0x8005E050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005E054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005E058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E05C: jal         0x8001D638
    // 0x8005E060: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x8005E060: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8005E064: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8005E068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005E06C: lui         $at, 0x45FA
    ctx->r1 = S32(0X45FA << 16);
    // 0x8005E070: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005E074: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005E078: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005E07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8005E080: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8005E084: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x8005E088: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x8005E08C: addiu       $a1, $sp, 0x3E
    ctx->r5 = ADD32(ctx->r29, 0X3E);
    // 0x8005E090: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8005E094: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8005E098: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8005E09C: jal         0x80036E70
    // 0x8005E0A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x8005E0A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8005E0A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005E0A8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005E0AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E0B0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005E0B4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005E0B8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8005E0BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8005E0C0: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8005E0C4: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x8005E0C8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005E0CC: lhu         $t0, 0x3E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3E);
    // 0x8005E0D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8005E0D4: nop

    // 0x8005E0D8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005E0DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E0E0: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8005E0E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E0E8: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8005E0EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E0F0: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8005E0F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E0F8: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x8005E0FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E100: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x8005E104: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8005E10C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8005E110: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x8005E114: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8005E118: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8005E11C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8005E120: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x8005E124: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x8005E128: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x8005E12C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8005E130: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8005E134: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8005E138: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8005E13C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8005E140: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005E144: jal         0x80037188
    // 0x8005E148: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x8005E148: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8005E14C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005E150: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005E154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E158: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005E15C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005E160: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8005E164: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8005E168: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x8005E16C: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x8005E170: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E174: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005E178: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x8005E17C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8005E180: nop

    // 0x8005E184: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005E188: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E18C: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x8005E190: jal         0x8001838C
    // 0x8005E194: nop

    func_8001838C(rdram, ctx);
        goto after_4;
    // 0x8005E194: nop

    after_4:
    // 0x8005E198: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8005E19C:
    // 0x8005E19C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8005E1A0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8005E1A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005E1A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005E1AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005E1B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005E1B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8005E1B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005E1BC: lh          $t0, 0x41F4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F4);
    // 0x8005E1C0: nop

    // 0x8005E1C4: beq         $t0, $zero, L_8005E1F8
    if (ctx->r8 == 0) {
        // 0x8005E1C8: nop
    
            goto L_8005E1F8;
    }
    // 0x8005E1C8: nop

    // 0x8005E1CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005E1D0: jal         0x8001C1A8
    // 0x8005E1D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_5;
    // 0x8005E1D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8005E1D8: beq         $v0, $zero, L_8005E1F8
    if (ctx->r2 == 0) {
        // 0x8005E1DC: nop
    
            goto L_8005E1F8;
    }
    // 0x8005E1DC: nop

    // 0x8005E1E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005E1E4: jal         0x8001B014
    // 0x8005E1E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x8005E1E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8005E1EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005E1F0: jal         0x8001C384
    // 0x8005E1F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x8005E1F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8005E1F8:
    // 0x8005E1F8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8005E1FC: nop

    // 0x8005E200: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005E204: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x8005E208: bne         $at, $zero, L_8005E19C
    if (ctx->r1 != 0) {
        // 0x8005E20C: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_8005E19C;
    }
    // 0x8005E20C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x8005E210: jal         0x8005C2BC
    // 0x8005E214: nop

    Demo_HandlePrintText(rdram, ctx);
        goto after_8;
    // 0x8005E214: nop

    after_8:
    // 0x8005E218: b           L_8005E220
    // 0x8005E21C: nop

        goto L_8005E220;
    // 0x8005E21C: nop

L_8005E220:
    // 0x8005E220: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8005E228: jr          $ra
    // 0x8005E22C: nop

    return;
    // 0x8005E22C: nop

;}
RECOMP_FUNC void func_800EEA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EEA50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EEA54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EEA58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EEA5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EEA60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EEA64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EEA68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EEA6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EEA70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EEA74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EEA78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EEA7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EEA80: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EEA84: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEA88: nop

    // 0x800EEA8C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EEA90: nop

    // 0x800EEA94: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800EEA98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEA9C: nop

    // 0x800EEAA0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EEAA4: nop

    // 0x800EEAA8: bne         $t3, $zero, L_800EEB2C
    if (ctx->r11 != 0) {
        // 0x800EEAAC: nop
    
            goto L_800EEB2C;
    }
    // 0x800EEAAC: nop

    // 0x800EEAB0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEAB4: nop

    // 0x800EEAB8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EEABC: nop

    // 0x800EEAC0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EEAC4: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EEAC8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEACC: nop

    // 0x800EEAD0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EEAD4: nop

    // 0x800EEAD8: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EEADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEAE0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EEAE4: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800EEAE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEAEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EEAF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EEAF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EEAF8: jal         0x8001C0EC
    // 0x800EEAFC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EEAFC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EEB00: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800EEB04: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800EEB08: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EEB0C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800EEB10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EEB14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EEB18: jal         0x8001C0EC
    // 0x800EEB1C: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EEB1C: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800EEB20: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEB24: nop

    // 0x800EEB28: sb          $zero, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = 0;
L_800EEB2C:
    // 0x800EEB2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEB30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEB34: jal         0x8001B62C
    // 0x800EEB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800EEB38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800EEB3C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800EEB40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EEB44: nop

    // 0x800EEB48: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800EEB4C: nop

    // 0x800EEB50: bc1f        L_800EEC90
    if (!c1cs) {
        // 0x800EEB54: nop
    
            goto L_800EEC90;
    }
    // 0x800EEB54: nop

    // 0x800EEB58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEB5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEB60: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800EEB64: lwc1        $f11, 0x55C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X55C8);
    // 0x800EEB68: lwc1        $f10, 0x55CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X55CC);
    // 0x800EEB6C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800EEB70: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800EEB74: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800EEB78: swc1        $f18, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f18.u32l;
    // 0x800EEB7C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEB80: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEB84: lwc1        $f4, 0x10($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X10);
    // 0x800EEB88: lwc1        $f9, 0x55D0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X55D0);
    // 0x800EEB8C: lwc1        $f8, 0x55D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X55D4);
    // 0x800EEB90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800EEB94: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800EEB98: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800EEB9C: swc1        $f16, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f16.u32l;
    // 0x800EEBA0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEBA4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEBA8: lwc1        $f18, 0x14($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800EEBAC: lwc1        $f7, 0x55D8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X55D8);
    // 0x800EEBB0: lwc1        $f6, 0x55DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55DC);
    // 0x800EEBB4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800EEBB8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800EEBBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800EEBC0: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
    // 0x800EEBC4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800EEBC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EEBCC: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800EEBD0: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800EEBD4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EEBD8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800EEBDC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EEBE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EEBE4: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800EEBE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEBEC: lwc1        $f16, 0xC($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800EEBF0: lwc1        $f5, 0x55E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X55E0);
    // 0x800EEBF4: lwc1        $f4, 0x55E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55E4);
    // 0x800EEBF8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800EEBFC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800EEC00: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800EEC04: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x800EEC08: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800EEC0C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800EEC10: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EEC14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EEC18: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EEC1C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EEC20: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EEC24: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800EEC28: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800EEC2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEC30: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800EEC34: lwc1        $f19, 0x55E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X55E8);
    // 0x800EEC38: lwc1        $f18, 0x55EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X55EC);
    // 0x800EEC3C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800EEC40: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800EEC44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800EEC48: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800EEC4C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800EEC50: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800EEC54: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800EEC58: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EEC5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EEC60: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EEC64: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EEC68: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800EEC6C: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x800EEC70: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EEC74: lwc1        $f8, 0x14($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800EEC78: lwc1        $f17, 0x55F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X55F0);
    // 0x800EEC7C: lwc1        $f16, 0x55F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X55F4);
    // 0x800EEC80: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800EEC84: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800EEC88: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800EEC8C: swc1        $f4, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f4.u32l;
L_800EEC90:
    // 0x800EEC90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EEC94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EEC98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEC9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EECA0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800EECA4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800EECA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EECAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800EECB0: jal         0x800295C0
    // 0x800EECB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800EECB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800EECB8: beq         $v0, $zero, L_800EECD0
    if (ctx->r2 == 0) {
        // 0x800EECBC: nop
    
            goto L_800EECD0;
    }
    // 0x800EECBC: nop

    // 0x800EECC0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EECC4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EECC8: b           L_800EECE0
    // 0x800EECCC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_800EECE0;
    // 0x800EECCC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_800EECD0:
    // 0x800EECD0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EECD4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EECD8: nop

    // 0x800EECDC: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
L_800EECE0:
    // 0x800EECE0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EECE4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800EECE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EECEC: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800EECF0: nop

    // 0x800EECF4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800EECF8: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800EECFC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800EED00: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EED04: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800EED08: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800EED0C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800EED10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800EED14: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800EED18: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800EED1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EED20: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800EED24: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x800EED28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EED2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EED30: jal         0x8001B4AC
    // 0x800EED34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800EED34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800EED38: beq         $v0, $zero, L_800EEE18
    if (ctx->r2 == 0) {
        // 0x800EED3C: nop
    
            goto L_800EEE18;
    }
    // 0x800EED3C: nop

    // 0x800EED40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EED44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EED48: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EED4C: nop

    // 0x800EED50: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x800EED54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EED58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EED5C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EED60: nop

    // 0x800EED64: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
    // 0x800EED68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EED6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EED70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800EED74: nop

    // 0x800EED78: swc1        $f18, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f18.u32l;
    // 0x800EED7C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800EED80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EED84: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800EED88: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800EED8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EED90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EED94: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800EED98: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EED9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EEDA0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EEDA4: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800EEDA8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EEDAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EEDB0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EEDB4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EEDB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EEDBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EEDC0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EEDC4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EEDC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EEDCC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EEDD0: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800EEDD4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800EEDD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EEDDC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EEDE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EEDE4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EEDE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EEDEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EEDF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EEDF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EEDF8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EEDFC: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800EEE00: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEE04: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800EEE08: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800EEE0C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEE10: nop

    // 0x800EEE14: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800EEE18:
    // 0x800EEE18: b           L_800EEE20
    // 0x800EEE1C: nop

        goto L_800EEE20;
    // 0x800EEE1C: nop

L_800EEE20:
    // 0x800EEE20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EEE24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EEE28: jr          $ra
    // 0x800EEE2C: nop

    return;
    // 0x800EEE2C: nop

;}
RECOMP_FUNC void func_800B3630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3630: jr          $ra
    // 0x800B3634: nop

    return;
    // 0x800B3634: nop

    // 0x800B3638: jr          $ra
    // 0x800B363C: nop

    return;
    // 0x800B363C: nop

;}
RECOMP_FUNC void func_800B444C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B444C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B4450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B4454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4458: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B445C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4460: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4464: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4468: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B446C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4470: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4474: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B4478: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B447C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B4480: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B4484: nop

    // 0x800B4488: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B448C: nop

    // 0x800B4490: bne         $t1, $zero, L_800B4548
    if (ctx->r9 != 0) {
        // 0x800B4494: nop
    
            goto L_800B4548;
    }
    // 0x800B4494: nop

    // 0x800B4498: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B449C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B44A0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B44A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B44A8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B44AC: nop

    // 0x800B44B0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B44B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B44B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B44BC: nop

    // 0x800B44C0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B44C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B44C8: nop

    // 0x800B44CC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800B44D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B44D4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B44D8: addiu       $t7, $t7, 0x7928
    ctx->r15 = ADD32(ctx->r15, 0X7928);
    // 0x800B44DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B44E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B44E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B44E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800B44EC: jal         0x8001C0EC
    // 0x800B44F0: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B44F0: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_0:
    // 0x800B44F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B44F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B44FC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4500: addiu       $a3, $a3, 0x79D0
    ctx->r7 = ADD32(ctx->r7, 0X79D0);
    // 0x800B4504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4508: jal         0x8001ABF4
    // 0x800B450C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B450C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B4510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4518: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B451C: addiu       $a3, $a3, 0x7A08
    ctx->r7 = ADD32(ctx->r7, 0X7A08);
    // 0x800B4520: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B4524: jal         0x8001ABF4
    // 0x800B4528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B4528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B452C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4534: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4538: addiu       $a3, $a3, 0x7A40
    ctx->r7 = ADD32(ctx->r7, 0X7A40);
    // 0x800B453C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B4540: jal         0x8001ABF4
    // 0x800B4544: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B4544: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800B4548:
    // 0x800B4548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B454C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4550: jal         0x80029C40
    // 0x800B4554: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B4554: nop

    after_4:
    // 0x800B4558: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B455C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4560: jal         0x80029D04
    // 0x800B4564: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B4564: nop

    after_5:
    // 0x800B4568: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B456C: nop

    // 0x800B4570: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B4574: nop

    // 0x800B4578: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B457C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800B4580: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B4584: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800B4588: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800B458C: nop

    // 0x800B4590: bne         $t2, $at, L_800B45AC
    if (ctx->r10 != ctx->r1) {
        // 0x800B4594: nop
    
            goto L_800B45AC;
    }
    // 0x800B4594: nop

    // 0x800B4598: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800B459C: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800B45A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800B45A4: jal         0x800B5368
    // 0x800B45A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800B5368(rdram, ctx);
        goto after_6;
    // 0x800B45A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_800B45AC:
    // 0x800B45AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B45B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B45B4: jal         0x8001B44C
    // 0x800B45B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800B45B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800B45BC: beq         $v0, $zero, L_800B4654
    if (ctx->r2 == 0) {
        // 0x800B45C0: nop
    
            goto L_800B4654;
    }
    // 0x800B45C0: nop

    // 0x800B45C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B45C8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800B45CC: addiu       $t3, $t3, 0x7928
    ctx->r11 = ADD32(ctx->r11, 0X7928);
    // 0x800B45D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B45D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800B45D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B45DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B45E0: jal         0x8001C0EC
    // 0x800B45E4: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800B45E4: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_8:
    // 0x800B45E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B45EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B45F0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B45F4: addiu       $a3, $a3, 0x79B4
    ctx->r7 = ADD32(ctx->r7, 0X79B4);
    // 0x800B45F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B45FC: jal         0x8001ABF4
    // 0x800B4600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800B4600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800B4604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B460C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4610: addiu       $a3, $a3, 0x79EC
    ctx->r7 = ADD32(ctx->r7, 0X79EC);
    // 0x800B4614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B4618: jal         0x8001ABF4
    // 0x800B461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800B461C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800B4620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4628: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B462C: addiu       $a3, $a3, 0x7A24
    ctx->r7 = ADD32(ctx->r7, 0X7A24);
    // 0x800B4630: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B4634: jal         0x8001ABF4
    // 0x800B4638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x800B4638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x800B463C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B4640: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B4644: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800B4648: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B464C: nop

    // 0x800B4650: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B4654:
    // 0x800B4654: b           L_800B465C
    // 0x800B4658: nop

        goto L_800B465C;
    // 0x800B4658: nop

L_800B465C:
    // 0x800B465C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B4664: jr          $ra
    // 0x800B4668: nop

    return;
    // 0x800B4668: nop

;}
RECOMP_FUNC void func_800985C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800985C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800985CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800985D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800985D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800985D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800985DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800985E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800985E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800985E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800985EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800985F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800985F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800985F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800985FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80098600: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80098604: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098608: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8009860C: nop

    // 0x80098610: beq         $s0, $at, L_80098638
    if (ctx->r16 == ctx->r1) {
        // 0x80098614: nop
    
            goto L_80098638;
    }
    // 0x80098614: nop

    // 0x80098618: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009861C: beq         $s0, $at, L_8009864C
    if (ctx->r16 == ctx->r1) {
        // 0x80098620: nop
    
            goto L_8009864C;
    }
    // 0x80098620: nop

    // 0x80098624: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80098628: beq         $s0, $at, L_80098660
    if (ctx->r16 == ctx->r1) {
        // 0x8009862C: nop
    
            goto L_80098660;
    }
    // 0x8009862C: nop

    // 0x80098630: b           L_80098674
    // 0x80098634: nop

        goto L_80098674;
    // 0x80098634: nop

L_80098638:
    // 0x80098638: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009863C: jal         0x80098370
    // 0x80098640: nop

    func_80098370(rdram, ctx);
        goto after_0;
    // 0x80098640: nop

    after_0:
    // 0x80098644: b           L_80098674
    // 0x80098648: nop

        goto L_80098674;
    // 0x80098648: nop

L_8009864C:
    // 0x8009864C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80098650: jal         0x800983F8
    // 0x80098654: nop

    func_800983F8(rdram, ctx);
        goto after_1;
    // 0x80098654: nop

    after_1:
    // 0x80098658: b           L_80098674
    // 0x8009865C: nop

        goto L_80098674;
    // 0x8009865C: nop

L_80098660:
    // 0x80098660: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80098664: jal         0x80098590
    // 0x80098668: nop

    func_80098590(rdram, ctx);
        goto after_2;
    // 0x80098668: nop

    after_2:
    // 0x8009866C: b           L_80098674
    // 0x80098670: nop

        goto L_80098674;
    // 0x80098670: nop

L_80098674:
    // 0x80098674: b           L_8009867C
    // 0x80098678: nop

        goto L_8009867C;
    // 0x80098678: nop

L_8009867C:
    // 0x8009867C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098680: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098684: jr          $ra
    // 0x80098688: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80098688: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D7614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7614: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D7618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D761C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D7620: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D7624: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D7628: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D762C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D7630: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D7634: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D7638: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D763C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D7640: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D7644: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D7648: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D764C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D7650: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D7654: addiu       $a1, $a1, 0x4234
    ctx->r5 = ADD32(ctx->r5, 0X4234);
    // 0x800D7658: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D765C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D7660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D7664: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D7668: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D766C: jal         0x80027464
    // 0x800D7670: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D7670: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D7674: b           L_800D767C
    // 0x800D7678: nop

        goto L_800D767C;
    // 0x800D7678: nop

L_800D767C:
    // 0x800D767C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D7680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D7684: jr          $ra
    // 0x800D7688: nop

    return;
    // 0x800D7688: nop

;}
RECOMP_FUNC void Cutscene_PrintWithLeadingZeros(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089D30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80089D34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089D38: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80089D3C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80089D40: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80089D44: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80089D48: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80089D4C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80089D50: blez        $t6, L_80089E30
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80089D54: nop
    
            goto L_80089E30;
    }
    // 0x80089D54: nop

L_80089D58:
    // 0x80089D58: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80089D5C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80089D60: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80089D64: mfhi        $t8
    ctx->r24 = hi;
    // 0x80089D68: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80089D6C: nop

    // 0x80089D70: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80089D74: nop

    // 0x80089D78: bne         $t9, $zero, L_80089D88
    if (ctx->r25 != 0) {
        // 0x80089D7C: nop
    
            goto L_80089D88;
    }
    // 0x80089D7C: nop

    // 0x80089D80: b           L_80089D94
    // 0x80089D84: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
        goto L_80089D94;
    // 0x80089D84: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80089D88:
    // 0x80089D88: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80089D8C: nop

    // 0x80089D90: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80089D94:
    // 0x80089D94: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80089D98: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80089D9C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80089DA0: mflo        $t2
    ctx->r10 = lo;
    // 0x80089DA4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80089DA8: nop

    // 0x80089DAC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80089DB0: nop

    // 0x80089DB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80089DB8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80089DBC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80089DC0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80089DC4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80089DC8: bgez        $t5, L_80089DDC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80089DCC: andi        $a2, $t5, 0x1F
        ctx->r6 = ctx->r13 & 0X1F;
            goto L_80089DDC;
    }
    // 0x80089DCC: andi        $a2, $t5, 0x1F
    ctx->r6 = ctx->r13 & 0X1F;
    // 0x80089DD0: beq         $a2, $zero, L_80089DDC
    if (ctx->r6 == 0) {
        // 0x80089DD4: nop
    
            goto L_80089DDC;
    }
    // 0x80089DD4: nop

    // 0x80089DD8: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80089DDC:
    // 0x80089DDC: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x80089DE0: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x80089DE4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80089DE8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80089DEC: bgez        $t5, L_80089DFC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80089DF0: sra         $a3, $t5, 5
        ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
            goto L_80089DFC;
    }
    // 0x80089DF0: sra         $a3, $t5, 5
    ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
    // 0x80089DF4: addiu       $at, $t5, 0x1F
    ctx->r1 = ADD32(ctx->r13, 0X1F);
    // 0x80089DF8: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80089DFC:
    // 0x80089DFC: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80089E00: jal         0x8008A870
    // 0x80089E04: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    Cutscene_RenderChar(rdram, ctx);
        goto after_0;
    // 0x80089E04: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x80089E08: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80089E0C: nop

    // 0x80089E10: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x80089E14: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80089E18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80089E1C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80089E20: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80089E24: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80089E28: bne         $at, $zero, L_80089D58
    if (ctx->r1 != 0) {
        // 0x80089E2C: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_80089D58;
    }
    // 0x80089E2C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80089E30:
    // 0x80089E30: b           L_80089E38
    // 0x80089E34: nop

        goto L_80089E38;
    // 0x80089E34: nop

L_80089E38:
    // 0x80089E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80089E3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80089E40: jr          $ra
    // 0x80089E44: nop

    return;
    // 0x80089E44: nop

;}
RECOMP_FUNC void func_800ABF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABF34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ABF38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ABF3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ABF40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ABF44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ABF48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ABF4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABF50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ABF54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABF58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ABF5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ABF60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ABF64: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800ABF68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ABF6C: nop

    // 0x800ABF70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ABF74: nop

    // 0x800ABF78: bne         $t1, $zero, L_800ABFF8
    if (ctx->r9 != 0) {
        // 0x800ABF7C: nop
    
            goto L_800ABFF8;
    }
    // 0x800ABF7C: nop

    // 0x800ABF80: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ABF84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ABF88: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ABF8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ABF90: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ABF94: nop

    // 0x800ABF98: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800ABF9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ABFA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ABFA4: nop

    // 0x800ABFA8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800ABFAC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ABFB0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800ABFB4: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800ABFB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABFBC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800ABFC0: addiu       $t8, $t8, 0x75D0
    ctx->r24 = ADD32(ctx->r24, 0X75D0);
    // 0x800ABFC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABFC8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800ABFCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABFD0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800ABFD4: jal         0x8001C0EC
    // 0x800ABFD8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ABFD8: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800ABFDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABFE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABFE4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ABFE8: addiu       $a3, $a3, 0x763C
    ctx->r7 = ADD32(ctx->r7, 0X763C);
    // 0x800ABFEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABFF0: jal         0x8001ABF4
    // 0x800ABFF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800ABFF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800ABFF8:
    // 0x800ABFF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABFFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC004: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AC008: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AC00C: jal         0x800175F0
    // 0x800AC010: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800AC010: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800AC014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC01C: jal         0x8002A8B4
    // 0x800AC020: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800AC020: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_3:
    // 0x800AC024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC02C: jal         0x80029C40
    // 0x800AC030: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800AC030: nop

    after_4:
    // 0x800AC034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC03C: jal         0x80029D04
    // 0x800AC040: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800AC040: nop

    after_5:
    // 0x800AC044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC04C: jal         0x8001B44C
    // 0x800AC050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800AC050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800AC054: beq         $v0, $zero, L_800AC080
    if (ctx->r2 == 0) {
        // 0x800AC058: nop
    
            goto L_800AC080;
    }
    // 0x800AC058: nop

    // 0x800AC05C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AC060: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AC064: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AC068: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AC06C: nop

    // 0x800AC070: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x800AC074: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AC078: b           L_800AC17C
    // 0x800AC07C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800AC17C;
    // 0x800AC07C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800AC080:
    // 0x800AC080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC088: jal         0x8001B62C
    // 0x800AC08C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_7;
    // 0x800AC08C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800AC090: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800AC094: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AC098: nop

    // 0x800AC09C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800AC0A0: nop

    // 0x800AC0A4: bc1f        L_800AC17C
    if (!c1cs) {
        // 0x800AC0A8: nop
    
            goto L_800AC17C;
    }
    // 0x800AC0A8: nop

    // 0x800AC0AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AC0B0: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x800AC0B4: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800AC0B8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800AC0BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800AC0C0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800AC0C4: c.le.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d <= ctx->f18.d;
    // 0x800AC0C8: nop

    // 0x800AC0CC: bc1f        L_800AC164
    if (!c1cs) {
        // 0x800AC0D0: nop
    
            goto L_800AC164;
    }
    // 0x800AC0D0: nop

    // 0x800AC0D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AC0D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AC0DC: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800AC0E0: lwc1        $f9, 0x4A90($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4A90);
    // 0x800AC0E4: lwc1        $f8, 0x4A94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4A94);
    // 0x800AC0E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800AC0EC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800AC0F0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800AC0F4: swc1        $f16, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f16.u32l;
    // 0x800AC0F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AC0FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AC100: lwc1        $f18, 0x10($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X10);
    // 0x800AC104: lwc1        $f7, 0x4A98($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4A98);
    // 0x800AC108: lwc1        $f6, 0x4A9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A9C);
    // 0x800AC10C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800AC110: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800AC114: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800AC118: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
    // 0x800AC11C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AC120: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AC124: lwc1        $f16, 0x14($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800AC128: lwc1        $f5, 0x4AA0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4AA0);
    // 0x800AC12C: lwc1        $f4, 0x4AA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4AA4);
    // 0x800AC130: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800AC134: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800AC138: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800AC13C: swc1        $f8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f8.u32l;
    // 0x800AC140: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC144: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC148: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AC14C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x800AC150: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AC154: jal         0x800175F0
    // 0x800AC158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x800AC158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x800AC15C: b           L_800AC17C
    // 0x800AC160: nop

        goto L_800AC17C;
    // 0x800AC160: nop

L_800AC164:
    // 0x800AC164: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AC168: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800AC16C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800AC170: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AC174: nop

    // 0x800AC178: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800AC17C:
    // 0x800AC17C: b           L_800AC184
    // 0x800AC180: nop

        goto L_800AC184;
    // 0x800AC180: nop

L_800AC184:
    // 0x800AC184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AC18C: jr          $ra
    // 0x800AC190: nop

    return;
    // 0x800AC190: nop

;}
RECOMP_FUNC void func_80063D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063D7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80063D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063D84: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80063D88: lw          $t6, 0x4890($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4890);
    // 0x80063D8C: nop

    // 0x80063D90: bne         $t6, $zero, L_80063DA0
    if (ctx->r14 != 0) {
        // 0x80063D94: nop
    
            goto L_80063DA0;
    }
    // 0x80063D94: nop

    // 0x80063D98: b           L_80063ECC
    // 0x80063D9C: nop

        goto L_80063ECC;
    // 0x80063D9C: nop

L_80063DA0:
    // 0x80063DA0: jal         0x8006357C
    // 0x80063DA4: nop

    func_8006357C(rdram, ctx);
        goto after_0;
    // 0x80063DA4: nop

    after_0:
    // 0x80063DA8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80063DAC: lw          $t7, 0x4894($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4894);
    // 0x80063DB0: nop

    // 0x80063DB4: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x80063DB8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80063DBC: lw          $t8, 0x4898($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4898);
    // 0x80063DC0: nop

    // 0x80063DC4: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x80063DC8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80063DCC: lw          $t9, 0x4890($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4890);
    // 0x80063DD0: nop

    // 0x80063DD4: lh          $t0, 0x8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8);
    // 0x80063DD8: nop

    // 0x80063DDC: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x80063DE0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80063DE4: lw          $t1, 0x4890($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4890);
    // 0x80063DE8: nop

    // 0x80063DEC: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x80063DF0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80063DF4:
    // 0x80063DF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80063DF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063DFC: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80063E00: nop

    // 0x80063E04: bne         $t4, $at, L_80063E54
    if (ctx->r12 != ctx->r1) {
        // 0x80063E08: nop
    
            goto L_80063E54;
    }
    // 0x80063E08: nop

    // 0x80063E0C: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x80063E10: nop

    // 0x80063E14: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80063E18: sh          $t6, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r14;
    // 0x80063E1C: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80063E20: nop

    // 0x80063E24: bne         $t7, $zero, L_80063E34
    if (ctx->r15 != 0) {
        // 0x80063E28: nop
    
            goto L_80063E34;
    }
    // 0x80063E28: nop

    // 0x80063E2C: b           L_80063EC4
    // 0x80063E30: nop

        goto L_80063EC4;
    // 0x80063E30: nop

L_80063E34:
    // 0x80063E34: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80063E38: nop

    // 0x80063E3C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80063E40: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x80063E44: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80063E48: lw          $t0, 0x4894($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4894);
    // 0x80063E4C: b           L_80063EAC
    // 0x80063E50: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
        goto L_80063EAC;
    // 0x80063E50: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
L_80063E54:
    // 0x80063E54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80063E58: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80063E5C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80063E60: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x80063E64: bgez        $t2, L_80063E78
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80063E68: andi        $a2, $t2, 0x1F
        ctx->r6 = ctx->r10 & 0X1F;
            goto L_80063E78;
    }
    // 0x80063E68: andi        $a2, $t2, 0x1F
    ctx->r6 = ctx->r10 & 0X1F;
    // 0x80063E6C: beq         $a2, $zero, L_80063E78
    if (ctx->r6 == 0) {
        // 0x80063E70: nop
    
            goto L_80063E78;
    }
    // 0x80063E70: nop

    // 0x80063E74: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80063E78:
    // 0x80063E78: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x80063E7C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80063E80: bgez        $t2, L_80063E90
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80063E84: sra         $a3, $t2, 5
        ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
            goto L_80063E90;
    }
    // 0x80063E84: sra         $a3, $t2, 5
    ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
    // 0x80063E88: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x80063E8C: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80063E90:
    // 0x80063E90: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x80063E94: jal         0x8006389C
    // 0x80063E98: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    func_8006389C(rdram, ctx);
        goto after_1;
    // 0x80063E98: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    after_1:
    // 0x80063E9C: lh          $t5, 0x20($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X20);
    // 0x80063EA0: nop

    // 0x80063EA4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80063EA8: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
L_80063EAC:
    // 0x80063EAC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80063EB0: nop

    // 0x80063EB4: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80063EB8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80063EBC: b           L_80063DF4
    // 0x80063EC0: nop

        goto L_80063DF4;
    // 0x80063EC0: nop

L_80063EC4:
    // 0x80063EC4: b           L_80063ECC
    // 0x80063EC8: nop

        goto L_80063ECC;
    // 0x80063EC8: nop

L_80063ECC:
    // 0x80063ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80063ED4: jr          $ra
    // 0x80063ED8: nop

    return;
    // 0x80063ED8: nop

;}
RECOMP_FUNC void func_800FFD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FFD34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFD38: jal         0x800FDF98
    // 0x800FFD3C: nop

    func_800FDF98(rdram, ctx);
        goto after_0;
    // 0x800FFD3C: nop

    after_0:
    // 0x800FFD40: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800FFD44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFD48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FFD4C: bne         $t6, $at, L_800FFD88
    if (ctx->r14 != ctx->r1) {
        // 0x800FFD50: nop
    
            goto L_800FFD88;
    }
    // 0x800FFD50: nop

    // 0x800FFD54: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FFD58: lh          $t7, -0x1C0C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1C0C);
    // 0x800FFD5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFD60: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800FFD64: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800FFD68: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800FFD6C: bgez        $t0, L_800FFD80
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800FFD70: sh          $t8, -0x1C0C($at)
        MEM_H(-0X1C0C, ctx->r1) = ctx->r24;
            goto L_800FFD80;
    }
    // 0x800FFD70: sh          $t8, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r24;
    // 0x800FFD74: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x800FFD78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFD7C: sh          $t1, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r9;
L_800FFD80:
    // 0x800FFD80: b           L_800FFDC8
    // 0x800FFD84: nop

        goto L_800FFDC8;
    // 0x800FFD84: nop

L_800FFD88:
    // 0x800FFD88: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFD8C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800FFD90: bne         $t2, $at, L_800FFDC8
    if (ctx->r10 != ctx->r1) {
        // 0x800FFD94: nop
    
            goto L_800FFDC8;
    }
    // 0x800FFD94: nop

    // 0x800FFD98: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FFD9C: lh          $t3, -0x1C0C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1C0C);
    // 0x800FFDA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFDA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FFDA8: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x800FFDAC: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800FFDB0: sh          $t4, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r12;
    // 0x800FFDB4: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x800FFDB8: bne         $at, $zero, L_800FFDC8
    if (ctx->r1 != 0) {
        // 0x800FFDBC: nop
    
            goto L_800FFDC8;
    }
    // 0x800FFDBC: nop

    // 0x800FFDC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFDC4: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
L_800FFDC8:
    // 0x800FFDC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFDCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FFDD0: beq         $t7, $at, L_800FFDE4
    if (ctx->r15 == ctx->r1) {
        // 0x800FFDD4: nop
    
            goto L_800FFDE4;
    }
    // 0x800FFDD4: nop

    // 0x800FFDD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FFDDC: bne         $t7, $at, L_800FFF28
    if (ctx->r15 != ctx->r1) {
        // 0x800FFDE0: nop
    
            goto L_800FFF28;
    }
    // 0x800FFDE0: nop

L_800FFDE4:
    // 0x800FFDE4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFDE8: lhu         $t8, -0x1C0C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C0C);
    // 0x800FFDEC: nop

    // 0x800FFDF0: sltiu       $at, $t8, 0x9
    ctx->r1 = ctx->r24 < 0X9 ? 1 : 0;
    // 0x800FFDF4: beq         $at, $zero, L_800FFF28
    if (ctx->r1 == 0) {
        // 0x800FFDF8: nop
    
            goto L_800FFF28;
    }
    // 0x800FFDF8: nop

    // 0x800FFDFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FFE00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FFE04: addu        $at, $at, $t8
    gpr jr_addend_800FFE10 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800FFE08: lw          $t8, 0x46F4($at)
    ctx->r24 = ADD32(ctx->r1, 0X46F4);
    // 0x800FFE0C: nop

    // 0x800FFE10: jr          $t8
    // 0x800FFE14: nop

    switch (jr_addend_800FFE10 >> 2) {
        case 0: goto L_800FFE18; break;
        case 1: goto L_800FFE18; break;
        case 2: goto L_800FFE18; break;
        case 3: goto L_800FFE70; break;
        case 4: goto L_800FFE70; break;
        case 5: goto L_800FFE70; break;
        case 6: goto L_800FFECC; break;
        case 7: goto L_800FFECC; break;
        case 8: goto L_800FFECC; break;
        default: switch_error(__func__, 0x800FFE10, 0x801346F4);
    }
    // 0x800FFE14: nop

L_800FFE18:
    // 0x800FFE18: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800FFE1C: lh          $t9, -0x1C0C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1C0C);
    // 0x800FFE20: nop

    // 0x800FFE24: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800FFE28: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800FFE2C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800FFE30: addiu       $t1, $t1, -0x5A48
    ctx->r9 = ADD32(ctx->r9, -0X5A48);
    // 0x800FFE34: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800FFE38: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x800FFE3C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFE40: nop

    // 0x800FFE44: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800FFE48: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
    // 0x800FFE4C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800FFE50: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800FFE54: addiu       $t7, $t7, -0x5A48
    ctx->r15 = ADD32(ctx->r15, -0X5A48);
    // 0x800FFE58: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800FFE5C: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800FFE60: nop

    // 0x800FFE64: sb          $t9, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r25;
    // 0x800FFE68: b           L_800FFF28
    // 0x800FFE6C: nop

        goto L_800FFF28;
    // 0x800FFE6C: nop

L_800FFE70:
    // 0x800FFE70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FFE74: lh          $t0, -0x1C0C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1C0C);
    // 0x800FFE78: nop

    // 0x800FFE7C: addiu       $t1, $t0, -0x3
    ctx->r9 = ADD32(ctx->r8, -0X3);
    // 0x800FFE80: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800FFE84: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800FFE88: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800FFE8C: addiu       $t4, $t4, -0x5A48
    ctx->r12 = ADD32(ctx->r12, -0X5A48);
    // 0x800FFE90: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800FFE94: lbu         $t2, 0x8($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X8);
    // 0x800FFE98: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFE9C: nop

    // 0x800FFEA0: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x800FFEA4: sb          $t7, 0x8($t5)
    MEM_B(0X8, ctx->r13) = ctx->r15;
    // 0x800FFEA8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800FFEAC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800FFEB0: addiu       $t8, $t8, -0x5A48
    ctx->r24 = ADD32(ctx->r24, -0X5A48);
    // 0x800FFEB4: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x800FFEB8: lbu         $t1, 0x8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8);
    // 0x800FFEBC: nop

    // 0x800FFEC0: sb          $t1, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r9;
    // 0x800FFEC4: b           L_800FFF28
    // 0x800FFEC8: nop

        goto L_800FFF28;
    // 0x800FFEC8: nop

L_800FFECC:
    // 0x800FFECC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FFED0: lh          $t3, -0x1C0C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1C0C);
    // 0x800FFED4: nop

    // 0x800FFED8: addiu       $t4, $t3, -0x6
    ctx->r12 = ADD32(ctx->r11, -0X6);
    // 0x800FFEDC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800FFEE0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800FFEE4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800FFEE8: addiu       $t6, $t6, -0x5A48
    ctx->r14 = ADD32(ctx->r14, -0X5A48);
    // 0x800FFEEC: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x800FFEF0: lb          $t5, 0x10($t7)
    ctx->r13 = MEM_B(ctx->r15, 0X10);
    // 0x800FFEF4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFEF8: nop

    // 0x800FFEFC: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x800FFF00: sb          $t8, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r24;
    // 0x800FFF04: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FFF08: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800FFF0C: addiu       $t0, $t0, -0x5A48
    ctx->r8 = ADD32(ctx->r8, -0X5A48);
    // 0x800FFF10: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x800FFF14: lb          $t4, 0x10($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X10);
    // 0x800FFF18: nop

    // 0x800FFF1C: sb          $t4, 0x20($t3)
    MEM_B(0X20, ctx->r11) = ctx->r12;
    // 0x800FFF20: b           L_800FFF28
    // 0x800FFF24: nop

        goto L_800FFF28;
    // 0x800FFF24: nop

L_800FFF28:
    // 0x800FFF28: b           L_800FFF30
    // 0x800FFF2C: nop

        goto L_800FFF30;
    // 0x800FFF2C: nop

L_800FFF30:
    // 0x800FFF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FFF34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FFF38: jr          $ra
    // 0x800FFF3C: nop

    return;
    // 0x800FFF3C: nop

;}
RECOMP_FUNC void func_800910BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800910BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800910C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800910C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800910C8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800910CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800910D0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800910D4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800910D8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800910DC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800910E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800910E4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800910E8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800910EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800910F0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800910F4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800910F8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800910FC: addiu       $a1, $a1, 0x1504
    ctx->r5 = ADD32(ctx->r5, 0X1504);
    // 0x80091100: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091104: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091108: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009110C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091110: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091114: jal         0x80027464
    // 0x80091118: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091118: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009111C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091120: b           L_80091128
    // 0x80091124: nop

        goto L_80091128;
    // 0x80091124: nop

L_80091128:
    // 0x80091128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009112C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091130: jr          $ra
    // 0x80091134: nop

    return;
    // 0x80091134: nop

;}
RECOMP_FUNC void func_800AA1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA1D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA1E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA1E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AA1E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AA1EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA1F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA1F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA1F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA1FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA200: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AA204: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800AA208: nop

    // 0x800AA20C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800AA210: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA214: nop

    // 0x800AA218: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AA21C: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x800AA220: beq         $at, $zero, L_800AA2D4
    if (ctx->r1 == 0) {
        // 0x800AA224: nop
    
            goto L_800AA2D4;
    }
    // 0x800AA224: nop

    // 0x800AA228: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AA22C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AA230: addu        $at, $at, $t0
    gpr jr_addend_800AA23C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AA234: lw          $t0, 0x4A28($at)
    ctx->r8 = ADD32(ctx->r1, 0X4A28);
    // 0x800AA238: nop

    // 0x800AA23C: jr          $t0
    // 0x800AA240: nop

    switch (jr_addend_800AA23C >> 2) {
        case 0: goto L_800AA244; break;
        case 1: goto L_800AA254; break;
        case 2: goto L_800AA264; break;
        case 3: goto L_800AA274; break;
        case 4: goto L_800AA284; break;
        case 5: goto L_800AA294; break;
        case 6: goto L_800AA2A4; break;
        case 7: goto L_800AA2B4; break;
        case 8: goto L_800AA2C4; break;
        default: switch_error(__func__, 0x800AA23C, 0x80114A28);
    }
    // 0x800AA240: nop

L_800AA244:
    // 0x800AA244: jal         0x800A9260
    // 0x800AA248: nop

    func_800A9260(rdram, ctx);
        goto after_0;
    // 0x800AA248: nop

    after_0:
    // 0x800AA24C: b           L_800AA2DC
    // 0x800AA250: nop

        goto L_800AA2DC;
    // 0x800AA250: nop

L_800AA254:
    // 0x800AA254: jal         0x800A966C
    // 0x800AA258: nop

    func_800A966C(rdram, ctx);
        goto after_1;
    // 0x800AA258: nop

    after_1:
    // 0x800AA25C: b           L_800AA2DC
    // 0x800AA260: nop

        goto L_800AA2DC;
    // 0x800AA260: nop

L_800AA264:
    // 0x800AA264: jal         0x800A98A0
    // 0x800AA268: nop

    func_800A98A0(rdram, ctx);
        goto after_2;
    // 0x800AA268: nop

    after_2:
    // 0x800AA26C: b           L_800AA2DC
    // 0x800AA270: nop

        goto L_800AA2DC;
    // 0x800AA270: nop

L_800AA274:
    // 0x800AA274: jal         0x800A9AEC
    // 0x800AA278: nop

    func_800A9AEC(rdram, ctx);
        goto after_3;
    // 0x800AA278: nop

    after_3:
    // 0x800AA27C: b           L_800AA2DC
    // 0x800AA280: nop

        goto L_800AA2DC;
    // 0x800AA280: nop

L_800AA284:
    // 0x800AA284: jal         0x800A9D74
    // 0x800AA288: nop

    func_800A9D74(rdram, ctx);
        goto after_4;
    // 0x800AA288: nop

    after_4:
    // 0x800AA28C: b           L_800AA2DC
    // 0x800AA290: nop

        goto L_800AA2DC;
    // 0x800AA290: nop

L_800AA294:
    // 0x800AA294: jal         0x800A9F94
    // 0x800AA298: nop

    func_800A9F94(rdram, ctx);
        goto after_5;
    // 0x800AA298: nop

    after_5:
    // 0x800AA29C: b           L_800AA2DC
    // 0x800AA2A0: nop

        goto L_800AA2DC;
    // 0x800AA2A0: nop

L_800AA2A4:
    // 0x800AA2A4: jal         0x800AA0BC
    // 0x800AA2A8: nop

    func_800AA0BC(rdram, ctx);
        goto after_6;
    // 0x800AA2A8: nop

    after_6:
    // 0x800AA2AC: b           L_800AA2DC
    // 0x800AA2B0: nop

        goto L_800AA2DC;
    // 0x800AA2B0: nop

L_800AA2B4:
    // 0x800AA2B4: jal         0x800A8DF8
    // 0x800AA2B8: nop

    func_800A8DF8(rdram, ctx);
        goto after_7;
    // 0x800AA2B8: nop

    after_7:
    // 0x800AA2BC: b           L_800AA2DC
    // 0x800AA2C0: nop

        goto L_800AA2DC;
    // 0x800AA2C0: nop

L_800AA2C4:
    // 0x800AA2C4: jal         0x800A9424
    // 0x800AA2C8: nop

    func_800A9424(rdram, ctx);
        goto after_8;
    // 0x800AA2C8: nop

    after_8:
    // 0x800AA2CC: b           L_800AA2DC
    // 0x800AA2D0: nop

        goto L_800AA2DC;
    // 0x800AA2D0: nop

L_800AA2D4:
    // 0x800AA2D4: b           L_800AA2DC
    // 0x800AA2D8: nop

        goto L_800AA2DC;
    // 0x800AA2D8: nop

L_800AA2DC:
    // 0x800AA2DC: b           L_800AA2E4
    // 0x800AA2E0: nop

        goto L_800AA2E4;
    // 0x800AA2E0: nop

L_800AA2E4:
    // 0x800AA2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AA2EC: jr          $ra
    // 0x800AA2F0: nop

    return;
    // 0x800AA2F0: nop

;}
RECOMP_FUNC void func_800F7458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F745C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7460: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F7464: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F7468: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F746C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F7470: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F7474: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F7478: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F747C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F7480: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F7484: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F7488: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F748C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F7490: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F7494: addiu       $a1, $a1, 0x3778
    ctx->r5 = ADD32(ctx->r5, 0X3778);
    // 0x800F7498: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F749C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F74A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F74A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F74A8: jal         0x80027464
    // 0x800F74AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F74AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F74B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F74B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F74B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F74BC: beq         $t0, $at, L_800F752C
    if (ctx->r8 == ctx->r1) {
        // 0x800F74C0: nop
    
            goto L_800F752C;
    }
    // 0x800F74C0: nop

    // 0x800F74C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F74C8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F74CC: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F74D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F74D4: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F74D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F74DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F74E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F74E4: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800F74E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F74EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F74F0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800F74F4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F74F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F74FC: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x800F7500: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F7504: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800F7508: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F750C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F7510: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F7514: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F7518: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F751C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F7520: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7524: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F7528: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_800F752C:
    // 0x800F752C: b           L_800F7534
    // 0x800F7530: nop

        goto L_800F7534;
    // 0x800F7530: nop

L_800F7534:
    // 0x800F7534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F753C: jr          $ra
    // 0x800F7540: nop

    return;
    // 0x800F7540: nop

;}
RECOMP_FUNC void func_8009A320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009A324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009A328: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A32C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A330: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A334: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A33C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A340: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A344: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A348: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009A34C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009A350: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009A354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A35C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009A360: jal         0x80098864
    // 0x8009A364: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_0;
    // 0x8009A364: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8009A368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A36C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A370: jal         0x8002AA94
    // 0x8009A374: nop

    func_8002AA94(rdram, ctx);
        goto after_1;
    // 0x8009A374: nop

    after_1:
    // 0x8009A378: b           L_8009A380
    // 0x8009A37C: nop

        goto L_8009A380;
    // 0x8009A37C: nop

L_8009A380:
    // 0x8009A380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009A384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009A388: jr          $ra
    // 0x8009A38C: nop

    return;
    // 0x8009A38C: nop

;}
RECOMP_FUNC void func_800FDA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDA10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800FDA14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FDA18: addiu       $t6, $t6, -0x1D70
    ctx->r14 = ADD32(ctx->r14, -0X1D70);
    // 0x800FDA1C: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800FDA20: nop

    // 0x800FDA24: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x800FDA28: beq         $t8, $zero, L_800FDAB4
    if (ctx->r24 == 0) {
        // 0x800FDA2C: nop
    
            goto L_800FDAB4;
    }
    // 0x800FDA2C: nop

    // 0x800FDA30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDA34: lwc1        $f4, -0x1EA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800FDA38: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FDA3C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800FDA40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FDA44: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800FDA48: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800FDA4C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800FDA50: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x800FDA54: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800FDA58: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800FDA5C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800FDA60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FDA64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FDA68: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800FDA6C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800FDA70: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800FDA74: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800FDA78: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x800FDA7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDA80: mflo        $t1
    ctx->r9 = lo;
    // 0x800FDA84: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800FDA88: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800FDA8C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800FDA90: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800FDA94: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800FDA98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800FDA9C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800FDAA0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800FDAA4: nop

    // 0x800FDAA8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FDAAC: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x800FDAB0: swc1        $f10, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f10.u32l;
L_800FDAB4:
    // 0x800FDAB4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FDAB8: addiu       $t3, $t3, -0x1D70
    ctx->r11 = ADD32(ctx->r11, -0X1D70);
    // 0x800FDABC: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x800FDAC0: nop

    // 0x800FDAC4: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x800FDAC8: beq         $t5, $zero, L_800FDB54
    if (ctx->r13 == 0) {
        // 0x800FDACC: nop
    
            goto L_800FDB54;
    }
    // 0x800FDACC: nop

    // 0x800FDAD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDAD4: lwc1        $f16, -0x1EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800FDAD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDADC: lwc1        $f7, 0x46A0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X46A0);
    // 0x800FDAE0: lwc1        $f6, 0x46A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46A4);
    // 0x800FDAE4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800FDAE8: add.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f4.d + ctx->f6.d;
    // 0x800FDAEC: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x800FDAF0: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x800FDAF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800FDAF8: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800FDAFC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800FDB00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FDB04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FDB08: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800FDB0C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800FDB10: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x800FDB14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800FDB18: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800FDB1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDB20: mflo        $t8
    ctx->r24 = lo;
    // 0x800FDB24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800FDB28: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800FDB2C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FDB30: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800FDB34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FDB38: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FDB3C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800FDB40: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800FDB44: nop

    // 0x800FDB48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FDB4C: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800FDB50: swc1        $f18, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f18.u32l;
L_800FDB54:
    // 0x800FDB54: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FDB58: addiu       $t0, $t0, -0x1D70
    ctx->r8 = ADD32(ctx->r8, -0X1D70);
    // 0x800FDB5C: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FDB60: nop

    // 0x800FDB64: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x800FDB68: beq         $t2, $zero, L_800FDBF4
    if (ctx->r10 == 0) {
        // 0x800FDB6C: nop
    
            goto L_800FDBF4;
    }
    // 0x800FDB6C: nop

    // 0x800FDB70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDB74: lwc1        $f8, -0x1EA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x800FDB78: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800FDB7C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800FDB80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FDB84: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x800FDB88: add.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f16.d + ctx->f4.d;
    // 0x800FDB8C: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x800FDB90: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x800FDB94: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800FDB98: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800FDB9C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800FDBA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FDBA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FDBA8: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800FDBAC: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800FDBB0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x800FDBB4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800FDBB8: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x800FDBBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDBC0: mflo        $t5
    ctx->r13 = lo;
    // 0x800FDBC4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800FDBC8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800FDBCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FDBD0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800FDBD4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800FDBD8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800FDBDC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800FDBE0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800FDBE4: nop

    // 0x800FDBE8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FDBEC: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800FDBF0: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
L_800FDBF4:
    // 0x800FDBF4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FDBF8: addiu       $t7, $t7, -0x1D70
    ctx->r15 = ADD32(ctx->r15, -0X1D70);
    // 0x800FDBFC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800FDC00: nop

    // 0x800FDC04: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x800FDC08: beq         $t9, $zero, L_800FDC94
    if (ctx->r25 == 0) {
        // 0x800FDC0C: nop
    
            goto L_800FDC94;
    }
    // 0x800FDC0C: nop

    // 0x800FDC10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDC14: lwc1        $f6, -0x1EA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x800FDC18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDC1C: lwc1        $f17, 0x46A8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X46A8);
    // 0x800FDC20: lwc1        $f16, 0x46AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46AC);
    // 0x800FDC24: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800FDC28: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x800FDC2C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800FDC30: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x800FDC34: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800FDC38: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800FDC3C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800FDC40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FDC44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FDC48: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800FDC4C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800FDC50: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800FDC54: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800FDC58: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x800FDC5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDC60: mflo        $t2
    ctx->r10 = lo;
    // 0x800FDC64: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800FDC68: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800FDC6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FDC70: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800FDC74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FDC78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FDC7C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800FDC80: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800FDC84: nop

    // 0x800FDC88: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FDC8C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800FDC90: swc1        $f18, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f18.u32l;
L_800FDC94:
    // 0x800FDC94: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FDC98: addiu       $t4, $t4, -0x1D70
    ctx->r12 = ADD32(ctx->r12, -0X1D70);
    // 0x800FDC9C: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800FDCA0: nop

    // 0x800FDCA4: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x800FDCA8: beq         $t6, $zero, L_800FDCCC
    if (ctx->r14 == 0) {
        // 0x800FDCAC: nop
    
            goto L_800FDCCC;
    }
    // 0x800FDCAC: nop

    // 0x800FDCB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDCB4: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x800FDCB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800FDCBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FDCC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDCC4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FDCC8: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
L_800FDCCC:
    // 0x800FDCCC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FDCD0: addiu       $t7, $t7, -0x1D70
    ctx->r15 = ADD32(ctx->r15, -0X1D70);
    // 0x800FDCD4: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800FDCD8: nop

    // 0x800FDCDC: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x800FDCE0: beq         $t9, $zero, L_800FDD38
    if (ctx->r25 == 0) {
        // 0x800FDCE4: nop
    
            goto L_800FDD38;
    }
    // 0x800FDCE4: nop

    // 0x800FDCE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDCEC: lwc1        $f10, -0x1E90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x800FDCF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800FDCF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FDCF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDCFC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800FDD00: swc1        $f18, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f18.u32l;
    // 0x800FDD04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDD08: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x800FDD0C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800FDD10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FDD14: nop

    // 0x800FDD18: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800FDD1C: nop

    // 0x800FDD20: bc1f        L_800FDD38
    if (!c1cs) {
        // 0x800FDD24: nop
    
            goto L_800FDD38;
    }
    // 0x800FDD24: nop

    // 0x800FDD28: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800FDD2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FDD30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FDD34: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
L_800FDD38:
    // 0x800FDD38: b           L_800FDD40
    // 0x800FDD3C: nop

        goto L_800FDD40;
    // 0x800FDD3C: nop

L_800FDD40:
    // 0x800FDD40: jr          $ra
    // 0x800FDD44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800FDD44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F8660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F8664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F8668: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F866C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F8670: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8674: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F867C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8680: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8684: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8688: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F868C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8690: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F8694: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F8698: nop

    // 0x800F869C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F86A0: nop

    // 0x800F86A4: bne         $t1, $zero, L_800F86CC
    if (ctx->r9 != 0) {
        // 0x800F86A8: nop
    
            goto L_800F86CC;
    }
    // 0x800F86A8: nop

    // 0x800F86AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F86B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F86B4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F86B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F86BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F86C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F86C4: jal         0x80029EF8
    // 0x800F86C8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800F86C8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
L_800F86CC:
    // 0x800F86CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F86D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F86D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F86D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F86DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F86E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F86E4: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    // 0x800F86E8: jal         0x80029F58
    // 0x800F86EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_1;
    // 0x800F86EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800F86F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F86F4: bne         $v0, $at, L_800F8708
    if (ctx->r2 != ctx->r1) {
        // 0x800F86F8: nop
    
            goto L_800F8708;
    }
    // 0x800F86F8: nop

    // 0x800F86FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F8700: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800F8704: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800F8708:
    // 0x800F8708: b           L_800F8710
    // 0x800F870C: nop

        goto L_800F8710;
    // 0x800F870C: nop

L_800F8710:
    // 0x800F8710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8714: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F8718: jr          $ra
    // 0x800F871C: nop

    return;
    // 0x800F871C: nop

;}
