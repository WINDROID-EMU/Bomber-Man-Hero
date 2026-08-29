#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80077B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077B90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80077B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077B98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077B9C: sh          $zero, 0x4B60($at)
    MEM_H(0X4B60, ctx->r1) = 0;
    // 0x80077BA0: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80077BA4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80077BA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077BAC: sh          $t6, 0x4B52($at)
    MEM_H(0X4B52, ctx->r1) = ctx->r14;
L_80077BB0:
    // 0x80077BB0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80077BB4: lh          $t8, 0x4B52($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4B52);
    // 0x80077BB8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80077BBC: lw          $t7, 0x4B58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4B58);
    // 0x80077BC0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80077BC4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80077BC8: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x80077BCC: nop

    // 0x80077BD0: sh          $t1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r9;
    // 0x80077BD4: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80077BD8: nop

    // 0x80077BDC: bne         $t2, $zero, L_80077BEC
    if (ctx->r10 != 0) {
        // 0x80077BE0: nop
    
            goto L_80077BEC;
    }
    // 0x80077BE0: nop

    // 0x80077BE4: b           L_80077C90
    // 0x80077BE8: nop

        goto L_80077C90;
    // 0x80077BE8: nop

L_80077BEC:
    // 0x80077BEC: lh          $t3, 0x1C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1C);
    // 0x80077BF0: nop

    // 0x80077BF4: andi        $t4, $t3, 0x7F
    ctx->r12 = ctx->r11 & 0X7F;
    // 0x80077BF8: sh          $t4, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r12;
    // 0x80077BFC: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80077C00: lh          $t5, 0x4B52($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4B52);
    // 0x80077C04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077C08: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80077C0C: sh          $t6, 0x4B52($at)
    MEM_H(0X4B52, ctx->r1) = ctx->r14;
    // 0x80077C10: lh          $t8, 0x1C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1C);
    // 0x80077C14: nop

    // 0x80077C18: beq         $t8, $zero, L_80077C28
    if (ctx->r24 == 0) {
        // 0x80077C1C: nop
    
            goto L_80077C28;
    }
    // 0x80077C1C: nop

    // 0x80077C20: b           L_80077C34
    // 0x80077C24: nop

        goto L_80077C34;
    // 0x80077C24: nop

L_80077C28:
    // 0x80077C28: jal         0x8007795C
    // 0x80077C2C: nop

    func_8007795C(rdram, ctx);
        goto after_0;
    // 0x80077C2C: nop

    after_0:
    // 0x80077C30: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
L_80077C34:
    // 0x80077C34: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80077C38: nop

    // 0x80077C3C: beq         $t7, $zero, L_80077C4C
    if (ctx->r15 == 0) {
        // 0x80077C40: nop
    
            goto L_80077C4C;
    }
    // 0x80077C40: nop

    // 0x80077C44: b           L_80077CA0
    // 0x80077C48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80077CA0;
    // 0x80077C48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80077C4C:
    // 0x80077C4C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80077C50: lh          $t9, 0x4B60($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4B60);
    // 0x80077C54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077C58: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80077C5C: sh          $t0, 0x4B60($at)
    MEM_H(0X4B60, ctx->r1) = ctx->r8;
    // 0x80077C60: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80077C64: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80077C68: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80077C6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80077C70: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80077C74: lh          $t1, 0x4B52($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4B52);
    // 0x80077C78: lh          $t4, -0x40D0($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X40D0);
    // 0x80077C7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077C80: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x80077C84: sh          $t5, 0x4B52($at)
    MEM_H(0X4B52, ctx->r1) = ctx->r13;
    // 0x80077C88: b           L_80077BB0
    // 0x80077C8C: nop

        goto L_80077BB0;
    // 0x80077C8C: nop

L_80077C90:
    // 0x80077C90: b           L_80077CA0
    // 0x80077C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077CA0;
    // 0x80077C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80077C98: b           L_80077CA0
    // 0x80077C9C: nop

        goto L_80077CA0;
    // 0x80077C9C: nop

L_80077CA0:
    // 0x80077CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80077CA8: jr          $ra
    // 0x80077CAC: nop

    return;
    // 0x80077CAC: nop

;}
RECOMP_FUNC void func_80069E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E64: sw          $a2, 0x78F4($at)
    MEM_W(0X78F4, ctx->r1) = ctx->r6;
    // 0x80069E68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E6C: sw          $a0, 0x78FC($at)
    MEM_W(0X78FC, ctx->r1) = ctx->r4;
    // 0x80069E70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069E74: sw          $a1, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r5;
    // 0x80069E78: jr          $ra
    // 0x80069E7C: nop

    return;
    // 0x80069E7C: nop

    // 0x80069E80: jr          $ra
    // 0x80069E84: nop

    return;
    // 0x80069E84: nop

;}
RECOMP_FUNC void func_800A0D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0D3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800A0D40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A0D44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A0D48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A0D4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A0D50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0D54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0D58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0D5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0D60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A0D64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A0D68: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800A0D6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0D70: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800A0D74: nop

    // 0x800A0D78: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x800A0D7C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800A0D80: nop

    // 0x800A0D84: lwc1        $f12, 0x2C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800A0D88: nop

    // 0x800A0D8C: swc1        $f12, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f12.u32l;
    // 0x800A0D90: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800A0D94: nop

    // 0x800A0D98: swc1        $f12, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f12.u32l;
    // 0x800A0D9C: b           L_800A0DA4
    // 0x800A0DA0: nop

        goto L_800A0DA4;
    // 0x800A0DA0: nop

L_800A0DA4:
    // 0x800A0DA4: jr          $ra
    // 0x800A0DA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800A0DA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80092C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092C38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092C3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092C40: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092C44: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092C48: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092C4C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092C50: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092C54: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092C58: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092C5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092C60: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092C64: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092C68: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092C6C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092C70: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092C74: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092C78: addiu       $a1, $a1, 0x175C
    ctx->r5 = ADD32(ctx->r5, 0X175C);
    // 0x80092C7C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092C80: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092C88: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092C8C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092C90: jal         0x80027464
    // 0x80092C94: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092C94: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092C98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092C9C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092CA0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092CA4: addiu       $a3, $a3, 0x6FFC
    ctx->r7 = ADD32(ctx->r7, 0X6FFC);
    // 0x80092CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092CAC: jal         0x8001ABF4
    // 0x80092CB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092CB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80092CB4: b           L_80092CBC
    // 0x80092CB8: nop

        goto L_80092CBC;
    // 0x80092CB8: nop

L_80092CBC:
    // 0x80092CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092CC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092CC4: jr          $ra
    // 0x80092CC8: nop

    return;
    // 0x80092CC8: nop

;}
RECOMP_FUNC void func_800F161C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F161C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F1620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F1624: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F1628: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F162C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F1630: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F1634: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F1638: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F163C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F1640: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F1644: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F1648: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F164C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F1650: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F1654: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F1658: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F165C: addiu       $a1, $a1, 0x442C
    ctx->r5 = ADD32(ctx->r5, 0X442C);
    // 0x800F1660: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F1664: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F1668: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800F166C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F1670: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F1674: jal         0x80027464
    // 0x800F1678: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F1678: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F167C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F1680: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1684: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F1688: beq         $t1, $at, L_800F18B8
    if (ctx->r9 == ctx->r1) {
        // 0x800F168C: nop
    
            goto L_800F18B8;
    }
    // 0x800F168C: nop

    // 0x800F1690: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F1694: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F1698: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800F169C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F16A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F16A4: jal         0x8001ABF4
    // 0x800F16A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800F16A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800F16AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F16B0: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x800F16B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F16B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F16BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F16C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F16C4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F16C8: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x800F16CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F16D0: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F16D4: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x800F16D8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F16DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F16E0: jal         0x8001ABF4
    // 0x800F16E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F16E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800F16E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F16EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F16F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F16F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F16F8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800F16FC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F1700: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F1704: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F1708: jal         0x800295C0
    // 0x800F170C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800F170C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800F1710: beq         $v0, $zero, L_800F1744
    if (ctx->r2 == 0) {
        // 0x800F1714: nop
    
            goto L_800F1744;
    }
    // 0x800F1714: nop

    // 0x800F1718: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F171C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F1720: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F1724: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F1728: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F172C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F1730: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F1734: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1738: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F173C: b           L_800F176C
    // 0x800F1740: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_800F176C;
    // 0x800F1740: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_800F1744:
    // 0x800F1744: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1748: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F174C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F1750: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F1754: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F1758: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F175C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F1760: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1764: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F1768: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_800F176C:
    // 0x800F176C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1770: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800F1774: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800F1778: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F177C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F1780: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F1784: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F1788: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800F178C: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800F1790: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F1794: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F1798: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800F179C: nop

    // 0x800F17A0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F17A4: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x800F17A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F17AC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800F17B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F17B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F17B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F17BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F17C0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F17C4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800F17C8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800F17CC: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x800F17D0: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800F17D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F17D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F17DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F17E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F17E4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F17E8: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x800F17EC: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800F17F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F17F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F17F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F17FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F1800: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F1804: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F1808: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F180C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F1810: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F1814: sb          $t6, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r14;
    // 0x800F1818: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F181C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800F1820: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F1824: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F1828: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F182C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800F1830: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F1834: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F1838: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800F183C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800F1840: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F1844: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x800F1848: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800F184C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F1850: nop

    // 0x800F1854: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800F1858: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800F185C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800F1860: sh          $t4, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r12;
    // 0x800F1864: nop

    // 0x800F1868: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F186C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800F1870: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F1874: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1878: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F187C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800F1880: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1884: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F1888: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800F188C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800F1890: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F1894: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x800F1898: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800F189C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F18A0: nop

    // 0x800F18A4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800F18A8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800F18AC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800F18B0: sh          $t3, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r11;
    // 0x800F18B4: nop

L_800F18B8:
    // 0x800F18B8: b           L_800F18C0
    // 0x800F18BC: nop

        goto L_800F18C0;
    // 0x800F18BC: nop

L_800F18C0:
    // 0x800F18C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F18C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F18C8: jr          $ra
    // 0x800F18CC: nop

    return;
    // 0x800F18CC: nop

;}
RECOMP_FUNC void func_80086E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80086E74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80086E78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80086E7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80086E80: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80086E84: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80086E88: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80086E8C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80086E90: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80086E94: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80086E98: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x80086E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80086EA0: addiu       $a0, $a0, 0x7550
    ctx->r4 = ADD32(ctx->r4, 0X7550);
    // 0x80086EA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80086EA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80086EAC: jal         0x80036360
    // 0x80086EB0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    guMtxXFMF(rdram, ctx);
        goto after_0;
    // 0x80086EB0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x80086EB4: b           L_80086EBC
    // 0x80086EB8: nop

        goto L_80086EBC;
    // 0x80086EB8: nop

L_80086EBC:
    // 0x80086EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80086EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80086EC4: jr          $ra
    // 0x80086EC8: nop

    return;
    // 0x80086EC8: nop

;}
RECOMP_FUNC void func_8007A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A6DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A6E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A6E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A6E8: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007A6EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007A6F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A6F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A6F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A6FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A700: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007A704: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007A708: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007A70C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007A710: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A714: addiu       $t0, $zero, 0x26
    ctx->r8 = ADD32(0, 0X26);
    // 0x8007A718: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007A71C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007A720: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007A724: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A728: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007A72C: nop

    // 0x8007A730: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
    // 0x8007A734: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8007A738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007A73C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A740: nop

    // 0x8007A744: swc1        $f6, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f6.u32l;
    // 0x8007A748: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007A74C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007A750: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A754: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8007A758: nop

    // 0x8007A75C: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x8007A760: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8007A764: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007A768: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A76C: nop

    // 0x8007A770: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x8007A774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007A778: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007A77C: jal         0x800799A8
    // 0x8007A780: nop

    func_800799A8(rdram, ctx);
        goto after_0;
    // 0x8007A780: nop

    after_0:
    // 0x8007A784: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007A788: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007A78C: jal         0x80079AD8
    // 0x8007A790: nop

    func_80079AD8(rdram, ctx);
        goto after_1;
    // 0x8007A790: nop

    after_1:
    // 0x8007A794: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A798: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007A79C: b           L_8007A7A4
    // 0x8007A7A0: nop

        goto L_8007A7A4;
    // 0x8007A7A0: nop

L_8007A7A4:
    // 0x8007A7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A7A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A7AC: jr          $ra
    // 0x8007A7B0: nop

    return;
    // 0x8007A7B0: nop

;}
RECOMP_FUNC void func_8005EFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EFE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005EFE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005EFEC: jal         0x8003C940
    // 0x8005EFF0: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005EFF0: nop

    after_0:
    // 0x8005EFF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005EFF8: lw          $t6, -0x1DC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DC4);
    // 0x8005EFFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F000: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005F004: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005F008: sw          $v0, -0x1DD0($at)
    MEM_W(-0X1DD0, ctx->r1) = ctx->r2;
    // 0x8005F00C: b           L_8005F014
    // 0x8005F010: nop

        goto L_8005F014;
    // 0x8005F010: nop

L_8005F014:
    // 0x8005F014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F01C: jr          $ra
    // 0x8005F020: nop

    return;
    // 0x8005F020: nop

;}
RECOMP_FUNC void func_80096540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096548: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009654C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096550: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096554: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009655C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096564: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096568: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009656C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80096570: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80096574: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096578: nop

    // 0x8009657C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80096580: nop

    // 0x80096584: bne         $t1, $zero, L_800965D4
    if (ctx->r9 != 0) {
        // 0x80096588: nop
    
            goto L_800965D4;
    }
    // 0x80096588: nop

    // 0x8009658C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80096590: nop

    // 0x80096594: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80096598: nop

    // 0x8009659C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800965A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800965A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800965A8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800965AC: addiu       $t5, $t5, 0x693C
    ctx->r13 = ADD32(ctx->r13, 0X693C);
    // 0x800965B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800965B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800965B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800965BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800965C0: jal         0x8001C0EC
    // 0x800965C4: addiu       $a3, $zero, 0x1AD
    ctx->r7 = ADD32(0, 0X1AD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800965C4: addiu       $a3, $zero, 0x1AD
    ctx->r7 = ADD32(0, 0X1AD);
    after_0:
    // 0x800965C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800965CC: jal         0x800964CC
    // 0x800965D0: nop

    func_800964CC(rdram, ctx);
        goto after_1;
    // 0x800965D0: nop

    after_1:
L_800965D4:
    // 0x800965D4: b           L_800965DC
    // 0x800965D8: nop

        goto L_800965DC;
    // 0x800965D8: nop

L_800965DC:
    // 0x800965DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800965E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800965E4: jr          $ra
    // 0x800965E8: nop

    return;
    // 0x800965E8: nop

;}
RECOMP_FUNC void func_800A7894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7894: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A7898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A789C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A78A0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A78A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A78A8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A78AC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A78B0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A78B4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A78B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A78BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A78C0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A78C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A78C8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A78CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A78D0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A78D4: addiu       $a1, $a1, 0x3910
    ctx->r5 = ADD32(ctx->r5, 0X3910);
    // 0x800A78D8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A78DC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A78E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A78E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A78E8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A78EC: jal         0x80027464
    // 0x800A78F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A78F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A78F4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800A78F8: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A78FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A7900: beq         $t1, $at, L_800A79F0
    if (ctx->r9 == ctx->r1) {
        // 0x800A7904: nop
    
            goto L_800A79F0;
    }
    // 0x800A7904: nop

    // 0x800A7908: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A790C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7910: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A7914: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A7918: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A791C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A7920: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A7924: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A7928: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A792C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A7930: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A7934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7938: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A793C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A7940: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A7944: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A7948: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A794C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A7950: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800A7954: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x800A7958: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A795C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A7960: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A7964: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A7968: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A796C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A7970: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A7974: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A7978: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800A797C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7980: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A7984: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A7988: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A798C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A7990: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A7994: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A7998: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A799C: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x800A79A0: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A79A4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800A79A8: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800A79AC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800A79B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A79B4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800A79B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A79BC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A79C0: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800A79C4: nop

    // 0x800A79C8: sh          $t4, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r12;
    // 0x800A79CC: lh          $t5, 0x24($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X24);
    // 0x800A79D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A79D4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A79D8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A79DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A79E0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A79E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A79E8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A79EC: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800A79F0:
    // 0x800A79F0: b           L_800A79F8
    // 0x800A79F4: nop

        goto L_800A79F8;
    // 0x800A79F4: nop

L_800A79F8:
    // 0x800A79F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A79FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A7A00: jr          $ra
    // 0x800A7A04: nop

    return;
    // 0x800A7A04: nop

;}
RECOMP_FUNC void func_80098864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098864: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80098868: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009886C: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x80098870: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80098874: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x80098878: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8009887C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80098880: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80098884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098888: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009888C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098890: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80098894: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80098898: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009889C: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x800988A0: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x800988A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800988A8: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800988AC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800988B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800988B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800988B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800988BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800988C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800988C4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800988C8: sw          $t4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r12;
    // 0x800988CC: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x800988D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800988D4: lh          $t6, 0xE6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE6);
    // 0x800988D8: nop

    // 0x800988DC: beq         $t6, $at, L_800989C8
    if (ctx->r14 == ctx->r1) {
        // 0x800988E0: nop
    
            goto L_800989C8;
    }
    // 0x800988E0: nop

    // 0x800988E4: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x800988E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800988EC: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    // 0x800988F0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x800988F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800988F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800988FC: jal         0x800372A0
    // 0x80098900: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x80098900: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80098904: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80098908: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8009890C: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80098910: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x80098914: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x80098918: jal         0x80037200
    // 0x8009891C: nop

    guTranslateF(rdram, ctx);
        goto after_1;
    // 0x8009891C: nop

    after_1:
    // 0x80098920: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x80098924: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80098928: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8009892C: jal         0x80036400
    // 0x80098930: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x80098930: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80098934: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80098938: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8009893C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80098940: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80098944: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80098948: addiu       $t2, $t2, 0x482C
    ctx->r10 = ADD32(ctx->r10, 0X482C);
    // 0x8009894C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80098950: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80098954: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x80098958: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x8009895C: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x80098960: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x80098964: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80098968: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8009896C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80098970: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80098974: jal         0x80036360
    // 0x80098978: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    guMtxXFMF(rdram, ctx);
        goto after_3;
    // 0x80098978: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x8009897C: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x80098980: nop

    // 0x80098984: beq         $t7, $zero, L_800989C8
    if (ctx->r15 == 0) {
        // 0x80098988: nop
    
            goto L_800989C8;
    }
    // 0x80098988: nop

    // 0x8009898C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80098990: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80098994: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x80098998: nop

    // 0x8009899C: swc1        $f6, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f6.u32l;
    // 0x800989A0: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x800989A4: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x800989A8: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800989AC: nop

    // 0x800989B0: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x800989B4: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x800989B8: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x800989BC: lwc1        $f10, 0x20($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X20);
    // 0x800989C0: nop

    // 0x800989C4: swc1        $f10, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f10.u32l;
L_800989C8:
    // 0x800989C8: b           L_800989D0
    // 0x800989CC: nop

        goto L_800989D0;
    // 0x800989CC: nop

L_800989D0:
    // 0x800989D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800989D4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x800989D8: jr          $ra
    // 0x800989DC: nop

    return;
    // 0x800989DC: nop

;}
RECOMP_FUNC void func_800BF71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF71C: jr          $ra
    // 0x800BF720: nop

    return;
    // 0x800BF720: nop

    // 0x800BF724: jr          $ra
    // 0x800BF728: nop

    return;
    // 0x800BF728: nop

;}
RECOMP_FUNC void func_80077528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007752C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077530: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80077534: lb          $t6, 0x790A($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X790A);
    // 0x80077538: nop

    // 0x8007753C: bne         $t6, $zero, L_8007754C
    if (ctx->r14 != 0) {
        // 0x80077540: nop
    
            goto L_8007754C;
    }
    // 0x80077540: nop

    // 0x80077544: b           L_80077564
    // 0x80077548: nop

        goto L_80077564;
    // 0x80077548: nop

L_8007754C:
    // 0x8007754C: jal         0x800772B8
    // 0x80077550: nop

    func_800772B8(rdram, ctx);
        goto after_0;
    // 0x80077550: nop

    after_0:
    // 0x80077554: jal         0x80077458
    // 0x80077558: nop

    func_80077458(rdram, ctx);
        goto after_1;
    // 0x80077558: nop

    after_1:
    // 0x8007755C: b           L_80077564
    // 0x80077560: nop

        goto L_80077564;
    // 0x80077560: nop

L_80077564:
    // 0x80077564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007756C: jr          $ra
    // 0x80077570: nop

    return;
    // 0x80077570: nop

;}
RECOMP_FUNC void func_800BD558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD558: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BD55C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BD560: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800BD564: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BD568: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD56C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD570: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD574: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD57C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD580: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD584: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD588: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD58C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD590: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800BD594: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x800BD598: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BD59C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800BD5A0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800BD5A4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800BD5A8: nop

    // 0x800BD5AC: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
    // 0x800BD5B0: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD5B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD5B8: beq         $t5, $at, L_800BD780
    if (ctx->r13 == ctx->r1) {
        // 0x800BD5BC: nop
    
            goto L_800BD780;
    }
    // 0x800BD5BC: nop

    // 0x800BD5C0: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD5C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD5C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD5CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD5D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD5D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD5D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD5DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD5E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD5E4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800BD5E8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800BD5EC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800BD5F0: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x800BD5F4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800BD5F8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800BD5FC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800BD600: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BD604: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800BD608: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BD60C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800BD610: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x800BD614: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x800BD618: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BD61C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD620: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD624: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD628: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x800BD62C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800BD630: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800BD634: jal         0x80015538
    // 0x800BD638: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800BD638: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x800BD63C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800BD640: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BD644: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800BD648: lwc1        $f11, 0x4CB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4CB0);
    // 0x800BD64C: lwc1        $f10, 0x4CB4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4CB4);
    // 0x800BD650: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800BD654: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800BD658: jal         0x80034970
    // 0x800BD65C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800BD65C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x800BD660: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x800BD664: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BD668: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800BD66C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800BD670: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
    // 0x800BD674: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BD678: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800BD67C: lwc1        $f11, 0x4CB8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4CB8);
    // 0x800BD680: lwc1        $f10, 0x4CBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4CBC);
    // 0x800BD684: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800BD688: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800BD68C: jal         0x80036570
    // 0x800BD690: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x800BD690: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x800BD694: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x800BD698: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BD69C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800BD6A0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800BD6A4: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x800BD6A8: lh          $t0, 0x3A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3A);
    // 0x800BD6AC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800BD6B0: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x800BD6B4: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800BD6B8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800BD6BC: nop

    // 0x800BD6C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BD6C4: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x800BD6C8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BD6CC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800BD6D0: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800BD6D4: lwc1        $f16, 0x24($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X24);
    // 0x800BD6D8: nop

    // 0x800BD6DC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800BD6E0: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x800BD6E4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BD6E8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800BD6EC: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800BD6F0: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800BD6F4: nop

    // 0x800BD6F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800BD6FC: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x800BD700: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800BD704: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800BD708: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800BD70C: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800BD710: nop

    // 0x800BD714: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800BD718: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x800BD71C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BD720: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800BD724: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800BD728: nop

    // 0x800BD72C: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x800BD730: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800BD734: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800BD738: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800BD73C: nop

    // 0x800BD740: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x800BD744: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BD748: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800BD74C: lwc1        $f8, 0x40($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X40);
    // 0x800BD750: nop

    // 0x800BD754: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800BD758: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BD75C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800BD760: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800BD764: nop

    // 0x800BD768: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
    // 0x800BD76C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800BD770: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800BD774: lwc1        $f16, 0x48($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X48);
    // 0x800BD778: nop

    // 0x800BD77C: swc1        $f16, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f16.u32l;
L_800BD780:
    // 0x800BD780: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800BD784: nop

    // 0x800BD788: sltu        $t2, $zero, $t0
    ctx->r10 = 0 < ctx->r8 ? 1 : 0;
    // 0x800BD78C: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x800BD790: beq         $t3, $zero, L_800BD7A0
    if (ctx->r11 == 0) {
        // 0x800BD794: nop
    
            goto L_800BD7A0;
    }
    // 0x800BD794: nop

    // 0x800BD798: b           L_800BD7A4
    // 0x800BD79C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_800BD7A4;
    // 0x800BD79C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800BD7A0:
    // 0x800BD7A0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800BD7A4:
    // 0x800BD7A4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x800BD7A8: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800BD7AC: b           L_800BD7BC
    // 0x800BD7B0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_800BD7BC;
    // 0x800BD7B0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x800BD7B4: b           L_800BD7BC
    // 0x800BD7B8: nop

        goto L_800BD7BC;
    // 0x800BD7B8: nop

L_800BD7BC:
    // 0x800BD7BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD7C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BD7C4: jr          $ra
    // 0x800BD7C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800BD7C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800AF8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF8DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AF8E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AF8E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AF8E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AF8EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AF8F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AF8F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF8F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AF8FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF900: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AF904: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AF908: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AF90C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AF910: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AF914: nop

    // 0x800AF918: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AF91C: nop

    // 0x800AF920: bne         $t1, $zero, L_800AF9D8
    if (ctx->r9 != 0) {
        // 0x800AF924: nop
    
            goto L_800AF9D8;
    }
    // 0x800AF924: nop

    // 0x800AF928: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AF92C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AF930: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AF934: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AF938: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AF93C: nop

    // 0x800AF940: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AF944: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AF948: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AF94C: nop

    // 0x800AF950: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AF954: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AF958: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800AF95C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800AF960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF964: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800AF968: addiu       $t8, $t8, 0x7660
    ctx->r24 = ADD32(ctx->r24, 0X7660);
    // 0x800AF96C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF970: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AF974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AF978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AF97C: jal         0x8001C0EC
    // 0x800AF980: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AF980: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_0:
    // 0x800AF984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF98C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AF990: addiu       $a3, $a3, 0x7700
    ctx->r7 = ADD32(ctx->r7, 0X7700);
    // 0x800AF994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AF998: jal         0x8001ABF4
    // 0x800AF99C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800AF99C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800AF9A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF9A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF9A8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AF9AC: addiu       $a3, $a3, 0x7738
    ctx->r7 = ADD32(ctx->r7, 0X7738);
    // 0x800AF9B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AF9B4: jal         0x8001ABF4
    // 0x800AF9B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800AF9B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800AF9BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF9C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF9C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AF9C8: addiu       $a3, $a3, 0x778C
    ctx->r7 = ADD32(ctx->r7, 0X778C);
    // 0x800AF9CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800AF9D0: jal         0x8001ABF4
    // 0x800AF9D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800AF9D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800AF9D8:
    // 0x800AF9D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF9DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF9E0: jal         0x8002A2EC
    // 0x800AF9E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_4;
    // 0x800AF9E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_4:
    // 0x800AF9E8: beq         $v0, $zero, L_800AFA24
    if (ctx->r2 == 0) {
        // 0x800AF9EC: nop
    
            goto L_800AFA24;
    }
    // 0x800AF9EC: nop

    // 0x800AF9F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF9F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF9F8: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800AF9FC: jal         0x8002A3A8
    // 0x800AFA00: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A3A8(rdram, ctx);
        goto after_5;
    // 0x800AFA00: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_5:
    // 0x800AFA04: beq         $v0, $zero, L_800AFA24
    if (ctx->r2 == 0) {
        // 0x800AFA08: nop
    
            goto L_800AFA24;
    }
    // 0x800AFA08: nop

    // 0x800AFA0C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFA10: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x800AFA14: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AFA18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AFA1C: nop

    // 0x800AFA20: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800AFA24:
    // 0x800AFA24: b           L_800AFA2C
    // 0x800AFA28: nop

        goto L_800AFA2C;
    // 0x800AFA28: nop

L_800AFA2C:
    // 0x800AFA2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AFA30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AFA34: jr          $ra
    // 0x800AFA38: nop

    return;
    // 0x800AFA38: nop

;}
RECOMP_FUNC void func_800F5E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5E34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F5E38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F5E3C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F5E40: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F5E44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F5E48: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F5E4C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F5E50: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F5E54: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F5E58: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F5E5C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F5E60: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F5E64: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F5E68: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F5E6C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F5E70: addiu       $a1, $a1, 0x3754
    ctx->r5 = ADD32(ctx->r5, 0X3754);
    // 0x800F5E74: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F5E78: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F5E7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F5E80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F5E84: jal         0x80027464
    // 0x800F5E88: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F5E88: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F5E8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F5E90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F5E94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F5E98: beq         $t0, $at, L_800F6040
    if (ctx->r8 == ctx->r1) {
        // 0x800F5E9C: nop
    
            goto L_800F6040;
    }
    // 0x800F5E9C: nop

    // 0x800F5EA0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F5EA4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F5EA8: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F5EAC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F5EB0: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F5EB4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F5EB8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F5EBC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F5EC0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800F5EC4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F5EC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5ECC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800F5ED0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F5ED4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F5ED8: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x800F5EDC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800F5EE0: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800F5EE4: nop

    // 0x800F5EE8: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x800F5EEC: nop

    // 0x800F5EF0: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800F5EF4: beq         $at, $zero, L_800F5F6C
    if (ctx->r1 == 0) {
        // 0x800F5EF8: nop
    
            goto L_800F5F6C;
    }
    // 0x800F5EF8: nop

    // 0x800F5EFC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F5F00: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F5F04: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800F5F08: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x800F5F0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F5F10: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800F5F14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F5F18: lh          $t1, 0x56E0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X56E0);
    // 0x800F5F1C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800F5F20: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800F5F24: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800F5F28: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F5F2C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F5F30: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800F5F34: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F5F38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5F3C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F5F40: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800F5F44: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F5F48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5F4C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800F5F50: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F5F54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F5F58: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F5F5C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F5F60: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F5F64: b           L_800F6028
    // 0x800F5F68: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
        goto L_800F6028;
    // 0x800F5F68: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
L_800F5F6C:
    // 0x800F5F6C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800F5F70: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800F5F74: nop

    // 0x800F5F78: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x800F5F7C: nop

    // 0x800F5F80: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x800F5F84: beq         $at, $zero, L_800F6000
    if (ctx->r1 == 0) {
        // 0x800F5F88: nop
    
            goto L_800F6000;
    }
    // 0x800F5F88: nop

    // 0x800F5F8C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F5F90: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F5F94: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800F5F98: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x800F5F9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F5FA0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800F5FA4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F5FA8: lh          $t1, 0x56E0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X56E0);
    // 0x800F5FAC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800F5FB0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800F5FB4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800F5FB8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F5FBC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F5FC0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800F5FC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F5FC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5FCC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F5FD0: swc1        $f8, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f8.u32l;
    // 0x800F5FD4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F5FD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5FDC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F5FE0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F5FE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F5FE8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F5FEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F5FF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F5FF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800F5FF8: b           L_800F6028
    // 0x800F5FFC: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
        goto L_800F6028;
    // 0x800F5FFC: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
L_800F6000:
    // 0x800F6000: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F6004: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6008: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800F600C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800F6010: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F6014: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800F6018: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F601C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F6020: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800F6024: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
L_800F6028:
    // 0x800F6028: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F602C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F6030: addiu       $a3, $a3, -0x46D4
    ctx->r7 = ADD32(ctx->r7, -0X46D4);
    // 0x800F6034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F6038: jal         0x8001ABF4
    // 0x800F603C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800F603C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800F6040:
    // 0x800F6040: b           L_800F6048
    // 0x800F6044: nop

        goto L_800F6048;
    // 0x800F6044: nop

L_800F6048:
    // 0x800F6048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F604C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F6050: jr          $ra
    // 0x800F6054: nop

    return;
    // 0x800F6054: nop

;}
RECOMP_FUNC void func_800CFD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFD38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CFD3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CFD40: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CFD44: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CFD48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CFD4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CFD50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CFD54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CFD58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFD5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CFD60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFD64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CFD68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CFD6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CFD70: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800CFD74: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CFD78: nop

    // 0x800CFD7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CFD80: nop

    // 0x800CFD84: bne         $t1, $zero, L_800CFE48
    if (ctx->r9 != 0) {
        // 0x800CFD88: nop
    
            goto L_800CFE48;
    }
    // 0x800CFD88: nop

    // 0x800CFD8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CFD90: nop

    // 0x800CFD94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CFD98: nop

    // 0x800CFD9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CFDA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CFDA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CFDA8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDAC: nop

    // 0x800CFDB0: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800CFDB4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDB8: nop

    // 0x800CFDBC: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800CFDC0: nop

    // 0x800CFDC4: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800CFDC8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDCC: nop

    // 0x800CFDD0: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800CFDD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CFDD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDDC: nop

    // 0x800CFDE0: swc1        $f6, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f6.u32l;
    // 0x800CFDE4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDE8: nop

    // 0x800CFDEC: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800CFDF0: nop

    // 0x800CFDF4: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x800CFDF8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CFDFC: nop

    // 0x800CFE00: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x800CFE04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFE08: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800CFE0C: addiu       $t1, $t1, -0x7AEC
    ctx->r9 = ADD32(ctx->r9, -0X7AEC);
    // 0x800CFE10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFE14: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800CFE18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CFE1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CFE20: jal         0x8001C0EC
    // 0x800CFE24: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CFE24: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_0:
    // 0x800CFE28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFE2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFE30: jal         0x8001BB34
    // 0x800CFE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800CFE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800CFE38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFE3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFE40: jal         0x8001BB04
    // 0x800CFE44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x800CFE44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800CFE48:
    // 0x800CFE48: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800CFE4C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CFE50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CFE54: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800CFE58: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800CFE5C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800CFE60: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CFE64: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CFE68: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x800CFE6C: nop

    // 0x800CFE70: bc1f        L_800CFEA8
    if (!c1cs) {
        // 0x800CFE74: nop
    
            goto L_800CFEA8;
    }
    // 0x800CFE74: nop

    // 0x800CFE78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFE7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFE80: jal         0x8002A2EC
    // 0x800CFE84: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800CFE84: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_3:
    // 0x800CFE88: beq         $v0, $zero, L_800CFEA8
    if (ctx->r2 == 0) {
        // 0x800CFE8C: nop
    
            goto L_800CFEA8;
    }
    // 0x800CFE8C: nop

    // 0x800CFE90: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CFE94: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800CFE98: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800CFE9C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CFEA0: nop

    // 0x800CFEA4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800CFEA8:
    // 0x800CFEA8: b           L_800CFEB0
    // 0x800CFEAC: nop

        goto L_800CFEB0;
    // 0x800CFEAC: nop

L_800CFEB0:
    // 0x800CFEB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CFEB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CFEB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CFEBC: jr          $ra
    // 0x800CFEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CFEC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F0178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F0178: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F017C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F0180: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F0184: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F0188: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F018C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F0190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F0194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F0198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F019C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F01A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F01A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F01A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F01AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F01B0: nop

    // 0x800F01B4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F01B8: nop

    // 0x800F01BC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800F01C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F01C4: nop

    // 0x800F01C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F01CC: nop

    // 0x800F01D0: bne         $t3, $zero, L_800F0254
    if (ctx->r11 != 0) {
        // 0x800F01D4: nop
    
            goto L_800F0254;
    }
    // 0x800F01D4: nop

    // 0x800F01D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F01DC: nop

    // 0x800F01E0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F01E4: nop

    // 0x800F01E8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F01EC: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F01F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F01F4: nop

    // 0x800F01F8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F01FC: nop

    // 0x800F0200: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F0204: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0208: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F020C: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F0210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0214: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F0218: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F021C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F0220: jal         0x8001C0EC
    // 0x800F0224: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F0224: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F0228: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F022C: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F0230: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F0234: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F0238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F023C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F0240: jal         0x8001C0EC
    // 0x800F0244: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F0244: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F0248: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F024C: nop

    // 0x800F0250: sb          $zero, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = 0;
L_800F0254:
    // 0x800F0254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F025C: jal         0x8001B62C
    // 0x800F0260: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800F0260: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800F0264: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F0268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F026C: nop

    // 0x800F0270: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800F0274: nop

    // 0x800F0278: bc1f        L_800F03B8
    if (!c1cs) {
        // 0x800F027C: nop
    
            goto L_800F03B8;
    }
    // 0x800F027C: nop

    // 0x800F0280: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0284: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F0288: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800F028C: lwc1        $f11, 0x5610($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5610);
    // 0x800F0290: lwc1        $f10, 0x5614($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5614);
    // 0x800F0294: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800F0298: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800F029C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800F02A0: swc1        $f18, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f18.u32l;
    // 0x800F02A4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F02A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F02AC: lwc1        $f4, 0x10($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X10);
    // 0x800F02B0: lwc1        $f9, 0x5618($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5618);
    // 0x800F02B4: lwc1        $f8, 0x561C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X561C);
    // 0x800F02B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800F02BC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800F02C0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800F02C4: swc1        $f16, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f16.u32l;
    // 0x800F02C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F02CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F02D0: lwc1        $f18, 0x14($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800F02D4: lwc1        $f7, 0x5620($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5620);
    // 0x800F02D8: lwc1        $f6, 0x5624($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5624);
    // 0x800F02DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800F02E0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800F02E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800F02E8: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
    // 0x800F02EC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800F02F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F02F4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800F02F8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F02FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F0300: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F0304: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F0308: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F030C: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800F0310: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F0314: lwc1        $f16, 0xC($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800F0318: lwc1        $f5, 0x5628($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5628);
    // 0x800F031C: lwc1        $f4, 0x562C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X562C);
    // 0x800F0320: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800F0324: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800F0328: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800F032C: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x800F0330: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800F0334: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800F0338: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F033C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F0340: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F0344: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F0348: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F034C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800F0350: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800F0354: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F0358: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800F035C: lwc1        $f19, 0x5630($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5630);
    // 0x800F0360: lwc1        $f18, 0x5634($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5634);
    // 0x800F0364: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800F0368: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800F036C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800F0370: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800F0374: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800F0378: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800F037C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800F0380: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F0384: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F0388: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F038C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F0390: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800F0394: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x800F0398: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F039C: lwc1        $f8, 0x14($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800F03A0: lwc1        $f17, 0x5638($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5638);
    // 0x800F03A4: lwc1        $f16, 0x563C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X563C);
    // 0x800F03A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800F03AC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800F03B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800F03B4: swc1        $f4, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f4.u32l;
L_800F03B8:
    // 0x800F03B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F03BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F03C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F03C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F03C8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800F03CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800F03D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F03D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F03D8: jal         0x800295C0
    // 0x800F03DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800F03DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800F03E0: beq         $v0, $zero, L_800F03F8
    if (ctx->r2 == 0) {
        // 0x800F03E4: nop
    
            goto L_800F03F8;
    }
    // 0x800F03E4: nop

    // 0x800F03E8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F03EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F03F0: b           L_800F0408
    // 0x800F03F4: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_800F0408;
    // 0x800F03F4: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_800F03F8:
    // 0x800F03F8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F03FC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0400: nop

    // 0x800F0404: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
L_800F0408:
    // 0x800F0408: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F040C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F0410: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F0414: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F0418: nop

    // 0x800F041C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F0420: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800F0424: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800F0428: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F042C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800F0430: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F0434: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F0438: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F043C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800F0440: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F0444: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0448: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F044C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x800F0450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0458: jal         0x8001B4AC
    // 0x800F045C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800F045C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800F0460: beq         $v0, $zero, L_800F0540
    if (ctx->r2 == 0) {
        // 0x800F0464: nop
    
            goto L_800F0540;
    }
    // 0x800F0464: nop

    // 0x800F0468: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F046C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F0470: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0474: nop

    // 0x800F0478: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x800F047C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F0480: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F0484: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0488: nop

    // 0x800F048C: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
    // 0x800F0490: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F0494: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F0498: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800F049C: nop

    // 0x800F04A0: swc1        $f18, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f18.u32l;
    // 0x800F04A4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F04A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F04AC: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800F04B0: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F04B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F04B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F04BC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F04C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F04C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F04C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F04CC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800F04D0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800F04D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F04D8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F04DC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F04E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F04E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F04E8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F04EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F04F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F04F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F04F8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800F04FC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800F0500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F0504: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F0508: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F050C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F0510: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F0514: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F0518: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F051C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0520: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F0524: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800F0528: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F052C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800F0530: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800F0534: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0538: nop

    // 0x800F053C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800F0540:
    // 0x800F0540: b           L_800F0548
    // 0x800F0544: nop

        goto L_800F0548;
    // 0x800F0544: nop

L_800F0548:
    // 0x800F0548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F054C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F0550: jr          $ra
    // 0x800F0554: nop

    return;
    // 0x800F0554: nop

;}
RECOMP_FUNC void func_8009DFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DFF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DFF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DFF8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009DFFC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009E000: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009E004: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009E008: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009E00C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009E010: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009E014: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009E018: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009E01C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009E020: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009E024: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009E028: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009E02C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009E030: addiu       $a1, $a1, 0x3604
    ctx->r5 = ADD32(ctx->r5, 0X3604);
    // 0x8009E034: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009E038: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009E03C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009E040: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009E044: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009E048: jal         0x80027464
    // 0x8009E04C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009E04C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009E050: b           L_8009E058
    // 0x8009E054: nop

        goto L_8009E058;
    // 0x8009E054: nop

L_8009E058:
    // 0x8009E058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E05C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E060: jr          $ra
    // 0x8009E064: nop

    return;
    // 0x8009E064: nop

;}
RECOMP_FUNC void func_80075288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075288: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007528C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075290: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80075294: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80075298: nop

    // 0x8007529C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800752A0: nop

    // 0x800752A4: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x800752A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800752AC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800752B0: nop

    // 0x800752B4: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800752B8: nop

    // 0x800752BC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x800752C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800752C4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800752C8: nop

    // 0x800752CC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800752D0: nop

    // 0x800752D4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x800752D8: jal         0x80074DFC
    // 0x800752DC: nop

    func_80074DFC(rdram, ctx);
        goto after_0;
    // 0x800752DC: nop

    after_0:
    // 0x800752E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800752E4: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x800752E8: nop

    // 0x800752EC: addiu       $t0, $t9, -0xF
    ctx->r8 = ADD32(ctx->r25, -0XF);
    // 0x800752F0: sltiu       $at, $t0, 0x5E
    ctx->r1 = ctx->r8 < 0X5E ? 1 : 0;
    // 0x800752F4: beq         $at, $zero, L_800753E8
    if (ctx->r1 == 0) {
        // 0x800752F8: nop
    
            goto L_800753E8;
    }
    // 0x800752F8: nop

    // 0x800752FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80075300: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80075304: addu        $at, $at, $t0
    gpr jr_addend_80075310 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80075308: lw          $t0, 0x57D0($at)
    ctx->r8 = ADD32(ctx->r1, 0X57D0);
    // 0x8007530C: nop

    // 0x80075310: jr          $t0
    // 0x80075314: nop

    switch (jr_addend_80075310 >> 2) {
        case 0: goto L_80075380; break;
        case 1: goto L_800753E8; break;
        case 2: goto L_800753E8; break;
        case 3: goto L_800753E8; break;
        case 4: goto L_80075318; break;
        case 5: goto L_800753E8; break;
        case 6: goto L_800753E8; break;
        case 7: goto L_800753E8; break;
        case 8: goto L_800753E8; break;
        case 9: goto L_800753E8; break;
        case 10: goto L_800753E8; break;
        case 11: goto L_800753E8; break;
        case 12: goto L_800753E8; break;
        case 13: goto L_800753E8; break;
        case 14: goto L_800753E8; break;
        case 15: goto L_800753E8; break;
        case 16: goto L_800753E8; break;
        case 17: goto L_800753E8; break;
        case 18: goto L_800753E8; break;
        case 19: goto L_800753E8; break;
        case 20: goto L_800753E8; break;
        case 21: goto L_800753E8; break;
        case 22: goto L_80075318; break;
        case 23: goto L_800753E8; break;
        case 24: goto L_800753E8; break;
        case 25: goto L_800753E8; break;
        case 26: goto L_800753E8; break;
        case 27: goto L_800753E8; break;
        case 28: goto L_800753E8; break;
        case 29: goto L_800753E8; break;
        case 30: goto L_800753E8; break;
        case 31: goto L_800753E8; break;
        case 32: goto L_800753E8; break;
        case 33: goto L_800753E8; break;
        case 34: goto L_800753E8; break;
        case 35: goto L_800753E8; break;
        case 36: goto L_800753E8; break;
        case 37: goto L_800753E8; break;
        case 38: goto L_800753E8; break;
        case 39: goto L_800753E8; break;
        case 40: goto L_800753E8; break;
        case 41: goto L_800753E8; break;
        case 42: goto L_80075318; break;
        case 43: goto L_800753E8; break;
        case 44: goto L_800753E8; break;
        case 45: goto L_800753E8; break;
        case 46: goto L_800753E8; break;
        case 47: goto L_800753E8; break;
        case 48: goto L_800753E8; break;
        case 49: goto L_800753E8; break;
        case 50: goto L_800753E8; break;
        case 51: goto L_800753E8; break;
        case 52: goto L_800753E8; break;
        case 53: goto L_800753E8; break;
        case 54: goto L_800753E8; break;
        case 55: goto L_800753E8; break;
        case 56: goto L_800753E8; break;
        case 57: goto L_800753E8; break;
        case 58: goto L_800753E8; break;
        case 59: goto L_800753E8; break;
        case 60: goto L_800753E8; break;
        case 61: goto L_80075318; break;
        case 62: goto L_8007534C; break;
        case 63: goto L_80075318; break;
        case 64: goto L_80075380; break;
        case 65: goto L_800753E8; break;
        case 66: goto L_80075380; break;
        case 67: goto L_80075380; break;
        case 68: goto L_80075318; break;
        case 69: goto L_800753E8; break;
        case 70: goto L_8007534C; break;
        case 71: goto L_800753E8; break;
        case 72: goto L_80075380; break;
        case 73: goto L_80075380; break;
        case 74: goto L_80075380; break;
        case 75: goto L_800753E8; break;
        case 76: goto L_800753E8; break;
        case 77: goto L_800753E8; break;
        case 78: goto L_800753E8; break;
        case 79: goto L_800753E8; break;
        case 80: goto L_800753E8; break;
        case 81: goto L_800753E8; break;
        case 82: goto L_800753E8; break;
        case 83: goto L_800753E8; break;
        case 84: goto L_800753E8; break;
        case 85: goto L_800753E8; break;
        case 86: goto L_800753E8; break;
        case 87: goto L_800753E8; break;
        case 88: goto L_800753E8; break;
        case 89: goto L_800753E8; break;
        case 90: goto L_800753E8; break;
        case 91: goto L_800753E8; break;
        case 92: goto L_800753E8; break;
        case 93: goto L_800753B4; break;
        default: switch_error(__func__, 0x80075310, 0x801057D0);
    }
    // 0x80075314: nop

L_80075318:
    // 0x80075318: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007531C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075320: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x80075324: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80075328: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007532C: swc1        $f16, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f16.u32l;
    // 0x80075330: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80075334: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075338: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8007533C: jal         0x80071B50
    // 0x80075340: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_80071B50(rdram, ctx);
        goto after_1;
    // 0x80075340: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_1:
    // 0x80075344: b           L_8007541C
    // 0x80075348: nop

        goto L_8007541C;
    // 0x80075348: nop

L_8007534C:
    // 0x8007534C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80075350: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075354: swc1        $f6, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f6.u32l;
    // 0x80075358: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007535C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075360: swc1        $f8, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f8.u32l;
    // 0x80075364: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80075368: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007536C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80075370: jal         0x80071B50
    // 0x80075374: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_80071B50(rdram, ctx);
        goto after_2;
    // 0x80075374: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_2:
    // 0x80075378: b           L_8007541C
    // 0x8007537C: nop

        goto L_8007541C;
    // 0x8007537C: nop

L_80075380:
    // 0x80075380: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80075384: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075388: swc1        $f18, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f18.u32l;
    // 0x8007538C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80075390: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075394: swc1        $f4, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f4.u32l;
    // 0x80075398: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8007539C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800753A0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800753A4: jal         0x80071B50
    // 0x800753A8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_80071B50(rdram, ctx);
        goto after_3;
    // 0x800753A8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x800753AC: b           L_8007541C
    // 0x800753B0: nop

        goto L_8007541C;
    // 0x800753B0: nop

L_800753B4:
    // 0x800753B4: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800753B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800753BC: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x800753C0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800753C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800753C8: swc1        $f16, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f16.u32l;
    // 0x800753CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800753D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800753D4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800753D8: jal         0x80071B50
    // 0x800753DC: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_80071B50(rdram, ctx);
        goto after_4;
    // 0x800753DC: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_4:
    // 0x800753E0: b           L_8007541C
    // 0x800753E4: nop

        goto L_8007541C;
    // 0x800753E4: nop

L_800753E8:
    // 0x800753E8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800753EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800753F0: swc1        $f6, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f6.u32l;
    // 0x800753F4: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800753F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800753FC: swc1        $f8, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f8.u32l;
    // 0x80075400: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80075404: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075408: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8007540C: jal         0x80071B50
    // 0x80075410: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_80071B50(rdram, ctx);
        goto after_5;
    // 0x80075410: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_5:
    // 0x80075414: b           L_8007541C
    // 0x80075418: nop

        goto L_8007541C;
    // 0x80075418: nop

L_8007541C:
    // 0x8007541C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075420: lwc1        $f18, 0x7A58($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075428: swc1        $f18, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f18.u32l;
    // 0x8007542C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80075430: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80075434: nop

    // 0x80075438: addiu       $t2, $t1, -0xF
    ctx->r10 = ADD32(ctx->r9, -0XF);
    // 0x8007543C: sltiu       $at, $t2, 0x5E
    ctx->r1 = ctx->r10 < 0X5E ? 1 : 0;
    // 0x80075440: beq         $at, $zero, L_800755E4
    if (ctx->r1 == 0) {
        // 0x80075444: nop
    
            goto L_800755E4;
    }
    // 0x80075444: nop

    // 0x80075448: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8007544C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80075450: addu        $at, $at, $t2
    gpr jr_addend_8007545C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80075454: lw          $t2, 0x5948($at)
    ctx->r10 = ADD32(ctx->r1, 0X5948);
    // 0x80075458: nop

    // 0x8007545C: jr          $t2
    // 0x80075460: nop

    switch (jr_addend_8007545C >> 2) {
        case 0: goto L_80075464; break;
        case 1: goto L_800755E4; break;
        case 2: goto L_800755E4; break;
        case 3: goto L_800755E4; break;
        case 4: goto L_80075464; break;
        case 5: goto L_800755E4; break;
        case 6: goto L_800755E4; break;
        case 7: goto L_800755E4; break;
        case 8: goto L_800755E4; break;
        case 9: goto L_800755E4; break;
        case 10: goto L_800755E4; break;
        case 11: goto L_800755E4; break;
        case 12: goto L_800755E4; break;
        case 13: goto L_800755E4; break;
        case 14: goto L_800755E4; break;
        case 15: goto L_800755E4; break;
        case 16: goto L_800755E4; break;
        case 17: goto L_800755E4; break;
        case 18: goto L_800755E4; break;
        case 19: goto L_800755E4; break;
        case 20: goto L_800755E4; break;
        case 21: goto L_800755E4; break;
        case 22: goto L_80075464; break;
        case 23: goto L_800755E4; break;
        case 24: goto L_800755E4; break;
        case 25: goto L_800755E4; break;
        case 26: goto L_800755E4; break;
        case 27: goto L_800755E4; break;
        case 28: goto L_800755E4; break;
        case 29: goto L_800755E4; break;
        case 30: goto L_800755E4; break;
        case 31: goto L_800755E4; break;
        case 32: goto L_800755E4; break;
        case 33: goto L_800755E4; break;
        case 34: goto L_800755E4; break;
        case 35: goto L_800755E4; break;
        case 36: goto L_800755E4; break;
        case 37: goto L_800755E4; break;
        case 38: goto L_800755E4; break;
        case 39: goto L_800755E4; break;
        case 40: goto L_800755E4; break;
        case 41: goto L_800755E4; break;
        case 42: goto L_80075464; break;
        case 43: goto L_800755E4; break;
        case 44: goto L_800755E4; break;
        case 45: goto L_800755E4; break;
        case 46: goto L_800755E4; break;
        case 47: goto L_800755E4; break;
        case 48: goto L_800755E4; break;
        case 49: goto L_800755E4; break;
        case 50: goto L_800755E4; break;
        case 51: goto L_800755E4; break;
        case 52: goto L_800755E4; break;
        case 53: goto L_800755E4; break;
        case 54: goto L_800755E4; break;
        case 55: goto L_800755E4; break;
        case 56: goto L_800755E4; break;
        case 57: goto L_800755E4; break;
        case 58: goto L_800755E4; break;
        case 59: goto L_800755E4; break;
        case 60: goto L_800755E4; break;
        case 61: goto L_80075464; break;
        case 62: goto L_80075464; break;
        case 63: goto L_80075464; break;
        case 64: goto L_80075464; break;
        case 65: goto L_800755E4; break;
        case 66: goto L_800754C4; break;
        case 67: goto L_80075524; break;
        case 68: goto L_80075464; break;
        case 69: goto L_800755E4; break;
        case 70: goto L_80075464; break;
        case 71: goto L_800755E4; break;
        case 72: goto L_80075464; break;
        case 73: goto L_80075464; break;
        case 74: goto L_80075464; break;
        case 75: goto L_80075464; break;
        case 76: goto L_800755E4; break;
        case 77: goto L_800755E4; break;
        case 78: goto L_800755E4; break;
        case 79: goto L_800755E4; break;
        case 80: goto L_800755E4; break;
        case 81: goto L_800755E4; break;
        case 82: goto L_800755E4; break;
        case 83: goto L_800755E4; break;
        case 84: goto L_800755E4; break;
        case 85: goto L_800755E4; break;
        case 86: goto L_800755E4; break;
        case 87: goto L_800755E4; break;
        case 88: goto L_800755E4; break;
        case 89: goto L_800755E4; break;
        case 90: goto L_800755E4; break;
        case 91: goto L_800755E4; break;
        case 92: goto L_800755E4; break;
        case 93: goto L_80075584; break;
        default: switch_error(__func__, 0x8007545C, 0x80105948);
    }
    // 0x80075460: nop

L_80075464:
    // 0x80075464: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075468: lwc1        $f4, 0x75A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x8007546C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075470: lwc1        $f6, 0x75FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75FC);
    // 0x80075474: nop

    // 0x80075478: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007547C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x80075480: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075484: lwc1        $f10, 0x75B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80075488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007548C: lwc1        $f16, 0x760C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x80075490: nop

    // 0x80075494: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80075498: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x8007549C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800754A0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800754A4: jal         0x80074C7C
    // 0x800754A8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80074C7C(rdram, ctx);
        goto after_6;
    // 0x800754A8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_6:
    // 0x800754AC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800754B0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800754B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800754B8: swc1        $f4, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f4.u32l;
    // 0x800754BC: b           L_800756B8
    // 0x800754C0: nop

        goto L_800756B8;
    // 0x800754C0: nop

L_800754C4:
    // 0x800754C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800754C8: lwc1        $f6, 0x75A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x800754CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800754D0: lwc1        $f8, 0x75FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75FC);
    // 0x800754D4: nop

    // 0x800754D8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800754DC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x800754E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800754E4: lwc1        $f16, 0x75B8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x800754E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800754EC: lwc1        $f18, 0x760C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x800754F0: nop

    // 0x800754F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800754F8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x800754FC: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80075500: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80075504: jal         0x80074C7C
    // 0x80075508: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80074C7C(rdram, ctx);
        goto after_7;
    // 0x80075508: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x8007550C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80075510: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80075514: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075518: swc1        $f6, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f6.u32l;
    // 0x8007551C: b           L_800756B8
    // 0x80075520: nop

        goto L_800756B8;
    // 0x80075520: nop

L_80075524:
    // 0x80075524: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075528: lwc1        $f8, 0x75A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x8007552C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075530: lwc1        $f10, 0x75FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75FC);
    // 0x80075534: nop

    // 0x80075538: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8007553C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80075540: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075544: lwc1        $f18, 0x75B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80075548: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007554C: lwc1        $f4, 0x760C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x80075550: nop

    // 0x80075554: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80075558: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8007555C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80075560: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80075564: jal         0x80074C7C
    // 0x80075568: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_80074C7C(rdram, ctx);
        goto after_8;
    // 0x80075568: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_8:
    // 0x8007556C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80075570: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80075574: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075578: swc1        $f8, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f8.u32l;
    // 0x8007557C: b           L_800756B8
    // 0x80075580: nop

        goto L_800756B8;
    // 0x80075580: nop

L_80075584:
    // 0x80075584: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075588: lwc1        $f10, 0x75A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x8007558C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075590: lwc1        $f16, 0x75FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75FC);
    // 0x80075594: nop

    // 0x80075598: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8007559C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x800755A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800755A4: lwc1        $f4, 0x75B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x800755A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800755AC: lwc1        $f6, 0x760C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x800755B0: nop

    // 0x800755B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800755B8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x800755BC: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800755C0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800755C4: jal         0x80074C7C
    // 0x800755C8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80074C7C(rdram, ctx);
        goto after_9;
    // 0x800755C8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_9:
    // 0x800755CC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800755D0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800755D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800755D8: swc1        $f10, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f10.u32l;
    // 0x800755DC: b           L_800756B8
    // 0x800755E0: nop

        goto L_800756B8;
    // 0x800755E0: nop

L_800755E4:
    // 0x800755E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800755E8: lwc1        $f16, 0x75A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x800755EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800755F0: lwc1        $f18, 0x75FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75FC);
    // 0x800755F4: nop

    // 0x800755F8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800755FC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80075600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075604: lwc1        $f6, 0x75B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80075608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007560C: lwc1        $f8, 0x760C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X760C);
    // 0x80075610: nop

    // 0x80075614: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80075618: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8007561C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80075620: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80075624: jal         0x80015634
    // 0x80075628: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_10;
    // 0x80075628: nop

    after_10:
    // 0x8007562C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80075630: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075634: nop

    // 0x80075638: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8007563C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80075640: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80075644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075648: swc1        $f4, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f4.u32l;
    // 0x8007564C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075650: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80075654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075658: lwc1        $f14, 0x75C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x8007565C: jal         0x80015538
    // 0x80075660: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80075660: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_11:
    // 0x80075664: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80075668: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8007566C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075670: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80075674: nop

    // 0x80075678: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8007567C: nop

    // 0x80075680: bc1f        L_800756B0
    if (!c1cs) {
        // 0x80075684: nop
    
            goto L_800756B0;
    }
    // 0x80075684: nop

    // 0x80075688: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8007568C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075690: nop

    // 0x80075694: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80075698: nop

    // 0x8007569C: bc1f        L_800756B0
    if (!c1cs) {
        // 0x800756A0: nop
    
            goto L_800756B0;
    }
    // 0x800756A0: nop

    // 0x800756A4: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800756A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800756AC: sb          $t3, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = ctx->r11;
L_800756B0:
    // 0x800756B0: b           L_800756B8
    // 0x800756B4: nop

        goto L_800756B8;
    // 0x800756B4: nop

L_800756B8:
    // 0x800756B8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800756BC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x800756C0: nop

    // 0x800756C4: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x800756C8: nop

    // 0x800756CC: beq         $t5, $zero, L_800756DC
    if (ctx->r13 == 0) {
        // 0x800756D0: nop
    
            goto L_800756DC;
    }
    // 0x800756D0: nop

    // 0x800756D4: b           L_80075710
    // 0x800756D8: nop

        goto L_80075710;
    // 0x800756D8: nop

L_800756DC:
    // 0x800756DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800756E0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800756E4: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x800756E8: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x800756EC: nop

    // 0x800756F0: bne         $t7, $at, L_80075708
    if (ctx->r15 != ctx->r1) {
        // 0x800756F4: nop
    
            goto L_80075708;
    }
    // 0x800756F4: nop

    // 0x800756F8: jal         0x80071CF4
    // 0x800756FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80071CF4(rdram, ctx);
        goto after_12;
    // 0x800756FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80075700: b           L_80075710
    // 0x80075704: nop

        goto L_80075710;
    // 0x80075704: nop

L_80075708:
    // 0x80075708: jal         0x80071CF4
    // 0x8007570C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80071CF4(rdram, ctx);
        goto after_13;
    // 0x8007570C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
L_80075710:
    // 0x80075710: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075714: lwc1        $f12, -0x1EBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80075718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007571C: lwc1        $f14, 0x75B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x80075720: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80075724: jal         0x80071A88
    // 0x80075728: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    func_80071A88(rdram, ctx);
        goto after_14;
    // 0x80075728: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    after_14:
    // 0x8007572C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075730: swc1        $f0, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f0.u32l;
    // 0x80075734: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075738: lwc1        $f16, 0x75A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x8007573C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075740: swc1        $f16, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f16.u32l;
    // 0x80075744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075748: lwc1        $f18, 0x75B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x8007574C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075750: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80075754: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075758: lwc1        $f4, 0x75D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x8007575C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075760: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x80075764: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075768: lwc1        $f8, 0x75C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x8007576C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075770: swc1        $f8, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f8.u32l;
    // 0x80075774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075778: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8007577C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075780: lwc1        $f14, 0x75C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x80075784: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80075788: jal         0x80071A88
    // 0x8007578C: addiu       $a2, $a2, 0x75F8
    ctx->r6 = ADD32(ctx->r6, 0X75F8);
    func_80071A88(rdram, ctx);
        goto after_15;
    // 0x8007578C: addiu       $a2, $a2, 0x75F8
    ctx->r6 = ADD32(ctx->r6, 0X75F8);
    after_15:
    // 0x80075790: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075794: swc1        $f0, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f0.u32l;
    // 0x80075798: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007579C: lwc1        $f6, 0x75D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x800757A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800757A4: swc1        $f6, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f6.u32l;
    // 0x800757A8: b           L_800757B0
    // 0x800757AC: nop

        goto L_800757B0;
    // 0x800757AC: nop

L_800757B0:
    // 0x800757B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800757B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800757B8: jr          $ra
    // 0x800757BC: nop

    return;
    // 0x800757BC: nop

;}
RECOMP_FUNC void func_800DAD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAD20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DAD24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DAD28: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DAD2C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DAD30: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DAD34: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DAD38: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DAD3C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DAD40: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DAD44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DAD48: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DAD4C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DAD50: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DAD54: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DAD58: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DAD5C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DAD60: addiu       $a1, $a1, 0x42E8
    ctx->r5 = ADD32(ctx->r5, 0X42E8);
    // 0x800DAD64: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DAD68: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DAD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DAD70: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DAD74: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DAD78: jal         0x80027464
    // 0x800DAD7C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DAD7C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DAD80: b           L_800DAD88
    // 0x800DAD84: nop

        goto L_800DAD88;
    // 0x800DAD84: nop

L_800DAD88:
    // 0x800DAD88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DAD8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DAD90: jr          $ra
    // 0x800DAD94: nop

    return;
    // 0x800DAD94: nop

;}
RECOMP_FUNC void func_800B5978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5978: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B597C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B5980: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B5984: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B5988: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B598C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B5990: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B5994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5998: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B599C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B59A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B59A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B59A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B59AC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B59B0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B59B4: nop

    // 0x800B59B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B59BC: nop

    // 0x800B59C0: bne         $t1, $zero, L_800B5A54
    if (ctx->r9 != 0) {
        // 0x800B59C4: nop
    
            goto L_800B5A54;
    }
    // 0x800B59C4: nop

    // 0x800B59C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B59CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B59D0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B59D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800B59D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B59DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B59E0: nop

    // 0x800B59E4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B59E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B59EC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B59F0: nop

    // 0x800B59F4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B59F8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B59FC: addiu       $t6, $zero, 0x294
    ctx->r14 = ADD32(0, 0X294);
    // 0x800B5A00: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800B5A04: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B5A08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B5A0C: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800B5A10: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B5A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5A18: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800B5A1C: addiu       $t1, $t1, 0x7AA0
    ctx->r9 = ADD32(ctx->r9, 0X7AA0);
    // 0x800B5A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5A24: lh          $a2, 0xA8($t0)
    ctx->r6 = MEM_H(ctx->r8, 0XA8);
    // 0x800B5A28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800B5A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5A30: jal         0x8001C0EC
    // 0x800B5A34: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B5A34: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_0:
    // 0x800B5A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5A44: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x800B5A48: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B5A4C: jal         0x800175F0
    // 0x800B5A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800B5A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800B5A54:
    // 0x800B5A54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5A5C: jal         0x8002A8B4
    // 0x800B5A60: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B5A60: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_2:
    // 0x800B5A64: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B5A68: nop

    // 0x800B5A6C: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B5A70: nop

    // 0x800B5A74: swc1        $f8, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f8.u32l;
    // 0x800B5A78: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B5A7C: nop

    // 0x800B5A80: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800B5A84: nop

    // 0x800B5A88: addiu       $t5, $t4, -0x3
    ctx->r13 = ADD32(ctx->r12, -0X3);
    // 0x800B5A8C: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800B5A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5A98: jal         0x80028FA0
    // 0x800B5A9C: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800B5A9C: nop

    after_3:
    // 0x800B5AA0: beq         $v0, $zero, L_800B5AB8
    if (ctx->r2 == 0) {
        // 0x800B5AA4: nop
    
            goto L_800B5AB8;
    }
    // 0x800B5AA4: nop

    // 0x800B5AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5AB0: jal         0x80029B60
    // 0x800B5AB4: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800B5AB4: nop

    after_4:
L_800B5AB8:
    // 0x800B5AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5AC0: jal         0x80029C40
    // 0x800B5AC4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B5AC4: nop

    after_5:
    // 0x800B5AC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5AD0: jal         0x80029D04
    // 0x800B5AD4: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800B5AD4: nop

    after_6:
    // 0x800B5AD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B5ADC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B5AE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5AE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5AE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B5AEC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B5AF0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B5AF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B5AF8: jal         0x80029018
    // 0x800B5AFC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800B5AFC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800B5B00: beq         $v0, $zero, L_800B5B24
    if (ctx->r2 == 0) {
        // 0x800B5B04: nop
    
            goto L_800B5B24;
    }
    // 0x800B5B04: nop

    // 0x800B5B08: jal         0x800297DC
    // 0x800B5B0C: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800B5B0C: nop

    after_8:
    // 0x800B5B10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5B14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5B18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B5B1C: jal         0x80029824
    // 0x800B5B20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800B5B20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800B5B24:
    // 0x800B5B24: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B5B28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B5B2C: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800B5B30: nop

    // 0x800B5B34: bne         $t7, $at, L_800B5BA0
    if (ctx->r15 != ctx->r1) {
        // 0x800B5B38: nop
    
            goto L_800B5BA0;
    }
    // 0x800B5B38: nop

    // 0x800B5B3C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B5B40: lui         $at, 0xC5B4
    ctx->r1 = S32(0XC5B4 << 16);
    // 0x800B5B44: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800B5B48: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B5B4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B5B50: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B5B54: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B5B58: nop

    // 0x800B5B5C: bc1f        L_800B5BA0
    if (!c1cs) {
        // 0x800B5B60: nop
    
            goto L_800B5BA0;
    }
    // 0x800B5B60: nop

    // 0x800B5B64: jal         0x800297DC
    // 0x800B5B68: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800B5B68: nop

    after_10:
    // 0x800B5B6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5B70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5B74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B5B78: jal         0x80029824
    // 0x800B5B7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800B5B7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800B5B80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B5B84: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B5B88: nop

    // 0x800B5B8C: swc1        $f10, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f10.u32l;
    // 0x800B5B90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B5B94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B5B98: nop

    // 0x800B5B9C: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
L_800B5BA0:
    // 0x800B5BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5BA8: jal         0x8001B44C
    // 0x800B5BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_12;
    // 0x800B5BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800B5BB0: beq         $v0, $zero, L_800B5CB0
    if (ctx->r2 == 0) {
        // 0x800B5BB4: nop
    
            goto L_800B5CB0;
    }
    // 0x800B5BB4: nop

    // 0x800B5BB8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B5BBC: nop

    // 0x800B5BC0: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800B5BC4: nop

    // 0x800B5BC8: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x800B5BCC: sh          $t4, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r12;
    // 0x800B5BD0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B5BD4: nop

    // 0x800B5BD8: lh          $t3, 0xA8($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XA8);
    // 0x800B5BDC: nop

    // 0x800B5BE0: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x800B5BE4: bne         $at, $zero, L_800B5C10
    if (ctx->r1 != 0) {
        // 0x800B5BE8: nop
    
            goto L_800B5C10;
    }
    // 0x800B5BE8: nop

    // 0x800B5BEC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B5BF0: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x800B5BF4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B5BF8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B5BFC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B5C00: sh          $t8, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r24;
    // 0x800B5C04: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C08: nop

    // 0x800B5C0C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800B5C10:
    // 0x800B5C10: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B5C18: lh          $t4, 0xA8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA8);
    // 0x800B5C1C: nop

    // 0x800B5C20: bne         $t4, $at, L_800B5C4C
    if (ctx->r12 != ctx->r1) {
        // 0x800B5C24: nop
    
            goto L_800B5C4C;
    }
    // 0x800B5C24: nop

    // 0x800B5C28: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800B5C2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B5C30: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C34: nop

    // 0x800B5C38: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
    // 0x800B5C3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B5C40: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C44: nop

    // 0x800B5C48: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
L_800B5C4C:
    // 0x800B5C4C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800B5C54: lh          $t6, 0xA8($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA8);
    // 0x800B5C58: nop

    // 0x800B5C5C: bne         $t6, $at, L_800B5C88
    if (ctx->r14 != ctx->r1) {
        // 0x800B5C60: nop
    
            goto L_800B5C88;
    }
    // 0x800B5C60: nop

    // 0x800B5C64: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800B5C68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B5C6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C70: nop

    // 0x800B5C74: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x800B5C78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B5C7C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C80: nop

    // 0x800B5C84: swc1        $f8, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f8.u32l;
L_800B5C88:
    // 0x800B5C88: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B5C8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5C90: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800B5C94: addiu       $t0, $t0, 0x7AA0
    ctx->r8 = ADD32(ctx->r8, 0X7AA0);
    // 0x800B5C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5C9C: lh          $a2, 0xA8($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XA8);
    // 0x800B5CA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800B5CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5CA8: jal         0x8001C0EC
    // 0x800B5CAC: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x800B5CAC: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_13:
L_800B5CB0:
    // 0x800B5CB0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B5CB4: jal         0x800C0194
    // 0x800B5CB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C0194(rdram, ctx);
        goto after_14;
    // 0x800B5CB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_14:
    // 0x800B5CBC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B5CC0: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800B5CC4: nop

    // 0x800B5CC8: slti        $at, $t2, -0x50
    ctx->r1 = SIGNED(ctx->r10) < -0X50 ? 1 : 0;
    // 0x800B5CCC: beq         $at, $zero, L_800B5CF4
    if (ctx->r1 == 0) {
        // 0x800B5CD0: nop
    
            goto L_800B5CF4;
    }
    // 0x800B5CD0: nop

    // 0x800B5CD4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B5CD8: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x800B5CDC: sh          $t4, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r12;
    // 0x800B5CE0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B5CE4: nop

    // 0x800B5CE8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800B5CEC: b           L_800B5D08
    // 0x800B5CF0: nop

        goto L_800B5D08;
    // 0x800B5CF0: nop

L_800B5CF4:
    // 0x800B5CF4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B5CF8: jal         0x800C00F4
    // 0x800B5CFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_15;
    // 0x800B5CFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
    // 0x800B5D00: b           L_800B5D08
    // 0x800B5D04: nop

        goto L_800B5D08;
    // 0x800B5D04: nop

L_800B5D08:
    // 0x800B5D08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B5D0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B5D10: jr          $ra
    // 0x800B5D14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B5D14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D9298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D929C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D92A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D92A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D92A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D92AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D92B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D92B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D92B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D92BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D92C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D92C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D92C8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D92CC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D92D0: nop

    // 0x800D92D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D92D8: nop

    // 0x800D92DC: bne         $t1, $zero, L_800D9348
    if (ctx->r9 != 0) {
        // 0x800D92E0: nop
    
            goto L_800D9348;
    }
    // 0x800D92E0: nop

    // 0x800D92E4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D92E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D92EC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D92F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D92F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D92F8: jal         0x8002A46C
    // 0x800D92FC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800D92FC: nop

    after_0:
    // 0x800D9300: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800D9304: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9308: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800D930C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D9310: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D9314: nop

    // 0x800D9318: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D931C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x800D9320: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800D9324: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D9328: nop

    // 0x800D932C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9334: jal         0x8002A560
    // 0x800D9338: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A560(rdram, ctx);
        goto after_1;
    // 0x800D9338: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x800D933C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9340: nop

    // 0x800D9344: sh          $v0, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r2;
L_800D9348:
    // 0x800D9348: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800D934C: nop

    // 0x800D9350: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800D9354: lwc1        $f14, 0x3C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D9358: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800D935C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x800D9360: jal         0x80015538
    // 0x800D9364: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800D9364: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_2:
    // 0x800D9368: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800D936C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x800D9370: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D9374: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800D9378: nop

    // 0x800D937C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x800D9380: nop

    // 0x800D9384: bc1t        L_800D93A8
    if (c1cs) {
        // 0x800D9388: nop
    
            goto L_800D93A8;
    }
    // 0x800D9388: nop

    // 0x800D938C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D9390: lwc1        $f16, 0x5130($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5130);
    // 0x800D9394: nop

    // 0x800D9398: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800D939C: nop

    // 0x800D93A0: bc1f        L_800D93C0
    if (!c1cs) {
        // 0x800D93A4: nop
    
            goto L_800D93C0;
    }
    // 0x800D93A4: nop

L_800D93A8:
    // 0x800D93A8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800D93AC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800D93B0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800D93B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D93B8: b           L_800D9408
    // 0x800D93BC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800D9408;
    // 0x800D93BC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800D93C0:
    // 0x800D93C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D93C4: nop

    // 0x800D93C8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800D93CC: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800D93D0: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800D93D4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800D93D8: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800D93DC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800D93E0: jal         0x80015538
    // 0x800D93E4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800D93E4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_3:
    // 0x800D93E8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D93EC: nop

    // 0x800D93F0: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800D93F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D93F8: nop

    // 0x800D93FC: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800D9400: nop

    // 0x800D9404: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
L_800D9408:
    // 0x800D9408: b           L_800D9410
    // 0x800D940C: nop

        goto L_800D9410;
    // 0x800D940C: nop

L_800D9410:
    // 0x800D9410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D9414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D9418: jr          $ra
    // 0x800D941C: nop

    return;
    // 0x800D941C: nop

;}
RECOMP_FUNC void func_80079BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079BEC: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x80079BF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80079BF4: sw          $a0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r4;
    // 0x80079BF8: sw          $a1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r5;
    // 0x80079BFC: sw          $a2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r6;
    // 0x80079C00: sw          $a3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r7;
    // 0x80079C04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80079C08: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80079C0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80079C10: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x80079C14: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x80079C18: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80079C1C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80079C20: jal         0x800372A0
    // 0x80079C24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x80079C24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80079C28: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80079C2C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80079C30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80079C34: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    // 0x80079C38: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x80079C3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80079C40: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80079C44: jal         0x800372A0
    // 0x80079C48: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x80079C48: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80079C4C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80079C50: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80079C54: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80079C58: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80079C5C: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x80079C60: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x80079C64: jal         0x80037200
    // 0x80079C68: nop

    guTranslateF(rdram, ctx);
        goto after_2;
    // 0x80079C68: nop

    after_2:
    // 0x80079C6C: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x80079C70: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x80079C74: jal         0x80036400
    // 0x80079C78: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    guMtxCatF(rdram, ctx);
        goto after_3;
    // 0x80079C78: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80079C7C: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x80079C80: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80079C84: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80079C88: jal         0x80036400
    // 0x80079C8C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    guMtxCatF(rdram, ctx);
        goto after_4;
    // 0x80079C8C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_4:
    // 0x80079C90: lw          $t1, 0x12C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X12C);
    // 0x80079C94: lw          $t0, 0x130($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X130);
    // 0x80079C98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80079C9C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80079CA0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80079CA4: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x80079CA8: lh          $t6, 0x2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X2);
    // 0x80079CAC: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80079CB0: lh          $t7, 0x4($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X4);
    // 0x80079CB4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80079CB8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80079CBC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80079CC0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80079CC4: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80079CC8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80079CCC: lw          $t8, 0x128($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X128);
    // 0x80079CD0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80079CD4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80079CD8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80079CDC: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80079CE0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80079CE4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80079CE8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80079CEC: addiu       $t1, $t8, 0x8
    ctx->r9 = ADD32(ctx->r24, 0X8);
    // 0x80079CF0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80079CF4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80079CF8: jal         0x80036360
    // 0x80079CFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    guMtxXFMF(rdram, ctx);
        goto after_5;
    // 0x80079CFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x80079D00: b           L_80079D08
    // 0x80079D04: nop

        goto L_80079D08;
    // 0x80079D04: nop

L_80079D08:
    // 0x80079D08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80079D0C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x80079D10: jr          $ra
    // 0x80079D14: nop

    return;
    // 0x80079D14: nop

;}
RECOMP_FUNC void func_8008E3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E3B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E3B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E3B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008E3BC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008E3C0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008E3C4: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008E3C8: nop

    // 0x8008E3CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008E3D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E3D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E3D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E3DC: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008E3E0: nop

    // 0x8008E3E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008E3E8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008E3EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E3F0: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8008E3F4: lh          $a2, 0x4($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X4);
    // 0x8008E3F8: jal         0x8001C158
    // 0x8008E3FC: nop

    func_8001C158(rdram, ctx);
        goto after_0;
    // 0x8008E3FC: nop

    after_0:
    // 0x8008E400: b           L_8008E408
    // 0x8008E404: nop

        goto L_8008E408;
    // 0x8008E404: nop

L_8008E408:
    // 0x8008E408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008E410: jr          $ra
    // 0x8008E414: nop

    return;
    // 0x8008E414: nop

;}
RECOMP_FUNC void func_80096C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096C54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096C5C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80096C60: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80096C64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80096C68: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80096C6C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80096C70: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80096C74: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80096C78: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80096C7C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80096C80: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80096C84: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80096C88: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80096C8C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80096C90: addiu       $a1, $a1, 0x361C
    ctx->r5 = ADD32(ctx->r5, 0X361C);
    // 0x80096C94: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80096C98: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80096C9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80096CA0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80096CA4: jal         0x80027464
    // 0x80096CA8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80096CA8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80096CAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80096CB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096CB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80096CB8: beq         $t0, $at, L_80096F70
    if (ctx->r8 == ctx->r1) {
        // 0x80096CBC: nop
    
            goto L_80096F70;
    }
    // 0x80096CBC: nop

    // 0x80096CC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80096CC4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80096CC8: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x80096CCC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80096CD0: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x80096CD4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80096CD8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80096CDC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80096CE0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80096CE4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80096CE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096CEC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80096CF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80096CF4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80096CF8: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x80096CFC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80096D00: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80096D04: nop

    // 0x80096D08: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x80096D0C: nop

    // 0x80096D10: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80096D14: beq         $at, $zero, L_80096D8C
    if (ctx->r1 == 0) {
        // 0x80096D18: nop
    
            goto L_80096D8C;
    }
    // 0x80096D18: nop

    // 0x80096D1C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80096D20: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80096D24: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80096D28: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x80096D2C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80096D30: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80096D34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096D38: lh          $t1, 0x4820($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4820);
    // 0x80096D3C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80096D40: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80096D44: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80096D48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80096D4C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80096D50: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80096D54: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80096D58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096D5C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80096D60: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x80096D64: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80096D68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096D6C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80096D70: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80096D74: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80096D78: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80096D7C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80096D80: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80096D84: b           L_80096E48
    // 0x80096D88: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
        goto L_80096E48;
    // 0x80096D88: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
L_80096D8C:
    // 0x80096D8C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80096D90: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80096D94: nop

    // 0x80096D98: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x80096D9C: nop

    // 0x80096DA0: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x80096DA4: beq         $at, $zero, L_80096E20
    if (ctx->r1 == 0) {
        // 0x80096DA8: nop
    
            goto L_80096E20;
    }
    // 0x80096DA8: nop

    // 0x80096DAC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80096DB0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80096DB4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80096DB8: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x80096DBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80096DC0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80096DC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096DC8: lh          $t1, 0x4820($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4820);
    // 0x80096DCC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80096DD0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80096DD4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80096DD8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80096DDC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80096DE0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80096DE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80096DE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096DEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80096DF0: swc1        $f8, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f8.u32l;
    // 0x80096DF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80096DF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096DFC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80096E00: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80096E04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096E08: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80096E0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096E10: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80096E14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80096E18: b           L_80096E48
    // 0x80096E1C: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
        goto L_80096E48;
    // 0x80096E1C: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
L_80096E20:
    // 0x80096E20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80096E24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096E28: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80096E2C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80096E30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80096E34: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80096E38: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80096E3C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80096E40: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80096E44: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
L_80096E48:
    // 0x80096E48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096E4C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80096E50: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80096E54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096E58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80096E5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096E60: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80096E64: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80096E68: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80096E6C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80096E70: nop

    // 0x80096E74: sh          $t5, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r13;
    // 0x80096E78: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80096E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096E80: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80096E84: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80096E88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096E8C: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80096E90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096E94: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80096E98: lwc1        $f12, 0x418C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80096E9C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80096EA0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80096EA4: jal         0x80015538
    // 0x80096EA8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80096EA8: nop

    after_1:
    // 0x80096EAC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80096EB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096EB4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80096EB8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80096EBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80096EC0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80096EC4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80096EC8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80096ECC: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x80096ED0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80096ED4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096ED8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80096EDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80096EE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80096EE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80096EE8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80096EEC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80096EF0: lwc1        $f12, 0x4190($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80096EF4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80096EF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80096EFC: jal         0x80015538
    // 0x80096F00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80096F00: nop

    after_2:
    // 0x80096F04: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80096F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096F0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80096F10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80096F14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80096F18: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80096F1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80096F20: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80096F24: swc1        $f0, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f0.u32l;
    // 0x80096F28: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80096F2C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80096F30: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80096F34: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80096F38: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x80096F3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096F40: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80096F44: lh          $t4, 0xE($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XE);
    // 0x80096F48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096F4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096F50: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80096F54: sh          $t4, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r12;
    // 0x80096F58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80096F5C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80096F60: addiu       $a3, $a3, -0x46D4
    ctx->r7 = ADD32(ctx->r7, -0X46D4);
    // 0x80096F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80096F68: jal         0x8001ABF4
    // 0x80096F6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80096F6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80096F70:
    // 0x80096F70: b           L_80096F78
    // 0x80096F74: nop

        goto L_80096F78;
    // 0x80096F74: nop

L_80096F78:
    // 0x80096F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096F7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096F80: jr          $ra
    // 0x80096F84: nop

    return;
    // 0x80096F84: nop

;}
RECOMP_FUNC void func_800AD6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD6A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AD6A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AD6A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD6AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AD6B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AD6B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AD6B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD6BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AD6C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD6C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AD6C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AD6CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AD6D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AD6D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AD6D8: nop

    // 0x800AD6DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AD6E0: nop

    // 0x800AD6E4: bne         $t1, $zero, L_800AD764
    if (ctx->r9 != 0) {
        // 0x800AD6E8: nop
    
            goto L_800AD764;
    }
    // 0x800AD6E8: nop

    // 0x800AD6EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AD6F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AD6F4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AD6F8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800AD6FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AD700: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AD704: nop

    // 0x800AD708: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AD70C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AD710: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AD714: nop

    // 0x800AD718: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AD71C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AD720: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x800AD724: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800AD728: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AD72C: nop

    // 0x800AD730: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800AD734: nop

    // 0x800AD738: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800AD73C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800AD740: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AD744: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800AD748: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AD74C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800AD750: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x800AD754: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800AD758: nop

    // 0x800AD75C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AD760: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
L_800AD764:
    // 0x800AD764: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AD768: nop

    // 0x800AD76C: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800AD770: nop

    // 0x800AD774: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x800AD778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD77C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD780: jal         0x80029C40
    // 0x800AD784: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AD784: nop

    after_0:
    // 0x800AD788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD78C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD790: jal         0x80028FA0
    // 0x800AD794: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800AD794: nop

    after_1:
    // 0x800AD798: beq         $v0, $zero, L_800AD7D0
    if (ctx->r2 == 0) {
        // 0x800AD79C: nop
    
            goto L_800AD7D0;
    }
    // 0x800AD79C: nop

    // 0x800AD7A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800AD7A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AD7A8: nop

    // 0x800AD7AC: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
    // 0x800AD7B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AD7B4: nop

    // 0x800AD7B8: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800AD7BC: nop

    // 0x800AD7C0: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
    // 0x800AD7C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AD7C8: nop

    // 0x800AD7CC: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_800AD7D0:
    // 0x800AD7D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AD7D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800AD7D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD7DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD7E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AD7E4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800AD7E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AD7EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800AD7F0: jal         0x80029018
    // 0x800AD7F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800AD7F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800AD7F8: beq         $v0, $zero, L_800AD80C
    if (ctx->r2 == 0) {
        // 0x800AD7FC: nop
    
            goto L_800AD80C;
    }
    // 0x800AD7FC: nop

    // 0x800AD800: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AD804: nop

    // 0x800AD808: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800AD80C:
    // 0x800AD80C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AD810: nop

    // 0x800AD814: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800AD818: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800AD81C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800AD820: nop

    // 0x800AD824: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800AD828: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800AD82C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800AD830: nop

    // 0x800AD834: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800AD838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800AD83C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800AD840: nop

    // 0x800AD844: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800AD848: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800AD84C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800AD850: sh          $t0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r8;
    // 0x800AD854: nop

    // 0x800AD858: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AD85C: nop

    // 0x800AD860: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x800AD864: nop

    // 0x800AD868: bgez        $t1, L_800AD8B4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800AD86C: nop
    
            goto L_800AD8B4;
    }
    // 0x800AD86C: nop

    // 0x800AD870: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AD874: nop

    // 0x800AD878: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800AD87C: nop

    // 0x800AD880: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x800AD884: bgez        $t4, L_800AD898
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800AD888: andi        $t5, $t4, 0x3
        ctx->r13 = ctx->r12 & 0X3;
            goto L_800AD898;
    }
    // 0x800AD888: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x800AD88C: beq         $t5, $zero, L_800AD898
    if (ctx->r13 == 0) {
        // 0x800AD890: nop
    
            goto L_800AD898;
    }
    // 0x800AD890: nop

    // 0x800AD894: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
L_800AD898:
    // 0x800AD898: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
    // 0x800AD89C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AD8A0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800AD8A4: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800AD8A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AD8AC: nop

    // 0x800AD8B0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800AD8B4:
    // 0x800AD8B4: b           L_800AD8BC
    // 0x800AD8B8: nop

        goto L_800AD8BC;
    // 0x800AD8B8: nop

L_800AD8BC:
    // 0x800AD8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD8C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AD8C4: jr          $ra
    // 0x800AD8C8: nop

    return;
    // 0x800AD8C8: nop

;}
RECOMP_FUNC void func_800DB910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DB914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DB918: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB91C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB920: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB924: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB92C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB934: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB938: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB93C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB940: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DB944: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB948: nop

    // 0x800DB94C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DB950: nop

    // 0x800DB954: bne         $t1, $zero, L_800DB988
    if (ctx->r9 != 0) {
        // 0x800DB958: nop
    
            goto L_800DB988;
    }
    // 0x800DB958: nop

    // 0x800DB95C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB960: nop

    // 0x800DB964: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DB968: nop

    // 0x800DB96C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DB970: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DB974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB97C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DB980: jal         0x80029EF8
    // 0x800DB984: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800DB984: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_800DB988:
    // 0x800DB988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB98C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB990: jal         0x8002A46C
    // 0x800DB994: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800DB994: nop

    after_1:
    // 0x800DB998: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB99C: nop

    // 0x800DB9A0: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800DB9A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB9A8: nop

    // 0x800DB9AC: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800DB9B0: nop

    // 0x800DB9B4: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x800DB9B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB9BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB9C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DB9C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DB9C8: jal         0x8002A0D0
    // 0x800DB9CC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x800DB9CC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x800DB9D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DB9D4: bne         $v0, $at, L_800DB9F4
    if (ctx->r2 != ctx->r1) {
        // 0x800DB9D8: nop
    
            goto L_800DB9F4;
    }
    // 0x800DB9D8: nop

    // 0x800DB9DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB9E0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800DB9E4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800DB9E8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB9EC: nop

    // 0x800DB9F0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800DB9F4:
    // 0x800DB9F4: b           L_800DB9FC
    // 0x800DB9F8: nop

        goto L_800DB9FC;
    // 0x800DB9F8: nop

L_800DB9FC:
    // 0x800DB9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DBA00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DBA04: jr          $ra
    // 0x800DBA08: nop

    return;
    // 0x800DBA08: nop

;}
RECOMP_FUNC void func_800DBA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DBA0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800DBA10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DBA14: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DBA18: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DBA1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DBA20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DBA24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DBA28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DBA2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBA30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DBA34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBA38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DBA3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DBA40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DBA44: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800DBA48: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBA4C: nop

    // 0x800DBA50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DBA54: nop

    // 0x800DBA58: bne         $t1, $zero, L_800DBACC
    if (ctx->r9 != 0) {
        // 0x800DBA5C: nop
    
            goto L_800DBACC;
    }
    // 0x800DBA5C: nop

    // 0x800DBA60: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBA64: nop

    // 0x800DBA68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DBA6C: nop

    // 0x800DBA70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DBA74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DBA78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DBA7C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBA80: nop

    // 0x800DBA84: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800DBA88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBA8C: nop

    // 0x800DBA90: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800DBA94: nop

    // 0x800DBA98: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800DBA9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBAA0: nop

    // 0x800DBAA4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800DBAA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBAAC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800DBAB0: addiu       $t8, $t8, -0x714C
    ctx->r24 = ADD32(ctx->r24, -0X714C);
    // 0x800DBAB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBAB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800DBABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DBAC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800DBAC4: jal         0x8001C0EC
    // 0x800DBAC8: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DBAC8: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_0:
L_800DBACC:
    // 0x800DBACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBAD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBAD4: jal         0x8002A46C
    // 0x800DBAD8: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800DBAD8: nop

    after_1:
    // 0x800DBADC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBAE0: nop

    // 0x800DBAE4: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x800DBAE8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBAEC: nop

    // 0x800DBAF0: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800DBAF4: nop

    // 0x800DBAF8: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x800DBAFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBB00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBB04: jal         0x8001B4AC
    // 0x800DBB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800DBB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800DBB0C: beq         $v0, $zero, L_800DBB5C
    if (ctx->r2 == 0) {
        // 0x800DBB10: nop
    
            goto L_800DBB5C;
    }
    // 0x800DBB10: nop

    // 0x800DBB14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DBB18: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBB1C: nop

    // 0x800DBB20: swc1        $f8, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f8.u32l;
    // 0x800DBB24: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBB28: nop

    // 0x800DBB2C: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800DBB30: nop

    // 0x800DBB34: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800DBB38: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBB3C: nop

    // 0x800DBB40: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x800DBB44: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBB48: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DBB4C: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DBB50: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800DBB54: nop

    // 0x800DBB58: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800DBB5C:
    // 0x800DBB5C: b           L_800DBB64
    // 0x800DBB60: nop

        goto L_800DBB64;
    // 0x800DBB60: nop

L_800DBB64:
    // 0x800DBB64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DBB68: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DBB6C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DBB70: jr          $ra
    // 0x800DBB74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800DBB74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C899C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800C89A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C89A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C89A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C89AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C89B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C89B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C89B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C89BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C89C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C89C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C89C8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800C89CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C89D0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C89D4: nop

    // 0x800C89D8: bne         $t0, $zero, L_800C89F8
    if (ctx->r8 != 0) {
        // 0x800C89DC: nop
    
            goto L_800C89F8;
    }
    // 0x800C89DC: nop

    // 0x800C89E0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C89E4: nop

    // 0x800C89E8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800C89EC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C89F0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800C89F4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800C89F8:
    // 0x800C89F8: b           L_800C8A00
    // 0x800C89FC: nop

        goto L_800C8A00;
    // 0x800C89FC: nop

L_800C8A00:
    // 0x800C8A00: jr          $ra
    // 0x800C8A04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800C8A04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B36D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B36D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B36D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B36DC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800B36E0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800B36E4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B36E8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800B36EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B36F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B36F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B36F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B36FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3700: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3704: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3708: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B370C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B3710: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B3714: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800B3718: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800B371C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B3720: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800B3724: nop

    // 0x800B3728: beq         $t1, $at, L_800B3A54
    if (ctx->r9 == ctx->r1) {
        // 0x800B372C: nop
    
            goto L_800B3A54;
    }
    // 0x800B372C: nop

    // 0x800B3730: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B3734: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800B3738: lh          $t3, 0xE6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE6);
    // 0x800B373C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800B3740: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B3744: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B3748: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B374C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B3750: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B3754: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800B3758: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800B375C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B3760: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800B3764: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800B3768: nop

    // 0x800B376C: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x800B3770: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B3774: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B3778: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x800B377C: nop

    // 0x800B3780: addiu       $t1, $t0, -0x32
    ctx->r9 = ADD32(ctx->r8, -0X32);
    // 0x800B3784: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800B3788: nop

    // 0x800B378C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B3790: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
    // 0x800B3794: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3798: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800B379C: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800B37A0: nop

    // 0x800B37A4: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x800B37A8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B37AC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800B37B0: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800B37B4: nop

    // 0x800B37B8: swc1        $f16, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f16.u32l;
    // 0x800B37BC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B37C0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800B37C4: lwc1        $f18, 0x40($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X40);
    // 0x800B37C8: nop

    // 0x800B37CC: swc1        $f18, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f18.u32l;
    // 0x800B37D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B37D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B37D8: jal         0x80029C40
    // 0x800B37DC: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B37DC: nop

    after_0:
    // 0x800B37E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B37E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B37E8: jal         0x80029D04
    // 0x800B37EC: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B37EC: nop

    after_1:
    // 0x800B37F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B37F4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800B37F8: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800B37FC: nop

    // 0x800B3800: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800B3804: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B3808: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B380C: lwc1        $f6, 0x24($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X24);
    // 0x800B3810: nop

    // 0x800B3814: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B3818: nop

    // 0x800B381C: bc1f        L_800B382C
    if (!c1cs) {
        // 0x800B3820: nop
    
            goto L_800B382C;
    }
    // 0x800B3820: nop

    // 0x800B3824: b           L_800B383C
    // 0x800B3828: neg.s       $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = -ctx->f6.fl;
        goto L_800B383C;
    // 0x800B3828: neg.s       $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = -ctx->f6.fl;
L_800B382C:
    // 0x800B382C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B3830: nop

    // 0x800B3834: lwc1        $f22, 0x24($t2)
    ctx->f22.u32l = MEM_W(ctx->r10, 0X24);
    // 0x800B3838: nop

L_800B383C:
    // 0x800B383C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3840: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B3844: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800B3848: nop

    // 0x800B384C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800B3850: nop

    // 0x800B3854: bc1f        L_800B3864
    if (!c1cs) {
        // 0x800B3858: nop
    
            goto L_800B3864;
    }
    // 0x800B3858: nop

    // 0x800B385C: b           L_800B3874
    // 0x800B3860: neg.s       $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = -ctx->f10.fl;
        goto L_800B3874;
    // 0x800B3860: neg.s       $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = -ctx->f10.fl;
L_800B3864:
    // 0x800B3864: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B3868: nop

    // 0x800B386C: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800B3870: nop

L_800B3874:
    // 0x800B3874: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x800B3878: nop

    // 0x800B387C: bc1f        L_800B396C
    if (!c1cs) {
        // 0x800B3880: nop
    
            goto L_800B396C;
    }
    // 0x800B3880: nop

    // 0x800B3884: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800B3888: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B388C: lwc1        $f18, 0x18($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800B3890: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x800B3894: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B3898: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B389C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B38A0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B38A4: nop

    // 0x800B38A8: bc1f        L_800B3900
    if (!c1cs) {
        // 0x800B38AC: nop
    
            goto L_800B3900;
    }
    // 0x800B38AC: nop

    // 0x800B38B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B38B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B38B8: nop

    // 0x800B38BC: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800B38C0: nop

    // 0x800B38C4: bc1f        L_800B38DC
    if (!c1cs) {
        // 0x800B38C8: nop
    
            goto L_800B38DC;
    }
    // 0x800B38C8: nop

    // 0x800B38CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B38D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B38D4: b           L_800B38F4
    // 0x800B38D8: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
        goto L_800B38F4;
    // 0x800B38D8: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
L_800B38DC:
    // 0x800B38DC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800B38E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B38E4: lwc1        $f18, 0x18($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X18);
    // 0x800B38E8: lwc1        $f4, 0x24($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X24);
    // 0x800B38EC: nop

    // 0x800B38F0: add.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f4.fl;
L_800B38F4:
    // 0x800B38F4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800B38F8: b           L_800B3964
    // 0x800B38FC: swc1        $f20, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f20.u32l;
        goto L_800B3964;
    // 0x800B38FC: swc1        $f20, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f20.u32l;
L_800B3900:
    // 0x800B3900: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800B3904: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B3908: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800B390C: lwc1        $f16, 0x24($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X24);
    // 0x800B3910: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B3914: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800B3918: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800B391C: nop

    // 0x800B3920: bc1f        L_800B3940
    if (!c1cs) {
        // 0x800B3924: nop
    
            goto L_800B3940;
    }
    // 0x800B3924: nop

    // 0x800B3928: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B392C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B3930: nop

    // 0x800B3934: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x800B3938: b           L_800B3958
    // 0x800B393C: add.s       $f22, $f4, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f16.fl;
        goto L_800B3958;
    // 0x800B393C: add.s       $f22, $f4, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f16.fl;
L_800B3940:
    // 0x800B3940: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B3944: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3948: lwc1        $f8, 0x18($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X18);
    // 0x800B394C: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800B3950: nop

    // 0x800B3954: add.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f10.fl;
L_800B3958:
    // 0x800B3958: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800B395C: nop

    // 0x800B3960: swc1        $f22, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f22.u32l;
L_800B3964:
    // 0x800B3964: b           L_800B3A4C
    // 0x800B3968: nop

        goto L_800B3A4C;
    // 0x800B3968: nop

L_800B396C:
    // 0x800B396C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800B3970: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B3974: lwc1        $f6, 0x18($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800B3978: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800B397C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B3980: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B3984: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x800B3988: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x800B398C: nop

    // 0x800B3990: bc1f        L_800B39E8
    if (!c1cs) {
        // 0x800B3994: nop
    
            goto L_800B39E8;
    }
    // 0x800B3994: nop

    // 0x800B3998: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B399C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B39A0: nop

    // 0x800B39A4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x800B39A8: nop

    // 0x800B39AC: bc1f        L_800B39C4
    if (!c1cs) {
        // 0x800B39B0: nop
    
            goto L_800B39C4;
    }
    // 0x800B39B0: nop

    // 0x800B39B4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B39B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B39BC: b           L_800B39DC
    // 0x800B39C0: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
        goto L_800B39DC;
    // 0x800B39C0: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
L_800B39C4:
    // 0x800B39C4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800B39C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B39CC: lwc1        $f6, 0x18($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X18);
    // 0x800B39D0: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B39D4: nop

    // 0x800B39D8: add.s       $f20, $f6, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f18.fl;
L_800B39DC:
    // 0x800B39DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800B39E0: b           L_800B3A4C
    // 0x800B39E4: swc1        $f20, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f20.u32l;
        goto L_800B3A4C;
    // 0x800B39E4: swc1        $f20, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f20.u32l;
L_800B39E8:
    // 0x800B39E8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800B39EC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B39F0: lwc1        $f16, 0x18($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800B39F4: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800B39F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B39FC: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800B3A00: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x800B3A04: nop

    // 0x800B3A08: bc1f        L_800B3A28
    if (!c1cs) {
        // 0x800B3A0C: nop
    
            goto L_800B3A28;
    }
    // 0x800B3A0C: nop

    // 0x800B3A10: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B3A14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B3A18: nop

    // 0x800B3A1C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800B3A20: b           L_800B3A40
    // 0x800B3A24: add.s       $f22, $f18, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f8.fl;
        goto L_800B3A40;
    // 0x800B3A24: add.s       $f22, $f18, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f8.fl;
L_800B3A28:
    // 0x800B3A28: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B3A2C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B3A30: lwc1        $f4, 0x18($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X18);
    // 0x800B3A34: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800B3A38: nop

    // 0x800B3A3C: add.s       $f22, $f4, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f10.fl;
L_800B3A40:
    // 0x800B3A40: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800B3A44: nop

    // 0x800B3A48: swc1        $f22, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f22.u32l;
L_800B3A4C:
    // 0x800B3A4C: b           L_800B3A5C
    // 0x800B3A50: nop

        goto L_800B3A5C;
    // 0x800B3A50: nop

L_800B3A54:
    // 0x800B3A54: jal         0x800B36A4
    // 0x800B3A58: nop

    func_800B36A4(rdram, ctx);
        goto after_2;
    // 0x800B3A58: nop

    after_2:
L_800B3A5C:
    // 0x800B3A5C: b           L_800B3A64
    // 0x800B3A60: nop

        goto L_800B3A64;
    // 0x800B3A60: nop

L_800B3A64:
    // 0x800B3A64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B3A68: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800B3A6C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800B3A70: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B3A74: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B3A78: jr          $ra
    // 0x800B3A7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B3A7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80060814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80060818: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006081C: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80060820: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80060824: lw          $t6, 0x4994($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4994);
    // 0x80060828: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006082C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060830: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80060834: lb          $t0, 0xC($t9)
    ctx->r8 = MEM_B(ctx->r25, 0XC);
    // 0x80060838: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006083C: bne         $t0, $at, L_8006085C
    if (ctx->r8 != ctx->r1) {
        // 0x80060840: nop
    
            goto L_8006085C;
    }
    // 0x80060840: nop

    // 0x80060844: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80060848: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8006084C: jal         0x80060450
    // 0x80060850: nop

    func_80060450(rdram, ctx);
        goto after_0;
    // 0x80060850: nop

    after_0:
    // 0x80060854: b           L_800608A0
    // 0x80060858: nop

        goto L_800608A0;
    // 0x80060858: nop

L_8006085C:
    // 0x8006085C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80060860: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x80060864: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80060868: lw          $t1, 0x4994($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4994);
    // 0x8006086C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060870: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060874: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80060878: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8006087C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80060880: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x80060884: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80060888: lw          $a3, -0x3560($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3560);
    // 0x8006088C: lb          $a1, 0xC($t4)
    ctx->r5 = MEM_B(ctx->r12, 0XC);
    // 0x80060890: lb          $a2, 0xD($t4)
    ctx->r6 = MEM_B(ctx->r12, 0XD);
    // 0x80060894: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80060898: jal         0x8001BD44
    // 0x8006089C: nop

    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8006089C: nop

    after_1:
L_800608A0:
    // 0x800608A0: b           L_800608A8
    // 0x800608A4: nop

        goto L_800608A8;
    // 0x800608A4: nop

L_800608A8:
    // 0x800608A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800608AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800608B0: jr          $ra
    // 0x800608B4: nop

    return;
    // 0x800608B4: nop

;}
RECOMP_FUNC void func_800FD04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD04C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FD050: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FD054: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800FD058: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800FD05C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800FD060: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FD064: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800FD068: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x800FD06C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FD070: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FD074: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FD07C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD080: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FD084: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FD088: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FD08C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800FD090: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800FD094: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FD098: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800FD09C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800FD0A0: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800FD0A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800FD0A8: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800FD0AC: addiu       $a1, $a1, 0x3EC8
    ctx->r5 = ADD32(ctx->r5, 0X3EC8);
    // 0x800FD0B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FD0B4: jal         0x80027464
    // 0x800FD0B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FD0B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800FD0BC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800FD0C0: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800FD0C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD0C8: beq         $t1, $at, L_800FD3D0
    if (ctx->r9 == ctx->r1) {
        // 0x800FD0CC: nop
    
            goto L_800FD3D0;
    }
    // 0x800FD0CC: nop

    // 0x800FD0D0: lh          $a0, 0x42($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X42);
    // 0x800FD0D4: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x800FD0D8: jal         0x80026F10
    // 0x800FD0DC: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800FD0DC: nop

    after_1:
    // 0x800FD0E0: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800FD0E4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800FD0E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800FD0EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FD0F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FD0F4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FD0F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800FD0FC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800FD100: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800FD104: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x800FD108: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x800FD10C: nop

    // 0x800FD110: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800FD114: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x800FD118: lh          $t9, 0x30($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X30);
    // 0x800FD11C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800FD120: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800FD124: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800FD128: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800FD12C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800FD130: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800FD134: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800FD138: jal         0x80015538
    // 0x800FD13C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800FD13C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x800FD140: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FD144: nop

    // 0x800FD148: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x800FD14C: lh          $t3, 0x30($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X30);
    // 0x800FD150: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800FD154: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800FD158: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800FD15C: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x800FD160: jal         0x80015538
    // 0x800FD164: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800FD164: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x800FD168: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800FD16C: nop

    // 0x800FD170: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
    // 0x800FD174: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800FD178: nop

    // 0x800FD17C: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800FD180: jal         0x80015744
    // 0x800FD184: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_4;
    // 0x800FD184: nop

    after_4:
    // 0x800FD188: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800FD18C: nop

    // 0x800FD190: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
    // 0x800FD194: lh          $t8, 0x46($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X46);
    // 0x800FD198: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FD19C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800FD1A0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800FD1A4: addiu       $t0, $t9, 0xF
    ctx->r8 = ADD32(ctx->r25, 0XF);
    // 0x800FD1A8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FD1AC: nop

    // 0x800FD1B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FD1B4: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
    // 0x800FD1B8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800FD1BC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800FD1C0: lwc1        $f4, 0x48($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X48);
    // 0x800FD1C4: nop

    // 0x800FD1C8: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x800FD1CC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800FD1D0: nop

    // 0x800FD1D4: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800FD1D8: lh          $t5, 0x30($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X30);
    // 0x800FD1DC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800FD1E0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800FD1E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800FD1E8: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800FD1EC: addiu       $t7, $t6, 0x64
    ctx->r15 = ADD32(ctx->r14, 0X64);
    // 0x800FD1F0: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
    // 0x800FD1F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800FD1F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FD1FC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FD200: nop

    // 0x800FD204: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    // 0x800FD208: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800FD20C: nop

    // 0x800FD210: lwc1        $f20, 0xC($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800FD214: nop

    // 0x800FD218: swc1        $f20, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f20.u32l;
    // 0x800FD21C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FD220: nop

    // 0x800FD224: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
    // 0x800FD228: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x800FD22C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FD230: bne         $t2, $at, L_800FD378
    if (ctx->r10 != ctx->r1) {
        // 0x800FD234: nop
    
            goto L_800FD378;
    }
    // 0x800FD234: nop

    // 0x800FD238: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800FD23C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800FD240: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800FD244: jal         0x80015538
    // 0x800FD248: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800FD248: nop

    after_5:
    // 0x800FD24C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800FD250: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FD254: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800FD258: lwc1        $f17, 0x57E8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X57E8);
    // 0x800FD25C: lwc1        $f16, 0x57EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57EC);
    // 0x800FD260: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800FD264: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800FD268: jal         0x80034970
    // 0x800FD26C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x800FD26C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_6:
    // 0x800FD270: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x800FD274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD278: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800FD27C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800FD280: swc1        $f6, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f6.u32l;
    // 0x800FD284: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FD288: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800FD28C: lwc1        $f17, 0x57F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X57F0);
    // 0x800FD290: lwc1        $f16, 0x57F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57F4);
    // 0x800FD294: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800FD298: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800FD29C: jal         0x80036570
    // 0x800FD2A0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x800FD2A0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x800FD2A4: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x800FD2A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD2AC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800FD2B0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800FD2B4: swc1        $f6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f6.u32l;
    // 0x800FD2B8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800FD2BC: nop

    // 0x800FD2C0: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800FD2C4: lwc1        $f10, 0x24($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X24);
    // 0x800FD2C8: nop

    // 0x800FD2CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800FD2D0: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x800FD2D4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800FD2D8: nop

    // 0x800FD2DC: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800FD2E0: lwc1        $f4, 0x2C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800FD2E4: nop

    // 0x800FD2E8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800FD2EC: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x800FD2F0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800FD2F4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x800FD2F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FD2FC: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800FD300: nop

    // 0x800FD304: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800FD308: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
    // 0x800FD30C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FD310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FD314: jal         0x8002A46C
    // 0x800FD318: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_8;
    // 0x800FD318: nop

    after_8:
    // 0x800FD31C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FD320: nop

    // 0x800FD324: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800FD328: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800FD32C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FD330: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800FD334: nop

    // 0x800FD338: swc1        $f18, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f18.u32l;
    // 0x800FD33C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800FD340: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FD344: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FD348: nop

    // 0x800FD34C: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x800FD350: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FD354: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800FD358: nop

    // 0x800FD35C: swc1        $f6, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f6.u32l;
    // 0x800FD360: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800FD364: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x800FD368: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x800FD36C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800FD370: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x800FD374: sh          $t5, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r13;
L_800FD378:
    // 0x800FD378: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800FD37C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FD380: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800FD384: nop

    // 0x800FD388: swc1        $f8, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f8.u32l;
    // 0x800FD38C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FD390: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800FD394: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800FD398: lh          $t0, 0x46($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X46);
    // 0x800FD39C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FD3A0: nop

    // 0x800FD3A4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x800FD3A8: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x800FD3AC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800FD3B0: nop

    // 0x800FD3B4: sh          $t2, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r10;
    // 0x800FD3B8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800FD3BC: nop

    // 0x800FD3C0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800FD3C4: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800FD3C8: jal         0x8001BB34
    // 0x800FD3CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x800FD3CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_800FD3D0:
    // 0x800FD3D0: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x800FD3D4: b           L_800FD3E4
    // 0x800FD3D8: nop

        goto L_800FD3E4;
    // 0x800FD3D8: nop

    // 0x800FD3DC: b           L_800FD3E4
    // 0x800FD3E0: nop

        goto L_800FD3E4;
    // 0x800FD3E0: nop

L_800FD3E4:
    // 0x800FD3E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FD3E8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800FD3EC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FD3F0: jr          $ra
    // 0x800FD3F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800FD3F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800D2F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2F1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D2F20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D2F24: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D2F28: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D2F2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2F30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2F34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D2F38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D2F3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2F40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2F44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2F48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D2F4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D2F50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2F54: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D2F58: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D2F5C: nop

    // 0x800D2F60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D2F64: nop

    // 0x800D2F68: bne         $t1, $zero, L_800D2FFC
    if (ctx->r9 != 0) {
        // 0x800D2F6C: nop
    
            goto L_800D2FFC;
    }
    // 0x800D2F6C: nop

    // 0x800D2F70: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D2F74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D2F78: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D2F7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D2F80: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D2F84: nop

    // 0x800D2F88: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800D2F8C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D2F90: nop

    // 0x800D2F94: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800D2F98: nop

    // 0x800D2F9C: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800D2FA0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D2FA4: nop

    // 0x800D2FA8: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800D2FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2FB0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D2FB4: addiu       $t7, $t7, -0x78AC
    ctx->r15 = ADD32(ctx->r15, -0X78AC);
    // 0x800D2FB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2FBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800D2FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D2FC8: jal         0x8001C0EC
    // 0x800D2FCC: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D2FCC: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_0:
    // 0x800D2FD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2FD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2FD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2FDC: addiu       $a3, $a3, -0x787C
    ctx->r7 = ADD32(ctx->r7, -0X787C);
    // 0x800D2FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2FE4: jal         0x8001ABF4
    // 0x800D2FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D2FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800D2FEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2FF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2FF4: jal         0x8001BB04
    // 0x800D2FF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x800D2FF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800D2FFC:
    // 0x800D2FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3004: jal         0x8002A1FC
    // 0x800D3008: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800D3008: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_3:
    // 0x800D300C: beq         $v0, $zero, L_800D302C
    if (ctx->r2 == 0) {
        // 0x800D3010: nop
    
            goto L_800D302C;
    }
    // 0x800D3010: nop

    // 0x800D3014: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D3018: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800D301C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800D3020: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3024: nop

    // 0x800D3028: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800D302C:
    // 0x800D302C: b           L_800D3034
    // 0x800D3030: nop

        goto L_800D3034;
    // 0x800D3030: nop

L_800D3034:
    // 0x800D3034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D3038: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D303C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D3040: jr          $ra
    // 0x800D3044: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D3044: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FBC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBC40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FBC44: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800FBC48: nop

    // 0x800FBC4C: bne         $t6, $zero, L_800FBC5C
    if (ctx->r14 != 0) {
        // 0x800FBC50: nop
    
            goto L_800FBC5C;
    }
    // 0x800FBC50: nop

    // 0x800FBC54: b           L_800FBC78
    // 0x800FBC58: nop

        goto L_800FBC78;
    // 0x800FBC58: nop

L_800FBC5C:
    // 0x800FBC5C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FBC60: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x800FBC64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FBC68: bne         $t7, $at, L_800FBC78
    if (ctx->r15 != ctx->r1) {
        // 0x800FBC6C: nop
    
            goto L_800FBC78;
    }
    // 0x800FBC6C: nop

    // 0x800FBC70: b           L_800FBC78
    // 0x800FBC74: nop

        goto L_800FBC78;
    // 0x800FBC74: nop

L_800FBC78:
    // 0x800FBC78: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FBC7C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800FBC80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FBC84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800FBC88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FBC8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FBC90: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FBC94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800FBC98: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FBC9C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800FBCA0: jr          $ra
    // 0x800FBCA4: nop

    return;
    // 0x800FBCA4: nop

    // 0x800FBCA8: jr          $ra
    // 0x800FBCAC: nop

    return;
    // 0x800FBCAC: nop

;}
RECOMP_FUNC void func_800DA5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA5E4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DA5E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA5EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA5F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA5F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA5F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA5FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA604: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA608: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DA60C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DA610: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DA614: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DA618: nop

    // 0x800DA61C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DA620: nop

    // 0x800DA624: bne         $t1, $zero, L_800DA638
    if (ctx->r9 != 0) {
        // 0x800DA628: nop
    
            goto L_800DA638;
    }
    // 0x800DA628: nop

    // 0x800DA62C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DA630: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DA634: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800DA638:
    // 0x800DA638: b           L_800DA640
    // 0x800DA63C: nop

        goto L_800DA640;
    // 0x800DA63C: nop

L_800DA640:
    // 0x800DA640: jr          $ra
    // 0x800DA644: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DA644: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009060C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009060C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090614: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090618: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009061C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090620: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090624: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090628: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009062C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090630: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090634: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090638: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009063C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090640: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090644: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090648: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009064C: addiu       $a1, $a1, 0x1414
    ctx->r5 = ADD32(ctx->r5, 0X1414);
    // 0x80090650: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090654: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090658: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009065C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090660: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090664: jal         0x80027464
    // 0x80090668: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090668: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009066C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090670: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090674: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090678: addiu       $a3, $a3, 0x2298
    ctx->r7 = ADD32(ctx->r7, 0X2298);
    // 0x8009067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090680: jal         0x8001ABF4
    // 0x80090684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80090688: b           L_80090690
    // 0x8009068C: nop

        goto L_80090690;
    // 0x8009068C: nop

L_80090690:
    // 0x80090690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090694: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090698: jr          $ra
    // 0x8009069C: nop

    return;
    // 0x8009069C: nop

;}
RECOMP_FUNC void func_800A28AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A28AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A28B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A28B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A28B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A28BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A28C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A28C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A28C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A28CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A28D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A28D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A28D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A28DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A28E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A28E4: nop

    // 0x800A28E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A28EC: nop

    // 0x800A28F0: bne         $t1, $zero, L_800A2984
    if (ctx->r9 != 0) {
        // 0x800A28F4: nop
    
            goto L_800A2984;
    }
    // 0x800A28F4: nop

    // 0x800A28F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A28FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A2900: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A2904: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A2908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A290C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A2910: nop

    // 0x800A2914: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A2918: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A291C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A2920: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800A2924: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A2928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A292C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A2930: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2934: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A2938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A293C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2940: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800A2944: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800A2948: jal         0x80015538
    // 0x800A294C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A294C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x800A2950: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A2954: nop

    // 0x800A2958: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A295C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A2960: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x800A2964: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800A2968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A296C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2974: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x800A2978: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A297C: jal         0x80017664
    // 0x800A2980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_1;
    // 0x800A2980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800A2984:
    // 0x800A2984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A298C: jal         0x80029C40
    // 0x800A2990: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A2990: nop

    after_2:
    // 0x800A2994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A299C: jal         0x80029D04
    // 0x800A29A0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A29A0: nop

    after_3:
    // 0x800A29A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A29A8: nop

    // 0x800A29AC: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A29B0: nop

    // 0x800A29B4: addiu       $t3, $t2, -0x8
    ctx->r11 = ADD32(ctx->r10, -0X8);
    // 0x800A29B8: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800A29BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A29C0: nop

    // 0x800A29C4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A29C8: nop

    // 0x800A29CC: bgtz        $t5, L_800A2A04
    if (SIGNED(ctx->r13) > 0) {
        // 0x800A29D0: nop
    
            goto L_800A2A04;
    }
    // 0x800A29D0: nop

    // 0x800A29D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A29D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A29DC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A29E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A29E4: nop

    // 0x800A29E8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800A29EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A29F0: nop

    // 0x800A29F4: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800A29F8: nop

    // 0x800A29FC: negu        $t2, $t0
    ctx->r10 = SUB32(0, ctx->r8);
    // 0x800A2A00: sh          $t2, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r10;
L_800A2A04:
    // 0x800A2A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2A08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2A0C: jal         0x8002A2EC
    // 0x800A2A10: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_4;
    // 0x800A2A10: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_4:
    // 0x800A2A14: beq         $v0, $zero, L_800A2A58
    if (ctx->r2 == 0) {
        // 0x800A2A18: nop
    
            goto L_800A2A58;
    }
    // 0x800A2A18: nop

    // 0x800A2A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2A24: jal         0x8002A3A8
    // 0x800A2A28: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_5;
    // 0x800A2A28: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_5:
    // 0x800A2A2C: beq         $v0, $zero, L_800A2A58
    if (ctx->r2 == 0) {
        // 0x800A2A30: nop
    
            goto L_800A2A58;
    }
    // 0x800A2A30: nop

    // 0x800A2A34: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A2A38: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800A2A3C: sh          $t3, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r11;
    // 0x800A2A40: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A2A44: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800A2A48: sh          $t4, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r12;
    // 0x800A2A4C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A2A50: nop

    // 0x800A2A54: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A2A58:
    // 0x800A2A58: jal         0x800A1DAC
    // 0x800A2A5C: nop

    func_800A1DAC(rdram, ctx);
        goto after_6;
    // 0x800A2A5C: nop

    after_6:
    // 0x800A2A60: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800A2A64: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800A2A68: nop

    // 0x800A2A6C: bne         $t7, $zero, L_800A2A8C
    if (ctx->r15 != 0) {
        // 0x800A2A70: nop
    
            goto L_800A2A8C;
    }
    // 0x800A2A70: nop

    // 0x800A2A74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A2A78: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800A2A7C: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x800A2A80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A2A84: nop

    // 0x800A2A88: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800A2A8C:
    // 0x800A2A8C: b           L_800A2A94
    // 0x800A2A90: nop

        goto L_800A2A94;
    // 0x800A2A90: nop

L_800A2A94:
    // 0x800A2A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2A98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A2A9C: jr          $ra
    // 0x800A2AA0: nop

    return;
    // 0x800A2AA0: nop

;}
RECOMP_FUNC void func_8008D074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D074: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008D078: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008D07C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008D080: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008D084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D088: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D08C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D090: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008D094: nop

    // 0x8008D098: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8008D09C: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8008D0A0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008D0A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008D0A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D0AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008D0B0: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    // 0x8008D0B4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008D0B8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8008D0BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D0C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008D0C4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008D0C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008D0CC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8008D0D0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008D0D4: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8008D0D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008D0DC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8008D0E0: nop

    // 0x8008D0E4: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008D0E8: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x8008D0EC: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008D0F0: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x8008D0F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008D0F8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008D0FC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008D100: sh          $t5, 0x4C58($at)
    MEM_H(0X4C58, ctx->r1) = ctx->r13;
    // 0x8008D104: b           L_8008D10C
    // 0x8008D108: nop

        goto L_8008D10C;
    // 0x8008D108: nop

L_8008D10C:
    // 0x8008D10C: jr          $ra
    // 0x8008D110: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008D110: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A4C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A4C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A4C5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A4C60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4C64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A4C68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A4C6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A4C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4C74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4C7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A4C80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A4C84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4C88: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A4C8C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A4C90: nop

    // 0x800A4C94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A4C98: nop

    // 0x800A4C9C: bne         $t1, $zero, L_800A4D48
    if (ctx->r9 != 0) {
        // 0x800A4CA0: nop
    
            goto L_800A4D48;
    }
    // 0x800A4CA0: nop

    // 0x800A4CA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A4CA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A4CAC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A4CB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A4CB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A4CB8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A4CBC: nop

    // 0x800A4CC0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A4CC4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A4CC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A4CCC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A4CD0: nop

    // 0x800A4CD4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A4CD8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A4CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A4CE0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A4CE4: nop

    // 0x800A4CE8: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800A4CEC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A4CF0: addiu       $t7, $zero, 0x1A4
    ctx->r15 = ADD32(0, 0X1A4);
    // 0x800A4CF4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800A4CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4CFC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A4D00: addiu       $t9, $t9, 0x7028
    ctx->r25 = ADD32(ctx->r25, 0X7028);
    // 0x800A4D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D08: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A4D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A4D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A4D14: jal         0x8001C0EC
    // 0x800A4D18: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A4D18: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    after_0:
    // 0x800A4D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D24: jal         0x8001BBDC
    // 0x800A4D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800A4D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A4D2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A4D38: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    // 0x800A4D3C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A4D40: jal         0x800175F0
    // 0x800A4D44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800A4D44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800A4D48:
    // 0x800A4D48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D50: jal         0x80028FA0
    // 0x800A4D54: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800A4D54: nop

    after_3:
    // 0x800A4D58: beq         $v0, $zero, L_800A4D70
    if (ctx->r2 == 0) {
        // 0x800A4D5C: nop
    
            goto L_800A4D70;
    }
    // 0x800A4D5C: nop

    // 0x800A4D60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D68: jal         0x80029B60
    // 0x800A4D6C: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800A4D6C: nop

    after_4:
L_800A4D70:
    // 0x800A4D70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D78: jal         0x80029C40
    // 0x800A4D7C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800A4D7C: nop

    after_5:
    // 0x800A4D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4D88: jal         0x80029D04
    // 0x800A4D8C: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800A4D8C: nop

    after_6:
    // 0x800A4D90: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A4D94: nop

    // 0x800A4D98: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A4D9C: nop

    // 0x800A4DA0: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x800A4DA4: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800A4DA8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800A4DAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A4DB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A4DB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4DB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4DBC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800A4DC0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800A4DC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A4DC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A4DCC: jal         0x800295C0
    // 0x800A4DD0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800A4DD0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800A4DD4: beq         $v0, $zero, L_800A4DF4
    if (ctx->r2 == 0) {
        // 0x800A4DD8: nop
    
            goto L_800A4DF4;
    }
    // 0x800A4DD8: nop

    // 0x800A4DDC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A4DE0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800A4DE4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A4DE8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A4DEC: nop

    // 0x800A4DF0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A4DF4:
    // 0x800A4DF4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A4DF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A4DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4E00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A4E08: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800A4E0C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A4E10: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800A4E14: jal         0x80029018
    // 0x800A4E18: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800A4E18: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800A4E1C: beq         $v0, $zero, L_800A4EC0
    if (ctx->r2 == 0) {
        // 0x800A4E20: nop
    
            goto L_800A4EC0;
    }
    // 0x800A4E20: nop

    // 0x800A4E24: jal         0x800297DC
    // 0x800A4E28: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800A4E28: nop

    after_9:
    // 0x800A4E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4E34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A4E38: jal         0x80029824
    // 0x800A4E3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800A4E3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800A4E40: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A4E44: lh          $t6, 0x51A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X51A0);
    // 0x800A4E48: nop

    // 0x800A4E4C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x800A4E50: beq         $t7, $zero, L_800A4EC0
    if (ctx->r15 == 0) {
        // 0x800A4E54: nop
    
            goto L_800A4EC0;
    }
    // 0x800A4E54: nop

    // 0x800A4E58: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A4E5C: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A4E60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A4E64: lwc1        $f8, 0x54($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X54);
    // 0x800A4E68: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800A4E6C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A4E70: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800A4E74: nop

    // 0x800A4E78: bc1t        L_800A4EA0
    if (c1cs) {
        // 0x800A4E7C: nop
    
            goto L_800A4EA0;
    }
    // 0x800A4E7C: nop

    // 0x800A4E80: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A4E84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A4E88: nop

    // 0x800A4E8C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A4E90: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800A4E94: nop

    // 0x800A4E98: bc1f        L_800A4EC0
    if (!c1cs) {
        // 0x800A4E9C: nop
    
            goto L_800A4EC0;
    }
    // 0x800A4E9C: nop

L_800A4EA0:
    // 0x800A4EA0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EA4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800A4EA8: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x800A4EAC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EB0: nop

    // 0x800A4EB4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800A4EB8: b           L_800A4EF8
    // 0x800A4EBC: nop

        goto L_800A4EF8;
    // 0x800A4EBC: nop

L_800A4EC0:
    // 0x800A4EC0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EC4: nop

    // 0x800A4EC8: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x800A4ECC: nop

    // 0x800A4ED0: bgtz        $t3, L_800A4EF0
    if (SIGNED(ctx->r11) > 0) {
        // 0x800A4ED4: nop
    
            goto L_800A4EF0;
    }
    // 0x800A4ED4: nop

    // 0x800A4ED8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EDC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800A4EE0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A4EE4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EE8: nop

    // 0x800A4EEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A4EF0:
    // 0x800A4EF0: b           L_800A4EF8
    // 0x800A4EF4: nop

        goto L_800A4EF8;
    // 0x800A4EF4: nop

L_800A4EF8:
    // 0x800A4EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A4EFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A4F00: jr          $ra
    // 0x800A4F04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A4F04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C249C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C24A0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C24A4: nop

    // 0x800C24A8: bne         $t6, $zero, L_800C24DC
    if (ctx->r14 != 0) {
        // 0x800C24AC: nop
    
            goto L_800C24DC;
    }
    // 0x800C24AC: nop

    // 0x800C24B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800C24B4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800C24B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C24BC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C24C0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C24C4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C24C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C24CC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C24D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C24D4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800C24D8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800C24DC:
    // 0x800C24DC: jr          $ra
    // 0x800C24E0: nop

    return;
    // 0x800C24E0: nop

    // 0x800C24E4: jr          $ra
    // 0x800C24E8: nop

    return;
    // 0x800C24E8: nop

;}
RECOMP_FUNC void func_8007E454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E454: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E45C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8007E460: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007E464:
    // 0x8007E464: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E468: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007E46C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007E470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E474: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007E478: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E47C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007E480: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007E484: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007E488: nop

    // 0x8007E48C: beq         $t9, $zero, L_8007E648
    if (ctx->r25 == 0) {
        // 0x8007E490: nop
    
            goto L_8007E648;
    }
    // 0x8007E490: nop

    // 0x8007E494: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E498: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007E49C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007E4A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007E4A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007E4A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007E4AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007E4B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007E4B4: lh          $t2, 0x41F4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F4);
    // 0x8007E4B8: nop

    // 0x8007E4BC: addiu       $t3, $t2, -0x7
    ctx->r11 = ADD32(ctx->r10, -0X7);
    // 0x8007E4C0: sltiu       $at, $t3, 0x2C
    ctx->r1 = ctx->r11 < 0X2C ? 1 : 0;
    // 0x8007E4C4: beq         $at, $zero, L_8007E63C
    if (ctx->r1 == 0) {
        // 0x8007E4C8: nop
    
            goto L_8007E63C;
    }
    // 0x8007E4C8: nop

    // 0x8007E4CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007E4D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007E4D4: addu        $at, $at, $t3
    gpr jr_addend_8007E4E0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007E4D8: lw          $t3, -0x35B8($at)
    ctx->r11 = ADD32(ctx->r1, -0X35B8);
    // 0x8007E4DC: nop

    // 0x8007E4E0: jr          $t3
    // 0x8007E4E4: nop

    switch (jr_addend_8007E4E0 >> 2) {
        case 0: goto L_8007E4E8; break;
        case 1: goto L_8007E63C; break;
        case 2: goto L_8007E63C; break;
        case 3: goto L_8007E63C; break;
        case 4: goto L_8007E63C; break;
        case 5: goto L_8007E63C; break;
        case 6: goto L_8007E63C; break;
        case 7: goto L_8007E63C; break;
        case 8: goto L_8007E63C; break;
        case 9: goto L_8007E4FC; break;
        case 10: goto L_8007E510; break;
        case 11: goto L_8007E524; break;
        case 12: goto L_8007E524; break;
        case 13: goto L_8007E63C; break;
        case 14: goto L_8007E63C; break;
        case 15: goto L_8007E63C; break;
        case 16: goto L_8007E63C; break;
        case 17: goto L_8007E538; break;
        case 18: goto L_8007E54C; break;
        case 19: goto L_8007E560; break;
        case 20: goto L_8007E560; break;
        case 21: goto L_8007E63C; break;
        case 22: goto L_8007E63C; break;
        case 23: goto L_8007E63C; break;
        case 24: goto L_8007E63C; break;
        case 25: goto L_8007E5B0; break;
        case 26: goto L_8007E600; break;
        case 27: goto L_8007E614; break;
        case 28: goto L_8007E5C4; break;
        case 29: goto L_8007E5D8; break;
        case 30: goto L_8007E5D8; break;
        case 31: goto L_8007E5EC; break;
        case 32: goto L_8007E5EC; break;
        case 33: goto L_8007E628; break;
        case 34: goto L_8007E628; break;
        case 35: goto L_8007E628; break;
        case 36: goto L_8007E63C; break;
        case 37: goto L_8007E63C; break;
        case 38: goto L_8007E63C; break;
        case 39: goto L_8007E63C; break;
        case 40: goto L_8007E63C; break;
        case 41: goto L_8007E574; break;
        case 42: goto L_8007E588; break;
        case 43: goto L_8007E59C; break;
        default: switch_error(__func__, 0x8007E4E0, 0x8010CA48);
    }
    // 0x8007E4E4: nop

L_8007E4E8:
    // 0x8007E4E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E4EC: jal         0x80079D18
    // 0x8007E4F0: nop

    func_80079D18(rdram, ctx);
        goto after_0;
    // 0x8007E4F0: nop

    after_0:
    // 0x8007E4F4: b           L_8007E63C
    // 0x8007E4F8: nop

        goto L_8007E63C;
    // 0x8007E4F8: nop

L_8007E4FC:
    // 0x8007E4FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E500: jal         0x8007C640
    // 0x8007E504: nop

    func_8007C640(rdram, ctx);
        goto after_1;
    // 0x8007E504: nop

    after_1:
    // 0x8007E508: b           L_8007E63C
    // 0x8007E50C: nop

        goto L_8007E63C;
    // 0x8007E50C: nop

L_8007E510:
    // 0x8007E510: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E514: jal         0x8007C6D4
    // 0x8007E518: nop

    func_8007C6D4(rdram, ctx);
        goto after_2;
    // 0x8007E518: nop

    after_2:
    // 0x8007E51C: b           L_8007E63C
    // 0x8007E520: nop

        goto L_8007E63C;
    // 0x8007E520: nop

L_8007E524:
    // 0x8007E524: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E528: jal         0x8007C8A0
    // 0x8007E52C: nop

    func_8007C8A0(rdram, ctx);
        goto after_3;
    // 0x8007E52C: nop

    after_3:
    // 0x8007E530: b           L_8007E63C
    // 0x8007E534: nop

        goto L_8007E63C;
    // 0x8007E534: nop

L_8007E538:
    // 0x8007E538: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E53C: jal         0x8007D508
    // 0x8007E540: nop

    func_8007D508(rdram, ctx);
        goto after_4;
    // 0x8007E540: nop

    after_4:
    // 0x8007E544: b           L_8007E63C
    // 0x8007E548: nop

        goto L_8007E63C;
    // 0x8007E548: nop

L_8007E54C:
    // 0x8007E54C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E550: jal         0x8007D59C
    // 0x8007E554: nop

    func_8007D59C(rdram, ctx);
        goto after_5;
    // 0x8007E554: nop

    after_5:
    // 0x8007E558: b           L_8007E63C
    // 0x8007E55C: nop

        goto L_8007E63C;
    // 0x8007E55C: nop

L_8007E560:
    // 0x8007E560: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E564: jal         0x8007D768
    // 0x8007E568: nop

    func_8007D768(rdram, ctx);
        goto after_6;
    // 0x8007E568: nop

    after_6:
    // 0x8007E56C: b           L_8007E63C
    // 0x8007E570: nop

        goto L_8007E63C;
    // 0x8007E570: nop

L_8007E574:
    // 0x8007E574: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E578: jal         0x8007E058
    // 0x8007E57C: nop

    func_8007E058(rdram, ctx);
        goto after_7;
    // 0x8007E57C: nop

    after_7:
    // 0x8007E580: b           L_8007E63C
    // 0x8007E584: nop

        goto L_8007E63C;
    // 0x8007E584: nop

L_8007E588:
    // 0x8007E588: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E58C: jal         0x8007E0EC
    // 0x8007E590: nop

    func_8007E0EC(rdram, ctx);
        goto after_8;
    // 0x8007E590: nop

    after_8:
    // 0x8007E594: b           L_8007E63C
    // 0x8007E598: nop

        goto L_8007E63C;
    // 0x8007E598: nop

L_8007E59C:
    // 0x8007E59C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E5A0: jal         0x8007E2B8
    // 0x8007E5A4: nop

    func_8007E2B8(rdram, ctx);
        goto after_9;
    // 0x8007E5A4: nop

    after_9:
    // 0x8007E5A8: b           L_8007E63C
    // 0x8007E5AC: nop

        goto L_8007E63C;
    // 0x8007E5AC: nop

L_8007E5B0:
    // 0x8007E5B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E5B4: jal         0x8007A938
    // 0x8007E5B8: nop

    func_8007A938(rdram, ctx);
        goto after_10;
    // 0x8007E5B8: nop

    after_10:
    // 0x8007E5BC: b           L_8007E63C
    // 0x8007E5C0: nop

        goto L_8007E63C;
    // 0x8007E5C0: nop

L_8007E5C4:
    // 0x8007E5C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E5C8: jal         0x8007AA80
    // 0x8007E5CC: nop

    func_8007AA80(rdram, ctx);
        goto after_11;
    // 0x8007E5CC: nop

    after_11:
    // 0x8007E5D0: b           L_8007E63C
    // 0x8007E5D4: nop

        goto L_8007E63C;
    // 0x8007E5D4: nop

L_8007E5D8:
    // 0x8007E5D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E5DC: jal         0x8007AD60
    // 0x8007E5E0: nop

    func_8007AD60(rdram, ctx);
        goto after_12;
    // 0x8007E5E0: nop

    after_12:
    // 0x8007E5E4: b           L_8007E63C
    // 0x8007E5E8: nop

        goto L_8007E63C;
    // 0x8007E5E8: nop

L_8007E5EC:
    // 0x8007E5EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E5F0: jal         0x8007B5A0
    // 0x8007E5F4: nop

    func_8007B5A0(rdram, ctx);
        goto after_13;
    // 0x8007E5F4: nop

    after_13:
    // 0x8007E5F8: b           L_8007E63C
    // 0x8007E5FC: nop

        goto L_8007E63C;
    // 0x8007E5FC: nop

L_8007E600:
    // 0x8007E600: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E604: jal         0x8007B004
    // 0x8007E608: nop

    func_8007B004(rdram, ctx);
        goto after_14;
    // 0x8007E608: nop

    after_14:
    // 0x8007E60C: b           L_8007E63C
    // 0x8007E610: nop

        goto L_8007E63C;
    // 0x8007E610: nop

L_8007E614:
    // 0x8007E614: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E618: jal         0x8007B268
    // 0x8007E61C: nop

    func_8007B268(rdram, ctx);
        goto after_15;
    // 0x8007E61C: nop

    after_15:
    // 0x8007E620: b           L_8007E63C
    // 0x8007E624: nop

        goto L_8007E63C;
    // 0x8007E624: nop

L_8007E628:
    // 0x8007E628: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E62C: jal         0x8007B928
    // 0x8007E630: nop

    func_8007B928(rdram, ctx);
        goto after_16;
    // 0x8007E630: nop

    after_16:
    // 0x8007E634: b           L_8007E63C
    // 0x8007E638: nop

        goto L_8007E63C;
    // 0x8007E638: nop

L_8007E63C:
    // 0x8007E63C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E640: jal         0x8001AD6C
    // 0x8007E644: nop

    func_8001AD6C(rdram, ctx);
        goto after_17;
    // 0x8007E644: nop

    after_17:
L_8007E648:
    // 0x8007E648: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E64C: nop

    // 0x8007E650: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007E654: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x8007E658: bne         $at, $zero, L_8007E464
    if (ctx->r1 != 0) {
        // 0x8007E65C: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_8007E464;
    }
    // 0x8007E65C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8007E660: b           L_8007E668
    // 0x8007E664: nop

        goto L_8007E668;
    // 0x8007E664: nop

L_8007E668:
    // 0x8007E668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E66C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E670: jr          $ra
    // 0x8007E674: nop

    return;
    // 0x8007E674: nop

;}
RECOMP_FUNC void func_8009B600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B600: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009B604: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009B608: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009B60C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8009B610: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009B614: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009B618: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009B61C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009B620: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009B624: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009B628: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009B62C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B630: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009B634: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009B638: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009B63C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009B640: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B644: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009B648: addiu       $a1, $a1, 0x3520
    ctx->r5 = ADD32(ctx->r5, 0X3520);
    // 0x8009B64C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009B650: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009B654: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009B658: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009B65C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009B660: jal         0x80027464
    // 0x8009B664: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009B664: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009B668: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8009B66C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8009B670: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009B674: beq         $t1, $at, L_8009B868
    if (ctx->r9 == ctx->r1) {
        // 0x8009B678: nop
    
            goto L_8009B868;
    }
    // 0x8009B678: nop

    // 0x8009B67C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009B680: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8009B684: nop

    // 0x8009B688: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8009B68C: nop

    // 0x8009B690: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8009B694: nop

    // 0x8009B698: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B69C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8009B6A0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B6A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009B6A8: nop

    // 0x8009B6AC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8009B6B0: nop

    // 0x8009B6B4: bc1f        L_8009B6CC
    if (!c1cs) {
        // 0x8009B6B8: nop
    
            goto L_8009B6CC;
    }
    // 0x8009B6B8: nop

    // 0x8009B6BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009B6C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009B6C4: b           L_8009B72C
    // 0x8009B6C8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
        goto L_8009B72C;
    // 0x8009B6C8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_8009B6CC:
    // 0x8009B6CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009B6D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009B6D4: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B6D8: nop

    // 0x8009B6DC: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x8009B6E0: nop

    // 0x8009B6E4: bc1f        L_8009B6FC
    if (!c1cs) {
        // 0x8009B6E8: nop
    
            goto L_8009B6FC;
    }
    // 0x8009B6E8: nop

    // 0x8009B6EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009B6F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009B6F4: b           L_8009B72C
    // 0x8009B6F8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_8009B72C;
    // 0x8009B6F8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_8009B6FC:
    // 0x8009B6FC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8009B700: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009B704: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B708: nop

    // 0x8009B70C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8009B710: nop

    // 0x8009B714: bc1f        L_8009B72C
    if (!c1cs) {
        // 0x8009B718: nop
    
            goto L_8009B72C;
    }
    // 0x8009B718: nop

    // 0x8009B71C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8009B720: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009B724: nop

    // 0x8009B728: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_8009B72C:
    // 0x8009B72C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009B730: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009B734: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B738: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8009B73C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8009B740: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009B744: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009B748: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009B74C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009B750: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009B754: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B758: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009B75C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8009B760: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8009B764: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x8009B768: nop

    // 0x8009B76C: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x8009B770: nop

    // 0x8009B774: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8009B778: nop

    // 0x8009B77C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B780: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8009B784: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B788: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009B78C: nop

    // 0x8009B790: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8009B794: nop

    // 0x8009B798: bc1f        L_8009B7B0
    if (!c1cs) {
        // 0x8009B79C: nop
    
            goto L_8009B7B0;
    }
    // 0x8009B79C: nop

    // 0x8009B7A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009B7A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009B7A8: b           L_8009B810
    // 0x8009B7AC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
        goto L_8009B810;
    // 0x8009B7AC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_8009B7B0:
    // 0x8009B7B0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009B7B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B7B8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B7BC: nop

    // 0x8009B7C0: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8009B7C4: nop

    // 0x8009B7C8: bc1f        L_8009B7E0
    if (!c1cs) {
        // 0x8009B7CC: nop
    
            goto L_8009B7E0;
    }
    // 0x8009B7CC: nop

    // 0x8009B7D0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009B7D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009B7D8: b           L_8009B810
    // 0x8009B7DC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_8009B810;
    // 0x8009B7DC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_8009B7E0:
    // 0x8009B7E0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8009B7E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009B7E8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B7EC: nop

    // 0x8009B7F0: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8009B7F4: nop

    // 0x8009B7F8: bc1f        L_8009B810
    if (!c1cs) {
        // 0x8009B7FC: nop
    
            goto L_8009B810;
    }
    // 0x8009B7FC: nop

    // 0x8009B800: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8009B804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009B808: nop

    // 0x8009B80C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_8009B810:
    // 0x8009B810: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009B814: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B818: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B81C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8009B820: div.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8009B824: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8009B828: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8009B82C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8009B830: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009B834: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8009B838: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009B83C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009B840: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B844: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009B848: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009B84C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009B850: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x8009B854: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009B858: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009B85C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B860: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009B864: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_8009B868:
    // 0x8009B868: b           L_8009B870
    // 0x8009B86C: nop

        goto L_8009B870;
    // 0x8009B86C: nop

L_8009B870:
    // 0x8009B870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009B874: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8009B878: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009B87C: jr          $ra
    // 0x8009B880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009B880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800BF5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF5D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BF5D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF5D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BF5DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BF5E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BF5E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF5E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF5EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BF5F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF5F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BF5F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BF5FC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800BF600: nop

    // 0x800BF604: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800BF608: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF60C: nop

    // 0x800BF610: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BF614: sltiu       $at, $t0, 0xB
    ctx->r1 = ctx->r8 < 0XB ? 1 : 0;
    // 0x800BF618: beq         $at, $zero, L_800BF6EC
    if (ctx->r1 == 0) {
        // 0x800BF61C: nop
    
            goto L_800BF6EC;
    }
    // 0x800BF61C: nop

    // 0x800BF620: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BF624: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BF628: addu        $at, $at, $t0
    gpr jr_addend_800BF634 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BF62C: lw          $t0, 0x4CC0($at)
    ctx->r8 = ADD32(ctx->r1, 0X4CC0);
    // 0x800BF630: nop

    // 0x800BF634: jr          $t0
    // 0x800BF638: nop

    switch (jr_addend_800BF634 >> 2) {
        case 0: goto L_800BF63C; break;
        case 1: goto L_800BF64C; break;
        case 2: goto L_800BF65C; break;
        case 3: goto L_800BF67C; break;
        case 4: goto L_800BF66C; break;
        case 5: goto L_800BF68C; break;
        case 6: goto L_800BF69C; break;
        case 7: goto L_800BF6AC; break;
        case 8: goto L_800BF6BC; break;
        case 9: goto L_800BF6CC; break;
        case 10: goto L_800BF6DC; break;
        default: switch_error(__func__, 0x800BF634, 0x80114CC0);
    }
    // 0x800BF638: nop

L_800BF63C:
    // 0x800BF63C: jal         0x800BDCF4
    // 0x800BF640: nop

    func_800BDCF4(rdram, ctx);
        goto after_0;
    // 0x800BF640: nop

    after_0:
    // 0x800BF644: b           L_800BF6F4
    // 0x800BF648: nop

        goto L_800BF6F4;
    // 0x800BF648: nop

L_800BF64C:
    // 0x800BF64C: jal         0x800BDEE0
    // 0x800BF650: nop

    func_800BDEE0(rdram, ctx);
        goto after_1;
    // 0x800BF650: nop

    after_1:
    // 0x800BF654: b           L_800BF6F4
    // 0x800BF658: nop

        goto L_800BF6F4;
    // 0x800BF658: nop

L_800BF65C:
    // 0x800BF65C: jal         0x800BE14C
    // 0x800BF660: nop

    func_800BE14C(rdram, ctx);
        goto after_2;
    // 0x800BF660: nop

    after_2:
    // 0x800BF664: b           L_800BF6F4
    // 0x800BF668: nop

        goto L_800BF6F4;
    // 0x800BF668: nop

L_800BF66C:
    // 0x800BF66C: jal         0x800BE3B4
    // 0x800BF670: nop

    func_800BE3B4(rdram, ctx);
        goto after_3;
    // 0x800BF670: nop

    after_3:
    // 0x800BF674: b           L_800BF6F4
    // 0x800BF678: nop

        goto L_800BF6F4;
    // 0x800BF678: nop

L_800BF67C:
    // 0x800BF67C: jal         0x800BE928
    // 0x800BF680: nop

    func_800BE928(rdram, ctx);
        goto after_4;
    // 0x800BF680: nop

    after_4:
    // 0x800BF684: b           L_800BF6F4
    // 0x800BF688: nop

        goto L_800BF6F4;
    // 0x800BF688: nop

L_800BF68C:
    // 0x800BF68C: jal         0x800BEB10
    // 0x800BF690: nop

    func_800BEB10(rdram, ctx);
        goto after_5;
    // 0x800BF690: nop

    after_5:
    // 0x800BF694: b           L_800BF6F4
    // 0x800BF698: nop

        goto L_800BF6F4;
    // 0x800BF698: nop

L_800BF69C:
    // 0x800BF69C: jal         0x800BEFF0
    // 0x800BF6A0: nop

    func_800BEFF0(rdram, ctx);
        goto after_6;
    // 0x800BF6A0: nop

    after_6:
    // 0x800BF6A4: b           L_800BF6F4
    // 0x800BF6A8: nop

        goto L_800BF6F4;
    // 0x800BF6A8: nop

L_800BF6AC:
    // 0x800BF6AC: jal         0x800BF240
    // 0x800BF6B0: nop

    func_800BF240(rdram, ctx);
        goto after_7;
    // 0x800BF6B0: nop

    after_7:
    // 0x800BF6B4: b           L_800BF6F4
    // 0x800BF6B8: nop

        goto L_800BF6F4;
    // 0x800BF6B8: nop

L_800BF6BC:
    // 0x800BF6BC: jal         0x800BF394
    // 0x800BF6C0: nop

    func_800BF394(rdram, ctx);
        goto after_8;
    // 0x800BF6C0: nop

    after_8:
    // 0x800BF6C4: b           L_800BF6F4
    // 0x800BF6C8: nop

        goto L_800BF6F4;
    // 0x800BF6C8: nop

L_800BF6CC:
    // 0x800BF6CC: jal         0x800BEDB0
    // 0x800BF6D0: nop

    func_800BEDB0(rdram, ctx);
        goto after_9;
    // 0x800BF6D0: nop

    after_9:
    // 0x800BF6D4: b           L_800BF6F4
    // 0x800BF6D8: nop

        goto L_800BF6F4;
    // 0x800BF6D8: nop

L_800BF6DC:
    // 0x800BF6DC: jal         0x800BE5CC
    // 0x800BF6E0: nop

    func_800BE5CC(rdram, ctx);
        goto after_10;
    // 0x800BF6E0: nop

    after_10:
    // 0x800BF6E4: b           L_800BF6F4
    // 0x800BF6E8: nop

        goto L_800BF6F4;
    // 0x800BF6E8: nop

L_800BF6EC:
    // 0x800BF6EC: b           L_800BF6F4
    // 0x800BF6F0: nop

        goto L_800BF6F4;
    // 0x800BF6F0: nop

L_800BF6F4:
    // 0x800BF6F4: b           L_800BF6FC
    // 0x800BF6F8: nop

        goto L_800BF6FC;
    // 0x800BF6F8: nop

L_800BF6FC:
    // 0x800BF6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BF704: jr          $ra
    // 0x800BF708: nop

    return;
    // 0x800BF708: nop

;}
RECOMP_FUNC void func_800B0A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0A78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B0A7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B0A80: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800B0A84: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800B0A88: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800B0A8C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B0A90: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B0A94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800B0A98: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800B0A9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B0AA0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B0AA4: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800B0AA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B0AAC: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x800B0AB0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B0AB4: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B0AB8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B0ABC: addiu       $a1, $a1, 0x39A0
    ctx->r5 = ADD32(ctx->r5, 0X39A0);
    // 0x800B0AC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B0AC4: jal         0x80027464
    // 0x800B0AC8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B0AC8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x800B0ACC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B0AD0: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800B0AD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B0AD8: beq         $t7, $at, L_800B0BF4
    if (ctx->r15 == ctx->r1) {
        // 0x800B0ADC: nop
    
            goto L_800B0BF4;
    }
    // 0x800B0ADC: nop

    // 0x800B0AE0: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x800B0AE4: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x800B0AE8: jal         0x80026F10
    // 0x800B0AEC: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800B0AEC: nop

    after_1:
    // 0x800B0AF0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800B0AF4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800B0AF8: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800B0AFC: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800B0B00: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800B0B04: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B0B08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B0B0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B0B10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B0B14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B0B18: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800B0B1C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800B0B20: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800B0B24: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800B0B28: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B2C: lwc1        $f16, 0x40($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800B0B30: nop

    // 0x800B0B34: swc1        $f16, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f16.u32l;
    // 0x800B0B38: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B0B40: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B0B44: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B48: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x800B0B4C: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
    // 0x800B0B50: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B54: nop

    // 0x800B0B58: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800B0B5C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800B0B64: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x800B0B68: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800B0B6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800B0B70: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800B0B74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B0B78: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800B0B7C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B80: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800B0B84: nop

    // 0x800B0B88: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800B0B8C: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x800B0B90: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B0B94: nop

    // 0x800B0B98: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x800B0B9C: nop

    // 0x800B0BA0: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x800B0BA4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B0BA8: nop

    // 0x800B0BAC: swc1        $f20, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f20.u32l;
    // 0x800B0BB0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B0BB4: addiu       $t8, $t8, 0x77C4
    ctx->r24 = ADD32(ctx->r24, 0X77C4);
    // 0x800B0BB8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B0BBC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B0BC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B0BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B0BC8: jal         0x8001C0EC
    // 0x800B0BCC: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800B0BCC: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    after_2:
    // 0x800B0BD0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B0BD4: jal         0x80029C40
    // 0x800B0BD8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B0BD8: nop

    after_3:
    // 0x800B0BDC: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B0BE0: jal         0x80029D04
    // 0x800B0BE4: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B0BE4: nop

    after_4:
    // 0x800B0BE8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800B0BEC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800B0BF0: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
L_800B0BF4:
    // 0x800B0BF4: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x800B0BF8: b           L_800B0C08
    // 0x800B0BFC: nop

        goto L_800B0C08;
    // 0x800B0BFC: nop

    // 0x800B0C00: b           L_800B0C08
    // 0x800B0C04: nop

        goto L_800B0C08;
    // 0x800B0C04: nop

L_800B0C08:
    // 0x800B0C08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B0C0C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B0C10: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B0C14: jr          $ra
    // 0x800B0C18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B0C18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800B466C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B466C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B4670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B4674: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4678: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B467C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4680: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4684: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4688: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B468C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4690: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4694: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B4698: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B469C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B46A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B46A4: nop

    // 0x800B46A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B46AC: nop

    // 0x800B46B0: bne         $t1, $zero, L_800B4768
    if (ctx->r9 != 0) {
        // 0x800B46B4: nop
    
            goto L_800B4768;
    }
    // 0x800B46B4: nop

    // 0x800B46B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B46BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B46C0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B46C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B46C8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B46CC: nop

    // 0x800B46D0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B46D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B46D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B46DC: nop

    // 0x800B46E0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B46E4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B46E8: nop

    // 0x800B46EC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800B46F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B46F4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B46F8: addiu       $t7, $t7, 0x7928
    ctx->r15 = ADD32(ctx->r15, 0X7928);
    // 0x800B46FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4700: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B4704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4708: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800B470C: jal         0x8001C0EC
    // 0x800B4710: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B4710: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_0:
    // 0x800B4714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B471C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4720: addiu       $a3, $a3, 0x79D0
    ctx->r7 = ADD32(ctx->r7, 0X79D0);
    // 0x800B4724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4728: jal         0x8001ABF4
    // 0x800B472C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B472C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B4730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4738: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B473C: addiu       $a3, $a3, 0x7A08
    ctx->r7 = ADD32(ctx->r7, 0X7A08);
    // 0x800B4740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B4744: jal         0x8001ABF4
    // 0x800B4748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B4748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B474C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4754: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4758: addiu       $a3, $a3, 0x7A40
    ctx->r7 = ADD32(ctx->r7, 0X7A40);
    // 0x800B475C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B4760: jal         0x8001ABF4
    // 0x800B4764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B4764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800B4768:
    // 0x800B4768: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B476C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4770: jal         0x80029C40
    // 0x800B4774: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B4774: nop

    after_4:
    // 0x800B4778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B477C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4780: jal         0x80029D04
    // 0x800B4784: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B4784: nop

    after_5:
    // 0x800B4788: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B478C: nop

    // 0x800B4790: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B4794: nop

    // 0x800B4798: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B479C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800B47A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B47A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B47A8: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800B47AC: nop

    // 0x800B47B0: bne         $t2, $at, L_800B47D8
    if (ctx->r10 != ctx->r1) {
        // 0x800B47B4: nop
    
            goto L_800B47D8;
    }
    // 0x800B47B4: nop

    // 0x800B47B8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800B47BC: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800B47C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800B47C4: jal         0x800B4EFC
    // 0x800B47C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800B4EFC(rdram, ctx);
        goto after_6;
    // 0x800B47C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800B47CC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B47D0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800B47D4: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_800B47D8:
    // 0x800B47D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B47DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800B47E0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800B47E4: nop

    // 0x800B47E8: bne         $t6, $at, L_800B4880
    if (ctx->r14 != ctx->r1) {
        // 0x800B47EC: nop
    
            goto L_800B4880;
    }
    // 0x800B47EC: nop

    // 0x800B47F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B47F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800B47F8: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800B47FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B4800: nop

    // 0x800B4804: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800B4808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B480C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B4810: addiu       $t8, $t8, 0x7928
    ctx->r24 = ADD32(ctx->r24, 0X7928);
    // 0x800B4814: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4818: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B481C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B4824: jal         0x8001C0EC
    // 0x800B4828: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800B4828: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_7:
    // 0x800B482C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4834: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4838: addiu       $a3, $a3, 0x79B4
    ctx->r7 = ADD32(ctx->r7, 0X79B4);
    // 0x800B483C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4840: jal         0x8001ABF4
    // 0x800B4844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800B4844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x800B4848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B484C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4850: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4854: addiu       $a3, $a3, 0x79EC
    ctx->r7 = ADD32(ctx->r7, 0X79EC);
    // 0x800B4858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B485C: jal         0x8001ABF4
    // 0x800B4860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800B4860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800B4864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4868: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B486C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B4870: addiu       $a3, $a3, 0x7A24
    ctx->r7 = ADD32(ctx->r7, 0X7A24);
    // 0x800B4874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B4878: jal         0x8001ABF4
    // 0x800B487C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800B487C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_800B4880:
    // 0x800B4880: b           L_800B4888
    // 0x800B4884: nop

        goto L_800B4888;
    // 0x800B4884: nop

L_800B4888:
    // 0x800B4888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B488C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B4890: jr          $ra
    // 0x800B4894: nop

    return;
    // 0x800B4894: nop

;}
RECOMP_FUNC void func_800A391C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A391C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A3920: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A3924: nop

    // 0x800A3928: beq         $t6, $zero, L_800A3944
    if (ctx->r14 == 0) {
        // 0x800A392C: nop
    
            goto L_800A3944;
    }
    // 0x800A392C: nop

    // 0x800A3930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A3934: beq         $t6, $at, L_800A3944
    if (ctx->r14 == ctx->r1) {
        // 0x800A3938: nop
    
            goto L_800A3944;
    }
    // 0x800A3938: nop

    // 0x800A393C: jr          $ra
    // 0x800A3940: nop

    return;
    // 0x800A3940: nop

L_800A3944:
    // 0x800A3944: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A3948: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A394C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3950: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A3954: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A3958: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A395C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A3960: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A3964: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A3968: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A396C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800A3970: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A3974: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800A3978: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A397C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A3980: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A3984: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A3988: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A398C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A3990: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A3994: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A3998: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A399C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A39A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A39A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A39A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A39AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A39B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A39B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A39B8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A39BC: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A39C0: jr          $ra
    // 0x800A39C4: nop

    return;
    // 0x800A39C4: nop

    // 0x800A39C8: jr          $ra
    // 0x800A39CC: nop

    return;
    // 0x800A39CC: nop

;}
RECOMP_FUNC void func_8007B5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B5A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007B5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B5A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007B5AC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007B5B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007B5B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007B5B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B5BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B5C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B5C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007B5C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007B5CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B5D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007B5D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B5D8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8007B5DC: jal         0x800682E0
    // 0x8007B5E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800682E0(rdram, ctx);
        goto after_0;
    // 0x8007B5E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8007B5E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007B5E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B5EC: sw          $t0, -0x1DC8($at)
    MEM_W(-0X1DC8, ctx->r1) = ctx->r8;
    // 0x8007B5F0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8007B5F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B5F8: sw          $t1, -0x1DC0($at)
    MEM_W(-0X1DC0, ctx->r1) = ctx->r9;
    // 0x8007B5FC: jal         0x80085884
    // 0x8007B600: nop

    func_80085884(rdram, ctx);
        goto after_1;
    // 0x8007B600: nop

    after_1:
    // 0x8007B604: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B608: jal         0x8007897C
    // 0x8007B60C: nop

    func_8007897C(rdram, ctx);
        goto after_2;
    // 0x8007B60C: nop

    after_2:
    // 0x8007B610: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007B614: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007B618: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x8007B61C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B620: jal         0x80079688
    // 0x8007B624: nop

    func_80079688(rdram, ctx);
        goto after_3;
    // 0x8007B624: nop

    after_3:
    // 0x8007B628: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B62C: jal         0x800797FC
    // 0x8007B630: nop

    func_800797FC(rdram, ctx);
        goto after_4;
    // 0x8007B630: nop

    after_4:
    // 0x8007B634: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B638: jal         0x80079B60
    // 0x8007B63C: nop

    func_80079B60(rdram, ctx);
        goto after_5;
    // 0x8007B63C: nop

    after_5:
    // 0x8007B640: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007B644: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8007B648: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x8007B64C: nop

    // 0x8007B650: bne         $t5, $at, L_8007B8B0
    if (ctx->r13 != ctx->r1) {
        // 0x8007B654: nop
    
            goto L_8007B8B0;
    }
    // 0x8007B654: nop

    // 0x8007B658: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007B65C: nop

    // 0x8007B660: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8007B664: nop

    // 0x8007B668: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8007B66C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B670: jal         0x80078AEC
    // 0x8007B674: nop

    func_80078AEC(rdram, ctx);
        goto after_6;
    // 0x8007B674: nop

    after_6:
    // 0x8007B678: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007B67C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007B680: nop

    // 0x8007B684: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8007B688: beq         $t8, $zero, L_8007B6AC
    if (ctx->r24 == 0) {
        // 0x8007B68C: nop
    
            goto L_8007B6AC;
    }
    // 0x8007B68C: nop

    // 0x8007B690: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B694: jal         0x800795C8
    // 0x8007B698: nop

    func_800795C8(rdram, ctx);
        goto after_7;
    // 0x8007B698: nop

    after_7:
    // 0x8007B69C: b           L_8007B918
    // 0x8007B6A0: nop

        goto L_8007B918;
    // 0x8007B6A0: nop

    // 0x8007B6A4: b           L_8007B798
    // 0x8007B6A8: nop

        goto L_8007B798;
    // 0x8007B6A8: nop

L_8007B6AC:
    // 0x8007B6AC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007B6B0: nop

    // 0x8007B6B4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8007B6B8: beq         $t0, $zero, L_8007B6D4
    if (ctx->r8 == 0) {
        // 0x8007B6BC: nop
    
            goto L_8007B6D4;
    }
    // 0x8007B6BC: nop

    // 0x8007B6C0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007B6C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007B6C8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8007B6CC: b           L_8007B798
    // 0x8007B6D0: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
        goto L_8007B798;
    // 0x8007B6D0: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_8007B6D4:
    // 0x8007B6D4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007B6D8: nop

    // 0x8007B6DC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8007B6E0: beq         $t3, $zero, L_8007B744
    if (ctx->r11 == 0) {
        // 0x8007B6E4: nop
    
            goto L_8007B744;
    }
    // 0x8007B6E4: nop

    // 0x8007B6E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007B6EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007B6F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007B6F4: lwc1        $f10, 0x24($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8007B6F8: nop

    // 0x8007B6FC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007B700: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x8007B704: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007B708: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007B70C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007B710: lwc1        $f4, 0x2C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8007B714: nop

    // 0x8007B718: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8007B71C: swc1        $f8, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f8.u32l;
    // 0x8007B720: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007B724: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007B728: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B72C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8007B730: nop

    // 0x8007B734: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007B738: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007B73C: b           L_8007B798
    // 0x8007B740: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
        goto L_8007B798;
    // 0x8007B740: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
L_8007B744:
    // 0x8007B744: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007B748: nop

    // 0x8007B74C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8007B750: beq         $t8, $zero, L_8007B798
    if (ctx->r24 == 0) {
        // 0x8007B754: nop
    
            goto L_8007B798;
    }
    // 0x8007B754: nop

    // 0x8007B758: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007B75C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007B760: lwc1        $f6, 0x24($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8007B764: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007B768: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8007B76C: nop

    // 0x8007B770: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8007B774: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
    // 0x8007B778: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007B77C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007B780: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8007B784: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007B788: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8007B78C: nop

    // 0x8007B790: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8007B794: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
L_8007B798:
    // 0x8007B798: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007B79C: nop

    // 0x8007B7A0: beq         $t1, $zero, L_8007B848
    if (ctx->r9 == 0) {
        // 0x8007B7A4: nop
    
            goto L_8007B848;
    }
    // 0x8007B7A4: nop

    // 0x8007B7A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007B7AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007B7B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007B7B4: lwc1        $f10, 0x24($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X24);
    // 0x8007B7B8: nop

    // 0x8007B7BC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8007B7C0: nop

    // 0x8007B7C4: bc1f        L_8007B7F8
    if (!c1cs) {
        // 0x8007B7C8: nop
    
            goto L_8007B7F8;
    }
    // 0x8007B7C8: nop

    // 0x8007B7CC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007B7D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B7D4: nop

    // 0x8007B7D8: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x8007B7DC: nop

    // 0x8007B7E0: bc1f        L_8007B7F8
    if (!c1cs) {
        // 0x8007B7E4: nop
    
            goto L_8007B7F8;
    }
    // 0x8007B7E4: nop

    // 0x8007B7E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007B7EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007B7F0: nop

    // 0x8007B7F4: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
L_8007B7F8:
    // 0x8007B7F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007B7FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007B800: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007B804: lwc1        $f6, 0x2C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8007B808: nop

    // 0x8007B80C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8007B810: nop

    // 0x8007B814: bc1f        L_8007B848
    if (!c1cs) {
        // 0x8007B818: nop
    
            goto L_8007B848;
    }
    // 0x8007B818: nop

    // 0x8007B81C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007B820: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007B824: nop

    // 0x8007B828: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x8007B82C: nop

    // 0x8007B830: bc1f        L_8007B848
    if (!c1cs) {
        // 0x8007B834: nop
    
            goto L_8007B848;
    }
    // 0x8007B834: nop

    // 0x8007B838: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007B83C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007B840: nop

    // 0x8007B844: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
L_8007B848:
    // 0x8007B848: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007B84C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x8007B850: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8007B854: nop

    // 0x8007B858: bne         $t7, $at, L_8007B8A8
    if (ctx->r15 != ctx->r1) {
        // 0x8007B85C: nop
    
            goto L_8007B8A8;
    }
    // 0x8007B85C: nop

    // 0x8007B860: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007B864: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007B868: lwc1        $f18, 0x24($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8007B86C: nop

    // 0x8007B870: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8007B874: nop

    // 0x8007B878: bc1f        L_8007B8A8
    if (!c1cs) {
        // 0x8007B87C: nop
    
            goto L_8007B8A8;
    }
    // 0x8007B87C: nop

    // 0x8007B880: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8007B884: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007B888: nop

    // 0x8007B88C: c.eq.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl == ctx->f6.fl;
    // 0x8007B890: nop

    // 0x8007B894: bc1f        L_8007B8A8
    if (!c1cs) {
        // 0x8007B898: nop
    
            goto L_8007B8A8;
    }
    // 0x8007B898: nop

    // 0x8007B89C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007B8A0: addiu       $t9, $zero, 0x27
    ctx->r25 = ADD32(0, 0X27);
    // 0x8007B8A4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_8007B8A8:
    // 0x8007B8A8: b           L_8007B8D8
    // 0x8007B8AC: nop

        goto L_8007B8D8;
    // 0x8007B8AC: nop

L_8007B8B0:
    // 0x8007B8B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B8B4: jal         0x80078AEC
    // 0x8007B8B8: nop

    func_80078AEC(rdram, ctx);
        goto after_8;
    // 0x8007B8B8: nop

    after_8:
    // 0x8007B8BC: beq         $v0, $zero, L_8007B8D8
    if (ctx->r2 == 0) {
        // 0x8007B8C0: nop
    
            goto L_8007B8D8;
    }
    // 0x8007B8C0: nop

    // 0x8007B8C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B8C8: jal         0x800795C8
    // 0x8007B8CC: nop

    func_800795C8(rdram, ctx);
        goto after_9;
    // 0x8007B8CC: nop

    after_9:
    // 0x8007B8D0: b           L_8007B918
    // 0x8007B8D4: nop

        goto L_8007B918;
    // 0x8007B8D4: nop

L_8007B8D8:
    // 0x8007B8D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B8DC: jal         0x80079D48
    // 0x8007B8E0: nop

    func_80079D48(rdram, ctx);
        goto after_10;
    // 0x8007B8E0: nop

    after_10:
    // 0x8007B8E4: beq         $v0, $zero, L_8007B8F4
    if (ctx->r2 == 0) {
        // 0x8007B8E8: nop
    
            goto L_8007B8F4;
    }
    // 0x8007B8E8: nop

    // 0x8007B8EC: b           L_8007B918
    // 0x8007B8F0: nop

        goto L_8007B918;
    // 0x8007B8F0: nop

L_8007B8F4:
    // 0x8007B8F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B8F8: jal         0x8007B4BC
    // 0x8007B8FC: nop

    func_8007B4BC(rdram, ctx);
        goto after_11;
    // 0x8007B8FC: nop

    after_11:
    // 0x8007B900: beq         $v0, $zero, L_8007B910
    if (ctx->r2 == 0) {
        // 0x8007B904: nop
    
            goto L_8007B910;
    }
    // 0x8007B904: nop

    // 0x8007B908: b           L_8007B918
    // 0x8007B90C: nop

        goto L_8007B918;
    // 0x8007B90C: nop

L_8007B910:
    // 0x8007B910: b           L_8007B918
    // 0x8007B914: nop

        goto L_8007B918;
    // 0x8007B914: nop

L_8007B918:
    // 0x8007B918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B91C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007B920: jr          $ra
    // 0x8007B924: nop

    return;
    // 0x8007B924: nop

;}
RECOMP_FUNC void func_800E0154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0154: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E0158: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E015C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E0160: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E0164: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E0168: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E016C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E0170: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E0174: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0178: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E017C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0180: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E0184: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0188: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E018C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E0190: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E0194: nop

    // 0x800E0198: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E019C: nop

    // 0x800E01A0: bne         $t1, $zero, L_800E0280
    if (ctx->r9 != 0) {
        // 0x800E01A4: nop
    
            goto L_800E0280;
    }
    // 0x800E01A4: nop

    // 0x800E01A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E01AC: nop

    // 0x800E01B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E01B4: nop

    // 0x800E01B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E01BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E01C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E01C4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E01C8: nop

    // 0x800E01CC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800E01D0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E01D4: nop

    // 0x800E01D8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800E01DC: nop

    // 0x800E01E0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800E01E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E01E8: nop

    // 0x800E01EC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800E01F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E01F4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E01F8: addiu       $t8, $t8, -0x700C
    ctx->r24 = ADD32(ctx->r24, -0X700C);
    // 0x800E01FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0200: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E0204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0208: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800E020C: jal         0x8001C0EC
    // 0x800E0210: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E0210: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E0214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E021C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0220: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E0224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0228: jal         0x8001ABF4
    // 0x800E022C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E022C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E0230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0234: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0238: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E023C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0240: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E0244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E0248: jal         0x8001ABF4
    // 0x800E024C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E024C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E0250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0258: jal         0x8002A46C
    // 0x800E025C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E025C: nop

    after_3:
    // 0x800E0260: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E0264: nop

    // 0x800E0268: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800E026C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E0270: nop

    // 0x800E0274: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E0278: nop

    // 0x800E027C: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
L_800E0280:
    // 0x800E0280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0288: jal         0x8001B62C
    // 0x800E028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800E028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E0290: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800E0294: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E0298: nop

    // 0x800E029C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800E02A0: nop

    // 0x800E02A4: bc1f        L_800E0424
    if (!c1cs) {
        // 0x800E02A8: nop
    
            goto L_800E0424;
    }
    // 0x800E02A8: nop

    // 0x800E02AC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E02B0: nop

    // 0x800E02B4: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x800E02B8: nop

    // 0x800E02BC: bne         $t3, $zero, L_800E0424
    if (ctx->r11 != 0) {
        // 0x800E02C0: nop
    
            goto L_800E0424;
    }
    // 0x800E02C0: nop

    // 0x800E02C4: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
L_800E02C8:
    // 0x800E02C8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E02CC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800E02D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E02D4: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800E02D8: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800E02DC: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x800E02E0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800E02E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E02E8: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800E02EC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800E02F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E02F4: addiu       $a1, $a1, 0x4378
    ctx->r5 = ADD32(ctx->r5, 0X4378);
    // 0x800E02F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E02FC: jal         0x80027464
    // 0x800E0300: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x800E0300: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800E0304: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800E0308: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800E030C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E0310: beq         $t2, $at, L_800E03EC
    if (ctx->r10 == ctx->r1) {
        // 0x800E0314: nop
    
            goto L_800E03EC;
    }
    // 0x800E0314: nop

    // 0x800E0318: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800E031C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0320: addiu       $a3, $a3, -0x6C7C
    ctx->r7 = ADD32(ctx->r7, -0X6C7C);
    // 0x800E0324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0328: jal         0x8001ABF4
    // 0x800E032C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800E032C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x800E0330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0338: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800E033C: jal         0x80026F10
    // 0x800E0340: nop

    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x800E0340: nop

    after_7:
    // 0x800E0344: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800E0348: nop

    // 0x800E034C: bne         $t5, $zero, L_800E036C
    if (ctx->r13 != 0) {
        // 0x800E0350: nop
    
            goto L_800E036C;
    }
    // 0x800E0350: nop

    // 0x800E0354: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800E0358: lui         $a1, 0xC3A2
    ctx->r5 = S32(0XC3A2 << 16);
    // 0x800E035C: jal         0x8002A8B4
    // 0x800E0360: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A8B4(rdram, ctx);
        goto after_8;
    // 0x800E0360: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_8:
    // 0x800E0364: b           L_800E039C
    // 0x800E0368: nop

        goto L_800E039C;
    // 0x800E0368: nop

L_800E036C:
    // 0x800E036C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x800E0370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E0374: bne         $t6, $at, L_800E0390
    if (ctx->r14 != ctx->r1) {
        // 0x800E0378: nop
    
            goto L_800E0390;
    }
    // 0x800E0378: nop

    // 0x800E037C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800E0380: jal         0x8002A8B4
    // 0x800E0384: lui         $a1, 0xC20C
    ctx->r5 = S32(0XC20C << 16);
    func_8002A8B4(rdram, ctx);
        goto after_9;
    // 0x800E0384: lui         $a1, 0xC20C
    ctx->r5 = S32(0XC20C << 16);
    after_9:
    // 0x800E0388: b           L_800E039C
    // 0x800E038C: nop

        goto L_800E039C;
    // 0x800E038C: nop

L_800E0390:
    // 0x800E0390: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800E0394: jal         0x8002A8B4
    // 0x800E0398: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8002A8B4(rdram, ctx);
        goto after_10;
    // 0x800E0398: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
L_800E039C:
    // 0x800E039C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800E03A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E03A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800E03A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E03AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E03B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800E03B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800E03B8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800E03BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800E03C0: sh          $t7, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r15;
    // 0x800E03C4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800E03C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E03CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800E03D0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800E03D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E03D8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800E03DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E03E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E03E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E03E8: sh          $t0, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r8;
L_800E03EC:
    // 0x800E03EC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E03F0: nop

    // 0x800E03F4: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x800E03F8: nop

    // 0x800E03FC: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x800E0400: sh          $t5, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r13;
    // 0x800E0404: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x800E0408: nop

    // 0x800E040C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800E0410: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x800E0414: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800E0418: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x800E041C: bne         $at, $zero, L_800E02C8
    if (ctx->r1 != 0) {
        // 0x800E0420: sh          $t8, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r24;
            goto L_800E02C8;
    }
    // 0x800E0420: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
L_800E0424:
    // 0x800E0424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0428: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E042C: jal         0x8001B4AC
    // 0x800E0430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x800E0430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800E0434: beq         $v0, $zero, L_800E0460
    if (ctx->r2 == 0) {
        // 0x800E0438: nop
    
            goto L_800E0460;
    }
    // 0x800E0438: nop

    // 0x800E043C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E0440: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E0444: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x800E0448: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E044C: nop

    // 0x800E0450: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
    // 0x800E0454: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E0458: nop

    // 0x800E045C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800E0460:
    // 0x800E0460: b           L_800E0468
    // 0x800E0464: nop

        goto L_800E0468;
    // 0x800E0464: nop

L_800E0468:
    // 0x800E0468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E046C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E0470: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E0474: jr          $ra
    // 0x800E0478: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E0478: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800AC57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC57C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AC580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AC588: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AC58C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AC590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AC594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AC59C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC5A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AC5A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AC5A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AC5AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800AC5B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC5B4: nop

    // 0x800AC5B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AC5BC: nop

    // 0x800AC5C0: bne         $t1, $zero, L_800AC600
    if (ctx->r9 != 0) {
        // 0x800AC5C4: nop
    
            goto L_800AC600;
    }
    // 0x800AC5C4: nop

    // 0x800AC5C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC5CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AC5D0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AC5D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AC5D8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC5DC: nop

    // 0x800AC5E0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AC5E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AC5E8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC5EC: nop

    // 0x800AC5F0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AC5F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC5F8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800AC5FC: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800AC600:
    // 0x800AC600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC604: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC608: jal         0x80029C40
    // 0x800AC60C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AC60C: nop

    after_0:
    // 0x800AC610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AC614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AC618: jal         0x80029D04
    // 0x800AC61C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AC61C: nop

    after_1:
    // 0x800AC620: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC624: nop

    // 0x800AC628: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800AC62C: nop

    // 0x800AC630: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AC634: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x800AC638: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC63C: nop

    // 0x800AC640: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x800AC644: nop

    // 0x800AC648: bgtz        $t2, L_800AC668
    if (SIGNED(ctx->r10) > 0) {
        // 0x800AC64C: nop
    
            goto L_800AC668;
    }
    // 0x800AC64C: nop

    // 0x800AC650: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC654: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800AC658: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AC65C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC660: nop

    // 0x800AC664: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800AC668:
    // 0x800AC668: b           L_800AC670
    // 0x800AC66C: nop

        goto L_800AC670;
    // 0x800AC66C: nop

L_800AC670:
    // 0x800AC670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AC678: jr          $ra
    // 0x800AC67C: nop

    return;
    // 0x800AC67C: nop

;}
