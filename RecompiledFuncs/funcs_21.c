#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006A95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A95C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A964: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006A968: lb          $t6, 0x7628($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7628);
    // 0x8006A96C: nop

    // 0x8006A970: bne         $t6, $zero, L_8006A980
    if (ctx->r14 != 0) {
        // 0x8006A974: nop
    
            goto L_8006A980;
    }
    // 0x8006A974: nop

    // 0x8006A978: b           L_8006A9FC
    // 0x8006A97C: nop

        goto L_8006A9FC;
    // 0x8006A97C: nop

L_8006A980:
    // 0x8006A980: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006A984: lh          $t7, 0x7608($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7608);
    // 0x8006A988: nop

    // 0x8006A98C: beq         $t7, $zero, L_8006A9B0
    if (ctx->r15 == 0) {
        // 0x8006A990: nop
    
            goto L_8006A9B0;
    }
    // 0x8006A990: nop

    // 0x8006A994: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006A998: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006A99C: lh          $t9, 0x75F6($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X75F6);
    // 0x8006A9A0: lh          $t8, 0x75FA($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X75FA);
    // 0x8006A9A4: nop

    // 0x8006A9A8: bne         $t8, $t9, L_8006A9F4
    if (ctx->r24 != ctx->r25) {
        // 0x8006A9AC: nop
    
            goto L_8006A9F4;
    }
    // 0x8006A9AC: nop

L_8006A9B0:
    // 0x8006A9B0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8006A9B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A9B8: sb          $t0, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r8;
    // 0x8006A9BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006A9C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A9C4: sb          $t1, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = ctx->r9;
    // 0x8006A9C8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006A9CC: lh          $t2, 0x7608($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7608);
    // 0x8006A9D0: nop

    // 0x8006A9D4: bne         $t2, $zero, L_8006A9EC
    if (ctx->r10 != 0) {
        // 0x8006A9D8: nop
    
            goto L_8006A9EC;
    }
    // 0x8006A9D8: nop

    // 0x8006A9DC: jal         0x80070664
    // 0x8006A9E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80070664(rdram, ctx);
        goto after_0;
    // 0x8006A9E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8006A9E4: b           L_8006A9F4
    // 0x8006A9E8: nop

        goto L_8006A9F4;
    // 0x8006A9E8: nop

L_8006A9EC:
    // 0x8006A9EC: jal         0x80070664
    // 0x8006A9F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80070664(rdram, ctx);
        goto after_1;
    // 0x8006A9F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
L_8006A9F4:
    // 0x8006A9F4: b           L_8006A9FC
    // 0x8006A9F8: nop

        goto L_8006A9FC;
    // 0x8006A9F8: nop

L_8006A9FC:
    // 0x8006A9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006AA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006AA04: jr          $ra
    // 0x8006AA08: nop

    return;
    // 0x8006AA08: nop

;}
RECOMP_FUNC void func_80090FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090FC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090FC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090FCC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090FD0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090FD4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090FD8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090FDC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090FE0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090FE4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090FE8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090FEC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090FF0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090FF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090FF8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090FFC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091000: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091004: addiu       $a1, $a1, 0x14EC
    ctx->r5 = ADD32(ctx->r5, 0X14EC);
    // 0x80091008: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009100C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091010: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091014: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091018: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009101C: jal         0x80027464
    // 0x80091020: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091020: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091024: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091028: b           L_80091030
    // 0x8009102C: nop

        goto L_80091030;
    // 0x8009102C: nop

L_80091030:
    // 0x80091030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091034: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091038: jr          $ra
    // 0x8009103C: nop

    return;
    // 0x8009103C: nop

;}
RECOMP_FUNC void func_800A0960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0968: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A096C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A0970: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A0974: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800A0978: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A097C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0980: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0988: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A098C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800A0990: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800A0994: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0998: beq         $s0, $at, L_800A09C0
    if (ctx->r16 == ctx->r1) {
        // 0x800A099C: nop
    
            goto L_800A09C0;
    }
    // 0x800A099C: nop

    // 0x800A09A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A09A4: beq         $s0, $at, L_800A09D0
    if (ctx->r16 == ctx->r1) {
        // 0x800A09A8: nop
    
            goto L_800A09D0;
    }
    // 0x800A09A8: nop

    // 0x800A09AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A09B0: beq         $s0, $at, L_800A09E0
    if (ctx->r16 == ctx->r1) {
        // 0x800A09B4: nop
    
            goto L_800A09E0;
    }
    // 0x800A09B4: nop

    // 0x800A09B8: b           L_800A09F0
    // 0x800A09BC: nop

        goto L_800A09F0;
    // 0x800A09BC: nop

L_800A09C0:
    // 0x800A09C0: jal         0x800A05EC
    // 0x800A09C4: nop

    func_800A05EC(rdram, ctx);
        goto after_0;
    // 0x800A09C4: nop

    after_0:
    // 0x800A09C8: b           L_800A09F0
    // 0x800A09CC: nop

        goto L_800A09F0;
    // 0x800A09CC: nop

L_800A09D0:
    // 0x800A09D0: jal         0x800A0698
    // 0x800A09D4: nop

    func_800A0698(rdram, ctx);
        goto after_1;
    // 0x800A09D4: nop

    after_1:
    // 0x800A09D8: b           L_800A09F0
    // 0x800A09DC: nop

        goto L_800A09F0;
    // 0x800A09DC: nop

L_800A09E0:
    // 0x800A09E0: jal         0x800A08B4
    // 0x800A09E4: nop

    func_800A08B4(rdram, ctx);
        goto after_2;
    // 0x800A09E4: nop

    after_2:
    // 0x800A09E8: b           L_800A09F0
    // 0x800A09EC: nop

        goto L_800A09F0;
    // 0x800A09EC: nop

L_800A09F0:
    // 0x800A09F0: b           L_800A09F8
    // 0x800A09F4: nop

        goto L_800A09F8;
    // 0x800A09F4: nop

L_800A09F8:
    // 0x800A09F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A09FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A0A00: jr          $ra
    // 0x800A0A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A0A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B6F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B6F6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B6F70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B6F74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B6F78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B6F7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B6F80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B6F84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B6F88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6F8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B6F90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6F94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B6F98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B6F9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B6FA0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B6FA4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6FA8: nop

    // 0x800B6FAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B6FB0: nop

    // 0x800B6FB4: bne         $t1, $zero, L_800B7048
    if (ctx->r9 != 0) {
        // 0x800B6FB8: nop
    
            goto L_800B7048;
    }
    // 0x800B6FB8: nop

    // 0x800B6FBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6FC0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6FC4: nop

    // 0x800B6FC8: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x800B6FCC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6FD0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6FD4: nop

    // 0x800B6FD8: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x800B6FDC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6FE0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B6FE4: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B6FE8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6FEC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800B6FF0: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800B6FF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6FF8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B6FFC: addiu       $t8, $t8, 0x7AA0
    ctx->r24 = ADD32(ctx->r24, 0X7AA0);
    // 0x800B7000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7004: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B7008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B700C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B7010: jal         0x8001C0EC
    // 0x800B7014: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B7014: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_0:
    // 0x800B7018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B701C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7020: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B7024: addiu       $a3, $a3, 0x7B4C
    ctx->r7 = ADD32(ctx->r7, 0X7B4C);
    // 0x800B7028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B702C: jal         0x8001ABF4
    // 0x800B7030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B7030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B7034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B703C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B7040: jal         0x80029EF8
    // 0x800B7044: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800B7044: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_2:
L_800B7048:
    // 0x800B7048: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B704C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7050: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x800B7054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7058: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x800B705C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800B7060: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800B7064: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800B7068: jal         0x8001BB34
    // 0x800B706C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800B706C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800B7070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7078: jal         0x80029C40
    // 0x800B707C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B707C: nop

    after_4:
    // 0x800B7080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7088: jal         0x80029D04
    // 0x800B708C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B708C: nop

    after_5:
    // 0x800B7090: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7094: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B7098: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B709C: nop

    // 0x800B70A0: bne         $t3, $at, L_800B70E0
    if (ctx->r11 != ctx->r1) {
        // 0x800B70A4: nop
    
            goto L_800B70E0;
    }
    // 0x800B70A4: nop

    // 0x800B70A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B70AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B70B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B70B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B70B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B70BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B70C0: jal         0x80029F58
    // 0x800B70C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800B70C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800B70C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B70CC: bne         $v0, $at, L_800B70E0
    if (ctx->r2 != ctx->r1) {
        // 0x800B70D0: nop
    
            goto L_800B70E0;
    }
    // 0x800B70D0: nop

    // 0x800B70D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B70D8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800B70DC: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
L_800B70E0:
    // 0x800B70E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B70E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B70E8: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x800B70EC: nop

    // 0x800B70F0: bne         $t7, $at, L_800B7130
    if (ctx->r15 != ctx->r1) {
        // 0x800B70F4: nop
    
            goto L_800B7130;
    }
    // 0x800B70F4: nop

    // 0x800B70F8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B70FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B7100: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B7104: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7108: nop

    // 0x800B710C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800B7110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7118: jal         0x8001BB34
    // 0x800B711C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x800B711C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800B7120: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7124: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7128: jal         0x8001BBDC
    // 0x800B712C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800B712C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_800B7130:
    // 0x800B7130: b           L_800B7138
    // 0x800B7134: nop

        goto L_800B7138;
    // 0x800B7134: nop

L_800B7138:
    // 0x800B7138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B713C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B7140: jr          $ra
    // 0x800B7144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B7144: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008CD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CD2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008CD30: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008CD34: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008CD38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008CD3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CD40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008CD44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008CD48: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008CD4C: nop

    // 0x8008CD50: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008CD54: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008CD58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008CD5C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008CD60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008CD64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008CD68: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008CD6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CD70: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008CD74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008CD78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CD7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008CD80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CD84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008CD88: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008CD8C: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x8008CD90: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008CD94: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008CD98: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8008CD9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008CDA0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008CDA4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8008CDA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CDAC: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008CDB0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008CDB4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008CDB8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008CDBC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008CDC0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008CDC4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008CDC8: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x8008CDCC: lh          $t5, 0x2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X2);
    // 0x8008CDD0: nop

    // 0x8008CDD4: bne         $t5, $zero, L_8008CE2C
    if (ctx->r13 != 0) {
        // 0x8008CDD8: nop
    
            goto L_8008CE2C;
    }
    // 0x8008CDD8: nop

    // 0x8008CDDC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008CDE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008CDE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008CDE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CDEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008CDF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CDF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008CDF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CDFC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008CE00: swc1        $f8, 0x41B0($at)
    MEM_W(0X41B0, ctx->r1) = ctx->f8.u32l;
    // 0x8008CE04: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8008CE08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008CE0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008CE10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008CE14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008CE18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008CE1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008CE20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CE24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008CE28: swc1        $f10, 0x41AC($at)
    MEM_W(0X41AC, ctx->r1) = ctx->f10.u32l;
L_8008CE2C:
    // 0x8008CE2C: lh          $t0, 0x6($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X6);
    // 0x8008CE30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008CE34: bne         $t0, $at, L_8008CE60
    if (ctx->r8 != ctx->r1) {
        // 0x8008CE38: nop
    
            goto L_8008CE60;
    }
    // 0x8008CE38: nop

    // 0x8008CE3C: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x8008CE40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008CE44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CE48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CE4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CE50: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008CE54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8008CE58: b           L_8008CE7C
    // 0x8008CE5C: sh          $t1, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r9;
        goto L_8008CE7C;
    // 0x8008CE5C: sh          $t1, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r9;
L_8008CE60:
    // 0x8008CE60: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x8008CE64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008CE68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008CE6C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008CE70: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008CE74: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008CE78: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
L_8008CE7C:
    // 0x8008CE7C: b           L_8008CE84
    // 0x8008CE80: nop

        goto L_8008CE84;
    // 0x8008CE80: nop

L_8008CE84:
    // 0x8008CE84: jr          $ra
    // 0x8008CE88: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008CE88: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800CE51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CE51C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800CE520: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CE524: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800CE528: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800CE52C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x800CE530: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CE534: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800CE538: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CE53C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CE540: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CE544: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CE548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE54C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CE550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE554: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE558: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CE55C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CE560: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x800CE564: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CE568: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CE56C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CE570: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CE574: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CE578: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CE57C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CE580: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CE584: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CE588: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CE58C: nop

    // 0x800CE590: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x800CE594: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CE598: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CE59C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CE5A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CE5A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE5A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CE5AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE5B0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CE5B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CE5B8: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CE5BC: nop

    // 0x800CE5C0: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x800CE5C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CE5C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CE5CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CE5D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CE5D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE5D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CE5DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE5E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE5E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CE5E8: lh          $t8, 0x423C($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423C);
    // 0x800CE5EC: nop

    // 0x800CE5F0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x800CE5F4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE5F8: nop

    // 0x800CE5FC: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800CE600: nop

    // 0x800CE604: bne         $t0, $zero, L_800CE70C
    if (ctx->r8 != 0) {
        // 0x800CE608: nop
    
            goto L_800CE70C;
    }
    // 0x800CE608: nop

    // 0x800CE60C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE610: nop

    // 0x800CE614: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800CE618: nop

    // 0x800CE61C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800CE620: sb          $t3, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r11;
    // 0x800CE624: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE628: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800CE62C: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800CE630: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800CE634: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CE638: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE63C: nop

    // 0x800CE640: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800CE644: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800CE648: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CE64C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE650: nop

    // 0x800CE654: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800CE658: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800CE65C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CE660: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CE664: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CE668: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CE66C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CE670: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE674: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CE678: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CE67C: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x800CE680: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800CE684: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CE688: nop

    // 0x800CE68C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800CE690: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800CE694: nop

    // 0x800CE698: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800CE69C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800CE6A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800CE6A4: nop

    // 0x800CE6A8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800CE6AC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800CE6B0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800CE6B4: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x800CE6B8: nop

    // 0x800CE6BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE6C0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CE6C4: addiu       $t5, $t5, -0x7D2C
    ctx->r13 = ADD32(ctx->r13, -0X7D2C);
    // 0x800CE6C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE6CC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CE6D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CE6D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CE6D8: jal         0x8001C0EC
    // 0x800CE6DC: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CE6DC: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_0:
    // 0x800CE6E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE6E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE6E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CE6EC: addiu       $a3, $a3, -0x7CF4
    ctx->r7 = ADD32(ctx->r7, -0X7CF4);
    // 0x800CE6F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CE6F4: jal         0x8001ABF4
    // 0x800CE6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800CE6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800CE6FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE700: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE704: jal         0x8001BBDC
    // 0x800CE708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800CE708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800CE70C:
    // 0x800CE70C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CE710: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE714: nop

    // 0x800CE718: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
    // 0x800CE71C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE724: jal         0x80029C40
    // 0x800CE728: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800CE728: nop

    after_3:
    // 0x800CE72C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CE730: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CE734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE73C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800CE740: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800CE744: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CE748: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800CE74C: jal         0x80029018
    // 0x800CE750: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800CE750: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800CE754: beq         $v0, $zero, L_800CE778
    if (ctx->r2 == 0) {
        // 0x800CE758: nop
    
            goto L_800CE778;
    }
    // 0x800CE758: nop

    // 0x800CE75C: jal         0x800297DC
    // 0x800CE760: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800CE760: nop

    after_5:
    // 0x800CE764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE76C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CE770: jal         0x80029824
    // 0x800CE774: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800CE774: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800CE778:
    // 0x800CE778: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CE77C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CE780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE788: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800CE78C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x800CE790: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CE794: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CE798: jal         0x800295C0
    // 0x800CE79C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800CE79C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800CE7A0: beq         $v0, $zero, L_800CE7B8
    if (ctx->r2 == 0) {
        // 0x800CE7A4: nop
    
            goto L_800CE7B8;
    }
    // 0x800CE7A4: nop

    // 0x800CE7A8: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800CE7AC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE7B0: b           L_800CE7C8
    // 0x800CE7B4: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
        goto L_800CE7C8;
    // 0x800CE7B4: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
L_800CE7B8:
    // 0x800CE7B8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800CE7BC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE7C0: nop

    // 0x800CE7C4: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_800CE7C8:
    // 0x800CE7C8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CE7CC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800CE7D0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CE7D4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CE7D8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE7DC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CE7E0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CE7E4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800CE7E8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800CE7EC: lwc1        $f22, 0x0($t9)
    ctx->f22.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800CE7F0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CE7F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE7F8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CE7FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CE800: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CE804: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CE808: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800CE80C: swc1        $f22, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f22.u32l;
    // 0x800CE810: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE814: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CE818: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800CE81C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CE820: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CE824: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CE828: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x800CE82C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800CE830: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CE834: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE838: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CE83C: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x800CE840: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800CE844: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CE848: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CE84C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE850: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CE854: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE858: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE85C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CE860: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CE864: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CE868: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE86C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800CE870: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CE874: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CE878: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800CE87C: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x800CE880: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800CE884: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE888: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CE88C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800CE890: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE894: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CE898: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800CE89C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CE8A0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE8A4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800CE8A8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CE8AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE8B0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CE8B4: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800CE8B8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800CE8BC: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE8C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CE8C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE8C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CE8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE8D0: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800CE8D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE8D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE8DC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CE8E0: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x800CE8E4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CE8E8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800CE8EC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CE8F0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CE8F4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE8F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CE8FC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CE900: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CE904: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800CE908: lwc1        $f22, 0x8($t8)
    ctx->f22.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800CE90C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CE910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE914: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE918: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CE91C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CE920: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE924: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CE928: swc1        $f22, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f22.u32l;
    // 0x800CE92C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE930: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CE934: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE938: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CE93C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CE940: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CE944: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x800CE948: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE94C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CE950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE954: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CE958: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x800CE95C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800CE960: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800CE964: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CE968: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE96C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE970: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CE974: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CE978: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800CE97C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x800CE980: lwc1        $f22, 0x1C($t5)
    ctx->f22.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800CE984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE988: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE98C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800CE990: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CE994: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CE998: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800CE99C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800CE9A0: swc1        $f22, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f22.u32l;
    // 0x800CE9A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE9A8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CE9AC: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800CE9B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CE9B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800CE9B8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CE9BC: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800CE9C0: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800CE9C4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CE9C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE9CC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CE9D0: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800CE9D4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800CE9D8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800CE9DC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CE9E0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE9E4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CE9E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CE9EC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CE9F0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CE9F4: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800CE9F8: lwc1        $f22, 0x3C($t1)
    ctx->f22.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800CE9FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CEA00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEA04: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEA08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CEA0C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CEA10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEA14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CEA18: swc1        $f22, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f22.u32l;
    // 0x800CEA1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEA20: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CEA24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEA28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CEA2C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CEA30: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CEA34: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800CEA38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEA3C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CEA40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEA44: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CEA48: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800CEA4C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEA50: nop

    // 0x800CEA54: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x800CEA58: lh          $t9, 0xBA($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XBA);
    // 0x800CEA5C: nop

    // 0x800CEA60: subu        $t1, $t3, $t9
    ctx->r9 = SUB32(ctx->r11, ctx->r25);
    // 0x800CEA64: bne         $t1, $zero, L_800CEC70
    if (ctx->r9 != 0) {
        // 0x800CEA68: nop
    
            goto L_800CEC70;
    }
    // 0x800CEA68: nop

    // 0x800CEA6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CEA70: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEA74: nop

    // 0x800CEA78: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x800CEA7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CEA80: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEA84: nop

    // 0x800CEA88: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x800CEA8C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEA90: nop

    // 0x800CEA94: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800CEA98: nop

    // 0x800CEA9C: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800CEAA0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEAA4: nop

    // 0x800CEAA8: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800CEAAC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800CEAB0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800CEAB4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CEAB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEABC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CEAC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CEAC4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEAC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CEACC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEAD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CEAD4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CEAD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEADC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800CEAE0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEAE4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CEAE8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800CEAEC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CEAF0: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x800CEAF4: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x800CEAF8: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800CEAFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEB00: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800CEB04: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800CEB08: nop

    // 0x800CEB0C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CEB10: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CEB14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CEB18: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CEB1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CEB20: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CEB24: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CEB28: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800CEB2C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800CEB30: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CEB34: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEB38: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CEB3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CEB40: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEB44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CEB48: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEB4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CEB50: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CEB54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEB58: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CEB5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CEB60: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CEB64: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CEB68: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CEB6C: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x800CEB70: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x800CEB74: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800CEB78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEB7C: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800CEB80: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800CEB84: nop

    // 0x800CEB88: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CEB8C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CEB90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CEB94: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CEB98: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CEB9C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CEBA0: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CEBA4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800CEBA8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800CEBAC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CEBB0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CEBB4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CEBB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CEBBC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEBC0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CEBC4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CEBC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CEBCC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CEBD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEBD4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800CEBD8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEBDC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CEBE0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800CEBE4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CEBE8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800CEBEC: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800CEBF0: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800CEBF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEBF8: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800CEBFC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CEC00: nop

    // 0x800CEC04: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CEC08: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEC0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CEC10: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEC14: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CEC18: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CEC1C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CEC20: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEC24: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800CEC28: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x800CEC2C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEC30: nop

    // 0x800CEC34: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800CEC38: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEC3C: nop

    // 0x800CEC40: sh          $zero, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = 0;
    // 0x800CEC44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CEC48: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CEC4C: addiu       $t5, $t5, -0x7D2C
    ctx->r13 = ADD32(ctx->r13, -0X7D2C);
    // 0x800CEC50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CEC54: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CEC58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CEC5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CEC60: jal         0x8001C0EC
    // 0x800CEC64: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800CEC64: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_8:
    // 0x800CEC68: b           L_800CEC88
    // 0x800CEC6C: nop

        goto L_800CEC88;
    // 0x800CEC6C: nop

L_800CEC70:
    // 0x800CEC70: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CEC74: nop

    // 0x800CEC78: lh          $t7, 0xBA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XBA);
    // 0x800CEC7C: nop

    // 0x800CEC80: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800CEC84: sh          $t8, 0xBA($t6)
    MEM_H(0XBA, ctx->r14) = ctx->r24;
L_800CEC88:
    // 0x800CEC88: b           L_800CEC90
    // 0x800CEC8C: nop

        goto L_800CEC90;
    // 0x800CEC8C: nop

L_800CEC90:
    // 0x800CEC90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CEC94: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800CEC98: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800CEC9C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800CECA0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800CECA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800CECA8: jr          $ra
    // 0x800CECAC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800CECAC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80074194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074194: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80074198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007419C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741A0: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x800741A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800741A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741AC: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x800741B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800741B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741B8: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x800741BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800741C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741C4: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x800741C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800741CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800741D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741D4: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x800741D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800741DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741E0: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x800741E4: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800741E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800741EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800741F0: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x800741F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800741F8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800741FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074200: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80074204: nop

    // 0x80074208: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x8007420C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80074210: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80074214: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80074218: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007421C: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80074220: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074224: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80074228: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x8007422C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80074230: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80074234: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074238: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8007423C: nop

    // 0x80074240: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80074244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074248: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x8007424C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074250: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x80074254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074258: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x8007425C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80074260: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80074264: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80074268: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007426C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80074270: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80074274: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074278: lh          $t2, 0x30($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X30);
    // 0x8007427C: nop

    // 0x80074280: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80074284: nop

    // 0x80074288: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007428C: swc1        $f6, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f6.u32l;
    // 0x80074290: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80074294: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80074298: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007429C: swc1        $f8, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f8.u32l;
    // 0x800742A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800742A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742A8: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x800742AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800742B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742B4: swc1        $f16, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f16.u32l;
    // 0x800742B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800742BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742C0: swc1        $f18, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f18.u32l;
    // 0x800742C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742C8: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x800742CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742D0: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x800742D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800742D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742DC: swc1        $f6, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f6.u32l;
    // 0x800742E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800742E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742E8: swc1        $f8, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->f8.u32l;
    // 0x800742EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742F0: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x800742F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800742F8: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x800742FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80074300: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074304: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
    // 0x80074308: jr          $ra
    // 0x8007430C: nop

    return;
    // 0x8007430C: nop

    // 0x80074310: jr          $ra
    // 0x80074314: nop

    return;
    // 0x80074314: nop

;}
RECOMP_FUNC void func_800E047C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E047C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E0480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E0484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E048C: jal         0x8002B0E4
    // 0x800E0490: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E0490: nop

    after_0:
    // 0x800E0494: b           L_800E049C
    // 0x800E0498: nop

        goto L_800E049C;
    // 0x800E0498: nop

L_800E049C:
    // 0x800E049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E04A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E04A4: jr          $ra
    // 0x800E04A8: nop

    return;
    // 0x800E04A8: nop

;}
RECOMP_FUNC void func_800FCA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCA8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FCA90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCA94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FCA98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FCA9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FCAA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FCAA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCAA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FCAAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCAB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FCAB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FCAB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FCABC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FCAC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FCAC4: nop

    // 0x800FCAC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FCACC: nop

    // 0x800FCAD0: bne         $t1, $zero, L_800FCB60
    if (ctx->r9 != 0) {
        // 0x800FCAD4: nop
    
            goto L_800FCB60;
    }
    // 0x800FCAD4: nop

    // 0x800FCAD8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FCADC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FCAE0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FCAE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FCAE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FCAEC: nop

    // 0x800FCAF0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800FCAF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FCAF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FCAFC: nop

    // 0x800FCB00: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800FCB04: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB08: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800FCB0C: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x800FCB10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB14: nop

    // 0x800FCB18: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800FCB1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCB20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCB24: jal         0x80029C40
    // 0x800FCB28: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800FCB28: nop

    after_0:
    // 0x800FCB2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCB30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCB34: jal         0x80029D04
    // 0x800FCB38: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800FCB38: nop

    after_1:
    // 0x800FCB3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCB40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCB44: jal         0x8001BB34
    // 0x800FCB48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800FCB48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800FCB4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCB50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCB54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FCB58: jal         0x80029EF8
    // 0x800FCB5C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800FCB5C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_3:
L_800FCB60:
    // 0x800FCB60: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB64: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x800FCB68: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FCB6C: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800FCB70: jal         0x80015538
    // 0x800FCB74: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800FCB74: nop

    after_4:
    // 0x800FCB78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB7C: nop

    // 0x800FCB80: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x800FCB84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FCB88: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FCB8C: lwc1        $f14, 0x57C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X57C0);
    // 0x800FCB90: lwc1        $f12, 0x20($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X20);
    // 0x800FCB94: jal         0x80015538
    // 0x800FCB98: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800FCB98: nop

    after_5:
    // 0x800FCB9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FCBA0: nop

    // 0x800FCBA4: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
    // 0x800FCBA8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FCBAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800FCBB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FCBB4: lwc1        $f8, 0x18($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X18);
    // 0x800FCBB8: nop

    // 0x800FCBBC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800FCBC0: nop

    // 0x800FCBC4: bc1f        L_800FCBF4
    if (!c1cs) {
        // 0x800FCBC8: nop
    
            goto L_800FCBF4;
    }
    // 0x800FCBC8: nop

    // 0x800FCBCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCBD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCBD4: jal         0x8001BB34
    // 0x800FCBD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800FCBD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800FCBDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCBE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCBE4: jal         0x8002B0E4
    // 0x800FCBE8: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800FCBE8: nop

    after_7:
    // 0x800FCBEC: b           L_800FCC88
    // 0x800FCBF0: nop

        goto L_800FCC88;
    // 0x800FCBF0: nop

L_800FCBF4:
    // 0x800FCBF4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FCBF8: nop

    // 0x800FCBFC: lh          $t5, 0xB2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB2);
    // 0x800FCC00: nop

    // 0x800FCC04: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800FCC08: sh          $t6, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r14;
    // 0x800FCC0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FCC10: nop

    // 0x800FCC14: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x800FCC18: nop

    // 0x800FCC1C: bgtz        $t8, L_800FCC3C
    if (SIGNED(ctx->r24) > 0) {
        // 0x800FCC20: nop
    
            goto L_800FCC3C;
    }
    // 0x800FCC20: nop

    // 0x800FCC24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCC28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCC2C: jal         0x8002B0E4
    // 0x800FCC30: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800FCC30: nop

    after_8:
    // 0x800FCC34: b           L_800FCC88
    // 0x800FCC38: nop

        goto L_800FCC88;
    // 0x800FCC38: nop

L_800FCC3C:
    // 0x800FCC3C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FCC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCC48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FCC4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800FCC50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800FCC54: jal         0x80029F58
    // 0x800FCC58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x800FCC58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x800FCC5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FCC60: bne         $v0, $at, L_800FCC80
    if (ctx->r2 != ctx->r1) {
        // 0x800FCC64: nop
    
            goto L_800FCC80;
    }
    // 0x800FCC64: nop

    // 0x800FCC68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCC6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCC70: jal         0x8002B0E4
    // 0x800FCC74: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x800FCC74: nop

    after_10:
    // 0x800FCC78: b           L_800FCC88
    // 0x800FCC7C: nop

        goto L_800FCC88;
    // 0x800FCC7C: nop

L_800FCC80:
    // 0x800FCC80: b           L_800FCC88
    // 0x800FCC84: nop

        goto L_800FCC88;
    // 0x800FCC84: nop

L_800FCC88:
    // 0x800FCC88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCC8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FCC90: jr          $ra
    // 0x800FCC94: nop

    return;
    // 0x800FCC94: nop

;}
RECOMP_FUNC void func_800F7E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7E2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7E30: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800F7E34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F7E38: bne         $t6, $at, L_800F7E94
    if (ctx->r14 != ctx->r1) {
        // 0x800F7E3C: nop
    
            goto L_800F7E94;
    }
    // 0x800F7E3C: nop

    // 0x800F7E40: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F7E44: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F7E48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7E4C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F7E50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F7E54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F7E58: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F7E5C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F7E60: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F7E64: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800F7E68: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800F7E6C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F7E70: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800F7E74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F7E78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F7E7C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F7E80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F7E84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F7E88: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F7E8C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F7E90: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800F7E94:
    // 0x800F7E94: jr          $ra
    // 0x800F7E98: nop

    return;
    // 0x800F7E98: nop

    // 0x800F7E9C: jr          $ra
    // 0x800F7EA0: nop

    return;
    // 0x800F7EA0: nop

;}
RECOMP_FUNC void func_800FF88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF88C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FF890: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x800FF894: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800FF898: nop

    // 0x800FF89C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x800FF8A0: beq         $t8, $zero, L_800FF8D4
    if (ctx->r24 == 0) {
        // 0x800FF8A4: nop
    
            goto L_800FF8D4;
    }
    // 0x800FF8A4: nop

    // 0x800FF8A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800FF8AC: lh          $t9, -0x1C0C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1C0C);
    // 0x800FF8B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF8B4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800FF8B8: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x800FF8BC: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800FF8C0: bgez        $t2, L_800FF8D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800FF8C4: sh          $t0, -0x1C0C($at)
        MEM_H(-0X1C0C, ctx->r1) = ctx->r8;
            goto L_800FF8D4;
    }
    // 0x800FF8C4: sh          $t0, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r8;
    // 0x800FF8C8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x800FF8CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF8D0: sh          $t3, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r11;
L_800FF8D4:
    // 0x800FF8D4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FF8D8: addiu       $t4, $t4, -0x1D10
    ctx->r12 = ADD32(ctx->r12, -0X1D10);
    // 0x800FF8DC: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800FF8E0: nop

    // 0x800FF8E4: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x800FF8E8: beq         $t6, $zero, L_800FF920
    if (ctx->r14 == 0) {
        // 0x800FF8EC: nop
    
            goto L_800FF920;
    }
    // 0x800FF8EC: nop

    // 0x800FF8F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FF8F4: lh          $t7, -0x1C0C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1C0C);
    // 0x800FF8F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF8FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FF900: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800FF904: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800FF908: sh          $t8, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r24;
    // 0x800FF90C: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x800FF910: bne         $at, $zero, L_800FF920
    if (ctx->r1 != 0) {
        // 0x800FF914: nop
    
            goto L_800FF920;
    }
    // 0x800FF914: nop

    // 0x800FF918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF91C: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
L_800FF920:
    // 0x800FF920: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800FF924: lhu         $t1, -0x1C0C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C0C);
    // 0x800FF928: nop

    // 0x800FF92C: sltiu       $at, $t1, 0x8
    ctx->r1 = ctx->r9 < 0X8 ? 1 : 0;
    // 0x800FF930: beq         $at, $zero, L_800FFD20
    if (ctx->r1 == 0) {
        // 0x800FF934: nop
    
            goto L_800FFD20;
    }
    // 0x800FF934: nop

    // 0x800FF938: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FF93C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FF940: addu        $at, $at, $t1
    gpr jr_addend_800FF94C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800FF944: lw          $t1, 0x46D4($at)
    ctx->r9 = ADD32(ctx->r1, 0X46D4);
    // 0x800FF948: nop

    // 0x800FF94C: jr          $t1
    // 0x800FF950: nop

    switch (jr_addend_800FF94C >> 2) {
        case 0: goto L_800FF954; break;
        case 1: goto L_800FF9F0; break;
        case 2: goto L_800FFA8C; break;
        case 3: goto L_800FFACC; break;
        case 4: goto L_800FFB0C; break;
        case 5: goto L_800FFB4C; break;
        case 6: goto L_800FFBE8; break;
        case 7: goto L_800FFC84; break;
        default: switch_error(__func__, 0x800FF94C, 0x801346D4);
    }
    // 0x800FF950: nop

L_800FF954:
    // 0x800FF954: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FF958: addiu       $t2, $t2, -0x1D10
    ctx->r10 = ADD32(ctx->r10, -0X1D10);
    // 0x800FF95C: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x800FF960: nop

    // 0x800FF964: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x800FF968: beq         $t4, $zero, L_800FF99C
    if (ctx->r12 == 0) {
        // 0x800FF96C: nop
    
            goto L_800FF99C;
    }
    // 0x800FF96C: nop

    // 0x800FF970: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FF974: lb          $t5, -0x1C1C($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C1C);
    // 0x800FF978: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF97C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800FF980: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x800FF984: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x800FF988: bgez        $t8, L_800FF99C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800FF98C: sb          $t6, -0x1C1C($at)
        MEM_B(-0X1C1C, ctx->r1) = ctx->r14;
            goto L_800FF99C;
    }
    // 0x800FF98C: sb          $t6, -0x1C1C($at)
    MEM_B(-0X1C1C, ctx->r1) = ctx->r14;
    // 0x800FF990: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FF994: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF998: sb          $t9, -0x1C1C($at)
    MEM_B(-0X1C1C, ctx->r1) = ctx->r25;
L_800FF99C:
    // 0x800FF99C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FF9A0: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x800FF9A4: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FF9A8: nop

    // 0x800FF9AC: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x800FF9B0: beq         $t2, $zero, L_800FF9E8
    if (ctx->r10 == 0) {
        // 0x800FF9B4: nop
    
            goto L_800FF9E8;
    }
    // 0x800FF9B4: nop

    // 0x800FF9B8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FF9BC: lb          $t3, -0x1C1C($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1C1C);
    // 0x800FF9C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF9C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FF9C8: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x800FF9CC: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x800FF9D0: sb          $t4, -0x1C1C($at)
    MEM_B(-0X1C1C, ctx->r1) = ctx->r12;
    // 0x800FF9D4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800FF9D8: bne         $at, $zero, L_800FF9E8
    if (ctx->r1 != 0) {
        // 0x800FF9DC: nop
    
            goto L_800FF9E8;
    }
    // 0x800FF9DC: nop

    // 0x800FF9E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF9E4: sb          $zero, -0x1C1C($at)
    MEM_B(-0X1C1C, ctx->r1) = 0;
L_800FF9E8:
    // 0x800FF9E8: b           L_800FFD20
    // 0x800FF9EC: nop

        goto L_800FFD20;
    // 0x800FF9EC: nop

L_800FF9F0:
    // 0x800FF9F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FF9F4: addiu       $t7, $t7, -0x1D10
    ctx->r15 = ADD32(ctx->r15, -0X1D10);
    // 0x800FF9F8: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800FF9FC: nop

    // 0x800FFA00: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x800FFA04: beq         $t9, $zero, L_800FFA38
    if (ctx->r25 == 0) {
        // 0x800FFA08: nop
    
            goto L_800FFA38;
    }
    // 0x800FFA08: nop

    // 0x800FFA0C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FFA10: lb          $t0, -0x1C09($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C09);
    // 0x800FFA14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFA18: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FFA1C: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x800FFA20: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x800FFA24: bgez        $t3, L_800FFA38
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800FFA28: sb          $t1, -0x1C09($at)
        MEM_B(-0X1C09, ctx->r1) = ctx->r9;
            goto L_800FFA38;
    }
    // 0x800FFA28: sb          $t1, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = ctx->r9;
    // 0x800FFA2C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800FFA30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFA34: sb          $t4, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = ctx->r12;
L_800FFA38:
    // 0x800FFA38: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FFA3C: addiu       $t5, $t5, -0x1D10
    ctx->r13 = ADD32(ctx->r13, -0X1D10);
    // 0x800FFA40: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800FFA44: nop

    // 0x800FFA48: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x800FFA4C: beq         $t7, $zero, L_800FFA84
    if (ctx->r15 == 0) {
        // 0x800FFA50: nop
    
            goto L_800FFA84;
    }
    // 0x800FFA50: nop

    // 0x800FFA54: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFA58: lb          $t8, -0x1C09($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C09);
    // 0x800FFA5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFA60: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800FFA64: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x800FFA68: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x800FFA6C: sb          $t9, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = ctx->r25;
    // 0x800FFA70: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800FFA74: bne         $at, $zero, L_800FFA84
    if (ctx->r1 != 0) {
        // 0x800FFA78: nop
    
            goto L_800FFA84;
    }
    // 0x800FFA78: nop

    // 0x800FFA7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFA80: sb          $zero, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = 0;
L_800FFA84:
    // 0x800FFA84: b           L_800FFD20
    // 0x800FFA88: nop

        goto L_800FFD20;
    // 0x800FFA88: nop

L_800FFA8C:
    // 0x800FFA8C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FFA90: lhu         $t2, -0x1C60($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C60);
    // 0x800FFA94: nop

    // 0x800FFA98: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x800FFA9C: bne         $t3, $zero, L_800FFAB0
    if (ctx->r11 != 0) {
        // 0x800FFAA0: nop
    
            goto L_800FFAB0;
    }
    // 0x800FFAA0: nop

    // 0x800FFAA4: andi        $t4, $t2, 0x100
    ctx->r12 = ctx->r10 & 0X100;
    // 0x800FFAA8: beq         $t4, $zero, L_800FFAC4
    if (ctx->r12 == 0) {
        // 0x800FFAAC: nop
    
            goto L_800FFAC4;
    }
    // 0x800FFAAC: nop

L_800FFAB0:
    // 0x800FFAB0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FFAB4: lb          $t5, -0x1C04($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C04);
    // 0x800FFAB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFABC: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x800FFAC0: sb          $t6, -0x1C04($at)
    MEM_B(-0X1C04, ctx->r1) = ctx->r14;
L_800FFAC4:
    // 0x800FFAC4: b           L_800FFD20
    // 0x800FFAC8: nop

        goto L_800FFD20;
    // 0x800FFAC8: nop

L_800FFACC:
    // 0x800FFACC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FFAD0: lhu         $t7, -0x1C60($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C60);
    // 0x800FFAD4: nop

    // 0x800FFAD8: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x800FFADC: bne         $t8, $zero, L_800FFAF0
    if (ctx->r24 != 0) {
        // 0x800FFAE0: nop
    
            goto L_800FFAF0;
    }
    // 0x800FFAE0: nop

    // 0x800FFAE4: andi        $t9, $t7, 0x100
    ctx->r25 = ctx->r15 & 0X100;
    // 0x800FFAE8: beq         $t9, $zero, L_800FFB04
    if (ctx->r25 == 0) {
        // 0x800FFAEC: nop
    
            goto L_800FFB04;
    }
    // 0x800FFAEC: nop

L_800FFAF0:
    // 0x800FFAF0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FFAF4: lb          $t0, -0x1BFC($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1BFC);
    // 0x800FFAF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFAFC: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x800FFB00: sb          $t1, -0x1BFC($at)
    MEM_B(-0X1BFC, ctx->r1) = ctx->r9;
L_800FFB04:
    // 0x800FFB04: b           L_800FFD20
    // 0x800FFB08: nop

        goto L_800FFD20;
    // 0x800FFB08: nop

L_800FFB0C:
    // 0x800FFB0C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FFB10: lhu         $t3, -0x1C60($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1C60);
    // 0x800FFB14: nop

    // 0x800FFB18: andi        $t2, $t3, 0x200
    ctx->r10 = ctx->r11 & 0X200;
    // 0x800FFB1C: bne         $t2, $zero, L_800FFB30
    if (ctx->r10 != 0) {
        // 0x800FFB20: nop
    
            goto L_800FFB30;
    }
    // 0x800FFB20: nop

    // 0x800FFB24: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x800FFB28: beq         $t4, $zero, L_800FFB44
    if (ctx->r12 == 0) {
        // 0x800FFB2C: nop
    
            goto L_800FFB44;
    }
    // 0x800FFB2C: nop

L_800FFB30:
    // 0x800FFB30: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FFB34: lb          $t5, -0x1BF4($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1BF4);
    // 0x800FFB38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFB3C: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x800FFB40: sb          $t6, -0x1BF4($at)
    MEM_B(-0X1BF4, ctx->r1) = ctx->r14;
L_800FFB44:
    // 0x800FFB44: b           L_800FFD20
    // 0x800FFB48: nop

        goto L_800FFD20;
    // 0x800FFB48: nop

L_800FFB4C:
    // 0x800FFB4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFB50: addiu       $t8, $t8, -0x1D10
    ctx->r24 = ADD32(ctx->r24, -0X1D10);
    // 0x800FFB54: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x800FFB58: nop

    // 0x800FFB5C: andi        $t9, $t7, 0x200
    ctx->r25 = ctx->r15 & 0X200;
    // 0x800FFB60: beq         $t9, $zero, L_800FFB94
    if (ctx->r25 == 0) {
        // 0x800FFB64: nop
    
            goto L_800FFB94;
    }
    // 0x800FFB64: nop

    // 0x800FFB68: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800FFB6C: lb          $t0, 0x523F($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523F);
    // 0x800FFB70: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFB74: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FFB78: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x800FFB7C: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x800FFB80: bgez        $t3, L_800FFB94
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800FFB84: sb          $t1, 0x523F($at)
        MEM_B(0X523F, ctx->r1) = ctx->r9;
            goto L_800FFB94;
    }
    // 0x800FFB84: sb          $t1, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r9;
    // 0x800FFB88: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800FFB8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFB90: sb          $t4, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r12;
L_800FFB94:
    // 0x800FFB94: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FFB98: addiu       $t5, $t5, -0x1D10
    ctx->r13 = ADD32(ctx->r13, -0X1D10);
    // 0x800FFB9C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800FFBA0: nop

    // 0x800FFBA4: andi        $t8, $t6, 0x100
    ctx->r24 = ctx->r14 & 0X100;
    // 0x800FFBA8: beq         $t8, $zero, L_800FFBE0
    if (ctx->r24 == 0) {
        // 0x800FFBAC: nop
    
            goto L_800FFBE0;
    }
    // 0x800FFBAC: nop

    // 0x800FFBB0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800FFBB4: lb          $t7, 0x523F($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523F);
    // 0x800FFBB8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFBBC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800FFBC0: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x800FFBC4: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x800FFBC8: sb          $t9, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r25;
    // 0x800FFBCC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x800FFBD0: bne         $at, $zero, L_800FFBE0
    if (ctx->r1 != 0) {
        // 0x800FFBD4: nop
    
            goto L_800FFBE0;
    }
    // 0x800FFBD4: nop

    // 0x800FFBD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFBDC: sb          $zero, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = 0;
L_800FFBE0:
    // 0x800FFBE0: b           L_800FFD20
    // 0x800FFBE4: nop

        goto L_800FFD20;
    // 0x800FFBE4: nop

L_800FFBE8:
    // 0x800FFBE8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FFBEC: addiu       $t2, $t2, -0x1D10
    ctx->r10 = ADD32(ctx->r10, -0X1D10);
    // 0x800FFBF0: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x800FFBF4: nop

    // 0x800FFBF8: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x800FFBFC: beq         $t4, $zero, L_800FFC30
    if (ctx->r12 == 0) {
        // 0x800FFC00: nop
    
            goto L_800FFC30;
    }
    // 0x800FFC00: nop

    // 0x800FFC04: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800FFC08: lb          $t5, 0x5240($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5240);
    // 0x800FFC0C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFC10: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800FFC14: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x800FFC18: sra         $t7, $t8, 24
    ctx->r15 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800FFC1C: bgez        $t7, L_800FFC30
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800FFC20: sb          $t6, 0x5240($at)
        MEM_B(0X5240, ctx->r1) = ctx->r14;
            goto L_800FFC30;
    }
    // 0x800FFC20: sb          $t6, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r14;
    // 0x800FFC24: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800FFC28: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFC2C: sb          $t9, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r25;
L_800FFC30:
    // 0x800FFC30: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FFC34: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x800FFC38: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FFC3C: nop

    // 0x800FFC40: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x800FFC44: beq         $t2, $zero, L_800FFC7C
    if (ctx->r10 == 0) {
        // 0x800FFC48: nop
    
            goto L_800FFC7C;
    }
    // 0x800FFC48: nop

    // 0x800FFC4C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800FFC50: lb          $t3, 0x5240($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5240);
    // 0x800FFC54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFC58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FFC5C: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x800FFC60: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x800FFC64: sb          $t4, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r12;
    // 0x800FFC68: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x800FFC6C: bne         $at, $zero, L_800FFC7C
    if (ctx->r1 != 0) {
        // 0x800FFC70: nop
    
            goto L_800FFC7C;
    }
    // 0x800FFC70: nop

    // 0x800FFC74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FFC78: sb          $zero, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = 0;
L_800FFC7C:
    // 0x800FFC7C: b           L_800FFD20
    // 0x800FFC80: nop

        goto L_800FFD20;
    // 0x800FFC80: nop

L_800FFC84:
    // 0x800FFC84: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFC88: addiu       $t8, $t8, -0x1D10
    ctx->r24 = ADD32(ctx->r24, -0X1D10);
    // 0x800FFC8C: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x800FFC90: nop

    // 0x800FFC94: andi        $t9, $t7, 0x200
    ctx->r25 = ctx->r15 & 0X200;
    // 0x800FFC98: beq         $t9, $zero, L_800FFCD0
    if (ctx->r25 == 0) {
        // 0x800FFC9C: nop
    
            goto L_800FFCD0;
    }
    // 0x800FFC9C: nop

    // 0x800FFCA0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FFCA4: lbu         $t0, 0x7974($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7974);
    // 0x800FFCA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFCAC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FFCB0: sb          $t1, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r9;
    // 0x800FFCB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800FFCB8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800FFCBC: bne         $t2, $at, L_800FFCD0
    if (ctx->r10 != ctx->r1) {
        // 0x800FFCC0: nop
    
            goto L_800FFCD0;
    }
    // 0x800FFCC0: nop

    // 0x800FFCC4: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x800FFCC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFCCC: sb          $t3, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r11;
L_800FFCD0:
    // 0x800FFCD0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FFCD4: addiu       $t4, $t4, -0x1D10
    ctx->r12 = ADD32(ctx->r12, -0X1D10);
    // 0x800FFCD8: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800FFCDC: nop

    // 0x800FFCE0: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x800FFCE4: beq         $t6, $zero, L_800FFD18
    if (ctx->r14 == 0) {
        // 0x800FFCE8: nop
    
            goto L_800FFD18;
    }
    // 0x800FFCE8: nop

    // 0x800FFCEC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFCF0: lbu         $t8, 0x7974($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7974);
    // 0x800FFCF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFCF8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x800FFCFC: sb          $t7, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r15;
    // 0x800FFD00: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x800FFD04: slti        $at, $t9, 0x1F
    ctx->r1 = SIGNED(ctx->r25) < 0X1F ? 1 : 0;
    // 0x800FFD08: bne         $at, $zero, L_800FFD18
    if (ctx->r1 != 0) {
        // 0x800FFD0C: nop
    
            goto L_800FFD18;
    }
    // 0x800FFD0C: nop

    // 0x800FFD10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFD14: sb          $zero, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = 0;
L_800FFD18:
    // 0x800FFD18: b           L_800FFD20
    // 0x800FFD1C: nop

        goto L_800FFD20;
    // 0x800FFD1C: nop

L_800FFD20:
    // 0x800FFD20: jr          $ra
    // 0x800FFD24: nop

    return;
    // 0x800FFD24: nop

    // 0x800FFD28: jr          $ra
    // 0x800FFD2C: nop

    return;
    // 0x800FFD2C: nop

;}
RECOMP_FUNC void func_8007E720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E728: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007E72C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007E730:
    // 0x8007E730: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E734: jal         0x8001A928
    // 0x8007E738: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007E738: nop

    after_0:
    // 0x8007E73C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E740: nop

    // 0x8007E744: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007E748: slti        $at, $t8, 0xE
    ctx->r1 = SIGNED(ctx->r24) < 0XE ? 1 : 0;
    // 0x8007E74C: bne         $at, $zero, L_8007E730
    if (ctx->r1 != 0) {
        // 0x8007E750: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8007E730;
    }
    // 0x8007E750: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8007E754: b           L_8007E75C
    // 0x8007E758: nop

        goto L_8007E75C;
    // 0x8007E758: nop

L_8007E75C:
    // 0x8007E75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E764: jr          $ra
    // 0x8007E768: nop

    return;
    // 0x8007E768: nop

;}
RECOMP_FUNC void func_8009738C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009738C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80097390: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80097394: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80097398: bne         $t6, $at, L_80097428
    if (ctx->r14 != ctx->r1) {
        // 0x8009739C: nop
    
            goto L_80097428;
    }
    // 0x8009739C: nop

    // 0x800973A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800973A4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800973A8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800973AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800973B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800973B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800973B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800973BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800973C0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800973C4: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800973C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800973CC: bne         $t9, $at, L_80097428
    if (ctx->r25 != ctx->r1) {
        // 0x800973D0: nop
    
            goto L_80097428;
    }
    // 0x800973D0: nop

    // 0x800973D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800973D8: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800973DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800973E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800973E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800973E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800973EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800973F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800973F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800973F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800973FC: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80097400: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80097404: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80097408: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009740C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80097410: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80097414: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80097418: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009741C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80097420: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80097424: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80097428:
    // 0x80097428: jr          $ra
    // 0x8009742C: nop

    return;
    // 0x8009742C: nop

    // 0x80097430: jr          $ra
    // 0x80097434: nop

    return;
    // 0x80097434: nop

;}
RECOMP_FUNC void func_800EBC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBC88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EBC8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EBC90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EBC94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EBC98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EBC9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EBCA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBCA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EBCA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBCAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EBCB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EBCB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EBCB8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EBCBC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EBCC0: nop

    // 0x800EBCC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EBCC8: nop

    // 0x800EBCCC: bne         $t1, $zero, L_800EBD24
    if (ctx->r9 != 0) {
        // 0x800EBCD0: nop
    
            goto L_800EBD24;
    }
    // 0x800EBCD0: nop

    // 0x800EBCD4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EBCD8: nop

    // 0x800EBCDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EBCE0: nop

    // 0x800EBCE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EBCE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EBCEC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800EBCF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EBCF4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EBCF8: nop

    // 0x800EBCFC: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800EBD00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBD04: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800EBD08: addiu       $t6, $t6, -0x66F8
    ctx->r14 = ADD32(ctx->r14, -0X66F8);
    // 0x800EBD0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBD10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800EBD14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EBD18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EBD1C: jal         0x8001C0EC
    // 0x800EBD20: addiu       $a3, $zero, 0xC4
    ctx->r7 = ADD32(0, 0XC4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EBD20: addiu       $a3, $zero, 0xC4
    ctx->r7 = ADD32(0, 0XC4);
    after_0:
L_800EBD24:
    // 0x800EBD24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBD28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBD2C: jal         0x80028FA0
    // 0x800EBD30: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800EBD30: nop

    after_1:
    // 0x800EBD34: beq         $v0, $zero, L_800EBD4C
    if (ctx->r2 == 0) {
        // 0x800EBD38: nop
    
            goto L_800EBD4C;
    }
    // 0x800EBD38: nop

    // 0x800EBD3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBD40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBD44: jal         0x8002B0E4
    // 0x800EBD48: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800EBD48: nop

    after_2:
L_800EBD4C:
    // 0x800EBD4C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EBD50: nop

    // 0x800EBD54: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800EBD58: nop

    // 0x800EBD5C: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x800EBD60: bne         $at, $zero, L_800EBDA8
    if (ctx->r1 != 0) {
        // 0x800EBD64: nop
    
            goto L_800EBDA8;
    }
    // 0x800EBD64: nop

    // 0x800EBD68: jal         0x80014E80
    // 0x800EBD6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800EBD6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x800EBD70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800EBD74: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800EBD78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBD7C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800EBD80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBD84: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EBD88: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800EBD8C: jal         0x8002A8B4
    // 0x800EBD90: nop

    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800EBD90: nop

    after_4:
    // 0x800EBD94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EBD98: nop

    // 0x800EBD9C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800EBDA0: b           L_800EBDC0
    // 0x800EBDA4: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
        goto L_800EBDC0;
    // 0x800EBDA4: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_800EBDA8:
    // 0x800EBDA8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EBDAC: nop

    // 0x800EBDB0: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800EBDB4: nop

    // 0x800EBDB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EBDBC: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800EBDC0:
    // 0x800EBDC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBDC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBDC8: jal         0x80029C40
    // 0x800EBDCC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800EBDCC: nop

    after_5:
    // 0x800EBDD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EBDD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EBDD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBDDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBDE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EBDE4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800EBDE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EBDEC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EBDF0: jal         0x80029018
    // 0x800EBDF4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800EBDF4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800EBDF8: beq         $v0, $zero, L_800EBE10
    if (ctx->r2 == 0) {
        // 0x800EBDFC: nop
    
            goto L_800EBE10;
    }
    // 0x800EBDFC: nop

    // 0x800EBE00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBE04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBE08: jal         0x8002B0E4
    // 0x800EBE0C: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800EBE0C: nop

    after_7:
L_800EBE10:
    // 0x800EBE10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800EBE14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EBE18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBE1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBE20: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EBE24: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EBE28: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EBE2C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EBE30: jal         0x800295C0
    // 0x800EBE34: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x800EBE34: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800EBE38: beq         $v0, $zero, L_800EBE4C
    if (ctx->r2 == 0) {
        // 0x800EBE3C: nop
    
            goto L_800EBE4C;
    }
    // 0x800EBE3C: nop

    // 0x800EBE40: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EBE44: b           L_800EBE58
    // 0x800EBE48: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_800EBE58;
    // 0x800EBE48: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_800EBE4C:
    // 0x800EBE4C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EBE50: nop

    // 0x800EBE54: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_800EBE58:
    // 0x800EBE58: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EBE5C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800EBE60: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800EBE64: nop

    // 0x800EBE68: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800EBE6C: nop

    // 0x800EBE70: bc1f        L_800EBE88
    if (!c1cs) {
        // 0x800EBE74: nop
    
            goto L_800EBE88;
    }
    // 0x800EBE74: nop

    // 0x800EBE78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBE7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBE80: jal         0x8002B0E4
    // 0x800EBE84: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800EBE84: nop

    after_9:
L_800EBE88:
    // 0x800EBE88: b           L_800EBE90
    // 0x800EBE8C: nop

        goto L_800EBE90;
    // 0x800EBE8C: nop

L_800EBE90:
    // 0x800EBE90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBE94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EBE98: jr          $ra
    // 0x800EBE9C: nop

    return;
    // 0x800EBE9C: nop

;}
RECOMP_FUNC void func_8007C39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C39C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007C3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C3A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007C3A8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007C3AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007C3B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007C3B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C3B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C3BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C3C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007C3C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007C3C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007C3CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007C3D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007C3D4: jal         0x8001B62C
    // 0x8007C3D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007C3D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007C3DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007C3E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007C3E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007C3E8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007C3EC: nop

    // 0x8007C3F0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007C3F4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007C3F8: nop

    // 0x8007C3FC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8007C400: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007C404: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007C408: nop

    // 0x8007C40C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007C410: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8007C414: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007C418: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8007C41C: nop

    // 0x8007C420: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007C424: nop

    // 0x8007C428: bgez        $t2, L_8007C478
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8007C42C: nop
    
            goto L_8007C478;
    }
    // 0x8007C42C: nop

    // 0x8007C430: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007C434: jal         0x8001B580
    // 0x8007C438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_1;
    // 0x8007C438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007C43C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007C440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007C444: nop

    // 0x8007C448: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007C44C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8007C450: nop

    // 0x8007C454: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8007C458: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007C45C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007C460: nop

    // 0x8007C464: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007C468: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8007C46C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8007C470: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8007C474: nop

L_8007C478:
    // 0x8007C478: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007C47C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007C480: jal         0x8001B880
    // 0x8007C484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_2;
    // 0x8007C484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007C488: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007C48C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007C490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007C494: bne         $t5, $at, L_8007C4B0
    if (ctx->r13 != ctx->r1) {
        // 0x8007C498: nop
    
            goto L_8007C4B0;
    }
    // 0x8007C498: nop

    // 0x8007C49C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007C4A0: addiu       $t6, $t6, -0x3BB8
    ctx->r14 = ADD32(ctx->r14, -0X3BB8);
    // 0x8007C4A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007C4A8: b           L_8007C594
    // 0x8007C4AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_8007C594;
    // 0x8007C4AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8007C4B0:
    // 0x8007C4B0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007C4B4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8007C4B8: bne         $t7, $at, L_8007C4D4
    if (ctx->r15 != ctx->r1) {
        // 0x8007C4BC: nop
    
            goto L_8007C4D4;
    }
    // 0x8007C4BC: nop

    // 0x8007C4C0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007C4C4: addiu       $t8, $t8, -0x3BB0
    ctx->r24 = ADD32(ctx->r24, -0X3BB0);
    // 0x8007C4C8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8007C4CC: b           L_8007C594
    // 0x8007C4D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_8007C594;
    // 0x8007C4D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8007C4D4:
    // 0x8007C4D4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007C4D8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8007C4DC: bne         $t9, $at, L_8007C4F4
    if (ctx->r25 != ctx->r1) {
        // 0x8007C4E0: nop
    
            goto L_8007C4F4;
    }
    // 0x8007C4E0: nop

    // 0x8007C4E4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007C4E8: addiu       $t0, $t0, -0x3BA8
    ctx->r8 = ADD32(ctx->r8, -0X3BA8);
    // 0x8007C4EC: b           L_8007C594
    // 0x8007C4F0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_8007C594;
    // 0x8007C4F0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8007C4F4:
    // 0x8007C4F4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007C4F8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8007C4FC: bne         $t1, $at, L_8007C514
    if (ctx->r9 != ctx->r1) {
        // 0x8007C500: nop
    
            goto L_8007C514;
    }
    // 0x8007C500: nop

    // 0x8007C504: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8007C508: addiu       $t2, $t2, -0x3B64
    ctx->r10 = ADD32(ctx->r10, -0X3B64);
    // 0x8007C50C: b           L_8007C594
    // 0x8007C510: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_8007C594;
    // 0x8007C510: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_8007C514:
    // 0x8007C514: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007C518: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007C51C: bne         $t3, $at, L_8007C534
    if (ctx->r11 != ctx->r1) {
        // 0x8007C520: nop
    
            goto L_8007C534;
    }
    // 0x8007C520: nop

    // 0x8007C524: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8007C528: addiu       $t4, $t4, -0x3B20
    ctx->r12 = ADD32(ctx->r12, -0X3B20);
    // 0x8007C52C: b           L_8007C594
    // 0x8007C530: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_8007C594;
    // 0x8007C530: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_8007C534:
    // 0x8007C534: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007C538: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8007C53C: bne         $t5, $at, L_8007C558
    if (ctx->r13 != ctx->r1) {
        // 0x8007C540: nop
    
            goto L_8007C558;
    }
    // 0x8007C540: nop

    // 0x8007C544: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007C548: addiu       $t6, $t6, -0x3A94
    ctx->r14 = ADD32(ctx->r14, -0X3A94);
    // 0x8007C54C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007C550: b           L_8007C594
    // 0x8007C554: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_8007C594;
    // 0x8007C554: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8007C558:
    // 0x8007C558: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007C55C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8007C560: bne         $t7, $at, L_8007C578
    if (ctx->r15 != ctx->r1) {
        // 0x8007C564: nop
    
            goto L_8007C578;
    }
    // 0x8007C564: nop

    // 0x8007C568: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007C56C: addiu       $t8, $t8, -0x3A8C
    ctx->r24 = ADD32(ctx->r24, -0X3A8C);
    // 0x8007C570: b           L_8007C594
    // 0x8007C574: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_8007C594;
    // 0x8007C574: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8007C578:
    // 0x8007C578: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007C57C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8007C580: bne         $t9, $at, L_8007C594
    if (ctx->r25 != ctx->r1) {
        // 0x8007C584: nop
    
            goto L_8007C594;
    }
    // 0x8007C584: nop

    // 0x8007C588: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007C58C: addiu       $t0, $t0, -0x3A48
    ctx->r8 = ADD32(ctx->r8, -0X3A48);
    // 0x8007C590: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8007C594:
    // 0x8007C594: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C598: nop

    // 0x8007C59C: beq         $t1, $zero, L_8007C5C0
    if (ctx->r9 == 0) {
        // 0x8007C5A0: nop
    
            goto L_8007C5C0;
    }
    // 0x8007C5A0: nop

    // 0x8007C5A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8007C5A8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007C5AC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C5B0: jal         0x80079BEC
    // 0x8007C5B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80079BEC(rdram, ctx);
        goto after_3;
    // 0x8007C5B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x8007C5B8: b           L_8007C5D8
    // 0x8007C5BC: nop

        goto L_8007C5D8;
    // 0x8007C5BC: nop

L_8007C5C0:
    // 0x8007C5C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007C5C4: jal         0x80079874
    // 0x8007C5C8: nop

    func_80079874(rdram, ctx);
        goto after_4;
    // 0x8007C5C8: nop

    after_4:
    // 0x8007C5CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007C5D0: jal         0x80079960
    // 0x8007C5D4: nop

    func_80079960(rdram, ctx);
        goto after_5;
    // 0x8007C5D4: nop

    after_5:
L_8007C5D8:
    // 0x8007C5D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007C5DC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007C5E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8007C5E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8007C5E8: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8007C5EC: jal         0x80015538
    // 0x8007C5F0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8007C5F0: nop

    after_6:
    // 0x8007C5F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007C5F8: nop

    // 0x8007C5FC: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x8007C600: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007C604: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8007C608: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007C60C: lwc1        $f14, 0x18($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X18);
    // 0x8007C610: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8007C614: jal         0x80015538
    // 0x8007C618: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x8007C618: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x8007C61C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007C620: nop

    // 0x8007C624: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
    // 0x8007C628: b           L_8007C630
    // 0x8007C62C: nop

        goto L_8007C630;
    // 0x8007C62C: nop

L_8007C630:
    // 0x8007C630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007C638: jr          $ra
    // 0x8007C63C: nop

    return;
    // 0x8007C63C: nop

;}
RECOMP_FUNC void func_80092D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092D68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092D6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092D70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092D74: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092D78: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092D7C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092D80: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092D84: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092D88: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092D8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092D90: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092D94: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092D98: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092D9C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092DA0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092DA4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092DA8: addiu       $a1, $a1, 0x1774
    ctx->r5 = ADD32(ctx->r5, 0X1774);
    // 0x80092DAC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092DB0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092DB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092DB8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092DBC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092DC0: jal         0x80027464
    // 0x80092DC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092DC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092DC8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092DCC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092DD0: addiu       $t1, $t1, 0x6F48
    ctx->r9 = ADD32(ctx->r9, 0X6F48);
    // 0x80092DD4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092DD8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092DE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80092DE4: jal         0x8001C0EC
    // 0x80092DE8: addiu       $a3, $zero, 0x27F
    ctx->r7 = ADD32(0, 0X27F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092DE8: addiu       $a3, $zero, 0x27F
    ctx->r7 = ADD32(0, 0X27F);
    after_1:
    // 0x80092DEC: b           L_80092DF4
    // 0x80092DF0: nop

        goto L_80092DF4;
    // 0x80092DF0: nop

L_80092DF4:
    // 0x80092DF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092DF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092DFC: jr          $ra
    // 0x80092E00: nop

    return;
    // 0x80092E00: nop

;}
RECOMP_FUNC void func_800F94A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F94A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F94AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F94B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F94B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F94B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F94BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F94C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F94C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F94C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F94CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F94D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F94D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F94D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F94DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F94E0: nop

    // 0x800F94E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F94E8: nop

    // 0x800F94EC: bne         $t1, $zero, L_800F955C
    if (ctx->r9 != 0) {
        // 0x800F94F0: nop
    
            goto L_800F955C;
    }
    // 0x800F94F0: nop

    // 0x800F94F4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F94F8: nop

    // 0x800F94FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F9500: nop

    // 0x800F9504: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F9508: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F950C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F9510: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9514: nop

    // 0x800F9518: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800F951C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F9520: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9524: nop

    // 0x800F9528: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x800F952C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F9530: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9534: nop

    // 0x800F9538: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x800F953C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800F9540: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F9544: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9548: nop

    // 0x800F954C: swc1        $f10, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f10.u32l;
    // 0x800F9550: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9554: nop

    // 0x800F9558: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_800F955C:
    // 0x800F955C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9568: jal         0x8001B6BC
    // 0x800F956C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800F956C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x800F9570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9578: jal         0x80029C40
    // 0x800F957C: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800F957C: nop

    after_1:
    // 0x800F9580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9588: jal         0x80029D04
    // 0x800F958C: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800F958C: nop

    after_2:
    // 0x800F9590: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9594: nop

    // 0x800F9598: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800F959C: nop

    // 0x800F95A0: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x800F95A4: bne         $at, $zero, L_800F95C4
    if (ctx->r1 != 0) {
        // 0x800F95A8: nop
    
            goto L_800F95C4;
    }
    // 0x800F95A8: nop

    // 0x800F95AC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F95B0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800F95B4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F95B8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F95BC: b           L_800F95DC
    // 0x800F95C0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800F95DC;
    // 0x800F95C0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F95C4:
    // 0x800F95C4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F95C8: nop

    // 0x800F95CC: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800F95D0: nop

    // 0x800F95D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800F95D8: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800F95DC:
    // 0x800F95DC: b           L_800F95E4
    // 0x800F95E0: nop

        goto L_800F95E4;
    // 0x800F95E0: nop

L_800F95E4:
    // 0x800F95E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F95E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F95EC: jr          $ra
    // 0x800F95F0: nop

    return;
    // 0x800F95F0: nop

;}
RECOMP_FUNC void func_80095448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095448: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009544C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80095450: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80095454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095458: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009545C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095460: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095464: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095468: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009546C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095470: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095474: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80095478: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009547C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80095480: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80095484: nop

    // 0x80095488: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009548C: nop

    // 0x80095490: bne         $t1, $zero, L_800954DC
    if (ctx->r9 != 0) {
        // 0x80095494: nop
    
            goto L_800954DC;
    }
    // 0x80095494: nop

    // 0x80095498: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8009549C: nop

    // 0x800954A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800954A4: nop

    // 0x800954A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800954AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800954B0: jal         0x80014E80
    // 0x800954B4: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800954B4: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800954B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800954BC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800954C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800954C4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x800954C8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800954CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800954D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800954D4: nop

    // 0x800954D8: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
L_800954DC:
    // 0x800954DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800954E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800954E4: jal         0x80028FA0
    // 0x800954E8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800954E8: nop

    after_1:
    // 0x800954EC: beq         $v0, $zero, L_80095504
    if (ctx->r2 == 0) {
        // 0x800954F0: nop
    
            goto L_80095504;
    }
    // 0x800954F0: nop

    // 0x800954F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800954F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800954FC: jal         0x80029B60
    // 0x80095500: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80095500: nop

    after_2:
L_80095504:
    // 0x80095504: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80095508: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8009550C: nop

    // 0x80095510: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
    // 0x80095514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009551C: jal         0x80029C40
    // 0x80095520: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80095520: nop

    after_3:
    // 0x80095524: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80095528: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009552C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095534: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80095538: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8009553C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80095540: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80095544: jal         0x80029018
    // 0x80095548: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x80095548: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x8009554C: beq         $v0, $zero, L_80095570
    if (ctx->r2 == 0) {
        // 0x80095550: nop
    
            goto L_80095570;
    }
    // 0x80095550: nop

    // 0x80095554: jal         0x800297DC
    // 0x80095558: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x80095558: nop

    after_5:
    // 0x8009555C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095564: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80095568: jal         0x80029824
    // 0x8009556C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x8009556C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_80095570:
    // 0x80095570: b           L_80095578
    // 0x80095574: nop

        goto L_80095578;
    // 0x80095574: nop

L_80095578:
    // 0x80095578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009557C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80095580: jr          $ra
    // 0x80095584: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80095584: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D808C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D808C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800D8090: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D8094: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800D8098: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800D809C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D80A0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D80A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D80A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D80AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D80B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D80B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D80B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D80BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D80C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D80C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D80C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D80CC: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800D80D0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D80D4: nop

    // 0x800D80D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D80DC: nop

    // 0x800D80E0: bne         $t1, $zero, L_800D817C
    if (ctx->r9 != 0) {
        // 0x800D80E4: nop
    
            goto L_800D817C;
    }
    // 0x800D80E4: nop

    // 0x800D80E8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D80EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D80F0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D80F4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D80F8: nop

    // 0x800D80FC: sh          $zero, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = 0;
    // 0x800D8100: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8104: nop

    // 0x800D8108: lh          $s0, 0xB6($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XB6);
    // 0x800D810C: nop

    // 0x800D8110: sh          $s0, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r16;
    // 0x800D8114: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8118: nop

    // 0x800D811C: sh          $s0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r16;
    // 0x800D8120: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D8124: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8128: nop

    // 0x800D812C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D8130: jal         0x80014E80
    // 0x800D8134: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800D8134: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800D8138: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800D813C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8140: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D8144: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
    // 0x800D8148: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D814C: nop

    // 0x800D8150: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D8154: nop

    // 0x800D8158: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800D815C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8160: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D8164: addiu       $a3, $a3, -0x7724
    ctx->r7 = ADD32(ctx->r7, -0X7724);
    // 0x800D8168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D816C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800D8170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D8174: jal         0x8001ABF4
    // 0x800D8178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D8178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800D817C:
    // 0x800D817C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8180: nop

    // 0x800D8184: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800D8188: nop

    // 0x800D818C: bne         $t1, $zero, L_800D821C
    if (ctx->r9 != 0) {
        // 0x800D8190: nop
    
            goto L_800D821C;
    }
    // 0x800D8190: nop

    // 0x800D8194: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x800D8198: nop

    // 0x800D819C: bne         $t2, $zero, L_800D821C
    if (ctx->r10 != 0) {
        // 0x800D81A0: nop
    
            goto L_800D821C;
    }
    // 0x800D81A0: nop

    // 0x800D81A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D81A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D81AC: jal         0x80028FA0
    // 0x800D81B0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800D81B0: nop

    after_2:
    // 0x800D81B4: beq         $v0, $zero, L_800D821C
    if (ctx->r2 == 0) {
        // 0x800D81B8: nop
    
            goto L_800D821C;
    }
    // 0x800D81B8: nop

    // 0x800D81BC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D81C0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800D81C4: sh          $t3, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r11;
    // 0x800D81C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800D81CC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D81D0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800D81D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D81D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D81DC: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D81E0: nop

    // 0x800D81E4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800D81E8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800D81EC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800D81F0: sh          $t7, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = ctx->r15;
    // 0x800D81F4: nop

    // 0x800D81F8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800D81FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D8200: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8204: nop

    // 0x800D8208: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800D820C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8214: jal         0x80029B60
    // 0x800D8218: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800D8218: nop

    after_3:
L_800D821C:
    // 0x800D821C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8220: nop

    // 0x800D8224: lh          $t1, 0xB6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB6);
    // 0x800D8228: nop

    // 0x800D822C: beq         $t1, $zero, L_800D8388
    if (ctx->r9 == 0) {
        // 0x800D8230: nop
    
            goto L_800D8388;
    }
    // 0x800D8230: nop

    // 0x800D8234: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8238: nop

    // 0x800D823C: lh          $t2, 0xB6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XB6);
    // 0x800D8240: nop

    // 0x800D8244: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800D8248: sh          $t3, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r11;
    // 0x800D824C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8250: nop

    // 0x800D8254: lh          $t6, 0xB6($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB6);
    // 0x800D8258: nop

    // 0x800D825C: bne         $t6, $zero, L_800D8388
    if (ctx->r14 != 0) {
        // 0x800D8260: nop
    
            goto L_800D8388;
    }
    // 0x800D8260: nop

    // 0x800D8264: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D8268: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D826C: nop

    // 0x800D8270: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x800D8274: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8278: nop

    // 0x800D827C: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D8280: nop

    // 0x800D8284: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x800D8288: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D828C: nop

    // 0x800D8290: swc1        $f20, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f20.u32l;
    // 0x800D8294: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8298: nop

    // 0x800D829C: lh          $t1, 0xB8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB8);
    // 0x800D82A0: nop

    // 0x800D82A4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800D82A8: nop

    // 0x800D82AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D82B0: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x800D82B4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D82B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D82BC: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800D82C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D82C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D82C8: jal         0x8002A46C
    // 0x800D82CC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x800D82CC: nop

    after_4:
    // 0x800D82D0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800D82D4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D82D8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800D82DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D82E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D82E4: nop

    // 0x800D82E8: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D82EC: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800D82F0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800D82F4: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
    // 0x800D82F8: nop

    // 0x800D82FC: jal         0x80014E80
    // 0x800D8300: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x800D8300: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    after_5:
    // 0x800D8304: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8308: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D830C: lh          $t5, 0xA8($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA8);
    // 0x800D8310: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x800D8314: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800D8318: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D831C: jal         0x80015538
    // 0x800D8320: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800D8320: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x800D8324: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D8328: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D832C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D8330: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D8334: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D8338: nop

    // 0x800D833C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D8340: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800D8344: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D8348: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800D834C: nop

    // 0x800D8350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8358: jal         0x8002A640
    // 0x800D835C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_7;
    // 0x800D835C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_7:
    // 0x800D8360: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8364: nop

    // 0x800D8368: sh          $v0, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r2;
    // 0x800D836C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8374: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D8378: addiu       $a3, $a3, -0x7724
    ctx->r7 = ADD32(ctx->r7, -0X7724);
    // 0x800D837C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D8380: jal         0x8001ABF4
    // 0x800D8384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800D8384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_800D8388:
    // 0x800D8388: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800D838C: nop

    // 0x800D8390: lh          $t0, 0xA6($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XA6);
    // 0x800D8394: nop

    // 0x800D8398: beq         $t0, $zero, L_800D84D4
    if (ctx->r8 == 0) {
        // 0x800D839C: nop
    
            goto L_800D84D4;
    }
    // 0x800D839C: nop

    // 0x800D83A0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D83A4: nop

    // 0x800D83A8: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x800D83AC: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800D83B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D83B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D83B8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800D83BC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800D83C0: jal         0x80015538
    // 0x800D83C4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800D83C4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_9:
    // 0x800D83C8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D83CC: nop

    // 0x800D83D0: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x800D83D4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D83D8: nop

    // 0x800D83DC: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D83E0: nop

    // 0x800D83E4: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
    // 0x800D83E8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D83EC: nop

    // 0x800D83F0: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D83F4: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D83F8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800D83FC: nop

    // 0x800D8400: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D8404: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800D8408: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D840C: nop

    // 0x800D8410: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D8414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D8418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D841C: nop

    // 0x800D8420: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800D8424: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800D8428: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D842C: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x800D8430: nop

    // 0x800D8434: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800D8438: nop

    // 0x800D843C: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x800D8440: beq         $at, $zero, L_800D8488
    if (ctx->r1 == 0) {
        // 0x800D8444: nop
    
            goto L_800D8488;
    }
    // 0x800D8444: nop

    // 0x800D8448: slti        $at, $t0, -0xA
    ctx->r1 = SIGNED(ctx->r8) < -0XA ? 1 : 0;
    // 0x800D844C: bne         $at, $zero, L_800D8488
    if (ctx->r1 != 0) {
        // 0x800D8450: nop
    
            goto L_800D8488;
    }
    // 0x800D8450: nop

    // 0x800D8454: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8458: nop

    // 0x800D845C: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800D8460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8464: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D8468: addiu       $a3, $a3, -0x7724
    ctx->r7 = ADD32(ctx->r7, -0X7724);
    // 0x800D846C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8470: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800D8474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D8478: jal         0x8001ABF4
    // 0x800D847C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800D847C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800D8480: b           L_800D84CC
    // 0x800D8484: nop

        goto L_800D84CC;
    // 0x800D8484: nop

L_800D8488:
    // 0x800D8488: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D848C: nop

    // 0x800D8490: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800D8494: nop

    // 0x800D8498: bne         $t7, $zero, L_800D84CC
    if (ctx->r15 != 0) {
        // 0x800D849C: nop
    
            goto L_800D84CC;
    }
    // 0x800D849C: nop

    // 0x800D84A0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D84A4: nop

    // 0x800D84A8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800D84AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D84B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D84B4: addiu       $a3, $a3, -0x7724
    ctx->r7 = ADD32(ctx->r7, -0X7724);
    // 0x800D84B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D84BC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800D84C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D84C4: jal         0x8001ABF4
    // 0x800D84C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x800D84C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
L_800D84CC:
    // 0x800D84CC: b           L_800D86C0
    // 0x800D84D0: nop

        goto L_800D86C0;
    // 0x800D84D0: nop

L_800D84D4:
    // 0x800D84D4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D84D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800D84DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D84E0: lwc1        $f10, 0x44($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X44);
    // 0x800D84E4: nop

    // 0x800D84E8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x800D84EC: nop

    // 0x800D84F0: bc1f        L_800D851C
    if (!c1cs) {
        // 0x800D84F4: nop
    
            goto L_800D851C;
    }
    // 0x800D84F4: nop

    // 0x800D84F8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D84FC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x800D8500: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x800D8504: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800D8508: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D850C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800D8510: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800D8514: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800D8518: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
L_800D851C:
    // 0x800D851C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D8520: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8524: nop

    // 0x800D8528: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x800D852C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8534: jal         0x80029C40
    // 0x800D8538: nop

    func_80029C40(rdram, ctx);
        goto after_12;
    // 0x800D8538: nop

    after_12:
    // 0x800D853C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8540: nop

    // 0x800D8544: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800D8548: nop

    // 0x800D854C: bne         $t3, $zero, L_800D86C0
    if (ctx->r11 != 0) {
        // 0x800D8550: nop
    
            goto L_800D86C0;
    }
    // 0x800D8550: nop

    // 0x800D8554: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800D8558: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D855C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D8560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8568: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800D856C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D8570: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D8574: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D8578: jal         0x80029018
    // 0x800D857C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_13;
    // 0x800D857C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x800D8580: beq         $v0, $zero, L_800D8650
    if (ctx->r2 == 0) {
        // 0x800D8584: nop
    
            goto L_800D8650;
    }
    // 0x800D8584: nop

    // 0x800D8588: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D858C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8590: nop

    // 0x800D8594: swc1        $f6, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f6.u32l;
    // 0x800D8598: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800D859C: nop

    // 0x800D85A0: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800D85A4: nop

    // 0x800D85A8: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800D85AC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D85B0: nop

    // 0x800D85B4: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800D85B8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D85BC: nop

    // 0x800D85C0: lh          $t5, 0xB6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XB6);
    // 0x800D85C4: nop

    // 0x800D85C8: bne         $t5, $zero, L_800D8644
    if (ctx->r13 != 0) {
        // 0x800D85CC: nop
    
            goto L_800D8644;
    }
    // 0x800D85CC: nop

    // 0x800D85D0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800D85D4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800D85D8: sh          $t8, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r24;
    // 0x800D85DC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800D85E0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800D85E4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800D85E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D85EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D85F0: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D85F4: nop

    // 0x800D85F8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D85FC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800D8600: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800D8604: sh          $t3, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r11;
    // 0x800D8608: nop

    // 0x800D860C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800D8610: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D8614: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8618: nop

    // 0x800D861C: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
    // 0x800D8620: jal         0x800297DC
    // 0x800D8624: nop

    func_800297DC(rdram, ctx);
        goto after_14;
    // 0x800D8624: nop

    after_14:
    // 0x800D8628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D862C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8630: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800D8634: jal         0x80029824
    // 0x800D8638: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80029824(rdram, ctx);
        goto after_15;
    // 0x800D8638: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_15:
    // 0x800D863C: b           L_800D8650
    // 0x800D8640: nop

        goto L_800D8650;
    // 0x800D8640: nop

L_800D8644:
    // 0x800D8644: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800D8648: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D864C: sh          $t4, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r12;
L_800D8650:
    // 0x800D8650: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800D8654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D8658: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D865C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8664: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800D8668: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800D866C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D8670: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D8674: jal         0x800295C0
    // 0x800D8678: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_16;
    // 0x800D8678: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x800D867C: beq         $v0, $zero, L_800D8694
    if (ctx->r2 == 0) {
        // 0x800D8680: nop
    
            goto L_800D8694;
    }
    // 0x800D8680: nop

    // 0x800D8684: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800D8688: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800D868C: b           L_800D86A4
    // 0x800D8690: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
        goto L_800D86A4;
    // 0x800D8690: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
L_800D8694:
    // 0x800D8694: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800D8698: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800D869C: nop

    // 0x800D86A0: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_800D86A4:
    // 0x800D86A4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800D86A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D86AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D86B0: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800D86B4: nop

    // 0x800D86B8: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800D86BC: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
L_800D86C0:
    // 0x800D86C0: b           L_800D86C8
    // 0x800D86C4: nop

        goto L_800D86C8;
    // 0x800D86C4: nop

L_800D86C8:
    // 0x800D86C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D86CC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D86D0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D86D4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800D86D8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800D86DC: jr          $ra
    // 0x800D86E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800D86E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8008CC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CC04: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008CC08: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008CC0C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008CC10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008CC14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CC18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008CC1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008CC20: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008CC24: nop

    // 0x8008CC28: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8008CC2C: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008CC30: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008CC34: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008CC38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008CC3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008CC40: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008CC44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008CC48: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008CC4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008CC50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CC54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008CC58: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CC5C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008CC60: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008CC64: swc1        $f10, 0x4188($at)
    MEM_W(0X4188, ctx->r1) = ctx->f10.u32l;
    // 0x8008CC68: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008CC6C:
    // 0x8008CC6C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008CC70: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x8008CC74: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CC78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CC7C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CC80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CC84: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CC88: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008CC8C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8008CC90: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008CC94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CC98: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8008CC9C: nop

    // 0x8008CCA0: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8008CCA4: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008CCA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008CCAC: beq         $t8, $at, L_8008CCFC
    if (ctx->r24 == ctx->r1) {
        // 0x8008CCB0: nop
    
            goto L_8008CCFC;
    }
    // 0x8008CCB0: nop

    // 0x8008CCB4: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8008CCB8: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8008CCBC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008CCC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CCC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008CCC8: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8008CCCC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008CCD0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CCD4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CCD8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CCDC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008CCE0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008CCE4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008CCE8: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CCEC: lwc1        $f16, 0x38($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X38);
    // 0x8008CCF0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CCF4: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8008CCF8: swc1        $f16, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->f16.u32l;
L_8008CCFC:
    // 0x8008CCFC: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8008CD00: nop

    // 0x8008CD04: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008CD08: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8008CD0C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8008CD10: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8008CD14: bne         $at, $zero, L_8008CC6C
    if (ctx->r1 != 0) {
        // 0x8008CD18: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_8008CC6C;
    }
    // 0x8008CD18: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8008CD1C: b           L_8008CD24
    // 0x8008CD20: nop

        goto L_8008CD24;
    // 0x8008CD20: nop

L_8008CD24:
    // 0x8008CD24: jr          $ra
    // 0x8008CD28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008CD28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800C0B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0B78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800C0B7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C0B80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C0B84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C0B88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C0B8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0B90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0B94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0B98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0B9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C0BA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C0BA4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800C0BA8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C0BAC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C0BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0BB4: bne         $t0, $at, L_800C0CB0
    if (ctx->r8 != ctx->r1) {
        // 0x800C0BB8: nop
    
            goto L_800C0CB0;
    }
    // 0x800C0BB8: nop

    // 0x800C0BBC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C0BC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C0BC4: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800C0BC8: nop

    // 0x800C0BCC: bne         $t2, $at, L_800C0BE0
    if (ctx->r10 != ctx->r1) {
        // 0x800C0BD0: nop
    
            goto L_800C0BE0;
    }
    // 0x800C0BD0: nop

    // 0x800C0BD4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C0BD8: nop

    // 0x800C0BDC: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
L_800C0BE0:
    // 0x800C0BE0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800C0BE4: nop

    // 0x800C0BE8: lbu         $t5, 0x10B($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X10B);
    // 0x800C0BEC: nop

    // 0x800C0BF0: bne         $t5, $zero, L_800C0C54
    if (ctx->r13 != 0) {
        // 0x800C0BF4: nop
    
            goto L_800C0C54;
    }
    // 0x800C0BF4: nop

    // 0x800C0BF8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800C0BFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0C00: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800C0C04: nop

    // 0x800C0C08: bne         $t7, $at, L_800C0C48
    if (ctx->r15 != ctx->r1) {
        // 0x800C0C0C: nop
    
            goto L_800C0C48;
    }
    // 0x800C0C0C: nop

    // 0x800C0C10: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C14: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800C0C18: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x800C0C1C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C20: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C0C24: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800C0C28: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C2C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800C0C30: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x800C0C34: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C38: nop

    // 0x800C0C3C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800C0C40: b           L_800C0CB8
    // 0x800C0C44: nop

        goto L_800C0CB8;
    // 0x800C0C44: nop

L_800C0C48:
    // 0x800C0C48: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C4C: b           L_800C0CB0
    // 0x800C0C50: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
        goto L_800C0CB0;
    // 0x800C0C50: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
L_800C0C54:
    // 0x800C0C54: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C58: nop

    // 0x800C0C5C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800C0C60: nop

    // 0x800C0C64: bne         $t7, $zero, L_800C0CA4
    if (ctx->r15 != 0) {
        // 0x800C0C68: nop
    
            goto L_800C0CA4;
    }
    // 0x800C0C68: nop

    // 0x800C0C6C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C70: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800C0C74: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x800C0C78: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C7C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C0C80: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800C0C84: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C88: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800C0C8C: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x800C0C90: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800C0C94: nop

    // 0x800C0C98: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800C0C9C: b           L_800C0CB8
    // 0x800C0CA0: nop

        goto L_800C0CB8;
    // 0x800C0CA0: nop

L_800C0CA4:
    // 0x800C0CA4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800C0CA8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800C0CAC: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_800C0CB0:
    // 0x800C0CB0: b           L_800C0CB8
    // 0x800C0CB4: nop

        goto L_800C0CB8;
    // 0x800C0CB4: nop

L_800C0CB8:
    // 0x800C0CB8: jr          $ra
    // 0x800C0CBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800C0CBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800FB764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB768: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800FB76C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FB770: bne         $t6, $at, L_800FB7F4
    if (ctx->r14 != ctx->r1) {
        // 0x800FB774: nop
    
            goto L_800FB7F4;
    }
    // 0x800FB774: nop

    // 0x800FB778: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FB77C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800FB780: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB784: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FB788: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FB78C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FB790: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FB794: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800FB798: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800FB79C: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x800FB7A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FB7A4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800FB7A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB7AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800FB7B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FB7B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FB7B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FB7BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800FB7C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800FB7C4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800FB7C8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x800FB7CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FB7D0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800FB7D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB7D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800FB7DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FB7E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FB7E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FB7E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800FB7EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800FB7F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800FB7F4:
    // 0x800FB7F4: jr          $ra
    // 0x800FB7F8: nop

    return;
    // 0x800FB7F8: nop

    // 0x800FB7FC: jr          $ra
    // 0x800FB800: nop

    return;
    // 0x800FB800: nop

;}
RECOMP_FUNC void func_8009B884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B884: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009B888: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009B88C: nop

    // 0x8009B890: bne         $t6, $zero, L_8009B8A0
    if (ctx->r14 != 0) {
        // 0x8009B894: nop
    
            goto L_8009B8A0;
    }
    // 0x8009B894: nop

    // 0x8009B898: b           L_8009B8BC
    // 0x8009B89C: nop

        goto L_8009B8BC;
    // 0x8009B89C: nop

L_8009B8A0:
    // 0x8009B8A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009B8A4: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x8009B8A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009B8AC: bne         $t7, $at, L_8009B8BC
    if (ctx->r15 != ctx->r1) {
        // 0x8009B8B0: nop
    
            goto L_8009B8BC;
    }
    // 0x8009B8B0: nop

    // 0x8009B8B4: b           L_8009B8BC
    // 0x8009B8B8: nop

        goto L_8009B8BC;
    // 0x8009B8B8: nop

L_8009B8BC:
    // 0x8009B8BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009B8C0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8009B8C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B8C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009B8CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009B8D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009B8D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009B8D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009B8DC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009B8E0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8009B8E4: jr          $ra
    // 0x8009B8E8: nop

    return;
    // 0x8009B8E8: nop

    // 0x8009B8EC: jr          $ra
    // 0x8009B8F0: nop

    return;
    // 0x8009B8F0: nop

;}
RECOMP_FUNC void func_800C8FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8FB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8FB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C8FB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C8FBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8FC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8FC4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800C8FC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8FCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8FD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8FD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8FD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8FDC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800C8FE0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800C8FE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C8FE8: beq         $s0, $at, L_800C901C
    if (ctx->r16 == ctx->r1) {
        // 0x800C8FEC: nop
    
            goto L_800C901C;
    }
    // 0x800C8FEC: nop

    // 0x800C8FF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C8FF4: beq         $s0, $at, L_800C902C
    if (ctx->r16 == ctx->r1) {
        // 0x800C8FF8: nop
    
            goto L_800C902C;
    }
    // 0x800C8FF8: nop

    // 0x800C8FFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C9000: beq         $s0, $at, L_800C903C
    if (ctx->r16 == ctx->r1) {
        // 0x800C9004: nop
    
            goto L_800C903C;
    }
    // 0x800C9004: nop

    // 0x800C9008: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C900C: beq         $s0, $at, L_800C904C
    if (ctx->r16 == ctx->r1) {
        // 0x800C9010: nop
    
            goto L_800C904C;
    }
    // 0x800C9010: nop

    // 0x800C9014: b           L_800C905C
    // 0x800C9018: nop

        goto L_800C905C;
    // 0x800C9018: nop

L_800C901C:
    // 0x800C901C: jal         0x800C8A08
    // 0x800C9020: nop

    func_800C8A08(rdram, ctx);
        goto after_0;
    // 0x800C9020: nop

    after_0:
    // 0x800C9024: b           L_800C9064
    // 0x800C9028: nop

        goto L_800C9064;
    // 0x800C9028: nop

L_800C902C:
    // 0x800C902C: jal         0x800C8B64
    // 0x800C9030: nop

    func_800C8B64(rdram, ctx);
        goto after_1;
    // 0x800C9030: nop

    after_1:
    // 0x800C9034: b           L_800C9064
    // 0x800C9038: nop

        goto L_800C9064;
    // 0x800C9038: nop

L_800C903C:
    // 0x800C903C: jal         0x800C8CC8
    // 0x800C9040: nop

    func_800C8CC8(rdram, ctx);
        goto after_2;
    // 0x800C9040: nop

    after_2:
    // 0x800C9044: b           L_800C9064
    // 0x800C9048: nop

        goto L_800C9064;
    // 0x800C9048: nop

L_800C904C:
    // 0x800C904C: jal         0x800C8F54
    // 0x800C9050: nop

    func_800C8F54(rdram, ctx);
        goto after_3;
    // 0x800C9050: nop

    after_3:
    // 0x800C9054: b           L_800C9064
    // 0x800C9058: nop

        goto L_800C9064;
    // 0x800C9058: nop

L_800C905C:
    // 0x800C905C: b           L_800C9064
    // 0x800C9060: nop

        goto L_800C9064;
    // 0x800C9060: nop

L_800C9064:
    // 0x800C9064: b           L_800C906C
    // 0x800C9068: nop

        goto L_800C906C;
    // 0x800C9068: nop

L_800C906C:
    // 0x800C906C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9070: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C9074: jr          $ra
    // 0x800C9078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C9078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F63B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F63B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F63B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F63B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F63BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F63C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F63C4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F63C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F63CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F63D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F63D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F63D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F63DC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F63E0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F63E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F63E8: beq         $s0, $at, L_800F6404
    if (ctx->r16 == ctx->r1) {
        // 0x800F63EC: nop
    
            goto L_800F6404;
    }
    // 0x800F63EC: nop

    // 0x800F63F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F63F4: beq         $s0, $at, L_800F6414
    if (ctx->r16 == ctx->r1) {
        // 0x800F63F8: nop
    
            goto L_800F6414;
    }
    // 0x800F63F8: nop

    // 0x800F63FC: b           L_800F6424
    // 0x800F6400: nop

        goto L_800F6424;
    // 0x800F6400: nop

L_800F6404:
    // 0x800F6404: jal         0x800F6058
    // 0x800F6408: nop

    func_800F6058(rdram, ctx);
        goto after_0;
    // 0x800F6408: nop

    after_0:
    // 0x800F640C: b           L_800F6424
    // 0x800F6410: nop

        goto L_800F6424;
    // 0x800F6410: nop

L_800F6414:
    // 0x800F6414: jal         0x800F62BC
    // 0x800F6418: nop

    func_800F62BC(rdram, ctx);
        goto after_1;
    // 0x800F6418: nop

    after_1:
    // 0x800F641C: b           L_800F6424
    // 0x800F6420: nop

        goto L_800F6424;
    // 0x800F6420: nop

L_800F6424:
    // 0x800F6424: b           L_800F642C
    // 0x800F6428: nop

        goto L_800F642C;
    // 0x800F6428: nop

L_800F642C:
    // 0x800F642C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6430: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F6434: jr          $ra
    // 0x800F6438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F6438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80088134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088134: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80088138: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008813C: sb          $t6, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r14;
    // 0x80088140: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80088144: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088148: sb          $t7, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r15;
    // 0x8008814C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80088150: lb          $t8, 0x5245($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5245);
    // 0x80088154: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088158: sb          $t8, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r24;
    // 0x8008815C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088160: sb          $zero, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = 0;
    // 0x80088164: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088168: sb          $zero, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = 0;
    // 0x8008816C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088170: sb          $zero, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = 0;
    // 0x80088174: jr          $ra
    // 0x80088178: nop

    return;
    // 0x80088178: nop

    // 0x8008817C: jr          $ra
    // 0x80088180: nop

    return;
    // 0x80088180: nop

;}
RECOMP_FUNC void func_800A4964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A496C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4970: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A4974: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A4978: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A497C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4980: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4988: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A498C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A4990: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4994: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A4998: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A499C: nop

    // 0x800A49A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A49A4: nop

    // 0x800A49A8: bne         $t1, $zero, L_800A49F4
    if (ctx->r9 != 0) {
        // 0x800A49AC: nop
    
            goto L_800A49F4;
    }
    // 0x800A49AC: nop

    // 0x800A49B0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800A49B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A49B8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A49BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A49C0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A49C4: nop

    // 0x800A49C8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A49CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A49D0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800A49D4: nop

    // 0x800A49D8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A49DC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A49E0: nop

    // 0x800A49E4: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800A49E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A49EC: nop

    // 0x800A49F0: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800A49F4:
    // 0x800A49F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A49F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A49FC: jal         0x80028FA0
    // 0x800A4A00: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800A4A00: nop

    after_0:
    // 0x800A4A04: beq         $v0, $zero, L_800A4A1C
    if (ctx->r2 == 0) {
        // 0x800A4A08: nop
    
            goto L_800A4A1C;
    }
    // 0x800A4A08: nop

    // 0x800A4A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4A14: jal         0x80029B60
    // 0x800A4A18: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800A4A18: nop

    after_1:
L_800A4A1C:
    // 0x800A4A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4A24: jal         0x80029C40
    // 0x800A4A28: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A4A28: nop

    after_2:
    // 0x800A4A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4A34: jal         0x80029D04
    // 0x800A4A38: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A4A38: nop

    after_3:
    // 0x800A4A3C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4A40: nop

    // 0x800A4A44: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A4A48: nop

    // 0x800A4A4C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A4A50: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800A4A54: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4A58: nop

    // 0x800A4A5C: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A4A60: nop

    // 0x800A4A64: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x800A4A68: bne         $at, $zero, L_800A4AA0
    if (ctx->r1 != 0) {
        // 0x800A4A6C: nop
    
            goto L_800A4AA0;
    }
    // 0x800A4A6C: nop

    // 0x800A4A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4A74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4A78: jal         0x8002A1FC
    // 0x800A4A7C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800A4A7C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_4:
    // 0x800A4A80: beq         $v0, $zero, L_800A4AA0
    if (ctx->r2 == 0) {
        // 0x800A4A84: nop
    
            goto L_800A4AA0;
    }
    // 0x800A4A84: nop

    // 0x800A4A88: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4A8C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800A4A90: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A4A94: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4A98: nop

    // 0x800A4A9C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A4AA0:
    // 0x800A4AA0: b           L_800A4AA8
    // 0x800A4AA4: nop

        goto L_800A4AA8;
    // 0x800A4AA4: nop

L_800A4AA8:
    // 0x800A4AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4AB0: jr          $ra
    // 0x800A4AB4: nop

    return;
    // 0x800A4AB4: nop

;}
RECOMP_FUNC void func_800EEE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EEE30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EEE34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EEE38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EEE3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EEE40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EEE44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EEE48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EEE4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EEE50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EEE54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EEE58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EEE5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EEE60: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EEE64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEE68: nop

    // 0x800EEE6C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EEE70: nop

    // 0x800EEE74: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800EEE78: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEE7C: nop

    // 0x800EEE80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EEE84: nop

    // 0x800EEE88: bne         $t3, $zero, L_800EEF68
    if (ctx->r11 != 0) {
        // 0x800EEE8C: nop
    
            goto L_800EEF68;
    }
    // 0x800EEE8C: nop

    // 0x800EEE90: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEE94: nop

    // 0x800EEE98: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EEE9C: nop

    // 0x800EEEA0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EEEA4: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EEEA8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEEAC: nop

    // 0x800EEEB0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EEEB4: nop

    // 0x800EEEB8: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EEEBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEEC0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EEEC4: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800EEEC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEECC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EEED0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EEED4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800EEED8: jal         0x8001C0EC
    // 0x800EEEDC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EEEDC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EEEE0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800EEEE4: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800EEEE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EEEEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800EEEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EEEF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800EEEF8: jal         0x8001C0EC
    // 0x800EEEFC: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EEEFC: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800EEF00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEF04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EEF08: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EEF0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEF10: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EEF14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EEF18: jal         0x8001ABF4
    // 0x800EEF1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EEF1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800EEF20: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EEF24: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EEF28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EEF2C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EEF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EEF34: jal         0x8001ABF4
    // 0x800EEF38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800EEF38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800EEF3C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEF40: nop

    // 0x800EEF44: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x800EEF48: nop

    // 0x800EEF4C: bne         $t2, $zero, L_800EEF68
    if (ctx->r10 != 0) {
        // 0x800EEF50: nop
    
            goto L_800EEF68;
    }
    // 0x800EEF50: nop

    // 0x800EEF54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEF58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEF5C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800EEF60: jal         0x80029EF8
    // 0x800EEF64: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800EEF64: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_4:
L_800EEF68:
    // 0x800EEF68: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800EEF6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EEF70: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEF74: nop

    // 0x800EEF78: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800EEF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEF80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEF84: jal         0x80028FA0
    // 0x800EEF88: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800EEF88: nop

    after_5:
    // 0x800EEF8C: beq         $v0, $zero, L_800EEFA4
    if (ctx->r2 == 0) {
        // 0x800EEF90: nop
    
            goto L_800EEFA4;
    }
    // 0x800EEF90: nop

    // 0x800EEF94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEF98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEF9C: jal         0x80029B60
    // 0x800EEFA0: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800EEFA0: nop

    after_6:
L_800EEFA4:
    // 0x800EEFA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEFA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEFAC: jal         0x8002A8B4
    // 0x800EEFB0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x800EEFB0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_7:
    // 0x800EEFB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEFB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEFBC: jal         0x80029C40
    // 0x800EEFC0: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800EEFC0: nop

    after_8:
    // 0x800EEFC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EEFC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EEFCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEFD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEFD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EEFD8: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800EEFDC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EEFE0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800EEFE4: jal         0x80029018
    // 0x800EEFE8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800EEFE8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x800EEFEC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEFF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EEFF4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800EEFF8: nop

    // 0x800EEFFC: bne         $t6, $at, L_800EF058
    if (ctx->r14 != ctx->r1) {
        // 0x800EF000: nop
    
            goto L_800EF058;
    }
    // 0x800EF000: nop

    // 0x800EF004: lh          $t4, 0xB0($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB0);
    // 0x800EF008: nop

    // 0x800EF00C: bne         $t4, $zero, L_800EF058
    if (ctx->r12 != 0) {
        // 0x800EF010: nop
    
            goto L_800EF058;
    }
    // 0x800EF010: nop

    // 0x800EF014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF01C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800EF020: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800EF024: jal         0x8002A0D0
    // 0x800EF028: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_10;
    // 0x800EF028: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    after_10:
    // 0x800EF02C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EF030: bne         $v0, $at, L_800EF050
    if (ctx->r2 != ctx->r1) {
        // 0x800EF034: nop
    
            goto L_800EF050;
    }
    // 0x800EF034: nop

    // 0x800EF038: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF03C: nop

    // 0x800EF040: lbu         $t7, 0x132($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X132);
    // 0x800EF044: nop

    // 0x800EF048: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800EF04C: sb          $t9, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r25;
L_800EF050:
    // 0x800EF050: b           L_800EF164
    // 0x800EF054: nop

        goto L_800EF164;
    // 0x800EF054: nop

L_800EF058:
    // 0x800EF058: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EF05C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EF060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF068: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EF06C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EF070: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EF074: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EF078: jal         0x800295C0
    // 0x800EF07C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x800EF07C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x800EF080: beq         $v0, $zero, L_800EF098
    if (ctx->r2 == 0) {
        // 0x800EF084: nop
    
            goto L_800EF098;
    }
    // 0x800EF084: nop

    // 0x800EF088: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EF08C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF090: b           L_800EF0A8
    // 0x800EF094: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
        goto L_800EF0A8;
    // 0x800EF094: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
L_800EF098:
    // 0x800EF098: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EF09C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF0A0: nop

    // 0x800EF0A4: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
L_800EF0A8:
    // 0x800EF0A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF0AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800EF0B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EF0B4: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800EF0B8: nop

    // 0x800EF0BC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EF0C0: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x800EF0C4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800EF0C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF0CC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800EF0D0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800EF0D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EF0D8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800EF0DC: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EF0E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EF0E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF0E8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EF0EC: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800EF0F0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF0F4: nop

    // 0x800EF0F8: lh          $t7, 0xB6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XB6);
    // 0x800EF0FC: nop

    // 0x800EF100: bne         $t7, $zero, L_800EF14C
    if (ctx->r15 != 0) {
        // 0x800EF104: nop
    
            goto L_800EF14C;
    }
    // 0x800EF104: nop

    // 0x800EF108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF10C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF110: jal         0x8002A2EC
    // 0x800EF114: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_12;
    // 0x800EF114: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_12:
    // 0x800EF118: beq         $v0, $zero, L_800EF144
    if (ctx->r2 == 0) {
        // 0x800EF11C: nop
    
            goto L_800EF144;
    }
    // 0x800EF11C: nop

    // 0x800EF120: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF124: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x800EF128: sh          $t9, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r25;
    // 0x800EF12C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF130: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800EF134: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800EF138: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF13C: nop

    // 0x800EF140: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800EF144:
    // 0x800EF144: b           L_800EF164
    // 0x800EF148: nop

        goto L_800EF164;
    // 0x800EF148: nop

L_800EF14C:
    // 0x800EF14C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF150: nop

    // 0x800EF154: lh          $t6, 0xB6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XB6);
    // 0x800EF158: nop

    // 0x800EF15C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x800EF160: sh          $t5, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r13;
L_800EF164:
    // 0x800EF164: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800EF168: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF16C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EF170: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EF174: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800EF178: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x800EF17C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EF180: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EF184: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800EF188: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EF18C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF190: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EF194: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x800EF198: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800EF19C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF1A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EF1A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EF1A8: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800EF1AC: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800EF1B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EF1B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EF1B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800EF1BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EF1C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF1C4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EF1C8: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800EF1CC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800EF1D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF1D4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800EF1D8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800EF1DC: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800EF1E0: lwc1        $f4, 0x2C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800EF1E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EF1E8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800EF1EC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800EF1F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EF1F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF1F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EF1FC: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x800EF200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF208: jal         0x8002A2EC
    // 0x800EF20C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_13;
    // 0x800EF20C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_13:
    // 0x800EF210: beq         $v0, $zero, L_800EF220
    if (ctx->r2 == 0) {
        // 0x800EF214: nop
    
            goto L_800EF220;
    }
    // 0x800EF214: nop

    // 0x800EF218: b           L_800EF238
    // 0x800EF21C: nop

        goto L_800EF238;
    // 0x800EF21C: nop

L_800EF220:
    // 0x800EF220: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF224: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800EF228: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800EF22C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF230: nop

    // 0x800EF234: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800EF238:
    // 0x800EF238: b           L_800EF240
    // 0x800EF23C: nop

        goto L_800EF240;
    // 0x800EF23C: nop

L_800EF240:
    // 0x800EF240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EF244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EF248: jr          $ra
    // 0x800EF24C: nop

    return;
    // 0x800EF24C: nop

;}
RECOMP_FUNC void func_8009F66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F66C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009F670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F674: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009F678: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009F67C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F680: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009F684: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009F688: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009F68C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009F690: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009F694: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009F698: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009F69C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009F6A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009F6A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009F6A8: addiu       $a1, $a1, 0x382C
    ctx->r5 = ADD32(ctx->r5, 0X382C);
    // 0x8009F6AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009F6B0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009F6B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009F6B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009F6BC: jal         0x80027464
    // 0x8009F6C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009F6C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8009F6C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009F6C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009F6CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009F6D0: beq         $t0, $at, L_8009F704
    if (ctx->r8 == ctx->r1) {
        // 0x8009F6D4: nop
    
            goto L_8009F704;
    }
    // 0x8009F6D4: nop

    // 0x8009F6D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009F6DC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8009F6E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8009F6E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009F6E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009F6EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009F6F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009F6F4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009F6F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009F6FC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009F700: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_8009F704:
    // 0x8009F704: b           L_8009F70C
    // 0x8009F708: nop

        goto L_8009F70C;
    // 0x8009F708: nop

L_8009F70C:
    // 0x8009F70C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009F714: jr          $ra
    // 0x8009F718: nop

    return;
    // 0x8009F718: nop

;}
RECOMP_FUNC void func_800CB28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB294: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB298: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CB29C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CB2A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB2A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB2A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB2AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB2B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB2B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CB2B8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800CB2BC: nop

    // 0x800CB2C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800CB2C4: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800CB2C8: beq         $at, $zero, L_800CB34C
    if (ctx->r1 == 0) {
        // 0x800CB2CC: nop
    
            goto L_800CB34C;
    }
    // 0x800CB2CC: nop

    // 0x800CB2D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CB2D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CB2D8: addu        $at, $at, $t9
    gpr jr_addend_800CB2E4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CB2DC: lw          $t9, 0x4FC8($at)
    ctx->r25 = ADD32(ctx->r1, 0X4FC8);
    // 0x800CB2E0: nop

    // 0x800CB2E4: jr          $t9
    // 0x800CB2E8: nop

    switch (jr_addend_800CB2E4 >> 2) {
        case 0: goto L_800CB2EC; break;
        case 1: goto L_800CB2FC; break;
        case 2: goto L_800CB30C; break;
        case 3: goto L_800CB31C; break;
        case 4: goto L_800CB32C; break;
        case 5: goto L_800CB33C; break;
        default: switch_error(__func__, 0x800CB2E4, 0x80114FC8);
    }
    // 0x800CB2E8: nop

L_800CB2EC:
    // 0x800CB2EC: jal         0x800CAB00
    // 0x800CB2F0: nop

    func_800CAB00(rdram, ctx);
        goto after_0;
    // 0x800CB2F0: nop

    after_0:
    // 0x800CB2F4: b           L_800CB354
    // 0x800CB2F8: nop

        goto L_800CB354;
    // 0x800CB2F8: nop

L_800CB2FC:
    // 0x800CB2FC: jal         0x800CAC6C
    // 0x800CB300: nop

    func_800CAC6C(rdram, ctx);
        goto after_1;
    // 0x800CB300: nop

    after_1:
    // 0x800CB304: b           L_800CB354
    // 0x800CB308: nop

        goto L_800CB354;
    // 0x800CB308: nop

L_800CB30C:
    // 0x800CB30C: jal         0x800CAE40
    // 0x800CB310: nop

    func_800CAE40(rdram, ctx);
        goto after_2;
    // 0x800CB310: nop

    after_2:
    // 0x800CB314: b           L_800CB354
    // 0x800CB318: nop

        goto L_800CB354;
    // 0x800CB318: nop

L_800CB31C:
    // 0x800CB31C: jal         0x800CB0DC
    // 0x800CB320: nop

    func_800CB0DC(rdram, ctx);
        goto after_3;
    // 0x800CB320: nop

    after_3:
    // 0x800CB324: b           L_800CB354
    // 0x800CB328: nop

        goto L_800CB354;
    // 0x800CB328: nop

L_800CB32C:
    // 0x800CB32C: jal         0x800CB24C
    // 0x800CB330: nop

    func_800CB24C(rdram, ctx);
        goto after_4;
    // 0x800CB330: nop

    after_4:
    // 0x800CB334: b           L_800CB354
    // 0x800CB338: nop

        goto L_800CB354;
    // 0x800CB338: nop

L_800CB33C:
    // 0x800CB33C: jal         0x800CB25C
    // 0x800CB340: nop

    func_800CB25C(rdram, ctx);
        goto after_5;
    // 0x800CB340: nop

    after_5:
    // 0x800CB344: b           L_800CB354
    // 0x800CB348: nop

        goto L_800CB354;
    // 0x800CB348: nop

L_800CB34C:
    // 0x800CB34C: b           L_800CB354
    // 0x800CB350: nop

        goto L_800CB354;
    // 0x800CB350: nop

L_800CB354:
    // 0x800CB354: b           L_800CB35C
    // 0x800CB358: nop

        goto L_800CB35C;
    // 0x800CB358: nop

L_800CB35C:
    // 0x800CB35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB364: jr          $ra
    // 0x800CB368: nop

    return;
    // 0x800CB368: nop

;}
RECOMP_FUNC void func_800E5DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5DF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E5DF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5DF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5DFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5E00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5E04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5E08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5E0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5E10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5E14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5E18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5E1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5E20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E5E24: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E5E28: nop

    // 0x800E5E2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E5E30: nop

    // 0x800E5E34: bne         $t1, $zero, L_800E5EAC
    if (ctx->r9 != 0) {
        // 0x800E5E38: nop
    
            goto L_800E5EAC;
    }
    // 0x800E5E38: nop

    // 0x800E5E3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E5E40: nop

    // 0x800E5E44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E5E48: nop

    // 0x800E5E4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E5E50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E5E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5E58: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E5E5C: addiu       $t5, $t5, -0x6AFC
    ctx->r13 = ADD32(ctx->r13, -0X6AFC);
    // 0x800E5E60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5E64: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E5E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800E5E70: jal         0x8001C0EC
    // 0x800E5E74: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E5E74: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    after_0:
    // 0x800E5E78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E5E7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E5E80: nop

    // 0x800E5E84: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E5E88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E5E8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E5E90: nop

    // 0x800E5E94: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x800E5E98: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E5E9C: nop

    // 0x800E5EA0: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800E5EA4: nop

    // 0x800E5EA8: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
L_800E5EAC:
    // 0x800E5EAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5EB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5EB4: jal         0x8002A8B4
    // 0x800E5EB8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800E5EB8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x800E5EBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E5EC0: nop

    // 0x800E5EC4: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800E5EC8: nop

    // 0x800E5ECC: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800E5ED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5ED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5ED8: jal         0x8001B4AC
    // 0x800E5EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E5EE0: beq         $v0, $zero, L_800E5F00
    if (ctx->r2 == 0) {
        // 0x800E5EE4: nop
    
            goto L_800E5F00;
    }
    // 0x800E5EE4: nop

    // 0x800E5EE8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E5EEC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E5EF0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E5EF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E5EF8: nop

    // 0x800E5EFC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E5F00:
    // 0x800E5F00: b           L_800E5F08
    // 0x800E5F04: nop

        goto L_800E5F08;
    // 0x800E5F04: nop

L_800E5F08:
    // 0x800E5F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E5F10: jr          $ra
    // 0x800E5F14: nop

    return;
    // 0x800E5F14: nop

;}
RECOMP_FUNC void func_800B3A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3A80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B3A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B3A88: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B3A8C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B3A90: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B3A94: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B3A98: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B3A9C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B3AA0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B3AA4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B3AA8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B3AAC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B3AB0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B3AB4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B3AB8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B3ABC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B3AC0: addiu       $a1, $a1, 0x39D0
    ctx->r5 = ADD32(ctx->r5, 0X39D0);
    // 0x800B3AC4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B3AC8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B3ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B3AD0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B3AD4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B3AD8: jal         0x80027464
    // 0x800B3ADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B3ADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B3AE0: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800B3AE4: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B3AE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B3AEC: beq         $t1, $at, L_800B3BA8
    if (ctx->r9 == ctx->r1) {
        // 0x800B3AF0: nop
    
            goto L_800B3BA8;
    }
    // 0x800B3AF0: nop

    // 0x800B3AF4: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800B3AF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B3AFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B3B00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B3B04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B3B08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B3B0C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B3B10: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B3B14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B3B18: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B3B1C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800B3B20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B3B24: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B3B28: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B3B2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3B30: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B3B34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3B38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B3B3C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B3B40: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B3B44: addiu       $t8, $t8, 0x7928
    ctx->r24 = ADD32(ctx->r24, 0X7928);
    // 0x800B3B48: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B3B4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B3B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B3B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B3B58: jal         0x8001C0EC
    // 0x800B3B5C: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B3B5C: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_1:
    // 0x800B3B60: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B3B64: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B3B68: addiu       $a3, $a3, 0x79B4
    ctx->r7 = ADD32(ctx->r7, 0X79B4);
    // 0x800B3B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B3B70: jal         0x8001ABF4
    // 0x800B3B74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B3B74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B3B78: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B3B7C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B3B80: addiu       $a3, $a3, 0x79EC
    ctx->r7 = ADD32(ctx->r7, 0X79EC);
    // 0x800B3B84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B3B88: jal         0x8001ABF4
    // 0x800B3B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B3B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800B3B90: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B3B94: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B3B98: addiu       $a3, $a3, 0x7A24
    ctx->r7 = ADD32(ctx->r7, 0X7A24);
    // 0x800B3B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B3BA0: jal         0x8001ABF4
    // 0x800B3BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800B3BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800B3BA8:
    // 0x800B3BA8: b           L_800B3BB0
    // 0x800B3BAC: nop

        goto L_800B3BB0;
    // 0x800B3BAC: nop

L_800B3BB0:
    // 0x800B3BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B3BB8: jr          $ra
    // 0x800B3BBC: nop

    return;
    // 0x800B3BBC: nop

;}
RECOMP_FUNC void func_800B8414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B8418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B841C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8420: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800B8424: nop

    // 0x800B8428: beq         $t6, $zero, L_800B8444
    if (ctx->r14 == 0) {
        // 0x800B842C: nop
    
            goto L_800B8444;
    }
    // 0x800B842C: nop

    // 0x800B8430: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B8434: beq         $t6, $at, L_800B8444
    if (ctx->r14 == ctx->r1) {
        // 0x800B8438: nop
    
            goto L_800B8444;
    }
    // 0x800B8438: nop

    // 0x800B843C: b           L_800B845C
    // 0x800B8440: nop

        goto L_800B845C;
    // 0x800B8440: nop

L_800B8444:
    // 0x800B8444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B844C: jal         0x8002B0E4
    // 0x800B8450: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B8450: nop

    after_0:
    // 0x800B8454: b           L_800B845C
    // 0x800B8458: nop

        goto L_800B845C;
    // 0x800B8458: nop

L_800B845C:
    // 0x800B845C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B8464: jr          $ra
    // 0x800B8468: nop

    return;
    // 0x800B8468: nop

;}
RECOMP_FUNC void func_800AE894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE894: jr          $ra
    // 0x800AE898: nop

    return;
    // 0x800AE898: nop

    // 0x800AE89C: jr          $ra
    // 0x800AE8A0: nop

    return;
    // 0x800AE8A0: nop

;}
RECOMP_FUNC void func_80064120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80064124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064128: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006412C: lb          $t6, 0x48B2($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X48B2);
    // 0x80064130: nop

    // 0x80064134: bne         $t6, $zero, L_80064144
    if (ctx->r14 != 0) {
        // 0x80064138: nop
    
            goto L_80064144;
    }
    // 0x80064138: nop

    // 0x8006413C: b           L_800641D4
    // 0x80064140: nop

        goto L_800641D4;
    // 0x80064140: nop

L_80064144:
    // 0x80064144: jal         0x8006357C
    // 0x80064148: nop

    func_8006357C(rdram, ctx);
        goto after_0;
    // 0x80064148: nop

    after_0:
    // 0x8006414C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80064150: lh          $t7, 0x48B0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X48B0);
    // 0x80064154: nop

    // 0x80064158: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x8006415C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80064160: beq         $at, $zero, L_800641CC
    if (ctx->r1 == 0) {
        // 0x80064164: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_800641CC;
    }
    // 0x80064164: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
L_80064168:
    // 0x80064168: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x8006416C: nop

    // 0x80064170: slti        $at, $t9, 0x53
    ctx->r1 = SIGNED(ctx->r25) < 0X53 ? 1 : 0;
    // 0x80064174: beq         $at, $zero, L_800641A4
    if (ctx->r1 == 0) {
        // 0x80064178: nop
    
            goto L_800641A4;
    }
    // 0x80064178: nop

    // 0x8006417C: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80064180: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80064184: addiu       $t2, $t2, 0x48B8
    ctx->r10 = ADD32(ctx->r10, 0X48B8);
    // 0x80064188: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8006418C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80064190: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80064194: lh          $a1, 0x4($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X4);
    // 0x80064198: lh          $a2, 0x6($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X6);
    // 0x8006419C: jal         0x800641E4
    // 0x800641A0: nop

    func_800641E4(rdram, ctx);
        goto after_1;
    // 0x800641A0: nop

    after_1:
L_800641A4:
    // 0x800641A4: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x800641A8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800641AC: lh          $t8, 0x48B0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X48B0);
    // 0x800641B0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800641B4: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800641B8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800641BC: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x800641C0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800641C4: bne         $at, $zero, L_80064168
    if (ctx->r1 != 0) {
        // 0x800641C8: sh          $t5, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r13;
            goto L_80064168;
    }
    // 0x800641C8: sh          $t5, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r13;
L_800641CC:
    // 0x800641CC: b           L_800641D4
    // 0x800641D0: nop

        goto L_800641D4;
    // 0x800641D0: nop

L_800641D4:
    // 0x800641D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800641D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800641DC: jr          $ra
    // 0x800641E0: nop

    return;
    // 0x800641E0: nop

;}
RECOMP_FUNC void func_8009A994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009A998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009A99C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A9A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A9A4: jal         0x8002AA94
    // 0x8009A9A8: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x8009A9A8: nop

    after_0:
    // 0x8009A9AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A9B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A9B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A9BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A9C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A9C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A9C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A9CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009A9D0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8009A9D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A9D8: bne         $t8, $at, L_8009A9F8
    if (ctx->r24 != ctx->r1) {
        // 0x8009A9DC: nop
    
            goto L_8009A9F8;
    }
    // 0x8009A9DC: nop

    // 0x8009A9E0: b           L_8009A9E8
    // 0x8009A9E4: nop

        goto L_8009A9E8;
    // 0x8009A9E4: nop

L_8009A9E8:
    // 0x8009A9E8: jal         0x8009A674
    // 0x8009A9EC: nop

    func_8009A674(rdram, ctx);
        goto after_1;
    // 0x8009A9EC: nop

    after_1:
    // 0x8009A9F0: b           L_8009A9F8
    // 0x8009A9F4: nop

        goto L_8009A9F8;
    // 0x8009A9F4: nop

L_8009A9F8:
    // 0x8009A9F8: b           L_8009AA00
    // 0x8009A9FC: nop

        goto L_8009AA00;
    // 0x8009A9FC: nop

L_8009AA00:
    // 0x8009AA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009AA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009AA08: jr          $ra
    // 0x8009AA0C: nop

    return;
    // 0x8009AA0C: nop

;}
RECOMP_FUNC void func_800DE754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE754: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DE758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE75C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE76C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE77C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE780: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DE784: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DE788: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800DE78C: nop

    // 0x800DE790: bne         $t0, $zero, L_800DE7B4
    if (ctx->r8 != 0) {
        // 0x800DE794: nop
    
            goto L_800DE7B4;
    }
    // 0x800DE794: nop

    // 0x800DE798: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DE79C: nop

    // 0x800DE7A0: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800DE7A4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DE7A8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x800DE7AC: b           L_800DE7C0
    // 0x800DE7B0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800DE7C0;
    // 0x800DE7B0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800DE7B4:
    // 0x800DE7B4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DE7B8: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800DE7BC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800DE7C0:
    // 0x800DE7C0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DE7C4: nop

    // 0x800DE7C8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800DE7CC: b           L_800DE7D4
    // 0x800DE7D0: nop

        goto L_800DE7D4;
    // 0x800DE7D0: nop

L_800DE7D4:
    // 0x800DE7D4: jr          $ra
    // 0x800DE7D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DE7D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DD300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD300: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DD304: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DD308: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DD30C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DD310: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DD314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD318: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD31C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD328: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DD32C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD330: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DD334: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DD338: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DD33C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DD340: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DD344: nop

    // 0x800DD348: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DD34C: nop

    // 0x800DD350: bne         $t1, $zero, L_800DD438
    if (ctx->r9 != 0) {
        // 0x800DD354: nop
    
            goto L_800DD438;
    }
    // 0x800DD354: nop

    // 0x800DD358: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DD35C: nop

    // 0x800DD360: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DD364: nop

    // 0x800DD368: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DD36C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DD370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD374: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DD378: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DD37C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD380: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DD384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD388: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800DD38C: jal         0x8001C0EC
    // 0x800DD390: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DD390: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DD394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD39C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD3A0: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD3A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD3A8: jal         0x8001ABF4
    // 0x800DD3AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DD3AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DD3B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD3B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD3B8: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD3BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD3C0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DD3C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DD3C8: jal         0x8001ABF4
    // 0x800DD3CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DD3CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DD3D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD3D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD3D8: jal         0x8002A46C
    // 0x800DD3DC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DD3DC: nop

    after_3:
    // 0x800DD3E0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DD3E4: nop

    // 0x800DD3E8: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800DD3EC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DD3F0: nop

    // 0x800DD3F4: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DD3F8: nop

    // 0x800DD3FC: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800DD400: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DD404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DD408: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DD40C: nop

    // 0x800DD410: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800DD414: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DD418: nop

    // 0x800DD41C: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800DD420: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DD424: nop

    // 0x800DD428: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800DD42C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DD430: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800DD434: sh          $t1, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r9;
L_800DD438:
    // 0x800DD438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD43C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD440: jal         0x80028FA0
    // 0x800DD444: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DD444: nop

    after_4:
    // 0x800DD448: beq         $v0, $zero, L_800DD49C
    if (ctx->r2 == 0) {
        // 0x800DD44C: nop
    
            goto L_800DD49C;
    }
    // 0x800DD44C: nop

    // 0x800DD450: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DD454: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DD458: lh          $t2, 0x106($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X106);
    // 0x800DD45C: nop

    // 0x800DD460: beq         $t2, $at, L_800DD474
    if (ctx->r10 == ctx->r1) {
        // 0x800DD464: nop
    
            goto L_800DD474;
    }
    // 0x800DD464: nop

    // 0x800DD468: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DD46C: bne         $t2, $at, L_800DD48C
    if (ctx->r10 != ctx->r1) {
        // 0x800DD470: nop
    
            goto L_800DD48C;
    }
    // 0x800DD470: nop

L_800DD474:
    // 0x800DD474: jal         0x800E3EE4
    // 0x800DD478: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DD478: nop

    after_5:
    // 0x800DD47C: b           L_800DD678
    // 0x800DD480: nop

        goto L_800DD678;
    // 0x800DD480: nop

    // 0x800DD484: b           L_800DD49C
    // 0x800DD488: nop

        goto L_800DD49C;
    // 0x800DD488: nop

L_800DD48C:
    // 0x800DD48C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD494: jal         0x80029B60
    // 0x800DD498: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800DD498: nop

    after_6:
L_800DD49C:
    // 0x800DD49C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DD4A0: nop

    // 0x800DD4A4: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800DD4A8: nop

    // 0x800DD4AC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x800DD4B0: beq         $at, $zero, L_800DD64C
    if (ctx->r1 == 0) {
        // 0x800DD4B4: nop
    
            goto L_800DD64C;
    }
    // 0x800DD4B4: nop

    // 0x800DD4B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DD4BC: nop

    // 0x800DD4C0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800DD4C4: nop

    // 0x800DD4C8: bne         $t8, $zero, L_800DD4F0
    if (ctx->r24 != 0) {
        // 0x800DD4CC: nop
    
            goto L_800DD4F0;
    }
    // 0x800DD4CC: nop

    // 0x800DD4D0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DD4D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800DD4D8: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800DD4DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD4E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD4E4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800DD4E8: jal         0x80029EF8
    // 0x800DD4EC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800DD4EC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_7:
L_800DD4F0:
    // 0x800DD4F0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DD4F4: nop

    // 0x800DD4F8: lwc1        $f8, 0x28($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800DD4FC: nop

    // 0x800DD500: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800DD504: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DD508: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DD50C: nop

    // 0x800DD510: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
    // 0x800DD514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD51C: jal         0x80029C40
    // 0x800DD520: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800DD520: nop

    after_8:
    // 0x800DD524: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DD528: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DD52C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD538: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DD53C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DD540: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DD544: jal         0x80029018
    // 0x800DD548: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800DD548: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x800DD54C: beq         $v0, $zero, L_800DD570
    if (ctx->r2 == 0) {
        // 0x800DD550: nop
    
            goto L_800DD570;
    }
    // 0x800DD550: nop

    // 0x800DD554: jal         0x800297DC
    // 0x800DD558: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800DD558: nop

    after_10:
    // 0x800DD55C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD564: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DD568: jal         0x80029824
    // 0x800DD56C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800DD56C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800DD570:
    // 0x800DD570: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DD574: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DD578: nop

    // 0x800DD57C: swc1        $f4, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f4.u32l;
    // 0x800DD580: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800DD584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DD588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD58C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD590: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DD594: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DD598: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DD59C: jal         0x80029F58
    // 0x800DD5A0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800DD5A0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800DD5A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DD5A8: bne         $v0, $at, L_800DD644
    if (ctx->r2 != ctx->r1) {
        // 0x800DD5AC: nop
    
            goto L_800DD644;
    }
    // 0x800DD5AC: nop

    // 0x800DD5B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DD5B4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DD5B8: nop

    // 0x800DD5BC: swc1        $f8, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f8.u32l;
    // 0x800DD5C0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DD5C4: nop

    // 0x800DD5C8: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800DD5CC: nop

    // 0x800DD5D0: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800DD5D4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DD5D8: nop

    // 0x800DD5DC: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800DD5E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD5E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD5E8: jal         0x8001B4AC
    // 0x800DD5EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_13;
    // 0x800DD5EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800DD5F0: beq         $v0, $zero, L_800DD620
    if (ctx->r2 == 0) {
        // 0x800DD5F4: nop
    
            goto L_800DD620;
    }
    // 0x800DD5F4: nop

    // 0x800DD5F8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DD5FC: nop

    // 0x800DD600: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800DD604: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DD608: nop

    // 0x800DD60C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800DD610: nop

    // 0x800DD614: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800DD618: b           L_800DD644
    // 0x800DD61C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
        goto L_800DD644;
    // 0x800DD61C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_800DD620:
    // 0x800DD620: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DD624: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DD628: nop

    // 0x800DD62C: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x800DD630: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DD634: nop

    // 0x800DD638: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800DD63C: nop

    // 0x800DD640: swc1        $f16, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f16.u32l;
L_800DD644:
    // 0x800DD644: b           L_800DD670
    // 0x800DD648: nop

        goto L_800DD670;
    // 0x800DD648: nop

L_800DD64C:
    // 0x800DD64C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DD650: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800DD654: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800DD658: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DD65C: nop

    // 0x800DD660: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800DD664: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DD668: nop

    // 0x800DD66C: sh          $zero, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = 0;
L_800DD670:
    // 0x800DD670: b           L_800DD678
    // 0x800DD674: nop

        goto L_800DD678;
    // 0x800DD674: nop

L_800DD678:
    // 0x800DD678: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DD67C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800DD680: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800DD684: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800DD688: jr          $ra
    // 0x800DD68C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800DD68C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800DA304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA304: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DA308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DA30C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA310: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA314: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA318: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA31C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA320: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA328: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA32C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DA330: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DA334: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DA338: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA33C: nop

    // 0x800DA340: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DA344: nop

    // 0x800DA348: bne         $t1, $zero, L_800DA398
    if (ctx->r9 != 0) {
        // 0x800DA34C: nop
    
            goto L_800DA398;
    }
    // 0x800DA34C: nop

    // 0x800DA350: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA354: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DA358: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800DA35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA364: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DA368: addiu       $a3, $a3, -0x7374
    ctx->r7 = ADD32(ctx->r7, -0X7374);
    // 0x800DA36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DA370: jal         0x8001ABF4
    // 0x800DA374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800DA374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800DA378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA37C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DA380: addiu       $a3, $a3, -0x7374
    ctx->r7 = ADD32(ctx->r7, -0X7374);
    // 0x800DA384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA388: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DA38C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DA390: jal         0x8001ABF4
    // 0x800DA394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DA394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800DA398:
    // 0x800DA398: b           L_800DA3A0
    // 0x800DA39C: nop

        goto L_800DA3A0;
    // 0x800DA39C: nop

L_800DA3A0:
    // 0x800DA3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DA3A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DA3A8: jr          $ra
    // 0x800DA3AC: nop

    return;
    // 0x800DA3AC: nop

;}
RECOMP_FUNC void func_800F3568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3568: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F356C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F3570: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F3574: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F3578: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F357C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F3580: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3584: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F3588: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F358C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F3590: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F3594: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F3598: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F359C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F35A0: nop

    // 0x800F35A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F35A8: nop

    // 0x800F35AC: bne         $t1, $zero, L_800F3604
    if (ctx->r9 != 0) {
        // 0x800F35B0: nop
    
            goto L_800F3604;
    }
    // 0x800F35B0: nop

    // 0x800F35B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F35B8: nop

    // 0x800F35BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F35C0: nop

    // 0x800F35C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F35C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F35CC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F35D0: nop

    // 0x800F35D4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800F35D8: nop

    // 0x800F35DC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800F35E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F35E4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F35E8: addiu       $t7, $t7, -0x64D0
    ctx->r15 = ADD32(ctx->r15, -0X64D0);
    // 0x800F35EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F35F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F35F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F35F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F35FC: jal         0x8001C0EC
    // 0x800F3600: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F3600: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    after_0:
L_800F3604:
    // 0x800F3604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F360C: jal         0x8001B62C
    // 0x800F3610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x800F3610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800F3614: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F3618: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F361C: nop

    // 0x800F3620: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800F3624: nop

    // 0x800F3628: bc1f        L_800F3774
    if (!c1cs) {
        // 0x800F362C: nop
    
            goto L_800F3774;
    }
    // 0x800F362C: nop

    // 0x800F3630: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3634: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F3638: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800F363C: lwc1        $f11, 0x56C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X56C8);
    // 0x800F3640: lwc1        $f10, 0x56CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X56CC);
    // 0x800F3644: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800F3648: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800F364C: jal         0x80034970
    // 0x800F3650: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800F3650: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x800F3654: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x800F3658: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F365C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3660: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800F3664: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800F3668: nop

    // 0x800F366C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F3670: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x800F3674: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3678: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F367C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800F3680: lwc1        $f19, 0x56D0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X56D0);
    // 0x800F3684: lwc1        $f18, 0x56D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X56D4);
    // 0x800F3688: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800F368C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800F3690: jal         0x80036570
    // 0x800F3694: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x800F3694: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x800F3698: lui         $at, 0x4364
    ctx->r1 = S32(0X4364 << 16);
    // 0x800F369C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F36A0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F36A4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800F36A8: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800F36AC: nop

    // 0x800F36B0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F36B4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800F36B8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F36BC: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x800F36C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F36C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F36C8: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800F36CC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F36D0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F36D4: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800F36D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F36DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F36E0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800F36E4: addiu       $a1, $a1, 0x4510
    ctx->r5 = ADD32(ctx->r5, 0X4510);
    // 0x800F36E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F36EC: jal         0x80027464
    // 0x800F36F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x800F36F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800F36F4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800F36F8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F36FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F3700: beq         $t4, $at, L_800F3774
    if (ctx->r12 == ctx->r1) {
        // 0x800F3704: nop
    
            goto L_800F3774;
    }
    // 0x800F3704: nop

    // 0x800F3708: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800F370C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3710: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F3714: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F3718: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F371C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F3720: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x800F3724: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F3728: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F372C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F3730: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x800F3734: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F3738: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800F373C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F3740: jal         0x80019448
    // 0x800F3744: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x800F3744: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x800F3748: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F374C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3750: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800F3754: jal         0x80026F10
    // 0x800F3758: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x800F3758: nop

    after_6:
    // 0x800F375C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F3760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F3764: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x800F3768: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F376C: jal         0x800175F0
    // 0x800F3770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x800F3770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_800F3774:
    // 0x800F3774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F377C: jal         0x8001B4AC
    // 0x800F3780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x800F3780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800F3784: beq         $v0, $zero, L_800F37A4
    if (ctx->r2 == 0) {
        // 0x800F3788: nop
    
            goto L_800F37A4;
    }
    // 0x800F3788: nop

    // 0x800F378C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3790: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800F3794: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800F3798: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F379C: nop

    // 0x800F37A0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800F37A4:
    // 0x800F37A4: b           L_800F37AC
    // 0x800F37A8: nop

        goto L_800F37AC;
    // 0x800F37A8: nop

L_800F37AC:
    // 0x800F37AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F37B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F37B4: jr          $ra
    // 0x800F37B8: nop

    return;
    // 0x800F37B8: nop

;}
RECOMP_FUNC void func_800C8924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8924: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C892C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C8930: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C8934: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C8938: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C893C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C8940: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C8944: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C8948: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C894C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C8950: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C8954: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C8958: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C895C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C8960: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C8964: addiu       $a1, $a1, 0x3F7C
    ctx->r5 = ADD32(ctx->r5, 0X3F7C);
    // 0x800C8968: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C896C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C8970: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C8974: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C8978: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C897C: jal         0x80027464
    // 0x800C8980: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C8980: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C8984: b           L_800C898C
    // 0x800C8988: nop

        goto L_800C898C;
    // 0x800C8988: nop

L_800C898C:
    // 0x800C898C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8994: jr          $ra
    // 0x800C8998: nop

    return;
    // 0x800C8998: nop

;}
RECOMP_FUNC void func_800E3EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3EE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800E3EE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E3EEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E3EF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3EF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3EF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3EFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3F00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3F04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3F08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3F0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3F10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3F14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3F18: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800E3F1C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3F20: nop

    // 0x800E3F24: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800E3F28: nop

    // 0x800E3F2C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x800E3F30: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3F34: nop

    // 0x800E3F38: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800E3F3C: nop

    // 0x800E3F40: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x800E3F44: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3F48: nop

    // 0x800E3F4C: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800E3F50: nop

    // 0x800E3F54: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800E3F58: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3F5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3F60: lh          $t4, 0x104($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X104);
    // 0x800E3F64: nop

    // 0x800E3F68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800E3F6C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3F70: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E3F74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3F78: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E3F7C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E3F80: lwc1        $f10, 0x4150($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x800E3F84: nop

    // 0x800E3F88: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x800E3F8C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3F90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3F94: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x800E3F98: nop

    // 0x800E3F9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E3FA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E3FA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E3FA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E3FAC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800E3FB0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800E3FB4: lwc1        $f16, 0x4154($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x800E3FB8: nop

    // 0x800E3FBC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x800E3FC0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E3FC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3FC8: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x800E3FCC: nop

    // 0x800E3FD0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800E3FD4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E3FD8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E3FDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E3FE0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800E3FE4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800E3FE8: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x800E3FEC: nop

    // 0x800E3FF0: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x800E3FF4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800E3FF8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800E3FFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E4000: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E4004: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800E4008: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800E400C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800E4010: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800E4014: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E4018: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800E401C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800E4020: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4024: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E4028: addiu       $a1, $a1, 0x43B4
    ctx->r5 = ADD32(ctx->r5, 0X43B4);
    // 0x800E402C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E4030: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800E4034: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E4038: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800E403C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E4040: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E4044: nop

    // 0x800E4048: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800E404C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800E4050: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E4054: lwc1        $f10, 0x3C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800E4058: jal         0x80027464
    // 0x800E405C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E405C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x800E4060: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800E4064: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800E4068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E406C: beq         $t3, $at, L_800E4420
    if (ctx->r11 == ctx->r1) {
        // 0x800E4070: nop
    
            goto L_800E4420;
    }
    // 0x800E4070: nop

    // 0x800E4074: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800E4078: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E407C: addiu       $a3, $a3, -0x6BF4
    ctx->r7 = ADD32(ctx->r7, -0X6BF4);
    // 0x800E4080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4084: jal         0x8001ABF4
    // 0x800E4088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E408C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800E4090: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4094: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800E4098: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E409C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E40A0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E40A4: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800E40A8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800E40AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E40B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E40B4: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x800E40B8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800E40BC: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800E40C0: lh          $s0, 0xE4($t7)
    ctx->r16 = MEM_H(ctx->r15, 0XE4);
    // 0x800E40C4: nop

    // 0x800E40C8: beq         $s0, $at, L_800E40F0
    if (ctx->r16 == ctx->r1) {
        // 0x800E40CC: nop
    
            goto L_800E40F0;
    }
    // 0x800E40CC: nop

    // 0x800E40D0: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800E40D4: beq         $s0, $at, L_800E4200
    if (ctx->r16 == ctx->r1) {
        // 0x800E40D8: nop
    
            goto L_800E4200;
    }
    // 0x800E40D8: nop

    // 0x800E40DC: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800E40E0: beq         $s0, $at, L_800E4310
    if (ctx->r16 == ctx->r1) {
        // 0x800E40E4: nop
    
            goto L_800E4310;
    }
    // 0x800E40E4: nop

    // 0x800E40E8: b           L_800E4420
    // 0x800E40EC: nop

        goto L_800E4420;
    // 0x800E40EC: nop

L_800E40F0:
    // 0x800E40F0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800E40F4: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800E40F8: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800E40FC: nop

    // 0x800E4100: bne         $t9, $at, L_800E4184
    if (ctx->r25 != ctx->r1) {
        // 0x800E4104: nop
    
            goto L_800E4184;
    }
    // 0x800E4104: nop

    // 0x800E4108: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800E410C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800E4110: lh          $t1, 0x104($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X104);
    // 0x800E4114: nop

    // 0x800E4118: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800E411C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800E4120: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E4124: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800E4128: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800E412C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E4130: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x800E4134: nop

    // 0x800E4138: beq         $t3, $zero, L_800E414C
    if (ctx->r11 == 0) {
        // 0x800E413C: nop
    
            goto L_800E414C;
    }
    // 0x800E413C: nop

    // 0x800E4140: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800E4144: bne         $t3, $at, L_800E4154
    if (ctx->r11 != ctx->r1) {
        // 0x800E4148: nop
    
            goto L_800E4154;
    }
    // 0x800E4148: nop

L_800E414C:
    // 0x800E414C: b           L_800E417C
    // 0x800E4150: nop

        goto L_800E417C;
    // 0x800E4150: nop

L_800E4154:
    // 0x800E4154: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800E4158: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E415C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800E4160: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E4164: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800E4168: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800E416C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800E4170: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800E4174: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800E4178: sh          $t4, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r12;
L_800E417C:
    // 0x800E417C: b           L_800E41F8
    // 0x800E4180: nop

        goto L_800E41F8;
    // 0x800E4180: nop

L_800E4184:
    // 0x800E4184: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4188: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800E418C: lh          $t8, 0x104($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X104);
    // 0x800E4190: nop

    // 0x800E4194: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800E4198: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E419C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E41A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E41A4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800E41A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800E41AC: lh          $t0, 0x41F4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F4);
    // 0x800E41B0: nop

    // 0x800E41B4: beq         $t0, $zero, L_800E41C8
    if (ctx->r8 == 0) {
        // 0x800E41B8: nop
    
            goto L_800E41C8;
    }
    // 0x800E41B8: nop

    // 0x800E41BC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800E41C0: bne         $t0, $at, L_800E41D0
    if (ctx->r8 != ctx->r1) {
        // 0x800E41C4: nop
    
            goto L_800E41D0;
    }
    // 0x800E41C4: nop

L_800E41C8:
    // 0x800E41C8: b           L_800E41F8
    // 0x800E41CC: nop

        goto L_800E41F8;
    // 0x800E41CC: nop

L_800E41D0:
    // 0x800E41D0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800E41D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E41D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E41DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E41E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E41E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E41E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E41EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E41F0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800E41F4: sh          $t1, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r9;
L_800E41F8:
    // 0x800E41F8: b           L_800E4420
    // 0x800E41FC: nop

        goto L_800E4420;
    // 0x800E41FC: nop

L_800E4200:
    // 0x800E4200: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4204: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800E4208: lh          $t4, 0x106($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X106);
    // 0x800E420C: nop

    // 0x800E4210: bne         $t4, $at, L_800E4294
    if (ctx->r12 != ctx->r1) {
        // 0x800E4214: nop
    
            goto L_800E4294;
    }
    // 0x800E4214: nop

    // 0x800E4218: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800E421C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800E4220: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x800E4224: nop

    // 0x800E4228: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800E422C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E4230: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E4234: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800E4238: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800E423C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E4240: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800E4244: nop

    // 0x800E4248: beq         $t9, $zero, L_800E425C
    if (ctx->r25 == 0) {
        // 0x800E424C: nop
    
            goto L_800E425C;
    }
    // 0x800E424C: nop

    // 0x800E4250: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800E4254: bne         $t9, $at, L_800E4264
    if (ctx->r25 != ctx->r1) {
        // 0x800E4258: nop
    
            goto L_800E4264;
    }
    // 0x800E4258: nop

L_800E425C:
    // 0x800E425C: b           L_800E428C
    // 0x800E4260: nop

        goto L_800E428C;
    // 0x800E4260: nop

L_800E4264:
    // 0x800E4264: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800E4268: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E426C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800E4270: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800E4274: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E4278: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800E427C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800E4280: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800E4284: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E4288: sh          $t0, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r8;
L_800E428C:
    // 0x800E428C: b           L_800E4308
    // 0x800E4290: nop

        goto L_800E4308;
    // 0x800E4290: nop

L_800E4294:
    // 0x800E4294: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4298: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800E429C: lh          $t5, 0x104($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X104);
    // 0x800E42A0: nop

    // 0x800E42A4: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800E42A8: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800E42AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E42B0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800E42B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800E42B8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800E42BC: lh          $t6, 0x41F4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F4);
    // 0x800E42C0: nop

    // 0x800E42C4: beq         $t6, $zero, L_800E42D8
    if (ctx->r14 == 0) {
        // 0x800E42C8: nop
    
            goto L_800E42D8;
    }
    // 0x800E42C8: nop

    // 0x800E42CC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800E42D0: bne         $t6, $at, L_800E42E0
    if (ctx->r14 != ctx->r1) {
        // 0x800E42D4: nop
    
            goto L_800E42E0;
    }
    // 0x800E42D4: nop

L_800E42D8:
    // 0x800E42D8: b           L_800E4308
    // 0x800E42DC: nop

        goto L_800E4308;
    // 0x800E42DC: nop

L_800E42E0:
    // 0x800E42E0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800E42E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E42E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800E42EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E42F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E42F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E42F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800E42FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800E4300: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800E4304: sh          $t7, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r15;
L_800E4308:
    // 0x800E4308: b           L_800E4420
    // 0x800E430C: nop

        goto L_800E4420;
    // 0x800E430C: nop

L_800E4310:
    // 0x800E4310: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4314: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800E4318: lh          $t0, 0x106($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X106);
    // 0x800E431C: nop

    // 0x800E4320: bne         $t0, $at, L_800E43A4
    if (ctx->r8 != ctx->r1) {
        // 0x800E4324: nop
    
            goto L_800E43A4;
    }
    // 0x800E4324: nop

    // 0x800E4328: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800E432C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800E4330: lh          $t3, 0x104($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X104);
    // 0x800E4334: nop

    // 0x800E4338: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800E433C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800E4340: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E4344: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800E4348: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E434C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800E4350: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x800E4354: nop

    // 0x800E4358: beq         $t4, $zero, L_800E436C
    if (ctx->r12 == 0) {
        // 0x800E435C: nop
    
            goto L_800E436C;
    }
    // 0x800E435C: nop

    // 0x800E4360: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800E4364: bne         $t4, $at, L_800E4374
    if (ctx->r12 != ctx->r1) {
        // 0x800E4368: nop
    
            goto L_800E4374;
    }
    // 0x800E4368: nop

L_800E436C:
    // 0x800E436C: b           L_800E439C
    // 0x800E4370: nop

        goto L_800E439C;
    // 0x800E4370: nop

L_800E4374:
    // 0x800E4374: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800E4378: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E437C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800E4380: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4384: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4388: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800E438C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4390: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E4394: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E4398: sh          $t6, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r14;
L_800E439C:
    // 0x800E439C: b           L_800E4418
    // 0x800E43A0: nop

        goto L_800E4418;
    // 0x800E43A0: nop

L_800E43A4:
    // 0x800E43A4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800E43A8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800E43AC: lh          $t2, 0x104($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X104);
    // 0x800E43B0: nop

    // 0x800E43B4: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x800E43B8: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x800E43BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800E43C0: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x800E43C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800E43C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E43CC: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x800E43D0: nop

    // 0x800E43D4: beq         $t1, $zero, L_800E43E8
    if (ctx->r9 == 0) {
        // 0x800E43D8: nop
    
            goto L_800E43E8;
    }
    // 0x800E43D8: nop

    // 0x800E43DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800E43E0: bne         $t1, $at, L_800E43F0
    if (ctx->r9 != ctx->r1) {
        // 0x800E43E4: nop
    
            goto L_800E43F0;
    }
    // 0x800E43E4: nop

L_800E43E8:
    // 0x800E43E8: b           L_800E4418
    // 0x800E43EC: nop

        goto L_800E4418;
    // 0x800E43EC: nop

L_800E43F0:
    // 0x800E43F0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800E43F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E43F8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800E43FC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800E4400: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E4404: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800E4408: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800E440C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800E4410: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800E4414: sh          $t3, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r11;
L_800E4418:
    // 0x800E4418: b           L_800E4420
    // 0x800E441C: nop

        goto L_800E4420;
    // 0x800E441C: nop

L_800E4420:
    // 0x800E4420: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800E4424: nop

    // 0x800E4428: lh          $a0, 0x104($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X104);
    // 0x800E442C: jal         0x8002B114
    // 0x800E4430: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800E4430: nop

    after_2:
    // 0x800E4434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E443C: jal         0x8002B114
    // 0x800E4440: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800E4440: nop

    after_3:
    // 0x800E4444: b           L_800E444C
    // 0x800E4448: nop

        goto L_800E444C;
    // 0x800E4448: nop

L_800E444C:
    // 0x800E444C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E4450: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E4454: jr          $ra
    // 0x800E4458: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800E4458: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8009FC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FC0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009FC10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009FC14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009FC18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009FC1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009FC20: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8009FC24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009FC28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FC2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009FC30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FC34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009FC38: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8009FC3C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8009FC40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009FC44: beq         $s0, $at, L_8009FC6C
    if (ctx->r16 == ctx->r1) {
        // 0x8009FC48: nop
    
            goto L_8009FC6C;
    }
    // 0x8009FC48: nop

    // 0x8009FC4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009FC50: beq         $s0, $at, L_8009FC7C
    if (ctx->r16 == ctx->r1) {
        // 0x8009FC54: nop
    
            goto L_8009FC7C;
    }
    // 0x8009FC54: nop

    // 0x8009FC58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009FC5C: beq         $s0, $at, L_8009FC8C
    if (ctx->r16 == ctx->r1) {
        // 0x8009FC60: nop
    
            goto L_8009FC8C;
    }
    // 0x8009FC60: nop

    // 0x8009FC64: b           L_8009FC9C
    // 0x8009FC68: nop

        goto L_8009FC9C;
    // 0x8009FC68: nop

L_8009FC6C:
    // 0x8009FC6C: jal         0x8009F71C
    // 0x8009FC70: nop

    func_8009F71C(rdram, ctx);
        goto after_0;
    // 0x8009FC70: nop

    after_0:
    // 0x8009FC74: b           L_8009FCA4
    // 0x8009FC78: nop

        goto L_8009FCA4;
    // 0x8009FC78: nop

L_8009FC7C:
    // 0x8009FC7C: jal         0x8009F890
    // 0x8009FC80: nop

    func_8009F890(rdram, ctx);
        goto after_1;
    // 0x8009FC80: nop

    after_1:
    // 0x8009FC84: b           L_8009FCA4
    // 0x8009FC88: nop

        goto L_8009FCA4;
    // 0x8009FC88: nop

L_8009FC8C:
    // 0x8009FC8C: jal         0x8009FB08
    // 0x8009FC90: nop

    func_8009FB08(rdram, ctx);
        goto after_2;
    // 0x8009FC90: nop

    after_2:
    // 0x8009FC94: b           L_8009FCA4
    // 0x8009FC98: nop

        goto L_8009FCA4;
    // 0x8009FC98: nop

L_8009FC9C:
    // 0x8009FC9C: b           L_8009FCA4
    // 0x8009FCA0: nop

        goto L_8009FCA4;
    // 0x8009FCA0: nop

L_8009FCA4:
    // 0x8009FCA4: b           L_8009FCAC
    // 0x8009FCA8: nop

        goto L_8009FCAC;
    // 0x8009FCA8: nop

L_8009FCAC:
    // 0x8009FCAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009FCB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009FCB4: jr          $ra
    // 0x8009FCB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009FCB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80093408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009340C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093410: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093414: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093418: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009341C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093420: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093424: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093428: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009342C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093430: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80093434: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093438: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009343C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093440: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093444: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093448: addiu       $a1, $a1, 0x17F8
    ctx->r5 = ADD32(ctx->r5, 0X17F8);
    // 0x8009344C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093450: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093454: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093458: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009345C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093460: jal         0x80027464
    // 0x80093464: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093464: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093468: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009346C: b           L_80093474
    // 0x80093470: nop

        goto L_80093474;
    // 0x80093470: nop

L_80093474:
    // 0x80093474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009347C: jr          $ra
    // 0x80093480: nop

    return;
    // 0x80093480: nop

;}
RECOMP_FUNC void func_80079DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079DFC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80079E00: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80079E04: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80079E08: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80079E0C: addiu       $t7, $t6, 0x2A0
    ctx->r15 = ADD32(ctx->r14, 0X2A0);
    // 0x80079E10: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80079E14: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_80079E18:
    // 0x80079E18: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80079E1C: nop

    // 0x80079E20: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80079E24: nop

    // 0x80079E28: beq         $t9, $zero, L_80079E40
    if (ctx->r25 == 0) {
        // 0x80079E2C: nop
    
            goto L_80079E40;
    }
    // 0x80079E2C: nop

    // 0x80079E30: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80079E34: nop

    // 0x80079E38: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80079E3C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
L_80079E40:
    // 0x80079E40: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80079E44: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80079E48: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80079E4C: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80079E50: addiu       $t5, $t4, 0x150
    ctx->r13 = ADD32(ctx->r12, 0X150);
    // 0x80079E54: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x80079E58: bne         $at, $zero, L_80079E18
    if (ctx->r1 != 0) {
        // 0x80079E5C: sw          $t3, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r11;
            goto L_80079E18;
    }
    // 0x80079E5C: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x80079E60: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80079E64: lb          $t7, 0x523F($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523F);
    // 0x80079E68: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80079E6C: nop

    // 0x80079E70: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80079E74: beq         $at, $zero, L_80079E84
    if (ctx->r1 == 0) {
        // 0x80079E78: nop
    
            goto L_80079E84;
    }
    // 0x80079E78: nop

    // 0x80079E7C: b           L_80079E94
    // 0x80079E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80079E94;
    // 0x80079E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80079E84:
    // 0x80079E84: b           L_80079E94
    // 0x80079E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80079E94;
    // 0x80079E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80079E8C: b           L_80079E94
    // 0x80079E90: nop

        goto L_80079E94;
    // 0x80079E90: nop

L_80079E94:
    // 0x80079E94: jr          $ra
    // 0x80079E98: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80079E98: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800B62C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B62C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800B62CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800B62D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800B62D4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B62D8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800B62DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B62E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B62E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B62E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B62EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B62F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B62F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B62F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B62FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B6300: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B6304: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800B6308: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B630C: nop

    // 0x800B6310: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B6314: nop

    // 0x800B6318: bne         $t1, $zero, L_800B63BC
    if (ctx->r9 != 0) {
        // 0x800B631C: nop
    
            goto L_800B63BC;
    }
    // 0x800B631C: nop

    // 0x800B6320: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B6324: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B6328: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B632C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6330: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B6334: nop

    // 0x800B6338: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B633C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6340: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B6344: nop

    // 0x800B6348: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B634C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B6350: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800B6354: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800B6358: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B635C: nop

    // 0x800B6360: sh          $zero, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = 0;
    // 0x800B6364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B636C: jal         0x8001BBDC
    // 0x800B6370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B6370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B6374: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B6378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B637C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800B6380: addiu       $t0, $t0, 0x7AA0
    ctx->r8 = ADD32(ctx->r8, 0X7AA0);
    // 0x800B6384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6388: lh          $a2, 0xA8($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XA8);
    // 0x800B638C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800B6390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6394: jal         0x8001C0EC
    // 0x800B6398: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B6398: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_1:
    // 0x800B639C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B63A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B63A4: jal         0x80029C40
    // 0x800B63A8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B63A8: nop

    after_2:
    // 0x800B63AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B63B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B63B4: jal         0x80029D04
    // 0x800B63B8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B63B8: nop

    after_3:
L_800B63BC:
    // 0x800B63BC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B63C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B63C4: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800B63C8: nop

    // 0x800B63CC: beq         $t2, $at, L_800B63E0
    if (ctx->r10 == ctx->r1) {
        // 0x800B63D0: nop
    
            goto L_800B63E0;
    }
    // 0x800B63D0: nop

    // 0x800B63D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B63D8: bne         $t2, $at, L_800B6678
    if (ctx->r10 != ctx->r1) {
        // 0x800B63DC: nop
    
            goto L_800B6678;
    }
    // 0x800B63DC: nop

L_800B63E0:
    // 0x800B63E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B63E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B63E8: jal         0x8001B44C
    // 0x800B63EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800B63EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800B63F0: beq         $v0, $zero, L_800B6678
    if (ctx->r2 == 0) {
        // 0x800B63F4: nop
    
            goto L_800B6678;
    }
    // 0x800B63F4: nop

    // 0x800B63F8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B63FC: nop

    // 0x800B6400: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800B6404: nop

    // 0x800B6408: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800B640C: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
    // 0x800B6410: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B6414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B6418: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800B641C: nop

    // 0x800B6420: bne         $t7, $at, L_800B65EC
    if (ctx->r15 != ctx->r1) {
        // 0x800B6424: nop
    
            goto L_800B65EC;
    }
    // 0x800B6424: nop

    // 0x800B6428: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B642C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800B6430: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800B6434: nop

    // 0x800B6438: bne         $t9, $at, L_800B65EC
    if (ctx->r25 != ctx->r1) {
        // 0x800B643C: nop
    
            goto L_800B65EC;
    }
    // 0x800B643C: nop

    // 0x800B6440: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B6444: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800B6448: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
    // 0x800B644C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B6450: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800B6454: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800B6458: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800B645C: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800B6460: nop

    // 0x800B6464: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800B6468: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x800B646C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B6470: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800B6474: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800B6478: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x800B647C: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800B6480: nop

    // 0x800B6484: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800B6488: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x800B648C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800B6490: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800B6494: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x800B6498: nop

    // 0x800B649C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800B64A0: jal         0x800366E0
    // 0x800B64A4: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_5;
    // 0x800B64A4: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_5:
    // 0x800B64A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B64AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B64B0: nop

    // 0x800B64B4: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B64B8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800B64BC: nop

    // 0x800B64C0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800B64C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B64C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B64CC: nop

    // 0x800B64D0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800B64D4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800B64D8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800B64DC: sh          $t7, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r15;
    // 0x800B64E0: nop

    // 0x800B64E4: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x800B64E8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B64EC: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x800B64F0: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x800B64F4: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x800B64F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B64FC: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x800B6500: sh          $t2, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r10;
    // 0x800B6504: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x800B6508: nop

    // 0x800B650C: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x800B6510: beq         $at, $zero, L_800B6588
    if (ctx->r1 == 0) {
        // 0x800B6514: nop
    
            goto L_800B6588;
    }
    // 0x800B6514: nop

    // 0x800B6518: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B651C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800B6520: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800B6524: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800B6528: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B652C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800B6530: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6534: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x800B6538: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800B653C: nop

    // 0x800B6540: bc1f        L_800B6588
    if (!c1cs) {
        // 0x800B6544: nop
    
            goto L_800B6588;
    }
    // 0x800B6544: nop

    // 0x800B6548: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B654C: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x800B6550: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x800B6554: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B6558: nop

    // 0x800B655C: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
    // 0x800B6560: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B6564: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B6568: sh          $t0, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = ctx->r8;
    // 0x800B656C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6570: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6574: jal         0x8002A46C
    // 0x800B6578: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x800B6578: nop

    after_6:
    // 0x800B657C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6580: nop

    // 0x800B6584: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
L_800B6588:
    // 0x800B6588: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B658C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6590: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x800B6594: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6598: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800B659C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x800B65A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B65A4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800B65A8: jal         0x80029EF8
    // 0x800B65AC: nop

    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800B65AC: nop

    after_7:
    // 0x800B65B0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B65B4: nop

    // 0x800B65B8: lh          $t6, 0xAC($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XAC);
    // 0x800B65BC: nop

    // 0x800B65C0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800B65C4: nop

    // 0x800B65C8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B65CC: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x800B65D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B65D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B65D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B65DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800B65E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B65E4: jal         0x800175F0
    // 0x800B65E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x800B65E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_800B65EC:
    // 0x800B65EC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B65F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B65F4: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800B65F8: nop

    // 0x800B65FC: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x800B6600: nop

    // 0x800B6604: bc1f        L_800B6650
    if (!c1cs) {
        // 0x800B6608: nop
    
            goto L_800B6650;
    }
    // 0x800B6608: nop

    // 0x800B660C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B6610: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x800B6614: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800B6618: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B661C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800B6620: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
    // 0x800B6624: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6628: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B662C: lh          $t4, 0xAE($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAE);
    // 0x800B6630: nop

    // 0x800B6634: bne         $t4, $at, L_800B6650
    if (ctx->r12 != ctx->r1) {
        // 0x800B6638: nop
    
            goto L_800B6650;
    }
    // 0x800B6638: nop

    // 0x800B663C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800B6640: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6644: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B6648: nop

    // 0x800B664C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_800B6650:
    // 0x800B6650: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B6654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6658: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800B665C: addiu       $t3, $t3, 0x7AA0
    ctx->r11 = ADD32(ctx->r11, 0X7AA0);
    // 0x800B6660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6664: lh          $a2, 0xA8($t6)
    ctx->r6 = MEM_H(ctx->r14, 0XA8);
    // 0x800B6668: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800B666C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6670: jal         0x8001C0EC
    // 0x800B6674: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x800B6674: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_9:
L_800B6678:
    // 0x800B6678: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B667C: nop

    // 0x800B6680: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x800B6684: nop

    // 0x800B6688: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x800B668C: bne         $at, $zero, L_800B68D4
    if (ctx->r1 != 0) {
        // 0x800B6690: nop
    
            goto L_800B68D4;
    }
    // 0x800B6690: nop

    // 0x800B6694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6698: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B669C: jal         0x80028FA0
    // 0x800B66A0: nop

    func_80028FA0(rdram, ctx);
        goto after_10;
    // 0x800B66A0: nop

    after_10:
    // 0x800B66A4: beq         $v0, $zero, L_800B6780
    if (ctx->r2 == 0) {
        // 0x800B66A8: nop
    
            goto L_800B6780;
    }
    // 0x800B66A8: nop

    // 0x800B66AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B66B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B66B4: jal         0x80029B60
    // 0x800B66B8: nop

    func_80029B60(rdram, ctx);
        goto after_11;
    // 0x800B66B8: nop

    after_11:
    // 0x800B66BC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B66C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B66C4: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x800B66C8: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800B66CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B66D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B66D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B66D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B66DC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B66E0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B66E4: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x800B66E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B66EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B66F0: nop

    // 0x800B66F4: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800B66F8: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x800B66FC: nop

    // 0x800B6700: bc1f        L_800B6780
    if (!c1cs) {
        // 0x800B6704: nop
    
            goto L_800B6780;
    }
    // 0x800B6704: nop

    // 0x800B6708: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B670C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800B6710: sh          $t2, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r10;
    // 0x800B6714: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B6718: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800B671C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x800B6720: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800B6724: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B6728: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B672C: nop

    // 0x800B6730: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x800B6734: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800B6738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B673C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B6740: nop

    // 0x800B6744: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
    // 0x800B6748: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B674C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x800B6750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B6754: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800B6758: nop

    // 0x800B675C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B6760: nop

    // 0x800B6764: bc1f        L_800B6780
    if (!c1cs) {
        // 0x800B6768: nop
    
            goto L_800B6780;
    }
    // 0x800B6768: nop

    // 0x800B676C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x800B6770: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B6774: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B6778: nop

    // 0x800B677C: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
L_800B6780:
    // 0x800B6780: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800B6784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B6788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B678C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6790: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B6794: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B6798: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B679C: jal         0x80029F58
    // 0x800B67A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800B67A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x800B67A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B67A8: bne         $v0, $at, L_800B67FC
    if (ctx->r2 != ctx->r1) {
        // 0x800B67AC: nop
    
            goto L_800B67FC;
    }
    // 0x800B67AC: nop

    // 0x800B67B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B67B4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800B67B8: addiu       $t1, $t1, 0x7AA0
    ctx->r9 = ADD32(ctx->r9, 0X7AA0);
    // 0x800B67BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B67C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800B67C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B67C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B67CC: jal         0x8001C0EC
    // 0x800B67D0: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x800B67D0: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_13:
    // 0x800B67D4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B67D8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x800B67DC: sh          $t9, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r25;
    // 0x800B67E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B67E4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B67E8: nop

    // 0x800B67EC: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x800B67F0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B67F4: nop

    // 0x800B67F8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B67FC:
    // 0x800B67FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6800: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6804: jal         0x80029C40
    // 0x800B6808: nop

    func_80029C40(rdram, ctx);
        goto after_14;
    // 0x800B6808: nop

    after_14:
    // 0x800B680C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6810: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6818: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B681C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B6820: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B6824: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B6828: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B682C: jal         0x80029018
    // 0x800B6830: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_15;
    // 0x800B6830: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x800B6834: beq         $v0, $zero, L_800B6858
    if (ctx->r2 == 0) {
        // 0x800B6838: nop
    
            goto L_800B6858;
    }
    // 0x800B6838: nop

    // 0x800B683C: jal         0x800297DC
    // 0x800B6840: nop

    func_800297DC(rdram, ctx);
        goto after_16;
    // 0x800B6840: nop

    after_16:
    // 0x800B6844: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6848: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B684C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B6850: jal         0x80029824
    // 0x800B6854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_17;
    // 0x800B6854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
L_800B6858:
    // 0x800B6858: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B685C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B6860: lh          $t3, 0xB0($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XB0);
    // 0x800B6864: nop

    // 0x800B6868: bne         $t3, $at, L_800B68D4
    if (ctx->r11 != ctx->r1) {
        // 0x800B686C: nop
    
            goto L_800B68D4;
    }
    // 0x800B686C: nop

    // 0x800B6870: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B6874: lui         $at, 0xC5B4
    ctx->r1 = S32(0XC5B4 << 16);
    // 0x800B6878: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800B687C: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800B6880: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B6884: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800B6888: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x800B688C: nop

    // 0x800B6890: bc1f        L_800B68D4
    if (!c1cs) {
        // 0x800B6894: nop
    
            goto L_800B68D4;
    }
    // 0x800B6894: nop

    // 0x800B6898: jal         0x800297DC
    // 0x800B689C: nop

    func_800297DC(rdram, ctx);
        goto after_18;
    // 0x800B689C: nop

    after_18:
    // 0x800B68A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B68A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B68A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B68AC: jal         0x80029824
    // 0x800B68B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_19;
    // 0x800B68B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x800B68B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B68B8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B68BC: nop

    // 0x800B68C0: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x800B68C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B68C8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B68CC: nop

    // 0x800B68D0: swc1        $f6, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f6.u32l;
L_800B68D4:
    // 0x800B68D4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B68D8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B68DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B68E0: lwc1        $f8, 0x24($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X24);
    // 0x800B68E4: nop

    // 0x800B68E8: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800B68EC: nop

    // 0x800B68F0: bc1f        L_800B6908
    if (!c1cs) {
        // 0x800B68F4: nop
    
            goto L_800B6908;
    }
    // 0x800B68F4: nop

    // 0x800B68F8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B68FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B6900: b           L_800B6958
    // 0x800B6904: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
        goto L_800B6958;
    // 0x800B6904: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
L_800B6908:
    // 0x800B6908: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B690C: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6914: lwc1        $f18, 0x24($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X24);
    // 0x800B6918: nop

    // 0x800B691C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800B6920: nop

    // 0x800B6924: bc1f        L_800B693C
    if (!c1cs) {
        // 0x800B6928: nop
    
            goto L_800B693C;
    }
    // 0x800B6928: nop

    // 0x800B692C: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6930: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B6934: b           L_800B694C
    // 0x800B6938: nop

        goto L_800B694C;
    // 0x800B6938: nop

L_800B693C:
    // 0x800B693C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6940: nop

    // 0x800B6944: lwc1        $f20, 0x24($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X24);
    // 0x800B6948: nop

L_800B694C:
    // 0x800B694C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800B6950: nop

    // 0x800B6954: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_800B6958:
    // 0x800B6958: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800B695C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6960: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B6964: lwc1        $f6, 0x28($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X28);
    // 0x800B6968: nop

    // 0x800B696C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B6970: nop

    // 0x800B6974: bc1f        L_800B698C
    if (!c1cs) {
        // 0x800B6978: nop
    
            goto L_800B698C;
    }
    // 0x800B6978: nop

    // 0x800B697C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6980: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B6984: b           L_800B69DC
    // 0x800B6988: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
        goto L_800B69DC;
    // 0x800B6988: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
L_800B698C:
    // 0x800B698C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800B6990: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6994: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B6998: lwc1        $f10, 0x28($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800B699C: nop

    // 0x800B69A0: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x800B69A4: nop

    // 0x800B69A8: bc1f        L_800B69C0
    if (!c1cs) {
        // 0x800B69AC: nop
    
            goto L_800B69C0;
    }
    // 0x800B69AC: nop

    // 0x800B69B0: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B69B4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B69B8: b           L_800B69D0
    // 0x800B69BC: nop

        goto L_800B69D0;
    // 0x800B69BC: nop

L_800B69C0:
    // 0x800B69C0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800B69C4: nop

    // 0x800B69C8: lwc1        $f20, 0x28($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800B69CC: nop

L_800B69D0:
    // 0x800B69D0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800B69D4: nop

    // 0x800B69D8: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
L_800B69DC:
    // 0x800B69DC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800B69E0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B69E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B69E8: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B69EC: nop

    // 0x800B69F0: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800B69F4: nop

    // 0x800B69F8: bc1f        L_800B6A10
    if (!c1cs) {
        // 0x800B69FC: nop
    
            goto L_800B6A10;
    }
    // 0x800B69FC: nop

    // 0x800B6A00: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6A04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B6A08: b           L_800B6A60
    // 0x800B6A0C: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
        goto L_800B6A60;
    // 0x800B6A0C: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
L_800B6A10:
    // 0x800B6A10: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800B6A14: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6A18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B6A1C: lwc1        $f16, 0x2C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800B6A20: nop

    // 0x800B6A24: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800B6A28: nop

    // 0x800B6A2C: bc1f        L_800B6A44
    if (!c1cs) {
        // 0x800B6A30: nop
    
            goto L_800B6A44;
    }
    // 0x800B6A30: nop

    // 0x800B6A34: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6A38: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B6A3C: b           L_800B6A54
    // 0x800B6A40: nop

        goto L_800B6A54;
    // 0x800B6A40: nop

L_800B6A44:
    // 0x800B6A44: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800B6A48: nop

    // 0x800B6A4C: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800B6A50: nop

L_800B6A54:
    // 0x800B6A54: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800B6A58: nop

    // 0x800B6A5C: swc1        $f20, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f20.u32l;
L_800B6A60:
    // 0x800B6A60: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800B6A64: nop

    // 0x800B6A68: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B6A6C: nop

    // 0x800B6A70: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
    // 0x800B6A74: b           L_800B6A7C
    // 0x800B6A78: nop

        goto L_800B6A7C;
    // 0x800B6A78: nop

L_800B6A7C:
    // 0x800B6A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6A80: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800B6A84: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B6A88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800B6A8C: jr          $ra
    // 0x800B6A90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800B6A90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800BA734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA734: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800BA738: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800BA73C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA740: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BA744: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BA748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BA74C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BA750: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BA754: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BA758: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800BA75C: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800BA760: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800BA764: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800BA768: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA76C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BA770: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BA774: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BA778: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BA77C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BA780: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BA784: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BA788: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800BA78C: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800BA790: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA794: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BA798: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BA79C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BA7A0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BA7A4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BA7A8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800BA7AC: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800BA7B0: jr          $ra
    // 0x800BA7B4: nop

    return;
    // 0x800BA7B4: nop

    // 0x800BA7B8: jr          $ra
    // 0x800BA7BC: nop

    return;
    // 0x800BA7BC: nop

;}
RECOMP_FUNC void func_800EAAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EAAB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EAABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EAAC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EAAC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EAAC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EAACC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EAAD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EAAD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EAAD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EAADC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EAAE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EAAE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EAAE8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EAAEC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EAAF0: nop

    // 0x800EAAF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EAAF8: nop

    // 0x800EAAFC: bne         $t1, $zero, L_800EAB9C
    if (ctx->r9 != 0) {
        // 0x800EAB00: nop
    
            goto L_800EAB9C;
    }
    // 0x800EAB00: nop

    // 0x800EAB04: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EAB08: nop

    // 0x800EAB0C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EAB10: nop

    // 0x800EAB14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EAB18: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EAB1C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EAB20: nop

    // 0x800EAB24: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EAB28: nop

    // 0x800EAB2C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EAB30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EAB34: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EAB38: nop

    // 0x800EAB3C: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800EAB40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800EAB44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EAB48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EAB4C: nop

    // 0x800EAB50: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800EAB54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EAB58: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EAB5C: addiu       $t9, $t9, -0x6714
    ctx->r25 = ADD32(ctx->r25, -0X6714);
    // 0x800EAB60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAB64: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EAB68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EAB6C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800EAB70: jal         0x8001C0EC
    // 0x800EAB74: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EAB74: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800EAB78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EAB7C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800EAB80: addiu       $t1, $t1, -0x66F4
    ctx->r9 = ADD32(ctx->r9, -0X66F4);
    // 0x800EAB84: lh          $a0, 0xEC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEC);
    // 0x800EAB88: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800EAB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EAB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EAB94: jal         0x8001C0EC
    // 0x800EAB98: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EAB98: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
L_800EAB9C:
    // 0x800EAB9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EABA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EABA4: jal         0x8001B62C
    // 0x800EABA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800EABA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800EABAC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800EABB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EABB4: nop

    // 0x800EABB8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800EABBC: nop

    // 0x800EABC0: bc1f        L_800EACF8
    if (!c1cs) {
        // 0x800EABC4: nop
    
            goto L_800EACF8;
    }
    // 0x800EABC4: nop

    // 0x800EABC8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EABCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EABD0: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800EABD4: nop

    // 0x800EABD8: bne         $t4, $at, L_800EACF8
    if (ctx->r12 != ctx->r1) {
        // 0x800EABDC: nop
    
            goto L_800EACF8;
    }
    // 0x800EABDC: nop

    // 0x800EABE0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EABE4: nop

    // 0x800EABE8: lbu         $t6, 0x132($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X132);
    // 0x800EABEC: nop

    // 0x800EABF0: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x800EABF4: sb          $t5, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r13;
    // 0x800EABF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EABFC: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x800EAC00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EAC04: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800EAC08: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x800EAC0C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EAC10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EAC14: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800EAC18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EAC1C: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800EAC20: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EAC24: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800EAC28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EAC2C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EAC30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800EAC34: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EAC38: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800EAC3C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800EAC40: addiu       $a1, $a1, 0x44B0
    ctx->r5 = ADD32(ctx->r5, 0X44B0);
    // 0x800EAC44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EAC48: jal         0x80027464
    // 0x800EAC4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800EAC4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800EAC50: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800EAC54: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800EAC58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EAC5C: beq         $t8, $at, L_800EAC78
    if (ctx->r24 == ctx->r1) {
        // 0x800EAC60: nop
    
            goto L_800EAC78;
    }
    // 0x800EAC60: nop

    // 0x800EAC64: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800EAC68: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800EAC6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800EAC70: jal         0x80026F10
    // 0x800EAC74: nop

    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x800EAC74: nop

    after_4:
L_800EAC78:
    // 0x800EAC78: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EAC7C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x800EAC80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAC84: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800EAC88: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x800EAC8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800EAC90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EAC94: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800EAC98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAC9C: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800EACA0: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800EACA4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800EACA8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EACAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EACB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EACB4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EACB8: lwc1        $f16, 0x1C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800EACBC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x800EACC0: addiu       $a1, $a1, 0x44B0
    ctx->r5 = ADD32(ctx->r5, 0X44B0);
    // 0x800EACC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EACC8: jal         0x80027464
    // 0x800EACCC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x800EACCC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800EACD0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800EACD4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800EACD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EACDC: beq         $t0, $at, L_800EACF8
    if (ctx->r8 == ctx->r1) {
        // 0x800EACE0: nop
    
            goto L_800EACF8;
    }
    // 0x800EACE0: nop

    // 0x800EACE4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800EACE8: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800EACEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800EACF0: jal         0x80026F10
    // 0x800EACF4: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x800EACF4: nop

    after_6:
L_800EACF8:
    // 0x800EACF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EACFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAD00: jal         0x80029C40
    // 0x800EAD04: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800EAD04: nop

    after_7:
    // 0x800EAD08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800EAD0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EAD10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EAD14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAD18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EAD1C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800EAD20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EAD24: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EAD28: jal         0x80029018
    // 0x800EAD2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800EAD2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800EAD30: beq         $v0, $zero, L_800EAD5C
    if (ctx->r2 == 0) {
        // 0x800EAD34: nop
    
            goto L_800EAD5C;
    }
    // 0x800EAD34: nop

    // 0x800EAD38: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EAD3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EAD40: nop

    // 0x800EAD44: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800EAD48: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EAD4C: nop

    // 0x800EAD50: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800EAD54: nop

    // 0x800EAD58: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_800EAD5C:
    // 0x800EAD5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EAD60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EAD64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EAD68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAD6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EAD70: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EAD74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EAD78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EAD7C: jal         0x800295C0
    // 0x800EAD80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x800EAD80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x800EAD84: beq         $v0, $zero, L_800EAD9C
    if (ctx->r2 == 0) {
        // 0x800EAD88: nop
    
            goto L_800EAD9C;
    }
    // 0x800EAD88: nop

    // 0x800EAD8C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EAD90: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EAD94: b           L_800EADAC
    // 0x800EAD98: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
        goto L_800EADAC;
    // 0x800EAD98: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
L_800EAD9C:
    // 0x800EAD9C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EADA0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EADA4: nop

    // 0x800EADA8: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
L_800EADAC:
    // 0x800EADAC: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800EADB0:
    // 0x800EADB0: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800EADB4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EADB8: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x800EADBC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800EADC0: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x800EADC4: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800EADC8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EADCC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EADD0: lwc1        $f8, 0x24($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800EADD4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EADD8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EADDC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EADE0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EADE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EADE8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800EADEC: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x800EADF0: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800EADF4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EADF8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800EADFC: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x800EAE00: lh          $t2, 0xE8($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XE8);
    // 0x800EAE04: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800EAE08: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800EAE0C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800EAE10: lwc1        $f18, 0x28($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800EAE14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EAE18: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800EAE1C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EAE20: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EAE24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EAE28: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EAE2C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x800EAE30: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800EAE34: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EAE38: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800EAE3C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800EAE40: lh          $t3, 0xE8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XE8);
    // 0x800EAE44: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800EAE48: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800EAE4C: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800EAE50: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800EAE54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EAE58: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800EAE5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EAE60: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EAE64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EAE68: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EAE6C: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x800EAE70: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800EAE74: nop

    // 0x800EAE78: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800EAE7C: sll         $t2, $t6, 16
    ctx->r10 = S32(ctx->r14 << 16);
    // 0x800EAE80: sra         $t5, $t2, 16
    ctx->r13 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800EAE84: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x800EAE88: bne         $at, $zero, L_800EADB0
    if (ctx->r1 != 0) {
        // 0x800EAE8C: sh          $t6, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r14;
            goto L_800EADB0;
    }
    // 0x800EAE8C: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x800EAE90: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EAE94: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EAE98: lh          $t7, 0xE8($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XE8);
    // 0x800EAE9C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EAEA0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EAEA4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAEA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EAEAC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAEB0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EAEB4: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x800EAEB8: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EAEBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EAEC0: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EAEC4: nop

    // 0x800EAEC8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EAECC: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x800EAED0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EAED4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EAED8: lh          $t4, 0xEA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XEA);
    // 0x800EAEDC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EAEE0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800EAEE4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800EAEE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EAEEC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800EAEF0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EAEF4: addu        $t5, $t6, $t2
    ctx->r13 = ADD32(ctx->r14, ctx->r10);
    // 0x800EAEF8: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EAEFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAF00: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EAF04: nop

    // 0x800EAF08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EAF0C: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x800EAF10: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EAF14: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EAF18: lh          $t7, 0xEC($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XEC);
    // 0x800EAF1C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EAF20: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EAF24: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAF28: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EAF2C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EAF30: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EAF34: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x800EAF38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EAF3C: lwc1        $f18, 0x5558($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5558);
    // 0x800EAF40: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EAF44: nop

    // 0x800EAF48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EAF4C: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x800EAF50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EAF54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EAF58: jal         0x8001B4AC
    // 0x800EAF5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_10;
    // 0x800EAF5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x800EAF60: beq         $v0, $zero, L_800EAF8C
    if (ctx->r2 == 0) {
        // 0x800EAF64: nop
    
            goto L_800EAF8C;
    }
    // 0x800EAF64: nop

    // 0x800EAF68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EAF6C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800EAF70: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800EAF74: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EAF78: nop

    // 0x800EAF7C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800EAF80: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EAF84: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x800EAF88: sh          $t2, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r10;
L_800EAF8C:
    // 0x800EAF8C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EAF90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EAF94: lh          $t7, 0xA6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA6);
    // 0x800EAF98: nop

    // 0x800EAF9C: bne         $t7, $at, L_800EB004
    if (ctx->r15 != ctx->r1) {
        // 0x800EAFA0: nop
    
            goto L_800EB004;
    }
    // 0x800EAFA0: nop

    // 0x800EAFA4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EAFA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EAFAC: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x800EAFB0: nop

    // 0x800EAFB4: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800EAFB8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800EAFBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EAFC0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800EAFC4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EAFC8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800EAFCC: lwc1        $f6, 0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800EAFD0: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800EAFD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EAFD8: nop

    // 0x800EAFDC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800EAFE0: nop

    // 0x800EAFE4: bc1f        L_800EB004
    if (!c1cs) {
        // 0x800EAFE8: nop
    
            goto L_800EB004;
    }
    // 0x800EAFE8: nop

    // 0x800EAFEC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EAFF0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800EAFF4: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800EAFF8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EAFFC: nop

    // 0x800EB000: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800EB004:
    // 0x800EB004: b           L_800EB00C
    // 0x800EB008: nop

        goto L_800EB00C;
    // 0x800EB008: nop

L_800EB00C:
    // 0x800EB00C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB010: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EB014: jr          $ra
    // 0x800EB018: nop

    return;
    // 0x800EB018: nop

;}
RECOMP_FUNC void func_800D1DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1DE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1DEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1DF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1DF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D1DF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1DFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1E00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1E04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1E08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1E0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D1E10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D1E14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D1E18: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x800D1E1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_800D1E20:
    // 0x800D1E20: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800D1E24: jal         0x80026E58
    // 0x800D1E28: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x800D1E28: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_0:
    // 0x800D1E2C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800D1E30: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800D1E34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D1E38: bne         $t1, $at, L_800D1E50
    if (ctx->r9 != ctx->r1) {
        // 0x800D1E3C: nop
    
            goto L_800D1E50;
    }
    // 0x800D1E3C: nop

    // 0x800D1E40: b           L_800D1E88
    // 0x800D1E44: nop

        goto L_800D1E88;
    // 0x800D1E44: nop

    // 0x800D1E48: b           L_800D1E80
    // 0x800D1E4C: nop

        goto L_800D1E80;
    // 0x800D1E4C: nop

L_800D1E50:
    // 0x800D1E50: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800D1E54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1E58: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D1E5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D1E60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D1E64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D1E68: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D1E6C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800D1E70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D1E74: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
    // 0x800D1E78: b           L_800D1E88
    // 0x800D1E7C: nop

        goto L_800D1E88;
    // 0x800D1E7C: nop

L_800D1E80:
    // 0x800D1E80: b           L_800D1E20
    // 0x800D1E84: nop

        goto L_800D1E20;
    // 0x800D1E84: nop

L_800D1E88:
    // 0x800D1E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1E8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1E90: jal         0x8002B0E4
    // 0x800D1E94: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800D1E94: nop

    after_1:
    // 0x800D1E98: b           L_800D1EA0
    // 0x800D1E9C: nop

        goto L_800D1EA0;
    // 0x800D1E9C: nop

L_800D1EA0:
    // 0x800D1EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1EA8: jr          $ra
    // 0x800D1EAC: nop

    return;
    // 0x800D1EAC: nop

;}
RECOMP_FUNC void func_800A5DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5DB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A5DB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A5DBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A5DC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A5DC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A5DC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A5DCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5DD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A5DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5DD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A5DDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A5DE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A5DE4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A5DE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A5DEC: nop

    // 0x800A5DF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A5DF4: nop

    // 0x800A5DF8: bne         $t1, $zero, L_800A5E38
    if (ctx->r9 != 0) {
        // 0x800A5DFC: nop
    
            goto L_800A5E38;
    }
    // 0x800A5DFC: nop

    // 0x800A5E00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A5E08: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A5E0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A5E10: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E14: nop

    // 0x800A5E18: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A5E1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A5E20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E24: nop

    // 0x800A5E28: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A5E2C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E30: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800A5E34: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800A5E38:
    // 0x800A5E38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E3C: nop

    // 0x800A5E40: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A5E44: nop

    // 0x800A5E48: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A5E4C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800A5E50: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A5E54: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800A5E58: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A5E5C: nop

    // 0x800A5E60: bne         $t2, $at, L_800A5F08
    if (ctx->r10 != ctx->r1) {
        // 0x800A5E64: nop
    
            goto L_800A5F08;
    }
    // 0x800A5E64: nop

    // 0x800A5E68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5E6C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800A5E70: addiu       $t3, $t3, 0x7088
    ctx->r11 = ADD32(ctx->r11, 0X7088);
    // 0x800A5E74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5E78: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800A5E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A5E84: jal         0x8001C0EC
    // 0x800A5E88: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A5E88: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_0:
    // 0x800A5E8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5E90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5E94: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A5E98: addiu       $a3, $a3, 0x7108
    ctx->r7 = ADD32(ctx->r7, 0X7108);
    // 0x800A5E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5EA0: jal         0x8001ABF4
    // 0x800A5EA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A5EA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800A5EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5EB0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A5EB4: addiu       $a3, $a3, 0x7124
    ctx->r7 = ADD32(ctx->r7, 0X7124);
    // 0x800A5EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A5EBC: jal         0x8001ABF4
    // 0x800A5EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800A5EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800A5EC4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A5EC8: nop

    // 0x800A5ECC: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800A5ED0: nop

    // 0x800A5ED4: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
    // 0x800A5ED8: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800A5EDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A5EE0: beq         $t6, $at, L_800A5F08
    if (ctx->r14 == ctx->r1) {
        // 0x800A5EE4: nop
    
            goto L_800A5F08;
    }
    // 0x800A5EE4: nop

    // 0x800A5EE8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800A5EEC: addiu       $t7, $t7, 0x71B0
    ctx->r15 = ADD32(ctx->r15, 0X71B0);
    // 0x800A5EF0: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800A5EF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800A5EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A5F00: jal         0x8001C0EC
    // 0x800A5F04: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800A5F04: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_3:
L_800A5F08:
    // 0x800A5F08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5F10: jal         0x80029C40
    // 0x800A5F14: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A5F14: nop

    after_4:
    // 0x800A5F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5F20: jal         0x80029D04
    // 0x800A5F24: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A5F24: nop

    after_5:
    // 0x800A5F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5F2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5F30: jal         0x80028FA0
    // 0x800A5F34: nop

    func_80028FA0(rdram, ctx);
        goto after_6;
    // 0x800A5F34: nop

    after_6:
    // 0x800A5F38: beq         $v0, $zero, L_800A5F50
    if (ctx->r2 == 0) {
        // 0x800A5F3C: nop
    
            goto L_800A5F50;
    }
    // 0x800A5F3C: nop

    // 0x800A5F40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5F44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5F48: jal         0x80029B60
    // 0x800A5F4C: nop

    func_80029B60(rdram, ctx);
        goto after_7;
    // 0x800A5F4C: nop

    after_7:
L_800A5F50:
    // 0x800A5F50: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A5F54: nop

    // 0x800A5F58: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800A5F5C: nop

    // 0x800A5F60: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x800A5F64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A5F68: nop

    // 0x800A5F6C: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x800A5F70: nop

    // 0x800A5F74: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x800A5F78: bne         $at, $zero, L_800A6044
    if (ctx->r1 != 0) {
        // 0x800A5F7C: nop
    
            goto L_800A6044;
    }
    // 0x800A5F7C: nop

    // 0x800A5F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5F88: jal         0x8002A1FC
    // 0x800A5F8C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x800A5F8C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x800A5F90: beq         $v0, $zero, L_800A5FE8
    if (ctx->r2 == 0) {
        // 0x800A5F94: nop
    
            goto L_800A5FE8;
    }
    // 0x800A5F94: nop

    // 0x800A5F98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A5F9C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800A5FA0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800A5FA4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A5FA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A5FAC: sh          $t3, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r11;
    // 0x800A5FB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A5FB4: nop

    // 0x800A5FB8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800A5FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5FC0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800A5FC4: addiu       $t6, $t6, 0x7088
    ctx->r14 = ADD32(ctx->r14, 0X7088);
    // 0x800A5FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5FCC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A5FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5FD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A5FD8: jal         0x8001C0EC
    // 0x800A5FDC: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x800A5FDC: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_9:
    // 0x800A5FE0: b           L_800A6044
    // 0x800A5FE4: nop

        goto L_800A6044;
    // 0x800A5FE4: nop

L_800A5FE8:
    // 0x800A5FE8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A5FEC: nop

    // 0x800A5FF0: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x800A5FF4: nop

    // 0x800A5FF8: slti        $at, $t9, 0x50
    ctx->r1 = SIGNED(ctx->r25) < 0X50 ? 1 : 0;
    // 0x800A5FFC: bne         $at, $zero, L_800A6044
    if (ctx->r1 != 0) {
        // 0x800A6000: nop
    
            goto L_800A6044;
    }
    // 0x800A6000: nop

    // 0x800A6004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A600C: jal         0x8002A46C
    // 0x800A6010: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_10;
    // 0x800A6010: nop

    after_10:
    // 0x800A6014: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A6018: nop

    // 0x800A601C: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x800A6020: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A6024: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800A6028: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x800A602C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A6030: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A6034: sh          $t2, 0xB0($t3)
    MEM_H(0XB0, ctx->r11) = ctx->r10;
    // 0x800A6038: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A603C: nop

    // 0x800A6040: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800A6044:
    // 0x800A6044: b           L_800A604C
    // 0x800A6048: nop

        goto L_800A604C;
    // 0x800A6048: nop

L_800A604C:
    // 0x800A604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6050: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A6054: jr          $ra
    // 0x800A6058: nop

    return;
    // 0x800A6058: nop

;}
