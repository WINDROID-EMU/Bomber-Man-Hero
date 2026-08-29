#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800D9A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9A44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D9A48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D9A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D9A50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D9A54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9A58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9A5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D9A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9A64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9A68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9A6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D9A70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D9A74: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800D9A78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D9A7C: bne         $t8, $at, L_800D9AF4
    if (ctx->r24 != ctx->r1) {
        // 0x800D9A80: nop
    
            goto L_800D9AF4;
    }
    // 0x800D9A80: nop

    // 0x800D9A84: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D9A88: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800D9A8C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D9A90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D9A94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D9A98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D9A9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D9AA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D9AA4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800D9AA8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D9AAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D9AB0: beq         $s0, $at, L_800D9ACC
    if (ctx->r16 == ctx->r1) {
        // 0x800D9AB4: nop
    
            goto L_800D9ACC;
    }
    // 0x800D9AB4: nop

    // 0x800D9AB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D9ABC: beq         $s0, $at, L_800D9ADC
    if (ctx->r16 == ctx->r1) {
        // 0x800D9AC0: nop
    
            goto L_800D9ADC;
    }
    // 0x800D9AC0: nop

    // 0x800D9AC4: b           L_800D9AEC
    // 0x800D9AC8: nop

        goto L_800D9AEC;
    // 0x800D9AC8: nop

L_800D9ACC:
    // 0x800D9ACC: jal         0x800D97A4
    // 0x800D9AD0: nop

    func_800D97A4(rdram, ctx);
        goto after_0;
    // 0x800D9AD0: nop

    after_0:
    // 0x800D9AD4: b           L_800D9AF4
    // 0x800D9AD8: nop

        goto L_800D9AF4;
    // 0x800D9AD8: nop

L_800D9ADC:
    // 0x800D9ADC: jal         0x800D9A14
    // 0x800D9AE0: nop

    func_800D9A14(rdram, ctx);
        goto after_1;
    // 0x800D9AE0: nop

    after_1:
    // 0x800D9AE4: b           L_800D9AF4
    // 0x800D9AE8: nop

        goto L_800D9AF4;
    // 0x800D9AE8: nop

L_800D9AEC:
    // 0x800D9AEC: b           L_800D9AF4
    // 0x800D9AF0: nop

        goto L_800D9AF4;
    // 0x800D9AF0: nop

L_800D9AF4:
    // 0x800D9AF4: b           L_800D9AFC
    // 0x800D9AF8: nop

        goto L_800D9AFC;
    // 0x800D9AF8: nop

L_800D9AFC:
    // 0x800D9AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9B00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D9B04: jr          $ra
    // 0x800D9B08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D9B08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DB1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB1EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DB1F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DB1F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB1F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB1FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB200: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB208: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB20C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB210: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB214: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB218: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB21C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DB220: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800DB224: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB228: nop

    // 0x800DB22C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB230: nop

    // 0x800DB234: bne         $t1, $zero, L_800DB28C
    if (ctx->r9 != 0) {
        // 0x800DB238: nop
    
            goto L_800DB28C;
    }
    // 0x800DB238: nop

    // 0x800DB23C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DB240: nop

    // 0x800DB244: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB248: nop

    // 0x800DB24C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB250: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB254: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800DB258: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DB25C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DB260: nop

    // 0x800DB264: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DB268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB26C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800DB270: addiu       $t6, $t6, -0x7164
    ctx->r14 = ADD32(ctx->r14, -0X7164);
    // 0x800DB274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB278: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800DB27C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DB280: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DB284: jal         0x8001C0EC
    // 0x800DB288: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DB288: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    after_0:
L_800DB28C:
    // 0x800DB28C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB294: jal         0x80028FA0
    // 0x800DB298: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800DB298: nop

    after_1:
    // 0x800DB29C: beq         $v0, $zero, L_800DB2B4
    if (ctx->r2 == 0) {
        // 0x800DB2A0: nop
    
            goto L_800DB2B4;
    }
    // 0x800DB2A0: nop

    // 0x800DB2A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB2A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB2AC: jal         0x80029B60
    // 0x800DB2B0: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800DB2B0: nop

    after_2:
L_800DB2B4:
    // 0x800DB2B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DB2B8: nop

    // 0x800DB2BC: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800DB2C0: nop

    // 0x800DB2C4: beq         $t8, $zero, L_800DB318
    if (ctx->r24 == 0) {
        // 0x800DB2C8: nop
    
            goto L_800DB318;
    }
    // 0x800DB2C8: nop

    // 0x800DB2CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800DB2D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DB2D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DB2D8: lwc1        $f6, 0x44($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800DB2DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800DB2E0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800DB2E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800DB2E8: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
    // 0x800DB2EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB2F0: nop

    // 0x800DB2F4: lwc1        $f16, 0x44($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800DB2F8: nop

    // 0x800DB2FC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800DB300: nop

    // 0x800DB304: bc1f        L_800DB318
    if (!c1cs) {
        // 0x800DB308: nop
    
            goto L_800DB318;
    }
    // 0x800DB308: nop

    // 0x800DB30C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DB310: nop

    // 0x800DB314: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
L_800DB318:
    // 0x800DB318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB31C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB320: jal         0x80029C40
    // 0x800DB324: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800DB324: nop

    after_3:
    // 0x800DB328: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DB32C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DB330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB338: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800DB33C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800DB340: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DB344: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800DB348: jal         0x80029018
    // 0x800DB34C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800DB34C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800DB350: beq         $v0, $zero, L_800DB388
    if (ctx->r2 == 0) {
        // 0x800DB354: nop
    
            goto L_800DB388;
    }
    // 0x800DB354: nop

    // 0x800DB358: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DB35C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800DB360: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800DB364: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800DB368: jal         0x80015538
    // 0x800DB36C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800DB36C: nop

    after_5:
    // 0x800DB370: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DB374: nop

    // 0x800DB378: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800DB37C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DB380: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DB384: sh          $t2, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r10;
L_800DB388:
    // 0x800DB388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB38C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB390: jal         0x8001B4AC
    // 0x800DB394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800DB394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800DB398: beq         $v0, $zero, L_800DB3D0
    if (ctx->r2 == 0) {
        // 0x800DB39C: nop
    
            goto L_800DB3D0;
    }
    // 0x800DB39C: nop

    // 0x800DB3A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DB3A4: nop

    // 0x800DB3A8: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800DB3AC: nop

    // 0x800DB3B0: bne         $t7, $zero, L_800DB3D0
    if (ctx->r15 != 0) {
        // 0x800DB3B4: nop
    
            goto L_800DB3D0;
    }
    // 0x800DB3B4: nop

    // 0x800DB3B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800DB3BC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800DB3C0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800DB3C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB3C8: nop

    // 0x800DB3CC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800DB3D0:
    // 0x800DB3D0: b           L_800DB3D8
    // 0x800DB3D4: nop

        goto L_800DB3D8;
    // 0x800DB3D4: nop

L_800DB3D8:
    // 0x800DB3D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB3DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DB3E0: jr          $ra
    // 0x800DB3E4: nop

    return;
    // 0x800DB3E4: nop

;}
RECOMP_FUNC void func_800AEE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEE6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AEE70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AEE74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AEE78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AEE7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AEE80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AEE84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AEE88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AEE8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AEE90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AEE94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AEE98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AEE9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AEEA0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AEEA4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEEA8: nop

    // 0x800AEEAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AEEB0: nop

    // 0x800AEEB4: bne         $t1, $zero, L_800AEF44
    if (ctx->r9 != 0) {
        // 0x800AEEB8: nop
    
            goto L_800AEF44;
    }
    // 0x800AEEB8: nop

    // 0x800AEEBC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEEC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AEEC4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AEEC8: jal         0x80014E80
    // 0x800AEECC: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800AEECC: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    after_0:
    // 0x800AEED0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AEED4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x800AEED8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800AEEDC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AEEE0: jal         0x80015538
    // 0x800AEEE4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800AEEE4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x800AEEE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEEEC: nop

    // 0x800AEEF0: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800AEEF4: jal         0x80014E80
    // 0x800AEEF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800AEEF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x800AEEFC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800AEF00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEF04: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AEF08: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
    // 0x800AEF0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AEF10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEF14: nop

    // 0x800AEF18: swc1        $f10, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f10.u32l;
    // 0x800AEF1C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEF20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEF24: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800AEF28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEF2C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800AEF30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800AEF34: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AEF38: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x800AEF3C: jal         0x80029EF8
    // 0x800AEF40: nop

    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800AEF40: nop

    after_3:
L_800AEF44:
    // 0x800AEF44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEF48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEF4C: jal         0x80028FA0
    // 0x800AEF50: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800AEF50: nop

    after_4:
    // 0x800AEF54: beq         $v0, $zero, L_800AEF6C
    if (ctx->r2 == 0) {
        // 0x800AEF58: nop
    
            goto L_800AEF6C;
    }
    // 0x800AEF58: nop

    // 0x800AEF5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEF60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEF64: jal         0x80029B60
    // 0x800AEF68: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800AEF68: nop

    after_5:
L_800AEF6C:
    // 0x800AEF6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEF70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEF74: jal         0x80029C40
    // 0x800AEF78: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800AEF78: nop

    after_6:
    // 0x800AEF7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800AEF80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AEF84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEF88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEF8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AEF90: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800AEF94: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AEF98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800AEF9C: jal         0x80029018
    // 0x800AEFA0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800AEFA0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800AEFA4: beq         $v0, $zero, L_800AEFC8
    if (ctx->r2 == 0) {
        // 0x800AEFA8: nop
    
            goto L_800AEFC8;
    }
    // 0x800AEFA8: nop

    // 0x800AEFAC: jal         0x800297DC
    // 0x800AEFB0: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800AEFB0: nop

    after_8:
    // 0x800AEFB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEFB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEFBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AEFC0: jal         0x80029824
    // 0x800AEFC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800AEFC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800AEFC8:
    // 0x800AEFC8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800AEFCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AEFD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEFD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEFD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800AEFDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800AEFE0: lui         $a3, 0xC220
    ctx->r7 = S32(0XC220 << 16);
    // 0x800AEFE4: jal         0x80029F58
    // 0x800AEFE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x800AEFE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x800AEFEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AEFF0: bne         $v0, $at, L_800AF100
    if (ctx->r2 != ctx->r1) {
        // 0x800AEFF4: nop
    
            goto L_800AF100;
    }
    // 0x800AEFF4: nop

    // 0x800AEFF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEFFC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AF000: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AF004: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF008: nop

    // 0x800AF00C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800AF010: jal         0x80014E80
    // 0x800AF014: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x800AF014: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_11:
    // 0x800AF018: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF01C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AF020: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800AF024: nop

    // 0x800AF028: subu        $t4, $t3, $s0
    ctx->r12 = SUB32(ctx->r11, ctx->r16);
    // 0x800AF02C: addiu       $t5, $t4, -0x6
    ctx->r13 = ADD32(ctx->r12, -0X6);
    // 0x800AF030: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
    // 0x800AF034: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AF03C: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800AF040: nop

    // 0x800AF044: bne         $t7, $at, L_800AF090
    if (ctx->r15 != ctx->r1) {
        // 0x800AF048: nop
    
            goto L_800AF090;
    }
    // 0x800AF048: nop

    // 0x800AF04C: jal         0x80014E80
    // 0x800AF050: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    Math_Random(rdram, ctx);
        goto after_12;
    // 0x800AF050: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_12:
    // 0x800AF054: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF058: addiu       $t8, $v0, 0x18
    ctx->r24 = ADD32(ctx->r2, 0X18);
    // 0x800AF05C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800AF060: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF064: nop

    // 0x800AF068: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AF06C: nop

    // 0x800AF070: slti        $at, $t1, 0xB4
    ctx->r1 = SIGNED(ctx->r9) < 0XB4 ? 1 : 0;
    // 0x800AF074: bne         $at, $zero, L_800AF088
    if (ctx->r1 != 0) {
        // 0x800AF078: nop
    
            goto L_800AF088;
    }
    // 0x800AF078: nop

    // 0x800AF07C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF080: addiu       $t3, $zero, 0xB4
    ctx->r11 = ADD32(0, 0XB4);
    // 0x800AF084: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_800AF088:
    // 0x800AF088: b           L_800AF0C0
    // 0x800AF08C: nop

        goto L_800AF0C0;
    // 0x800AF08C: nop

L_800AF090:
    // 0x800AF090: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF094: nop

    // 0x800AF098: lh          $t2, 0xA6($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XA6);
    // 0x800AF09C: nop

    // 0x800AF0A0: bgtz        $t2, L_800AF0C0
    if (SIGNED(ctx->r10) > 0) {
        // 0x800AF0A4: nop
    
            goto L_800AF0C0;
    }
    // 0x800AF0A4: nop

    // 0x800AF0A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF0AC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800AF0B0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800AF0B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF0B8: nop

    // 0x800AF0BC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800AF0C0:
    // 0x800AF0C0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800AF0C4: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x800AF0C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800AF0CC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800AF0D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AF0D4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800AF0D8: lw          $t3, 0x7740($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7740);
    // 0x800AF0DC: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800AF0E0: bne         $t3, $at, L_800AF100
    if (ctx->r11 != ctx->r1) {
        // 0x800AF0E4: nop
    
            goto L_800AF100;
    }
    // 0x800AF0E4: nop

    // 0x800AF0E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF0EC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800AF0F0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800AF0F4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF0F8: nop

    // 0x800AF0FC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800AF100:
    // 0x800AF100: b           L_800AF108
    // 0x800AF104: nop

        goto L_800AF108;
    // 0x800AF104: nop

L_800AF108:
    // 0x800AF108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AF10C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AF110: jr          $ra
    // 0x800AF114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AF114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008BCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BCC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008BCC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008BCC8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008BCCC: addiu       $t6, $t6, 0x4D48
    ctx->r14 = ADD32(ctx->r14, 0X4D48);
    // 0x8008BCD0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8008BCD4: nop

    // 0x8008BCD8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8008BCDC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008BCE0: addiu       $t8, $t8, 0x4C28
    ctx->r24 = ADD32(ctx->r24, 0X4C28);
    // 0x8008BCE4: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8008BCE8: nop

    // 0x8008BCEC: bne         $t9, $zero, L_8008BD24
    if (ctx->r25 != 0) {
        // 0x8008BCF0: nop
    
            goto L_8008BD24;
    }
    // 0x8008BCF0: nop

    // 0x8008BCF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008BCF8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008BCFC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008BD00: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x8008BD04: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008BD08: addiu       $t1, $t1, 0x4D48
    ctx->r9 = ADD32(ctx->r9, 0X4D48);
    // 0x8008BD0C: sh          $zero, 0xC($t1)
    MEM_H(0XC, ctx->r9) = 0;
    // 0x8008BD10: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008BD14: addiu       $t3, $t3, 0x4C28
    ctx->r11 = ADD32(ctx->r11, 0X4C28);
    // 0x8008BD18: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8008BD1C: b           L_8008BD54
    // 0x8008BD20: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
        goto L_8008BD54;
    // 0x8008BD20: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
L_8008BD24:
    // 0x8008BD24: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008BD28: addiu       $t4, $t4, 0x4C28
    ctx->r12 = ADD32(ctx->r12, 0X4C28);
    // 0x8008BD2C: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8008BD30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BD34: beq         $t5, $at, L_8008BD54
    if (ctx->r13 == ctx->r1) {
        // 0x8008BD38: nop
    
            goto L_8008BD54;
    }
    // 0x8008BD38: nop

    // 0x8008BD3C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008BD40: addiu       $t6, $t6, 0x4C28
    ctx->r14 = ADD32(ctx->r14, 0X4C28);
    // 0x8008BD44: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008BD48: nop

    // 0x8008BD4C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8008BD50: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
L_8008BD54:
    // 0x8008BD54: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008BD58: addiu       $t9, $t9, 0x4C58
    ctx->r25 = ADD32(ctx->r25, 0X4C58);
    // 0x8008BD5C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8008BD60: nop

    // 0x8008BD64: bne         $t0, $zero, L_8008BD90
    if (ctx->r8 != 0) {
        // 0x8008BD68: nop
    
            goto L_8008BD90;
    }
    // 0x8008BD68: nop

    // 0x8008BD6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008BD70: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008BD74: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008BD78: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x8008BD7C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008BD80: addiu       $t3, $t3, 0x4C58
    ctx->r11 = ADD32(ctx->r11, 0X4C58);
    // 0x8008BD84: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8008BD88: b           L_8008BDC0
    // 0x8008BD8C: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
        goto L_8008BDC0;
    // 0x8008BD8C: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
L_8008BD90:
    // 0x8008BD90: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008BD94: addiu       $t4, $t4, 0x4C58
    ctx->r12 = ADD32(ctx->r12, 0X4C58);
    // 0x8008BD98: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8008BD9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BDA0: beq         $t5, $at, L_8008BDC0
    if (ctx->r13 == ctx->r1) {
        // 0x8008BDA4: nop
    
            goto L_8008BDC0;
    }
    // 0x8008BDA4: nop

    // 0x8008BDA8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008BDAC: addiu       $t7, $t7, 0x4C58
    ctx->r15 = ADD32(ctx->r15, 0X4C58);
    // 0x8008BDB0: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8008BDB4: nop

    // 0x8008BDB8: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8008BDBC: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_8008BDC0:
    // 0x8008BDC0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008BDC4: addiu       $t9, $t9, 0x4C88
    ctx->r25 = ADD32(ctx->r25, 0X4C88);
    // 0x8008BDC8: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8008BDCC: nop

    // 0x8008BDD0: bne         $t0, $zero, L_8008BE3C
    if (ctx->r8 != 0) {
        // 0x8008BDD4: nop
    
            goto L_8008BE3C;
    }
    // 0x8008BDD4: nop

    // 0x8008BDD8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008BDDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008BDE0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008BDE4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008BDE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008BDEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008BDF0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008BDF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008BDF8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008BDFC: swc1        $f8, 0x4180($at)
    MEM_W(0X4180, ctx->r1) = ctx->f8.u32l;
    // 0x8008BE00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008BE04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008BE08: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008BE0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008BE10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008BE14: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008BE18: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008BE1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008BE20: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008BE24: swc1        $f10, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->f10.u32l;
    // 0x8008BE28: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008BE2C: addiu       $t8, $t8, 0x4C88
    ctx->r24 = ADD32(ctx->r24, 0X4C88);
    // 0x8008BE30: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8008BE34: b           L_8008BE6C
    // 0x8008BE38: sh          $t5, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r13;
        goto L_8008BE6C;
    // 0x8008BE38: sh          $t5, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r13;
L_8008BE3C:
    // 0x8008BE3C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008BE40: addiu       $t6, $t6, 0x4C88
    ctx->r14 = ADD32(ctx->r14, 0X4C88);
    // 0x8008BE44: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008BE48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BE4C: beq         $t7, $at, L_8008BE6C
    if (ctx->r15 == ctx->r1) {
        // 0x8008BE50: nop
    
            goto L_8008BE6C;
    }
    // 0x8008BE50: nop

    // 0x8008BE54: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008BE58: addiu       $t9, $t9, 0x4C88
    ctx->r25 = ADD32(ctx->r25, 0X4C88);
    // 0x8008BE5C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8008BE60: nop

    // 0x8008BE64: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8008BE68: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
L_8008BE6C:
    // 0x8008BE6C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008BE70: addiu       $t2, $t2, 0x4CB8
    ctx->r10 = ADD32(ctx->r10, 0X4CB8);
    // 0x8008BE74: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8008BE78: nop

    // 0x8008BE7C: bne         $t3, $zero, L_8008BEA4
    if (ctx->r11 != 0) {
        // 0x8008BE80: nop
    
            goto L_8008BEA4;
    }
    // 0x8008BE80: nop

    // 0x8008BE84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008BE88: jal         0x8001BB34
    // 0x8008BE8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008BE8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8008BE90: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008BE94: addiu       $t5, $t5, 0x4CB8
    ctx->r13 = ADD32(ctx->r13, 0X4CB8);
    // 0x8008BE98: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8008BE9C: b           L_8008BEDC
    // 0x8008BEA0: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
        goto L_8008BEDC;
    // 0x8008BEA0: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
L_8008BEA4:
    // 0x8008BEA4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008BEA8: addiu       $t8, $t8, 0x4CB8
    ctx->r24 = ADD32(ctx->r24, 0X4CB8);
    // 0x8008BEAC: lh          $t6, 0x0($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X0);
    // 0x8008BEB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BEB4: beq         $t6, $at, L_8008BEDC
    if (ctx->r14 == ctx->r1) {
        // 0x8008BEB8: nop
    
            goto L_8008BEDC;
    }
    // 0x8008BEB8: nop

    // 0x8008BEBC: jal         0x8008ED8C
    // 0x8008BEC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008ED8C(rdram, ctx);
        goto after_1;
    // 0x8008BEC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8008BEC4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008BEC8: addiu       $t7, $t7, 0x4CB8
    ctx->r15 = ADD32(ctx->r15, 0X4CB8);
    // 0x8008BECC: lh          $t0, 0x0($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X0);
    // 0x8008BED0: nop

    // 0x8008BED4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8008BED8: sh          $t1, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r9;
L_8008BEDC:
    // 0x8008BEDC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008BEE0: addiu       $t9, $t9, 0x4CE8
    ctx->r25 = ADD32(ctx->r25, 0X4CE8);
    // 0x8008BEE4: lh          $t2, 0x0($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X0);
    // 0x8008BEE8: nop

    // 0x8008BEEC: bne         $t2, $zero, L_8008BF80
    if (ctx->r10 != 0) {
        // 0x8008BEF0: nop
    
            goto L_8008BF80;
    }
    // 0x8008BEF0: nop

    // 0x8008BEF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008BEF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008BEFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008BF00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008BF04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008BF08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008BF0C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008BF10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008BF14: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008BF18: swc1        $f16, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f16.u32l;
    // 0x8008BF1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8008BF20: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008BF24: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8008BF28: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8008BF2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008BF30: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8008BF34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008BF38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008BF3C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008BF40: swc1        $f18, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f18.u32l;
    // 0x8008BF44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008BF48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008BF4C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8008BF50: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8008BF54: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008BF58: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8008BF5C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008BF60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008BF64: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008BF68: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
    // 0x8008BF6C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008BF70: addiu       $t7, $t7, 0x4CE8
    ctx->r15 = ADD32(ctx->r15, 0X4CE8);
    // 0x8008BF74: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8008BF78: b           L_8008BFB0
    // 0x8008BF7C: sh          $t1, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r9;
        goto L_8008BFB0;
    // 0x8008BF7C: sh          $t1, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r9;
L_8008BF80:
    // 0x8008BF80: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008BF84: addiu       $t9, $t9, 0x4CE8
    ctx->r25 = ADD32(ctx->r25, 0X4CE8);
    // 0x8008BF88: lh          $t2, 0x0($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X0);
    // 0x8008BF8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BF90: beq         $t2, $at, L_8008BFB0
    if (ctx->r10 == ctx->r1) {
        // 0x8008BF94: nop
    
            goto L_8008BFB0;
    }
    // 0x8008BF94: nop

    // 0x8008BF98: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008BF9C: addiu       $t3, $t3, 0x4CE8
    ctx->r11 = ADD32(ctx->r11, 0X4CE8);
    // 0x8008BFA0: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8008BFA4: nop

    // 0x8008BFA8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8008BFAC: sh          $t5, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r13;
L_8008BFB0:
    // 0x8008BFB0: jal         0x8008E9DC
    // 0x8008BFB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008E9DC(rdram, ctx);
        goto after_2;
    // 0x8008BFB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8008BFB8: jal         0x8008D188
    // 0x8008BFBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008D188(rdram, ctx);
        goto after_3;
    // 0x8008BFBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8008BFC0: jal         0x8008F1DC
    // 0x8008BFC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008F1DC(rdram, ctx);
        goto after_4;
    // 0x8008BFC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8008BFC8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008BFCC: addiu       $t8, $t8, 0x4D18
    ctx->r24 = ADD32(ctx->r24, 0X4D18);
    // 0x8008BFD0: lh          $t6, 0x0($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X0);
    // 0x8008BFD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BFD8: bne         $t6, $at, L_8008BFF0
    if (ctx->r14 != ctx->r1) {
        // 0x8008BFDC: nop
    
            goto L_8008BFF0;
    }
    // 0x8008BFDC: nop

    // 0x8008BFE0: jal         0x8008DD54
    // 0x8008BFE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008DD54(rdram, ctx);
        goto after_5;
    // 0x8008BFE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8008BFE8: b           L_8008BFF8
    // 0x8008BFEC: nop

        goto L_8008BFF8;
    // 0x8008BFEC: nop

L_8008BFF0:
    // 0x8008BFF0: jal         0x8008D3F8
    // 0x8008BFF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008D3F8(rdram, ctx);
        goto after_6;
    // 0x8008BFF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
L_8008BFF8:
    // 0x8008BFF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008BFFC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008C000: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008C004: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008C008: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008C00C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008C010: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008C014: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8008C018: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x8008C01C: nop

    // 0x8008C020: beq         $t7, $zero, L_8008C04C
    if (ctx->r15 == 0) {
        // 0x8008C024: nop
    
            goto L_8008C04C;
    }
    // 0x8008C024: nop

    // 0x8008C028: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008C02C: jal         0x8001CEF4
    // 0x8008C030: nop

    func_8001CEF4(rdram, ctx);
        goto after_7;
    // 0x8008C030: nop

    after_7:
    // 0x8008C034: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008C038: jal         0x8001CD20
    // 0x8008C03C: nop

    func_8001CD20(rdram, ctx);
        goto after_8;
    // 0x8008C03C: nop

    after_8:
    // 0x8008C040: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008C044: jal         0x8001AD6C
    // 0x8008C048: nop

    func_8001AD6C(rdram, ctx);
        goto after_9;
    // 0x8008C048: nop

    after_9:
L_8008C04C:
    // 0x8008C04C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008C050: lbu         $t9, 0x4C24($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4C24);
    // 0x8008C054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008C058: bne         $t9, $at, L_8008C0B0
    if (ctx->r25 != ctx->r1) {
        // 0x8008C05C: nop
    
            goto L_8008C0B0;
    }
    // 0x8008C05C: nop

    // 0x8008C060: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008C064: lbu         $t2, 0x4C25($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X4C25);
    // 0x8008C068: nop

    // 0x8008C06C: bne         $t2, $zero, L_8008C098
    if (ctx->r10 != 0) {
        // 0x8008C070: nop
    
            goto L_8008C098;
    }
    // 0x8008C070: nop

    // 0x8008C074: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8008C078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008C07C: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x8008C080: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8008C084: jal         0x800175F0
    // 0x8008C088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_10;
    // 0x8008C088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x8008C08C: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8008C090: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C094: sb          $t4, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = ctx->r12;
L_8008C098:
    // 0x8008C098: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008C09C: lbu         $t5, 0x4C25($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4C25);
    // 0x8008C0A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C0A4: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x8008C0A8: b           L_8008C110
    // 0x8008C0AC: sb          $t3, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = ctx->r11;
        goto L_8008C110;
    // 0x8008C0AC: sb          $t3, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = ctx->r11;
L_8008C0B0:
    // 0x8008C0B0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C0B4: lbu         $t8, 0x4C24($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4C24);
    // 0x8008C0B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008C0BC: bne         $t8, $at, L_8008C110
    if (ctx->r24 != ctx->r1) {
        // 0x8008C0C0: nop
    
            goto L_8008C110;
    }
    // 0x8008C0C0: nop

    // 0x8008C0C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008C0C8: lbu         $t6, 0x4C25($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4C25);
    // 0x8008C0CC: nop

    // 0x8008C0D0: bne         $t6, $zero, L_8008C0FC
    if (ctx->r14 != 0) {
        // 0x8008C0D4: nop
    
            goto L_8008C0FC;
    }
    // 0x8008C0D4: nop

    // 0x8008C0D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8008C0DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008C0E0: addiu       $a2, $zero, 0x4D
    ctx->r6 = ADD32(0, 0X4D);
    // 0x8008C0E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8008C0E8: jal         0x800175F0
    // 0x8008C0EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x8008C0EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8008C0F0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8008C0F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C0F8: sb          $t0, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = ctx->r8;
L_8008C0FC:
    // 0x8008C0FC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008C100: lbu         $t1, 0x4C25($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4C25);
    // 0x8008C104: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C108: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x8008C10C: sb          $t7, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = ctx->r15;
L_8008C110:
    // 0x8008C110: b           L_8008C118
    // 0x8008C114: nop

        goto L_8008C118;
    // 0x8008C114: nop

L_8008C118:
    // 0x8008C118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C11C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008C120: jr          $ra
    // 0x8008C124: nop

    return;
    // 0x8008C124: nop

;}
RECOMP_FUNC void func_800ADB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ADB4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ADB50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ADB54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800ADB58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ADB5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ADB60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ADB64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ADB68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ADB6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ADB70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ADB74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ADB78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800ADB7C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800ADB80: nop

    // 0x800ADB84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800ADB88: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800ADB8C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800ADB90: beq         $s0, $at, L_800ADBAC
    if (ctx->r16 == ctx->r1) {
        // 0x800ADB94: nop
    
            goto L_800ADBAC;
    }
    // 0x800ADB94: nop

    // 0x800ADB98: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800ADB9C: beq         $s0, $at, L_800ADBBC
    if (ctx->r16 == ctx->r1) {
        // 0x800ADBA0: nop
    
            goto L_800ADBBC;
    }
    // 0x800ADBA0: nop

    // 0x800ADBA4: b           L_800ADBCC
    // 0x800ADBA8: nop

        goto L_800ADBCC;
    // 0x800ADBA8: nop

L_800ADBAC:
    // 0x800ADBAC: jal         0x800AD6A0
    // 0x800ADBB0: nop

    func_800AD6A0(rdram, ctx);
        goto after_0;
    // 0x800ADBB0: nop

    after_0:
    // 0x800ADBB4: b           L_800ADBDC
    // 0x800ADBB8: nop

        goto L_800ADBDC;
    // 0x800ADBB8: nop

L_800ADBBC:
    // 0x800ADBBC: jal         0x800AD8CC
    // 0x800ADBC0: nop

    func_800AD8CC(rdram, ctx);
        goto after_1;
    // 0x800ADBC0: nop

    after_1:
    // 0x800ADBC4: b           L_800ADBDC
    // 0x800ADBC8: nop

        goto L_800ADBDC;
    // 0x800ADBC8: nop

L_800ADBCC:
    // 0x800ADBCC: jal         0x800ADB1C
    // 0x800ADBD0: nop

    func_800ADB1C(rdram, ctx);
        goto after_2;
    // 0x800ADBD0: nop

    after_2:
    // 0x800ADBD4: b           L_800ADBDC
    // 0x800ADBD8: nop

        goto L_800ADBDC;
    // 0x800ADBD8: nop

L_800ADBDC:
    // 0x800ADBDC: b           L_800ADBE4
    // 0x800ADBE0: nop

        goto L_800ADBE4;
    // 0x800ADBE0: nop

L_800ADBE4:
    // 0x800ADBE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ADBE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800ADBEC: jr          $ra
    // 0x800ADBF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800ADBF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B4C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4C80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B4C84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B4C88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4C8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B4C90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4C94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4C98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4C9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B4CA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4CA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4CA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B4CAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B4CB0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B4CB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4CB8: nop

    // 0x800B4CBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B4CC0: nop

    // 0x800B4CC4: bne         $t1, $zero, L_800B4D18
    if (ctx->r9 != 0) {
        // 0x800B4CC8: nop
    
            goto L_800B4D18;
    }
    // 0x800B4CC8: nop

    // 0x800B4CCC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4CD0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B4CD4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B4CD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B4CDC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4CE0: nop

    // 0x800B4CE4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B4CE8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800B4CEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B4CF0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4CF4: nop

    // 0x800B4CF8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B4CFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4D00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4D08: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x800B4D0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B4D10: jal         0x800175F0
    // 0x800B4D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800B4D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800B4D18:
    // 0x800B4D18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4D1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4D20: jal         0x800272E8
    // 0x800B4D24: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x800B4D24: nop

    after_1:
    // 0x800B4D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4D30: jal         0x80029C40
    // 0x800B4D34: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B4D34: nop

    after_2:
    // 0x800B4D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4D40: jal         0x80029D04
    // 0x800B4D44: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B4D44: nop

    after_3:
    // 0x800B4D48: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800B4D4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B4D50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B4D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4D5C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800B4D60: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800B4D64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B4D68: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B4D6C: jal         0x800295C0
    // 0x800B4D70: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800B4D70: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800B4D74: beq         $v0, $zero, L_800B4D9C
    if (ctx->r2 == 0) {
        // 0x800B4D78: nop
    
            goto L_800B4D9C;
    }
    // 0x800B4D78: nop

    // 0x800B4D7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4D80: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B4D84: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B4D88: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4D8C: nop

    // 0x800B4D90: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800B4D94: b           L_800B4E50
    // 0x800B4D98: nop

        goto L_800B4E50;
    // 0x800B4D98: nop

L_800B4D9C:
    // 0x800B4D9C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B4DA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B4DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B4DB0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B4DB4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B4DB8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800B4DBC: jal         0x80029018
    // 0x800B4DC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800B4DC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800B4DC4: beq         $v0, $zero, L_800B4DEC
    if (ctx->r2 == 0) {
        // 0x800B4DC8: nop
    
            goto L_800B4DEC;
    }
    // 0x800B4DC8: nop

    // 0x800B4DCC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4DD0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800B4DD4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B4DD8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4DDC: nop

    // 0x800B4DE0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800B4DE4: b           L_800B4E50
    // 0x800B4DE8: nop

        goto L_800B4E50;
    // 0x800B4DE8: nop

L_800B4DEC:
    // 0x800B4DEC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4DF0: nop

    // 0x800B4DF4: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B4DF8: nop

    // 0x800B4DFC: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x800B4E00: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4E04: nop

    // 0x800B4E08: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800B4E0C: nop

    // 0x800B4E10: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800B4E14: sh          $t5, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r13;
    // 0x800B4E18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4E1C: nop

    // 0x800B4E20: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800B4E24: nop

    // 0x800B4E28: bgtz        $t7, L_800B4E48
    if (SIGNED(ctx->r15) > 0) {
        // 0x800B4E2C: nop
    
            goto L_800B4E48;
    }
    // 0x800B4E2C: nop

    // 0x800B4E30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4E34: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B4E38: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B4E3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B4E40: nop

    // 0x800B4E44: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800B4E48:
    // 0x800B4E48: b           L_800B4E50
    // 0x800B4E4C: nop

        goto L_800B4E50;
    // 0x800B4E4C: nop

L_800B4E50:
    // 0x800B4E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4E54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B4E58: jr          $ra
    // 0x800B4E5C: nop

    return;
    // 0x800B4E5C: nop

;}
RECOMP_FUNC void func_80087694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087694: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80087698: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008769C: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x800876A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800876A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800876A8: nop

    // 0x800876AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800876B0: nop

    // 0x800876B4: bc1t        L_800876D8
    if (c1cs) {
        // 0x800876B8: nop
    
            goto L_800876D8;
    }
    // 0x800876B8: nop

    // 0x800876BC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800876C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800876C4: nop

    // 0x800876C8: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x800876CC: nop

    // 0x800876D0: bc1f        L_80087704
    if (!c1cs) {
        // 0x800876D4: nop
    
            goto L_80087704;
    }
    // 0x800876D4: nop

L_800876D8:
    // 0x800876D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800876DC: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x800876E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800876E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800876E8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800876EC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800876F0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800876F4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800876F8: nop

    // 0x800876FC: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80087700: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80087704:
    // 0x80087704: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087708: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8008770C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80087710: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80087714: nop

    // 0x80087718: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8008771C: nop

    // 0x80087720: bc1t        L_80087744
    if (c1cs) {
        // 0x80087724: nop
    
            goto L_80087744;
    }
    // 0x80087724: nop

    // 0x80087728: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8008772C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80087730: nop

    // 0x80087734: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x80087738: nop

    // 0x8008773C: bc1f        L_80087770
    if (!c1cs) {
        // 0x80087740: nop
    
            goto L_80087770;
    }
    // 0x80087740: nop

L_80087744:
    // 0x80087744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087748: lwc1        $f6, -0x1C6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8008774C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80087750: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80087754: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80087758: div.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8008775C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80087760: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80087764: nop

    // 0x80087768: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8008776C: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
L_80087770:
    // 0x80087770: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80087774: addiu       $t8, $t8, -0x1D70
    ctx->r24 = ADD32(ctx->r24, -0X1D70);
    // 0x80087778: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8008777C: nop

    // 0x80087780: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80087784: beq         $t0, $zero, L_800877AC
    if (ctx->r8 == 0) {
        // 0x80087788: nop
    
            goto L_800877AC;
    }
    // 0x80087788: nop

    // 0x8008778C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80087790: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80087794: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80087798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008779C: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800877A0: nop

    // 0x800877A4: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800877A8: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_800877AC:
    // 0x800877AC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800877B0: addiu       $t2, $t2, -0x1D70
    ctx->r10 = ADD32(ctx->r10, -0X1D70);
    // 0x800877B4: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x800877B8: nop

    // 0x800877BC: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x800877C0: beq         $t4, $zero, L_800877E8
    if (ctx->r12 == 0) {
        // 0x800877C4: nop
    
            goto L_800877E8;
    }
    // 0x800877C4: nop

    // 0x800877C8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800877CC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800877D0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800877D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800877D8: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800877DC: nop

    // 0x800877E0: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800877E4: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_800877E8:
    // 0x800877E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800877EC: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x800877F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800877F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800877F8: nop

    // 0x800877FC: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x80087800: nop

    // 0x80087804: bc1t        L_80087868
    if (c1cs) {
        // 0x80087808: nop
    
            goto L_80087868;
    }
    // 0x80087808: nop

    // 0x8008780C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80087810: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80087814: nop

    // 0x80087818: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8008781C: nop

    // 0x80087820: bc1t        L_80087868
    if (c1cs) {
        // 0x80087824: nop
    
            goto L_80087868;
    }
    // 0x80087824: nop

    // 0x80087828: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008782C: lwc1        $f10, -0x1C6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80087830: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80087834: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80087838: nop

    // 0x8008783C: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80087840: nop

    // 0x80087844: bc1t        L_80087868
    if (c1cs) {
        // 0x80087848: nop
    
            goto L_80087868;
    }
    // 0x80087848: nop

    // 0x8008784C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80087850: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80087854: nop

    // 0x80087858: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8008785C: nop

    // 0x80087860: bc1f        L_80087984
    if (!c1cs) {
        // 0x80087864: nop
    
            goto L_80087984;
    }
    // 0x80087864: nop

L_80087868:
    // 0x80087868: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008786C: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80087870: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80087874: lwc1        $f19, -0x32A0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X32A0);
    // 0x80087878: lwc1        $f18, -0x329C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X329C);
    // 0x8008787C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x80087880: nop

    // 0x80087884: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80087888: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8008788C: swc1        $f10, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f10.u32l;
    // 0x80087890: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087894: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80087898: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008789C: lwc1        $f17, -0x3298($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3298);
    // 0x800878A0: lwc1        $f16, -0x3294($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3294);
    // 0x800878A4: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x800878A8: nop

    // 0x800878AC: div.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f6.d, ctx->f16.d);
    // 0x800878B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800878B4: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x800878B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800878BC: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x800878C0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800878C4: lwc1        $f7, -0x3290($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X3290);
    // 0x800878C8: lwc1        $f6, -0x328C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X328C);
    // 0x800878CC: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x800878D0: nop

    // 0x800878D4: div.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x800878D8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800878DC: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x800878E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800878E4: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x800878E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800878EC: lwc1        $f9, -0x3288($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3288);
    // 0x800878F0: lwc1        $f8, -0x3284($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3284);
    // 0x800878F4: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x800878F8: nop

    // 0x800878FC: div.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x80087900: neg.d       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = -ctx->f6.d;
    // 0x80087904: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80087908: swc1        $f18, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f18.u32l;
    // 0x8008790C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80087910: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80087914: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80087918: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8008791C: c.eq.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d == ctx->f8.d;
    // 0x80087920: nop

    // 0x80087924: bc1f        L_8008794C
    if (!c1cs) {
        // 0x80087928: nop
    
            goto L_8008794C;
    }
    // 0x80087928: nop

    // 0x8008792C: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80087930: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80087934: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80087938: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x8008793C: c.eq.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d == ctx->f18.d;
    // 0x80087940: nop

    // 0x80087944: bc1t        L_80087984
    if (c1cs) {
        // 0x80087948: nop
    
            goto L_80087984;
    }
    // 0x80087948: nop

L_8008794C:
    // 0x8008794C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80087950: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80087954: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80087958: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x8008795C: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80087960: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80087964: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80087968: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8008796C: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x80087970: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80087974: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80087978: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008797C: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x80087980: swc1        $f16, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f16.u32l;
L_80087984:
    // 0x80087984: b           L_8008798C
    // 0x80087988: nop

        goto L_8008798C;
    // 0x80087988: nop

L_8008798C:
    // 0x8008798C: jr          $ra
    // 0x80087990: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80087990: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8009F890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009F89C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009F8A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009F8A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009F8A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F8AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009F8B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F8B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009F8B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009F8BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F8C0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009F8C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F8C8: nop

    // 0x8009F8CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009F8D0: nop

    // 0x8009F8D4: bne         $t1, $zero, L_8009F960
    if (ctx->r9 != 0) {
        // 0x8009F8D8: nop
    
            goto L_8009F960;
    }
    // 0x8009F8D8: nop

    // 0x8009F8DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F8E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009F8E4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009F8E8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F8EC: nop

    // 0x8009F8F0: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x8009F8F4: nop

    // 0x8009F8F8: swc1        $f4, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f4.u32l;
    // 0x8009F8FC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F900: nop

    // 0x8009F904: lwc1        $f6, 0x48($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X48);
    // 0x8009F908: nop

    // 0x8009F90C: swc1        $f6, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->f6.u32l;
    // 0x8009F910: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009F914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009F918: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F91C: nop

    // 0x8009F920: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x8009F924: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F928: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8009F92C: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
    // 0x8009F930: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F934: nop

    // 0x8009F938: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x8009F93C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F940: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F944: nop

    // 0x8009F948: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
    // 0x8009F94C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F950: nop

    // 0x8009F954: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8009F958: nop

    // 0x8009F95C: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
L_8009F960:
    // 0x8009F960: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F964: nop

    // 0x8009F968: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8009F96C: nop

    // 0x8009F970: bne         $t3, $zero, L_8009F9BC
    if (ctx->r11 != 0) {
        // 0x8009F974: nop
    
            goto L_8009F9BC;
    }
    // 0x8009F974: nop

    // 0x8009F978: lh          $t4, 0xAC($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAC);
    // 0x8009F97C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009F980: bne         $t4, $at, L_8009F9BC
    if (ctx->r12 != ctx->r1) {
        // 0x8009F984: nop
    
            goto L_8009F9BC;
    }
    // 0x8009F984: nop

    // 0x8009F988: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009F98C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009F990: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F994: nop

    // 0x8009F998: swc1        $f18, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f18.u32l;
    // 0x8009F99C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009F9A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009F9A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F9A8: nop

    // 0x8009F9AC: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x8009F9B0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F9B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8009F9B8: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
L_8009F9BC:
    // 0x8009F9BC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F9C0: nop

    // 0x8009F9C4: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8009F9C8: nop

    // 0x8009F9CC: beq         $t0, $zero, L_8009FA18
    if (ctx->r8 == 0) {
        // 0x8009F9D0: nop
    
            goto L_8009FA18;
    }
    // 0x8009F9D0: nop

    // 0x8009F9D4: lh          $t1, 0xAC($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XAC);
    // 0x8009F9D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009F9DC: bne         $t1, $at, L_8009FA18
    if (ctx->r9 != ctx->r1) {
        // 0x8009F9E0: nop
    
            goto L_8009FA18;
    }
    // 0x8009F9E0: nop

    // 0x8009F9E4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8009F9E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009F9EC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F9F0: nop

    // 0x8009F9F4: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x8009F9F8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009F9FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009FA00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA04: nop

    // 0x8009FA08: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
    // 0x8009FA0C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA10: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8009FA14: sh          $t4, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r12;
L_8009FA18:
    // 0x8009FA18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA1C: nop

    // 0x8009FA20: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8009FA24: nop

    // 0x8009FA28: beq         $t7, $zero, L_8009FA3C
    if (ctx->r15 == 0) {
        // 0x8009FA2C: nop
    
            goto L_8009FA3C;
    }
    // 0x8009FA2C: nop

    // 0x8009FA30: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA34: nop

    // 0x8009FA38: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_8009FA3C:
    // 0x8009FA3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009FA40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009FA44: jal         0x80029D04
    // 0x8009FA48: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x8009FA48: nop

    after_0:
    // 0x8009FA4C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FA50: nop

    // 0x8009FA54: lh          $t9, 0xAC($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XAC);
    // 0x8009FA58: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8009FA5C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8009FA60: lwc1        $f10, 0x48($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X48);
    // 0x8009FA64: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009FA68: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8009FA6C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8009FA70: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009FA74: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8009FA78: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8009FA7C: nop

    // 0x8009FA80: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8009FA84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8009FA88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8009FA8C: nop

    // 0x8009FA90: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8009FA94: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8009FA98: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8009FA9C: sh          $t2, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r10;
    // 0x8009FAA0: nop

    // 0x8009FAA4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FAA8: nop

    // 0x8009FAAC: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x8009FAB0: nop

    // 0x8009FAB4: bne         $t5, $zero, L_8009FAF0
    if (ctx->r13 != 0) {
        // 0x8009FAB8: nop
    
            goto L_8009FAF0;
    }
    // 0x8009FAB8: nop

    // 0x8009FABC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FAC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009FAC4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8009FAC8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FACC: nop

    // 0x8009FAD0: lwc1        $f18, 0xD8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x8009FAD4: nop

    // 0x8009FAD8: swc1        $f18, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f18.u32l;
    // 0x8009FADC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FAE0: nop

    // 0x8009FAE4: lwc1        $f6, 0xDC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XDC);
    // 0x8009FAE8: nop

    // 0x8009FAEC: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
L_8009FAF0:
    // 0x8009FAF0: b           L_8009FAF8
    // 0x8009FAF4: nop

        goto L_8009FAF8;
    // 0x8009FAF4: nop

L_8009FAF8:
    // 0x8009FAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009FAFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009FB00: jr          $ra
    // 0x8009FB04: nop

    return;
    // 0x8009FB04: nop

;}
RECOMP_FUNC void func_80093940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093940: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80093944: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80093948: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009394C: lw          $v0, 0x3294($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3294);
    // 0x80093950: jr          $ra
    // 0x80093954: nop

    return;
    // 0x80093954: nop

    // 0x80093958: jr          $ra
    // 0x8009395C: nop

    return;
    // 0x8009395C: nop

    // 0x80093960: jr          $ra
    // 0x80093964: nop

    return;
    // 0x80093964: nop

;}
RECOMP_FUNC void func_800EA194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EA194: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EA198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EA19C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EA1A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EA1A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EA1A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EA1AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EA1B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EA1B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EA1B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EA1BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EA1C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EA1C4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EA1C8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA1CC: nop

    // 0x800EA1D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EA1D4: nop

    // 0x800EA1D8: bne         $t1, $zero, L_800EA2B0
    if (ctx->r9 != 0) {
        // 0x800EA1DC: nop
    
            goto L_800EA2B0;
    }
    // 0x800EA1DC: nop

    // 0x800EA1E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EA1E4: nop

    // 0x800EA1E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EA1EC: nop

    // 0x800EA1F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EA1F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EA1F8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EA1FC: nop

    // 0x800EA200: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EA204: nop

    // 0x800EA208: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EA20C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800EA210: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EA214: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA218: nop

    // 0x800EA21C: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800EA220: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800EA224: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EA228: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA22C: nop

    // 0x800EA230: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800EA234: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EA238: nop

    // 0x800EA23C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800EA240: nop

    // 0x800EA244: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800EA248: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800EA24C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA250: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800EA254: addiu       $t3, $t3, -0x6714
    ctx->r11 = ADD32(ctx->r11, -0X6714);
    // 0x800EA258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA25C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800EA260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EA264: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800EA268: jal         0x8001C0EC
    // 0x800EA26C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EA26C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800EA270: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EA274: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800EA278: addiu       $t2, $t2, -0x66F4
    ctx->r10 = ADD32(ctx->r10, -0X66F4);
    // 0x800EA27C: lh          $a0, 0xEC($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XEC);
    // 0x800EA280: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800EA284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EA288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EA28C: jal         0x8001C0EC
    // 0x800EA290: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EA290: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
    // 0x800EA294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA29C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EA2A0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x800EA2A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EA2A8: jal         0x800175F0
    // 0x800EA2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800EA2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800EA2B0:
    // 0x800EA2B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA2B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA2B8: jal         0x80029C40
    // 0x800EA2BC: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800EA2BC: nop

    after_3:
    // 0x800EA2C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EA2C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EA2C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA2CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA2D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EA2D4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800EA2D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EA2DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800EA2E0: jal         0x80029018
    // 0x800EA2E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800EA2E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800EA2E8: beq         $v0, $zero, L_800EA314
    if (ctx->r2 == 0) {
        // 0x800EA2EC: nop
    
            goto L_800EA314;
    }
    // 0x800EA2EC: nop

    // 0x800EA2F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EA2F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA2F8: nop

    // 0x800EA2FC: swc1        $f16, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f16.u32l;
    // 0x800EA300: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EA304: nop

    // 0x800EA308: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800EA30C: nop

    // 0x800EA310: swc1        $f18, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f18.u32l;
L_800EA314:
    // 0x800EA314: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EA318: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EA31C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA324: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EA328: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EA32C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EA330: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EA334: jal         0x800295C0
    // 0x800EA338: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800EA338: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800EA33C: beq         $v0, $zero, L_800EA354
    if (ctx->r2 == 0) {
        // 0x800EA340: nop
    
            goto L_800EA354;
    }
    // 0x800EA340: nop

    // 0x800EA344: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EA348: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA34C: b           L_800EA364
    // 0x800EA350: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_800EA364;
    // 0x800EA350: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_800EA354:
    // 0x800EA354: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EA358: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA35C: nop

    // 0x800EA360: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_800EA364:
    // 0x800EA364: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800EA368:
    // 0x800EA368: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA36C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EA370: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x800EA374: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x800EA378: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800EA37C: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800EA380: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800EA384: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800EA388: lwc1        $f18, 0x24($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X24);
    // 0x800EA38C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800EA390: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800EA394: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA398: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800EA39C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA3A0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800EA3A4: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800EA3A8: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA3AC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA3B0: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x800EA3B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800EA3B8: lh          $t1, 0xE8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XE8);
    // 0x800EA3BC: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800EA3C0: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x800EA3C4: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800EA3C8: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800EA3CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EA3D0: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800EA3D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA3D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EA3DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA3E0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800EA3E4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x800EA3E8: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA3EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EA3F0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800EA3F4: addu        $t2, $t9, $t4
    ctx->r10 = ADD32(ctx->r25, ctx->r12);
    // 0x800EA3F8: lh          $t5, 0xE8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XE8);
    // 0x800EA3FC: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800EA400: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800EA404: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EA408: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800EA40C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EA410: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EA414: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA418: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EA41C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EA420: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800EA424: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x800EA428: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800EA42C: nop

    // 0x800EA430: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800EA434: sll         $t1, $t8, 16
    ctx->r9 = S32(ctx->r24 << 16);
    // 0x800EA438: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800EA43C: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800EA440: bne         $at, $zero, L_800EA368
    if (ctx->r1 != 0) {
        // 0x800EA444: sh          $t8, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r24;
            goto L_800EA368;
    }
    // 0x800EA444: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    // 0x800EA448: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EA44C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EA450: lh          $t9, 0xE8($t3)
    ctx->r25 = MEM_H(ctx->r11, 0XE8);
    // 0x800EA454: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EA458: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800EA45C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EA460: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EA464: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EA468: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EA46C: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x800EA470: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EA474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EA478: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EA47C: nop

    // 0x800EA480: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA484: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x800EA488: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EA48C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800EA490: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x800EA494: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800EA498: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EA49C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EA4A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EA4A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EA4A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EA4AC: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x800EA4B0: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EA4B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EA4B8: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800EA4BC: nop

    // 0x800EA4C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EA4C4: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x800EA4C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EA4CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EA4D0: lh          $t9, 0xEC($t3)
    ctx->r25 = MEM_H(ctx->r11, 0XEC);
    // 0x800EA4D4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EA4D8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800EA4DC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EA4E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EA4E4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EA4E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EA4EC: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x800EA4F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EA4F4: lwc1        $f8, 0x5550($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5550);
    // 0x800EA4F8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EA4FC: nop

    // 0x800EA500: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EA504: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x800EA508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EA50C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EA510: jal         0x8001B4AC
    // 0x800EA514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800EA514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800EA518: beq         $v0, $zero, L_800EA544
    if (ctx->r2 == 0) {
        // 0x800EA51C: nop
    
            goto L_800EA544;
    }
    // 0x800EA51C: nop

    // 0x800EA520: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EA524: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800EA528: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800EA52C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EA530: nop

    // 0x800EA534: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800EA538: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EA53C: nop

    // 0x800EA540: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
L_800EA544:
    // 0x800EA544: b           L_800EA54C
    // 0x800EA548: nop

        goto L_800EA54C;
    // 0x800EA548: nop

L_800EA54C:
    // 0x800EA54C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EA550: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EA554: jr          $ra
    // 0x800EA558: nop

    return;
    // 0x800EA558: nop

;}
RECOMP_FUNC void func_800FE898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE898: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FE89C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE8A0: jal         0x8001ECB8
    // 0x800FE8A4: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x800FE8A4: nop

    after_0:
    // 0x800FE8A8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800FE8AC: addiu       $t6, $t6, -0x1928
    ctx->r14 = ADD32(ctx->r14, -0X1928);
    // 0x800FE8B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FE8B4: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x800FE8B8: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x800FE8BC: addiu       $t7, $t7, -0x1DFC
    ctx->r15 = ADD32(ctx->r15, -0X1DFC);
    // 0x800FE8C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FE8C4: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x800FE8C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE8CC: sw          $zero, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = 0;
    // 0x800FE8D0: jal         0x800FE854
    // 0x800FE8D4: nop

    func_800FE854(rdram, ctx);
        goto after_1;
    // 0x800FE8D4: nop

    after_1:
    // 0x800FE8D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FE8DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE8E0: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x800FE8E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FE8E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE8EC: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x800FE8F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FE8F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE8F8: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x800FE8FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FE900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE904: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x800FE908: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FE90C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE910: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x800FE914: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800FE918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE91C: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x800FE920: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FE924: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE928: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x800FE92C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FE930: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FE934: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE938: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x800FE93C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FE940: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE944: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x800FE948: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800FE94C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FE950: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE954: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x800FE958: jal         0x80019C84
    // 0x800FE95C: nop

    func_80019C84(rdram, ctx);
        goto after_2;
    // 0x800FE95C: nop

    after_2:
    // 0x800FE960: jal         0x80019D2C
    // 0x800FE964: nop

    func_80019D2C(rdram, ctx);
        goto after_3;
    // 0x800FE964: nop

    after_3:
    // 0x800FE968: jal         0x8001A258
    // 0x800FE96C: nop

    func_8001A258(rdram, ctx);
        goto after_4;
    // 0x800FE96C: nop

    after_4:
    // 0x800FE970: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800FE974: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800FE978: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x800FE97C: jal         0x8001D244
    // 0x800FE980: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_5;
    // 0x800FE980: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x800FE984: jal         0x8001D284
    // 0x800FE988: nop

    func_8001D284(rdram, ctx);
        goto after_6;
    // 0x800FE988: nop

    after_6:
    // 0x800FE98C: jal         0x80000964
    // 0x800FE990: nop

    func_80000964(rdram, ctx);
        goto after_7;
    // 0x800FE990: nop

    after_7:
    // 0x800FE994: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800FE998: lw          $v0, 0x4FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FD0);
    // 0x800FE99C: b           L_800FE9AC
    // 0x800FE9A0: nop

        goto L_800FE9AC;
    // 0x800FE9A0: nop

    // 0x800FE9A4: b           L_800FE9AC
    // 0x800FE9A8: nop

        goto L_800FE9AC;
    // 0x800FE9A8: nop

L_800FE9AC:
    // 0x800FE9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE9B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FE9B4: jr          $ra
    // 0x800FE9B8: nop

    return;
    // 0x800FE9B8: nop

;}
RECOMP_FUNC void func_800DF3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF3D4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DF3D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DF3DC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DF3E0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DF3E4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DF3E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF3EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF3F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF3F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF3F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF3FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF40C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF410: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DF414: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF418: nop

    // 0x800DF41C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DF420: nop

    // 0x800DF424: bne         $t1, $zero, L_800DF4E4
    if (ctx->r9 != 0) {
        // 0x800DF428: nop
    
            goto L_800DF4E4;
    }
    // 0x800DF428: nop

    // 0x800DF42C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DF430: nop

    // 0x800DF434: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DF438: nop

    // 0x800DF43C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DF440: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DF444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF448: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DF44C: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DF450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF454: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DF458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF45C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800DF460: jal         0x8001C0EC
    // 0x800DF464: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DF464: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DF468: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF46C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF470: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DF474: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DF478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF47C: jal         0x8001ABF4
    // 0x800DF480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DF480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DF484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF488: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DF48C: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DF490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF494: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DF498: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DF49C: jal         0x8001ABF4
    // 0x800DF4A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DF4A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DF4A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF4A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF4AC: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    // 0x800DF4B0: jal         0x80029EF8
    // 0x800DF4B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800DF4B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x800DF4B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DF4BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DF4C0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF4C4: nop

    // 0x800DF4C8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800DF4CC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DF4D0: nop

    // 0x800DF4D4: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800DF4D8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DF4DC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800DF4E0: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800DF4E4:
    // 0x800DF4E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF4E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF4EC: jal         0x80028FA0
    // 0x800DF4F0: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DF4F0: nop

    after_4:
    // 0x800DF4F4: beq         $v0, $zero, L_800DF548
    if (ctx->r2 == 0) {
        // 0x800DF4F8: nop
    
            goto L_800DF548;
    }
    // 0x800DF4F8: nop

    // 0x800DF4FC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF500: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DF504: lh          $t1, 0x106($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X106);
    // 0x800DF508: nop

    // 0x800DF50C: beq         $t1, $at, L_800DF520
    if (ctx->r9 == ctx->r1) {
        // 0x800DF510: nop
    
            goto L_800DF520;
    }
    // 0x800DF510: nop

    // 0x800DF514: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DF518: bne         $t1, $at, L_800DF538
    if (ctx->r9 != ctx->r1) {
        // 0x800DF51C: nop
    
            goto L_800DF538;
    }
    // 0x800DF51C: nop

L_800DF520:
    // 0x800DF520: jal         0x800E3EE4
    // 0x800DF524: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DF524: nop

    after_5:
    // 0x800DF528: b           L_800DF6EC
    // 0x800DF52C: nop

        goto L_800DF6EC;
    // 0x800DF52C: nop

    // 0x800DF530: b           L_800DF548
    // 0x800DF534: nop

        goto L_800DF548;
    // 0x800DF534: nop

L_800DF538:
    // 0x800DF538: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF53C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF540: jal         0x80029B60
    // 0x800DF544: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800DF544: nop

    after_6:
L_800DF548:
    // 0x800DF548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF54C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF550: jal         0x8002A8B4
    // 0x800DF554: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x800DF554: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_7:
    // 0x800DF558: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DF55C: nop

    // 0x800DF560: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800DF564: nop

    // 0x800DF568: swc1        $f6, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f6.u32l;
    // 0x800DF56C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DF570: nop

    // 0x800DF574: lwc1        $f8, 0x28($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800DF578: nop

    // 0x800DF57C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800DF580: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DF584: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DF588: nop

    // 0x800DF58C: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
    // 0x800DF590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF598: jal         0x80029C40
    // 0x800DF59C: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800DF59C: nop

    after_8:
    // 0x800DF5A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DF5A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DF5A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF5AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF5B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DF5B4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DF5B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DF5BC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DF5C0: jal         0x80029018
    // 0x800DF5C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800DF5C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x800DF5C8: beq         $v0, $zero, L_800DF5EC
    if (ctx->r2 == 0) {
        // 0x800DF5CC: nop
    
            goto L_800DF5EC;
    }
    // 0x800DF5CC: nop

    // 0x800DF5D0: jal         0x800297DC
    // 0x800DF5D4: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800DF5D4: nop

    after_10:
    // 0x800DF5D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF5DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF5E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DF5E4: jal         0x80029824
    // 0x800DF5E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800DF5E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800DF5EC:
    // 0x800DF5EC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DF5F0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DF5F4: nop

    // 0x800DF5F8: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x800DF5FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800DF600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DF604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF60C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DF610: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DF614: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DF618: jal         0x80029F58
    // 0x800DF61C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800DF61C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800DF620: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DF624: bne         $v0, $at, L_800DF66C
    if (ctx->r2 != ctx->r1) {
        // 0x800DF628: nop
    
            goto L_800DF66C;
    }
    // 0x800DF628: nop

    // 0x800DF62C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DF630: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF634: nop

    // 0x800DF638: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x800DF63C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DF640: nop

    // 0x800DF644: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800DF648: nop

    // 0x800DF64C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800DF650: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DF654: nop

    // 0x800DF658: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800DF65C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DF660: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DF664: nop

    // 0x800DF668: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
L_800DF66C:
    // 0x800DF66C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF670: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF674: jal         0x8001B4AC
    // 0x800DF678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x800DF678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800DF67C: beq         $v0, $zero, L_800DF6E4
    if (ctx->r2 == 0) {
        // 0x800DF680: nop
    
            goto L_800DF6E4;
    }
    // 0x800DF680: nop

    // 0x800DF684: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DF688: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DF68C: nop

    // 0x800DF690: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x800DF694: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DF698: nop

    // 0x800DF69C: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800DF6A0: nop

    // 0x800DF6A4: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800DF6A8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DF6AC: nop

    // 0x800DF6B0: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x800DF6B4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DF6B8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800DF6BC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800DF6C0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DF6C4: nop

    // 0x800DF6C8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800DF6CC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DF6D0: nop

    // 0x800DF6D4: sh          $zero, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = 0;
    // 0x800DF6D8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DF6DC: nop

    // 0x800DF6E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800DF6E4:
    // 0x800DF6E4: b           L_800DF6EC
    // 0x800DF6E8: nop

        goto L_800DF6EC;
    // 0x800DF6E8: nop

L_800DF6EC:
    // 0x800DF6EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DF6F0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800DF6F4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800DF6F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800DF6FC: jr          $ra
    // 0x800DF700: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800DF700: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800E31E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E31E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E31E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E31EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E31F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E31F4: jal         0x8002B0E4
    // 0x800E31F8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E31F8: nop

    after_0:
    // 0x800E31FC: b           L_800E3204
    // 0x800E3200: nop

        goto L_800E3204;
    // 0x800E3200: nop

L_800E3204:
    // 0x800E3204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E320C: jr          $ra
    // 0x800E3210: nop

    return;
    // 0x800E3210: nop

;}
RECOMP_FUNC void func_800A1C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1C40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A1C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1C48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A1C4C: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x800A1C50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A1C54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A1C58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A1C5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1C64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1C6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1C70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A1C74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A1C78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A1C7C: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x800A1C80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A1C84: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800A1C88: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800A1C8C: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800A1C90: nop

    // 0x800A1C94: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x800A1C98: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x800A1C9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A1CA0: beq         $t5, $at, L_800A1D88
    if (ctx->r13 == ctx->r1) {
        // 0x800A1CA4: nop
    
            goto L_800A1D88;
    }
    // 0x800A1CA4: nop

    // 0x800A1CA8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x800A1CAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A1CB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1CB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1CB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1CBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1CC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1CC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A1CC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A1CCC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800A1CD0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A1CD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A1CD8: lh          $t2, 0xAA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XAA);
    // 0x800A1CDC: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800A1CE0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800A1CE4: nop

    // 0x800A1CE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A1CEC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A1CF0: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x800A1CF4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800A1CF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A1CFC: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x800A1D00: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800A1D04: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800A1D08: nop

    // 0x800A1D0C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A1D10: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800A1D14: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x800A1D18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A1D1C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800A1D20: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A1D24: nop

    // 0x800A1D28: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
    // 0x800A1D2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A1D30: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A1D34: lwc1        $f10, 0x40($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X40);
    // 0x800A1D38: nop

    // 0x800A1D3C: swc1        $f10, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f10.u32l;
    // 0x800A1D40: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A1D44: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A1D48: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800A1D4C: nop

    // 0x800A1D50: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
    // 0x800A1D54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A1D58: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A1D5C: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800A1D60: nop

    // 0x800A1D64: swc1        $f16, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f16.u32l;
    // 0x800A1D68: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A1D6C: sh          $t5, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r13;
    // 0x800A1D70: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x800A1D74: jal         0x80029C40
    // 0x800A1D78: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800A1D78: nop

    after_0:
    // 0x800A1D7C: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x800A1D80: jal         0x80029D04
    // 0x800A1D84: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800A1D84: nop

    after_1:
L_800A1D88:
    // 0x800A1D88: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x800A1D8C: b           L_800A1D9C
    // 0x800A1D90: nop

        goto L_800A1D9C;
    // 0x800A1D90: nop

    // 0x800A1D94: b           L_800A1D9C
    // 0x800A1D98: nop

        goto L_800A1D9C;
    // 0x800A1D98: nop

L_800A1D9C:
    // 0x800A1D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1DA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A1DA4: jr          $ra
    // 0x800A1DA8: nop

    return;
    // 0x800A1DA8: nop

;}
RECOMP_FUNC void func_800DBB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DBB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DBB7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DBB80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBB84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBB88: jal         0x8002B0E4
    // 0x800DBB8C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DBB8C: nop

    after_0:
    // 0x800DBB90: b           L_800DBB98
    // 0x800DBB94: nop

        goto L_800DBB98;
    // 0x800DBB94: nop

L_800DBB98:
    // 0x800DBB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DBB9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DBBA0: jr          $ra
    // 0x800DBBA4: nop

    return;
    // 0x800DBBA4: nop

;}
RECOMP_FUNC void func_80069FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069FD8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80069FDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069FE0: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80069FE4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80069FE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80069FEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80069FF0: lw          $t8, -0x4C04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4C04);
    // 0x80069FF4: nop

    // 0x80069FF8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80069FFC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8006A000: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A004: lb          $t0, 0x0($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X0);
    // 0x8006A008: nop

    // 0x8006A00C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8006A010: sb          $t1, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = ctx->r9;
    // 0x8006A014: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8006A018: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A01C: lb          $t3, 0x1($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X1);
    // 0x8006A020: nop

    // 0x8006A024: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8006A028: sb          $t4, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = ctx->r12;
    // 0x8006A02C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8006A030: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A034: lb          $t6, 0x2($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X2);
    // 0x8006A038: nop

    // 0x8006A03C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006A040: sb          $t7, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = ctx->r15;
    // 0x8006A044: b           L_8006A04C
    // 0x8006A048: nop

        goto L_8006A04C;
    // 0x8006A048: nop

L_8006A04C:
    // 0x8006A04C: jr          $ra
    // 0x8006A050: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006A050: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800983F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800983F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800983FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098400: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80098404: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80098408: nop

    // 0x8009840C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80098410: nop

    // 0x80098414: bne         $t7, $zero, L_8009846C
    if (ctx->r15 != 0) {
        // 0x80098418: nop
    
            goto L_8009846C;
    }
    // 0x80098418: nop

    // 0x8009841C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80098420: nop

    // 0x80098424: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80098428: nop

    // 0x8009842C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80098430: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80098434: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80098438: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8009843C: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80098440: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098448: jal         0x8001BBDC
    // 0x8009844C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8009844C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80098450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009845C: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x80098460: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80098464: jal         0x800175F0
    // 0x80098468: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80098468: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8009846C:
    // 0x8009846C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80098470: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098474: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80098478: nop

    // 0x8009847C: bne         $t4, $at, L_80098578
    if (ctx->r12 != ctx->r1) {
        // 0x80098480: nop
    
            goto L_80098578;
    }
    // 0x80098480: nop

    // 0x80098484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009848C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80098490: jal         0x8001B6BC
    // 0x80098494: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_2;
    // 0x80098494: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_2:
    // 0x80098498: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009849C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800984A0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800984A4: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x800984A8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_800984AC:
    // 0x800984AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800984B0: jal         0x80026E58
    // 0x800984B4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x800984B4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_3:
    // 0x800984B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800984BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800984C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800984C4: bne         $t9, $at, L_800984D4
    if (ctx->r25 != ctx->r1) {
        // 0x800984C8: nop
    
            goto L_800984D4;
    }
    // 0x800984C8: nop

    // 0x800984CC: b           L_80098578
    // 0x800984D0: nop

        goto L_80098578;
    // 0x800984D0: nop

L_800984D4:
    // 0x800984D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800984D8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800984DC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800984E0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800984E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800984E8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800984EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800984F0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800984F4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800984F8: lh          $t1, 0x41F6($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F6);
    // 0x800984FC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80098500: nop

    // 0x80098504: bne         $t1, $t3, L_80098560
    if (ctx->r9 != ctx->r11) {
        // 0x80098508: nop
    
            goto L_80098560;
    }
    // 0x80098508: nop

    // 0x8009850C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80098510: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098514: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80098518: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009851C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80098520: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80098524: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80098528: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009852C: addiu       $t4, $zero, 0x195
    ctx->r12 = ADD32(0, 0X195);
    // 0x80098530: sh          $t4, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r12;
    // 0x80098534: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80098538: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009853C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80098540: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80098544: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80098548: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8009854C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80098550: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80098554: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80098558: b           L_80098578
    // 0x8009855C: nop

        goto L_80098578;
    // 0x8009855C: nop

L_80098560:
    // 0x80098560: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80098564: nop

    // 0x80098568: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x8009856C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80098570: b           L_800984AC
    // 0x80098574: nop

        goto L_800984AC;
    // 0x80098574: nop

L_80098578:
    // 0x80098578: b           L_80098580
    // 0x8009857C: nop

        goto L_80098580;
    // 0x8009857C: nop

L_80098580:
    // 0x80098580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098584: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80098588: jr          $ra
    // 0x8009858C: nop

    return;
    // 0x8009858C: nop

;}
RECOMP_FUNC void func_80092EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092EA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092EA8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092EAC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092EB0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092EB4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092EB8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092EBC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092EC0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092EC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092EC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092ECC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092ED0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092ED4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092ED8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092EDC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092EE0: addiu       $a1, $a1, 0x178C
    ctx->r5 = ADD32(ctx->r5, 0X178C);
    // 0x80092EE4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092EE8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092EEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092EF0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092EF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092EF8: jal         0x80027464
    // 0x80092EFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092EFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092F00: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092F04: b           L_80092F0C
    // 0x80092F08: nop

        goto L_80092F0C;
    // 0x80092F08: nop

L_80092F0C:
    // 0x80092F0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092F10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092F14: jr          $ra
    // 0x80092F18: nop

    return;
    // 0x80092F18: nop

;}
RECOMP_FUNC void func_800FA148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA14C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA150: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FA154: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FA158: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FA15C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800FA160: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800FA164: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FA168: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800FA16C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FA170: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800FA174: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800FA178: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FA17C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800FA180: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FA184: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FA188: addiu       $a1, $a1, 0x37FC
    ctx->r5 = ADD32(ctx->r5, 0X37FC);
    // 0x800FA18C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FA190: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800FA194: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800FA198: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FA19C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FA1A0: jal         0x80027464
    // 0x800FA1A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FA1A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800FA1A8: b           L_800FA1B0
    // 0x800FA1AC: nop

        goto L_800FA1B0;
    // 0x800FA1AC: nop

L_800FA1B0:
    // 0x800FA1B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA1B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FA1B8: jr          $ra
    // 0x800FA1BC: nop

    return;
    // 0x800FA1BC: nop

;}
RECOMP_FUNC void func_80070644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070648: sb          $zero, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = 0;
    // 0x8007064C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070650: sb          $zero, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = 0;
    // 0x80070654: jr          $ra
    // 0x80070658: nop

    return;
    // 0x80070658: nop

    // 0x8007065C: jr          $ra
    // 0x80070660: nop

    return;
    // 0x80070660: nop

;}
RECOMP_FUNC void func_80072B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072B08: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80072B0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80072B10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80072B14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072B18: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80072B1C: nop

    // 0x80072B20: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80072B24: nop

    // 0x80072B28: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80072B2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80072B30: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80072B34: nop

    // 0x80072B38: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80072B3C: nop

    // 0x80072B40: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x80072B44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80072B48: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80072B4C: nop

    // 0x80072B50: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80072B54: nop

    // 0x80072B58: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x80072B5C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80072B60: lh          $t9, 0x77E8($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X77E8);
    // 0x80072B64: nop

    // 0x80072B68: addiu       $t0, $t9, 0x3C0
    ctx->r8 = ADD32(ctx->r25, 0X3C0);
    // 0x80072B6C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80072B70: nop

    // 0x80072B74: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80072B78: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x80072B7C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80072B80: lh          $t1, 0x7900($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7900);
    // 0x80072B84: nop

    // 0x80072B88: addiu       $t2, $t1, -0x3C0
    ctx->r10 = ADD32(ctx->r9, -0X3C0);
    // 0x80072B8C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80072B90: nop

    // 0x80072B94: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80072B98: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80072B9C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80072BA0: lh          $t3, 0x78F0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X78F0);
    // 0x80072BA4: nop

    // 0x80072BA8: addiu       $t4, $t3, 0x3C0
    ctx->r12 = ADD32(ctx->r11, 0X3C0);
    // 0x80072BAC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80072BB0: nop

    // 0x80072BB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80072BB8: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x80072BBC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80072BC0: lh          $t5, 0x7908($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7908);
    // 0x80072BC4: nop

    // 0x80072BC8: addiu       $t6, $t5, -0x3C0
    ctx->r14 = ADD32(ctx->r13, -0X3C0);
    // 0x80072BCC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80072BD0: nop

    // 0x80072BD4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80072BD8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x80072BDC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80072BE0: lh          $t7, 0x78F8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X78F8);
    // 0x80072BE4: nop

    // 0x80072BE8: addiu       $t8, $t7, 0x3C0
    ctx->r24 = ADD32(ctx->r15, 0X3C0);
    // 0x80072BEC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80072BF0: nop

    // 0x80072BF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80072BF8: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80072BFC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80072C00: lh          $t9, 0x790C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X790C);
    // 0x80072C04: nop

    // 0x80072C08: addiu       $t0, $t9, -0x3C0
    ctx->r8 = ADD32(ctx->r25, -0X3C0);
    // 0x80072C0C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80072C10: nop

    // 0x80072C14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80072C18: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80072C1C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072C20: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072C24: nop

    // 0x80072C28: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80072C2C: nop

    // 0x80072C30: bc1f        L_80072C5C
    if (!c1cs) {
        // 0x80072C34: nop
    
            goto L_80072C5C;
    }
    // 0x80072C34: nop

    // 0x80072C38: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072C3C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072C40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072C44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072C48: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80072C4C: nop

    // 0x80072C50: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80072C54: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80072C58: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
L_80072C5C:
    // 0x80072C5C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072C60: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072C64: nop

    // 0x80072C68: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80072C6C: nop

    // 0x80072C70: bc1f        L_80072C90
    if (!c1cs) {
        // 0x80072C74: nop
    
            goto L_80072C90;
    }
    // 0x80072C74: nop

    // 0x80072C78: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072C7C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072C80: nop

    // 0x80072C84: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80072C88: b           L_80072CD0
    // 0x80072C8C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
        goto L_80072CD0;
    // 0x80072C8C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
L_80072C90:
    // 0x80072C90: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072C94: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072C98: nop

    // 0x80072C9C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80072CA0: nop

    // 0x80072CA4: bc1f        L_80072CC4
    if (!c1cs) {
        // 0x80072CA8: nop
    
            goto L_80072CC4;
    }
    // 0x80072CA8: nop

    // 0x80072CAC: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072CB0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072CB4: nop

    // 0x80072CB8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80072CBC: b           L_80072CD0
    // 0x80072CC0: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
        goto L_80072CD0;
    // 0x80072CC0: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_80072CC4:
    // 0x80072CC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80072CC8: nop

    // 0x80072CCC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
L_80072CD0:
    // 0x80072CD0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80072CD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80072CD8: nop

    // 0x80072CDC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80072CE0: nop

    // 0x80072CE4: bc1f        L_80072CFC
    if (!c1cs) {
        // 0x80072CE8: nop
    
            goto L_80072CFC;
    }
    // 0x80072CE8: nop

    // 0x80072CEC: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80072CF0: nop

    // 0x80072CF4: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80072CF8: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
L_80072CFC:
    // 0x80072CFC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072D00: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072D04: nop

    // 0x80072D08: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80072D0C: nop

    // 0x80072D10: bc1f        L_80072D28
    if (!c1cs) {
        // 0x80072D14: nop
    
            goto L_80072D28;
    }
    // 0x80072D14: nop

    // 0x80072D18: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80072D1C: lwc1        $f10, 0x5618($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5618);
    // 0x80072D20: b           L_80072D6C
    // 0x80072D24: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
        goto L_80072D6C;
    // 0x80072D24: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
L_80072D28:
    // 0x80072D28: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80072D2C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80072D30: lwc1        $f5, 0x5620($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5620);
    // 0x80072D34: lwc1        $f4, 0x5624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5624);
    // 0x80072D38: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80072D3C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80072D40: lui         $at, 0x408E
    ctx->r1 = S32(0X408E << 16);
    // 0x80072D44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80072D48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80072D4C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80072D50: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80072D54: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80072D58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80072D5C: nop

    // 0x80072D60: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80072D64: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80072D68: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
L_80072D6C:
    // 0x80072D6C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80072D70: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80072D74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80072D78: lwc1        $f6, 0x51C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51C4);
    // 0x80072D7C: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80072D80: nop

    // 0x80072D84: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80072D88: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80072D8C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072D90: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80072D94: nop

    // 0x80072D98: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80072D9C: nop

    // 0x80072DA0: bc1f        L_80072DBC
    if (!c1cs) {
        // 0x80072DA4: nop
    
            goto L_80072DBC;
    }
    // 0x80072DA4: nop

    // 0x80072DA8: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    // 0x80072DAC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80072DB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80072DB4: b           L_80073130
    // 0x80072DB8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
        goto L_80073130;
    // 0x80072DB8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_80072DBC:
    // 0x80072DBC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80072DC0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80072DC4: nop

    // 0x80072DC8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80072DCC: nop

    // 0x80072DD0: bc1f        L_80072DF0
    if (!c1cs) {
        // 0x80072DD4: nop
    
            goto L_80072DF0;
    }
    // 0x80072DD4: nop

    // 0x80072DD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80072DDC: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    // 0x80072DE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80072DE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80072DE8: b           L_80073130
    // 0x80072DEC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_80073130;
    // 0x80072DEC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80072DF0:
    // 0x80072DF0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80072DF4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80072DF8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80072DFC: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80072E00: nop

    // 0x80072E04: beq         $t4, $at, L_80072E18
    if (ctx->r12 == ctx->r1) {
        // 0x80072E08: nop
    
            goto L_80072E18;
    }
    // 0x80072E08: nop

    // 0x80072E0C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x80072E10: bne         $t4, $at, L_80072E30
    if (ctx->r12 != ctx->r1) {
        // 0x80072E14: nop
    
            goto L_80072E30;
    }
    // 0x80072E14: nop

L_80072E18:
    // 0x80072E18: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80072E1C: sb          $t5, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r13;
    // 0x80072E20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072E24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072E28: b           L_80073130
    // 0x80072E2C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
        goto L_80073130;
    // 0x80072E2C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_80072E30:
    // 0x80072E30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072E34: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80072E38: nop

    // 0x80072E3C: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80072E40: nop

    // 0x80072E44: bne         $t7, $zero, L_80072E64
    if (ctx->r15 != 0) {
        // 0x80072E48: nop
    
            goto L_80072E64;
    }
    // 0x80072E48: nop

    // 0x80072E4C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80072E50: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    // 0x80072E54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072E58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80072E5C: b           L_80073130
    // 0x80072E60: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
        goto L_80073130;
    // 0x80072E60: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_80072E64:
    // 0x80072E64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072E68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80072E6C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80072E70: nop

    // 0x80072E74: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80072E78: nop

    // 0x80072E7C: bc1f        L_80073044
    if (!c1cs) {
        // 0x80072E80: nop
    
            goto L_80073044;
    }
    // 0x80072E80: nop

    // 0x80072E84: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80072E88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072E8C: nop

    // 0x80072E90: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80072E94: nop

    // 0x80072E98: bc1f        L_80073044
    if (!c1cs) {
        // 0x80072E9C: nop
    
            goto L_80073044;
    }
    // 0x80072E9C: nop

    // 0x80072EA0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80072EA4: lh          $t9, -0x1F64($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F64);
    // 0x80072EA8: nop

    // 0x80072EAC: bne         $t9, $zero, L_80073024
    if (ctx->r25 != 0) {
        // 0x80072EB0: nop
    
            goto L_80073024;
    }
    // 0x80072EB0: nop

    // 0x80072EB4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80072EB8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80072EBC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80072EC0: lwc1        $f10, 0x51CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X51CC);
    // 0x80072EC4: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80072EC8: nop

    // 0x80072ECC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80072ED0: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x80072ED4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072ED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80072EDC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80072EE0: nop

    // 0x80072EE4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80072EE8: nop

    // 0x80072EEC: bc1f        L_80073004
    if (!c1cs) {
        // 0x80072EF0: nop
    
            goto L_80073004;
    }
    // 0x80072EF0: nop

    // 0x80072EF4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80072EF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072EFC: nop

    // 0x80072F00: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80072F04: nop

    // 0x80072F08: bc1f        L_80073004
    if (!c1cs) {
        // 0x80072F0C: nop
    
            goto L_80073004;
    }
    // 0x80072F0C: nop

    // 0x80072F10: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80072F14: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80072F18: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80072F1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072F20: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80072F24: nop

    // 0x80072F28: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80072F2C: nop

    // 0x80072F30: bc1t        L_80072F8C
    if (c1cs) {
        // 0x80072F34: nop
    
            goto L_80072F8C;
    }
    // 0x80072F34: nop

    // 0x80072F38: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80072F3C: lwc1        $f18, 0x5628($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5628);
    // 0x80072F40: nop

    // 0x80072F44: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x80072F48: nop

    // 0x80072F4C: bc1t        L_80072F8C
    if (c1cs) {
        // 0x80072F50: nop
    
            goto L_80072F8C;
    }
    // 0x80072F50: nop

    // 0x80072F54: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80072F58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80072F5C: nop

    // 0x80072F60: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80072F64: nop

    // 0x80072F68: bc1f        L_80072FA4
    if (!c1cs) {
        // 0x80072F6C: nop
    
            goto L_80072FA4;
    }
    // 0x80072F6C: nop

    // 0x80072F70: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80072F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80072F78: nop

    // 0x80072F7C: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x80072F80: nop

    // 0x80072F84: bc1f        L_80072FA4
    if (!c1cs) {
        // 0x80072F88: nop
    
            goto L_80072FA4;
    }
    // 0x80072F88: nop

L_80072F8C:
    // 0x80072F8C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80072F90: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    // 0x80072F94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072F98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072F9C: b           L_80072FFC
    // 0x80072FA0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
        goto L_80072FFC;
    // 0x80072FA0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_80072FA4:
    // 0x80072FA4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80072FA8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80072FAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80072FB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80072FB4: lwc1        $f16, 0x1C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80072FB8: nop

    // 0x80072FBC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80072FC0: nop

    // 0x80072FC4: bc1f        L_80072FE4
    if (!c1cs) {
        // 0x80072FC8: nop
    
            goto L_80072FE4;
    }
    // 0x80072FC8: nop

    // 0x80072FCC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80072FD0: sb          $t4, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r12;
    // 0x80072FD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072FD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80072FDC: b           L_80072FFC
    // 0x80072FE0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
        goto L_80072FFC;
    // 0x80072FE0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_80072FE4:
    // 0x80072FE4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80072FE8: sb          $t5, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r13;
    // 0x80072FEC: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80072FF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80072FF4: nop

    // 0x80072FF8: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80072FFC:
    // 0x80072FFC: b           L_8007301C
    // 0x80073000: nop

        goto L_8007301C;
    // 0x80073000: nop

L_80073004:
    // 0x80073004: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80073008: sb          $t6, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r14;
    // 0x8007300C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80073010: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80073014: nop

    // 0x80073018: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_8007301C:
    // 0x8007301C: b           L_8007303C
    // 0x80073020: nop

        goto L_8007303C;
    // 0x80073020: nop

L_80073024:
    // 0x80073024: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80073028: sb          $t7, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r15;
    // 0x8007302C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80073030: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80073034: nop

    // 0x80073038: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_8007303C:
    // 0x8007303C: b           L_80073130
    // 0x80073040: nop

        goto L_80073130;
    // 0x80073040: nop

L_80073044:
    // 0x80073044: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80073048: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007304C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80073050: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80073054: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80073058: nop

    // 0x8007305C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80073060: nop

    // 0x80073064: bc1t        L_800730C0
    if (c1cs) {
        // 0x80073068: nop
    
            goto L_800730C0;
    }
    // 0x80073068: nop

    // 0x8007306C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80073070: lwc1        $f4, 0x562C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X562C);
    // 0x80073074: nop

    // 0x80073078: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x8007307C: nop

    // 0x80073080: bc1t        L_800730C0
    if (c1cs) {
        // 0x80073084: nop
    
            goto L_800730C0;
    }
    // 0x80073084: nop

    // 0x80073088: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x8007308C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80073090: nop

    // 0x80073094: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80073098: nop

    // 0x8007309C: bc1f        L_800730D8
    if (!c1cs) {
        // 0x800730A0: nop
    
            goto L_800730D8;
    }
    // 0x800730A0: nop

    // 0x800730A4: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x800730A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800730AC: nop

    // 0x800730B0: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x800730B4: nop

    // 0x800730B8: bc1f        L_800730D8
    if (!c1cs) {
        // 0x800730BC: nop
    
            goto L_800730D8;
    }
    // 0x800730BC: nop

L_800730C0:
    // 0x800730C0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800730C4: sb          $t9, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r25;
    // 0x800730C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800730CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800730D0: b           L_80073130
    // 0x800730D4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
        goto L_80073130;
    // 0x800730D4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_800730D8:
    // 0x800730D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800730DC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800730E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800730E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800730E8: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800730EC: nop

    // 0x800730F0: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800730F4: nop

    // 0x800730F8: bc1f        L_80073118
    if (!c1cs) {
        // 0x800730FC: nop
    
            goto L_80073118;
    }
    // 0x800730FC: nop

    // 0x80073100: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80073104: sb          $t1, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r9;
    // 0x80073108: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007310C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80073110: b           L_80073130
    // 0x80073114: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_80073130;
    // 0x80073114: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80073118:
    // 0x80073118: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8007311C: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    // 0x80073120: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x80073124: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80073128: nop

    // 0x8007312C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_80073130:
    // 0x80073130: lb          $s0, 0x37($sp)
    ctx->r16 = MEM_B(ctx->r29, 0X37);
    // 0x80073134: nop

    // 0x80073138: beq         $s0, $zero, L_8007316C
    if (ctx->r16 == 0) {
        // 0x8007313C: nop
    
            goto L_8007316C;
    }
    // 0x8007313C: nop

    // 0x80073140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80073144: beq         $s0, $at, L_80073224
    if (ctx->r16 == ctx->r1) {
        // 0x80073148: nop
    
            goto L_80073224;
    }
    // 0x80073148: nop

    // 0x8007314C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80073150: beq         $s0, $at, L_800732D8
    if (ctx->r16 == ctx->r1) {
        // 0x80073154: nop
    
            goto L_800732D8;
    }
    // 0x80073154: nop

    // 0x80073158: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007315C: beq         $s0, $at, L_8007337C
    if (ctx->r16 == ctx->r1) {
        // 0x80073160: nop
    
            goto L_8007337C;
    }
    // 0x80073160: nop

    // 0x80073164: b           L_80073428
    // 0x80073168: nop

        goto L_80073428;
    // 0x80073168: nop

L_8007316C:
    // 0x8007316C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073170: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073174: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073178: nop

    // 0x8007317C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80073180: nop

    // 0x80073184: bc1f        L_800731A8
    if (!c1cs) {
        // 0x80073188: nop
    
            goto L_800731A8;
    }
    // 0x80073188: nop

    // 0x8007318C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073190: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073194: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073198: nop

    // 0x8007319C: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800731A0: b           L_800731F0
    // 0x800731A4: swc1        $f10, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f10.u32l;
        goto L_800731F0;
    // 0x800731A4: swc1        $f10, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f10.u32l;
L_800731A8:
    // 0x800731A8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800731AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800731B0: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x800731B4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x800731B8: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800731BC: nop

    // 0x800731C0: bc1f        L_800731E4
    if (!c1cs) {
        // 0x800731C4: nop
    
            goto L_800731E4;
    }
    // 0x800731C4: nop

    // 0x800731C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800731CC: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x800731D0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800731D4: nop

    // 0x800731D8: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800731DC: b           L_800731F0
    // 0x800731E0: swc1        $f10, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f10.u32l;
        goto L_800731F0;
    // 0x800731E0: swc1        $f10, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f10.u32l;
L_800731E4:
    // 0x800731E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800731E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800731EC: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
L_800731F0:
    // 0x800731F0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800731F4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800731F8: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x800731FC: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80073200: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80073204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073208: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007320C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80073210: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073214: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80073218: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
    // 0x8007321C: b           L_80073428
    // 0x80073220: nop

        goto L_80073428;
    // 0x80073220: nop

L_80073224:
    // 0x80073224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073228: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007322C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073230: nop

    // 0x80073234: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80073238: nop

    // 0x8007323C: bc1f        L_80073260
    if (!c1cs) {
        // 0x80073240: nop
    
            goto L_80073260;
    }
    // 0x80073240: nop

    // 0x80073244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073248: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007324C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073250: nop

    // 0x80073254: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80073258: b           L_800732A8
    // 0x8007325C: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
        goto L_800732A8;
    // 0x8007325C: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
L_80073260:
    // 0x80073260: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073264: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073268: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007326C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80073270: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80073274: nop

    // 0x80073278: bc1f        L_8007329C
    if (!c1cs) {
        // 0x8007327C: nop
    
            goto L_8007329C;
    }
    // 0x8007327C: nop

    // 0x80073280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073284: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073288: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007328C: nop

    // 0x80073290: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80073294: b           L_800732A8
    // 0x80073298: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
        goto L_800732A8;
    // 0x80073298: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
L_8007329C:
    // 0x8007329C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800732A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800732A4: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_800732A8:
    // 0x800732A8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800732AC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800732B0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800732B4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800732B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800732BC: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x800732C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800732C4: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800732C8: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800732CC: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
    // 0x800732D0: b           L_80073428
    // 0x800732D4: nop

        goto L_80073428;
    // 0x800732D4: nop

L_800732D8:
    // 0x800732D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800732DC: lwc1        $f4, 0x75E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x800732E0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800732E4: nop

    // 0x800732E8: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x800732EC: nop

    // 0x800732F0: bc1f        L_80073314
    if (!c1cs) {
        // 0x800732F4: nop
    
            goto L_80073314;
    }
    // 0x800732F4: nop

    // 0x800732F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800732FC: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073300: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073304: nop

    // 0x80073308: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8007330C: b           L_8007335C
    // 0x80073310: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
        goto L_8007335C;
    // 0x80073310: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_80073314:
    // 0x80073314: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007331C: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073320: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x80073324: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80073328: nop

    // 0x8007332C: bc1f        L_80073350
    if (!c1cs) {
        // 0x80073330: nop
    
            goto L_80073350;
    }
    // 0x80073330: nop

    // 0x80073334: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073338: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007333C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073340: nop

    // 0x80073344: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80073348: b           L_8007335C
    // 0x8007334C: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
        goto L_8007335C;
    // 0x8007334C: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_80073350:
    // 0x80073350: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80073354: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073358: swc1        $f4, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f4.u32l;
L_8007335C:
    // 0x8007335C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073360: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073364: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80073368: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007336C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80073370: swc1        $f6, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f6.u32l;
    // 0x80073374: b           L_80073428
    // 0x80073378: nop

        goto L_80073428;
    // 0x80073378: nop

L_8007337C:
    // 0x8007337C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073380: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073384: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073388: nop

    // 0x8007338C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80073390: swc1        $f4, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f4.u32l;
    // 0x80073394: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073398: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x8007339C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733A0: lwc1        $f10, 0x762C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X762C);
    // 0x800733A4: nop

    // 0x800733A8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800733AC: nop

    // 0x800733B0: bc1f        L_800733CC
    if (!c1cs) {
        // 0x800733B4: nop
    
            goto L_800733CC;
    }
    // 0x800733B4: nop

    // 0x800733B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733BC: lwc1        $f6, 0x762C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X762C);
    // 0x800733C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733C4: b           L_80073408
    // 0x800733C8: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
        goto L_80073408;
    // 0x800733C8: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
L_800733CC:
    // 0x800733CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733D0: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x800733D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733D8: lwc1        $f18, 0x762C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X762C);
    // 0x800733DC: nop

    // 0x800733E0: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x800733E4: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x800733E8: nop

    // 0x800733EC: bc1f        L_80073408
    if (!c1cs) {
        // 0x800733F0: nop
    
            goto L_80073408;
    }
    // 0x800733F0: nop

    // 0x800733F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800733F8: lwc1        $f8, 0x762C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X762C);
    // 0x800733FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073400: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80073404: swc1        $f10, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f10.u32l;
L_80073408:
    // 0x80073408: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007340C: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073410: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80073414: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073418: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8007341C: swc1        $f16, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f16.u32l;
    // 0x80073420: b           L_80073428
    // 0x80073424: nop

        goto L_80073428;
    // 0x80073424: nop

L_80073428:
    // 0x80073428: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8007342C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073430: swc1        $f4, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f4.u32l;
    // 0x80073434: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80073438: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007343C: nop

    // 0x80073440: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80073444: nop

    // 0x80073448: beq         $t4, $zero, L_80073490
    if (ctx->r12 == 0) {
        // 0x8007344C: nop
    
            goto L_80073490;
    }
    // 0x8007344C: nop

    // 0x80073450: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80073454: addiu       $t5, $t5, 0x75D8
    ctx->r13 = ADD32(ctx->r13, 0X75D8);
    // 0x80073458: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8007345C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80073460: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80073464: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x80073468: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8007346C: addiu       $a3, $a3, 0x75C0
    ctx->r7 = ADD32(ctx->r7, 0X75C0);
    // 0x80073470: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80073474: jal         0x80072A08
    // 0x80073478: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_80072A08(rdram, ctx);
        goto after_0;
    // 0x80073478: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8007347C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073480: jal         0x80071B50
    // 0x80073484: nop

    func_80071B50(rdram, ctx);
        goto after_1;
    // 0x80073484: nop

    after_1:
    // 0x80073488: b           L_800734DC
    // 0x8007348C: nop

        goto L_800734DC;
    // 0x8007348C: nop

L_80073490:
    // 0x80073490: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80073494: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80073498: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x8007349C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800734A0: nop

    // 0x800734A4: beq         $t8, $at, L_800734C4
    if (ctx->r24 == ctx->r1) {
        // 0x800734A8: nop
    
            goto L_800734C4;
    }
    // 0x800734A8: nop

    // 0x800734AC: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x800734B0: beq         $t8, $at, L_800734C4
    if (ctx->r24 == ctx->r1) {
        // 0x800734B4: nop
    
            goto L_800734C4;
    }
    // 0x800734B4: nop

    // 0x800734B8: addiu       $at, $zero, 0x217
    ctx->r1 = ADD32(0, 0X217);
    // 0x800734BC: bne         $t8, $at, L_800734D4
    if (ctx->r24 != ctx->r1) {
        // 0x800734C0: nop
    
            goto L_800734D4;
    }
    // 0x800734C0: nop

L_800734C4:
    // 0x800734C4: jal         0x80071CF4
    // 0x800734C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80071CF4(rdram, ctx);
        goto after_2;
    // 0x800734C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800734CC: b           L_800734DC
    // 0x800734D0: nop

        goto L_800734DC;
    // 0x800734D0: nop

L_800734D4:
    // 0x800734D4: jal         0x80071CF4
    // 0x800734D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80071CF4(rdram, ctx);
        goto after_3;
    // 0x800734D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_800734DC:
    // 0x800734DC: jal         0x800721CC
    // 0x800734E0: nop

    func_800721CC(rdram, ctx);
        goto after_4;
    // 0x800734E0: nop

    after_4:
    // 0x800734E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800734E8: lwc1        $f12, -0x1EBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x800734EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800734F0: lwc1        $f14, 0x75B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x800734F4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800734F8: jal         0x80071A88
    // 0x800734FC: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    func_80071A88(rdram, ctx);
        goto after_5;
    // 0x800734FC: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    after_5:
    // 0x80073500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073504: swc1        $f0, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f0.u32l;
    // 0x80073508: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007350C: lwc1        $f8, 0x75A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80073510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073514: swc1        $f8, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f8.u32l;
    // 0x80073518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007351C: lwc1        $f10, 0x75B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80073520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073524: swc1        $f10, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f10.u32l;
    // 0x80073528: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007352C: lwc1        $f6, 0x75D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80073530: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073534: swc1        $f6, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f6.u32l;
    // 0x80073538: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007353C: lwc1        $f18, 0x75C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80073540: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073544: swc1        $f18, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f18.u32l;
    // 0x80073548: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007354C: lwc1        $f16, 0x75C8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x80073550: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073554: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80073558: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007355C: lwc1        $f4, 0x75D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x80073560: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073564: swc1        $f4, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f4.u32l;
    // 0x80073568: b           L_80073570
    // 0x8007356C: nop

        goto L_80073570;
    // 0x8007356C: nop

L_80073570:
    // 0x80073570: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80073574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80073578: jr          $ra
    // 0x8007357C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8007357C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800E2400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2400: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E2404: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E2408: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E240C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E2410: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E2414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2418: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E241C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E242C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E2434: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2438: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E243C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800E2440: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2444: nop

    // 0x800E2448: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E244C: nop

    // 0x800E2450: bne         $t1, $zero, L_800E24FC
    if (ctx->r9 != 0) {
        // 0x800E2454: nop
    
            goto L_800E24FC;
    }
    // 0x800E2454: nop

    // 0x800E2458: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E245C: nop

    // 0x800E2460: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E2464: nop

    // 0x800E2468: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E246C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E2470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2474: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E2478: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E247C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2480: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E2484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2488: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800E248C: jal         0x8001C0EC
    // 0x800E2490: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E2490: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E2494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E249C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E24A0: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E24A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E24A8: jal         0x8001ABF4
    // 0x800E24AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E24AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E24B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E24B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E24B8: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E24BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E24C0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E24C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E24C8: jal         0x8001ABF4
    // 0x800E24CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E24CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E24D0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800E24D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E24D8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E24DC: nop

    // 0x800E24E0: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E24E4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800E24E8: nop

    // 0x800E24EC: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800E24F0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E24F4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E24F8: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E24FC:
    // 0x800E24FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2504: jal         0x8002A8B4
    // 0x800E2508: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800E2508: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800E250C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2510: nop

    // 0x800E2514: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E2518: nop

    // 0x800E251C: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x800E2520: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2524: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2528: jal         0x8001B62C
    // 0x800E252C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800E252C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E2530: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E2534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E2538: nop

    // 0x800E253C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800E2540: nop

    // 0x800E2544: bc1f        L_800E2718
    if (!c1cs) {
        // 0x800E2548: nop
    
            goto L_800E2718;
    }
    // 0x800E2548: nop

    // 0x800E254C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2554: jal         0x8001B62C
    // 0x800E2558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x800E2558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800E255C: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x800E2560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E2564: nop

    // 0x800E2568: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800E256C: nop

    // 0x800E2570: bc1f        L_800E25B8
    if (!c1cs) {
        // 0x800E2574: nop
    
            goto L_800E25B8;
    }
    // 0x800E2574: nop

    // 0x800E2578: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800E257C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E2580: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800E2584: nop

    // 0x800E2588: bne         $t3, $at, L_800E25B0
    if (ctx->r11 != ctx->r1) {
        // 0x800E258C: nop
    
            goto L_800E25B0;
    }
    // 0x800E258C: nop

    // 0x800E2590: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2594: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800E2598: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x800E259C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E25A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E25A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E25A8: jal         0x80029EF8
    // 0x800E25AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x800E25AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
L_800E25B0:
    // 0x800E25B0: b           L_800E25F0
    // 0x800E25B4: nop

        goto L_800E25F0;
    // 0x800E25B4: nop

L_800E25B8:
    // 0x800E25B8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800E25BC: nop

    // 0x800E25C0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800E25C4: nop

    // 0x800E25C8: bne         $t6, $zero, L_800E25F0
    if (ctx->r14 != 0) {
        // 0x800E25CC: nop
    
            goto L_800E25F0;
    }
    // 0x800E25CC: nop

    // 0x800E25D0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800E25D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E25D8: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800E25DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E25E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E25E4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x800E25E8: jal         0x80029EF8
    // 0x800E25EC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800E25EC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
L_800E25F0:
    // 0x800E25F0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E25F4: nop

    // 0x800E25F8: lwc1        $f16, 0x28($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800E25FC: nop

    // 0x800E2600: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x800E2604: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E2608: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E260C: nop

    // 0x800E2610: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
    // 0x800E2614: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2618: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E261C: jal         0x80029C40
    // 0x800E2620: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800E2620: nop

    after_8:
    // 0x800E2624: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E2628: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E262C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2630: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2638: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E263C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E2640: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E2644: jal         0x80029018
    // 0x800E2648: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800E2648: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x800E264C: beq         $v0, $zero, L_800E2670
    if (ctx->r2 == 0) {
        // 0x800E2650: nop
    
            goto L_800E2670;
    }
    // 0x800E2650: nop

    // 0x800E2654: jal         0x800297DC
    // 0x800E2658: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800E2658: nop

    after_10:
    // 0x800E265C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2664: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E2668: jal         0x80029824
    // 0x800E266C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800E266C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800E2670:
    // 0x800E2670: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800E2674: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2678: nop

    // 0x800E267C: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x800E2680: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E2684: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2688: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E268C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E2690: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E2694: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E2698: jal         0x80029F58
    // 0x800E269C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800E269C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x800E26A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E26A4: bne         $v0, $at, L_800E26DC
    if (ctx->r2 != ctx->r1) {
        // 0x800E26A8: nop
    
            goto L_800E26DC;
    }
    // 0x800E26A8: nop

    // 0x800E26AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E26B0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800E26B4: nop

    // 0x800E26B8: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x800E26BC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800E26C0: nop

    // 0x800E26C4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E26C8: nop

    // 0x800E26CC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E26D0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E26D4: nop

    // 0x800E26D8: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
L_800E26DC:
    // 0x800E26DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E26E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E26E4: jal         0x8001B4AC
    // 0x800E26E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x800E26E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800E26EC: beq         $v0, $zero, L_800E2718
    if (ctx->r2 == 0) {
        // 0x800E26F0: nop
    
            goto L_800E2718;
    }
    // 0x800E26F0: nop

    // 0x800E26F4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E26F8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800E26FC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E2700: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2704: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E2708: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
    // 0x800E270C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E2710: nop

    // 0x800E2714: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E2718:
    // 0x800E2718: b           L_800E2720
    // 0x800E271C: nop

        goto L_800E2720;
    // 0x800E271C: nop

L_800E2720:
    // 0x800E2720: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2724: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E2728: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E272C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E2730: jr          $ra
    // 0x800E2734: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800E2734: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800A1FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1FCC: jal         0x8001BB34
    // 0x800A1FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800A1FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800A1FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1FDC: jal         0x8002B0E4
    // 0x800A1FE0: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800A1FE0: nop

    after_1:
    // 0x800A1FE4: b           L_800A1FEC
    // 0x800A1FE8: nop

        goto L_800A1FEC;
    // 0x800A1FE8: nop

L_800A1FEC:
    // 0x800A1FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1FF4: jr          $ra
    // 0x800A1FF8: nop

    return;
    // 0x800A1FF8: nop

;}
RECOMP_FUNC void func_8009A1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A1F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009A1FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009A200: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A204: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A208: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A20C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A214: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A21C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A220: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009A224: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009A228: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009A22C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009A238: jal         0x80098864
    // 0x8009A23C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098864(rdram, ctx);
        goto after_0;
    // 0x8009A23C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8009A240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A248: jal         0x8002AA94
    // 0x8009A24C: nop

    func_8002AA94(rdram, ctx);
        goto after_1;
    // 0x8009A24C: nop

    after_1:
    // 0x8009A250: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009A254: nop

    // 0x8009A258: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009A25C: nop

    // 0x8009A260: bne         $t1, $zero, L_8009A298
    if (ctx->r9 != 0) {
        // 0x8009A264: nop
    
            goto L_8009A298;
    }
    // 0x8009A264: nop

    // 0x8009A268: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A26C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009A270: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009A274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A278: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8009A27C: addiu       $t4, $t4, 0x6944
    ctx->r12 = ADD32(ctx->r12, 0X6944);
    // 0x8009A280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A284: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8009A288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009A28C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009A290: jal         0x8001C0EC
    // 0x8009A294: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8009A294: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    after_2:
L_8009A298:
    // 0x8009A298: b           L_8009A2A0
    // 0x8009A29C: nop

        goto L_8009A2A0;
    // 0x8009A29C: nop

L_8009A2A0:
    // 0x8009A2A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009A2A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009A2A8: jr          $ra
    // 0x8009A2AC: nop

    return;
    // 0x8009A2AC: nop

;}
RECOMP_FUNC void func_800F2E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2E20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F2E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F2E28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2E2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2E30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F2E34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2E38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2E3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2E40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2E44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2E48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2E4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2E50: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F2E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2E5C: jal         0x800281A4
    // 0x800F2E60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800F2E60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800F2E64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800F2E68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800F2E6C: jal         0x8002B114
    // 0x800F2E70: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x800F2E70: nop

    after_1:
    // 0x800F2E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2E7C: jal         0x8002B0E4
    // 0x800F2E80: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800F2E80: nop

    after_2:
    // 0x800F2E84: b           L_800F2E8C
    // 0x800F2E88: nop

        goto L_800F2E8C;
    // 0x800F2E88: nop

L_800F2E8C:
    // 0x800F2E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F2E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F2E94: jr          $ra
    // 0x800F2E98: nop

    return;
    // 0x800F2E98: nop

;}
RECOMP_FUNC void func_800FD874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD874: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FD878: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FD87C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FD880: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FD884: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FD888: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FD88C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD890: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FD894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD898: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FD89C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FD8A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FD8A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FD8A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FD8AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FD8B0: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800FD8B4: nop

    // 0x800FD8B8: bne         $t1, $at, L_800FD918
    if (ctx->r9 != ctx->r1) {
        // 0x800FD8BC: nop
    
            goto L_800FD918;
    }
    // 0x800FD8BC: nop

    // 0x800FD8C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD8C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD8C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FD8CC: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800FD8D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FD8D4: jal         0x800175F0
    // 0x800FD8D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800FD8D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800FD8DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD8E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD8E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FD8E8: jal         0x800FD04C
    // 0x800FD8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800FD04C(rdram, ctx);
        goto after_1;
    // 0x800FD8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800FD8F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD8F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD8F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FD8FC: jal         0x800FD04C
    // 0x800FD900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800FD04C(rdram, ctx);
        goto after_2;
    // 0x800FD900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800FD904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD90C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800FD910: jal         0x800FD04C
    // 0x800FD914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800FD04C(rdram, ctx);
        goto after_3;
    // 0x800FD914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800FD918:
    // 0x800FD918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD91C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD920: jal         0x8002B0E4
    // 0x800FD924: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800FD924: nop

    after_4:
    // 0x800FD928: b           L_800FD930
    // 0x800FD92C: nop

        goto L_800FD930;
    // 0x800FD92C: nop

L_800FD930:
    // 0x800FD930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FD934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FD938: jr          $ra
    // 0x800FD93C: nop

    return;
    // 0x800FD93C: nop

;}
RECOMP_FUNC void func_800A5A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A5A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5A88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A5A8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A5A90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A5A94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A5A98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5A9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A5AA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5AA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A5AA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A5AAC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A5AB0: nop

    // 0x800A5AB4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A5AB8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5ABC: nop

    // 0x800A5AC0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800A5AC4: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x800A5AC8: beq         $at, $zero, L_800A5B4C
    if (ctx->r1 == 0) {
        // 0x800A5ACC: nop
    
            goto L_800A5B4C;
    }
    // 0x800A5ACC: nop

    // 0x800A5AD0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A5AD4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A5AD8: addu        $at, $at, $t0
    gpr jr_addend_800A5AE4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A5ADC: lw          $t0, 0x49A4($at)
    ctx->r8 = ADD32(ctx->r1, 0X49A4);
    // 0x800A5AE0: nop

    // 0x800A5AE4: jr          $t0
    // 0x800A5AE8: nop

    switch (jr_addend_800A5AE4 >> 2) {
        case 0: goto L_800A5AEC; break;
        case 1: goto L_800A5B1C; break;
        case 2: goto L_800A5AFC; break;
        case 3: goto L_800A5B0C; break;
        case 4: goto L_800A5B2C; break;
        case 5: goto L_800A5B4C; break;
        case 6: goto L_800A5B4C; break;
        case 7: goto L_800A5B4C; break;
        case 8: goto L_800A5B3C; break;
        default: switch_error(__func__, 0x800A5AE4, 0x801149A4);
    }
    // 0x800A5AE8: nop

L_800A5AEC:
    // 0x800A5AEC: jal         0x800A4964
    // 0x800A5AF0: nop

    func_800A4964(rdram, ctx);
        goto after_0;
    // 0x800A5AF0: nop

    after_0:
    // 0x800A5AF4: b           L_800A5B5C
    // 0x800A5AF8: nop

        goto L_800A5B5C;
    // 0x800A5AF8: nop

L_800A5AFC:
    // 0x800A5AFC: jal         0x800A4AB8
    // 0x800A5B00: nop

    func_800A4AB8(rdram, ctx);
        goto after_1;
    // 0x800A5B00: nop

    after_1:
    // 0x800A5B04: b           L_800A5B5C
    // 0x800A5B08: nop

        goto L_800A5B5C;
    // 0x800A5B08: nop

L_800A5B0C:
    // 0x800A5B0C: jal         0x800A4C54
    // 0x800A5B10: nop

    func_800A4C54(rdram, ctx);
        goto after_2;
    // 0x800A5B10: nop

    after_2:
    // 0x800A5B14: b           L_800A5B5C
    // 0x800A5B18: nop

        goto L_800A5B5C;
    // 0x800A5B18: nop

L_800A5B1C:
    // 0x800A5B1C: jal         0x800A528C
    // 0x800A5B20: nop

    func_800A528C(rdram, ctx);
        goto after_3;
    // 0x800A5B20: nop

    after_3:
    // 0x800A5B24: b           L_800A5B5C
    // 0x800A5B28: nop

        goto L_800A5B5C;
    // 0x800A5B28: nop

L_800A5B2C:
    // 0x800A5B2C: jal         0x800A4F08
    // 0x800A5B30: nop

    func_800A4F08(rdram, ctx);
        goto after_4;
    // 0x800A5B30: nop

    after_4:
    // 0x800A5B34: b           L_800A5B5C
    // 0x800A5B38: nop

        goto L_800A5B5C;
    // 0x800A5B38: nop

L_800A5B3C:
    // 0x800A5B3C: jal         0x800A54B4
    // 0x800A5B40: nop

    func_800A54B4(rdram, ctx);
        goto after_5;
    // 0x800A5B40: nop

    after_5:
    // 0x800A5B44: b           L_800A5B5C
    // 0x800A5B48: nop

        goto L_800A5B5C;
    // 0x800A5B48: nop

L_800A5B4C:
    // 0x800A5B4C: jal         0x800A5760
    // 0x800A5B50: nop

    func_800A5760(rdram, ctx);
        goto after_6;
    // 0x800A5B50: nop

    after_6:
    // 0x800A5B54: b           L_800A5B5C
    // 0x800A5B58: nop

        goto L_800A5B5C;
    // 0x800A5B58: nop

L_800A5B5C:
    // 0x800A5B5C: b           L_800A5B64
    // 0x800A5B60: nop

        goto L_800A5B64;
    // 0x800A5B60: nop

L_800A5B64:
    // 0x800A5B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A5B6C: jr          $ra
    // 0x800A5B70: nop

    return;
    // 0x800A5B70: nop

;}
RECOMP_FUNC void func_800A6D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A6D20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6D24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A6D28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A6D2C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A6D30: nop

    // 0x800A6D34: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800A6D38: nop

    // 0x800A6D3C: bgez        $t7, L_800A6D60
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800A6D40: nop
    
            goto L_800A6D60;
    }
    // 0x800A6D40: nop

    // 0x800A6D44: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800A6D48: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A6D4C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800A6D50: nop

    // 0x800A6D54: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A6D58: b           L_800A6DB0
    // 0x800A6D5C: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
        goto L_800A6DB0;
    // 0x800A6D5C: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
L_800A6D60:
    // 0x800A6D60: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800A6D64: nop

    // 0x800A6D68: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800A6D6C: nop

    // 0x800A6D70: blez        $t0, L_800A6D94
    if (SIGNED(ctx->r8) <= 0) {
        // 0x800A6D74: nop
    
            goto L_800A6D94;
    }
    // 0x800A6D74: nop

    // 0x800A6D78: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800A6D7C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A6D80: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800A6D84: nop

    // 0x800A6D88: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A6D8C: b           L_800A6DB0
    // 0x800A6D90: swc1        $f18, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f18.u32l;
        goto L_800A6DB0;
    // 0x800A6D90: swc1        $f18, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f18.u32l;
L_800A6D94:
    // 0x800A6D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6D9C: jal         0x8002A46C
    // 0x800A6DA0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800A6DA0: nop

    after_0:
    // 0x800A6DA4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800A6DA8: nop

    // 0x800A6DAC: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
L_800A6DB0:
    // 0x800A6DB0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800A6DB4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A6DB8: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A6DBC: jal         0x80015538
    // 0x800A6DC0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A6DC0: nop

    after_1:
    // 0x800A6DC4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800A6DC8: nop

    // 0x800A6DCC: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800A6DD0: b           L_800A6DD8
    // 0x800A6DD4: nop

        goto L_800A6DD8;
    // 0x800A6DD4: nop

L_800A6DD8:
    // 0x800A6DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A6DE0: jr          $ra
    // 0x800A6DE4: nop

    return;
    // 0x800A6DE4: nop

;}
RECOMP_FUNC void func_800F7894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7894: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F7898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F789C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F78A0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F78A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F78A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F78AC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F78B0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F78B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F78B8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F78BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F78C0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F78C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F78C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F78CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F78D0: addiu       $a1, $a1, 0x3784
    ctx->r5 = ADD32(ctx->r5, 0X3784);
    // 0x800F78D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F78D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F78DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F78E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F78E4: jal         0x80027464
    // 0x800F78E8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F78E8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F78EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F78F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F78F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F78F8: beq         $t0, $at, L_800F79F4
    if (ctx->r8 == ctx->r1) {
        // 0x800F78FC: nop
    
            goto L_800F79F4;
    }
    // 0x800F78FC: nop

    // 0x800F7900: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F7904: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F7908: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F790C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F7910: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F7914: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F7918: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F791C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F7920: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800F7924: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F7928: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F792C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800F7930: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F7934: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F7938: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x800F793C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F7940: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800F7944: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F7948: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F794C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F7950: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F7954: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F7958: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F795C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7960: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F7964: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x800F7968: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F796C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7970: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800F7974: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800F7978: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F797C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800F7980: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F7984: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F7988: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x800F798C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F7990: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7994: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F7998: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F799C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F79A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F79A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F79A8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F79AC: sh          $zero, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = 0;
    // 0x800F79B0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800F79B4: addiu       $t2, $t2, -0x46B0
    ctx->r10 = ADD32(ctx->r10, -0X46B0);
    // 0x800F79B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F79BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800F79C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F79C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F79C8: jal         0x8001C0EC
    // 0x800F79CC: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F79CC: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    after_1:
    // 0x800F79D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F79D4: jal         0x8001BBDC
    // 0x800F79D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800F79D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800F79DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F79E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F79E4: addiu       $a3, $a3, -0x4648
    ctx->r7 = ADD32(ctx->r7, -0X4648);
    // 0x800F79E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F79EC: jal         0x8001ABF4
    // 0x800F79F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F79F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800F79F4:
    // 0x800F79F4: b           L_800F79FC
    // 0x800F79F8: nop

        goto L_800F79FC;
    // 0x800F79F8: nop

L_800F79FC:
    // 0x800F79FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F7A04: jr          $ra
    // 0x800F7A08: nop

    return;
    // 0x800F7A08: nop

;}
RECOMP_FUNC void func_800F91A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F91A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F91A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F91AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F91B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F91B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F91B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F91BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F91C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F91C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F91C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F91CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F91D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F91D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F91D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F91DC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F91E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F91E4: nop

    // 0x800F91E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F91EC: nop

    // 0x800F91F0: bne         $t1, $zero, L_800F9234
    if (ctx->r9 != 0) {
        // 0x800F91F4: nop
    
            goto L_800F9234;
    }
    // 0x800F91F4: nop

    // 0x800F91F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F91FC: nop

    // 0x800F9200: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F9204: nop

    // 0x800F9208: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F920C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F9210: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9214: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800F9218: addiu       $t5, $t5, -0x4578
    ctx->r13 = ADD32(ctx->r13, -0X4578);
    // 0x800F921C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9220: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800F9224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F922C: jal         0x8001C0EC
    // 0x800F9230: addiu       $a3, $zero, 0x6A
    ctx->r7 = ADD32(0, 0X6A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F9230: addiu       $a3, $zero, 0x6A
    ctx->r7 = ADD32(0, 0X6A);
    after_0:
L_800F9234:
    // 0x800F9234: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9238: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F923C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9240: jal         0x8001B6BC
    // 0x800F9244: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x800F9244: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x800F9248: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F924C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800F9250: nop

    // 0x800F9254: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x800F9258: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F925C: nop

    // 0x800F9260: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800F9264: nop

    // 0x800F9268: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800F926C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F9270: nop

    // 0x800F9274: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800F9278: b           L_800F9280
    // 0x800F927C: nop

        goto L_800F9280;
    // 0x800F927C: nop

L_800F9280:
    // 0x800F9280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F9284: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F9288: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F928C: jr          $ra
    // 0x800F9290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800F9290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800AF620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF620: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AF624: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AF628: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800AF62C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800AF630: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800AF634: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800AF638: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800AF63C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800AF640: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800AF644: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AF648: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800AF64C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AF650: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AF654: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800AF658: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AF65C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800AF660: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AF664: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800AF668: addiu       $a1, $a1, 0x3994
    ctx->r5 = ADD32(ctx->r5, 0X3994);
    // 0x800AF66C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AF670: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800AF674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800AF678: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AF67C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AF680: jal         0x80027464
    // 0x800AF684: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800AF684: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800AF688: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800AF68C: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF690: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AF694: beq         $t1, $at, L_800AF7F8
    if (ctx->r9 == ctx->r1) {
        // 0x800AF698: nop
    
            goto L_800AF7F8;
    }
    // 0x800AF698: nop

    // 0x800AF69C: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF6A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF6A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AF6A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AF6AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AF6B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AF6B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AF6B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AF6BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AF6C0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800AF6C4: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF6C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF6CC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800AF6D0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AF6D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AF6D8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AF6DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AF6E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800AF6E4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AF6E8: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF6EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF6F0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800AF6F4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AF6F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AF6FC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AF700: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AF704: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AF708: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x800AF70C: sh          $t8, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r24;
    // 0x800AF710: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800AF714: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800AF718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AF71C: lh          $t1, 0xA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA);
    // 0x800AF720: nop

    // 0x800AF724: bne         $t1, $at, L_800AF754
    if (ctx->r9 != ctx->r1) {
        // 0x800AF728: nop
    
            goto L_800AF754;
    }
    // 0x800AF728: nop

    // 0x800AF72C: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF730: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF734: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800AF738: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AF73C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AF740: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AF744: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AF748: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AF74C: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x800AF750: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
L_800AF754:
    // 0x800AF754: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF758: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800AF75C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800AF760: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AF764: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AF768: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AF76C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AF770: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800AF774: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800AF778: lh          $t6, 0xA8($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XA8);
    // 0x800AF77C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800AF780: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800AF784: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AF788: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AF78C: nop

    // 0x800AF790: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800AF794: swc1        $f10, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f10.u32l;
    // 0x800AF798: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF79C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800AF7A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AF7A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AF7A8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800AF7AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AF7B0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800AF7B4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800AF7B8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800AF7BC: lwc1        $f20, 0xC($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800AF7C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF7C4: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800AF7C8: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF7CC: nop

    // 0x800AF7D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AF7D4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AF7D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AF7DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AF7E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AF7E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AF7E8: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x800AF7EC: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800AF7F0: jal         0x8001BB04
    // 0x800AF7F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x800AF7F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800AF7F8:
    // 0x800AF7F8: b           L_800AF800
    // 0x800AF7FC: nop

        goto L_800AF800;
    // 0x800AF7FC: nop

L_800AF800:
    // 0x800AF800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AF804: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800AF808: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800AF80C: jr          $ra
    // 0x800AF810: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AF810: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80071240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071240: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80071244: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80071248: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007124C: lb          $t6, 0x7A20($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A20);
    // 0x80071250: nop

    // 0x80071254: bne         $t6, $zero, L_80071264
    if (ctx->r14 != 0) {
        // 0x80071258: nop
    
            goto L_80071264;
    }
    // 0x80071258: nop

    // 0x8007125C: b           L_800713C0
    // 0x80071260: nop

        goto L_800713C0;
    // 0x80071260: nop

L_80071264:
    // 0x80071264: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80071268: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8007126C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071270: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80071274: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80071278: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8007127C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80071280: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80071284: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80071288: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007128C: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80071290: addiu       $t1, $t1, 0x53D0
    ctx->r9 = ADD32(ctx->r9, 0X53D0);
    // 0x80071294: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80071298: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007129C: lbu         $t3, 0x7A38($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X7A38);
    // 0x800712A0: nop

    // 0x800712A4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800712A8: beq         $t4, $zero, L_8007137C
    if (ctx->r12 == 0) {
        // 0x800712AC: nop
    
            goto L_8007137C;
    }
    // 0x800712AC: nop

    // 0x800712B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800712B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800712B8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800712BC: lw          $a1, 0x7A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A2C);
    // 0x800712C0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x800712C4: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x800712C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800712CC: jal         0x8006F570
    // 0x800712D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_0;
    // 0x800712D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800712D4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800712D8: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x800712DC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800712E0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800712E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800712E8: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800712EC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800712F0: lh          $a0, -0x48F8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X48F8);
    // 0x800712F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800712F8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800712FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80071300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80071304: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80071308: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007130C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80071310: lw          $a2, 0x7A34($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7A34);
    // 0x80071314: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80071318: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8007131C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80071320: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80071324: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    // 0x80071328: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8007132C: jal         0x8006F664
    // 0x80071330: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8006F664(rdram, ctx);
        goto after_1;
    // 0x80071330: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80071334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071338: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007133C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80071340: lw          $a1, 0x7A3C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A3C);
    // 0x80071344: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x80071348: addiu       $a2, $zero, 0xB0
    ctx->r6 = ADD32(0, 0XB0);
    // 0x8007134C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80071350: jal         0x8006F570
    // 0x80071354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_2;
    // 0x80071354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80071358: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007135C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80071360: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80071364: lw          $a1, 0x7A44($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A44);
    // 0x80071368: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x8007136C: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x80071370: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80071374: jal         0x8006F570
    // 0x80071378: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8006F570(rdram, ctx);
        goto after_3;
    // 0x80071378: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
L_8007137C:
    // 0x8007137C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80071380: lbu         $t9, 0x7A38($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7A38);
    // 0x80071384: nop

    // 0x80071388: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x8007138C: beq         $t0, $zero, L_800713B8
    if (ctx->r8 == 0) {
        // 0x80071390: nop
    
            goto L_800713B8;
    }
    // 0x80071390: nop

    // 0x80071394: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071398: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007139C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800713A0: lh          $a0, 0x7A40($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7A40);
    // 0x800713A4: addiu       $a1, $zero, 0x10A
    ctx->r5 = ADD32(0, 0X10A);
    // 0x800713A8: addiu       $a2, $zero, 0xB2
    ctx->r6 = ADD32(0, 0XB2);
    // 0x800713AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800713B0: jal         0x8006F570
    // 0x800713B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8006F570(rdram, ctx);
        goto after_4;
    // 0x800713B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
L_800713B8:
    // 0x800713B8: b           L_800713C0
    // 0x800713BC: nop

        goto L_800713C0;
    // 0x800713BC: nop

L_800713C0:
    // 0x800713C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800713C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800713C8: jr          $ra
    // 0x800713CC: nop

    return;
    // 0x800713CC: nop

;}
RECOMP_FUNC void func_800DB840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DB844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DB848: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB84C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB850: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB854: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB858: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB85C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB860: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB864: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB868: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB86C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB870: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DB874: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB878: nop

    // 0x800DB87C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB880: nop

    // 0x800DB884: bne         $t1, $zero, L_800DB8C8
    if (ctx->r9 != 0) {
        // 0x800DB888: nop
    
            goto L_800DB8C8;
    }
    // 0x800DB888: nop

    // 0x800DB88C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DB890: nop

    // 0x800DB894: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB898: nop

    // 0x800DB89C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB8A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB8A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB8A8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DB8AC: addiu       $t5, $t5, -0x714C
    ctx->r13 = ADD32(ctx->r13, -0X714C);
    // 0x800DB8B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB8B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DB8B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DB8BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DB8C0: jal         0x8001C0EC
    // 0x800DB8C4: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DB8C4: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_0:
L_800DB8C8:
    // 0x800DB8C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB8CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB8D0: jal         0x8002A1FC
    // 0x800DB8D4: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800DB8D4: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_1:
    // 0x800DB8D8: beq         $v0, $zero, L_800DB8F8
    if (ctx->r2 == 0) {
        // 0x800DB8DC: nop
    
            goto L_800DB8F8;
    }
    // 0x800DB8DC: nop

    // 0x800DB8E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DB8E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800DB8E8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800DB8EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DB8F0: nop

    // 0x800DB8F4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800DB8F8:
    // 0x800DB8F8: b           L_800DB900
    // 0x800DB8FC: nop

        goto L_800DB900;
    // 0x800DB8FC: nop

L_800DB900:
    // 0x800DB900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB904: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DB908: jr          $ra
    // 0x800DB90C: nop

    return;
    // 0x800DB90C: nop

;}
RECOMP_FUNC void func_800ED9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED9E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ED9EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ED9F0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800ED9F4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800ED9F8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800ED9FC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EDA00: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EDA04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EDA08: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EDA0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDA10: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EDA14: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EDA18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EDA1C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EDA20: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EDA24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EDA28: addiu       $a1, $a1, 0x44F8
    ctx->r5 = ADD32(ctx->r5, 0X44F8);
    // 0x800EDA2C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EDA30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EDA34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EDA38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EDA3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EDA40: jal         0x80027464
    // 0x800EDA44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EDA44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EDA48: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800EDA4C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800EDA50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EDA54: beq         $t1, $at, L_800EDA70
    if (ctx->r9 == ctx->r1) {
        // 0x800EDA58: nop
    
            goto L_800EDA70;
    }
    // 0x800EDA58: nop

    // 0x800EDA5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800EDA60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800EDA64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EDA68: jal         0x80019448
    // 0x800EDA6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800EDA6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_800EDA70:
    // 0x800EDA70: b           L_800EDA78
    // 0x800EDA74: nop

        goto L_800EDA78;
    // 0x800EDA74: nop

L_800EDA78:
    // 0x800EDA78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDA7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EDA80: jr          $ra
    // 0x800EDA84: nop

    return;
    // 0x800EDA84: nop

;}
RECOMP_FUNC void func_800E0DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0DE4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E0DE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E0DEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E0DF0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E0DF4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E0DF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E0DFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E0E00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E0E04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E0E08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0E0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E0E10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0E14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E0E18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0E1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E0E20: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E0E24: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E0E28: nop

    // 0x800E0E2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E0E30: nop

    // 0x800E0E34: bne         $t1, $zero, L_800E0F10
    if (ctx->r9 != 0) {
        // 0x800E0E38: nop
    
            goto L_800E0F10;
    }
    // 0x800E0E38: nop

    // 0x800E0E3C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E0E40: nop

    // 0x800E0E44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E0E48: nop

    // 0x800E0E4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E0E50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E0E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0E58: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E0E5C: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E0E60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0E64: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E0E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800E0E70: jal         0x8001C0EC
    // 0x800E0E74: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E0E74: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E0E78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0E7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0E80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0E84: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E0E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0E8C: jal         0x8001ABF4
    // 0x800E0E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E0E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E0E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0E98: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0E9C: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E0EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0EA4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E0EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E0EAC: jal         0x8001ABF4
    // 0x800E0EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E0EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E0EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0EB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0EBC: jal         0x8002A46C
    // 0x800E0EC0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E0EC0: nop

    after_3:
    // 0x800E0EC4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E0EC8: nop

    // 0x800E0ECC: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800E0ED0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E0ED4: nop

    // 0x800E0ED8: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E0EDC: nop

    // 0x800E0EE0: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800E0EE4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E0EE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E0EEC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E0EF0: nop

    // 0x800E0EF4: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800E0EF8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E0EFC: nop

    // 0x800E0F00: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800E0F04: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E0F08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E0F0C: sh          $t0, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r8;
L_800E0F10:
    // 0x800E0F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0F18: jal         0x80028FA0
    // 0x800E0F1C: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800E0F1C: nop

    after_4:
    // 0x800E0F20: beq         $v0, $zero, L_800E0F38
    if (ctx->r2 == 0) {
        // 0x800E0F24: nop
    
            goto L_800E0F38;
    }
    // 0x800E0F24: nop

    // 0x800E0F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0F2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0F30: jal         0x80029B60
    // 0x800E0F34: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800E0F34: nop

    after_5:
L_800E0F38:
    // 0x800E0F38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0F3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0F40: jal         0x8001B62C
    // 0x800E0F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x800E0F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800E0F48: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E0F4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E0F50: nop

    // 0x800E0F54: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800E0F58: nop

    // 0x800E0F5C: bc1f        L_800E1124
    if (!c1cs) {
        // 0x800E0F60: nop
    
            goto L_800E1124;
    }
    // 0x800E0F60: nop

    // 0x800E0F64: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E0F68: nop

    // 0x800E0F6C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800E0F70: nop

    // 0x800E0F74: bne         $t4, $zero, L_800E0F9C
    if (ctx->r12 != 0) {
        // 0x800E0F78: nop
    
            goto L_800E0F9C;
    }
    // 0x800E0F78: nop

    // 0x800E0F7C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E0F80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800E0F84: sh          $t2, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r10;
    // 0x800E0F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0F90: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x800E0F94: jal         0x80029EF8
    // 0x800E0F98: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800E0F98: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_7:
L_800E0F9C:
    // 0x800E0F9C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E0FA0: nop

    // 0x800E0FA4: lwc1        $f10, 0x28($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800E0FA8: nop

    // 0x800E0FAC: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x800E0FB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E0FB4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E0FB8: nop

    // 0x800E0FBC: swc1        $f16, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f16.u32l;
    // 0x800E0FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0FC8: jal         0x80029C40
    // 0x800E0FCC: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800E0FCC: nop

    after_8:
    // 0x800E0FD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E0FD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E0FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0FE4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E0FE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E0FEC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800E0FF0: jal         0x80029018
    // 0x800E0FF4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800E0FF4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x800E0FF8: beq         $v0, $zero, L_800E101C
    if (ctx->r2 == 0) {
        // 0x800E0FFC: nop
    
            goto L_800E101C;
    }
    // 0x800E0FFC: nop

    // 0x800E1000: jal         0x800297DC
    // 0x800E1004: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800E1004: nop

    after_10:
    // 0x800E1008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E100C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1010: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E1014: jal         0x80029824
    // 0x800E1018: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800E1018: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800E101C:
    // 0x800E101C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E1020: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E1024: nop

    // 0x800E1028: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x800E102C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E1030: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1034: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1038: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E103C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E1040: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E1044: jal         0x80029F58
    // 0x800E1048: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800E1048: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x800E104C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1050: bne         $v0, $at, L_800E1088
    if (ctx->r2 != ctx->r1) {
        // 0x800E1054: nop
    
            goto L_800E1088;
    }
    // 0x800E1054: nop

    // 0x800E1058: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E105C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E1060: nop

    // 0x800E1064: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x800E1068: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E106C: nop

    // 0x800E1070: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800E1074: nop

    // 0x800E1078: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800E107C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E1080: nop

    // 0x800E1084: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
L_800E1088:
    // 0x800E1088: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E108C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1090: jal         0x8001B4AC
    // 0x800E1094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x800E1094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800E1098: beq         $v0, $zero, L_800E111C
    if (ctx->r2 == 0) {
        // 0x800E109C: nop
    
            goto L_800E111C;
    }
    // 0x800E109C: nop

    // 0x800E10A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E10A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E10A8: jal         0x8002A1FC
    // 0x800E10AC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_14;
    // 0x800E10AC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_14:
    // 0x800E10B0: beq         $v0, $zero, L_800E10EC
    if (ctx->r2 == 0) {
        // 0x800E10B4: nop
    
            goto L_800E10EC;
    }
    // 0x800E10B4: nop

    // 0x800E10B8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E10BC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800E10C0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E10C4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E10C8: nop

    // 0x800E10CC: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x800E10D0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E10D4: nop

    // 0x800E10D8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E10DC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E10E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E10E4: b           L_800E111C
    // 0x800E10E8: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
        goto L_800E111C;
    // 0x800E10E8: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800E10EC:
    // 0x800E10EC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E10F0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E10F4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E10F8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E10FC: nop

    // 0x800E1100: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x800E1104: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E1108: nop

    // 0x800E110C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800E1110: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E1114: nop

    // 0x800E1118: sh          $zero, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = 0;
L_800E111C:
    // 0x800E111C: b           L_800E117C
    // 0x800E1120: nop

        goto L_800E117C;
    // 0x800E1120: nop

L_800E1124:
    // 0x800E1124: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E1128: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E112C: nop

    // 0x800E1130: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
    // 0x800E1134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E113C: jal         0x8002A1FC
    // 0x800E1140: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_15;
    // 0x800E1140: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_15:
    // 0x800E1144: beq         $v0, $zero, L_800E117C
    if (ctx->r2 == 0) {
        // 0x800E1148: nop
    
            goto L_800E117C;
    }
    // 0x800E1148: nop

    // 0x800E114C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E1150: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800E1154: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800E1158: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E115C: nop

    // 0x800E1160: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800E1164: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E1168: nop

    // 0x800E116C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800E1170: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E1174: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E1178: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E117C:
    // 0x800E117C: b           L_800E1184
    // 0x800E1180: nop

        goto L_800E1184;
    // 0x800E1180: nop

L_800E1184:
    // 0x800E1184: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1188: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E118C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E1190: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E1194: jr          $ra
    // 0x800E1198: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E1198: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800D2334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D2338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D233C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2340: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2344: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D2348: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D234C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2350: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2354: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2358: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D235C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D2360: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2364: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D2368: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D236C: nop

    // 0x800D2370: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D2374: nop

    // 0x800D2378: bne         $t1, $zero, L_800D241C
    if (ctx->r9 != 0) {
        // 0x800D237C: nop
    
            goto L_800D241C;
    }
    // 0x800D237C: nop

    // 0x800D2380: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D2384: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D2388: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D238C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2390: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800D2394: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800D2398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D239C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D23A0: addiu       $t6, $t6, -0x7AD0
    ctx->r14 = ADD32(ctx->r14, -0X7AD0);
    // 0x800D23A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D23A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800D23AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D23B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D23B4: jal         0x8001C0EC
    // 0x800D23B8: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D23B8: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    after_0:
    // 0x800D23BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D23C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D23C4: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D23C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D23CC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800D23D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D23D4: jal         0x8001ABF4
    // 0x800D23D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D23D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800D23DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D23E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D23E4: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D23E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D23EC: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x800D23F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D23F4: jal         0x8001ABF4
    // 0x800D23F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800D23F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800D23FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2400: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2404: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D2408: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D240C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x800D2410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D2414: jal         0x8001ABF4
    // 0x800D2418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800D2418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800D241C:
    // 0x800D241C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D2420: nop

    // 0x800D2424: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800D2428: nop

    // 0x800D242C: bne         $t8, $zero, L_800D244C
    if (ctx->r24 != 0) {
        // 0x800D2430: nop
    
            goto L_800D244C;
    }
    // 0x800D2430: nop

    // 0x800D2434: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D2438: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800D243C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800D2440: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D2444: b           L_800D2464
    // 0x800D2448: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800D2464;
    // 0x800D2448: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D244C:
    // 0x800D244C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D2450: nop

    // 0x800D2454: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800D2458: nop

    // 0x800D245C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D2460: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_800D2464:
    // 0x800D2464: b           L_800D246C
    // 0x800D2468: nop

        goto L_800D246C;
    // 0x800D2468: nop

L_800D246C:
    // 0x800D246C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D2474: jr          $ra
    // 0x800D2478: nop

    return;
    // 0x800D2478: nop

;}
RECOMP_FUNC void func_800D0CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0CA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D0CA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D0CA8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D0CAC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D0CB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D0CB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D0CB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D0CBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D0CC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0CC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0CC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0CCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0CD0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D0CD4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D0CD8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D0CDC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D0CE0: nop

    // 0x800D0CE4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D0CE8: nop

    // 0x800D0CEC: bne         $t1, $zero, L_800D0D8C
    if (ctx->r9 != 0) {
        // 0x800D0CF0: nop
    
            goto L_800D0D8C;
    }
    // 0x800D0CF0: nop

    // 0x800D0CF4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D0CF8: nop

    // 0x800D0CFC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D0D00: nop

    // 0x800D0D04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D0D08: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D0D0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0D10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D14: nop

    // 0x800D0D18: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800D0D1C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D20: nop

    // 0x800D0D24: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D0D28: nop

    // 0x800D0D2C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800D0D30: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D34: nop

    // 0x800D0D38: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800D0D3C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D40: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x800D0D44: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800D0D48: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D4C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800D0D50: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800D0D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0D5C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800D0D60: jal         0x80029EF8
    // 0x800D0D64: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800D0D64: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x800D0D68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0D6C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800D0D70: addiu       $t3, $t3, -0x7AD8
    ctx->r11 = ADD32(ctx->r11, -0X7AD8);
    // 0x800D0D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0D78: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800D0D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D0D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D0D84: jal         0x8001C0EC
    // 0x800D0D88: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D0D88: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    after_1:
L_800D0D8C:
    // 0x800D0D8C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D0D90: nop

    // 0x800D0D94: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800D0D98: nop

    // 0x800D0D9C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800D0DA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D0DA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D0DA8: nop

    // 0x800D0DAC: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x800D0DB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0DB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0DB8: jal         0x80029C40
    // 0x800D0DBC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800D0DBC: nop

    after_2:
    // 0x800D0DC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D0DC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D0DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0DD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D0DD4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D0DD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D0DDC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D0DE0: jal         0x80029018
    // 0x800D0DE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800D0DE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800D0DE8: beq         $v0, $zero, L_800D0E14
    if (ctx->r2 == 0) {
        // 0x800D0DEC: nop
    
            goto L_800D0E14;
    }
    // 0x800D0DEC: nop

    // 0x800D0DF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D0DF4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D0DF8: nop

    // 0x800D0DFC: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800D0E00: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E04: nop

    // 0x800D0E08: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D0E0C: nop

    // 0x800D0E10: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
L_800D0E14:
    // 0x800D0E14: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D0E18: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E1C: nop

    // 0x800D0E20: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800D0E24: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D0E28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D0E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0E34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D0E38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D0E3C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D0E40: jal         0x80029F58
    // 0x800D0E44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800D0E44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800D0E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0E4C: bne         $v0, $at, L_800D0E84
    if (ctx->r2 != ctx->r1) {
        // 0x800D0E50: nop
    
            goto L_800D0E84;
    }
    // 0x800D0E50: nop

    // 0x800D0E54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D0E58: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E5C: nop

    // 0x800D0E60: swc1        $f10, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f10.u32l;
    // 0x800D0E64: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E68: nop

    // 0x800D0E6C: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800D0E70: nop

    // 0x800D0E74: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800D0E78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E7C: nop

    // 0x800D0E80: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
L_800D0E84:
    // 0x800D0E84: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D0E88: nop

    // 0x800D0E8C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D0E90: nop

    // 0x800D0E94: beq         $t3, $zero, L_800D0F58
    if (ctx->r11 == 0) {
        // 0x800D0E98: nop
    
            goto L_800D0F58;
    }
    // 0x800D0E98: nop

    // 0x800D0E9C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D0EA0: nop

    // 0x800D0EA4: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800D0EA8: nop

    // 0x800D0EAC: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800D0EB0: sh          $t5, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r13;
    // 0x800D0EB4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0EB8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0EBC: lwc1        $f16, 0xC($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0XC);
    // 0x800D0EC0: lwc1        $f5, 0x5078($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5078);
    // 0x800D0EC4: lwc1        $f4, 0x507C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X507C);
    // 0x800D0EC8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800D0ECC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800D0ED0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800D0ED4: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    // 0x800D0ED8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D0EDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0EE0: lwc1        $f10, 0x10($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X10);
    // 0x800D0EE4: lwc1        $f19, 0x5080($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5080);
    // 0x800D0EE8: lwc1        $f18, 0x5084($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5084);
    // 0x800D0EEC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800D0EF0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800D0EF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800D0EF8: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x800D0EFC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F00: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0F04: lwc1        $f8, 0x14($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X14);
    // 0x800D0F08: lwc1        $f17, 0x5088($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5088);
    // 0x800D0F0C: lwc1        $f16, 0x508C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X508C);
    // 0x800D0F10: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800D0F14: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800D0F18: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800D0F1C: swc1        $f4, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f4.u32l;
    // 0x800D0F20: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F24: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800D0F28: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D0F2C: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800D0F30: jal         0x80015538
    // 0x800D0F34: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800D0F34: nop

    after_5:
    // 0x800D0F38: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F3C: nop

    // 0x800D0F40: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800D0F44: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F48: nop

    // 0x800D0F4C: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800D0F50: b           L_800D0F7C
    // 0x800D0F54: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
        goto L_800D0F7C;
    // 0x800D0F54: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
L_800D0F58:
    // 0x800D0F58: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800D0F60: sh          $t3, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r11;
    // 0x800D0F64: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F68: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800D0F6C: sh          $t5, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r13;
    // 0x800D0F70: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D0F74: nop

    // 0x800D0F78: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800D0F7C:
    // 0x800D0F7C: b           L_800D0F84
    // 0x800D0F80: nop

        goto L_800D0F84;
    // 0x800D0F80: nop

L_800D0F84:
    // 0x800D0F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D0F88: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D0F8C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D0F90: jr          $ra
    // 0x800D0F94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D0F94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007795C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007795C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80077960: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80077964: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80077968: lh          $t7, 0x4B50($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4B50);
    // 0x8007796C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80077970: lw          $t6, 0x4B54($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4B54);
    // 0x80077974: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80077978: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8007797C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80077980: nop

    // 0x80077984: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80077988: nop

    // 0x8007798C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80077990: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80077994: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80077998: lh          $t2, 0x4B50($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4B50);
    // 0x8007799C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800779A0: lw          $t1, 0x4B54($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4B54);
    // 0x800779A4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800779A8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800779AC: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x800779B0: nop

    // 0x800779B4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800779B8: nop

    // 0x800779BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800779C0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x800779C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800779C8: lh          $t6, 0x4B50($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4B50);
    // 0x800779CC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800779D0: lw          $t7, 0x4B54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4B54);
    // 0x800779D4: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x800779D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800779DC: lh          $t0, 0x4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X4);
    // 0x800779E0: nop

    // 0x800779E4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800779E8: nop

    // 0x800779EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800779F0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x800779F4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800779F8: lh          $t1, 0x4B52($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4B52);
    // 0x800779FC: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80077A00: lw          $t2, 0x4B58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4B58);
    // 0x80077A04: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80077A08: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80077A0C: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80077A10: nop

    // 0x80077A14: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80077A18: nop

    // 0x80077A1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80077A20: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80077A24: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80077A28: lh          $t7, 0x4B52($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4B52);
    // 0x80077A2C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80077A30: lw          $t6, 0x4B58($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4B58);
    // 0x80077A34: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80077A38: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80077A3C: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x80077A40: nop

    // 0x80077A44: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80077A48: nop

    // 0x80077A4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80077A50: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80077A54: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80077A58: lh          $t2, 0x4B52($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4B52);
    // 0x80077A5C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80077A60: lw          $t1, 0x4B58($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4B58);
    // 0x80077A64: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80077A68: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80077A6C: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x80077A70: nop

    // 0x80077A74: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80077A78: nop

    // 0x80077A7C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80077A80: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80077A84: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80077A88: lh          $t6, 0x4B50($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4B50);
    // 0x80077A8C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80077A90: lw          $t7, 0x4B54($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4B54);
    // 0x80077A94: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80077A98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80077A9C: lh          $t0, 0x6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X6);
    // 0x80077AA0: nop

    // 0x80077AA4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80077AA8: nop

    // 0x80077AAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80077AB0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80077AB4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80077AB8: lh          $t1, 0x4B52($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4B52);
    // 0x80077ABC: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80077AC0: lw          $t2, 0x4B58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4B58);
    // 0x80077AC4: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80077AC8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80077ACC: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x80077AD0: nop

    // 0x80077AD4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80077AD8: nop

    // 0x80077ADC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80077AE0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80077AE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80077AE8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80077AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80077AF0: jal         0x80077798
    // 0x80077AF4: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_80077798(rdram, ctx);
        goto after_0;
    // 0x80077AF4: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80077AF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80077AFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80077B00: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80077B04: jal         0x80077798
    // 0x80077B08: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_80077798(rdram, ctx);
        goto after_1;
    // 0x80077B08: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80077B0C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80077B10: jal         0x80077840
    // 0x80077B14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80077840(rdram, ctx);
        goto after_2;
    // 0x80077B14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80077B18: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80077B1C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80077B20: jal         0x80077840
    // 0x80077B24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80077840(rdram, ctx);
        goto after_3;
    // 0x80077B24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80077B28: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80077B2C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80077B30: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80077B34: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80077B38: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80077B3C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80077B40: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80077B44: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80077B48: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80077B4C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80077B50: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80077B54: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80077B58: jal         0x800778A0
    // 0x80077B5C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800778A0(rdram, ctx);
        goto after_4;
    // 0x80077B5C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80077B60: beq         $v0, $zero, L_80077B70
    if (ctx->r2 == 0) {
        // 0x80077B64: nop
    
            goto L_80077B70;
    }
    // 0x80077B64: nop

    // 0x80077B68: b           L_80077B80
    // 0x80077B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80077B80;
    // 0x80077B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80077B70:
    // 0x80077B70: b           L_80077B80
    // 0x80077B74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077B80;
    // 0x80077B74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80077B78: b           L_80077B80
    // 0x80077B7C: nop

        goto L_80077B80;
    // 0x80077B7C: nop

L_80077B80:
    // 0x80077B80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80077B84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80077B88: jr          $ra
    // 0x80077B8C: nop

    return;
    // 0x80077B8C: nop

;}
RECOMP_FUNC void func_8006AD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AD28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AD2C: lw          $t6, 0x78F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X78F4);
    // 0x8006AD30: nop

    // 0x8006AD34: bne         $t6, $zero, L_8006AD50
    if (ctx->r14 != 0) {
        // 0x8006AD38: nop
    
            goto L_8006AD50;
    }
    // 0x8006AD38: nop

    // 0x8006AD3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006AD40: lb          $t7, -0x1C34($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C34);
    // 0x8006AD44: nop

    // 0x8006AD48: beq         $t7, $zero, L_8006AD58
    if (ctx->r15 == 0) {
        // 0x8006AD4C: nop
    
            goto L_8006AD58;
    }
    // 0x8006AD4C: nop

L_8006AD50:
    // 0x8006AD50: jr          $ra
    // 0x8006AD54: nop

    return;
    // 0x8006AD54: nop

L_8006AD58:
    // 0x8006AD58: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006AD5C: lbu         $t8, 0x79E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X79E0);
    // 0x8006AD60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006AD64: bne         $t8, $at, L_8006ADE8
    if (ctx->r24 != ctx->r1) {
        // 0x8006AD68: nop
    
            goto L_8006ADE8;
    }
    // 0x8006AD68: nop

    // 0x8006AD6C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006AD70: lh          $t9, 0x7618($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7618);
    // 0x8006AD74: nop

    // 0x8006AD78: bne         $t9, $zero, L_8006ADE0
    if (ctx->r25 != 0) {
        // 0x8006AD7C: nop
    
            goto L_8006ADE0;
    }
    // 0x8006AD7C: nop

    // 0x8006AD80: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006AD84: lh          $t0, 0x7608($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7608);
    // 0x8006AD88: nop

    // 0x8006AD8C: beq         $t0, $zero, L_8006ADE0
    if (ctx->r8 == 0) {
        // 0x8006AD90: nop
    
            goto L_8006ADE0;
    }
    // 0x8006AD90: nop

    // 0x8006AD94: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006AD98: lb          $t1, 0x7610($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7610);
    // 0x8006AD9C: nop

    // 0x8006ADA0: bne         $t1, $zero, L_8006ADCC
    if (ctx->r9 != 0) {
        // 0x8006ADA4: nop
    
            goto L_8006ADCC;
    }
    // 0x8006ADA4: nop

    // 0x8006ADA8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006ADAC: lh          $t2, 0x7608($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7608);
    // 0x8006ADB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ADB4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8006ADB8: sh          $t3, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r11;
    // 0x8006ADBC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8006ADC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ADC4: b           L_8006ADE0
    // 0x8006ADC8: sb          $t4, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r12;
        goto L_8006ADE0;
    // 0x8006ADC8: sb          $t4, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r12;
L_8006ADCC:
    // 0x8006ADCC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006ADD0: lb          $t5, 0x7610($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7610);
    // 0x8006ADD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ADD8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8006ADDC: sb          $t6, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r14;
L_8006ADE0:
    // 0x8006ADE0: b           L_8006AF08
    // 0x8006ADE4: nop

        goto L_8006AF08;
    // 0x8006ADE4: nop

L_8006ADE8:
    // 0x8006ADE8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006ADEC: lbu         $t7, 0x79E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X79E0);
    // 0x8006ADF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006ADF4: beq         $t7, $at, L_8006AE08
    if (ctx->r15 == ctx->r1) {
        // 0x8006ADF8: nop
    
            goto L_8006AE08;
    }
    // 0x8006ADF8: nop

    // 0x8006ADFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AE00: bne         $t7, $at, L_8006AE9C
    if (ctx->r15 != ctx->r1) {
        // 0x8006AE04: nop
    
            goto L_8006AE9C;
    }
    // 0x8006AE04: nop

L_8006AE08:
    // 0x8006AE08: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006AE0C: lh          $t8, 0x7618($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7618);
    // 0x8006AE10: nop

    // 0x8006AE14: beq         $t8, $zero, L_8006AE34
    if (ctx->r24 == 0) {
        // 0x8006AE18: nop
    
            goto L_8006AE34;
    }
    // 0x8006AE18: nop

    // 0x8006AE1C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006AE20: lh          $t9, 0x7618($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7618);
    // 0x8006AE24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AE28: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006AE2C: b           L_8006AE94
    // 0x8006AE30: sh          $t0, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r8;
        goto L_8006AE94;
    // 0x8006AE30: sh          $t0, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r8;
L_8006AE34:
    // 0x8006AE34: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006AE38: lh          $t1, 0x7608($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7608);
    // 0x8006AE3C: nop

    // 0x8006AE40: beq         $t1, $zero, L_8006AE94
    if (ctx->r9 == 0) {
        // 0x8006AE44: nop
    
            goto L_8006AE94;
    }
    // 0x8006AE44: nop

    // 0x8006AE48: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006AE4C: lb          $t2, 0x7610($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7610);
    // 0x8006AE50: nop

    // 0x8006AE54: bne         $t2, $zero, L_8006AE80
    if (ctx->r10 != 0) {
        // 0x8006AE58: nop
    
            goto L_8006AE80;
    }
    // 0x8006AE58: nop

    // 0x8006AE5C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006AE60: lh          $t3, 0x7608($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7608);
    // 0x8006AE64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AE68: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8006AE6C: sh          $t4, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r12;
    // 0x8006AE70: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8006AE74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AE78: b           L_8006AE94
    // 0x8006AE7C: sb          $t5, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r13;
        goto L_8006AE94;
    // 0x8006AE7C: sb          $t5, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r13;
L_8006AE80:
    // 0x8006AE80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AE84: lb          $t6, 0x7610($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7610);
    // 0x8006AE88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AE8C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006AE90: sb          $t7, 0x7610($at)
    MEM_B(0X7610, ctx->r1) = ctx->r15;
L_8006AE94:
    // 0x8006AE94: b           L_8006AF08
    // 0x8006AE98: nop

        goto L_8006AF08;
    // 0x8006AE98: nop

L_8006AE9C:
    // 0x8006AE9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006AEA0: lbu         $t8, 0x79E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X79E0);
    // 0x8006AEA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006AEA8: bne         $t8, $at, L_8006AF08
    if (ctx->r24 != ctx->r1) {
        // 0x8006AEAC: nop
    
            goto L_8006AF08;
    }
    // 0x8006AEAC: nop

    // 0x8006AEB0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006AEB4: lh          $t9, 0x7618($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7618);
    // 0x8006AEB8: nop

    // 0x8006AEBC: beq         $t9, $zero, L_8006AEDC
    if (ctx->r25 == 0) {
        // 0x8006AEC0: nop
    
            goto L_8006AEDC;
    }
    // 0x8006AEC0: nop

    // 0x8006AEC4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006AEC8: lh          $t0, 0x7618($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7618);
    // 0x8006AECC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AED0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8006AED4: b           L_8006AF08
    // 0x8006AED8: sh          $t1, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r9;
        goto L_8006AF08;
    // 0x8006AED8: sh          $t1, 0x7618($at)
    MEM_H(0X7618, ctx->r1) = ctx->r9;
L_8006AEDC:
    // 0x8006AEDC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006AEE0: lh          $t2, 0x7608($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7608);
    // 0x8006AEE4: nop

    // 0x8006AEE8: slti        $at, $t2, 0x4650
    ctx->r1 = SIGNED(ctx->r10) < 0X4650 ? 1 : 0;
    // 0x8006AEEC: beq         $at, $zero, L_8006AF08
    if (ctx->r1 == 0) {
        // 0x8006AEF0: nop
    
            goto L_8006AF08;
    }
    // 0x8006AEF0: nop

    // 0x8006AEF4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006AEF8: lh          $t3, 0x7608($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7608);
    // 0x8006AEFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AF00: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8006AF04: sh          $t4, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r12;
L_8006AF08:
    // 0x8006AF08: jr          $ra
    // 0x8006AF0C: nop

    return;
    // 0x8006AF0C: nop

    // 0x8006AF10: jr          $ra
    // 0x8006AF14: nop

    return;
    // 0x8006AF14: nop

;}
RECOMP_FUNC void func_800B8A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B8A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8A80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8A84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8A88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8A8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8A90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8A94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8A98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8A9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8AA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8AA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B8AA8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B8AAC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8AB0: nop

    // 0x800B8AB4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B8AB8: nop

    // 0x800B8ABC: bne         $t1, $zero, L_800B8B18
    if (ctx->r9 != 0) {
        // 0x800B8AC0: nop
    
            goto L_800B8B18;
    }
    // 0x800B8AC0: nop

    // 0x800B8AC4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8AC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B8ACC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B8AD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B8AD4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8AD8: nop

    // 0x800B8ADC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B8AE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B8AE4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8AE8: nop

    // 0x800B8AEC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B8AF0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8AF4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B8AF8: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800B8AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8B04: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B8B08: addiu       $a3, $a3, 0x7C00
    ctx->r7 = ADD32(ctx->r7, 0X7C00);
    // 0x800B8B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8B10: jal         0x8001ABF4
    // 0x800B8B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800B8B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800B8B18:
    // 0x800B8B18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8B1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8B20: jal         0x80029C40
    // 0x800B8B24: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B8B24: nop

    after_1:
    // 0x800B8B28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8B2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8B30: jal         0x80029D04
    // 0x800B8B34: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B8B34: nop

    after_2:
    // 0x800B8B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8B40: jal         0x8002A2EC
    // 0x800B8B44: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800B8B44: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_3:
    // 0x800B8B48: beq         $v0, $zero, L_800B8B80
    if (ctx->r2 == 0) {
        // 0x800B8B4C: nop
    
            goto L_800B8B80;
    }
    // 0x800B8B4C: nop

    // 0x800B8B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8B58: jal         0x8002A3A8
    // 0x800B8B5C: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_4;
    // 0x800B8B5C: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_4:
    // 0x800B8B60: beq         $v0, $zero, L_800B8B80
    if (ctx->r2 == 0) {
        // 0x800B8B64: nop
    
            goto L_800B8B80;
    }
    // 0x800B8B64: nop

    // 0x800B8B68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8B6C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B8B70: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B8B74: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8B78: nop

    // 0x800B8B7C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800B8B80:
    // 0x800B8B80: b           L_800B8B88
    // 0x800B8B84: nop

        goto L_800B8B88;
    // 0x800B8B84: nop

L_800B8B88:
    // 0x800B8B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8B8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B8B90: jr          $ra
    // 0x800B8B94: nop

    return;
    // 0x800B8B94: nop

;}
RECOMP_FUNC void func_80072A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072A08: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80072A0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072A10: lh          $t6, 0x790C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X790C);
    // 0x80072A14: nop

    // 0x80072A18: addiu       $t7, $t6, -0x3C0
    ctx->r15 = ADD32(ctx->r14, -0X3C0);
    // 0x80072A1C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80072A20: nop

    // 0x80072A24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80072A28: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x80072A2C: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80072A30: nop

    // 0x80072A34: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x80072A38: nop

    // 0x80072A3C: bc1f        L_80072A58
    if (!c1cs) {
        // 0x80072A40: nop
    
            goto L_80072A58;
    }
    // 0x80072A40: nop

    // 0x80072A44: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80072A48: nop

    // 0x80072A4C: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80072A50: b           L_80072A64
    // 0x80072A54: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
        goto L_80072A64;
    // 0x80072A54: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
L_80072A58:
    // 0x80072A58: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80072A5C: nop

    // 0x80072A60: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_80072A64:
    // 0x80072A64: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80072A68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80072A6C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80072A70: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80072A74: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80072A78: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x80072A7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80072A80: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80072A84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072A88: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80072A8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072A90: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80072A94: lwc1        $f4, 0x7634($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7634);
    // 0x80072A98: nop

    // 0x80072A9C: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x80072AA0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80072AA4: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80072AA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80072AAC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80072AB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072AB4: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80072AB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072ABC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80072AC0: lwc1        $f18, 0x7A58($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80072AC4: nop

    // 0x80072AC8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80072ACC: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x80072AD0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80072AD4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80072AD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80072ADC: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80072AE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072AE4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80072AE8: lwc1        $f18, 0x7A5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80072AEC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80072AF0: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80072AF4: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x80072AF8: b           L_80072B00
    // 0x80072AFC: nop

        goto L_80072B00;
    // 0x80072AFC: nop

L_80072B00:
    // 0x80072B00: jr          $ra
    // 0x80072B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80072B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008E190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E190: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008E194: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008E198: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008E19C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008E1A0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E1A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E1A8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008E1AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E1B0: lw          $t7, 0x4D48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4D48);
    // 0x8008E1B4: nop

    // 0x8008E1B8: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8008E1BC: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008E1C0:
    // 0x8008E1C0: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8008E1C4: lh          $t0, 0x6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6);
    // 0x8008E1C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008E1CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E1D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008E1D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E1D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008E1DC: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8008E1E0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8008E1E4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008E1E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008E1EC: lh          $t3, 0x4238($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4238);
    // 0x8008E1F0: nop

    // 0x8008E1F4: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x8008E1F8: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8008E1FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008E200: beq         $t4, $at, L_8008E2F8
    if (ctx->r12 == ctx->r1) {
        // 0x8008E204: nop
    
            goto L_8008E2F8;
    }
    // 0x8008E204: nop

    // 0x8008E208: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8008E20C: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8008E210: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008E214: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008E218: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E21C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008E220: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008E224: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008E228: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8008E22C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008E230: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8008E234: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8008E238: lwc1        $f4, 0x30($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X30);
    // 0x8008E23C: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x8008E240: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008E244: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8008E248: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008E24C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008E250: addu        $t1, $t9, $t7
    ctx->r9 = ADD32(ctx->r25, ctx->r15);
    // 0x8008E254: swc1        $f8, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f8.u32l;
    // 0x8008E258: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008E25C: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8008E260: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008E264: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008E268: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008E26C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8008E270: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008E274: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008E278: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8008E27C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008E280: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008E284: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008E288: lwc1        $f10, 0x34($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X34);
    // 0x8008E28C: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8008E290: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E294: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008E298: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008E29C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008E2A0: addu        $t0, $t8, $t4
    ctx->r8 = ADD32(ctx->r24, ctx->r12);
    // 0x8008E2A4: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x8008E2A8: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8008E2AC: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x8008E2B0: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8008E2B4: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8008E2B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E2BC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008E2C0: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8008E2C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008E2C8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008E2CC: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x8008E2D0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8008E2D4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008E2D8: lwc1        $f4, 0x38($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X38);
    // 0x8008E2DC: lwc1        $f6, 0x20($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X20);
    // 0x8008E2E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008E2E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008E2E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008E2EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008E2F0: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x8008E2F4: swc1        $f8, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f8.u32l;
L_8008E2F8:
    // 0x8008E2F8: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x8008E2FC: nop

    // 0x8008E300: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x8008E304: sll         $t0, $t4, 16
    ctx->r8 = S32(ctx->r12 << 16);
    // 0x8008E308: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8008E30C: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8008E310: bne         $at, $zero, L_8008E1C0
    if (ctx->r1 != 0) {
        // 0x8008E314: sh          $t4, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r12;
            goto L_8008E1C0;
    }
    // 0x8008E314: sh          $t4, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r12;
    // 0x8008E318: b           L_8008E320
    // 0x8008E31C: nop

        goto L_8008E320;
    // 0x8008E31C: nop

L_8008E320:
    // 0x8008E320: jr          $ra
    // 0x8008E324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008E324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800BFF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFF20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFF24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFF28: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BFF2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BFF30: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BFF34: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BFF38: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800BFF3C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800BFF40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BFF44: nop

    // 0x800BFF48: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800BFF4C: nop

    // 0x800BFF50: bc1f        L_800BFF60
    if (!c1cs) {
        // 0x800BFF54: nop
    
            goto L_800BFF60;
    }
    // 0x800BFF54: nop

    // 0x800BFF58: b           L_800BFF68
    // 0x800BFF5C: neg.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = -ctx->f4.fl;
        goto L_800BFF68;
    // 0x800BFF5C: neg.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = -ctx->f4.fl;
L_800BFF60:
    // 0x800BFF60: lwc1        $f20, 0x30($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800BFF64: nop

L_800BFF68:
    // 0x800BFF68: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BFF6C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800BFF70: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800BFF74: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BFF78: jal         0x8002A800
    // 0x800BFF7C: nop

    func_8002A800(rdram, ctx);
        goto after_0;
    // 0x800BFF7C: nop

    after_0:
    // 0x800BFF80: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800BFF84: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800BFF88: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800BFF8C: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800BFF90: jal         0x80015538
    // 0x800BFF94: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800BFF94: nop

    after_1:
    // 0x800BFF98: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800BFF9C: nop

    // 0x800BFFA0: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800BFFA4: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800BFFA8: b           L_800BFFB8
    // 0x800BFFAC: nop

        goto L_800BFFB8;
    // 0x800BFFAC: nop

    // 0x800BFFB0: b           L_800BFFB8
    // 0x800BFFB4: nop

        goto L_800BFFB8;
    // 0x800BFFB4: nop

L_800BFFB8:
    // 0x800BFFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFFBC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800BFFC0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800BFFC4: jr          $ra
    // 0x800BFFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BFFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008DD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DD54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008DD58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DD5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008DD60: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8008DD64: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008DD68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008DD6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DD70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008DD74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008DD78: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008DD7C: nop

    // 0x8008DD80: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8008DD84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008DD88: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008DD8C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008DD90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DD94: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008DD98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008DD9C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008DDA0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008DDA4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008DDA8: lwc1        $f4, 0x28($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X28);
    // 0x8008DDAC: lwc1        $f6, 0x4C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4C);
    // 0x8008DDB0: nop

    // 0x8008DDB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8008DDB8: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x8008DDBC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008DDC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DDC4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008DDC8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DDCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008DDD0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DDD4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008DDD8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008DDDC: lwc1        $f10, 0x4178($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4178);
    // 0x8008DDE0: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8008DDE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008DDE8: nop

    // 0x8008DDEC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8008DDF0: nop

    // 0x8008DDF4: bc1f        L_8008DE28
    if (!c1cs) {
        // 0x8008DDF8: nop
    
            goto L_8008DE28;
    }
    // 0x8008DDF8: nop

    // 0x8008DDFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8008DE00: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8008DE04: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008DE08: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008DE0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008DE10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8008DE14: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008DE18: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008DE1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DE20: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008DE24: swc1        $f18, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f18.u32l;
L_8008DE28:
    // 0x8008DE28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008DE2C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008DE30: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008DE34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008DE38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008DE3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DE40: lh          $t9, 0x4D58($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4D58);
    // 0x8008DE44: nop

    // 0x8008DE48: bne         $t9, $zero, L_8008DFA0
    if (ctx->r25 != 0) {
        // 0x8008DE4C: nop
    
            goto L_8008DFA0;
    }
    // 0x8008DE4C: nop

    // 0x8008DE50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008DE54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DE58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008DE5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008DE60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008DE64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008DE68: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008DE6C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008DE70: lwc1        $f4, 0x4178($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4178);
    // 0x8008DE74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008DE78: nop

    // 0x8008DE7C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8008DE80: nop

    // 0x8008DE84: bc1f        L_8008DF48
    if (!c1cs) {
        // 0x8008DE88: nop
    
            goto L_8008DF48;
    }
    // 0x8008DE88: nop

    // 0x8008DE8C: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x8008DE90: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8008DE94: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008DE98: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008DE9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008DEA0: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x8008DEA4: lw          $a2, 0x4D50($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4D50);
    // 0x8008DEA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008DEAC: jal         0x8008E074
    // 0x8008DEB0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8008E074(rdram, ctx);
        goto after_0;
    // 0x8008DEB0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008DEB4: beq         $v0, $zero, L_8008DF40
    if (ctx->r2 == 0) {
        // 0x8008DEB8: nop
    
            goto L_8008DF40;
    }
    // 0x8008DEB8: nop

    // 0x8008DEBC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008DEC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008DEC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008DEC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DECC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008DED0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DED4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008DED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DEDC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008DEE0: swc1        $f8, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f8.u32l;
    // 0x8008DEE4: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8008DEE8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008DEEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008DEF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DEF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008DEF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DEFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008DF00: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008DF04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DF08: lwc1        $f16, 0x4D50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4D50);
    // 0x8008DF0C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008DF10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008DF14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008DF18: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8008DF1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008DF20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DF24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008DF28: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x8008DF2C: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8008DF30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DF34: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8008DF38: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008DF3C: sh          $zero, 0x4D18($at)
    MEM_H(0X4D18, ctx->r1) = 0;
L_8008DF40:
    // 0x8008DF40: b           L_8008DFA0
    // 0x8008DF44: nop

        goto L_8008DFA0;
    // 0x8008DF44: nop

L_8008DF48:
    // 0x8008DF48: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x8008DF4C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8008DF50: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008DF54: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008DF58: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008DF5C: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x8008DF60: lw          $a2, 0x4D4C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4D4C);
    // 0x8008DF64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008DF68: jal         0x8008E074
    // 0x8008DF6C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8008E074(rdram, ctx);
        goto after_1;
    // 0x8008DF6C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8008DF70: beq         $v0, $zero, L_8008DFA0
    if (ctx->r2 == 0) {
        // 0x8008DF74: nop
    
            goto L_8008DFA0;
    }
    // 0x8008DF74: nop

    // 0x8008DF78: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008DF7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008DF80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008DF84: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DF88: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008DF8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008DF90: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008DF94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DF98: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008DF9C: swc1        $f4, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f4.u32l;
L_8008DFA0:
    // 0x8008DFA0: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_8008DFA4:
    // 0x8008DFA4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008DFA8: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8008DFAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008DFB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DFB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008DFB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DFBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008DFC0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8008DFC4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8008DFC8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008DFCC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008DFD0: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x8008DFD4: nop

    // 0x8008DFD8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8008DFDC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8008DFE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008DFE4: beq         $t2, $at, L_8008E03C
    if (ctx->r10 == ctx->r1) {
        // 0x8008DFE8: nop
    
            goto L_8008E03C;
    }
    // 0x8008DFE8: nop

    // 0x8008DFEC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008DFF0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008DFF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008DFF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DFFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008E000: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8008E004: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008E008: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008E00C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8008E010: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008E014: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8008E018: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008E01C: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8008E020: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8008E024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E028: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008E02C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8008E030: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008E034: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x8008E038: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_8008E03C:
    // 0x8008E03C: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x8008E040: nop

    // 0x8008E044: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008E048: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8008E04C: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8008E050: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x8008E054: bne         $at, $zero, L_8008DFA4
    if (ctx->r1 != 0) {
        // 0x8008E058: sh          $t1, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r9;
            goto L_8008DFA4;
    }
    // 0x8008E058: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    // 0x8008E05C: b           L_8008E064
    // 0x8008E060: nop

        goto L_8008E064;
    // 0x8008E060: nop

L_8008E064:
    // 0x8008E064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E06C: jr          $ra
    // 0x8008E070: nop

    return;
    // 0x8008E070: nop

;}
RECOMP_FUNC void func_8005F488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F488: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005F48C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8005F490: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005F494: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8005F498: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8005F49C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8005F4A0: sll         $t6, $a0, 11
    ctx->r14 = S32(ctx->r4 << 11);
    // 0x8005F4A4: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x8005F4A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8005F4AC: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x8005F4B0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8005F4B4: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8005F4B8: addiu       $t2, $t2, 0x3928
    ctx->r10 = ADD32(ctx->r10, 0X3928);
    // 0x8005F4BC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8005F4C0: sh          $t1, 0x1E($t2)
    MEM_H(0X1E, ctx->r10) = ctx->r9;
    // 0x8005F4C4: jr          $ra
    // 0x8005F4C8: nop

    return;
    // 0x8005F4C8: nop

    // 0x8005F4CC: jr          $ra
    // 0x8005F4D0: nop

    return;
    // 0x8005F4D0: nop

;}
RECOMP_FUNC void func_800DB3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB3E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DB3EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DB3F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB3F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB3F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB3FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB40C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB410: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB418: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DB41C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB420: nop

    // 0x800DB424: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB428: nop

    // 0x800DB42C: bne         $t1, $zero, L_800DB494
    if (ctx->r9 != 0) {
        // 0x800DB430: nop
    
            goto L_800DB494;
    }
    // 0x800DB430: nop

    // 0x800DB434: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DB438: nop

    // 0x800DB43C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB440: nop

    // 0x800DB444: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB448: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB44C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DB450: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DB454: nop

    // 0x800DB458: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800DB45C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DB460: nop

    // 0x800DB464: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800DB468: nop

    // 0x800DB46C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x800DB470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB474: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800DB478: addiu       $t7, $t7, -0x7164
    ctx->r15 = ADD32(ctx->r15, -0X7164);
    // 0x800DB47C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB480: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800DB484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DB488: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800DB48C: jal         0x8001C0EC
    // 0x800DB490: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DB490: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    after_0:
L_800DB494:
    // 0x800DB494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB49C: jal         0x80028FA0
    // 0x800DB4A0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800DB4A0: nop

    after_1:
    // 0x800DB4A4: beq         $v0, $zero, L_800DB4BC
    if (ctx->r2 == 0) {
        // 0x800DB4A8: nop
    
            goto L_800DB4BC;
    }
    // 0x800DB4A8: nop

    // 0x800DB4AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB4B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB4B4: jal         0x80029B60
    // 0x800DB4B8: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800DB4B8: nop

    after_2:
L_800DB4BC:
    // 0x800DB4BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB4C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB4C4: jal         0x8001B4AC
    // 0x800DB4C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800DB4C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800DB4CC: beq         $v0, $zero, L_800DB4EC
    if (ctx->r2 == 0) {
        // 0x800DB4D0: nop
    
            goto L_800DB4EC;
    }
    // 0x800DB4D0: nop

    // 0x800DB4D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800DB4D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800DB4DC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800DB4E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB4E4: nop

    // 0x800DB4E8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800DB4EC:
    // 0x800DB4EC: b           L_800DB4F4
    // 0x800DB4F0: nop

        goto L_800DB4F4;
    // 0x800DB4F0: nop

L_800DB4F4:
    // 0x800DB4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB4F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DB4FC: jr          $ra
    // 0x800DB500: nop

    return;
    // 0x800DB500: nop

;}
RECOMP_FUNC void func_800F6D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6D5C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x800F6D60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F6D64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F6D68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F6D6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F6D70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6D78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6D7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6D80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6D84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F6D88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6D8C: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x800F6D90: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6D94: nop

    // 0x800F6D98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F6D9C: nop

    // 0x800F6DA0: bne         $t1, $zero, L_800F6EC0
    if (ctx->r9 != 0) {
        // 0x800F6DA4: nop
    
            goto L_800F6EC0;
    }
    // 0x800F6DA4: nop

    // 0x800F6DA8: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6DAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F6DB0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F6DB4: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6DB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F6DBC: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    // 0x800F6DC0: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x800F6DC4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F6DC8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800F6DCC: jal         0x800372A0
    // 0x800F6DD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x800F6DD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800F6DD4: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6DD8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800F6DDC: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x800F6DE0: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x800F6DE4: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x800F6DE8: jal         0x80037200
    // 0x800F6DEC: nop

    guTranslateF(rdram, ctx);
        goto after_1;
    // 0x800F6DEC: nop

    after_1:
    // 0x800F6DF0: addiu       $t6, $sp, 0x74
    ctx->r14 = ADD32(ctx->r29, 0X74);
    // 0x800F6DF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800F6DF8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800F6DFC: jal         0x80036400
    // 0x800F6E00: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x800F6E00: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x800F6E04: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x800F6E08: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x800F6E0C: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x800F6E10: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800F6E14: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800F6E18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F6E1C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x800F6E20: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F6E24: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800F6E28: jal         0x80036360
    // 0x800F6E2C: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_3;
    // 0x800F6E2C: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_3:
    // 0x800F6E30: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F6E34: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6E38: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F6E3C: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800F6E40: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F6E44: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800F6E48: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800F6E4C: addiu       $a1, $a1, 0x376C
    ctx->r5 = ADD32(ctx->r5, 0X376C);
    // 0x800F6E50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F6E54: jal         0x80027464
    // 0x800F6E58: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x800F6E58: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800F6E5C: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x800F6E60: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x800F6E64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F6E68: beq         $t1, $at, L_800F6EB4
    if (ctx->r9 == ctx->r1) {
        // 0x800F6E6C: nop
    
            goto L_800F6EB4;
    }
    // 0x800F6E6C: nop

    // 0x800F6E70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6E74: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800F6E78: addiu       $t2, $t2, -0x46B8
    ctx->r10 = ADD32(ctx->r10, -0X46B8);
    // 0x800F6E7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6E80: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800F6E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F6E88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F6E8C: jal         0x8001C0EC
    // 0x800F6E90: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800F6E90: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    after_5:
    // 0x800F6E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6E9C: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x800F6EA0: jal         0x80026F10
    // 0x800F6EA4: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x800F6EA4: nop

    after_6:
    // 0x800F6EA8: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6EAC: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800F6EB0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_800F6EB4:
    // 0x800F6EB4: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6EB8: nop

    // 0x800F6EBC: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_800F6EC0:
    // 0x800F6EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6EC8: jal         0x8001B44C
    // 0x800F6ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800F6ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800F6ED0: beq         $v0, $zero, L_800F6F20
    if (ctx->r2 == 0) {
        // 0x800F6ED4: nop
    
            goto L_800F6F20;
    }
    // 0x800F6ED4: nop

    // 0x800F6ED8: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6EDC: nop

    // 0x800F6EE0: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800F6EE4: nop

    // 0x800F6EE8: bne         $t7, $zero, L_800F6F20
    if (ctx->r15 != 0) {
        // 0x800F6EEC: nop
    
            goto L_800F6F20;
    }
    // 0x800F6EEC: nop

    // 0x800F6EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6EF4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800F6EF8: addiu       $t8, $t8, -0x46B8
    ctx->r24 = ADD32(ctx->r24, -0X46B8);
    // 0x800F6EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6F00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F6F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F6F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F6F0C: jal         0x8001C0EC
    // 0x800F6F10: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800F6F10: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    after_8:
    // 0x800F6F14: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6F18: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800F6F1C: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_800F6F20:
    // 0x800F6F20: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6F24: nop

    // 0x800F6F28: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800F6F2C: nop

    // 0x800F6F30: beq         $t2, $zero, L_800F6F54
    if (ctx->r10 == 0) {
        // 0x800F6F34: nop
    
            goto L_800F6F54;
    }
    // 0x800F6F34: nop

    // 0x800F6F38: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800F6F3C: nop

    // 0x800F6F40: bne         $t3, $zero, L_800F6F54
    if (ctx->r11 != 0) {
        // 0x800F6F44: nop
    
            goto L_800F6F54;
    }
    // 0x800F6F44: nop

    // 0x800F6F48: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6F4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F6F50: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800F6F54:
    // 0x800F6F54: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6F58: nop

    // 0x800F6F5C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F6F60: nop

    // 0x800F6F64: beq         $t7, $zero, L_800F6F84
    if (ctx->r15 == 0) {
        // 0x800F6F68: nop
    
            goto L_800F6F84;
    }
    // 0x800F6F68: nop

    // 0x800F6F6C: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x800F6F70: nop

    // 0x800F6F74: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800F6F78: nop

    // 0x800F6F7C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800F6F80: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_800F6F84:
    // 0x800F6F84: b           L_800F6F8C
    // 0x800F6F88: nop

        goto L_800F6F8C;
    // 0x800F6F88: nop

L_800F6F8C:
    // 0x800F6F8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F6F90: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x800F6F94: jr          $ra
    // 0x800F6F98: nop

    return;
    // 0x800F6F98: nop

;}
RECOMP_FUNC void func_800BB748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB748: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BB74C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BB750: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BB754: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800BB758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB75C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB76C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BB77C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BB780: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800BB784: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB788: nop

    // 0x800BB78C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BB790: nop

    // 0x800BB794: bne         $t1, $zero, L_800BB7D8
    if (ctx->r9 != 0) {
        // 0x800BB798: nop
    
            goto L_800BB7D8;
    }
    // 0x800BB798: nop

    // 0x800BB79C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB7A0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB7A4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BB7A8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800BB7AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BB7B0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB7B4: nop

    // 0x800BB7B8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BB7BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB7C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB7C4: nop

    // 0x800BB7C8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BB7CC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB7D0: addiu       $t6, $zero, 0x84
    ctx->r14 = ADD32(0, 0X84);
    // 0x800BB7D4: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800BB7D8:
    // 0x800BB7D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB7DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB7E0: jal         0x80029C40
    // 0x800BB7E4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BB7E4: nop

    after_0:
    // 0x800BB7E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB7EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB7F0: jal         0x80029D04
    // 0x800BB7F4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BB7F4: nop

    after_1:
    // 0x800BB7F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB7FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800BB800: lwc1        $f8, 0xC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800BB804: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800BB808: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BB80C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800BB810: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x800BB814: nop

    // 0x800BB818: bc1f        L_800BB844
    if (!c1cs) {
        // 0x800BB81C: nop
    
            goto L_800BB844;
    }
    // 0x800BB81C: nop

    // 0x800BB820: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB824: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BB828: lwc1        $f18, 0xC($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800BB82C: lwc1        $f7, 0x4C70($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4C70);
    // 0x800BB830: lwc1        $f6, 0x4C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4C74);
    // 0x800BB834: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800BB838: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800BB83C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800BB840: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
L_800BB844:
    // 0x800BB844: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB848: nop

    // 0x800BB84C: lwc1        $f20, 0xC($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800BB850: nop

    // 0x800BB854: swc1        $f20, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f20.u32l;
    // 0x800BB858: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB85C: nop

    // 0x800BB860: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
    // 0x800BB864: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BB868: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BB86C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB874: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BB878: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800BB87C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BB880: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800BB884: jal         0x80029018
    // 0x800BB888: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800BB888: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800BB88C: beq         $v0, $zero, L_800BB8B8
    if (ctx->r2 == 0) {
        // 0x800BB890: nop
    
            goto L_800BB8B8;
    }
    // 0x800BB890: nop

    // 0x800BB894: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB898: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800BB89C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800BB8A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8A4: nop

    // 0x800BB8A8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800BB8AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8B0: nop

    // 0x800BB8B4: sh          $zero, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = 0;
L_800BB8B8:
    // 0x800BB8B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8BC: nop

    // 0x800BB8C0: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800BB8C4: nop

    // 0x800BB8C8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800BB8CC: sh          $t8, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r24;
    // 0x800BB8D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8D4: nop

    // 0x800BB8D8: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800BB8DC: nop

    // 0x800BB8E0: bgtz        $t0, L_800BB900
    if (SIGNED(ctx->r8) > 0) {
        // 0x800BB8E4: nop
    
            goto L_800BB900;
    }
    // 0x800BB8E4: nop

    // 0x800BB8E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8EC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800BB8F0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800BB8F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BB8F8: nop

    // 0x800BB8FC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800BB900:
    // 0x800BB900: b           L_800BB908
    // 0x800BB904: nop

        goto L_800BB908;
    // 0x800BB904: nop

L_800BB908:
    // 0x800BB908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BB90C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800BB910: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800BB914: jr          $ra
    // 0x800BB918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800BB918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80070B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070B1C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80070B20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070B24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80070B28: lb          $t6, 0x79F8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X79F8);
    // 0x80070B2C: nop

    // 0x80070B30: bne         $t6, $zero, L_80070B40
    if (ctx->r14 != 0) {
        // 0x80070B34: nop
    
            goto L_80070B40;
    }
    // 0x80070B34: nop

    // 0x80070B38: b           L_800711A4
    // 0x80070B3C: nop

        goto L_800711A4;
    // 0x80070B3C: nop

L_80070B40:
    // 0x80070B40: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80070B44: lh          $t7, 0x7A50($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7A50);
    // 0x80070B48: nop

    // 0x80070B4C: beq         $t7, $zero, L_80070B6C
    if (ctx->r15 == 0) {
        // 0x80070B50: nop
    
            goto L_80070B6C;
    }
    // 0x80070B50: nop

    // 0x80070B54: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80070B58: lh          $a3, 0x7A50($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7A50);
    // 0x80070B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80070B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070B64: jal         0x8001D000
    // 0x80070B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D000(rdram, ctx);
        goto after_0;
    // 0x80070B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_80070B6C:
    // 0x80070B6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070B70: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80070B74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070B78: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80070B7C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80070B80: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80070B84: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80070B88: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x80070B8C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80070B90: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80070B94: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x80070B98: addiu       $t2, $t2, 0x53D0
    ctx->r10 = ADD32(ctx->r10, 0X53D0);
    // 0x80070B9C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80070BA0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80070BA4: lb          $t4, 0x7630($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7630);
    // 0x80070BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80070BAC: bne         $t4, $at, L_80070C9C
    if (ctx->r12 != ctx->r1) {
        // 0x80070BB0: nop
    
            goto L_80070C9C;
    }
    // 0x80070BB0: nop

    // 0x80070BB4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80070BB8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80070BBC: jal         0x8006AA60
    // 0x80070BC0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    Score_UpdateTimer(rdram, ctx);
        goto after_1;
    // 0x80070BC0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x80070BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070BC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070BCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070BD0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80070BD4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80070BD8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80070BDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070BE0: addiu       $a2, $zero, 0xC4
    ctx->r6 = ADD32(0, 0XC4);
    // 0x80070BE4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80070BE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80070BEC: jal         0x8006F664
    // 0x80070BF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8006F664(rdram, ctx);
        goto after_2;
    // 0x80070BF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80070BF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070BF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070BFC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80070C00: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    // 0x80070C04: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80070C08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070C0C: jal         0x8006F570
    // 0x80070C10: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8006F570(rdram, ctx);
        goto after_3;
    // 0x80070C10: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80070C14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070C18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070C1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80070C20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80070C24: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80070C28: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80070C2C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070C30: addiu       $a2, $zero, 0xEC
    ctx->r6 = ADD32(0, 0XEC);
    // 0x80070C34: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80070C38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80070C3C: jal         0x8006F664
    // 0x80070C40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8006F664(rdram, ctx);
        goto after_4;
    // 0x80070C40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80070C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070C48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070C4C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80070C50: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    // 0x80070C54: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80070C58: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070C5C: jal         0x8006F570
    // 0x80070C60: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8006F570(rdram, ctx);
        goto after_5;
    // 0x80070C60: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80070C64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070C70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80070C74: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80070C78: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80070C7C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070C80: addiu       $a2, $zero, 0x114
    ctx->r6 = ADD32(0, 0X114);
    // 0x80070C84: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80070C88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80070C8C: jal         0x8006F664
    // 0x80070C90: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8006F664(rdram, ctx);
        goto after_6;
    // 0x80070C90: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80070C94: b           L_8007119C
    // 0x80070C98: nop

        goto L_8007119C;
    // 0x80070C98: nop

L_80070C9C:
    // 0x80070C9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070CA0: lh          $t8, 0x7A10($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7A10);
    // 0x80070CA4: nop

    // 0x80070CA8: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80070CAC: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80070CB0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x80070CB4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80070CB8: lb          $t0, 0x5244($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X5244);
    // 0x80070CBC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80070CC0: blez        $t0, L_80070D7C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80070CC4: nop
    
            goto L_80070D7C;
    }
    // 0x80070CC4: nop

L_80070CC8:
    // 0x80070CC8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80070CCC: lb          $t1, -0x1EF0($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1EF0);
    // 0x80070CD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070CD4: bne         $t1, $at, L_80070D28
    if (ctx->r9 != ctx->r1) {
        // 0x80070CD8: nop
    
            goto L_80070D28;
    }
    // 0x80070CD8: nop

    // 0x80070CDC: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80070CE0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80070CE4: lb          $t2, 0x5244($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5244);
    // 0x80070CE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80070CEC: bne         $t2, $t4, L_80070D28
    if (ctx->r10 != ctx->r12) {
        // 0x80070CF0: nop
    
            goto L_80070D28;
    }
    // 0x80070CF0: nop

    // 0x80070CF4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80070CF8: lbu         $t5, -0x1EEB($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1EEB);
    // 0x80070CFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070D00: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80070D04: sb          $t6, -0x1EEB($at)
    MEM_B(-0X1EEB, ctx->r1) = ctx->r14;
    // 0x80070D08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80070D0C: lbu         $t7, -0x1EEB($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1EEB);
    // 0x80070D10: nop

    // 0x80070D14: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80070D18: beq         $t8, $zero, L_80070D28
    if (ctx->r24 == 0) {
        // 0x80070D1C: nop
    
            goto L_80070D28;
    }
    // 0x80070D1C: nop

    // 0x80070D20: b           L_80070D7C
    // 0x80070D24: nop

        goto L_80070D7C;
    // 0x80070D24: nop

L_80070D28:
    // 0x80070D28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070D2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070D30: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80070D34: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80070D38: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80070D3C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80070D40: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070D44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80070D48: jal         0x8006F570
    // 0x80070D4C: subu        $a2, $t0, $t9
    ctx->r6 = SUB32(ctx->r8, ctx->r25);
    func_8006F570(rdram, ctx);
        goto after_7;
    // 0x80070D4C: subu        $a2, $t0, $t9
    ctx->r6 = SUB32(ctx->r8, ctx->r25);
    after_7:
    // 0x80070D50: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80070D54: nop

    // 0x80070D58: addiu       $t3, $t1, 0xC
    ctx->r11 = ADD32(ctx->r9, 0XC);
    // 0x80070D5C: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80070D60: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80070D64: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80070D68: lb          $t5, 0x5244($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5244);
    // 0x80070D6C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80070D70: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80070D74: bne         $at, $zero, L_80070CC8
    if (ctx->r1 != 0) {
        // 0x80070D78: sw          $t4, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r12;
            goto L_80070CC8;
    }
    // 0x80070D78: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_80070D7C:
    // 0x80070D7C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80070D80: lb          $t7, 0x5245($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5245);
    // 0x80070D84: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80070D88: nop

    // 0x80070D8C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80070D90: beq         $at, $zero, L_80070E48
    if (ctx->r1 == 0) {
        // 0x80070D94: nop
    
            goto L_80070E48;
    }
    // 0x80070D94: nop

L_80070D98:
    // 0x80070D98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80070D9C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80070DA0: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80070DA4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80070DA8: lb          $t0, 0x5245($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X5245);
    // 0x80070DAC: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80070DB0: bne         $t0, $t1, L_80070DE4
    if (ctx->r8 != ctx->r9) {
        // 0x80070DB4: nop
    
            goto L_80070DE4;
    }
    // 0x80070DB4: nop

    // 0x80070DB8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80070DBC: lw          $t3, 0x7A54($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A54);
    // 0x80070DC0: nop

    // 0x80070DC4: beq         $t3, $zero, L_80070DE4
    if (ctx->r11 == 0) {
        // 0x80070DC8: nop
    
            goto L_80070DE4;
    }
    // 0x80070DC8: nop

    // 0x80070DCC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80070DD0: lw          $t2, 0x7A54($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A54);
    // 0x80070DD4: nop

    // 0x80070DD8: andi        $t4, $t2, 0x1
    ctx->r12 = ctx->r10 & 0X1;
    // 0x80070DDC: xori        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 ^ 0X1;
    // 0x80070DE0: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_80070DE4:
    // 0x80070DE4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80070DE8: nop

    // 0x80070DEC: beq         $t6, $zero, L_80070E1C
    if (ctx->r14 == 0) {
        // 0x80070DF0: nop
    
            goto L_80070E1C;
    }
    // 0x80070DF0: nop

    // 0x80070DF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070DF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070DFC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80070E00: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80070E04: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80070E08: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80070E0C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070E10: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80070E14: jal         0x8006F570
    // 0x80070E18: subu        $a2, $t8, $t7
    ctx->r6 = SUB32(ctx->r24, ctx->r15);
    func_8006F570(rdram, ctx);
        goto after_8;
    // 0x80070E18: subu        $a2, $t8, $t7
    ctx->r6 = SUB32(ctx->r24, ctx->r15);
    after_8:
L_80070E1C:
    // 0x80070E1C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80070E20: nop

    // 0x80070E24: addiu       $t0, $t9, 0xC
    ctx->r8 = ADD32(ctx->r25, 0XC);
    // 0x80070E28: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x80070E2C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80070E30: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80070E34: lb          $t2, 0x5245($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5245);
    // 0x80070E38: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80070E3C: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80070E40: bne         $at, $zero, L_80070D98
    if (ctx->r1 != 0) {
        // 0x80070E44: sw          $t3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r11;
            goto L_80070D98;
    }
    // 0x80070E44: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_80070E48:
    // 0x80070E48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070E4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80070E50: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80070E54: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80070E58: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x80070E5C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070E60: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80070E64: jal         0x8006F570
    // 0x80070E68: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    func_8006F570(rdram, ctx);
        goto after_9;
    // 0x80070E68: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    after_9:
    // 0x80070E6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070E70: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80070E74: lb          $a0, 0x523F($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X523F);
    // 0x80070E78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070E7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070E80: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80070E84: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80070E88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80070E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070E90: addiu       $a2, $zero, 0xF4
    ctx->r6 = ADD32(0, 0XF4);
    // 0x80070E94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80070E98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80070E9C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80070EA0: jal         0x8006F664
    // 0x80070EA4: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    func_8006F664(rdram, ctx);
        goto after_10;
    // 0x80070EA4: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    after_10:
    // 0x80070EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070EAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070EB0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80070EB4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80070EB8: addiu       $a1, $zero, 0x110
    ctx->r5 = ADD32(0, 0X110);
    // 0x80070EBC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070EC0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80070EC4: jal         0x8006F570
    // 0x80070EC8: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    func_8006F570(rdram, ctx);
        goto after_11;
    // 0x80070EC8: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    after_11:
    // 0x80070ECC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070ED0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80070ED4: lb          $a0, 0x5240($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X5240);
    // 0x80070ED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070EDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070EE0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80070EE4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80070EE8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80070EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070EF0: addiu       $a2, $zero, 0x114
    ctx->r6 = ADD32(0, 0X114);
    // 0x80070EF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80070EF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80070EFC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80070F00: jal         0x8006F664
    // 0x80070F04: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    func_8006F664(rdram, ctx);
        goto after_12;
    // 0x80070F04: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    after_12:
    // 0x80070F08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070F0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80070F10: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80070F14: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80070F18: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80070F1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070F20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80070F24: jal         0x8006F570
    // 0x80070F28: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    func_8006F570(rdram, ctx);
        goto after_13;
    // 0x80070F28: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
    after_13:
    // 0x80070F2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070F30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070F34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070F38: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80070F3C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80070F40: lbu         $a0, 0x5241($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5241);
    // 0x80070F44: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80070F48: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80070F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070F50: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80070F54: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80070F58: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80070F5C: jal         0x8006F664
    // 0x80070F60: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    func_8006F664(rdram, ctx);
        goto after_14;
    // 0x80070F60: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    after_14:
    // 0x80070F64: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80070F68: lbu         $t8, 0x5241($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5241);
    // 0x80070F6C: nop

    // 0x80070F70: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x80070F74: bne         $at, $zero, L_80070FB0
    if (ctx->r1 != 0) {
        // 0x80070F78: nop
    
            goto L_80070FB0;
    }
    // 0x80070F78: nop

    // 0x80070F7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070F80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070F84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070F88: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80070F8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070F90: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80070F94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80070F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070F9C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80070FA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80070FA4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80070FA8: jal         0x8006F664
    // 0x80070FAC: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    func_8006F664(rdram, ctx);
        goto after_15;
    // 0x80070FAC: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    after_15:
L_80070FB0:
    // 0x80070FB0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80070FB4: lw          $t9, 0x7A4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A4C);
    // 0x80070FB8: lui         $at, 0x42E8
    ctx->r1 = S32(0X42E8 << 16);
    // 0x80070FBC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80070FC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070FC4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80070FC8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80070FCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070FD0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80070FD4: nop

    // 0x80070FD8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80070FDC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80070FE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80070FE4: lw          $t0, 0x7A4C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A4C);
    // 0x80070FE8: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x80070FEC: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80070FF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070FF4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80070FF8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80070FFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80071000: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80071004: nop

    // 0x80071008: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8007100C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80071010: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80071014: lw          $t1, 0x7A4C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A4C);
    // 0x80071018: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8007101C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80071020: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80071024: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80071028: nop

    // 0x8007102C: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80071030: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80071034: lui         $at, 0x438A
    ctx->r1 = S32(0X438A << 16);
    // 0x80071038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007103C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80071040: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80071044: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80071048: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007104C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80071050: lh          $a0, 0x7608($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7608);
    // 0x80071054: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80071058: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007105C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80071060: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80071064: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80071068: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007106C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80071070: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80071074: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80071078: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007107C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80071080: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80071084: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80071088: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007108C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80071090: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071094: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80071098: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007109C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800710A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800710A4: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x800710A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800710AC: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x800710B0: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800710B4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800710B8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800710BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800710C0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800710C4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800710C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800710CC: jal         0x8006F664
    // 0x800710D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8006F664(rdram, ctx);
        goto after_16;
    // 0x800710D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_16:
    // 0x800710D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800710D8: lb          $t6, 0x5250($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X5250);
    // 0x800710DC: nop

    // 0x800710E0: beq         $t6, $zero, L_80071100
    if (ctx->r14 == 0) {
        // 0x800710E4: nop
    
            goto L_80071100;
    }
    // 0x800710E4: nop

    // 0x800710E8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800710EC: lb          $t8, 0x5250($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5250);
    // 0x800710F0: nop

    // 0x800710F4: addiu       $t7, $t8, 0x19
    ctx->r15 = ADD32(ctx->r24, 0X19);
    // 0x800710F8: b           L_80071164
    // 0x800710FC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
        goto L_80071164;
    // 0x800710FC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_80071100:
    // 0x80071100: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80071104: lb          $t9, 0x5258($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5258);
    // 0x80071108: nop

    // 0x8007110C: beq         $t9, $zero, L_80071120
    if (ctx->r25 == 0) {
        // 0x80071110: nop
    
            goto L_80071120;
    }
    // 0x80071110: nop

    // 0x80071114: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x80071118: b           L_80071164
    // 0x8007111C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
        goto L_80071164;
    // 0x8007111C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
L_80071120:
    // 0x80071120: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80071124: lb          $t1, 0x5260($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X5260);
    // 0x80071128: nop

    // 0x8007112C: beq         $t1, $zero, L_80071140
    if (ctx->r9 == 0) {
        // 0x80071130: nop
    
            goto L_80071140;
    }
    // 0x80071130: nop

    // 0x80071134: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80071138: b           L_80071164
    // 0x8007113C: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
        goto L_80071164;
    // 0x8007113C: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_80071140:
    // 0x80071140: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80071144: lb          $t2, 0x5268($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5268);
    // 0x80071148: nop

    // 0x8007114C: beq         $t2, $zero, L_80071160
    if (ctx->r10 == 0) {
        // 0x80071150: nop
    
            goto L_80071160;
    }
    // 0x80071150: nop

    // 0x80071154: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x80071158: b           L_80071164
    // 0x8007115C: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
        goto L_80071164;
    // 0x8007115C: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_80071160:
    // 0x80071160: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_80071164:
    // 0x80071164: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80071168: nop

    // 0x8007116C: beq         $t5, $zero, L_8007119C
    if (ctx->r13 == 0) {
        // 0x80071170: nop
    
            goto L_8007119C;
    }
    // 0x80071170: nop

    // 0x80071174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071178: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007117C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80071180: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80071184: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80071188: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x8007118C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80071190: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80071194: jal         0x8006F570
    // 0x80071198: subu        $a2, $t8, $t6
    ctx->r6 = SUB32(ctx->r24, ctx->r14);
    func_8006F570(rdram, ctx);
        goto after_17;
    // 0x80071198: subu        $a2, $t8, $t6
    ctx->r6 = SUB32(ctx->r24, ctx->r14);
    after_17:
L_8007119C:
    // 0x8007119C: b           L_800711A4
    // 0x800711A0: nop

        goto L_800711A4;
    // 0x800711A0: nop

L_800711A4:
    // 0x800711A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800711A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800711AC: jr          $ra
    // 0x800711B0: nop

    return;
    // 0x800711B0: nop

;}
RECOMP_FUNC void func_800E8250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E8254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E8258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E825C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8260: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E826C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8278: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E827C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8280: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800E8284: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8288: nop

    // 0x800E828C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8290: nop

    // 0x800E8294: bne         $t1, $zero, L_800E82E8
    if (ctx->r9 != 0) {
        // 0x800E8298: nop
    
            goto L_800E82E8;
    }
    // 0x800E8298: nop

    // 0x800E829C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E82A0: nop

    // 0x800E82A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E82A8: nop

    // 0x800E82AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E82B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E82B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800E82B8: nop

    // 0x800E82BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E82C0: nop

    // 0x800E82C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E82C8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800E82CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E82D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800E82D4: nop

    // 0x800E82D8: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x800E82DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800E82E0: nop

    // 0x800E82E4: sb          $zero, 0x13A($t8)
    MEM_B(0X13A, ctx->r24) = 0;
L_800E82E8:
    // 0x800E82E8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800E82EC: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800E82F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E82F4: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800E82F8: jal         0x80015538
    // 0x800E82FC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800E82FC: nop

    after_0:
    // 0x800E8300: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8304: nop

    // 0x800E8308: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800E830C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8310: nop

    // 0x800E8314: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800E8318: nop

    // 0x800E831C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x800E8320: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8324: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E8328: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800E832C: nop

    // 0x800E8330: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x800E8334: nop

    // 0x800E8338: bc1f        L_800E8368
    if (!c1cs) {
        // 0x800E833C: nop
    
            goto L_800E8368;
    }
    // 0x800E833C: nop

    // 0x800E8340: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8344: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800E8348: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E834C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8350: nop

    // 0x800E8354: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800E8358: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E835C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8360: b           L_800E8384
    // 0x800E8364: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
        goto L_800E8384;
    // 0x800E8364: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
L_800E8368:
    // 0x800E8368: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800E836C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800E8370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E8374: lwc1        $f18, 0x28($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800E8378: nop

    // 0x800E837C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800E8380: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_800E8384:
    // 0x800E8384: b           L_800E838C
    // 0x800E8388: nop

        goto L_800E838C;
    // 0x800E8388: nop

L_800E838C:
    // 0x800E838C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E8390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E8394: jr          $ra
    // 0x800E8398: nop

    return;
    // 0x800E8398: nop

;}
