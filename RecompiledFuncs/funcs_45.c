#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800E7A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7A7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E7A80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E7A84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E7A88: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E7A8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7A90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7A94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7A98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7A9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7AA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7AA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7AA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7AAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7AB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7AB4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E7AB8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7ABC: nop

    // 0x800E7AC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E7AC4: nop

    // 0x800E7AC8: bne         $t1, $zero, L_800E7B64
    if (ctx->r9 != 0) {
        // 0x800E7ACC: nop
    
            goto L_800E7B64;
    }
    // 0x800E7ACC: nop

    // 0x800E7AD0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7AD4: nop

    // 0x800E7AD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E7ADC: nop

    // 0x800E7AE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E7AE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E7AE8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7AEC: nop

    // 0x800E7AF0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E7AF4: nop

    // 0x800E7AF8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E7AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7B04: jal         0x8002A46C
    // 0x800E7B08: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800E7B08: nop

    after_0:
    // 0x800E7B0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7B10: nop

    // 0x800E7B14: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x800E7B18: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7B1C: nop

    // 0x800E7B20: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E7B24: nop

    // 0x800E7B28: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E7B2C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E7B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E7B34: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7B38: nop

    // 0x800E7B3C: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x800E7B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7B44: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E7B48: addiu       $t0, $t0, -0x6878
    ctx->r8 = ADD32(ctx->r8, -0X6878);
    // 0x800E7B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7B50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800E7B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7B58: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800E7B5C: jal         0x8001C0EC
    // 0x800E7B60: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E7B60: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_1:
L_800E7B64:
    // 0x800E7B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7B6C: jal         0x80028FA0
    // 0x800E7B70: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800E7B70: nop

    after_2:
    // 0x800E7B74: beq         $v0, $zero, L_800E7B8C
    if (ctx->r2 == 0) {
        // 0x800E7B78: nop
    
            goto L_800E7B8C;
    }
    // 0x800E7B78: nop

    // 0x800E7B7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7B80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7B84: jal         0x80029B60
    // 0x800E7B88: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800E7B88: nop

    after_3:
L_800E7B8C:
    // 0x800E7B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7B94: jal         0x8002A8B4
    // 0x800E7B98: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800E7B98: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x800E7B9C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7BA0: nop

    // 0x800E7BA4: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800E7BA8: nop

    // 0x800E7BAC: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x800E7BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7BB8: jal         0x80029C40
    // 0x800E7BBC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E7BBC: nop

    after_5:
    // 0x800E7BC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E7BC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E7BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7BD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800E7BD4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E7BD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E7BDC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E7BE0: jal         0x80029018
    // 0x800E7BE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E7BE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800E7BE8: beq         $v0, $zero, L_800E7C38
    if (ctx->r2 == 0) {
        // 0x800E7BEC: nop
    
            goto L_800E7C38;
    }
    // 0x800E7BEC: nop

    // 0x800E7BF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E7BF4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7BF8: nop

    // 0x800E7BFC: swc1        $f18, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f18.u32l;
    // 0x800E7C00: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7C04: nop

    // 0x800E7C08: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E7C0C: nop

    // 0x800E7C10: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E7C14: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7C18: nop

    // 0x800E7C1C: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x800E7C20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7C24: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800E7C28: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x800E7C2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7C30: nop

    // 0x800E7C34: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800E7C38:
    // 0x800E7C38: b           L_800E7C40
    // 0x800E7C3C: nop

        goto L_800E7C40;
    // 0x800E7C3C: nop

L_800E7C40:
    // 0x800E7C40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E7C44: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E7C48: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E7C4C: jr          $ra
    // 0x800E7C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E7C50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800917D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800917D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800917D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800917D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800917DC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800917E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800917E4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800917E8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800917EC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800917F0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800917F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800917F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800917FC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091800: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091804: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091808: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009180C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091810: addiu       $a1, $a1, 0x15AC
    ctx->r5 = ADD32(ctx->r5, 0X15AC);
    // 0x80091814: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091818: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009181C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091820: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091824: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091828: jal         0x80027464
    // 0x8009182C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009182C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091830: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091834: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091838: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009183C: addiu       $a3, $a3, 0x263C
    ctx->r7 = ADD32(ctx->r7, 0X263C);
    // 0x80091840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091844: jal         0x8001ABF4
    // 0x80091848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009184C: b           L_80091854
    // 0x80091850: nop

        goto L_80091854;
    // 0x80091850: nop

L_80091854:
    // 0x80091854: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009185C: jr          $ra
    // 0x80091860: nop

    return;
    // 0x80091860: nop

;}
RECOMP_FUNC void func_800C27B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C27B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C27B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C27B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C27BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C27C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C27C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C27C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C27CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C27D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C27D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C27D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C27DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C27E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C27E4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C27E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C27EC: nop

    // 0x800C27F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C27F4: nop

    // 0x800C27F8: bne         $t1, $zero, L_800C2888
    if (ctx->r9 != 0) {
        // 0x800C27FC: nop
    
            goto L_800C2888;
    }
    // 0x800C27FC: nop

    // 0x800C2800: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C2804: nop

    // 0x800C2808: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C280C: nop

    // 0x800C2810: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C2814: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C2818: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C281C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2820: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C2824: nop

    // 0x800C2828: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C282C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C2830: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800C2834: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800C2838: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C283C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2840: jal         0x8001BBDC
    // 0x800C2844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C2844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C2848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C284C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800C2850: addiu       $t8, $t8, 0x7FF0
    ctx->r24 = ADD32(ctx->r24, 0X7FF0);
    // 0x800C2854: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2858: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C285C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2860: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800C2864: jal         0x8001C0EC
    // 0x800C2868: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C2868: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
    // 0x800C286C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2878: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x800C287C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C2880: jal         0x800175F0
    // 0x800C2884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800C2884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C2888:
    // 0x800C2888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C288C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2890: jal         0x80028FA0
    // 0x800C2894: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800C2894: nop

    after_3:
    // 0x800C2898: beq         $v0, $zero, L_800C28C4
    if (ctx->r2 == 0) {
        // 0x800C289C: nop
    
            goto L_800C28C4;
    }
    // 0x800C289C: nop

    // 0x800C28A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C28A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C28A8: jal         0x80029B60
    // 0x800C28AC: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800C28AC: nop

    after_4:
    // 0x800C28B0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C28B4: nop

    // 0x800C28B8: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800C28BC: nop

    // 0x800C28C0: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_800C28C4:
    // 0x800C28C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C28C8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C28CC: nop

    // 0x800C28D0: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x800C28D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C28D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C28DC: jal         0x80029C40
    // 0x800C28E0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800C28E0: nop

    after_5:
    // 0x800C28E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C28E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C28EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C28F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C28F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C28F8: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x800C28FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C2900: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C2904: jal         0x80029018
    // 0x800C2908: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800C2908: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800C290C: beq         $v0, $zero, L_800C2944
    if (ctx->r2 == 0) {
        // 0x800C2910: nop
    
            goto L_800C2944;
    }
    // 0x800C2910: nop

    // 0x800C2914: jal         0x800297DC
    // 0x800C2918: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800C2918: nop

    after_7:
    // 0x800C291C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2920: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2924: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C2928: jal         0x80029824
    // 0x800C292C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800C292C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800C2930: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C2934: nop

    // 0x800C2938: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800C293C: nop

    // 0x800C2940: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
L_800C2944:
    // 0x800C2944: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2948: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C294C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2954: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800C2958: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800C295C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C2960: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C2964: jal         0x800295C0
    // 0x800C2968: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x800C2968: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x800C296C: beq         $v0, $zero, L_800C2984
    if (ctx->r2 == 0) {
        // 0x800C2970: nop
    
            goto L_800C2984;
    }
    // 0x800C2970: nop

    // 0x800C2974: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C2978: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C297C: b           L_800C2994
    // 0x800C2980: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
        goto L_800C2994;
    // 0x800C2980: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
L_800C2984:
    // 0x800C2984: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C2988: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C298C: nop

    // 0x800C2990: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
L_800C2994:
    // 0x800C2994: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C2998: nop

    // 0x800C299C: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800C29A0: nop

    // 0x800C29A4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800C29A8: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
    // 0x800C29AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C29B0: nop

    // 0x800C29B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800C29B8: nop

    // 0x800C29BC: bne         $t8, $zero, L_800C29DC
    if (ctx->r24 != 0) {
        // 0x800C29C0: nop
    
            goto L_800C29DC;
    }
    // 0x800C29C0: nop

    // 0x800C29C4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C29C8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800C29CC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C29D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C29D4: nop

    // 0x800C29D8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C29DC:
    // 0x800C29DC: b           L_800C29E4
    // 0x800C29E0: nop

        goto L_800C29E4;
    // 0x800C29E0: nop

L_800C29E4:
    // 0x800C29E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C29E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C29EC: jr          $ra
    // 0x800C29F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C29F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D9620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D9624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D9628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D962C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9630: jal         0x8002B0E4
    // 0x800D9634: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D9634: nop

    after_0:
    // 0x800D9638: b           L_800D9640
    // 0x800D963C: nop

        goto L_800D9640;
    // 0x800D963C: nop

L_800D9640:
    // 0x800D9640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D9644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D9648: jr          $ra
    // 0x800D964C: nop

    return;
    // 0x800D964C: nop

;}
RECOMP_FUNC void func_800919F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800919F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800919F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800919F8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800919FC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091A00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091A04: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091A08: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091A0C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091A10: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091A14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091A18: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091A1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091A20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091A24: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091A28: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091A2C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091A30: addiu       $a1, $a1, 0x15DC
    ctx->r5 = ADD32(ctx->r5, 0X15DC);
    // 0x80091A34: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091A38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091A3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091A40: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091A44: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091A48: jal         0x80027464
    // 0x80091A4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091A4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091A50: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091A54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091A58: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091A5C: addiu       $a3, $a3, 0x2940
    ctx->r7 = ADD32(ctx->r7, 0X2940);
    // 0x80091A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091A64: jal         0x8001ABF4
    // 0x80091A68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091A68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80091A6C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091A70: addiu       $a3, $a3, 0x2940
    ctx->r7 = ADD32(ctx->r7, 0X2940);
    // 0x80091A74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091A78: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80091A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80091A80: jal         0x8001ABF4
    // 0x80091A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80091A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80091A88: b           L_80091A90
    // 0x80091A8C: nop

        goto L_80091A90;
    // 0x80091A8C: nop

L_80091A90:
    // 0x80091A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091A98: jr          $ra
    // 0x80091A9C: nop

    return;
    // 0x80091A9C: nop

;}
RECOMP_FUNC void func_800DA838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA838: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DA83C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA840: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DA844: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DA848: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DA84C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DA850: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DA854: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DA858: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DA85C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DA860: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DA864: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DA868: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DA86C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DA870: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DA874: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DA878: addiu       $a1, $a1, 0x42C4
    ctx->r5 = ADD32(ctx->r5, 0X42C4);
    // 0x800DA87C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DA880: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DA884: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DA888: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DA88C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DA890: jal         0x80027464
    // 0x800DA894: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DA894: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DA898: b           L_800DA8A0
    // 0x800DA89C: nop

        goto L_800DA8A0;
    // 0x800DA89C: nop

L_800DA8A0:
    // 0x800DA8A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA8A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DA8A8: jr          $ra
    // 0x800DA8AC: nop

    return;
    // 0x800DA8AC: nop

;}
RECOMP_FUNC void func_800C6DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C6DF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C6DF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C6DF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C6DFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C6E00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C6E04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C6E08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C6E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C6E10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C6E14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C6E18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C6E1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C6E20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C6E24: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C6E28: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E2C: nop

    // 0x800C6E30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C6E34: nop

    // 0x800C6E38: bne         $t1, $zero, L_800C6EA0
    if (ctx->r9 != 0) {
        // 0x800C6E3C: nop
    
            goto L_800C6EA0;
    }
    // 0x800C6E3C: nop

    // 0x800C6E40: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E44: nop

    // 0x800C6E48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C6E4C: nop

    // 0x800C6E50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C6E54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C6E58: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800C6E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C6E60: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E64: nop

    // 0x800C6E68: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C6E6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C6E74: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800C6E78: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E7C: nop

    // 0x800C6E80: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x800C6E84: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6E88: nop

    // 0x800C6E8C: sh          $zero, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = 0;
    // 0x800C6E90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6E94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6E98: jal         0x8001BBDC
    // 0x800C6E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C6E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800C6EA0:
    // 0x800C6EA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6EA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6EA8: jal         0x80028FA0
    // 0x800C6EAC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800C6EAC: nop

    after_1:
    // 0x800C6EB0: beq         $v0, $zero, L_800C6ED4
    if (ctx->r2 == 0) {
        // 0x800C6EB4: nop
    
            goto L_800C6ED4;
    }
    // 0x800C6EB4: nop

    // 0x800C6EB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6EBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6EC0: jal         0x80029B60
    // 0x800C6EC4: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800C6EC4: nop

    after_2:
    // 0x800C6EC8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6ECC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800C6ED0: sh          $t0, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r8;
L_800C6ED4:
    // 0x800C6ED4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C6ED8: nop

    // 0x800C6EDC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C6EE0: nop

    // 0x800C6EE4: beq         $t4, $zero, L_800C6F34
    if (ctx->r12 == 0) {
        // 0x800C6EE8: nop
    
            goto L_800C6F34;
    }
    // 0x800C6EE8: nop

    // 0x800C6EEC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C6EF0: nop

    // 0x800C6EF4: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x800C6EF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6F00: lui         $a2, 0x3F3A
    ctx->r6 = S32(0X3F3A << 16);
    // 0x800C6F04: ori         $a2, $a2, 0x2E90
    ctx->r6 = ctx->r6 | 0X2E90;
    // 0x800C6F08: jal         0x80029EF8
    // 0x800C6F0C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800C6F0C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_3:
    // 0x800C6F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6F14: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C6F18: addiu       $t5, $t5, -0x7E90
    ctx->r13 = ADD32(ctx->r13, -0X7E90);
    // 0x800C6F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6F20: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C6F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C6F28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C6F2C: jal         0x8001C0EC
    // 0x800C6F30: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C6F30: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_4:
L_800C6F34:
    // 0x800C6F34: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6F38: nop

    // 0x800C6F3C: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800C6F40: nop

    // 0x800C6F44: bne         $t7, $zero, L_800C6FEC
    if (ctx->r15 != 0) {
        // 0x800C6F48: nop
    
            goto L_800C6FEC;
    }
    // 0x800C6F48: nop

    // 0x800C6F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6F54: jal         0x8002A46C
    // 0x800C6F58: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x800C6F58: nop

    after_5:
    // 0x800C6F5C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800C6F60: nop

    // 0x800C6F64: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800C6F68: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C6F6C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C6F70: nop

    // 0x800C6F74: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C6F78: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800C6F7C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800C6F80: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C6F84: nop

    // 0x800C6F88: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6F8C: nop

    // 0x800C6F90: addiu       $t1, $t0, -0xB4
    ctx->r9 = ADD32(ctx->r8, -0XB4);
    // 0x800C6F94: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800C6F98: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6F9C: nop

    // 0x800C6FA0: bgez        $t3, L_800C6FB8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800C6FA4: nop
    
            goto L_800C6FB8;
    }
    // 0x800C6FA4: nop

    // 0x800C6FA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6FAC: nop

    // 0x800C6FB0: addiu       $t2, $t4, 0x168
    ctx->r10 = ADD32(ctx->r12, 0X168);
    // 0x800C6FB4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_800C6FB8:
    // 0x800C6FB8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6FBC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6FC0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800C6FC4: nop

    // 0x800C6FC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C6FCC: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x800C6FD0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6FD4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C6FD8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800C6FDC: nop

    // 0x800C6FE0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C6FE4: b           L_800C7004
    // 0x800C6FE8: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
        goto L_800C7004;
    // 0x800C6FE8: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
L_800C6FEC:
    // 0x800C6FEC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6FF0: nop

    // 0x800C6FF4: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x800C6FF8: nop

    // 0x800C6FFC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800C7000: sh          $t1, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r9;
L_800C7004:
    // 0x800C7004: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C7008: nop

    // 0x800C700C: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800C7010: nop

    // 0x800C7014: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x800C7018: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C701C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C7020: nop

    // 0x800C7024: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x800C7028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C702C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7030: jal         0x80029C40
    // 0x800C7034: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800C7034: nop

    after_6:
    // 0x800C7038: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C703C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C7040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C704C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800C7050: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C7054: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800C7058: jal         0x80029018
    // 0x800C705C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800C705C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x800C7060: beq         $v0, $zero, L_800C7084
    if (ctx->r2 == 0) {
        // 0x800C7064: nop
    
            goto L_800C7084;
    }
    // 0x800C7064: nop

    // 0x800C7068: jal         0x800297DC
    // 0x800C706C: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800C706C: nop

    after_8:
    // 0x800C7070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7078: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C707C: jal         0x80029824
    // 0x800C7080: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800C7080: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800C7084:
    // 0x800C7084: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C7088: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C708C: nop

    // 0x800C7090: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x800C7094: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C7098: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C709C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C70A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C70A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C70A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C70AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C70B0: jal         0x80029F58
    // 0x800C70B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x800C70B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x800C70B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C70BC: bne         $v0, $at, L_800C7118
    if (ctx->r2 != ctx->r1) {
        // 0x800C70C0: nop
    
            goto L_800C7118;
    }
    // 0x800C70C0: nop

    // 0x800C70C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C70C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C70CC: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800C70D0: nop

    // 0x800C70D4: bne         $t6, $at, L_800C70F4
    if (ctx->r14 != ctx->r1) {
        // 0x800C70D8: nop
    
            goto L_800C70F4;
    }
    // 0x800C70D8: nop

    // 0x800C70DC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C70E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800C70E4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800C70E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C70EC: b           L_800C7118
    // 0x800C70F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_800C7118;
    // 0x800C70F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800C70F4:
    // 0x800C70F4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C70F8: nop

    // 0x800C70FC: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800C7100: nop

    // 0x800C7104: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800C7108: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
    // 0x800C710C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C7110: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C7114: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_800C7118:
    // 0x800C7118: b           L_800C7120
    // 0x800C711C: nop

        goto L_800C7120;
    // 0x800C711C: nop

L_800C7120:
    // 0x800C7120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C7124: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C7128: jr          $ra
    // 0x800C712C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C712C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DC5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC5CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DC5D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DC5D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DC5D8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DC5DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DC5E0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DC5E4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DC5E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DC5EC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DC5F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DC5F4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DC5F8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DC5FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DC600: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DC604: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DC608: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DC60C: addiu       $a1, $a1, 0x433C
    ctx->r5 = ADD32(ctx->r5, 0X433C);
    // 0x800DC610: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DC614: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DC618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DC61C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DC620: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DC624: jal         0x80027464
    // 0x800DC628: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DC628: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DC62C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800DC630: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DC634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DC638: beq         $t1, $at, L_800DC654
    if (ctx->r9 == ctx->r1) {
        // 0x800DC63C: nop
    
            goto L_800DC654;
    }
    // 0x800DC63C: nop

    // 0x800DC640: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800DC644: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800DC648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DC64C: jal         0x80019448
    // 0x800DC650: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800DC650: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_800DC654:
    // 0x800DC654: b           L_800DC65C
    // 0x800DC658: nop

        goto L_800DC65C;
    // 0x800DC658: nop

L_800DC65C:
    // 0x800DC65C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DC664: jr          $ra
    // 0x800DC668: nop

    return;
    // 0x800DC668: nop

;}
RECOMP_FUNC void func_800EC348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC34C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EC354: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC358: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC35C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC360: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC368: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC36C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC370: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC374: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC378: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC37C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EC380: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EC384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EC388: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800EC38C: nop

    // 0x800EC390: beq         $s0, $at, L_800EC3B8
    if (ctx->r16 == ctx->r1) {
        // 0x800EC394: nop
    
            goto L_800EC3B8;
    }
    // 0x800EC394: nop

    // 0x800EC398: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EC39C: beq         $s0, $at, L_800EC3C8
    if (ctx->r16 == ctx->r1) {
        // 0x800EC3A0: nop
    
            goto L_800EC3C8;
    }
    // 0x800EC3A0: nop

    // 0x800EC3A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EC3A8: beq         $s0, $at, L_800EC3D8
    if (ctx->r16 == ctx->r1) {
        // 0x800EC3AC: nop
    
            goto L_800EC3D8;
    }
    // 0x800EC3AC: nop

    // 0x800EC3B0: b           L_800EC3E8
    // 0x800EC3B4: nop

        goto L_800EC3E8;
    // 0x800EC3B4: nop

L_800EC3B8:
    // 0x800EC3B8: jal         0x800EBFA0
    // 0x800EC3BC: nop

    func_800EBFA0(rdram, ctx);
        goto after_0;
    // 0x800EC3BC: nop

    after_0:
    // 0x800EC3C0: b           L_800EC3F0
    // 0x800EC3C4: nop

        goto L_800EC3F0;
    // 0x800EC3C4: nop

L_800EC3C8:
    // 0x800EC3C8: jal         0x800EC144
    // 0x800EC3CC: nop

    func_800EC144(rdram, ctx);
        goto after_1;
    // 0x800EC3CC: nop

    after_1:
    // 0x800EC3D0: b           L_800EC3F0
    // 0x800EC3D4: nop

        goto L_800EC3F0;
    // 0x800EC3D4: nop

L_800EC3D8:
    // 0x800EC3D8: jal         0x800EC260
    // 0x800EC3DC: nop

    func_800EC260(rdram, ctx);
        goto after_2;
    // 0x800EC3DC: nop

    after_2:
    // 0x800EC3E0: b           L_800EC3F0
    // 0x800EC3E4: nop

        goto L_800EC3F0;
    // 0x800EC3E4: nop

L_800EC3E8:
    // 0x800EC3E8: b           L_800EC3F0
    // 0x800EC3EC: nop

        goto L_800EC3F0;
    // 0x800EC3EC: nop

L_800EC3F0:
    // 0x800EC3F0: b           L_800EC3F8
    // 0x800EC3F4: nop

        goto L_800EC3F8;
    // 0x800EC3F4: nop

L_800EC3F8:
    // 0x800EC3F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC3FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EC400: jr          $ra
    // 0x800EC404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800EC404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E54F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E54F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E54FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E5500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5508: jal         0x8002B0E4
    // 0x800E550C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E550C: nop

    after_0:
    // 0x800E5510: b           L_800E5518
    // 0x800E5514: nop

        goto L_800E5518;
    // 0x800E5514: nop

L_800E5518:
    // 0x800E5518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E5520: jr          $ra
    // 0x800E5524: nop

    return;
    // 0x800E5524: nop

;}
RECOMP_FUNC void func_800857B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800857B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800857B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800857B8: jal         0x80085424
    // 0x800857BC: nop

    func_80085424(rdram, ctx);
        goto after_0;
    // 0x800857BC: nop

    after_0:
    // 0x800857C0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800857C4: lh          $t7, 0x5270($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5270);
    // 0x800857C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800857CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800857D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800857D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800857D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800857DC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800857E0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800857E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800857E8: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x800857EC: b           L_800857F4
    // 0x800857F0: nop

        goto L_800857F4;
    // 0x800857F0: nop

L_800857F4:
    // 0x800857F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800857F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800857FC: jr          $ra
    // 0x80085800: nop

    return;
    // 0x80085800: nop

;}
RECOMP_FUNC void func_800BFA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFA14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFA18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFA1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BFA20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BFA24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BFA28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BFA2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BFA30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BFA34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BFA38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BFA3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BFA40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BFA44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BFA48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BFA4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BFA50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BFA54: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800BFA58: nop

    // 0x800BFA5C: bne         $t1, $at, L_800BFAB8
    if (ctx->r9 != ctx->r1) {
        // 0x800BFA60: nop
    
            goto L_800BFAB8;
    }
    // 0x800BFA60: nop

    // 0x800BFA64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BFA68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BFA6C: lh          $s0, 0xA4($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA4);
    // 0x800BFA70: nop

    // 0x800BFA74: beq         $s0, $at, L_800BFA90
    if (ctx->r16 == ctx->r1) {
        // 0x800BFA78: nop
    
            goto L_800BFA90;
    }
    // 0x800BFA78: nop

    // 0x800BFA7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BFA80: beq         $s0, $at, L_800BFAA0
    if (ctx->r16 == ctx->r1) {
        // 0x800BFA84: nop
    
            goto L_800BFAA0;
    }
    // 0x800BFA84: nop

    // 0x800BFA88: b           L_800BFAB0
    // 0x800BFA8C: nop

        goto L_800BFAB0;
    // 0x800BFA8C: nop

L_800BFA90:
    // 0x800BFA90: jal         0x800BF75C
    // 0x800BFA94: nop

    func_800BF75C(rdram, ctx);
        goto after_0;
    // 0x800BFA94: nop

    after_0:
    // 0x800BFA98: b           L_800BFAB8
    // 0x800BFA9C: nop

        goto L_800BFAB8;
    // 0x800BFA9C: nop

L_800BFAA0:
    // 0x800BFAA0: jal         0x800BF8AC
    // 0x800BFAA4: nop

    func_800BF8AC(rdram, ctx);
        goto after_1;
    // 0x800BFAA4: nop

    after_1:
    // 0x800BFAA8: b           L_800BFAB8
    // 0x800BFAAC: nop

        goto L_800BFAB8;
    // 0x800BFAAC: nop

L_800BFAB0:
    // 0x800BFAB0: b           L_800BFAB8
    // 0x800BFAB4: nop

        goto L_800BFAB8;
    // 0x800BFAB4: nop

L_800BFAB8:
    // 0x800BFAB8: b           L_800BFAC0
    // 0x800BFABC: nop

        goto L_800BFAC0;
    // 0x800BFABC: nop

L_800BFAC0:
    // 0x800BFAC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFAC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BFAC8: jr          $ra
    // 0x800BFACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BFACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C7260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C7264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7268: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C726C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C7270: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C7274: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C7278: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C727C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C7280: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C7284: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C7288: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C728C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C7290: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C7294: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C7298: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C729C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C72A0: addiu       $a1, $a1, 0x3F58
    ctx->r5 = ADD32(ctx->r5, 0X3F58);
    // 0x800C72A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C72A8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C72AC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800C72B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C72B4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C72B8: jal         0x80027464
    // 0x800C72BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C72BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C72C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C72C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C72C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C72CC: beq         $t1, $at, L_800C77C0
    if (ctx->r9 == ctx->r1) {
        // 0x800C72D0: nop
    
            goto L_800C77C0;
    }
    // 0x800C72D0: nop

    // 0x800C72D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C72D8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C72DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C72E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C72E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C72E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C72EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C72F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C72F4: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800C72F8: nop

    // 0x800C72FC: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x800C7300: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7304: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7308: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800C730C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C7310: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C7314: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C7318: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C731C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C7320: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x800C7324: nop

    // 0x800C7328: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800C732C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7330: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800C7334: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800C7338: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C733C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7340: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C7344: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C7348: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C734C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C7350: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800C7354: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C7358: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800C735C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800C7360: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C7364: nop

    // 0x800C7368: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800C736C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800C7370: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800C7374: sh          $t3, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r11;
    // 0x800C7378: nop

    // 0x800C737C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7380: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800C7384: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C7388: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C738C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C7390: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800C7394: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C7398: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C739C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800C73A0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800C73A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C73A8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800C73AC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800C73B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C73B4: nop

    // 0x800C73B8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800C73BC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800C73C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800C73C4: sh          $t6, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r14;
    // 0x800C73C8: nop

    // 0x800C73CC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800C73D0: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800C73D4: nop

    // 0x800C73D8: lh          $t2, 0xA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA);
    // 0x800C73DC: nop

    // 0x800C73E0: bne         $t2, $zero, L_800C73F8
    if (ctx->r10 != 0) {
        // 0x800C73E4: nop
    
            goto L_800C73F8;
    }
    // 0x800C73E4: nop

    // 0x800C73E8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800C73EC: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800C73F0: addiu       $t3, $zero, 0xFA
    ctx->r11 = ADD32(0, 0XFA);
    // 0x800C73F4: sh          $t3, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r11;
L_800C73F8:
    // 0x800C73F8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C73FC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800C7400: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C7404: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7408: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800C740C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7410: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7414: lh          $t5, 0xA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA);
    // 0x800C7418: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C741C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7420: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C7424: sh          $t5, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r13;
    // 0x800C7428: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C742C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800C7430: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800C7434: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800C7438: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C743C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800C7440: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C7444: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800C7448: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800C744C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C7450: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C7454: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C7458: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x800C745C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800C7460: lh          $t3, 0xBA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBA);
    // 0x800C7464: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C7468: addu        $t7, $t4, $t0
    ctx->r15 = ADD32(ctx->r12, ctx->r8);
    // 0x800C746C: sh          $t3, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r11;
    // 0x800C7470: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7474: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C7478: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800C747C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800C7480: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7484: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800C7488: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C748C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800C7490: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800C7494: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C7498: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C749C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C74A0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800C74A4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800C74A8: lh          $t2, 0xBA($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XBA);
    // 0x800C74AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C74B0: addu        $t0, $t4, $t6
    ctx->r8 = ADD32(ctx->r12, ctx->r14);
    // 0x800C74B4: sh          $t2, 0xBA($t0)
    MEM_H(0XBA, ctx->r8) = ctx->r10;
    // 0x800C74B8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C74BC: lwc1        $f12, 0x4E60($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E60);
    // 0x800C74C0: jal         0x80034970
    // 0x800C74C4: nop

    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800C74C4: nop

    after_1:
    // 0x800C74C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C74CC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C74D0: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x800C74D4: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800C74D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C74DC: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800C74E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C74E4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800C74E8: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x800C74EC: lh          $t8, 0xBA($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XBA);
    // 0x800C74F0: lh          $t1, 0xB6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XB6);
    // 0x800C74F4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800C74F8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800C74FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C7500: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C7504: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C7508: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800C750C: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x800C7510: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7514: lwc1        $f12, 0x4E64($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E64);
    // 0x800C7518: jal         0x80034970
    // 0x800C751C: nop

    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800C751C: nop

    after_2:
    // 0x800C7520: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800C7524: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7528: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800C752C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800C7530: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7534: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C7538: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800C753C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C7540: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800C7544: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800C7548: addu        $t0, $t6, $t2
    ctx->r8 = ADD32(ctx->r14, ctx->r10);
    // 0x800C754C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800C7550: lh          $t3, 0xBA($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XBA);
    // 0x800C7554: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C7558: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800C755C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800C7560: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C7564: addu        $t8, $t5, $t2
    ctx->r24 = ADD32(ctx->r13, ctx->r10);
    // 0x800C7568: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C756C: lh          $t1, 0xB6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XB6);
    // 0x800C7570: nop

    // 0x800C7574: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800C7578: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C757C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7580: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C7584: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x800C7588: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C758C: lwc1        $f12, 0x4E68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E68);
    // 0x800C7590: jal         0x80034970
    // 0x800C7594: nop

    sinf_game(rdram, ctx);
        goto after_3;
    // 0x800C7594: nop

    after_3:
    // 0x800C7598: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C759C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C75A0: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800C75A4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800C75A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C75AC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C75B0: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800C75B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C75B8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C75BC: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800C75C0: addu        $t3, $t4, $t6
    ctx->r11 = ADD32(ctx->r12, ctx->r14);
    // 0x800C75C4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C75C8: lh          $t7, 0xBA($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XBA);
    // 0x800C75CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C75D0: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C75D4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800C75D8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C75DC: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x800C75E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C75E4: lh          $t1, 0xB6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XB6);
    // 0x800C75E8: nop

    // 0x800C75EC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800C75F0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C75F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C75F8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800C75FC: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x800C7600: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7604: lwc1        $f12, 0x4E6C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E6C);
    // 0x800C7608: jal         0x80036570
    // 0x800C760C: nop

    cosf_game(rdram, ctx);
        goto after_4;
    // 0x800C760C: nop

    after_4:
    // 0x800C7610: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7614: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C7618: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x800C761C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800C7620: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7624: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800C7628: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C762C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800C7630: addu        $t7, $t9, $t4
    ctx->r15 = ADD32(ctx->r25, ctx->r12);
    // 0x800C7634: lh          $t5, 0xBA($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XBA);
    // 0x800C7638: lh          $t2, 0xB8($t7)
    ctx->r10 = MEM_H(ctx->r15, 0XB8);
    // 0x800C763C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800C7640: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800C7644: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C7648: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C764C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7650: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C7654: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x800C7658: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C765C: lwc1        $f12, 0x4E70($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E70);
    // 0x800C7660: jal         0x80036570
    // 0x800C7664: nop

    cosf_game(rdram, ctx);
        goto after_5;
    // 0x800C7664: nop

    after_5:
    // 0x800C7668: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800C766C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C7670: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800C7674: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800C7678: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C767C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C7680: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800C7684: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C7688: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800C768C: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800C7690: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x800C7694: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800C7698: lh          $t0, 0xBA($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XBA);
    // 0x800C769C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C76A0: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800C76A4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C76A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C76AC: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x800C76B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C76B4: lh          $t2, 0xB8($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XB8);
    // 0x800C76B8: nop

    // 0x800C76BC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800C76C0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C76C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C76C8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800C76CC: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x800C76D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C76D4: lwc1        $f12, 0x4E74($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E74);
    // 0x800C76D8: jal         0x80036570
    // 0x800C76DC: nop

    cosf_game(rdram, ctx);
        goto after_6;
    // 0x800C76DC: nop

    after_6:
    // 0x800C76E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C76E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C76E8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800C76EC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C76F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C76F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C76F8: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C76FC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C7700: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C7704: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x800C7708: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x800C770C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800C7710: lh          $t9, 0xBA($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XBA);
    // 0x800C7714: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C7718: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800C771C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800C7720: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C7724: addu        $t5, $t1, $t8
    ctx->r13 = ADD32(ctx->r9, ctx->r24);
    // 0x800C7728: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C772C: lh          $t2, 0xB8($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XB8);
    // 0x800C7730: nop

    // 0x800C7734: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800C7738: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800C773C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C7740: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C7744: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x800C7748: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C774C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7750: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800C7754: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C7758: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C775C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C7760: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C7764: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C7768: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800C776C: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x800C7770: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800C7774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7778: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x800C777C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800C7780: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C7784: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800C7788: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C778C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C7790: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x800C7794: sh          $t9, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r25;
    // 0x800C7798: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C779C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C77A0: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800C77A4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C77A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C77AC: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C77B0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C77B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C77B8: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x800C77BC: sh          $t8, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r24;
L_800C77C0:
    // 0x800C77C0: b           L_800C77C8
    // 0x800C77C4: nop

        goto L_800C77C8;
    // 0x800C77C4: nop

L_800C77C8:
    // 0x800C77C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C77CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C77D0: jr          $ra
    // 0x800C77D4: nop

    return;
    // 0x800C77D4: nop

;}
RECOMP_FUNC void func_800C4C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4C08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C4C0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C4C10: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C4C14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C4C18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C4C1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C4C20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C4C24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C4C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4C2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4C30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4C34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4C38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4C3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C4C40: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C4C44: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C4C48: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C4C4C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C4C50: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C4C54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4C58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4C5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4C60: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4C64: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C4C68: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C4C6C: nop

    // 0x800C4C70: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800C4C74: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C4C78: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C4C7C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C4C80: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C4C84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4C88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4C8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4C90: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C4C94: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4C98: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C4C9C: nop

    // 0x800C4CA0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800C4CA4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C4CA8: nop

    // 0x800C4CAC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C4CB0: nop

    // 0x800C4CB4: bne         $t7, $zero, L_800C4D18
    if (ctx->r15 != 0) {
        // 0x800C4CB8: nop
    
            goto L_800C4D18;
    }
    // 0x800C4CB8: nop

    // 0x800C4CBC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C4CC0: nop

    // 0x800C4CC4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C4CC8: nop

    // 0x800C4CCC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C4CD0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C4CD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C4CD8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C4CDC: nop

    // 0x800C4CE0: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x800C4CE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4CE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4CEC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C4CF0: jal         0x80029EF8
    // 0x800C4CF4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C4CF4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x800C4CF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C4CFC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C4D00: jal         0x80029EF8
    // 0x800C4D04: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800C4D04: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_1:
    // 0x800C4D08: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4D0C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C4D10: jal         0x80029EF8
    // 0x800C4D14: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C4D14: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_2:
L_800C4D18:
    // 0x800C4D18: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4D1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C4D20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C4D24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4D28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C4D2C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C4D30: jal         0x80029F58
    // 0x800C4D34: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x800C4D34: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800C4D38: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4D3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C4D40: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4D44: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4D48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C4D4C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C4D50: jal         0x80029F58
    // 0x800C4D54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800C4D54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800C4D58: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4D5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C4D60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4D64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4D68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4D6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C4D70: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C4D74: jal         0x80029F58
    // 0x800C4D78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800C4D78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800C4D7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C4D80: bne         $v0, $at, L_800C4F48
    if (ctx->r2 != ctx->r1) {
        // 0x800C4D84: nop
    
            goto L_800C4F48;
    }
    // 0x800C4D84: nop

    // 0x800C4D88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C4D8C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800C4D90: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800C4D94: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C4D98: nop

    // 0x800C4D9C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800C4DA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C4DA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C4DA8: nop

    // 0x800C4DAC: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x800C4DB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C4DB4: nop

    // 0x800C4DB8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C4DBC: nop

    // 0x800C4DC0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800C4DC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C4DC8: nop

    // 0x800C4DCC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800C4DD0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4DD4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4DD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C4DDC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800C4DE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4DE4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C4DE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4DEC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C4DF0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4DF4: lwc1        $f18, 0x4D74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4D74);
    // 0x800C4DF8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4DFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4E00: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C4E04: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4E08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4E0C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C4E10: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4E14: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4E18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C4E1C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4E20: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800C4E24: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C4E28: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800C4E2C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4E30: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x800C4E34: lwc1        $f20, 0x4($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800C4E38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C4E3C: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x800C4E40: swc1        $f20, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f20.u32l;
    // 0x800C4E44: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C4E48: nop

    // 0x800C4E4C: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x800C4E50: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C4E54: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C4E58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C4E5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4E60: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C4E64: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4E68: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4E6C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4E70: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4E74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C4E78: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4E80: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C4E84: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4E88: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4E8C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800C4E90: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C4E94: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800C4E98: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x800C4E9C: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800C4EA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4EA4: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800C4EA8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800C4EAC: nop

    // 0x800C4EB0: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800C4EB4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C4EB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C4EBC: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800C4EC0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C4EC4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C4EC8: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800C4ECC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4ED0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4ED4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C4ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4EDC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C4EE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4EE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4EE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4EF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C4EF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4EF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4EFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C4F00: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C4F04: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4F08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4F0C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C4F10: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x800C4F14: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800C4F18: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800C4F1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4F20: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800C4F24: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4F28: nop

    // 0x800C4F2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C4F30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4F34: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4F38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4F3C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C4F40: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C4F44: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800C4F48:
    // 0x800C4F48: b           L_800C4F50
    // 0x800C4F4C: nop

        goto L_800C4F50;
    // 0x800C4F4C: nop

L_800C4F50:
    // 0x800C4F50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4F54: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C4F58: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C4F5C: jr          $ra
    // 0x800C4F60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C4F60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E1C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1C9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E1CA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E1CA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E1CA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1CAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1CB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E1CB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E1CB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1CBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1CC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1CC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E1CC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E1CCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E1CD0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E1CD4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E1CD8: nop

    // 0x800E1CDC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E1CE0: nop

    // 0x800E1CE4: bne         $t1, $zero, L_800E1D18
    if (ctx->r9 != 0) {
        // 0x800E1CE8: nop
    
            goto L_800E1D18;
    }
    // 0x800E1CE8: nop

    // 0x800E1CEC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E1CF0: nop

    // 0x800E1CF4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E1CF8: nop

    // 0x800E1CFC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E1D00: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E1D04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1D08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1D0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E1D10: jal         0x80029EF8
    // 0x800E1D14: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E1D14: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_800E1D18:
    // 0x800E1D18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1D1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1D20: jal         0x80028FA0
    // 0x800E1D24: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800E1D24: nop

    after_1:
    // 0x800E1D28: beq         $v0, $zero, L_800E1D40
    if (ctx->r2 == 0) {
        // 0x800E1D2C: nop
    
            goto L_800E1D40;
    }
    // 0x800E1D2C: nop

    // 0x800E1D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1D38: jal         0x80029B60
    // 0x800E1D3C: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800E1D3C: nop

    after_2:
L_800E1D40:
    // 0x800E1D40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1D44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1D48: jal         0x8002A46C
    // 0x800E1D4C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E1D4C: nop

    after_3:
    // 0x800E1D50: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E1D54: nop

    // 0x800E1D58: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800E1D5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E1D60: nop

    // 0x800E1D64: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800E1D68: nop

    // 0x800E1D6C: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x800E1D70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1D78: jal         0x8002A8B4
    // 0x800E1D7C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800E1D7C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x800E1D80: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E1D84: nop

    // 0x800E1D88: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E1D8C: nop

    // 0x800E1D90: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800E1D94: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E1D98: nop

    // 0x800E1D9C: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800E1DA0: nop

    // 0x800E1DA4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800E1DA8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E1DAC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E1DB0: nop

    // 0x800E1DB4: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x800E1DB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E1DBC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E1DC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1DC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E1DCC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E1DD0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E1DD4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E1DD8: jal         0x80029018
    // 0x800E1DDC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E1DDC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800E1DE0: beq         $v0, $zero, L_800E1E04
    if (ctx->r2 == 0) {
        // 0x800E1DE4: nop
    
            goto L_800E1E04;
    }
    // 0x800E1DE4: nop

    // 0x800E1DE8: jal         0x800297DC
    // 0x800E1DEC: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800E1DEC: nop

    after_6:
    // 0x800E1DF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1DF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1DF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E1DFC: jal         0x80029824
    // 0x800E1E00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800E1E00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800E1E04:
    // 0x800E1E04: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E1E08: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E1E0C: nop

    // 0x800E1E10: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x800E1E14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E1E18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1E1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1E20: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E1E24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E1E28: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E1E2C: jal         0x80029F58
    // 0x800E1E30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800E1E30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800E1E34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1E38: bne         $v0, $at, L_800E1E50
    if (ctx->r2 != ctx->r1) {
        // 0x800E1E3C: nop
    
            goto L_800E1E50;
    }
    // 0x800E1E3C: nop

    // 0x800E1E40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E1E44: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E1E48: nop

    // 0x800E1E4C: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_800E1E50:
    // 0x800E1E50: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E1E54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E1E58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E1E5C: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800E1E60: nop

    // 0x800E1E64: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800E1E68: nop

    // 0x800E1E6C: bc1f        L_800E1EE4
    if (!c1cs) {
        // 0x800E1E70: nop
    
            goto L_800E1EE4;
    }
    // 0x800E1E70: nop

    // 0x800E1E74: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E1E78: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E1E7C: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800E1E80: lwc1        $f7, 0x5428($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5428);
    // 0x800E1E84: lwc1        $f6, 0x542C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X542C);
    // 0x800E1E88: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800E1E8C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800E1E90: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800E1E94: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x800E1E98: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E1E9C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E1EA0: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800E1EA4: lwc1        $f5, 0x5430($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5430);
    // 0x800E1EA8: lwc1        $f4, 0x5434($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5434);
    // 0x800E1EAC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800E1EB0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800E1EB4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800E1EB8: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x800E1EBC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E1EC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E1EC4: lwc1        $f10, 0x14($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800E1EC8: lwc1        $f19, 0x5438($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5438);
    // 0x800E1ECC: lwc1        $f18, 0x543C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X543C);
    // 0x800E1ED0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800E1ED4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800E1ED8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800E1EDC: b           L_800E1F08
    // 0x800E1EE0: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
        goto L_800E1F08;
    // 0x800E1EE0: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
L_800E1EE4:
    // 0x800E1EE4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E1EE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E1EEC: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800E1EF0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E1EF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E1EF8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E1EFC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E1F00: nop

    // 0x800E1F04: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E1F08:
    // 0x800E1F08: b           L_800E1F10
    // 0x800E1F0C: nop

        goto L_800E1F10;
    // 0x800E1F0C: nop

L_800E1F10:
    // 0x800E1F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E1F14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E1F18: jr          $ra
    // 0x800E1F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E1F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800BD2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD2C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BD2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD2D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD2D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD2D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD2DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD2E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD2E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD2E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD2EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD2F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD2F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD2F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BD2FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD300: nop

    // 0x800BD304: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BD308: nop

    // 0x800BD30C: bne         $t1, $zero, L_800BD340
    if (ctx->r9 != 0) {
        // 0x800BD310: nop
    
            goto L_800BD340;
    }
    // 0x800BD310: nop

    // 0x800BD314: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD318: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BD31C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BD320: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BD324: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD328: nop

    // 0x800BD32C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BD330: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BD334: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD338: nop

    // 0x800BD33C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800BD340:
    // 0x800BD340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BD344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BD348: jal         0x80029C40
    // 0x800BD34C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BD34C: nop

    after_0:
    // 0x800BD350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BD354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BD358: jal         0x80029D04
    // 0x800BD35C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BD35C: nop

    after_1:
    // 0x800BD360: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
L_800BD364:
    // 0x800BD364: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x800BD368: jal         0x800BD174
    // 0x800BD36C: nop

    func_800BD174(rdram, ctx);
        goto after_2;
    // 0x800BD36C: nop

    after_2:
    // 0x800BD370: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x800BD374: nop

    // 0x800BD378: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800BD37C: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800BD380: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800BD384: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x800BD388: bne         $at, $zero, L_800BD364
    if (ctx->r1 != 0) {
        // 0x800BD38C: sb          $t7, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r15;
            goto L_800BD364;
    }
    // 0x800BD38C: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    // 0x800BD390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BD394: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BD398: jal         0x8002B0E4
    // 0x800BD39C: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800BD39C: nop

    after_3:
    // 0x800BD3A0: b           L_800BD3A8
    // 0x800BD3A4: nop

        goto L_800BD3A8;
    // 0x800BD3A4: nop

L_800BD3A8:
    // 0x800BD3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD3AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BD3B0: jr          $ra
    // 0x800BD3B4: nop

    return;
    // 0x800BD3B4: nop

;}
RECOMP_FUNC void func_800A7C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7C18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A7C1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A7C20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A7C24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A7C28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A7C2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A7C30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A7C34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7C38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A7C3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7C40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A7C44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A7C48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A7C4C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A7C50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7C54: nop

    // 0x800A7C58: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A7C5C: nop

    // 0x800A7C60: bne         $t1, $zero, L_800A7CA0
    if (ctx->r9 != 0) {
        // 0x800A7C64: nop
    
            goto L_800A7CA0;
    }
    // 0x800A7C64: nop

    // 0x800A7C68: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7C6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A7C70: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A7C74: jal         0x80014E80
    // 0x800A7C78: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A7C78: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x800A7C7C: addiu       $t4, $v0, 0x2
    ctx->r12 = ADD32(ctx->r2, 0X2);
    // 0x800A7C80: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800A7C84: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7C88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A7C8C: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x800A7C90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A7C94: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7C98: nop

    // 0x800A7C9C: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
L_800A7CA0:
    // 0x800A7CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7CA8: jal         0x8002A8B4
    // 0x800A7CAC: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800A7CAC: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_1:
    // 0x800A7CB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7CB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7CB8: jal         0x80028FA0
    // 0x800A7CBC: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800A7CBC: nop

    after_2:
    // 0x800A7CC0: beq         $v0, $zero, L_800A7CD8
    if (ctx->r2 == 0) {
        // 0x800A7CC4: nop
    
            goto L_800A7CD8;
    }
    // 0x800A7CC4: nop

    // 0x800A7CC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7CD0: jal         0x80029B60
    // 0x800A7CD4: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800A7CD4: nop

    after_3:
L_800A7CD8:
    // 0x800A7CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7CE0: jal         0x80029C40
    // 0x800A7CE4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A7CE4: nop

    after_4:
    // 0x800A7CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7CF0: jal         0x80029D04
    // 0x800A7CF4: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A7CF4: nop

    after_5:
    // 0x800A7CF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A7CFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A7D00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7D08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A7D0C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x800A7D10: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A7D14: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A7D18: jal         0x80029018
    // 0x800A7D1C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800A7D1C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800A7D20: beq         $v0, $zero, L_800A7D44
    if (ctx->r2 == 0) {
        // 0x800A7D24: nop
    
            goto L_800A7D44;
    }
    // 0x800A7D24: nop

    // 0x800A7D28: jal         0x800297DC
    // 0x800A7D2C: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800A7D2C: nop

    after_7:
    // 0x800A7D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7D38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A7D3C: jal         0x80029824
    // 0x800A7D40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800A7D40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800A7D44:
    // 0x800A7D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7D4C: jal         0x8002A560
    // 0x800A7D50: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A560(rdram, ctx);
        goto after_9;
    // 0x800A7D50: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_9:
    // 0x800A7D54: bne         $v0, $zero, L_800A7D94
    if (ctx->r2 != 0) {
        // 0x800A7D58: nop
    
            goto L_800A7D94;
    }
    // 0x800A7D58: nop

    // 0x800A7D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7D64: jal         0x8002A1FC
    // 0x800A7D68: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x800A7D68: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_10:
    // 0x800A7D6C: beq         $v0, $zero, L_800A7D8C
    if (ctx->r2 == 0) {
        // 0x800A7D70: nop
    
            goto L_800A7D8C;
    }
    // 0x800A7D70: nop

    // 0x800A7D74: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7D78: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A7D7C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A7D80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7D84: nop

    // 0x800A7D88: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A7D8C:
    // 0x800A7D8C: b           L_800A7DC4
    // 0x800A7D90: nop

        goto L_800A7DC4;
    // 0x800A7D90: nop

L_800A7D94:
    // 0x800A7D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7D9C: jal         0x8002A1FC
    // 0x800A7DA0: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_11;
    // 0x800A7DA0: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_11:
    // 0x800A7DA4: bne         $v0, $zero, L_800A7DC4
    if (ctx->r2 != 0) {
        // 0x800A7DA8: nop
    
            goto L_800A7DC4;
    }
    // 0x800A7DA8: nop

    // 0x800A7DAC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7DB0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A7DB4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800A7DB8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7DBC: nop

    // 0x800A7DC0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800A7DC4:
    // 0x800A7DC4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7DC8: nop

    // 0x800A7DCC: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A7DD0: nop

    // 0x800A7DD4: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x800A7DD8: b           L_800A7DE0
    // 0x800A7DDC: nop

        goto L_800A7DE0;
    // 0x800A7DDC: nop

L_800A7DE0:
    // 0x800A7DE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A7DE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A7DE8: jr          $ra
    // 0x800A7DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A7DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8009BDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BDF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009BDF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009BDF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009BDFC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8009BE00: nop

    // 0x8009BE04: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009BE08: nop

    // 0x8009BE0C: bne         $t7, $zero, L_8009BE58
    if (ctx->r15 != 0) {
        // 0x8009BE10: nop
    
            goto L_8009BE58;
    }
    // 0x8009BE10: nop

    // 0x8009BE14: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8009BE18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8009BE1C: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x8009BE20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009BE24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009BE28: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8009BE2C: nop

    // 0x8009BE30: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x8009BE34: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8009BE38: nop

    // 0x8009BE3C: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8009BE40: nop

    // 0x8009BE44: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8009BE48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009BE4C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8009BE50: nop

    // 0x8009BE54: swc1        $f8, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f8.u32l;
L_8009BE58:
    // 0x8009BE58: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8009BE5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BE60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BE64: jal         0x80028FA0
    // 0x8009BE68: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x8009BE68: nop

    after_0:
    // 0x8009BE6C: beq         $v0, $zero, L_8009BE7C
    if (ctx->r2 == 0) {
        // 0x8009BE70: nop
    
            goto L_8009BE7C;
    }
    // 0x8009BE70: nop

    // 0x8009BE74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8009BE78: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8009BE7C:
    // 0x8009BE7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BE80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BE84: jal         0x80029D8C
    // 0x8009BE88: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x8009BE88: nop

    after_1:
    // 0x8009BE8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009BE90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009BE94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BE98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BE9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009BEA0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8009BEA4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009BEA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009BEAC: jal         0x80029018
    // 0x8009BEB0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x8009BEB0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8009BEB4: beq         $v0, $zero, L_8009BEC4
    if (ctx->r2 == 0) {
        // 0x8009BEB8: nop
    
            goto L_8009BEC4;
    }
    // 0x8009BEB8: nop

    // 0x8009BEBC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8009BEC0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_8009BEC4:
    // 0x8009BEC4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8009BEC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009BECC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009BED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BED8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8009BEDC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8009BEE0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009BEE4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009BEE8: jal         0x800295C0
    // 0x8009BEEC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8009BEEC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8009BEF0: beq         $v0, $zero, L_8009BF00
    if (ctx->r2 == 0) {
        // 0x8009BEF4: nop
    
            goto L_8009BF00;
    }
    // 0x8009BEF4: nop

    // 0x8009BEF8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009BEFC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
L_8009BF00:
    // 0x8009BF00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009BF04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009BF08: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009BF0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BF10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BF14: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8009BF18: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8009BF1C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009BF20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009BF24: jal         0x800295C0
    // 0x8009BF28: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x8009BF28: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8009BF2C: beq         $v0, $zero, L_8009BF3C
    if (ctx->r2 == 0) {
        // 0x8009BF30: nop
    
            goto L_8009BF3C;
    }
    // 0x8009BF30: nop

    // 0x8009BF34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009BF38: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8009BF3C:
    // 0x8009BF3C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009BF40: nop

    // 0x8009BF44: beq         $t7, $zero, L_8009BF64
    if (ctx->r15 == 0) {
        // 0x8009BF48: nop
    
            goto L_8009BF64;
    }
    // 0x8009BF48: nop

    // 0x8009BF4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009BF50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009BF54: jal         0x8002B0E4
    // 0x8009BF58: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x8009BF58: nop

    after_5:
    // 0x8009BF5C: b           L_8009BF6C
    // 0x8009BF60: nop

        goto L_8009BF6C;
    // 0x8009BF60: nop

L_8009BF64:
    // 0x8009BF64: b           L_8009BF6C
    // 0x8009BF68: nop

        goto L_8009BF6C;
    // 0x8009BF68: nop

L_8009BF6C:
    // 0x8009BF6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009BF70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009BF74: jr          $ra
    // 0x8009BF78: nop

    return;
    // 0x8009BF78: nop

;}
RECOMP_FUNC void func_8007FDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FDDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007FDE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FDE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FDE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FDEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FDF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FDF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FDF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FDFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FE00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FE04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FE08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FE0C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007FE10: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FE14: addiu       $t0, $zero, 0x2C0
    ctx->r8 = ADD32(0, 0X2C0);
    // 0x8007FE18: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8007FE1C: jal         0x80014E80
    // 0x8007FE20: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8007FE20: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    after_0:
    // 0x8007FE24: addiu       $t2, $v0, -0xF
    ctx->r10 = ADD32(ctx->r2, -0XF);
    // 0x8007FE28: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8007FE2C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FE30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007FE34: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x8007FE38: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FE3C: jal         0x8007FC98
    // 0x8007FE40: nop

    func_8007FC98(rdram, ctx);
        goto after_1;
    // 0x8007FE40: nop

    after_1:
    // 0x8007FE44: b           L_8007FE4C
    // 0x8007FE48: nop

        goto L_8007FE4C;
    // 0x8007FE48: nop

L_8007FE4C:
    // 0x8007FE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007FE54: jr          $ra
    // 0x8007FE58: nop

    return;
    // 0x8007FE58: nop

;}
RECOMP_FUNC void func_800E60D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E60D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E60DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E60E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E60E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E60E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E60EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E60F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E60F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E60F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E60FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6100: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6104: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6108: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E610C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6110: nop

    // 0x800E6114: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6118: nop

    // 0x800E611C: bne         $t1, $zero, L_800E61C4
    if (ctx->r9 != 0) {
        // 0x800E6120: nop
    
            goto L_800E61C4;
    }
    // 0x800E6120: nop

    // 0x800E6124: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E6128: nop

    // 0x800E612C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6130: nop

    // 0x800E6134: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6138: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E613C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E6140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6144: nop

    // 0x800E6148: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800E614C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E6150: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E6154: nop

    // 0x800E6158: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800E615C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E6160: nop

    // 0x800E6164: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E6168: nop

    // 0x800E616C: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800E6170: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6174: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E6178: addiu       $t8, $t8, -0x6AFC
    ctx->r24 = ADD32(ctx->r24, -0X6AFC);
    // 0x800E617C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6180: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E6184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800E618C: jal         0x8001C0EC
    // 0x800E6190: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6190: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    after_0:
    // 0x800E6194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E619C: jal         0x8002A46C
    // 0x800E61A0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800E61A0: nop

    after_1:
    // 0x800E61A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E61A8: nop

    // 0x800E61AC: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800E61B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E61B4: nop

    // 0x800E61B8: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E61BC: nop

    // 0x800E61C0: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
L_800E61C4:
    // 0x800E61C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E61C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E61CC: jal         0x8001B4AC
    // 0x800E61D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E61D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E61D4: beq         $v0, $zero, L_800E6234
    if (ctx->r2 == 0) {
        // 0x800E61D8: nop
    
            goto L_800E6234;
    }
    // 0x800E61D8: nop

    // 0x800E61DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E61E0: nop

    // 0x800E61E4: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800E61E8: nop

    // 0x800E61EC: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800E61F0: bne         $at, $zero, L_800E621C
    if (ctx->r1 != 0) {
        // 0x800E61F4: nop
    
            goto L_800E621C;
    }
    // 0x800E61F4: nop

    // 0x800E61F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E61FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800E6200: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E6204: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6208: nop

    // 0x800E620C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E6210: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E6214: b           L_800E6234
    // 0x800E6218: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
        goto L_800E6234;
    // 0x800E6218: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
L_800E621C:
    // 0x800E621C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E6220: nop

    // 0x800E6224: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800E6228: nop

    // 0x800E622C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800E6230: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
L_800E6234:
    // 0x800E6234: b           L_800E623C
    // 0x800E6238: nop

        goto L_800E623C;
    // 0x800E6238: nop

L_800E623C:
    // 0x800E623C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E6244: jr          $ra
    // 0x800E6248: nop

    return;
    // 0x800E6248: nop

;}
RECOMP_FUNC void func_800F6B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6B40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800F6B44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800F6B48: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800F6B4C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800F6B50: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800F6B54: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800F6B58: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F6B5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F6B60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F6B64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F6B68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F6B6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6B70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6B74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6B78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6B7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6B80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F6B84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6B88: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x800F6B8C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x800F6B90: nop

    // 0x800F6B94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F6B98: nop

    // 0x800F6B9C: bne         $t1, $zero, L_800F6C10
    if (ctx->r9 != 0) {
        // 0x800F6BA0: nop
    
            goto L_800F6C10;
    }
    // 0x800F6BA0: nop

    // 0x800F6BA4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800F6BA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F6BAC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F6BB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F6BB4: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800F6BB8: nop

    // 0x800F6BBC: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x800F6BC0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800F6BC4: nop

    // 0x800F6BC8: lwc1        $f22, 0x48($t5)
    ctx->f22.u32l = MEM_W(ctx->r13, 0X48);
    // 0x800F6BCC: nop

    // 0x800F6BD0: swc1        $f22, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f22.u32l;
    // 0x800F6BD4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800F6BD8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800F6BDC: swc1        $f20, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f20.u32l;
    // 0x800F6BE0: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800F6BE4: nop

    // 0x800F6BE8: swc1        $f20, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f20.u32l;
    // 0x800F6BEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6BF0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800F6BF4: addiu       $t8, $t8, -0x46B8
    ctx->r24 = ADD32(ctx->r24, -0X46B8);
    // 0x800F6BF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6BFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F6C00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F6C04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F6C08: jal         0x8001C0EC
    // 0x800F6C0C: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F6C0C: addiu       $a3, $zero, 0xBC
    ctx->r7 = ADD32(0, 0XBC);
    after_0:
L_800F6C10:
    // 0x800F6C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6C18: jal         0x8002A640
    // 0x800F6C1C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A640(rdram, ctx);
        goto after_1;
    // 0x800F6C1C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x800F6C20: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x800F6C24: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800F6C28: nop

    // 0x800F6C2C: bne         $t9, $zero, L_800F6C50
    if (ctx->r25 != 0) {
        // 0x800F6C30: nop
    
            goto L_800F6C50;
    }
    // 0x800F6C30: nop

    // 0x800F6C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6C3C: jal         0x8002A46C
    // 0x800F6C40: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x800F6C40: nop

    after_2:
    // 0x800F6C44: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x800F6C48: b           L_800F6C78
    // 0x800F6C4C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
        goto L_800F6C78;
    // 0x800F6C4C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
L_800F6C50:
    // 0x800F6C50: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800F6C54: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800F6C58: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800F6C5C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800F6C60: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800F6C64: jal         0x80015538
    // 0x800F6C68: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800F6C68: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x800F6C6C: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800F6C70: nop

    // 0x800F6C74: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
L_800F6C78:
    // 0x800F6C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6C7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6C80: jal         0x8002A46C
    // 0x800F6C84: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x800F6C84: nop

    after_4:
    // 0x800F6C88: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800F6C8C: nop

    // 0x800F6C90: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800F6C94: nop

    // 0x800F6C98: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x800F6C9C: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x800F6CA0: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800F6CA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F6CA8: nop

    // 0x800F6CAC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800F6CB0: nop

    // 0x800F6CB4: bc1f        L_800F6CD0
    if (!c1cs) {
        // 0x800F6CB8: nop
    
            goto L_800F6CD0;
    }
    // 0x800F6CB8: nop

    // 0x800F6CBC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x800F6CC0: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x800F6CC4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800F6CC8: b           L_800F6CE0
    // 0x800F6CCC: nop

        goto L_800F6CE0;
    // 0x800F6CCC: nop

L_800F6CD0:
    // 0x800F6CD0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800F6CD4: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x800F6CD8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800F6CDC: nop

L_800F6CE0:
    // 0x800F6CE0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800F6CE4: nop

    // 0x800F6CE8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800F6CEC: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x800F6CF0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800F6CF4: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x800F6CF8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800F6CFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F6D00: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800F6D04: nop

    // 0x800F6D08: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800F6D0C: nop

    // 0x800F6D10: bc1f        L_800F6D30
    if (!c1cs) {
        // 0x800F6D14: nop
    
            goto L_800F6D30;
    }
    // 0x800F6D14: nop

    // 0x800F6D18: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800F6D1C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800F6D20: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800F6D24: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800F6D28: nop

    // 0x800F6D2C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800F6D30:
    // 0x800F6D30: b           L_800F6D38
    // 0x800F6D34: nop

        goto L_800F6D38;
    // 0x800F6D34: nop

L_800F6D38:
    // 0x800F6D38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800F6D3C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F6D40: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F6D44: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800F6D48: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F6D4C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800F6D50: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800F6D54: jr          $ra
    // 0x800F6D58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800F6D58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8009BBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BBC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009BBC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009BBCC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8009BBD0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8009BBD4: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8009BBD8: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x8009BBDC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009BBE0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8009BBE4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8009BBE8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009BBEC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009BBF0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8009BBF4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8009BBF8: addiu       $a1, $a1, 0x3544
    ctx->r5 = ADD32(ctx->r5, 0X3544);
    // 0x8009BBFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009BC00: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009BC04: jal         0x80027464
    // 0x8009BC08: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009BC08: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8009BC0C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8009BC10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8009BC14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009BC18: beq         $t6, $at, L_8009BCA0
    if (ctx->r14 == ctx->r1) {
        // 0x8009BC1C: nop
    
            goto L_8009BCA0;
    }
    // 0x8009BC1C: nop

    // 0x8009BC20: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009BC24: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8009BC28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009BC2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009BC30: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8009BC34: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009BC38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8009BC3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009BC40: lwc1        $f8, 0x48E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X48E8);
    // 0x8009BC44: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009BC48: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009BC4C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009BC50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009BC54: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8009BC58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009BC5C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009BC60: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8009BC64: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009BC68: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8009BC6C: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8009BC70: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8009BC74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009BC78: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x8009BC7C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8009BC80: nop

    // 0x8009BC84: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8009BC88: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009BC8C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009BC90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009BC94: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009BC98: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009BC9C: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_8009BCA0:
    // 0x8009BCA0: b           L_8009BCA8
    // 0x8009BCA4: nop

        goto L_8009BCA8;
    // 0x8009BCA4: nop

L_8009BCA8:
    // 0x8009BCA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009BCAC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8009BCB0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009BCB4: jr          $ra
    // 0x8009BCB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8009BCB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800643C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800643C0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800643C4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
L_800643C8:
    // 0x800643C8: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x800643CC: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x800643D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800643D4: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x800643D8: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x800643DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800643E0: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800643E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800643E8: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x800643EC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800643F0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800643F4: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x800643F8: lh          $t3, 0x2($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X2);
    // 0x800643FC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80064400: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064404: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80064408: sh          $t3, 0x6458($at)
    MEM_H(0X6458, ctx->r1) = ctx->r11;
    // 0x8006440C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80064410: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80064414: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80064418: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x8006441C: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80064420: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80064424: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80064428: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8006442C: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80064430: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80064434: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80064438: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8006443C: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x80064440: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80064444: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064448: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8006444C: sh          $t5, 0x645A($at)
    MEM_H(0X645A, ctx->r1) = ctx->r13;
    // 0x80064450: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80064454: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80064458: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x8006445C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80064460: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x80064464: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80064468: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8006446C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80064470: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x80064474: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80064478: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8006447C: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x80064480: lh          $t6, 0x6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X6);
    // 0x80064484: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80064488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006448C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80064490: sh          $t6, 0x645C($at)
    MEM_H(0X645C, ctx->r1) = ctx->r14;
    // 0x80064494: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80064498: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8006449C: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800644A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800644A4: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x800644A8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800644AC: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x800644B0: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x800644B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800644B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800644BC: sh          $zero, 0x645E($at)
    MEM_H(0X645E, ctx->r1) = 0;
    // 0x800644C0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x800644C4: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x800644C8: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x800644CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800644D0: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x800644D4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800644D8: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800644DC: addu        $t3, $t8, $t7
    ctx->r11 = ADD32(ctx->r24, ctx->r15);
    // 0x800644E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800644E4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800644E8: sb          $zero, 0x6464($at)
    MEM_B(0X6464, ctx->r1) = 0;
    // 0x800644EC: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800644F0: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x800644F4: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x800644F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800644FC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80064500: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80064504: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80064508: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x8006450C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064510: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80064514: sb          $zero, 0x6465($at)
    MEM_B(0X6465, ctx->r1) = 0;
    // 0x80064518: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8006451C: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80064520: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80064524: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80064528: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8006452C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80064530: sll         $t3, $t7, 4
    ctx->r11 = S32(ctx->r15 << 4);
    // 0x80064534: addu        $t4, $t8, $t3
    ctx->r12 = ADD32(ctx->r24, ctx->r11);
    // 0x80064538: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006453C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80064540: sb          $zero, 0x6466($at)
    MEM_B(0X6466, ctx->r1) = 0;
    // 0x80064544: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80064548: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8006454C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80064550: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80064554: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80064558: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006455C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80064560: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80064564: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80064568: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8006456C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80064570: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80064574: lh          $t8, 0x8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8);
    // 0x80064578: addu        $t9, $t3, $t4
    ctx->r25 = ADD32(ctx->r11, ctx->r12);
    // 0x8006457C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064580: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80064584: sh          $t8, 0x6460($at)
    MEM_H(0X6460, ctx->r1) = ctx->r24;
    // 0x80064588: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8006458C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80064590: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80064594: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x80064598: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8006459C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800645A0: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800645A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800645A8: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x800645AC: addu        $t3, $t6, $t5
    ctx->r11 = ADD32(ctx->r14, ctx->r13);
    // 0x800645B0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800645B4: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x800645B8: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x800645BC: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800645C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800645C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800645C8: sh          $t4, 0x6462($at)
    MEM_H(0X6462, ctx->r1) = ctx->r12;
    // 0x800645CC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800645D0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800645D4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x800645D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800645DC: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x800645E0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800645E4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800645E8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800645EC: lbu         $t3, 0x1($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1);
    // 0x800645F0: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x800645F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800645F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800645FC: sb          $t3, 0x6467($at)
    MEM_B(0X6467, ctx->r1) = ctx->r11;
    // 0x80064600: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80064604: nop

    // 0x80064608: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x8006460C: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80064610: bne         $at, $zero, L_800643C8
    if (ctx->r1 != 0) {
        // 0x80064614: sw          $t5, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r13;
            goto L_800643C8;
    }
    // 0x80064614: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    // 0x80064618: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8006461C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80064620: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80064624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80064628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006462C: nop

    // 0x80064630: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80064634: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80064638: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8006463C: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80064640: nop

    // 0x80064644: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80064648: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8006464C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80064650: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80064654: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80064658: nop

    // 0x8006465C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80064660: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80064664: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80064668: sw          $t3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r11;
    // 0x8006466C: nop

    // 0x80064670: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80064674: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80064678: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006467C: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80064680: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80064684: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    // 0x80064688: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x8006468C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80064690: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80064694: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80064698: nop

    // 0x8006469C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800646A0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800646A4: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800646A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800646AC: addiu       $t3, $t9, 0x8
    ctx->r11 = ADD32(ctx->r25, 0X8);
    // 0x800646B0: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800646B4: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x800646B8: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x800646BC: lui         $t4, 0xB600
    ctx->r12 = S32(0XB600 << 16);
    // 0x800646C0: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x800646C4: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x800646C8: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x800646CC: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x800646D0: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x800646D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800646D8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x800646DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800646E0: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x800646E4: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800646E8: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x800646EC: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x800646F0: lui         $t3, 0xB700
    ctx->r11 = S32(0XB700 << 16);
    // 0x800646F4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800646F8: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x800646FC: addiu       $t6, $zero, 0x2005
    ctx->r14 = ADD32(0, 0X2005);
    // 0x80064700: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80064704: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80064708: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006470C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064710: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80064714: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80064718: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x8006471C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x80064720: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80064724: ori         $t9, $t9, 0x602
    ctx->r25 = ctx->r25 | 0X602;
    // 0x80064728: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x8006472C: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80064730: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x80064734: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80064738: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006473C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80064740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064744: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x80064748: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006474C: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x80064750: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80064754: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80064758: ori         $t7, $t7, 0x1701
    ctx->r15 = ctx->r15 | 0X1701;
    // 0x8006475C: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80064760: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x80064764: nop

    // 0x80064768: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006476C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80064770: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80064774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064778: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8006477C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80064780: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x80064784: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80064788: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8006478C: ori         $t5, $t5, 0xC02
    ctx->r13 = ctx->r13 | 0XC02;
    // 0x80064790: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80064794: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80064798: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x8006479C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x800647A0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800647A4: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x800647A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800647AC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800647B0: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800647B4: sw          $t3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r11;
    // 0x800647B8: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x800647BC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x800647C0: ori         $t6, $t6, 0x1301
    ctx->r14 = ctx->r14 | 0X1301;
    // 0x800647C4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x800647C8: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x800647CC: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x800647D0: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x800647D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800647D8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800647DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800647E0: addiu       $t3, $t9, 0x8
    ctx->r11 = ADD32(ctx->r25, 0X8);
    // 0x800647E4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800647E8: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x800647EC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x800647F0: lui         $t4, 0xFCFF
    ctx->r12 = S32(0XFCFF << 16);
    // 0x800647F4: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x800647F8: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x800647FC: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80064800: lui         $t5, 0xFFFC
    ctx->r13 = S32(0XFFFC << 16);
    // 0x80064804: ori         $t5, $t5, 0xF87C
    ctx->r13 = ctx->r13 | 0XF87C;
    // 0x80064808: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x8006480C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80064810: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80064814: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064818: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8006481C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80064820: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x80064824: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x80064828: lui         $t3, 0xBB00
    ctx->r11 = S32(0XBB00 << 16);
    // 0x8006482C: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x80064830: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80064834: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x80064838: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x8006483C: ori         $t6, $t6, 0x8000
    ctx->r14 = ctx->r14 | 0X8000;
    // 0x80064840: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80064844: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x80064848: nop

    // 0x8006484C: beq         $t8, $zero, L_80064894
    if (ctx->r24 == 0) {
        // 0x80064850: nop
    
            goto L_80064894;
    }
    // 0x80064850: nop

    // 0x80064854: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80064858: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006485C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064860: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x80064864: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80064868: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x8006486C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80064870: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x80064874: ori         $t3, $t3, 0x31D
    ctx->r11 = ctx->r11 | 0X31D;
    // 0x80064878: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006487C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80064880: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x80064884: ori         $t6, $t6, 0x49D8
    ctx->r14 = ctx->r14 | 0X49D8;
    // 0x80064888: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8006488C: b           L_800648CC
    // 0x80064890: nop

        goto L_800648CC;
    // 0x80064890: nop

L_80064894:
    // 0x80064894: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80064898: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006489C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800648A0: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x800648A4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800648A8: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x800648AC: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x800648B0: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x800648B4: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x800648B8: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800648BC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x800648C0: lui         $t4, 0x55
    ctx->r12 = S32(0X55 << 16);
    // 0x800648C4: ori         $t4, $t4, 0x2078
    ctx->r12 = ctx->r12 | 0X2078;
    // 0x800648C8: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
L_800648CC:
    // 0x800648CC: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x800648D0: nop

    // 0x800648D4: bne         $t5, $zero, L_80064CC4
    if (ctx->r13 != 0) {
        // 0x800648D8: nop
    
            goto L_80064CC4;
    }
    // 0x800648D8: nop

    // 0x800648DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800648E0: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x800648E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800648E8: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x800648EC: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800648F0: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x800648F4: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x800648F8: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x800648FC: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x80064900: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80064904: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80064908: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8006490C: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80064910: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80064914: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80064918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006491C: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x80064920: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80064924: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x80064928: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8006492C: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80064930: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80064934: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x80064938: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x8006493C: nop

    // 0x80064940: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80064944: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80064948: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006494C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064950: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x80064954: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80064958: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x8006495C: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80064960: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x80064964: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80064968: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8006496C: nop

    // 0x80064970: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80064974: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80064978: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006497C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064980: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80064984: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80064988: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x8006498C: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80064990: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x80064994: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x80064998: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8006499C: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x800649A0: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x800649A4: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x800649A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800649AC: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800649B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800649B4: addiu       $t3, $t9, 0x8
    ctx->r11 = ADD32(ctx->r25, 0X8);
    // 0x800649B8: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800649BC: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x800649C0: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800649C4: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x800649C8: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x800649CC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800649D0: nop

    // 0x800649D4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x800649D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800649DC: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x800649E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800649E4: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x800649E8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800649EC: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x800649F0: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x800649F4: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x800649F8: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800649FC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80064A00: lui         $t4, 0x703
    ctx->r12 = S32(0X703 << 16);
    // 0x80064A04: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x80064A08: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80064A0C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80064A10: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80064A14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064A18: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x80064A1C: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80064A20: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x80064A24: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80064A28: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80064A2C: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80064A30: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80064A34: nop

    // 0x80064A38: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80064A3C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80064A40: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80064A44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064A48: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80064A4C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80064A50: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x80064A54: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80064A58: lui         $t5, 0xFD50
    ctx->r13 = S32(0XFD50 << 16);
    // 0x80064A5C: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80064A60: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80064A64: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80064A68: nop

    // 0x80064A6C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x80064A70: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80064A74: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80064A78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064A7C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80064A80: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80064A84: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x80064A88: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80064A8C: lui         $t6, 0xF550
    ctx->r14 = S32(0XF550 << 16);
    // 0x80064A90: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80064A94: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80064A98: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x80064A9C: ori         $t8, $t8, 0x4050
    ctx->r24 = ctx->r24 | 0X4050;
    // 0x80064AA0: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x80064AA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80064AA8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80064AAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064AB0: addiu       $t3, $t9, 0x8
    ctx->r11 = ADD32(ctx->r25, 0X8);
    // 0x80064AB4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80064AB8: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x80064ABC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80064AC0: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80064AC4: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x80064AC8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80064ACC: nop

    // 0x80064AD0: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80064AD4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80064AD8: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80064ADC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064AE0: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80064AE4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80064AE8: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80064AEC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80064AF0: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x80064AF4: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80064AF8: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x80064AFC: nop

    // 0x80064B00: multu       $a3, $t4
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064B04: mflo        $t6
    ctx->r14 = lo;
    // 0x80064B08: addiu       $t5, $t6, 0x3
    ctx->r13 = ADD32(ctx->r14, 0X3);
    // 0x80064B0C: sra         $t8, $t5, 2
    ctx->r24 = S32(SIGNED(ctx->r13) >> 2);
    // 0x80064B10: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80064B14: slti        $at, $t7, 0x7FF
    ctx->r1 = SIGNED(ctx->r15) < 0X7FF ? 1 : 0;
    // 0x80064B18: beq         $at, $zero, L_80064B3C
    if (ctx->r1 == 0) {
        // 0x80064B1C: nop
    
            goto L_80064B3C;
    }
    // 0x80064B1C: nop

    // 0x80064B20: multu       $a3, $t4
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064B24: mflo        $t2
    ctx->r10 = lo;
    // 0x80064B28: addiu       $t2, $t2, 0x3
    ctx->r10 = ADD32(ctx->r10, 0X3);
    // 0x80064B2C: sra         $t9, $t2, 2
    ctx->r25 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80064B30: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x80064B34: b           L_80064B40
    // 0x80064B38: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
        goto L_80064B40;
    // 0x80064B38: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
L_80064B3C:
    // 0x80064B3C: addiu       $t2, $zero, 0x7FF
    ctx->r10 = ADD32(0, 0X7FF);
L_80064B40:
    // 0x80064B40: bgez        $a3, L_80064B50
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80064B44: sra         $t3, $a3, 4
        ctx->r11 = S32(SIGNED(ctx->r7) >> 4);
            goto L_80064B50;
    }
    // 0x80064B44: sra         $t3, $a3, 4
    ctx->r11 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80064B48: addiu       $at, $a3, 0xF
    ctx->r1 = ADD32(ctx->r7, 0XF);
    // 0x80064B4C: sra         $t3, $at, 4
    ctx->r11 = S32(SIGNED(ctx->r1) >> 4);
L_80064B50:
    // 0x80064B50: bgtz        $t3, L_80064B60
    if (SIGNED(ctx->r11) > 0) {
        // 0x80064B54: nop
    
            goto L_80064B60;
    }
    // 0x80064B54: nop

    // 0x80064B58: b           L_80064B70
    // 0x80064B5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80064B70;
    // 0x80064B5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80064B60:
    // 0x80064B60: bgez        $a3, L_80064B70
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80064B64: sra         $t1, $a3, 4
        ctx->r9 = S32(SIGNED(ctx->r7) >> 4);
            goto L_80064B70;
    }
    // 0x80064B64: sra         $t1, $a3, 4
    ctx->r9 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80064B68: addiu       $at, $a3, 0xF
    ctx->r1 = ADD32(ctx->r7, 0XF);
    // 0x80064B6C: sra         $t1, $at, 4
    ctx->r9 = S32(SIGNED(ctx->r1) >> 4);
L_80064B70:
    // 0x80064B70: bgez        $a3, L_80064B80
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80064B74: sra         $t6, $a3, 4
        ctx->r14 = S32(SIGNED(ctx->r7) >> 4);
            goto L_80064B80;
    }
    // 0x80064B74: sra         $t6, $a3, 4
    ctx->r14 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80064B78: addiu       $at, $a3, 0xF
    ctx->r1 = ADD32(ctx->r7, 0XF);
    // 0x80064B7C: sra         $t6, $at, 4
    ctx->r14 = S32(SIGNED(ctx->r1) >> 4);
L_80064B80:
    // 0x80064B80: bgtz        $t6, L_80064B90
    if (SIGNED(ctx->r14) > 0) {
        // 0x80064B84: nop
    
            goto L_80064B90;
    }
    // 0x80064B84: nop

    // 0x80064B88: b           L_80064BA0
    // 0x80064B8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_80064BA0;
    // 0x80064B8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80064B90:
    // 0x80064B90: bgez        $a3, L_80064BA0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80064B94: sra         $t0, $a3, 4
        ctx->r8 = S32(SIGNED(ctx->r7) >> 4);
            goto L_80064BA0;
    }
    // 0x80064B94: sra         $t0, $a3, 4
    ctx->r8 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80064B98: addiu       $at, $a3, 0xF
    ctx->r1 = ADD32(ctx->r7, 0XF);
    // 0x80064B9C: sra         $t0, $at, 4
    ctx->r8 = S32(SIGNED(ctx->r1) >> 4);
L_80064BA0:
    // 0x80064BA0: addiu       $t5, $t1, 0x7FF
    ctx->r13 = ADD32(ctx->r9, 0X7FF);
    // 0x80064BA4: div         $zero, $t5, $t0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r8)));
    // 0x80064BA8: bne         $t0, $zero, L_80064BB4
    if (ctx->r8 != 0) {
        // 0x80064BAC: nop
    
            goto L_80064BB4;
    }
    // 0x80064BAC: nop

    // 0x80064BB0: break       7
    do_break(2147896240);
L_80064BB4:
    // 0x80064BB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064BB8: bne         $t0, $at, L_80064BCC
    if (ctx->r8 != ctx->r1) {
        // 0x80064BBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064BCC;
    }
    // 0x80064BBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80064BC0: bne         $t5, $at, L_80064BCC
    if (ctx->r13 != ctx->r1) {
        // 0x80064BC4: nop
    
            goto L_80064BCC;
    }
    // 0x80064BC4: nop

    // 0x80064BC8: break       6
    do_break(2147896264);
L_80064BCC:
    // 0x80064BCC: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x80064BD0: sll         $t9, $t4, 12
    ctx->r25 = S32(ctx->r12 << 12);
    // 0x80064BD4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80064BD8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80064BDC: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x80064BE0: mflo        $t8
    ctx->r24 = lo;
    // 0x80064BE4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80064BE8: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x80064BEC: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80064BF0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80064BF4: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80064BF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064BFC: addiu       $t4, $t8, 0x8
    ctx->r12 = ADD32(ctx->r24, 0X8);
    // 0x80064C00: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80064C04: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80064C08: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80064C0C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80064C10: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80064C14: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80064C18: nop

    // 0x80064C1C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80064C20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80064C24: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80064C28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064C2C: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x80064C30: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80064C34: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80064C38: sra         $t8, $a3, 1
    ctx->r24 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80064C3C: addiu       $t4, $t8, 0x7
    ctx->r12 = ADD32(ctx->r24, 0X7);
    // 0x80064C40: sra         $t9, $t4, 3
    ctx->r25 = S32(SIGNED(ctx->r12) >> 3);
    // 0x80064C44: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x80064C48: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80064C4C: sll         $t3, $t7, 9
    ctx->r11 = S32(ctx->r15 << 9);
    // 0x80064C50: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80064C54: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x80064C58: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80064C5C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80064C60: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80064C64: ori         $t8, $t8, 0x4050
    ctx->r24 = ctx->r24 | 0X4050;
    // 0x80064C68: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80064C6C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80064C70: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80064C74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064C78: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80064C7C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80064C80: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x80064C84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80064C88: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x80064C8C: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x80064C90: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x80064C94: addiu       $t5, $a3, -0x1
    ctx->r13 = ADD32(ctx->r7, -0X1);
    // 0x80064C98: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80064C9C: andi        $t4, $t8, 0xFFF
    ctx->r12 = ctx->r24 & 0XFFF;
    // 0x80064CA0: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80064CA4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80064CA8: sll         $t9, $t4, 12
    ctx->r25 = S32(ctx->r12 << 12);
    // 0x80064CAC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80064CB0: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x80064CB4: or          $t8, $t9, $t5
    ctx->r24 = ctx->r25 | ctx->r13;
    // 0x80064CB8: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80064CBC: b           L_80064F80
    // 0x80064CC0: nop

        goto L_80064F80;
    // 0x80064CC0: nop

L_80064CC4:
    // 0x80064CC4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80064CC8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80064CCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064CD0: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80064CD4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80064CD8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80064CDC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80064CE0: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80064CE4: ori         $t6, $t6, 0xE02
    ctx->r14 = ctx->r14 | 0XE02;
    // 0x80064CE8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80064CEC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80064CF0: nop

    // 0x80064CF4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80064CF8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80064CFC: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80064D00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064D04: addiu       $t4, $t8, 0x8
    ctx->r12 = ADD32(ctx->r24, 0X8);
    // 0x80064D08: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80064D0C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80064D10: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80064D14: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80064D18: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80064D1C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80064D20: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80064D24: nop

    // 0x80064D28: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80064D2C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80064D30: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80064D34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064D38: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x80064D3C: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80064D40: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80064D44: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80064D48: lui         $t4, 0xF510
    ctx->r12 = S32(0XF510 << 16);
    // 0x80064D4C: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80064D50: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80064D54: lui         $t3, 0x701
    ctx->r11 = S32(0X701 << 16);
    // 0x80064D58: ori         $t3, $t3, 0x4050
    ctx->r11 = ctx->r11 | 0X4050;
    // 0x80064D5C: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x80064D60: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80064D64: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80064D68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064D6C: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x80064D70: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80064D74: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80064D78: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80064D7C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80064D80: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80064D84: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80064D88: nop

    // 0x80064D8C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80064D90: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80064D94: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80064D98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064D9C: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x80064DA0: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80064DA4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80064DA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80064DAC: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x80064DB0: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80064DB4: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x80064DB8: nop

    // 0x80064DBC: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DC0: mflo        $t4
    ctx->r12 = lo;
    // 0x80064DC4: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x80064DC8: slti        $at, $t7, 0x7FF
    ctx->r1 = SIGNED(ctx->r15) < 0X7FF ? 1 : 0;
    // 0x80064DCC: beq         $at, $zero, L_80064DE8
    if (ctx->r1 == 0) {
        // 0x80064DD0: nop
    
            goto L_80064DE8;
    }
    // 0x80064DD0: nop

    // 0x80064DD4: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DD8: mflo        $t2
    ctx->r10 = lo;
    // 0x80064DDC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80064DE0: b           L_80064DEC
    // 0x80064DE4: nop

        goto L_80064DEC;
    // 0x80064DE4: nop

L_80064DE8:
    // 0x80064DE8: addiu       $t2, $zero, 0x7FF
    ctx->r10 = ADD32(0, 0X7FF);
L_80064DEC:
    // 0x80064DEC: sll         $t3, $a3, 1
    ctx->r11 = S32(ctx->r7 << 1);
    // 0x80064DF0: bgez        $t3, L_80064E00
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80064DF4: sra         $t6, $t3, 3
        ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
            goto L_80064E00;
    }
    // 0x80064DF4: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80064DF8: addiu       $at, $t3, 0x7
    ctx->r1 = ADD32(ctx->r11, 0X7);
    // 0x80064DFC: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80064E00:
    // 0x80064E00: bgtz        $t6, L_80064E10
    if (SIGNED(ctx->r14) > 0) {
        // 0x80064E04: nop
    
            goto L_80064E10;
    }
    // 0x80064E04: nop

    // 0x80064E08: b           L_80064E28
    // 0x80064E0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80064E28;
    // 0x80064E0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80064E10:
    // 0x80064E10: sll         $t1, $a3, 1
    ctx->r9 = S32(ctx->r7 << 1);
    // 0x80064E14: bgez        $t1, L_80064E24
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80064E18: sra         $t9, $t1, 3
        ctx->r25 = S32(SIGNED(ctx->r9) >> 3);
            goto L_80064E24;
    }
    // 0x80064E18: sra         $t9, $t1, 3
    ctx->r25 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80064E1C: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x80064E20: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80064E24:
    // 0x80064E24: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
L_80064E28:
    // 0x80064E28: sll         $t5, $a3, 1
    ctx->r13 = S32(ctx->r7 << 1);
    // 0x80064E2C: bgez        $t5, L_80064E3C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80064E30: sra         $t4, $t5, 3
        ctx->r12 = S32(SIGNED(ctx->r13) >> 3);
            goto L_80064E3C;
    }
    // 0x80064E30: sra         $t4, $t5, 3
    ctx->r12 = S32(SIGNED(ctx->r13) >> 3);
    // 0x80064E34: addiu       $at, $t5, 0x7
    ctx->r1 = ADD32(ctx->r13, 0X7);
    // 0x80064E38: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_80064E3C:
    // 0x80064E3C: bgtz        $t4, L_80064E4C
    if (SIGNED(ctx->r12) > 0) {
        // 0x80064E40: nop
    
            goto L_80064E4C;
    }
    // 0x80064E40: nop

    // 0x80064E44: b           L_80064E64
    // 0x80064E48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_80064E64;
    // 0x80064E48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80064E4C:
    // 0x80064E4C: sll         $t0, $a3, 1
    ctx->r8 = S32(ctx->r7 << 1);
    // 0x80064E50: bgez        $t0, L_80064E60
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80064E54: sra         $t7, $t0, 3
        ctx->r15 = S32(SIGNED(ctx->r8) >> 3);
            goto L_80064E60;
    }
    // 0x80064E54: sra         $t7, $t0, 3
    ctx->r15 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80064E58: addiu       $at, $t0, 0x7
    ctx->r1 = ADD32(ctx->r8, 0X7);
    // 0x80064E5C: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_80064E60:
    // 0x80064E60: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
L_80064E64:
    // 0x80064E64: addiu       $t8, $t1, 0x7FF
    ctx->r24 = ADD32(ctx->r9, 0X7FF);
    // 0x80064E68: div         $zero, $t8, $t0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r8)));
    // 0x80064E6C: bne         $t0, $zero, L_80064E78
    if (ctx->r8 != 0) {
        // 0x80064E70: nop
    
            goto L_80064E78;
    }
    // 0x80064E70: nop

    // 0x80064E74: break       7
    do_break(2147896948);
L_80064E78:
    // 0x80064E78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064E7C: bne         $t0, $at, L_80064E90
    if (ctx->r8 != ctx->r1) {
        // 0x80064E80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064E90;
    }
    // 0x80064E80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80064E84: bne         $t8, $at, L_80064E90
    if (ctx->r24 != ctx->r1) {
        // 0x80064E88: nop
    
            goto L_80064E90;
    }
    // 0x80064E88: nop

    // 0x80064E8C: break       6
    do_break(2147896972);
L_80064E90:
    // 0x80064E90: andi        $t9, $t2, 0xFFF
    ctx->r25 = ctx->r10 & 0XFFF;
    // 0x80064E94: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80064E98: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80064E9C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80064EA0: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x80064EA4: mflo        $t3
    ctx->r11 = lo;
    // 0x80064EA8: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x80064EAC: or          $t7, $t6, $t4
    ctx->r15 = ctx->r14 | ctx->r12;
    // 0x80064EB0: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80064EB4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80064EB8: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80064EBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064EC0: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x80064EC4: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80064EC8: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80064ECC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80064ED0: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80064ED4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80064ED8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80064EDC: nop

    // 0x80064EE0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80064EE4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80064EE8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80064EEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064EF0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80064EF4: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80064EF8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80064EFC: sll         $t3, $a3, 1
    ctx->r11 = S32(ctx->r7 << 1);
    // 0x80064F00: addiu       $t9, $t3, 0x7
    ctx->r25 = ADD32(ctx->r11, 0X7);
    // 0x80064F04: sra         $t5, $t9, 3
    ctx->r13 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80064F08: andi        $t6, $t5, 0x1FF
    ctx->r14 = ctx->r13 & 0X1FF;
    // 0x80064F0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80064F10: sll         $t4, $t6, 9
    ctx->r12 = S32(ctx->r14 << 9);
    // 0x80064F14: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80064F18: or          $t7, $t4, $at
    ctx->r15 = ctx->r12 | ctx->r1;
    // 0x80064F1C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80064F20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80064F24: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x80064F28: ori         $t3, $t3, 0x4050
    ctx->r11 = ctx->r11 | 0X4050;
    // 0x80064F2C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x80064F30: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80064F34: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80064F38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064F3C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80064F40: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80064F44: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80064F48: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80064F4C: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x80064F50: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80064F54: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x80064F58: addiu       $t8, $a3, -0x1
    ctx->r24 = ADD32(ctx->r7, -0X1);
    // 0x80064F5C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80064F60: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x80064F64: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x80064F68: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80064F6C: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80064F70: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80064F74: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80064F78: or          $t3, $t5, $t8
    ctx->r11 = ctx->r13 | ctx->r24;
    // 0x80064F7C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_80064F80:
    // 0x80064F80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80064F84: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80064F88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80064F8C: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x80064F90: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80064F94: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80064F98: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x80064F9C: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x80064FA0: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80064FA4: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x80064FA8: sll         $t3, $t8, 12
    ctx->r11 = S32(ctx->r24 << 12);
    // 0x80064FAC: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80064FB0: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80064FB4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80064FB8: andi        $t7, $t4, 0xFFF
    ctx->r15 = ctx->r12 & 0XFFF;
    // 0x80064FBC: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80064FC0: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x80064FC4: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80064FC8: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x80064FCC: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x80064FD0: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80064FD4: addu        $t4, $t3, $t6
    ctx->r12 = ADD32(ctx->r11, ctx->r14);
    // 0x80064FD8: addu        $t8, $t5, $a3
    ctx->r24 = ADD32(ctx->r13, ctx->r7);
    // 0x80064FDC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80064FE0: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80064FE4: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x80064FE8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80064FEC: sll         $t4, $t6, 12
    ctx->r12 = S32(ctx->r14 << 12);
    // 0x80064FF0: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80064FF4: or          $t9, $t4, $t7
    ctx->r25 = ctx->r12 | ctx->r15;
    // 0x80064FF8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x80064FFC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80065000: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80065004: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065008: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8006500C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80065010: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80065014: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80065018: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x8006501C: ori         $t6, $t6, 0x103F
    ctx->r14 = ctx->r14 | 0X103F;
    // 0x80065020: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80065024: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80065028: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8006502C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80065030: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80065034: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80065038: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006503C: addiu       $t9, $t9, 0x6458
    ctx->r25 = ADD32(ctx->r25, 0X6458);
    // 0x80065040: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80065044: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x80065048: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x8006504C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80065050: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80065054: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065058: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8006505C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80065060: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80065064: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80065068: lui         $t4, 0xBF00
    ctx->r12 = S32(0XBF00 << 16);
    // 0x8006506C: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80065070: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80065074: addiu       $t9, $zero, 0x204
    ctx->r25 = ADD32(0, 0X204);
    // 0x80065078: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8006507C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80065080: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80065084: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065088: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8006508C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80065090: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80065094: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80065098: lui         $t6, 0xBF00
    ctx->r14 = S32(0XBF00 << 16);
    // 0x8006509C: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x800650A0: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x800650A4: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x800650A8: ori         $t7, $t7, 0x600
    ctx->r15 = ctx->r15 | 0X600;
    // 0x800650AC: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x800650B0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800650B4: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x800650B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800650BC: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x800650C0: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x800650C4: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x800650C8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800650CC: lui         $t3, 0xBB00
    ctx->r11 = S32(0XBB00 << 16);
    // 0x800650D0: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x800650D4: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800650D8: nop

    // 0x800650DC: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x800650E0: b           L_800650E8
    // 0x800650E4: nop

        goto L_800650E8;
    // 0x800650E4: nop

L_800650E8:
    // 0x800650E8: jr          $ra
    // 0x800650EC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x800650EC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_800DE7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE7DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DE7E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DE7E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DE7E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DE7EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DE7F0: lh          $t0, 0x6($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X6);
    // 0x800DE7F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DE7F8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800DE7FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DE800: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DE804: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x800DE808: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800DE80C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DE810: lh          $t1, 0x8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X8);
    // 0x800DE814: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DE818: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DE81C: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800DE820: addiu       $a1, $a1, 0x436C
    ctx->r5 = ADD32(ctx->r5, 0X436C);
    // 0x800DE824: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DE828: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DE82C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DE830: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DE834: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DE838: jal         0x80027464
    // 0x800DE83C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DE83C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DE840: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800DE844: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DE848: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DE84C: beq         $t2, $at, L_800DE87C
    if (ctx->r10 == ctx->r1) {
        // 0x800DE850: nop
    
            goto L_800DE87C;
    }
    // 0x800DE850: nop

    // 0x800DE854: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DE858: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DE85C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800DE860: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DE864: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800DE868: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DE86C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800DE870: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800DE874: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800DE878: sb          $t3, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r11;
L_800DE87C:
    // 0x800DE87C: b           L_800DE884
    // 0x800DE880: nop

        goto L_800DE884;
    // 0x800DE880: nop

L_800DE884:
    // 0x800DE884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DE88C: jr          $ra
    // 0x800DE890: nop

    return;
    // 0x800DE890: nop

;}
RECOMP_FUNC void func_80090D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090D08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090D10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090D14: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090D18: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090D1C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090D20: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090D24: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090D28: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090D2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090D30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090D34: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090D38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090D3C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090D40: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090D44: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090D48: addiu       $a1, $a1, 0x14B0
    ctx->r5 = ADD32(ctx->r5, 0X14B0);
    // 0x80090D4C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090D50: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090D54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090D58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090D5C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090D60: jal         0x80027464
    // 0x80090D64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090D64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090D68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090D6C: b           L_80090D74
    // 0x80090D70: nop

        goto L_80090D74;
    // 0x80090D70: nop

L_80090D74:
    // 0x80090D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090D7C: jr          $ra
    // 0x80090D80: nop

    return;
    // 0x80090D80: nop

;}
RECOMP_FUNC void func_80097888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009788C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097890: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80097894: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097898: nop

    // 0x8009789C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800978A0: nop

    // 0x800978A4: bne         $t7, $zero, L_80097914
    if (ctx->r15 != 0) {
        // 0x800978A8: nop
    
            goto L_80097914;
    }
    // 0x800978A8: nop

    // 0x800978AC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800978B0: nop

    // 0x800978B4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800978B8: nop

    // 0x800978BC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800978C0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800978C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800978C8: nop

    // 0x800978CC: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x800978D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800978D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800978D8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800978DC: nop

    // 0x800978E0: swc1        $f4, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f4.u32l;
    // 0x800978E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800978E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800978EC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800978F0: nop

    // 0x800978F4: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x800978F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800978FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097904: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80097908: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009790C: jal         0x800175F0
    // 0x80097910: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80097910: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80097914:
    // 0x80097914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009791C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097920: jal         0x8001B6BC
    // 0x80097924: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x80097924: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
    // 0x80097928: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009792C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80097930: nop

    // 0x80097934: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x80097938: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8009793C: nop

    // 0x80097940: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80097944: nop

    // 0x80097948: swc1        $f10, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f10.u32l;
    // 0x8009794C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097954: jal         0x80029D04
    // 0x80097958: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80097958: nop

    after_2:
    // 0x8009795C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097960: nop

    // 0x80097964: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x80097968: lwc1        $f4, 0x48($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X48);
    // 0x8009796C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80097970: nop

    // 0x80097974: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80097978: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009797C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80097980: nop

    // 0x80097984: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80097988: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8009798C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80097990: nop

    // 0x80097994: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80097998: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x8009799C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800979A0: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
    // 0x800979A4: nop

    // 0x800979A8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800979AC: nop

    // 0x800979B0: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x800979B4: nop

    // 0x800979B8: slti        $at, $t1, 0xB4
    ctx->r1 = SIGNED(ctx->r9) < 0XB4 ? 1 : 0;
    // 0x800979BC: bne         $at, $zero, L_800979D4
    if (ctx->r1 != 0) {
        // 0x800979C0: nop
    
            goto L_800979D4;
    }
    // 0x800979C0: nop

    // 0x800979C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800979C8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800979CC: nop

    // 0x800979D0: swc1        $f10, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f10.u32l;
L_800979D4:
    // 0x800979D4: b           L_800979DC
    // 0x800979D8: nop

        goto L_800979DC;
    // 0x800979D8: nop

L_800979DC:
    // 0x800979DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800979E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800979E4: jr          $ra
    // 0x800979E8: nop

    return;
    // 0x800979E8: nop

;}
RECOMP_FUNC void func_800A7644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7644: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A7648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A764C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A7650: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A7654: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A7658: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A765C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7660: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A7664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A7668: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A766C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A7670: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A7674: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800A7678: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A767C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A7680: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800A7684: nop

    // 0x800A7688: beq         $t1, $at, L_800A7874
    if (ctx->r9 == ctx->r1) {
        // 0x800A768C: nop
    
            goto L_800A7874;
    }
    // 0x800A768C: nop

    // 0x800A7690: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A7694: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800A7698: lh          $t3, 0xE6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE6);
    // 0x800A769C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800A76A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A76A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A76A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A76AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A76B0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A76B4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800A76B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800A76BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A76C0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800A76C4: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A76C8: nop

    // 0x800A76CC: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x800A76D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A76D4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A76D8: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800A76DC: nop

    // 0x800A76E0: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800A76E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A76E8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A76EC: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800A76F0: nop

    // 0x800A76F4: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x800A76F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A76FC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800A7700: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A7704: nop

    // 0x800A7708: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x800A770C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A7710: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800A7714: lwc1        $f16, 0x40($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X40);
    // 0x800A7718: nop

    // 0x800A771C: swc1        $f16, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f16.u32l;
    // 0x800A7720: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A7724: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800A7728: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800A772C: nop

    // 0x800A7730: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x800A7734: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A7738: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A773C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800A7740: nop

    // 0x800A7744: bne         $t0, $at, L_800A782C
    if (ctx->r8 != ctx->r1) {
        // 0x800A7748: nop
    
            goto L_800A782C;
    }
    // 0x800A7748: nop

    // 0x800A774C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A7750: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800A7754: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A7758: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800A775C: jal         0x80015538
    // 0x800A7760: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A7760: nop

    after_0:
    // 0x800A7764: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800A7768: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A776C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A7770: lwc1        $f9, 0x49F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X49F0);
    // 0x800A7774: lwc1        $f8, 0x49F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X49F4);
    // 0x800A7778: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800A777C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800A7780: jal         0x80034970
    // 0x800A7784: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800A7784: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x800A7788: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A778C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A7790: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A7794: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800A7798: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
    // 0x800A779C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A77A0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A77A4: lwc1        $f9, 0x49F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X49F8);
    // 0x800A77A8: lwc1        $f8, 0x49FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X49FC);
    // 0x800A77AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800A77B0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800A77B4: jal         0x80036570
    // 0x800A77B8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x800A77B8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x800A77BC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A77C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A77C4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A77C8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800A77CC: swc1        $f18, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f18.u32l;
    // 0x800A77D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A77D4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A77D8: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800A77DC: lwc1        $f6, 0x24($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800A77E0: nop

    // 0x800A77E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A77E8: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x800A77EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A77F0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800A77F4: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800A77F8: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800A77FC: nop

    // 0x800A7800: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A7804: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x800A7808: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A780C: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x800A7810: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A7814: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800A7818: jal         0x80015538
    // 0x800A781C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A781C: nop

    after_3:
    // 0x800A7820: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A7824: nop

    // 0x800A7828: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_800A782C:
    // 0x800A782C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7830: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A7834: nop

    // 0x800A7838: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800A783C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A7840: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A7844: nop

    // 0x800A7848: swc1        $f6, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f6.u32l;
    // 0x800A784C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7854: jal         0x80029C40
    // 0x800A7858: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A7858: nop

    after_4:
    // 0x800A785C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7860: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7864: jal         0x80029D04
    // 0x800A7868: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A7868: nop

    after_5:
    // 0x800A786C: b           L_800A787C
    // 0x800A7870: nop

        goto L_800A787C;
    // 0x800A7870: nop

L_800A7874:
    // 0x800A7874: jal         0x800A72C0
    // 0x800A7878: nop

    func_800A72C0(rdram, ctx);
        goto after_6;
    // 0x800A7878: nop

    after_6:
L_800A787C:
    // 0x800A787C: b           L_800A7884
    // 0x800A7880: nop

        goto L_800A7884;
    // 0x800A7880: nop

L_800A7884:
    // 0x800A7884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A788C: jr          $ra
    // 0x800A7890: nop

    return;
    // 0x800A7890: nop

;}
RECOMP_FUNC void func_800924D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800924D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800924D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800924DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800924E0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800924E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800924E8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800924EC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800924F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800924F4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800924F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800924FC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092500: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092504: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092508: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009250C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092510: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092514: addiu       $a1, $a1, 0x16C0
    ctx->r5 = ADD32(ctx->r5, 0X16C0);
    // 0x80092518: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009251C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092524: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092528: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009252C: jal         0x80027464
    // 0x80092530: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092530: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092534: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092538: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009253C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092540: addiu       $a3, $a3, 0x3118
    ctx->r7 = ADD32(ctx->r7, 0X3118);
    // 0x80092544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092548: jal         0x8001ABF4
    // 0x8009254C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009254C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80092550: b           L_80092558
    // 0x80092554: nop

        goto L_80092558;
    // 0x80092554: nop

L_80092558:
    // 0x80092558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009255C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092560: jr          $ra
    // 0x80092564: nop

    return;
    // 0x80092564: nop

;}
RECOMP_FUNC void func_8006F664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F664: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006F668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006F66C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8006F670: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8006F674: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8006F678: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8006F67C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8006F680: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8006F684: blez        $t6, L_8006F768
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8006F688: nop
    
            goto L_8006F768;
    }
    // 0x8006F688: nop

L_8006F68C:
    // 0x8006F68C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8006F690: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006F694: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8006F698: mfhi        $t8
    ctx->r24 = hi;
    // 0x8006F69C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8006F6A0: nop

    // 0x8006F6A4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8006F6A8: nop

    // 0x8006F6AC: bne         $t9, $zero, L_8006F6BC
    if (ctx->r25 != 0) {
        // 0x8006F6B0: nop
    
            goto L_8006F6BC;
    }
    // 0x8006F6B0: nop

    // 0x8006F6B4: b           L_8006F6C8
    // 0x8006F6B8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
        goto L_8006F6C8;
    // 0x8006F6B8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8006F6BC:
    // 0x8006F6BC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006F6C0: nop

    // 0x8006F6C4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_8006F6C8:
    // 0x8006F6C8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8006F6CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006F6D0: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8006F6D4: mflo        $t2
    ctx->r10 = lo;
    // 0x8006F6D8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8006F6DC: nop

    // 0x8006F6E0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F6E4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8006F6E8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006F6EC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8006F6F0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F6F4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8006F6F8: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8006F6FC: jal         0x8006F570
    // 0x8006F700: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_0;
    // 0x8006F700: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8006F704: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8006F708: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8006F70C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006F710: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8006F714: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8006F718: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006F71C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006F720: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8006F724: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006F728: nop

    // 0x8006F72C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006F730: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006F734: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006F738: nop

    // 0x8006F73C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006F740: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8006F744: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006F748: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8006F74C: nop

    // 0x8006F750: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8006F754: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8006F758: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8006F75C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8006F760: bne         $at, $zero, L_8006F68C
    if (ctx->r1 != 0) {
        // 0x8006F764: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_8006F68C;
    }
    // 0x8006F764: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8006F768:
    // 0x8006F768: b           L_8006F770
    // 0x8006F76C: nop

        goto L_8006F770;
    // 0x8006F76C: nop

L_8006F770:
    // 0x8006F770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F774: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8006F778: jr          $ra
    // 0x8006F77C: nop

    return;
    // 0x8006F77C: nop

;}
RECOMP_FUNC void func_800F5904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5904: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800F5908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F590C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F5910: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F5914: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F5918: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F591C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F5920: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F5924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F5928: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F592C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F5930: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F5934: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800F5938: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F593C: nop

    // 0x800F5940: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F5944: nop

    // 0x800F5948: bne         $t1, $zero, L_800F5A48
    if (ctx->r9 != 0) {
        // 0x800F594C: nop
    
            goto L_800F5A48;
    }
    // 0x800F594C: nop

    // 0x800F5950: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800F5954: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F5958: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F595C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_800F5960:
    // 0x800F5960: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5964: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800F5968: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800F596C: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x800F5970: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x800F5974: nop

    // 0x800F5978: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x800F597C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800F5980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5984: beq         $t9, $at, L_800F5A28
    if (ctx->r25 == ctx->r1) {
        // 0x800F5988: nop
    
            goto L_800F5A28;
    }
    // 0x800F5988: nop

    // 0x800F598C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800F5990: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800F5994: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F5998: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F599C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F59A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F59A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F59A8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F59AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F59B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F59B4: swc1        $f4, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f4.u32l;
    // 0x800F59B8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800F59BC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800F59C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F59C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F59C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F59CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F59D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F59D4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F59D8: lh          $t5, 0x4254($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4254);
    // 0x800F59DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F59E0: beq         $t5, $at, L_800F5A04
    if (ctx->r13 == ctx->r1) {
        // 0x800F59E4: nop
    
            goto L_800F5A04;
    }
    // 0x800F59E4: nop

    // 0x800F59E8: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x800F59EC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F59F0: nop

    // 0x800F59F4: sh          $t4, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r12;
    // 0x800F59F8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F59FC: nop

    // 0x800F5A00: sh          $zero, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = 0;
L_800F5A04:
    // 0x800F5A04: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800F5A08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5A0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F5A10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F5A14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F5A18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F5A1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F5A20: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F5A24: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800F5A28:
    // 0x800F5A28: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5A2C: nop

    // 0x800F5A30: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800F5A34: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800F5A38: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800F5A3C: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x800F5A40: bne         $at, $zero, L_800F5960
    if (ctx->r1 != 0) {
        // 0x800F5A44: sh          $t1, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r9;
            goto L_800F5960;
    }
    // 0x800F5A44: sh          $t1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r9;
L_800F5A48:
    // 0x800F5A48: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F5A4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5A50: lh          $t4, 0xAA($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XAA);
    // 0x800F5A54: nop

    // 0x800F5A58: beq         $t4, $at, L_800F5D68
    if (ctx->r12 == ctx->r1) {
        // 0x800F5A5C: nop
    
            goto L_800F5D68;
    }
    // 0x800F5A5C: nop

    // 0x800F5A60: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_800F5A64:
    // 0x800F5A64: lh          $t8, 0x3E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5A68: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F5A6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F5A70: lh          $t7, 0xAE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAE);
    // 0x800F5A74: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F5A78: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800F5A7C: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x800F5A80: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x800F5A84: subu        $t0, $t7, $t9
    ctx->r8 = SUB32(ctx->r15, ctx->r25);
    // 0x800F5A88: sh          $t0, 0x28($t2)
    MEM_H(0X28, ctx->r10) = ctx->r8;
    // 0x800F5A8C: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5A90: nop

    // 0x800F5A94: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800F5A98: sll         $t4, $t5, 16
    ctx->r12 = S32(ctx->r13 << 16);
    // 0x800F5A9C: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800F5AA0: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x800F5AA4: bne         $at, $zero, L_800F5A64
    if (ctx->r1 != 0) {
        // 0x800F5AA8: sh          $t5, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r13;
            goto L_800F5A64;
    }
    // 0x800F5AA8: sh          $t5, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r13;
    // 0x800F5AAC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800F5AB0: nop

    // 0x800F5AB4: lh          $t9, 0xAA($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAA);
    // 0x800F5AB8: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x800F5ABC: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x800F5AC0: beq         $at, $zero, L_800F5BE8
    if (ctx->r1 == 0) {
        // 0x800F5AC4: sh          $t9, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r25;
            goto L_800F5BE8;
    }
    // 0x800F5AC4: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_800F5AC8:
    // 0x800F5AC8: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5ACC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F5AD0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800F5AD4: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800F5AD8: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800F5ADC: nop

    // 0x800F5AE0: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x800F5AE4: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800F5AE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5AEC: beq         $t5, $at, L_800F5BC0
    if (ctx->r13 == ctx->r1) {
        // 0x800F5AF0: nop
    
            goto L_800F5BC0;
    }
    // 0x800F5AF0: nop

    // 0x800F5AF4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800F5AF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F5AFC: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800F5B00: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800F5B04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F5B08: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800F5B0C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F5B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5B14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F5B18: swc1        $f6, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f6.u32l;
    // 0x800F5B1C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5B20: jal         0x80029D04
    // 0x800F5B24: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x800F5B24: nop

    after_0:
    // 0x800F5B28: lh          $t7, 0x3C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3C);
    // 0x800F5B2C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x800F5B30: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x800F5B34: addu        $t0, $sp, $t9
    ctx->r8 = ADD32(ctx->r29, ctx->r25);
    // 0x800F5B38: lh          $t0, 0x28($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X28);
    // 0x800F5B3C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800F5B40: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800F5B44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F5B48: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800F5B4C: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x800F5B50: nop

    // 0x800F5B54: bc1t        L_800F5B88
    if (c1cs) {
        // 0x800F5B58: nop
    
            goto L_800F5B88;
    }
    // 0x800F5B58: nop

    // 0x800F5B5C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F5B60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F5B64: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5B68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F5B6C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F5B70: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F5B74: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800F5B78: jal         0x800295C0
    // 0x800F5B7C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x800F5B7C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800F5B80: beq         $v0, $zero, L_800F5BC0
    if (ctx->r2 == 0) {
        // 0x800F5B84: nop
    
            goto L_800F5BC0;
    }
    // 0x800F5B84: nop

L_800F5B88:
    // 0x800F5B88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5B8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5B90: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5B94: jal         0x800281A4
    // 0x800F5B98: nop

    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x800F5B98: nop

    after_2:
    // 0x800F5B9C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5BA0: jal         0x8002B0E4
    // 0x800F5BA4: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800F5BA4: nop

    after_3:
    // 0x800F5BA8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800F5BAC: nop

    // 0x800F5BB0: lh          $t1, 0xAC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAC);
    // 0x800F5BB4: nop

    // 0x800F5BB8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800F5BBC: sh          $t2, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r10;
L_800F5BC0:
    // 0x800F5BC0: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5BC4: lh          $t4, 0x3C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3C);
    // 0x800F5BC8: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800F5BCC: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x800F5BD0: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800F5BD4: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x800F5BD8: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800F5BDC: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x800F5BE0: bne         $at, $zero, L_800F5AC8
    if (ctx->r1 != 0) {
        // 0x800F5BE4: sh          $t5, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r13;
            goto L_800F5AC8;
    }
    // 0x800F5BE4: sh          $t5, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r13;
L_800F5BE8:
    // 0x800F5BE8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800F5BEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F5BF0: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800F5BF4: sh          $t8, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r24;
    // 0x800F5BF8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800F5BFC: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x800F5C00: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800F5C04: bltz        $t4, L_800F5D28
    if (SIGNED(ctx->r12) < 0) {
        // 0x800F5C08: sh          $t2, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r10;
            goto L_800F5D28;
    }
    // 0x800F5C08: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
L_800F5C0C:
    // 0x800F5C0C: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5C10: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F5C14: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x800F5C18: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x800F5C1C: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x800F5C20: nop

    // 0x800F5C24: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x800F5C28: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800F5C2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5C30: beq         $t1, $at, L_800F5D04
    if (ctx->r9 == ctx->r1) {
        // 0x800F5C34: nop
    
            goto L_800F5D04;
    }
    // 0x800F5C34: nop

    // 0x800F5C38: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800F5C3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F5C40: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x800F5C44: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x800F5C48: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F5C4C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x800F5C50: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F5C54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5C58: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F5C5C: swc1        $f6, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f6.u32l;
    // 0x800F5C60: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5C64: jal         0x80029D04
    // 0x800F5C68: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800F5C68: nop

    after_4:
    // 0x800F5C6C: lh          $t3, 0x3C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3C);
    // 0x800F5C70: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x800F5C74: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800F5C78: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x800F5C7C: lh          $t5, 0x28($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X28);
    // 0x800F5C80: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800F5C84: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800F5C88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F5C8C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800F5C90: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x800F5C94: nop

    // 0x800F5C98: bc1t        L_800F5CCC
    if (c1cs) {
        // 0x800F5C9C: nop
    
            goto L_800F5CCC;
    }
    // 0x800F5C9C: nop

    // 0x800F5CA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F5CA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F5CA8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5CAC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F5CB0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F5CB4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F5CB8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800F5CBC: jal         0x800295C0
    // 0x800F5CC0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800F5CC0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800F5CC4: beq         $v0, $zero, L_800F5D04
    if (ctx->r2 == 0) {
        // 0x800F5CC8: nop
    
            goto L_800F5D04;
    }
    // 0x800F5CC8: nop

L_800F5CCC:
    // 0x800F5CCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5CD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5CD4: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5CD8: jal         0x800281A4
    // 0x800F5CDC: nop

    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x800F5CDC: nop

    after_6:
    // 0x800F5CE0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800F5CE4: jal         0x8002B0E4
    // 0x800F5CE8: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800F5CE8: nop

    after_7:
    // 0x800F5CEC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F5CF0: nop

    // 0x800F5CF4: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x800F5CF8: nop

    // 0x800F5CFC: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x800F5D00: sh          $t9, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r25;
L_800F5D04:
    // 0x800F5D04: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x800F5D08: lh          $t8, 0x3C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3C);
    // 0x800F5D0C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800F5D10: sll         $t3, $t1, 16
    ctx->r11 = S32(ctx->r9 << 16);
    // 0x800F5D14: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800F5D18: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x800F5D1C: sh          $t2, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r10;
    // 0x800F5D20: bgez        $t4, L_800F5C0C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800F5D24: sh          $t1, 0x3E($sp)
        MEM_H(0X3E, ctx->r29) = ctx->r9;
            goto L_800F5C0C;
    }
    // 0x800F5D24: sh          $t1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r9;
L_800F5D28:
    // 0x800F5D28: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800F5D2C: nop

    // 0x800F5D30: lh          $t7, 0xAE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAE);
    // 0x800F5D34: nop

    // 0x800F5D38: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800F5D3C: sh          $t9, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r25;
    // 0x800F5D40: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800F5D44: nop

    // 0x800F5D48: lh          $t0, 0xAC($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XAC);
    // 0x800F5D4C: nop

    // 0x800F5D50: bgtz        $t0, L_800F5D68
    if (SIGNED(ctx->r8) > 0) {
        // 0x800F5D54: nop
    
            goto L_800F5D68;
    }
    // 0x800F5D54: nop

    // 0x800F5D58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5D5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5D60: jal         0x8002B0E4
    // 0x800F5D64: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800F5D64: nop

    after_8:
L_800F5D68:
    // 0x800F5D68: b           L_800F5D70
    // 0x800F5D6C: nop

        goto L_800F5D70;
    // 0x800F5D6C: nop

L_800F5D70:
    // 0x800F5D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5D74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800F5D78: jr          $ra
    // 0x800F5D7C: nop

    return;
    // 0x800F5D7C: nop

;}
RECOMP_FUNC void func_8007FA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FA20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007FA24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007FA28: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007FA2C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007FA30: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007FA34: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007FA38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FA3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FA40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FA44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FA48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FA4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FA50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FA54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FA58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FA5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FA60: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007FA64: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007FA68: nop

    // 0x8007FA6C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8007FA70: nop

    // 0x8007FA74: bgez        $t1, L_8007FA84
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8007FA78: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8007FA84;
    }
    // 0x8007FA78: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8007FA7C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8007FA80: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8007FA84:
    // 0x8007FA84: sh          $t2, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r10;
    // 0x8007FA88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007FA8C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007FA90: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8007FA94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007FA98: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8007FA9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007FAA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007FAA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007FAA8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007FAAC: add.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007FAB0: swc1        $f22, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f22.u32l;
    // 0x8007FAB4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007FAB8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007FABC: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8007FAC0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007FAC4: nop

    // 0x8007FAC8: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x8007FACC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007FAD0: nop

    // 0x8007FAD4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8007FAD8: nop

    // 0x8007FADC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007FAE0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x8007FAE4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007FAE8: nop

    // 0x8007FAEC: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8007FAF0: nop

    // 0x8007FAF4: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8007FAF8: bne         $at, $zero, L_8007FB10
    if (ctx->r1 != 0) {
        // 0x8007FAFC: nop
    
            goto L_8007FB10;
    }
    // 0x8007FAFC: nop

    // 0x8007FB00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007FB04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8007FB08: jal         0x8001A928
    // 0x8007FB0C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007FB0C: nop

    after_0:
L_8007FB10:
    // 0x8007FB10: b           L_8007FB18
    // 0x8007FB14: nop

        goto L_8007FB18;
    // 0x8007FB14: nop

L_8007FB18:
    // 0x8007FB18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007FB1C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007FB20: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007FB24: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007FB28: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007FB2C: jr          $ra
    // 0x8007FB30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007FB30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80097730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097734: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097738: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009773C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80097740: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80097744: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80097748: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009774C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80097750: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80097754: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80097758: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009775C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80097760: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80097764: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80097768: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009776C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80097770: addiu       $a1, $a1, 0x364C
    ctx->r5 = ADD32(ctx->r5, 0X364C);
    // 0x80097774: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80097778: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009777C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80097780: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80097784: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80097788: jal         0x80027464
    // 0x8009778C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009778C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80097790: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80097794: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80097798: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009779C: beq         $t1, $at, L_800977D4
    if (ctx->r9 == ctx->r1) {
        // 0x800977A0: nop
    
            goto L_800977D4;
    }
    // 0x800977A0: nop

    // 0x800977A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800977A8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800977AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800977B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800977B4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800977B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800977BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800977C0: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x800977C4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800977C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800977CC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800977D0: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_800977D4:
    // 0x800977D4: b           L_800977DC
    // 0x800977D8: nop

        goto L_800977DC;
    // 0x800977D8: nop

L_800977DC:
    // 0x800977DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800977E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800977E4: jr          $ra
    // 0x800977E8: nop

    return;
    // 0x800977E8: nop

;}
RECOMP_FUNC void Demo_PrepareStr(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D2D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005D2D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005D2D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005D2DC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005D2E0: lb          $t6, 0x4799($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4799);
    // 0x8005D2E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005D2E8: bne         $t6, $at, L_8005D490
    if (ctx->r14 != ctx->r1) {
        // 0x8005D2EC: nop
    
            goto L_8005D490;
    }
    // 0x8005D2EC: nop

    // 0x8005D2F0: addiu       $t7, $zero, 0xB8
    ctx->r15 = ADD32(0, 0XB8);
    // 0x8005D2F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D2F8: sh          $t7, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r15;
    // 0x8005D2FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005D300: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D304: sh          $t8, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = ctx->r24;
    // 0x8005D308: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D30C: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005D310: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8005D314: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8005D318: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8005D31C: nop

    // 0x8005D320: beq         $t0, $zero, L_8005D338
    if (ctx->r8 == 0) {
        // 0x8005D324: nop
    
            goto L_8005D338;
    }
    // 0x8005D324: nop

    // 0x8005D328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D32C: jal         0x8001B62C
    // 0x8005D330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8005D330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8005D334: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_8005D338:
    // 0x8005D338: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8005D33C: lb          $s0, 0x4798($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4798);
    // 0x8005D340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005D344: beq         $s0, $at, L_8005D360
    if (ctx->r16 == ctx->r1) {
        // 0x8005D348: nop
    
            goto L_8005D360;
    }
    // 0x8005D348: nop

    // 0x8005D34C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005D350: beq         $s0, $at, L_8005D3C4
    if (ctx->r16 == ctx->r1) {
        // 0x8005D354: nop
    
            goto L_8005D3C4;
    }
    // 0x8005D354: nop

    // 0x8005D358: b           L_8005D488
    // 0x8005D35C: nop

        goto L_8005D488;
    // 0x8005D35C: nop

L_8005D360:
    // 0x8005D360: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8005D364: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005D368: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D36C: nop

    // 0x8005D370: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8005D374: nop

    // 0x8005D378: bc1f        L_8005D3BC
    if (!c1cs) {
        // 0x8005D37C: nop
    
            goto L_8005D3BC;
    }
    // 0x8005D37C: nop

    // 0x8005D380: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8005D384: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D388: nop

    // 0x8005D38C: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x8005D390: nop

    // 0x8005D394: bc1f        L_8005D3BC
    if (!c1cs) {
        // 0x8005D398: nop
    
            goto L_8005D3BC;
    }
    // 0x8005D398: nop

    // 0x8005D39C: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8005D3A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D3A4: sh          $t1, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r9;
    // 0x8005D3A8: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8005D3AC: addiu       $t2, $t2, 0x289C
    ctx->r10 = ADD32(ctx->r10, 0X289C);
    // 0x8005D3B0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8005D3B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D3B8: sw          $t3, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r11;
L_8005D3BC:
    // 0x8005D3BC: b           L_8005D488
    // 0x8005D3C0: nop

        goto L_8005D488;
    // 0x8005D3C0: nop

L_8005D3C4:
    // 0x8005D3C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8005D3C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8005D3CC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D3D0: nop

    // 0x8005D3D4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8005D3D8: nop

    // 0x8005D3DC: bc1f        L_8005D424
    if (!c1cs) {
        // 0x8005D3E0: nop
    
            goto L_8005D424;
    }
    // 0x8005D3E0: nop

    // 0x8005D3E4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8005D3E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8005D3EC: nop

    // 0x8005D3F0: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8005D3F4: nop

    // 0x8005D3F8: bc1f        L_8005D424
    if (!c1cs) {
        // 0x8005D3FC: nop
    
            goto L_8005D424;
    }
    // 0x8005D3FC: nop

    // 0x8005D400: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x8005D404: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D408: sh          $t4, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r12;
    // 0x8005D40C: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8005D410: addiu       $t5, $t5, 0x289C
    ctx->r13 = ADD32(ctx->r13, 0X289C);
    // 0x8005D414: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8005D418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D41C: b           L_8005D480
    // 0x8005D420: sw          $t6, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r14;
        goto L_8005D480;
    // 0x8005D420: sw          $t6, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r14;
L_8005D424:
    // 0x8005D424: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8005D428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005D42C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D430: nop

    // 0x8005D434: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x8005D438: nop

    // 0x8005D43C: bc1f        L_8005D480
    if (!c1cs) {
        // 0x8005D440: nop
    
            goto L_8005D480;
    }
    // 0x8005D440: nop

    // 0x8005D444: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8005D448: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D44C: nop

    // 0x8005D450: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8005D454: nop

    // 0x8005D458: bc1f        L_8005D480
    if (!c1cs) {
        // 0x8005D45C: nop
    
            goto L_8005D480;
    }
    // 0x8005D45C: nop

    // 0x8005D460: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x8005D464: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D468: sh          $t7, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r15;
    // 0x8005D46C: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8005D470: addiu       $t8, $t8, 0x289C
    ctx->r24 = ADD32(ctx->r24, 0X289C);
    // 0x8005D474: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8005D478: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D47C: sw          $t9, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r25;
L_8005D480:
    // 0x8005D480: b           L_8005D488
    // 0x8005D484: nop

        goto L_8005D488;
    // 0x8005D484: nop

L_8005D488:
    // 0x8005D488: b           L_8005D9E8
    // 0x8005D48C: nop

        goto L_8005D9E8;
    // 0x8005D48C: nop

L_8005D490:
    // 0x8005D490: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005D494: lb          $t0, 0x4799($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4799);
    // 0x8005D498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005D49C: beq         $t0, $at, L_8005D4B0
    if (ctx->r8 == ctx->r1) {
        // 0x8005D4A0: nop
    
            goto L_8005D4B0;
    }
    // 0x8005D4A0: nop

    // 0x8005D4A4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8005D4A8: bne         $t0, $at, L_8005D5E8
    if (ctx->r8 != ctx->r1) {
        // 0x8005D4AC: nop
    
            goto L_8005D5E8;
    }
    // 0x8005D4AC: nop

L_8005D4B0:
    // 0x8005D4B0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005D4B4: lb          $t1, 0x4798($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4798);
    // 0x8005D4B8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D4BC: bne         $t1, $at, L_8005D5D0
    if (ctx->r9 != ctx->r1) {
        // 0x8005D4C0: nop
    
            goto L_8005D5D0;
    }
    // 0x8005D4C0: nop

    // 0x8005D4C4: b           L_8005D4CC
    // 0x8005D4C8: nop

        goto L_8005D4CC;
    // 0x8005D4C8: nop

L_8005D4CC:
    // 0x8005D4CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D4D0: jal         0x8001B62C
    // 0x8005D4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8005D4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8005D4D8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D4DC: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x8005D4E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005D4E4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D4E8: nop

    // 0x8005D4EC: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x8005D4F0: nop

    // 0x8005D4F4: bc1f        L_8005D51C
    if (!c1cs) {
        // 0x8005D4F8: nop
    
            goto L_8005D51C;
    }
    // 0x8005D4F8: nop

    // 0x8005D4FC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D504: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8005D508: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D50C: jal         0x800178D4
    // 0x8005D510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x8005D510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8005D514: b           L_8005D5C8
    // 0x8005D518: nop

        goto L_8005D5C8;
    // 0x8005D518: nop

L_8005D51C:
    // 0x8005D51C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8005D520: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005D524: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D528: nop

    // 0x8005D52C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8005D530: nop

    // 0x8005D534: bc1f        L_8005D55C
    if (!c1cs) {
        // 0x8005D538: nop
    
            goto L_8005D55C;
    }
    // 0x8005D538: nop

    // 0x8005D53C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D544: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8005D548: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D54C: jal         0x800178D4
    // 0x8005D550: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x8005D550: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8005D554: b           L_8005D5C8
    // 0x8005D558: nop

        goto L_8005D5C8;
    // 0x8005D558: nop

L_8005D55C:
    // 0x8005D55C: lui         $at, 0x438A
    ctx->r1 = S32(0X438A << 16);
    // 0x8005D560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D564: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D568: nop

    // 0x8005D56C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8005D570: nop

    // 0x8005D574: bc1f        L_8005D5C8
    if (!c1cs) {
        // 0x8005D578: nop
    
            goto L_8005D5C8;
    }
    // 0x8005D578: nop

    // 0x8005D57C: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x8005D580: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D584: sh          $t2, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r10;
    // 0x8005D588: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x8005D58C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D590: sh          $t3, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r11;
    // 0x8005D594: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D598: sh          $zero, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = 0;
    // 0x8005D59C: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x8005D5A0: addiu       $t4, $t4, 0x289C
    ctx->r12 = ADD32(ctx->r12, 0X289C);
    // 0x8005D5A4: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8005D5A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D5AC: sw          $t5, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r13;
    // 0x8005D5B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D5B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D5B8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8005D5BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D5C0: jal         0x800178D4
    // 0x8005D5C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x8005D5C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_8005D5C8:
    // 0x8005D5C8: b           L_8005D5E0
    // 0x8005D5CC: nop

        goto L_8005D5E0;
    // 0x8005D5CC: nop

L_8005D5D0:
    // 0x8005D5D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D5D4: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005D5D8: b           L_8005D5E0
    // 0x8005D5DC: nop

        goto L_8005D5E0;
    // 0x8005D5DC: nop

L_8005D5E0:
    // 0x8005D5E0: b           L_8005D9E8
    // 0x8005D5E4: nop

        goto L_8005D9E8;
    // 0x8005D5E4: nop

L_8005D5E8:
    // 0x8005D5E8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005D5EC: lb          $t6, 0x4799($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4799);
    // 0x8005D5F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005D5F4: beq         $t6, $at, L_8005D608
    if (ctx->r14 == ctx->r1) {
        // 0x8005D5F8: nop
    
            goto L_8005D608;
    }
    // 0x8005D5F8: nop

    // 0x8005D5FC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8005D600: bne         $t6, $at, L_8005D740
    if (ctx->r14 != ctx->r1) {
        // 0x8005D604: nop
    
            goto L_8005D740;
    }
    // 0x8005D604: nop

L_8005D608:
    // 0x8005D608: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005D60C: lb          $t7, 0x4798($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4798);
    // 0x8005D610: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D614: bne         $t7, $at, L_8005D728
    if (ctx->r15 != ctx->r1) {
        // 0x8005D618: nop
    
            goto L_8005D728;
    }
    // 0x8005D618: nop

    // 0x8005D61C: b           L_8005D624
    // 0x8005D620: nop

        goto L_8005D624;
    // 0x8005D620: nop

L_8005D624:
    // 0x8005D624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D628: jal         0x8001B62C
    // 0x8005D62C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x8005D62C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8005D630: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D634: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8005D638: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005D63C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D640: nop

    // 0x8005D644: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x8005D648: nop

    // 0x8005D64C: bc1f        L_8005D674
    if (!c1cs) {
        // 0x8005D650: nop
    
            goto L_8005D674;
    }
    // 0x8005D650: nop

    // 0x8005D654: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D65C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8005D660: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D664: jal         0x800178D4
    // 0x8005D668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x8005D668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8005D66C: b           L_8005D720
    // 0x8005D670: nop

        goto L_8005D720;
    // 0x8005D670: nop

L_8005D674:
    // 0x8005D674: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8005D678: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005D67C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D680: nop

    // 0x8005D684: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8005D688: nop

    // 0x8005D68C: bc1f        L_8005D6B4
    if (!c1cs) {
        // 0x8005D690: nop
    
            goto L_8005D6B4;
    }
    // 0x8005D690: nop

    // 0x8005D694: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D69C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8005D6A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D6A4: jal         0x800178D4
    // 0x8005D6A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x8005D6A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x8005D6AC: b           L_8005D720
    // 0x8005D6B0: nop

        goto L_8005D720;
    // 0x8005D6B0: nop

L_8005D6B4:
    // 0x8005D6B4: lui         $at, 0x438A
    ctx->r1 = S32(0X438A << 16);
    // 0x8005D6B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D6BC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D6C0: nop

    // 0x8005D6C4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8005D6C8: nop

    // 0x8005D6CC: bc1f        L_8005D720
    if (!c1cs) {
        // 0x8005D6D0: nop
    
            goto L_8005D720;
    }
    // 0x8005D6D0: nop

    // 0x8005D6D4: addiu       $t8, $zero, 0xB0
    ctx->r24 = ADD32(0, 0XB0);
    // 0x8005D6D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D6DC: sh          $t8, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r24;
    // 0x8005D6E0: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x8005D6E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D6E8: sh          $t9, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r25;
    // 0x8005D6EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D6F0: sh          $zero, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = 0;
    // 0x8005D6F4: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8005D6F8: addiu       $t0, $t0, 0x289C
    ctx->r8 = ADD32(ctx->r8, 0X289C);
    // 0x8005D6FC: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8005D700: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D704: sw          $t1, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r9;
    // 0x8005D708: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D70C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D710: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8005D714: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D718: jal         0x800178D4
    // 0x8005D71C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x8005D71C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_8005D720:
    // 0x8005D720: b           L_8005D738
    // 0x8005D724: nop

        goto L_8005D738;
    // 0x8005D724: nop

L_8005D728:
    // 0x8005D728: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D72C: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005D730: b           L_8005D738
    // 0x8005D734: nop

        goto L_8005D738;
    // 0x8005D734: nop

L_8005D738:
    // 0x8005D738: b           L_8005D9E8
    // 0x8005D73C: nop

        goto L_8005D9E8;
    // 0x8005D73C: nop

L_8005D740:
    // 0x8005D740: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005D744: lb          $t2, 0x4799($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4799);
    // 0x8005D748: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005D74C: beq         $t2, $at, L_8005D760
    if (ctx->r10 == ctx->r1) {
        // 0x8005D750: nop
    
            goto L_8005D760;
    }
    // 0x8005D750: nop

    // 0x8005D754: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D758: bne         $t2, $at, L_8005D898
    if (ctx->r10 != ctx->r1) {
        // 0x8005D75C: nop
    
            goto L_8005D898;
    }
    // 0x8005D75C: nop

L_8005D760:
    // 0x8005D760: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005D764: lb          $t3, 0x4798($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4798);
    // 0x8005D768: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D76C: bne         $t3, $at, L_8005D880
    if (ctx->r11 != ctx->r1) {
        // 0x8005D770: nop
    
            goto L_8005D880;
    }
    // 0x8005D770: nop

    // 0x8005D774: b           L_8005D77C
    // 0x8005D778: nop

        goto L_8005D77C;
    // 0x8005D778: nop

L_8005D77C:
    // 0x8005D77C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D780: jal         0x8001B62C
    // 0x8005D784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_9;
    // 0x8005D784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8005D788: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D78C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8005D790: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005D794: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D798: nop

    // 0x8005D79C: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x8005D7A0: nop

    // 0x8005D7A4: bc1f        L_8005D7CC
    if (!c1cs) {
        // 0x8005D7A8: nop
    
            goto L_8005D7CC;
    }
    // 0x8005D7A8: nop

    // 0x8005D7AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D7B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D7B4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8005D7B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D7BC: jal         0x800178D4
    // 0x8005D7C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_10;
    // 0x8005D7C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x8005D7C4: b           L_8005D878
    // 0x8005D7C8: nop

        goto L_8005D878;
    // 0x8005D7C8: nop

L_8005D7CC:
    // 0x8005D7CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8005D7D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005D7D4: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D7D8: nop

    // 0x8005D7DC: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8005D7E0: nop

    // 0x8005D7E4: bc1f        L_8005D80C
    if (!c1cs) {
        // 0x8005D7E8: nop
    
            goto L_8005D80C;
    }
    // 0x8005D7E8: nop

    // 0x8005D7EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D7F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D7F4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8005D7F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D7FC: jal         0x800178D4
    // 0x8005D800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x8005D800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8005D804: b           L_8005D878
    // 0x8005D808: nop

        goto L_8005D878;
    // 0x8005D808: nop

L_8005D80C:
    // 0x8005D80C: lui         $at, 0x438A
    ctx->r1 = S32(0X438A << 16);
    // 0x8005D810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D814: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D818: nop

    // 0x8005D81C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8005D820: nop

    // 0x8005D824: bc1f        L_8005D878
    if (!c1cs) {
        // 0x8005D828: nop
    
            goto L_8005D878;
    }
    // 0x8005D828: nop

    // 0x8005D82C: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x8005D830: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D834: sh          $t4, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r12;
    // 0x8005D838: addiu       $t5, $zero, 0xC0
    ctx->r13 = ADD32(0, 0XC0);
    // 0x8005D83C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D840: sh          $t5, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r13;
    // 0x8005D844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D848: sh          $zero, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = 0;
    // 0x8005D84C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8005D850: addiu       $t6, $t6, 0x289C
    ctx->r14 = ADD32(ctx->r14, 0X289C);
    // 0x8005D854: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8005D858: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D85C: sw          $t7, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r15;
    // 0x8005D860: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D868: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8005D86C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D870: jal         0x800178D4
    // 0x8005D874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x8005D874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_8005D878:
    // 0x8005D878: b           L_8005D890
    // 0x8005D87C: nop

        goto L_8005D890;
    // 0x8005D87C: nop

L_8005D880:
    // 0x8005D880: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D884: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005D888: b           L_8005D890
    // 0x8005D88C: nop

        goto L_8005D890;
    // 0x8005D88C: nop

L_8005D890:
    // 0x8005D890: b           L_8005D9E8
    // 0x8005D894: nop

        goto L_8005D9E8;
    // 0x8005D894: nop

L_8005D898:
    // 0x8005D898: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005D89C: lb          $t8, 0x4799($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4799);
    // 0x8005D8A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8005D8A4: beq         $t8, $at, L_8005D8B8
    if (ctx->r24 == ctx->r1) {
        // 0x8005D8A8: nop
    
            goto L_8005D8B8;
    }
    // 0x8005D8A8: nop

    // 0x8005D8AC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8005D8B0: bne         $t8, $at, L_8005D9E8
    if (ctx->r24 != ctx->r1) {
        // 0x8005D8B4: nop
    
            goto L_8005D9E8;
    }
    // 0x8005D8B4: nop

L_8005D8B8:
    // 0x8005D8B8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005D8BC: lb          $t9, 0x4798($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4798);
    // 0x8005D8C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D8C4: bne         $t9, $at, L_8005D9D8
    if (ctx->r25 != ctx->r1) {
        // 0x8005D8C8: nop
    
            goto L_8005D9D8;
    }
    // 0x8005D8C8: nop

    // 0x8005D8CC: b           L_8005D8D4
    // 0x8005D8D0: nop

        goto L_8005D8D4;
    // 0x8005D8D0: nop

L_8005D8D4:
    // 0x8005D8D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D8D8: jal         0x8001B62C
    // 0x8005D8DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_13;
    // 0x8005D8DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8005D8E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D8E4: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x8005D8E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005D8EC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D8F0: nop

    // 0x8005D8F4: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x8005D8F8: nop

    // 0x8005D8FC: bc1f        L_8005D924
    if (!c1cs) {
        // 0x8005D900: nop
    
            goto L_8005D924;
    }
    // 0x8005D900: nop

    // 0x8005D904: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D90C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8005D910: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D914: jal         0x800178D4
    // 0x8005D918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_14;
    // 0x8005D918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x8005D91C: b           L_8005D9D0
    // 0x8005D920: nop

        goto L_8005D9D0;
    // 0x8005D920: nop

L_8005D924:
    // 0x8005D924: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8005D928: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005D92C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D930: nop

    // 0x8005D934: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8005D938: nop

    // 0x8005D93C: bc1f        L_8005D964
    if (!c1cs) {
        // 0x8005D940: nop
    
            goto L_8005D964;
    }
    // 0x8005D940: nop

    // 0x8005D944: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D94C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8005D950: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D954: jal         0x800178D4
    // 0x8005D958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_15;
    // 0x8005D958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x8005D95C: b           L_8005D9D0
    // 0x8005D960: nop

        goto L_8005D9D0;
    // 0x8005D960: nop

L_8005D964:
    // 0x8005D964: lui         $at, 0x438A
    ctx->r1 = S32(0X438A << 16);
    // 0x8005D968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D96C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D970: nop

    // 0x8005D974: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8005D978: nop

    // 0x8005D97C: bc1f        L_8005D9D0
    if (!c1cs) {
        // 0x8005D980: nop
    
            goto L_8005D9D0;
    }
    // 0x8005D980: nop

    // 0x8005D984: addiu       $t0, $zero, 0x90
    ctx->r8 = ADD32(0, 0X90);
    // 0x8005D988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D98C: sh          $t0, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r8;
    // 0x8005D990: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x8005D994: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D998: sh          $t1, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r9;
    // 0x8005D99C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D9A0: sh          $zero, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = 0;
    // 0x8005D9A4: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8005D9A8: addiu       $t2, $t2, 0x289C
    ctx->r10 = ADD32(ctx->r10, 0X289C);
    // 0x8005D9AC: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x8005D9B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D9B4: sw          $t3, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r11;
    // 0x8005D9B8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005D9BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D9C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8005D9C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8005D9C8: jal         0x800178D4
    // 0x8005D9CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_16;
    // 0x8005D9CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
L_8005D9D0:
    // 0x8005D9D0: b           L_8005D9E8
    // 0x8005D9D4: nop

        goto L_8005D9E8;
    // 0x8005D9D4: nop

L_8005D9D8:
    // 0x8005D9D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005D9DC: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005D9E0: b           L_8005D9E8
    // 0x8005D9E4: nop

        goto L_8005D9E8;
    // 0x8005D9E4: nop

L_8005D9E8:
    // 0x8005D9E8: b           L_8005D9F0
    // 0x8005D9EC: nop

        goto L_8005D9F0;
    // 0x8005D9EC: nop

L_8005D9F0:
    // 0x8005D9F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005D9F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005D9F8: jr          $ra
    // 0x8005D9FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005D9FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F0978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F0978: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F097C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F0980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F0984: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F0988: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F098C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F0990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F0994: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F0998: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F099C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F09A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F09A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F09A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800F09AC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F09B0: nop

    // 0x800F09B4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F09B8: nop

    // 0x800F09BC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800F09C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F09C4: nop

    // 0x800F09C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F09CC: nop

    // 0x800F09D0: bne         $t3, $zero, L_800F0A6C
    if (ctx->r11 != 0) {
        // 0x800F09D4: nop
    
            goto L_800F0A6C;
    }
    // 0x800F09D4: nop

    // 0x800F09D8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F09DC: nop

    // 0x800F09E0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F09E4: nop

    // 0x800F09E8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F09EC: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F09F0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F09F4: nop

    // 0x800F09F8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F09FC: nop

    // 0x800F0A00: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F0A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0A08: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F0A0C: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F0A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0A14: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F0A18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F0A1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800F0A20: jal         0x8001C0EC
    // 0x800F0A24: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F0A24: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F0A28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0A2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0A30: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0A34: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F0A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F0A3C: jal         0x8001ABF4
    // 0x800F0A40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800F0A40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800F0A44: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F0A48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0A4C: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x800F0A50: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F0A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F0A58: jal         0x8001ABF4
    // 0x800F0A5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F0A5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800F0A60: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F0A64: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F0A68: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
L_800F0A6C:
    // 0x800F0A6C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F0A70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F0A74: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F0A78: nop

    // 0x800F0A7C: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800F0A80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0A88: jal         0x80028FA0
    // 0x800F0A8C: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800F0A8C: nop

    after_3:
    // 0x800F0A90: beq         $v0, $zero, L_800F0AA8
    if (ctx->r2 == 0) {
        // 0x800F0A94: nop
    
            goto L_800F0AA8;
    }
    // 0x800F0A94: nop

    // 0x800F0A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0AA0: jal         0x80029B60
    // 0x800F0AA4: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800F0AA4: nop

    after_4:
L_800F0AA8:
    // 0x800F0AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0AB0: jal         0x8002A8B4
    // 0x800F0AB4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x800F0AB4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_5:
    // 0x800F0AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0AC0: jal         0x80029C40
    // 0x800F0AC4: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800F0AC4: nop

    after_6:
    // 0x800F0AC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F0ACC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F0AD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0AD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0AD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F0ADC: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F0AE0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F0AE4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F0AE8: jal         0x80029018
    // 0x800F0AEC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800F0AEC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x800F0AF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F0AF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F0AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0B00: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800F0B04: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F0B08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F0B0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F0B10: jal         0x800295C0
    // 0x800F0B14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x800F0B14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800F0B18: beq         $v0, $zero, L_800F0B30
    if (ctx->r2 == 0) {
        // 0x800F0B1C: nop
    
            goto L_800F0B30;
    }
    // 0x800F0B1C: nop

    // 0x800F0B20: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F0B24: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F0B28: b           L_800F0B40
    // 0x800F0B2C: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
        goto L_800F0B40;
    // 0x800F0B2C: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
L_800F0B30:
    // 0x800F0B30: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F0B34: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F0B38: nop

    // 0x800F0B3C: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
L_800F0B40:
    // 0x800F0B40: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F0B44: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800F0B48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F0B4C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800F0B50: nop

    // 0x800F0B54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F0B58: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800F0B5C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800F0B60: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F0B64: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F0B68: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F0B6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F0B70: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F0B74: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800F0B78: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F0B7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0B80: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F0B84: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F0B88: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F0B8C: nop

    // 0x800F0B90: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800F0B94: nop

    // 0x800F0B98: bne         $t1, $zero, L_800F0CD0
    if (ctx->r9 != 0) {
        // 0x800F0B9C: nop
    
            goto L_800F0CD0;
    }
    // 0x800F0B9C: nop

    // 0x800F0BA0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F0BA4: nop

    // 0x800F0BA8: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800F0BAC: nop

    // 0x800F0BB0: bne         $t3, $zero, L_800F0BE8
    if (ctx->r11 != 0) {
        // 0x800F0BB4: nop
    
            goto L_800F0BE8;
    }
    // 0x800F0BB4: nop

    // 0x800F0BB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F0BBC: nop

    // 0x800F0BC0: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800F0BC4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F0BC8: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800F0BCC: sh          $t6, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r14;
    // 0x800F0BD0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F0BD4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800F0BD8: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x800F0BDC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F0BE0: b           L_800F0CC8
    // 0x800F0BE4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_800F0CC8;
    // 0x800F0BE4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800F0BE8:
    // 0x800F0BE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0BEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0BF0: jal         0x8002A2EC
    // 0x800F0BF4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_9;
    // 0x800F0BF4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_9:
    // 0x800F0BF8: beq         $v0, $zero, L_800F0C98
    if (ctx->r2 == 0) {
        // 0x800F0BFC: nop
    
            goto L_800F0C98;
    }
    // 0x800F0BFC: nop

    // 0x800F0C00: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F0C04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F0C08: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800F0C0C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800F0C10: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800F0C14: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F0C18: addiu       $a1, $a1, 0x4414
    ctx->r5 = ADD32(ctx->r5, 0X4414);
    // 0x800F0C1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F0C20: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800F0C24: jal         0x80027464
    // 0x800F0C28: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x800F0C28: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x800F0C2C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F0C30: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800F0C34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F0C38: beq         $t1, $at, L_800F0C90
    if (ctx->r9 == ctx->r1) {
        // 0x800F0C3C: nop
    
            goto L_800F0C90;
    }
    // 0x800F0C3C: nop

    // 0x800F0C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0C48: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0C4C: jal         0x80026F10
    // 0x800F0C50: nop

    func_80026F10(rdram, ctx);
        goto after_11;
    // 0x800F0C50: nop

    after_11:
    // 0x800F0C54: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0C58: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0C5C: addiu       $a3, $a3, -0x69C8
    ctx->r7 = ADD32(ctx->r7, -0X69C8);
    // 0x800F0C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F0C64: jal         0x8001ABF4
    // 0x800F0C68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x800F0C68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x800F0C6C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F0C70: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x800F0C74: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800F0C78: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F0C7C: nop

    // 0x800F0C80: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x800F0C84: nop

    // 0x800F0C88: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x800F0C8C: sh          $t4, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r12;
L_800F0C90:
    // 0x800F0C90: b           L_800F0CC8
    // 0x800F0C94: nop

        goto L_800F0CC8;
    // 0x800F0C94: nop

L_800F0C98:
    // 0x800F0C98: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F0C9C: nop

    // 0x800F0CA0: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800F0CA4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F0CA8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800F0CAC: sh          $t7, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r15;
    // 0x800F0CB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F0CB4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800F0CB8: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800F0CBC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F0CC0: nop

    // 0x800F0CC4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F0CC8:
    // 0x800F0CC8: b           L_800F0CE8
    // 0x800F0CCC: nop

        goto L_800F0CE8;
    // 0x800F0CCC: nop

L_800F0CD0:
    // 0x800F0CD0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F0CD4: nop

    // 0x800F0CD8: lh          $t6, 0xA6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA6);
    // 0x800F0CDC: nop

    // 0x800F0CE0: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x800F0CE4: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
L_800F0CE8:
    // 0x800F0CE8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800F0CEC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F0CF0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800F0CF4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F0CF8: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800F0CFC: lwc1        $f8, 0x24($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800F0D00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F0D04: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F0D08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F0D0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F0D10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0D14: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F0D18: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x800F0D1C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800F0D20: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F0D24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F0D28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F0D2C: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F0D30: lwc1        $f18, 0x28($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800F0D34: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F0D38: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F0D3C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F0D40: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F0D44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0D48: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F0D4C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x800F0D50: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800F0D54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F0D58: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800F0D5C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F0D60: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800F0D64: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800F0D68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F0D6C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F0D70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F0D74: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F0D78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0D7C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F0D80: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x800F0D84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0D8C: jal         0x8002A2EC
    // 0x800F0D90: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_13;
    // 0x800F0D90: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_13:
    // 0x800F0D94: beq         $v0, $zero, L_800F0DA4
    if (ctx->r2 == 0) {
        // 0x800F0D98: nop
    
            goto L_800F0DA4;
    }
    // 0x800F0D98: nop

    // 0x800F0D9C: b           L_800F0DBC
    // 0x800F0DA0: nop

        goto L_800F0DBC;
    // 0x800F0DA0: nop

L_800F0DA4:
    // 0x800F0DA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F0DA8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800F0DAC: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x800F0DB0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F0DB4: nop

    // 0x800F0DB8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800F0DBC:
    // 0x800F0DBC: b           L_800F0DC4
    // 0x800F0DC0: nop

        goto L_800F0DC4;
    // 0x800F0DC0: nop

L_800F0DC4:
    // 0x800F0DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F0DC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800F0DCC: jr          $ra
    // 0x800F0DD0: nop

    return;
    // 0x800F0DD0: nop

;}
RECOMP_FUNC void func_800DB0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB0F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DB0FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DB100: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB104: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB108: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB10C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB114: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB118: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB11C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB120: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB124: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB128: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DB12C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DB130: nop

    // 0x800DB134: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB138: nop

    // 0x800DB13C: bne         $t1, $zero, L_800DB180
    if (ctx->r9 != 0) {
        // 0x800DB140: nop
    
            goto L_800DB180;
    }
    // 0x800DB140: nop

    // 0x800DB144: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DB148: nop

    // 0x800DB14C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB150: nop

    // 0x800DB154: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB158: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB15C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB160: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DB164: addiu       $t5, $t5, -0x7164
    ctx->r13 = ADD32(ctx->r13, -0X7164);
    // 0x800DB168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB16C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DB170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DB174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800DB178: jal         0x8001C0EC
    // 0x800DB17C: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DB17C: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    after_0:
L_800DB180:
    // 0x800DB180: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB188: jal         0x8002A8B4
    // 0x800DB18C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800DB18C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x800DB190: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DB194: nop

    // 0x800DB198: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800DB19C: nop

    // 0x800DB1A0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x800DB1A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB1A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB1AC: jal         0x8001B4AC
    // 0x800DB1B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800DB1B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800DB1B4: beq         $v0, $zero, L_800DB1D4
    if (ctx->r2 == 0) {
        // 0x800DB1B8: nop
    
            goto L_800DB1D4;
    }
    // 0x800DB1B8: nop

    // 0x800DB1BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DB1C0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800DB1C4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800DB1C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800DB1CC: nop

    // 0x800DB1D0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800DB1D4:
    // 0x800DB1D4: b           L_800DB1DC
    // 0x800DB1D8: nop

        goto L_800DB1DC;
    // 0x800DB1D8: nop

L_800DB1DC:
    // 0x800DB1DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB1E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DB1E4: jr          $ra
    // 0x800DB1E8: nop

    return;
    // 0x800DB1E8: nop

;}
RECOMP_FUNC void func_800A169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A169C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A16A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A16A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A16A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A16AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A16B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A16B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A16B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A16BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A16C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A16C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A16C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A16CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A16D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A16D4: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x800A16D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A16DC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800A16E0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800A16E4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800A16E8: nop

    // 0x800A16EC: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x800A16F0: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x800A16F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A16F8: beq         $t5, $at, L_800A17C4
    if (ctx->r13 == ctx->r1) {
        // 0x800A16FC: nop
    
            goto L_800A17C4;
    }
    // 0x800A16FC: nop

    // 0x800A1700: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x800A1704: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A1708: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A170C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1714: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1718: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A171C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A1720: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A1724: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800A1728: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800A172C: lw          $t1, 0x7A64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A64);
    // 0x800A1730: nop

    // 0x800A1734: bne         $t1, $zero, L_800A17C4
    if (ctx->r9 != 0) {
        // 0x800A1738: nop
    
            goto L_800A17C4;
    }
    // 0x800A1738: nop

    // 0x800A173C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A1740: nop

    // 0x800A1744: lh          $t2, 0x104($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X104);
    // 0x800A1748: nop

    // 0x800A174C: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800A1750: bne         $at, $zero, L_800A1764
    if (ctx->r1 != 0) {
        // 0x800A1754: nop
    
            goto L_800A1764;
    }
    // 0x800A1754: nop

    // 0x800A1758: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x800A175C: bne         $at, $zero, L_800A178C
    if (ctx->r1 != 0) {
        // 0x800A1760: nop
    
            goto L_800A178C;
    }
    // 0x800A1760: nop

L_800A1764:
    // 0x800A1764: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A1768: nop

    // 0x800A176C: lh          $t4, 0x104($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X104);
    // 0x800A1770: nop

    // 0x800A1774: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x800A1778: bne         $at, $zero, L_800A17C4
    if (ctx->r1 != 0) {
        // 0x800A177C: nop
    
            goto L_800A17C4;
    }
    // 0x800A177C: nop

    // 0x800A1780: slti        $at, $t4, 0xE
    ctx->r1 = SIGNED(ctx->r12) < 0XE ? 1 : 0;
    // 0x800A1784: beq         $at, $zero, L_800A17C4
    if (ctx->r1 == 0) {
        // 0x800A1788: nop
    
            goto L_800A17C4;
    }
    // 0x800A1788: nop

L_800A178C:
    // 0x800A178C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1790: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1794: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800A1798: jal         0x800281A4
    // 0x800A179C: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800A179C: nop

    after_0:
    // 0x800A17A0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A17A4: nop

    // 0x800A17A8: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800A17AC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800A17B0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A17B4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A17B8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800A17BC: nop

    // 0x800A17C0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800A17C4:
    // 0x800A17C4: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x800A17C8: b           L_800A17D8
    // 0x800A17CC: nop

        goto L_800A17D8;
    // 0x800A17CC: nop

    // 0x800A17D0: b           L_800A17D8
    // 0x800A17D4: nop

        goto L_800A17D8;
    // 0x800A17D4: nop

L_800A17D8:
    // 0x800A17D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A17DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A17E0: jr          $ra
    // 0x800A17E4: nop

    return;
    // 0x800A17E4: nop

;}
RECOMP_FUNC void func_8006BE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BE9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006BEA0: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006BEA4: nop

    // 0x8006BEA8: bne         $t6, $zero, L_8006BECC
    if (ctx->r14 != 0) {
        // 0x8006BEAC: nop
    
            goto L_8006BECC;
    }
    // 0x8006BEAC: nop

    // 0x8006BEB0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006BEB4: lb          $t7, 0x75EE($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X75EE);
    // 0x8006BEB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BEBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006BEC0: sb          $t8, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r24;
    // 0x8006BEC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BEC8: sh          $zero, 0x7958($at)
    MEM_H(0X7958, ctx->r1) = 0;
L_8006BECC:
    // 0x8006BECC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8006BED0: lh          $t9, 0x4C22($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C22);
    // 0x8006BED4: nop

    // 0x8006BED8: beq         $t9, $zero, L_8006BF4C
    if (ctx->r25 == 0) {
        // 0x8006BEDC: nop
    
            goto L_8006BF4C;
    }
    // 0x8006BEDC: nop

    // 0x8006BEE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006BEE4: lhu         $t0, 0x7958($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7958);
    // 0x8006BEE8: nop

    // 0x8006BEEC: bne         $t0, $zero, L_8006BF28
    if (ctx->r8 != 0) {
        // 0x8006BEF0: nop
    
            goto L_8006BF28;
    }
    // 0x8006BEF0: nop

    // 0x8006BEF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006BEF8: lwc1        $f4, 0x4F28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8006BEFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006BF00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006BF04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006BF08: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006BF0C: swc1        $f8, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f8.u32l;
    // 0x8006BF10: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006BF14: lhu         $t1, 0x7958($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7958);
    // 0x8006BF18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BF1C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8006BF20: b           L_8006BF4C
    // 0x8006BF24: sh          $t2, 0x7958($at)
    MEM_H(0X7958, ctx->r1) = ctx->r10;
        goto L_8006BF4C;
    // 0x8006BF24: sh          $t2, 0x7958($at)
    MEM_H(0X7958, ctx->r1) = ctx->r10;
L_8006BF28:
    // 0x8006BF28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006BF2C: lwc1        $f10, 0x4F28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8006BF30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006BF34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006BF38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006BF3C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8006BF40: swc1        $f18, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f18.u32l;
    // 0x8006BF44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BF48: sh          $zero, 0x7958($at)
    MEM_H(0X7958, ctx->r1) = 0;
L_8006BF4C:
    // 0x8006BF4C: jr          $ra
    // 0x8006BF50: nop

    return;
    // 0x8006BF50: nop

    // 0x8006BF54: jr          $ra
    // 0x8006BF58: nop

    return;
    // 0x8006BF58: nop

;}
RECOMP_FUNC void func_8009B5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B5F0: jr          $ra
    // 0x8009B5F4: nop

    return;
    // 0x8009B5F4: nop

    // 0x8009B5F8: jr          $ra
    // 0x8009B5FC: nop

    return;
    // 0x8009B5FC: nop

;}
RECOMP_FUNC void func_800A1FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A2008: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A200C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A2010: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A2014: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2018: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A201C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2020: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2024: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A2028: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A202C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A2030: bne         $t8, $at, L_800A2040
    if (ctx->r24 != ctx->r1) {
        // 0x800A2034: nop
    
            goto L_800A2040;
    }
    // 0x800A2034: nop

    // 0x800A2038: jal         0x800A1FBC
    // 0x800A203C: nop

    func_800A1FBC(rdram, ctx);
        goto after_0;
    // 0x800A203C: nop

    after_0:
L_800A2040:
    // 0x800A2040: b           L_800A2048
    // 0x800A2044: nop

        goto L_800A2048;
    // 0x800A2044: nop

L_800A2048:
    // 0x800A2048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A204C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2050: jr          $ra
    // 0x800A2054: nop

    return;
    // 0x800A2054: nop

;}
RECOMP_FUNC void func_80091CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091CC8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091CCC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091CD0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091CD4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091CD8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091CDC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091CE0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091CE4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091CE8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091CEC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091CF0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091CF4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091CF8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091CFC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091D00: addiu       $a1, $a1, 0x1618
    ctx->r5 = ADD32(ctx->r5, 0X1618);
    // 0x80091D04: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091D08: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091D10: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091D14: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091D18: jal         0x80027464
    // 0x80091D1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091D1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091D20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091D24: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091D28: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091D2C: addiu       $a3, $a3, 0x2BD0
    ctx->r7 = ADD32(ctx->r7, 0X2BD0);
    // 0x80091D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091D34: jal         0x8001ABF4
    // 0x80091D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80091D3C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091D40: addiu       $a3, $a3, 0x2BD0
    ctx->r7 = ADD32(ctx->r7, 0X2BD0);
    // 0x80091D44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091D48: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80091D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80091D50: jal         0x8001ABF4
    // 0x80091D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80091D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80091D58: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091D5C: addiu       $a3, $a3, 0x2BD0
    ctx->r7 = ADD32(ctx->r7, 0X2BD0);
    // 0x80091D60: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091D64: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80091D68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80091D6C: jal         0x8001ABF4
    // 0x80091D70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80091D70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80091D74: b           L_80091D7C
    // 0x80091D78: nop

        goto L_80091D7C;
    // 0x80091D78: nop

L_80091D7C:
    // 0x80091D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091D84: jr          $ra
    // 0x80091D88: nop

    return;
    // 0x80091D88: nop

;}
RECOMP_FUNC void func_800FBAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBAB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FBABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FBAC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FBAC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FBAC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FBACC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800FBAD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FBAD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBAD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FBADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBAE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FBAE4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800FBAE8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800FBAEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FBAF0: beq         $s0, $at, L_800FBB0C
    if (ctx->r16 == ctx->r1) {
        // 0x800FBAF4: nop
    
            goto L_800FBB0C;
    }
    // 0x800FBAF4: nop

    // 0x800FBAF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FBAFC: beq         $s0, $at, L_800FBB1C
    if (ctx->r16 == ctx->r1) {
        // 0x800FBB00: nop
    
            goto L_800FBB1C;
    }
    // 0x800FBB00: nop

    // 0x800FBB04: b           L_800FBB2C
    // 0x800FBB08: nop

        goto L_800FBB2C;
    // 0x800FBB08: nop

L_800FBB0C:
    // 0x800FBB0C: jal         0x800FB804
    // 0x800FBB10: nop

    func_800FB804(rdram, ctx);
        goto after_0;
    // 0x800FBB10: nop

    after_0:
    // 0x800FBB14: b           L_800FBB34
    // 0x800FBB18: nop

        goto L_800FBB34;
    // 0x800FBB18: nop

L_800FBB1C:
    // 0x800FBB1C: jal         0x800FBA24
    // 0x800FBB20: nop

    func_800FBA24(rdram, ctx);
        goto after_1;
    // 0x800FBB20: nop

    after_1:
    // 0x800FBB24: b           L_800FBB34
    // 0x800FBB28: nop

        goto L_800FBB34;
    // 0x800FBB28: nop

L_800FBB2C:
    // 0x800FBB2C: b           L_800FBB34
    // 0x800FBB30: nop

        goto L_800FBB34;
    // 0x800FBB30: nop

L_800FBB34:
    // 0x800FBB34: b           L_800FBB3C
    // 0x800FBB38: nop

        goto L_800FBB3C;
    // 0x800FBB38: nop

L_800FBB3C:
    // 0x800FBB3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBB40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FBB44: jr          $ra
    // 0x800FBB48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FBB48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B75C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B760: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B764: nop

    // 0x8006B768: bne         $t6, $zero, L_8006B77C
    if (ctx->r14 != 0) {
        // 0x8006B76C: nop
    
            goto L_8006B77C;
    }
    // 0x8006B76C: nop

    // 0x8006B770: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B778: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
L_8006B77C:
    // 0x8006B77C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B780: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x8006B784: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B788: jal         0x80017BEC
    // 0x8006B78C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B78C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006B790: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B794: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x8006B798: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B79C: jal         0x80017CFC
    // 0x8006B7A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017CFC(rdram, ctx);
        goto after_1;
    // 0x8006B7A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8006B7A4: b           L_8006B7AC
    // 0x8006B7A8: nop

        goto L_8006B7AC;
    // 0x8006B7A8: nop

L_8006B7AC:
    // 0x8006B7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B7B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B7B4: jr          $ra
    // 0x8006B7B8: nop

    return;
    // 0x8006B7B8: nop

;}
RECOMP_FUNC void func_800FAE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAE10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FAE14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FAE18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FAE1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FAE20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FAE24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FAE28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAE2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FAE30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAE34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FAE38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FAE3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FAE40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FAE44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FAE48: nop

    // 0x800FAE4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FAE50: nop

    // 0x800FAE54: bne         $t1, $zero, L_800FAEA8
    if (ctx->r9 != 0) {
        // 0x800FAE58: nop
    
            goto L_800FAEA8;
    }
    // 0x800FAE58: nop

    // 0x800FAE5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FAE60: nop

    // 0x800FAE64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FAE68: nop

    // 0x800FAE6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FAE70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FAE74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAE78: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800FAE7C: addiu       $t5, $t5, 0x6EC4
    ctx->r13 = ADD32(ctx->r13, 0X6EC4);
    // 0x800FAE80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAE84: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800FAE88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FAE8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FAE90: jal         0x8001C0EC
    // 0x800FAE94: addiu       $a3, $zero, 0x19E
    ctx->r7 = ADD32(0, 0X19E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800FAE94: addiu       $a3, $zero, 0x19E
    ctx->r7 = ADD32(0, 0X19E);
    after_0:
    // 0x800FAE98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAE9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAEA0: jal         0x8001BB34
    // 0x800FAEA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800FAEA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800FAEA8:
    // 0x800FAEA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAEAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAEB0: jal         0x8002A1FC
    // 0x800FAEB4: lui         $a1, 0x4425
    ctx->r5 = S32(0X4425 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800FAEB4: lui         $a1, 0x4425
    ctx->r5 = S32(0X4425 << 16);
    after_2:
    // 0x800FAEB8: beq         $v0, $zero, L_800FAEF8
    if (ctx->r2 == 0) {
        // 0x800FAEBC: nop
    
            goto L_800FAEF8;
    }
    // 0x800FAEBC: nop

    // 0x800FAEC0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800FAEC4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800FAEC8: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800FAECC: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800FAED0: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x800FAED4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800FAED8: jal         0x8002AE38
    // 0x800FAEDC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8002AE38(rdram, ctx);
        goto after_3;
    // 0x800FAEDC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x800FAEE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FAEE4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800FAEE8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800FAEEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FAEF0: nop

    // 0x800FAEF4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800FAEF8:
    // 0x800FAEF8: b           L_800FAF00
    // 0x800FAEFC: nop

        goto L_800FAF00;
    // 0x800FAEFC: nop

L_800FAF00:
    // 0x800FAF00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAF04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FAF08: jr          $ra
    // 0x800FAF0C: nop

    return;
    // 0x800FAF0C: nop

;}
RECOMP_FUNC void func_80079778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079778: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007977C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80079780: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079784: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80079788: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8007978C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80079790: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80079794: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80079798: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007979C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x800797A0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800797A4: nop

    // 0x800797A8: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800797AC: nop

    // 0x800797B0: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x800797B4: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800797B8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800797BC: nop

    // 0x800797C0: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800797C4: nop

    // 0x800797C8: slti        $at, $t3, 0x64
    ctx->r1 = SIGNED(ctx->r11) < 0X64 ? 1 : 0;
    // 0x800797CC: bne         $at, $zero, L_800797EC
    if (ctx->r1 != 0) {
        // 0x800797D0: nop
    
            goto L_800797EC;
    }
    // 0x800797D0: nop

    // 0x800797D4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800797D8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x800797DC: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x800797E0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800797E4: nop

    // 0x800797E8: sh          $zero, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = 0;
L_800797EC:
    // 0x800797EC: b           L_800797F4
    // 0x800797F0: nop

        goto L_800797F4;
    // 0x800797F0: nop

L_800797F4:
    // 0x800797F4: jr          $ra
    // 0x800797F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800797F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005EF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EF30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EF34: sw          $zero, -0x1DC4($at)
    MEM_W(-0X1DC4, ctx->r1) = 0;
    // 0x8005EF38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005EF3C: addiu       $t6, $t6, -0x1DD0
    ctx->r14 = ADD32(ctx->r14, -0X1DD0);
    // 0x8005EF40: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8005EF44: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005EF48: addiu       $t7, $t7, -0x1DD0
    ctx->r15 = ADD32(ctx->r15, -0X1DD0);
    // 0x8005EF4C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005EF50: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005EF54: addiu       $t8, $t8, -0x1DE0
    ctx->r24 = ADD32(ctx->r24, -0X1DE0);
    // 0x8005EF58: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8005EF5C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8005EF60: addiu       $t9, $t9, -0x1DE0
    ctx->r25 = ADD32(ctx->r25, -0X1DE0);
    // 0x8005EF64: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005EF68: jr          $ra
    // 0x8005EF6C: nop

    return;
    // 0x8005EF6C: nop

    // 0x8005EF70: jr          $ra
    // 0x8005EF74: nop

    return;
    // 0x8005EF74: nop

;}
RECOMP_FUNC void func_800BA904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BA908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BA90C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA910: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA914: jal         0x8002B114
    // 0x800BA918: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800BA918: nop

    after_0:
    // 0x800BA91C: b           L_800BA924
    // 0x800BA920: nop

        goto L_800BA924;
    // 0x800BA920: nop

L_800BA924:
    // 0x800BA924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BA928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BA92C: jr          $ra
    // 0x800BA930: nop

    return;
    // 0x800BA930: nop

;}
RECOMP_FUNC void func_800A8DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8DF8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800A8DFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A8E00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A8E04: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800A8E08: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x800A8E0C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A8E10: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800A8E14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8E18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A8E1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8E20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A8E24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8E28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8E30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8E34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A8E38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8E3C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800A8E40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A8E44: nop

    // 0x800A8E48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A8E4C: nop

    // 0x800A8E50: bne         $t1, $zero, L_800A9118
    if (ctx->r9 != 0) {
        // 0x800A8E54: nop
    
            goto L_800A9118;
    }
    // 0x800A8E54: nop

    // 0x800A8E58: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800A8E5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A8E60: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A8E64: jal         0x80014E80
    // 0x800A8E68: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A8E68: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_0:
    // 0x800A8E6C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800A8E70: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800A8E74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8E78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A8E7C: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800A8E80: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A8E84: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A8E88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A8E8C: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800A8E90: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800A8E94: nop

    // 0x800A8E98: bc1f        L_800A8F4C
    if (!c1cs) {
        // 0x800A8E9C: nop
    
            goto L_800A8F4C;
    }
    // 0x800A8E9C: nop

    // 0x800A8EA0: jal         0x80014E80
    // 0x800A8EA4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800A8EA4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_1:
    // 0x800A8EA8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A8EAC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800A8EB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8EB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A8EB8: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800A8EBC: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A8EC0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A8EC4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800A8EC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A8ECC: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800A8ED0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800A8ED4: nop

    // 0x800A8ED8: bc1f        L_800A8F18
    if (!c1cs) {
        // 0x800A8EDC: nop
    
            goto L_800A8F18;
    }
    // 0x800A8EDC: nop

    // 0x800A8EE0: jal         0x80014E80
    // 0x800A8EE4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800A8EE4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_2:
    // 0x800A8EE8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A8EEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8EF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A8EF4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x800A8EF8: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A8EFC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A8F00: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A8F04: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800A8F08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A8F0C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x800A8F10: b           L_800A8F40
    // 0x800A8F14: sub.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f10.fl;
        goto L_800A8F40;
    // 0x800A8F14: sub.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f10.fl;
L_800A8F18:
    // 0x800A8F18: jal         0x80014E80
    // 0x800A8F1C: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800A8F1C: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_3:
    // 0x800A8F20: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A8F24: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x800A8F28: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8F2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A8F30: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A8F34: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A8F38: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800A8F3C: add.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f4.fl;
L_800A8F40:
    // 0x800A8F40: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A8F44: b           L_800A8FF4
    // 0x800A8F48: swc1        $f20, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f20.u32l;
        goto L_800A8FF4;
    // 0x800A8F48: swc1        $f20, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f20.u32l;
L_800A8F4C:
    // 0x800A8F4C: jal         0x80014E80
    // 0x800A8F50: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800A8F50: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_4:
    // 0x800A8F54: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A8F58: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x800A8F5C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8F60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A8F64: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800A8F68: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A8F6C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800A8F70: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A8F74: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A8F78: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800A8F7C: nop

    // 0x800A8F80: bc1f        L_800A8FC0
    if (!c1cs) {
        // 0x800A8F84: nop
    
            goto L_800A8FC0;
    }
    // 0x800A8F84: nop

    // 0x800A8F88: jal         0x80014E80
    // 0x800A8F8C: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x800A8F8C: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_5:
    // 0x800A8F90: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A8F94: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A8F98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A8F9C: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800A8FA0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800A8FA4: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A8FA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8FAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A8FB0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A8FB4: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A8FB8: b           L_800A8FE8
    // 0x800A8FBC: add.s       $f22, $f8, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f4.fl;
        goto L_800A8FE8;
    // 0x800A8FBC: add.s       $f22, $f8, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f4.fl;
L_800A8FC0:
    // 0x800A8FC0: jal         0x80014E80
    // 0x800A8FC4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x800A8FC4: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_6:
    // 0x800A8FC8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800A8FCC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800A8FD0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8FD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A8FD8: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800A8FDC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800A8FE0: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800A8FE4: add.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f16.fl;
L_800A8FE8:
    // 0x800A8FE8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800A8FEC: nop

    // 0x800A8FF0: swc1        $f22, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f22.u32l;
L_800A8FF4:
    // 0x800A8FF4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800A8FF8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A8FFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A9000: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A9004: nop

    // 0x800A9008: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800A900C: nop

    // 0x800A9010: bc1f        L_800A9060
    if (!c1cs) {
        // 0x800A9014: nop
    
            goto L_800A9060;
    }
    // 0x800A9014: nop

    // 0x800A9018: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A901C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A9020: nop

    // 0x800A9024: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800A9028: nop

    // 0x800A902C: bc1f        L_800A9044
    if (!c1cs) {
        // 0x800A9030: nop
    
            goto L_800A9044;
    }
    // 0x800A9030: nop

    // 0x800A9034: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A9038: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A903C: b           L_800A9054
    // 0x800A9040: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
        goto L_800A9054;
    // 0x800A9040: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
L_800A9044:
    // 0x800A9044: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800A9048: nop

    // 0x800A904C: lwc1        $f20, 0x3C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800A9050: nop

L_800A9054:
    // 0x800A9054: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A9058: b           L_800A90AC
    // 0x800A905C: swc1        $f20, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f20.u32l;
        goto L_800A90AC;
    // 0x800A905C: swc1        $f20, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f20.u32l;
L_800A9060:
    // 0x800A9060: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A9064: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A9068: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A906C: nop

    // 0x800A9070: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x800A9074: nop

    // 0x800A9078: bc1f        L_800A9090
    if (!c1cs) {
        // 0x800A907C: nop
    
            goto L_800A9090;
    }
    // 0x800A907C: nop

    // 0x800A9080: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A9084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A9088: b           L_800A90A0
    // 0x800A908C: add.s       $f22, $f8, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_800A90A0;
    // 0x800A908C: add.s       $f22, $f8, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f18.fl;
L_800A9090:
    // 0x800A9090: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A9094: nop

    // 0x800A9098: lwc1        $f22, 0x3C($t7)
    ctx->f22.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A909C: nop

L_800A90A0:
    // 0x800A90A0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A90A4: nop

    // 0x800A90A8: swc1        $f22, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f22.u32l;
L_800A90AC:
    // 0x800A90AC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800A90B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A90B4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A90B8: nop

    // 0x800A90BC: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x800A90C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A90C4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A90C8: nop

    // 0x800A90CC: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
    // 0x800A90D0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800A90D4: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x800A90D8: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800A90DC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800A90E0: nop

    // 0x800A90E4: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800A90E8: nop

    // 0x800A90EC: bne         $t4, $zero, L_800A9118
    if (ctx->r12 != 0) {
        // 0x800A90F0: nop
    
            goto L_800A9118;
    }
    // 0x800A90F0: nop

    // 0x800A90F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A90F8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A90FC: addiu       $t5, $t5, 0x75D0
    ctx->r13 = ADD32(ctx->r13, 0X75D0);
    // 0x800A9100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9104: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A9108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A910C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A9110: jal         0x8001C0EC
    // 0x800A9114: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800A9114: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_7:
L_800A9118:
    // 0x800A9118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A911C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9120: jal         0x80029C40
    // 0x800A9124: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800A9124: nop

    after_8:
    // 0x800A9128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A912C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9130: jal         0x80029D04
    // 0x800A9134: nop

    func_80029D04(rdram, ctx);
        goto after_9;
    // 0x800A9134: nop

    after_9:
    // 0x800A9138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A913C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9140: jal         0x80028FA0
    // 0x800A9144: nop

    func_80028FA0(rdram, ctx);
        goto after_10;
    // 0x800A9144: nop

    after_10:
    // 0x800A9148: beq         $v0, $zero, L_800A9160
    if (ctx->r2 == 0) {
        // 0x800A914C: nop
    
            goto L_800A9160;
    }
    // 0x800A914C: nop

    // 0x800A9150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9158: jal         0x80029B60
    // 0x800A915C: nop

    func_80029B60(rdram, ctx);
        goto after_11;
    // 0x800A915C: nop

    after_11:
L_800A9160:
    // 0x800A9160: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A9164: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A9168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A916C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9170: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A9174: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800A9178: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A917C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A9180: jal         0x80029018
    // 0x800A9184: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x800A9184: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x800A9188: beq         $v0, $zero, L_800A91AC
    if (ctx->r2 == 0) {
        // 0x800A918C: nop
    
            goto L_800A91AC;
    }
    // 0x800A918C: nop

    // 0x800A9190: jal         0x800297DC
    // 0x800A9194: nop

    func_800297DC(rdram, ctx);
        goto after_13;
    // 0x800A9194: nop

    after_13:
    // 0x800A9198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A919C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A91A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A91A4: jal         0x80029824
    // 0x800A91A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_14;
    // 0x800A91A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
L_800A91AC:
    // 0x800A91AC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A91B0: nop

    // 0x800A91B4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800A91B8: nop

    // 0x800A91BC: addiu       $t8, $t7, -0x6
    ctx->r24 = ADD32(ctx->r15, -0X6);
    // 0x800A91C0: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800A91C4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A91C8: nop

    // 0x800A91CC: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800A91D0: nop

    // 0x800A91D4: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x800A91D8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A91DC: nop

    // 0x800A91E0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A91E4: nop

    // 0x800A91E8: bgez        $t1, L_800A9208
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800A91EC: nop
    
            goto L_800A9208;
    }
    // 0x800A91EC: nop

    // 0x800A91F0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800A91F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A91F8: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800A91FC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800A9200: nop

    // 0x800A9204: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800A9208:
    // 0x800A9208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A920C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9210: jal         0x8002A1FC
    // 0x800A9214: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_15;
    // 0x800A9214: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_15:
    // 0x800A9218: beq         $v0, $zero, L_800A9238
    if (ctx->r2 == 0) {
        // 0x800A921C: nop
    
            goto L_800A9238;
    }
    // 0x800A921C: nop

    // 0x800A9220: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A9224: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800A9228: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800A922C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A9230: nop

    // 0x800A9234: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800A9238:
    // 0x800A9238: b           L_800A9240
    // 0x800A923C: nop

        goto L_800A9240;
    // 0x800A923C: nop

L_800A9240:
    // 0x800A9240: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A9244: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800A9248: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A924C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800A9250: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800A9254: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A9258: jr          $ra
    // 0x800A925C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800A925C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007FBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FBA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007FBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FBAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FBB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FBB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FBB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FBBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FBC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FBC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FBC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FBCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FBD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FBD4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007FBD8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FBDC: nop

    // 0x8007FBE0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8007FBE4: nop

    // 0x8007FBE8: bne         $t1, $zero, L_8007FC68
    if (ctx->r9 != 0) {
        // 0x8007FBEC: nop
    
            goto L_8007FC68;
    }
    // 0x8007FBEC: nop

    // 0x8007FBF0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FBF4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007FBF8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8007FBFC: nop

    // 0x8007FC00: bne         $t3, $at, L_8007FC28
    if (ctx->r11 != ctx->r1) {
        // 0x8007FC04: nop
    
            goto L_8007FC28;
    }
    // 0x8007FC04: nop

    // 0x8007FC08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007FC0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8007FC10: jal         0x8001A928
    // 0x8007FC14: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007FC14: nop

    after_0:
    // 0x8007FC18: b           L_8007FC88
    // 0x8007FC1C: nop

        goto L_8007FC88;
    // 0x8007FC1C: nop

    // 0x8007FC20: b           L_8007FC60
    // 0x8007FC24: nop

        goto L_8007FC60;
    // 0x8007FC24: nop

L_8007FC28:
    // 0x8007FC28: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FC2C: nop

    // 0x8007FC30: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8007FC34: nop

    // 0x8007FC38: sh          $t5, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r13;
    // 0x8007FC3C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FC40: nop

    // 0x8007FC44: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8007FC48: nop

    // 0x8007FC4C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007FC50: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x8007FC54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FC58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007FC5C: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_8007FC60:
    // 0x8007FC60: b           L_8007FC80
    // 0x8007FC64: nop

        goto L_8007FC80;
    // 0x8007FC64: nop

L_8007FC68:
    // 0x8007FC68: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FC6C: nop

    // 0x8007FC70: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x8007FC74: nop

    // 0x8007FC78: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007FC7C: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_8007FC80:
    // 0x8007FC80: b           L_8007FC88
    // 0x8007FC84: nop

        goto L_8007FC88;
    // 0x8007FC84: nop

L_8007FC88:
    // 0x8007FC88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FC8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007FC90: jr          $ra
    // 0x8007FC94: nop

    return;
    // 0x8007FC94: nop

;}
RECOMP_FUNC void func_800F6058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F605C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F6060: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F6064: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800F6068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F606C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F6070: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F6074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F607C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6084: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6088: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F608C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6090: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F6094: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F6098: nop

    // 0x800F609C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F60A0: nop

    // 0x800F60A4: bne         $t1, $zero, L_800F6134
    if (ctx->r9 != 0) {
        // 0x800F60A8: nop
    
            goto L_800F6134;
    }
    // 0x800F60A8: nop

    // 0x800F60AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F60B0: nop

    // 0x800F60B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F60B8: nop

    // 0x800F60BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F60C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F60C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F60C8: nop

    // 0x800F60CC: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800F60D0: nop

    // 0x800F60D4: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
    // 0x800F60D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F60DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F60E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F60E4: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800F60E8: jal         0x80015538
    // 0x800F60EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800F60EC: nop

    after_0:
    // 0x800F60F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F60F4: nop

    // 0x800F60F8: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800F60FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F6100: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F6104: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F6108: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x800F610C: jal         0x80015538
    // 0x800F6110: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800F6110: nop

    after_1:
    // 0x800F6114: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F6118: nop

    // 0x800F611C: swc1        $f0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f0.u32l;
    // 0x800F6120: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F6124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F6128: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F612C: nop

    // 0x800F6130: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
L_800F6134:
    // 0x800F6134: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F6138: nop

    // 0x800F613C: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x800F6140: nop

    // 0x800F6144: bne         $t4, $zero, L_800F617C
    if (ctx->r12 != 0) {
        // 0x800F6148: nop
    
            goto L_800F617C;
    }
    // 0x800F6148: nop

    // 0x800F614C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F6150: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F6154: nop

    // 0x800F6158: swc1        $f6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f6.u32l;
    // 0x800F615C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6164: jal         0x80029D8C
    // 0x800F6168: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x800F6168: nop

    after_2:
    // 0x800F616C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F6170: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F6174: b           L_800F6208
    // 0x800F6178: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
        goto L_800F6208;
    // 0x800F6178: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
L_800F617C:
    // 0x800F617C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F6180: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F6184: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x800F6188: nop

    // 0x800F618C: bne         $t7, $at, L_800F61D8
    if (ctx->r15 != ctx->r1) {
        // 0x800F6190: nop
    
            goto L_800F61D8;
    }
    // 0x800F6190: nop

    // 0x800F6194: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F6198: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F619C: nop

    // 0x800F61A0: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x800F61A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F61A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F61AC: jal         0x80029D8C
    // 0x800F61B0: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x800F61B0: nop

    after_3:
    // 0x800F61B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F61B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F61BC: nop

    // 0x800F61C0: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
    // 0x800F61C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F61C8: nop

    // 0x800F61CC: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F61D0: b           L_800F6208
    // 0x800F61D4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
        goto L_800F6208;
    // 0x800F61D4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
L_800F61D8:
    // 0x800F61D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F61DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F61E0: nop

    // 0x800F61E4: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x800F61E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F61EC: nop

    // 0x800F61F0: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800F61F4: nop

    // 0x800F61F8: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800F61FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F6200: nop

    // 0x800F6204: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_800F6208:
    // 0x800F6208: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F620C: nop

    // 0x800F6210: lh          $t6, 0xAC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAC);
    // 0x800F6214: nop

    // 0x800F6218: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800F621C: beq         $at, $zero, L_800F62A0
    if (ctx->r1 == 0) {
        // 0x800F6220: nop
    
            goto L_800F62A0;
    }
    // 0x800F6220: nop

    // 0x800F6224: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F6228: nop

    // 0x800F622C: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x800F6230: lwc1        $f10, 0x44($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X44);
    // 0x800F6234: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800F6238: nop

    // 0x800F623C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F6240: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800F6244: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800F6248: nop

    // 0x800F624C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800F6250: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F6254: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F6258: nop

    // 0x800F625C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800F6260: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800F6264: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800F6268: sh          $t9, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r25;
    // 0x800F626C: nop

    // 0x800F6270: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F6274: nop

    // 0x800F6278: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800F627C: nop

    // 0x800F6280: bgtz        $t1, L_800F62A0
    if (SIGNED(ctx->r9) > 0) {
        // 0x800F6284: nop
    
            goto L_800F62A0;
    }
    // 0x800F6284: nop

    // 0x800F6288: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F628C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800F6290: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F6294: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F6298: nop

    // 0x800F629C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F62A0:
    // 0x800F62A0: b           L_800F62A8
    // 0x800F62A4: nop

        goto L_800F62A8;
    // 0x800F62A4: nop

L_800F62A8:
    // 0x800F62A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F62AC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800F62B0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800F62B4: jr          $ra
    // 0x800F62B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F62B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80069E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E3C: sw          $zero, 0x78F4($at)
    MEM_W(0X78F4, ctx->r1) = 0;
    // 0x80069E40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E44: sw          $zero, 0x78FC($at)
    MEM_W(0X78FC, ctx->r1) = 0;
    // 0x80069E48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E4C: sw          $zero, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = 0;
    // 0x80069E50: jr          $ra
    // 0x80069E54: nop

    return;
    // 0x80069E54: nop

    // 0x80069E58: jr          $ra
    // 0x80069E5C: nop

    return;
    // 0x80069E5C: nop

;}
