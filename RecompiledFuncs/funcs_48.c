#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800FBA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBA24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FBA28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FBA2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FBA30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FBA34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FBA38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FBA3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBA40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FBA44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBA48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FBA4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FBA50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FBA54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FBA58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBA5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBA60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FBA64: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800FBA68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FBA6C: jal         0x800175F0
    // 0x800FBA70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800FBA70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800FBA74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FBA78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800FBA7C: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800FBA80: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800FBA84: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800FBA88: jal         0x8007EDF4
    // 0x800FBA8C: nop

    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x800FBA8C: nop

    after_1:
    // 0x800FBA90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBA94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBA98: jal         0x8002B114
    // 0x800FBA9C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800FBA9C: nop

    after_2:
    // 0x800FBAA0: b           L_800FBAA8
    // 0x800FBAA4: nop

        goto L_800FBAA8;
    // 0x800FBAA4: nop

L_800FBAA8:
    // 0x800FBAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBAAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FBAB0: jr          $ra
    // 0x800FBAB4: nop

    return;
    // 0x800FBAB4: nop

;}
RECOMP_FUNC void func_800E632C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E632C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6334: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E6338: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E633C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E6340: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E6344: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E6348: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E634C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E6350: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E6354: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E6358: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E635C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E6360: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E6364: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E6368: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E636C: addiu       $a1, $a1, 0x4450
    ctx->r5 = ADD32(ctx->r5, 0X4450);
    // 0x800E6370: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E6374: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E6378: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E637C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E6380: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E6384: jal         0x80027464
    // 0x800E6388: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E6388: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E638C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E6390: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E6394: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E6398: beq         $t1, $at, L_800E63DC
    if (ctx->r9 == ctx->r1) {
        // 0x800E639C: nop
    
            goto L_800E63DC;
    }
    // 0x800E639C: nop

    // 0x800E63A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800E63A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E63A8: addiu       $a3, $a3, -0x68B0
    ctx->r7 = ADD32(ctx->r7, -0X68B0);
    // 0x800E63AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E63B0: jal         0x8001ABF4
    // 0x800E63B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E63B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E63B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E63BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E63C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E63C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E63C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E63CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E63D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E63D4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E63D8: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800E63DC:
    // 0x800E63DC: b           L_800E63E4
    // 0x800E63E0: nop

        goto L_800E63E4;
    // 0x800E63E0: nop

L_800E63E4:
    // 0x800E63E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E63E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E63EC: jr          $ra
    // 0x800E63F0: nop

    return;
    // 0x800E63F0: nop

;}
RECOMP_FUNC void func_800B4E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B4E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B4E68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4E70: jal         0x8002B0E4
    // 0x800B4E74: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B4E74: nop

    after_0:
    // 0x800B4E78: b           L_800B4E80
    // 0x800B4E7C: nop

        goto L_800B4E80;
    // 0x800B4E7C: nop

L_800B4E80:
    // 0x800B4E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B4E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B4E88: jr          $ra
    // 0x800B4E8C: nop

    return;
    // 0x800B4E8C: nop

;}
RECOMP_FUNC void func_80091040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091048: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009104C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091050: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091054: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091058: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009105C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091060: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091064: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091068: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009106C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091070: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091074: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091078: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009107C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091080: addiu       $a1, $a1, 0x14F8
    ctx->r5 = ADD32(ctx->r5, 0X14F8);
    // 0x80091084: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091088: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009108C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091090: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091094: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091098: jal         0x80027464
    // 0x8009109C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009109C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800910A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800910A4: b           L_800910AC
    // 0x800910A8: nop

        goto L_800910AC;
    // 0x800910A8: nop

L_800910AC:
    // 0x800910AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800910B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800910B4: jr          $ra
    // 0x800910B8: nop

    return;
    // 0x800910B8: nop

;}
RECOMP_FUNC void func_8006E93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E93C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006E940: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E944: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006E948: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E94C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006E950: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006E954: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x8006E958: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8006E95C: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8006E960: ori         $t8, $t8, 0xE02
    ctx->r24 = ctx->r24 | 0XE02;
    // 0x8006E964: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006E968: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x8006E96C: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x8006E970: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006E974: lh          $t2, 0xC2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XC2);
    // 0x8006E978: nop

    // 0x8006E97C: bne         $t2, $zero, L_8006EAB8
    if (ctx->r10 != 0) {
        // 0x8006E980: nop
    
            goto L_8006EAB8;
    }
    // 0x8006E980: nop

    // 0x8006E984: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006E988: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006E98C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E990: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006E994: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006E998: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x8006E99C: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8006E9A0: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x8006E9A4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006E9A8: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x8006E9AC: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x8006E9B0: nop

    // 0x8006E9B4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006E9B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006E9BC: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006E9C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E9C4: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006E9C8: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006E9CC: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x8006E9D0: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x8006E9D4: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8006E9D8: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006E9DC: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x8006E9E0: nop

    // 0x8006E9E4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006E9E8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006E9EC: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006E9F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E9F4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8006E9F8: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006E9FC: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x8006EA00: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8006EA04: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8006EA08: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8006EA0C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006EA10: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8006EA14: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8006EA18: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006EA1C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006EA20: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006EA24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EA28: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006EA2C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006EA30: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x8006EA34: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8006EA38: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8006EA3C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006EA40: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8006EA44: nop

    // 0x8006EA48: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006EA4C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006EA50: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006EA54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EA58: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006EA5C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006EA60: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x8006EA64: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8006EA68: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8006EA6C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006EA70: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8006EA74: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8006EA78: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8006EA7C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006EA80: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006EA84: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006EA88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EA8C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8006EA90: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006EA94: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x8006EA98: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x8006EA9C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8006EAA0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006EAA4: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x8006EAA8: nop

    // 0x8006EAAC: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006EAB0: b           L_8006EC30
    // 0x8006EAB4: nop

        goto L_8006EC30;
    // 0x8006EAB4: nop

L_8006EAB8:
    // 0x8006EAB8: lh          $t6, 0xC2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XC2);
    // 0x8006EABC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006EAC0: bne         $t6, $at, L_8006EBFC
    if (ctx->r14 != ctx->r1) {
        // 0x8006EAC4: nop
    
            goto L_8006EBFC;
    }
    // 0x8006EAC4: nop

    // 0x8006EAC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006EACC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006EAD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EAD4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8006EAD8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006EADC: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x8006EAE0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8006EAE4: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8006EAE8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006EAEC: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8006EAF0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8006EAF4: nop

    // 0x8006EAF8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006EAFC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006EB00: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006EB04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EB08: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006EB0C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006EB10: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
    // 0x8006EB14: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8006EB18: lui         $t5, 0xE800
    ctx->r13 = S32(0XE800 << 16);
    // 0x8006EB1C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006EB20: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8006EB24: nop

    // 0x8006EB28: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006EB2C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006EB30: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006EB34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EB38: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006EB3C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006EB40: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8006EB44: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8006EB48: lui         $t0, 0xF500
    ctx->r8 = S32(0XF500 << 16);
    // 0x8006EB4C: ori         $t0, $t0, 0x100
    ctx->r8 = ctx->r8 | 0X100;
    // 0x8006EB50: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006EB54: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8006EB58: lui         $t2, 0x700
    ctx->r10 = S32(0X700 << 16);
    // 0x8006EB5C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006EB60: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006EB64: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006EB68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EB6C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8006EB70: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006EB74: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x8006EB78: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8006EB7C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8006EB80: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006EB84: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8006EB88: nop

    // 0x8006EB8C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006EB90: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006EB94: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006EB98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EB9C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006EBA0: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006EBA4: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8006EBA8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8006EBAC: lui         $t1, 0xF000
    ctx->r9 = S32(0XF000 << 16);
    // 0x8006EBB0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006EBB4: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8006EBB8: lui         $t3, 0x73F
    ctx->r11 = S32(0X73F << 16);
    // 0x8006EBBC: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x8006EBC0: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006EBC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006EBC8: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006EBCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EBD0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006EBD4: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006EBD8: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8006EBDC: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8006EBE0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8006EBE4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006EBE8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8006EBEC: nop

    // 0x8006EBF0: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8006EBF4: b           L_8006EC30
    // 0x8006EBF8: nop

        goto L_8006EC30;
    // 0x8006EBF8: nop

L_8006EBFC:
    // 0x8006EBFC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006EC00: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006EC04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EC08: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006EC0C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006EC10: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x8006EC14: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8006EC18: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8006EC1C: ori         $t2, $t2, 0xE02
    ctx->r10 = ctx->r10 | 0XE02;
    // 0x8006EC20: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006EC24: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8006EC28: nop

    // 0x8006EC2C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_8006EC30:
    // 0x8006EC30: blez        $a3, L_8006F560
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8006EC34: sw          $zero, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = 0;
            goto L_8006F560;
    }
    // 0x8006EC34: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_8006EC38:
    // 0x8006EC38: lh          $t5, 0xC2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XC2);
    // 0x8006EC3C: nop

    // 0x8006EC40: bne         $t5, $zero, L_8006EE4C
    if (ctx->r13 != 0) {
        // 0x8006EC44: nop
    
            goto L_8006EE4C;
    }
    // 0x8006EC44: nop

    // 0x8006EC48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006EC4C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006EC50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EC54: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006EC58: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006EC5C: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x8006EC60: sra         $t8, $a2, 1
    ctx->r24 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8006EC64: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006EC68: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8006EC6C: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006EC70: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8006EC74: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x8006EC78: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006EC7C: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x8006EC80: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8006EC84: nop

    // 0x8006EC88: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006EC8C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006EC90: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006EC94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EC98: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006EC9C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006ECA0: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8006ECA4: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x8006ECA8: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8006ECAC: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8006ECB0: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8006ECB4: andi        $t1, $t0, 0x1FF
    ctx->r9 = ctx->r8 & 0X1FF;
    // 0x8006ECB8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8006ECBC: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x8006ECC0: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006ECC4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8006ECC8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006ECCC: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8006ECD0: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8006ECD4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8006ECD8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006ECDC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006ECE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ECE4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8006ECE8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006ECEC: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x8006ECF0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8006ECF4: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8006ECF8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006ECFC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8006ED00: nop

    // 0x8006ED04: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8006ED08: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006ED0C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006ED10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ED14: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006ED18: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006ED1C: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8006ED20: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x8006ED24: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8006ED28: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8006ED2C: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8006ED30: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006ED34: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8006ED38: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006ED3C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8006ED40: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x8006ED44: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006ED48: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x8006ED4C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8006ED50: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x8006ED54: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006ED58: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8006ED5C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8006ED60: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8006ED64: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x8006ED68: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006ED6C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006ED70: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006ED74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006ED78: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006ED7C: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006ED80: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x8006ED84: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8006ED88: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8006ED8C: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8006ED90: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8006ED94: nop

    // 0x8006ED98: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006ED9C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006EDA0: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006EDA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EDA8: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8006EDAC: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006EDB0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8006EDB4: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x8006EDB8: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8006EDBC: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x8006EDC0: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8006EDC4: andi        $t0, $t9, 0x1FF
    ctx->r8 = ctx->r25 & 0X1FF;
    // 0x8006EDC8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8006EDCC: sll         $t1, $t0, 9
    ctx->r9 = S32(ctx->r8 << 9);
    // 0x8006EDD0: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8006EDD4: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x8006EDD8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006EDDC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8006EDE0: nop

    // 0x8006EDE4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006EDE8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006EDEC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006EDF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EDF4: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8006EDF8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006EDFC: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x8006EE00: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8006EE04: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006EE08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006EE0C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8006EE10: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8006EE14: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8006EE18: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006EE1C: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x8006EE20: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8006EE24: addiu       $t6, $t2, 0x4
    ctx->r14 = ADD32(ctx->r10, 0X4);
    // 0x8006EE28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006EE2C: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8006EE30: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8006EE34: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8006EE38: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8006EE3C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8006EE40: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006EE44: b           L_8006F23C
    // 0x8006EE48: nop

        goto L_8006F23C;
    // 0x8006EE48: nop

L_8006EE4C:
    // 0x8006EE4C: lh          $t1, 0xC2($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XC2);
    // 0x8006EE50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006EE54: bne         $t1, $at, L_8006F04C
    if (ctx->r9 != ctx->r1) {
        // 0x8006EE58: nop
    
            goto L_8006F04C;
    }
    // 0x8006EE58: nop

    // 0x8006EE5C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006EE60: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006EE64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EE68: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006EE6C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006EE70: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x8006EE74: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x8006EE78: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8006EE7C: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x8006EE80: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8006EE84: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8006EE88: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8006EE8C: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8006EE90: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8006EE94: nop

    // 0x8006EE98: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006EE9C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006EEA0: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006EEA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EEA8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006EEAC: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006EEB0: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x8006EEB4: addiu       $t3, $a2, 0x8
    ctx->r11 = ADD32(ctx->r6, 0X8);
    // 0x8006EEB8: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8006EEBC: andi        $t2, $t4, 0x1FF
    ctx->r10 = ctx->r12 & 0X1FF;
    // 0x8006EEC0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006EEC4: sll         $t6, $t2, 9
    ctx->r14 = S32(ctx->r10 << 9);
    // 0x8006EEC8: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006EECC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8006EED0: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8006EED4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8006EED8: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8006EEDC: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006EEE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006EEE4: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006EEE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EEEC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006EEF0: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006EEF4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x8006EEF8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8006EEFC: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8006EF00: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006EF04: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8006EF08: nop

    // 0x8006EF0C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006EF10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006EF14: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006EF18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EF1C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006EF20: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006EF24: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8006EF28: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x8006EF2C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006EF30: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8006EF34: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8006EF38: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006EF3C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8006EF40: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006EF44: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8006EF48: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8006EF4C: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8006EF50: addiu       $t5, $t7, 0x4
    ctx->r13 = ADD32(ctx->r15, 0X4);
    // 0x8006EF54: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8006EF58: sll         $t2, $t4, 12
    ctx->r10 = S32(ctx->r12 << 12);
    // 0x8006EF5C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006EF60: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006EF64: or          $t6, $t2, $at
    ctx->r14 = ctx->r10 | ctx->r1;
    // 0x8006EF68: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8006EF6C: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x8006EF70: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006EF74: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006EF78: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006EF7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EF80: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006EF84: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006EF88: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8006EF8C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8006EF90: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x8006EF94: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x8006EF98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8006EF9C: nop

    // 0x8006EFA0: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006EFA4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006EFA8: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006EFAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EFB0: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8006EFB4: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006EFB8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8006EFBC: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8006EFC0: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8006EFC4: andi        $t1, $t0, 0x1FF
    ctx->r9 = ctx->r8 & 0X1FF;
    // 0x8006EFC8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8006EFCC: sll         $t3, $t1, 9
    ctx->r11 = S32(ctx->r9 << 9);
    // 0x8006EFD0: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006EFD4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8006EFD8: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8006EFDC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8006EFE0: nop

    // 0x8006EFE4: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006EFE8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006EFEC: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006EFF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006EFF4: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x8006EFF8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006EFFC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8006F000: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F004: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F008: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006F00C: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006F010: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8006F014: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x8006F018: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8006F01C: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F020: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8006F024: addiu       $t8, $t5, 0x4
    ctx->r24 = ADD32(ctx->r13, 0X4);
    // 0x8006F028: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8006F02C: andi        $t2, $t4, 0xFFF
    ctx->r10 = ctx->r12 & 0XFFF;
    // 0x8006F030: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F034: sll         $t7, $t2, 12
    ctx->r15 = S32(ctx->r10 << 12);
    // 0x8006F038: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8006F03C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x8006F040: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006F044: b           L_8006F23C
    // 0x8006F048: nop

        goto L_8006F23C;
    // 0x8006F048: nop

L_8006F04C:
    // 0x8006F04C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006F050: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006F054: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F058: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006F05C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006F060: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8006F064: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x8006F068: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006F06C: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x8006F070: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x8006F074: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8006F078: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8006F07C: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8006F080: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006F084: nop

    // 0x8006F088: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8006F08C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006F090: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006F094: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F098: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006F09C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006F0A0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8006F0A4: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x8006F0A8: addiu       $t4, $t3, 0x9
    ctx->r12 = ADD32(ctx->r11, 0X9);
    // 0x8006F0AC: sra         $t2, $t4, 3
    ctx->r10 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8006F0B0: andi        $t5, $t2, 0x1FF
    ctx->r13 = ctx->r10 & 0X1FF;
    // 0x8006F0B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006F0B8: sll         $t8, $t5, 9
    ctx->r24 = S32(ctx->r13 << 9);
    // 0x8006F0BC: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8006F0C0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8006F0C4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006F0C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006F0CC: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8006F0D0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006F0D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006F0D8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006F0DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F0E0: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8006F0E4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006F0E8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8006F0EC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006F0F0: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x8006F0F4: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8006F0F8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8006F0FC: nop

    // 0x8006F100: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006F104: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006F108: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006F10C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F110: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8006F114: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006F118: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006F11C: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F120: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F124: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8006F128: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006F12C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006F130: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x8006F134: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8006F138: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F13C: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8006F140: andi        $t2, $t4, 0xFFF
    ctx->r10 = ctx->r12 & 0XFFF;
    // 0x8006F144: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8006F148: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8006F14C: sll         $t5, $t2, 12
    ctx->r13 = S32(ctx->r10 << 12);
    // 0x8006F150: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006F154: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F158: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8006F15C: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006F160: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8006F164: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x8006F168: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006F16C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006F170: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F174: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x8006F178: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006F17C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8006F180: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006F184: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8006F188: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006F18C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006F190: nop

    // 0x8006F194: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006F198: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006F19C: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006F1A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F1A4: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8006F1A8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006F1AC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8006F1B0: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x8006F1B4: addiu       $t1, $t0, 0x9
    ctx->r9 = ADD32(ctx->r8, 0X9);
    // 0x8006F1B8: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8006F1BC: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x8006F1C0: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x8006F1C4: sll         $t2, $t4, 9
    ctx->r10 = S32(ctx->r12 << 9);
    // 0x8006F1C8: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8006F1CC: or          $t5, $t2, $at
    ctx->r13 = ctx->r10 | ctx->r1;
    // 0x8006F1D0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006F1D4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8006F1D8: nop

    // 0x8006F1DC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006F1E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006F1E4: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006F1E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F1EC: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8006F1F0: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006F1F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006F1F8: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F1FC: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8006F200: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006F204: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8006F208: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8006F20C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8006F210: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8006F214: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F218: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8006F21C: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x8006F220: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8006F224: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8006F228: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8006F22C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8006F230: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8006F234: or          $t3, $t7, $t1
    ctx->r11 = ctx->r15 | ctx->r9;
    // 0x8006F238: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_8006F23C:
    // 0x8006F23C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006F240: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006F244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F248: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8006F24C: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006F250: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x8006F254: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8006F258: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8006F25C: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8006F260: addiu       $t8, $a2, -0x1
    ctx->r24 = ADD32(ctx->r6, -0X1);
    // 0x8006F264: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8006F268: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x8006F26C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8006F270: sll         $t1, $t7, 12
    ctx->r9 = S32(ctx->r15 << 12);
    // 0x8006F274: ori         $t3, $t1, 0xC
    ctx->r11 = ctx->r9 | 0XC;
    // 0x8006F278: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006F27C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006F280: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006F284: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F288: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8006F28C: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006F290: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x8006F294: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x8006F298: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8006F29C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006F2A0: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x8006F2A4: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F2A8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006F2AC: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x8006F2B0: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8006F2B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006F2B8: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8006F2BC: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006F2C0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006F2C4: nop

    // 0x8006F2C8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006F2CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006F2D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006F2D4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8006F2D8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006F2DC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8006F2E0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006F2E4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8006F2E8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006F2EC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8006F2F0: andi        $t0, $t8, 0xFFF
    ctx->r8 = ctx->r24 & 0XFFF;
    // 0x8006F2F4: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8006F2F8: sll         $t7, $t0, 12
    ctx->r15 = S32(ctx->r8 << 12);
    // 0x8006F2FC: or          $t1, $t7, $at
    ctx->r9 = ctx->r15 | ctx->r1;
    // 0x8006F300: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8006F304: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006F308: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8006F30C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8006F310: nop

    // 0x8006F314: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8006F318: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006F31C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006F320: nop

    // 0x8006F324: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8006F328: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8006F32C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8006F330: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006F334: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8006F338: or          $t8, $t1, $t9
    ctx->r24 = ctx->r9 | ctx->r25;
    // 0x8006F33C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8006F340: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F344: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006F348: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8006F34C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x8006F350: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8006F354: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8006F358: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x8006F35C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006F360: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8006F364: sll         $t9, $t1, 12
    ctx->r25 = S32(ctx->r9 << 12);
    // 0x8006F368: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006F36C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8006F370: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006F374: nop

    // 0x8006F378: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8006F37C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006F380: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006F384: nop

    // 0x8006F388: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8006F38C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8006F390: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006F394: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8006F398: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x8006F39C: or          $t8, $t9, $t5
    ctx->r24 = ctx->r25 | ctx->r13;
    // 0x8006F3A0: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8006F3A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006F3A8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006F3AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F3B0: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8006F3B4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006F3B8: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8006F3BC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8006F3C0: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x8006F3C4: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8006F3C8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8006F3CC: nop

    // 0x8006F3D0: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8006F3D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006F3D8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006F3DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F3E0: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x8006F3E4: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006F3E8: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x8006F3EC: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8006F3F0: lui         $t5, 0xB300
    ctx->r13 = S32(0XB300 << 16);
    // 0x8006F3F4: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x8006F3F8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8006F3FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006F400: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8006F404: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006F408: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006F40C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8006F410: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006F414: nop

    // 0x8006F418: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006F41C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006F420: nop

    // 0x8006F424: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8006F428: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8006F42C: beq         $t7, $zero, L_8006F480
    if (ctx->r15 == 0) {
        // 0x8006F430: nop
    
            goto L_8006F480;
    }
    // 0x8006F430: nop

    // 0x8006F434: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8006F438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006F43C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006F440: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8006F444: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006F448: nop

    // 0x8006F44C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006F450: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006F454: nop

    // 0x8006F458: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8006F45C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8006F460: bne         $t7, $zero, L_8006F478
    if (ctx->r15 != 0) {
        // 0x8006F464: nop
    
            goto L_8006F478;
    }
    // 0x8006F464: nop

    // 0x8006F468: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8006F46C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006F470: b           L_8006F490
    // 0x8006F474: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8006F490;
    // 0x8006F474: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8006F478:
    // 0x8006F478: b           L_8006F490
    // 0x8006F47C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8006F490;
    // 0x8006F47C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8006F480:
    // 0x8006F480: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8006F484: nop

    // 0x8006F488: bltz        $t7, L_8006F478
    if (SIGNED(ctx->r15) < 0) {
        // 0x8006F48C: nop
    
            goto L_8006F478;
    }
    // 0x8006F48C: nop

L_8006F490:
    // 0x8006F490: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8006F494: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8006F498: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006F49C: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006F4A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006F4A4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8006F4A8: andi        $t3, $t7, 0xFFFF
    ctx->r11 = ctx->r15 & 0XFFFF;
    // 0x8006F4AC: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8006F4B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8006F4B4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006F4B8: nop

    // 0x8006F4BC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8006F4C0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006F4C4: nop

    // 0x8006F4C8: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x8006F4CC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8006F4D0: beq         $t6, $zero, L_8006F524
    if (ctx->r14 == 0) {
        // 0x8006F4D4: nop
    
            goto L_8006F524;
    }
    // 0x8006F4D4: nop

    // 0x8006F4D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8006F4DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006F4E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006F4E4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8006F4E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006F4EC: nop

    // 0x8006F4F0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8006F4F4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006F4F8: nop

    // 0x8006F4FC: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x8006F500: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8006F504: bne         $t6, $zero, L_8006F51C
    if (ctx->r14 != 0) {
        // 0x8006F508: nop
    
            goto L_8006F51C;
    }
    // 0x8006F508: nop

    // 0x8006F50C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8006F510: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006F514: b           L_8006F534
    // 0x8006F518: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8006F534;
    // 0x8006F518: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8006F51C:
    // 0x8006F51C: b           L_8006F534
    // 0x8006F520: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8006F534;
    // 0x8006F520: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_8006F524:
    // 0x8006F524: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8006F528: nop

    // 0x8006F52C: bltz        $t6, L_8006F51C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006F530: nop
    
            goto L_8006F51C;
    }
    // 0x8006F530: nop

L_8006F534:
    // 0x8006F534: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8006F538: andi        $t1, $t6, 0xFFFF
    ctx->r9 = ctx->r14 & 0XFFFF;
    // 0x8006F53C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8006F540: or          $t9, $t4, $t1
    ctx->r25 = ctx->r12 | ctx->r9;
    // 0x8006F544: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8006F548: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8006F54C: nop

    // 0x8006F550: addiu       $t0, $t8, 0x4
    ctx->r8 = ADD32(ctx->r24, 0X4);
    // 0x8006F554: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8006F558: bne         $at, $zero, L_8006EC38
    if (ctx->r1 != 0) {
        // 0x8006F55C: sw          $t0, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r8;
            goto L_8006EC38;
    }
    // 0x8006F55C: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_8006F560:
    // 0x8006F560: b           L_8006F568
    // 0x8006F564: nop

        goto L_8006F568;
    // 0x8006F564: nop

L_8006F568:
    // 0x8006F568: jr          $ra
    // 0x8006F56C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006F56C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8009E4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E4F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E4FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E500: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E504: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E508: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E50C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E510: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E514: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E518: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009E51C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8009E520: nop

    // 0x8009E524: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8009E528: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x8009E52C: beq         $at, $zero, L_8009E5A0
    if (ctx->r1 == 0) {
        // 0x8009E530: nop
    
            goto L_8009E5A0;
    }
    // 0x8009E530: nop

    // 0x8009E534: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009E538: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8009E53C: addu        $at, $at, $t9
    gpr jr_addend_8009E548 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009E540: lw          $t9, 0x48FC($at)
    ctx->r25 = ADD32(ctx->r1, 0X48FC);
    // 0x8009E544: nop

    // 0x8009E548: jr          $t9
    // 0x8009E54C: nop

    switch (jr_addend_8009E548 >> 2) {
        case 0: goto L_8009E550; break;
        case 1: goto L_8009E560; break;
        case 2: goto L_8009E570; break;
        case 3: goto L_8009E580; break;
        case 4: goto L_8009E590; break;
        default: switch_error(__func__, 0x8009E548, 0x801148FC);
    }
    // 0x8009E54C: nop

L_8009E550:
    // 0x8009E550: jal         0x8009E068
    // 0x8009E554: nop

    func_8009E068(rdram, ctx);
        goto after_0;
    // 0x8009E554: nop

    after_0:
    // 0x8009E558: b           L_8009E5A0
    // 0x8009E55C: nop

        goto L_8009E5A0;
    // 0x8009E55C: nop

L_8009E560:
    // 0x8009E560: jal         0x8009E10C
    // 0x8009E564: nop

    func_8009E10C(rdram, ctx);
        goto after_1;
    // 0x8009E564: nop

    after_1:
    // 0x8009E568: b           L_8009E5A0
    // 0x8009E56C: nop

        goto L_8009E5A0;
    // 0x8009E56C: nop

L_8009E570:
    // 0x8009E570: jal         0x8009E20C
    // 0x8009E574: nop

    func_8009E20C(rdram, ctx);
        goto after_2;
    // 0x8009E574: nop

    after_2:
    // 0x8009E578: b           L_8009E5A0
    // 0x8009E57C: nop

        goto L_8009E5A0;
    // 0x8009E57C: nop

L_8009E580:
    // 0x8009E580: jal         0x8009E2FC
    // 0x8009E584: nop

    func_8009E2FC(rdram, ctx);
        goto after_3;
    // 0x8009E584: nop

    after_3:
    // 0x8009E588: b           L_8009E5A0
    // 0x8009E58C: nop

        goto L_8009E5A0;
    // 0x8009E58C: nop

L_8009E590:
    // 0x8009E590: jal         0x8009E40C
    // 0x8009E594: nop

    func_8009E40C(rdram, ctx);
        goto after_4;
    // 0x8009E594: nop

    after_4:
    // 0x8009E598: b           L_8009E5A0
    // 0x8009E59C: nop

        goto L_8009E5A0;
    // 0x8009E59C: nop

L_8009E5A0:
    // 0x8009E5A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009E5A4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8009E5A8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8009E5AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009E5B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009E5B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009E5B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009E5BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009E5C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009E5C4: lh          $t2, 0x41F8($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X41F8);
    // 0x8009E5C8: nop

    // 0x8009E5CC: beq         $t2, $zero, L_8009E5DC
    if (ctx->r10 == 0) {
        // 0x8009E5D0: nop
    
            goto L_8009E5DC;
    }
    // 0x8009E5D0: nop

    // 0x8009E5D4: jal         0x8001E1C0
    // 0x8009E5D8: nop

    ResetActiveController(rdram, ctx);
        goto after_5;
    // 0x8009E5D8: nop

    after_5:
L_8009E5DC:
    // 0x8009E5DC: b           L_8009E5E4
    // 0x8009E5E0: nop

        goto L_8009E5E4;
    // 0x8009E5E0: nop

L_8009E5E4:
    // 0x8009E5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E5E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E5EC: jr          $ra
    // 0x8009E5F0: nop

    return;
    // 0x8009E5F0: nop

;}
RECOMP_FUNC void func_800F8898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8898: jr          $ra
    // 0x800F889C: nop

    return;
    // 0x800F889C: nop

    // 0x800F88A0: jr          $ra
    // 0x800F88A4: nop

    return;
    // 0x800F88A4: nop

;}
RECOMP_FUNC void func_800EB01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB01C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EB020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB024: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EB028: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EB02C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EB030: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EB034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB038: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EB03C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB040: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EB044: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EB048: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EB04C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EB050: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB054: nop

    // 0x800EB058: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EB05C: nop

    // 0x800EB060: bne         $t1, $zero, L_800EB1B8
    if (ctx->r9 != 0) {
        // 0x800EB064: nop
    
            goto L_800EB1B8;
    }
    // 0x800EB064: nop

    // 0x800EB068: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB06C: nop

    // 0x800EB070: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EB074: nop

    // 0x800EB078: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EB07C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EB080: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EB084: nop

    // 0x800EB088: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EB08C: nop

    // 0x800EB090: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EB094: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800EB098: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EB09C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EB0A0: nop

    // 0x800EB0A4: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800EB0A8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800EB0AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EB0B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB0B4: nop

    // 0x800EB0B8: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800EB0BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB0C0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800EB0C4: sh          $t9, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r25;
    // 0x800EB0C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB0CC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800EB0D0: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
    // 0x800EB0D4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800EB0D8:
    // 0x800EB0D8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800EB0DC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB0E0: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x800EB0E4: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x800EB0E8: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x800EB0EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB0F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800EB0F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800EB0F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EB0FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800EB100: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EB104: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EB108: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800EB10C: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x800EB110: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800EB114: nop

    // 0x800EB118: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800EB11C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800EB120: bne         $at, $zero, L_800EB0D8
    if (ctx->r1 != 0) {
        // 0x800EB124: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_800EB0D8;
    }
    // 0x800EB124: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800EB128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB12C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800EB130: addiu       $t3, $t3, -0x6714
    ctx->r11 = ADD32(ctx->r11, -0X6714);
    // 0x800EB134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB138: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800EB13C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB140: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800EB144: jal         0x8001C0EC
    // 0x800EB148: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EB148: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800EB14C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB150: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800EB154: addiu       $t2, $t2, -0x66F4
    ctx->r10 = ADD32(ctx->r10, -0X66F4);
    // 0x800EB158: lh          $a0, 0xEC($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEC);
    // 0x800EB15C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800EB160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EB168: jal         0x8001C0EC
    // 0x800EB16C: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EB16C: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
    // 0x800EB170: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EB174: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EB178: addiu       $a3, $a3, -0x66C4
    ctx->r7 = ADD32(ctx->r7, -0X66C4);
    // 0x800EB17C: lh          $a0, 0xEC($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XEC);
    // 0x800EB180: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EB184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EB188: jal         0x8001ABF4
    // 0x800EB18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EB18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800EB190: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB194: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB19C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x800EB1A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EB1A4: jal         0x800175F0
    // 0x800EB1A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800EB1A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800EB1AC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB1B0: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x800EB1B4: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
L_800EB1B8:
    // 0x800EB1B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB1BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB1C0: jal         0x80029C40
    // 0x800EB1C4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800EB1C4: nop

    after_4:
    // 0x800EB1C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EB1CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EB1D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB1D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB1D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EB1DC: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800EB1E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EB1E4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800EB1E8: jal         0x80029018
    // 0x800EB1EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800EB1EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800EB1F0: beq         $v0, $zero, L_800EB21C
    if (ctx->r2 == 0) {
        // 0x800EB1F4: nop
    
            goto L_800EB21C;
    }
    // 0x800EB1F4: nop

    // 0x800EB1F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EB1FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EB200: nop

    // 0x800EB204: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x800EB208: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EB20C: nop

    // 0x800EB210: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800EB214: nop

    // 0x800EB218: swc1        $f18, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f18.u32l;
L_800EB21C:
    // 0x800EB21C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EB220: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EB224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB228: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB22C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800EB230: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800EB234: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EB238: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EB23C: jal         0x800295C0
    // 0x800EB240: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x800EB240: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800EB244: beq         $v0, $zero, L_800EB25C
    if (ctx->r2 == 0) {
        // 0x800EB248: nop
    
            goto L_800EB25C;
    }
    // 0x800EB248: nop

    // 0x800EB24C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EB250: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB254: b           L_800EB26C
    // 0x800EB258: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800EB26C;
    // 0x800EB258: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800EB25C:
    // 0x800EB25C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EB260: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EB264: nop

    // 0x800EB268: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800EB26C:
    // 0x800EB26C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800EB270:
    // 0x800EB270: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800EB274: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB278: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x800EB27C: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x800EB280: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x800EB284: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800EB288: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EB28C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EB290: lwc1        $f18, 0x24($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800EB294: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EB298: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EB29C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB2A0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EB2A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB2A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EB2AC: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800EB2B0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800EB2B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EB2B8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800EB2BC: addu        $t1, $t4, $t0
    ctx->r9 = ADD32(ctx->r12, ctx->r8);
    // 0x800EB2C0: lh          $t6, 0xE8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XE8);
    // 0x800EB2C4: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800EB2C8: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800EB2CC: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x800EB2D0: lwc1        $f8, 0x28($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800EB2D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EB2D8: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x800EB2DC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB2E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EB2E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB2E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800EB2EC: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x800EB2F0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800EB2F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB2F8: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x800EB2FC: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x800EB300: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x800EB304: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800EB308: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800EB30C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EB310: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800EB314: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EB318: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EB31C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB320: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EB324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB328: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800EB32C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x800EB330: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800EB334: nop

    // 0x800EB338: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800EB33C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800EB340: bne         $at, $zero, L_800EB270
    if (ctx->r1 != 0) {
        // 0x800EB344: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_800EB270;
    }
    // 0x800EB344: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800EB348: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB34C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EB350: lh          $t3, 0xE8($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XE8);
    // 0x800EB354: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EB358: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800EB35C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EB360: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EB364: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EB368: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EB36C: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x800EB370: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EB374: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EB378: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EB37C: nop

    // 0x800EB380: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB384: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800EB388: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB38C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EB390: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x800EB394: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EB398: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800EB39C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EB3A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EB3A4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800EB3A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EB3AC: addu        $t1, $t4, $t0
    ctx->r9 = ADD32(ctx->r12, ctx->r8);
    // 0x800EB3B0: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EB3B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EB3B8: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800EB3BC: nop

    // 0x800EB3C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB3C4: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x800EB3C8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB3CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800EB3D0: lh          $t3, 0xEC($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XEC);
    // 0x800EB3D4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800EB3D8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800EB3DC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EB3E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EB3E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800EB3E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EB3EC: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x800EB3F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EB3F4: lwc1        $f8, 0x555C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X555C);
    // 0x800EB3F8: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EB3FC: nop

    // 0x800EB400: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB404: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800EB408: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB40C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EB410: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x800EB414: lh          $t0, 0xEC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XEC);
    // 0x800EB418: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800EB41C: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x800EB420: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EB424: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EB428: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB42C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EB430: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800EB434: lwc1        $f16, 0x5180($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5180);
    // 0x800EB438: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB43C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EB440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB444: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EB448: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x800EB44C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB450: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EB454: lh          $t3, 0xAE($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XAE);
    // 0x800EB458: lh          $t2, 0xEC($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XEC);
    // 0x800EB45C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800EB460: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x800EB464: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800EB468: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EB46C: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x800EB470: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EB474: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EB478: lwc1        $f18, 0x5184($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5184);
    // 0x800EB47C: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x800EB480: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EB484: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB488: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800EB48C: swc1        $f18, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f18.u32l;
    // 0x800EB490: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EB494: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EB498: lh          $t4, 0xAE($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XAE);
    // 0x800EB49C: lh          $t0, 0xEC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEC);
    // 0x800EB4A0: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800EB4A4: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x800EB4A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EB4AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EB4B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB4B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EB4B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EB4BC: lwc1        $f4, 0x5188($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5188);
    // 0x800EB4C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB4C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EB4C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB4CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EB4D0: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x800EB4D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB4D8: nop

    // 0x800EB4DC: lh          $t5, 0xAE($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAE);
    // 0x800EB4E0: nop

    // 0x800EB4E4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EB4E8: sh          $t6, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r14;
    // 0x800EB4EC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB4F0: nop

    // 0x800EB4F4: lh          $t7, 0xC2($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XC2);
    // 0x800EB4F8: nop

    // 0x800EB4FC: bne         $t7, $zero, L_800EB528
    if (ctx->r15 != 0) {
        // 0x800EB500: nop
    
            goto L_800EB528;
    }
    // 0x800EB500: nop

    // 0x800EB504: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB508: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB50C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB510: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x800EB514: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EB518: jal         0x800175F0
    // 0x800EB51C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x800EB51C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x800EB520: b           L_800EB540
    // 0x800EB524: nop

        goto L_800EB540;
    // 0x800EB524: nop

L_800EB528:
    // 0x800EB528: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EB52C: nop

    // 0x800EB530: lh          $t8, 0xC2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XC2);
    // 0x800EB534: nop

    // 0x800EB538: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800EB53C: sh          $t9, 0xC2($t4)
    MEM_H(0XC2, ctx->r12) = ctx->r25;
L_800EB540:
    // 0x800EB540: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB544: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB548: jal         0x8001B4AC
    // 0x800EB54C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x800EB54C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800EB550: beq         $v0, $zero, L_800EB604
    if (ctx->r2 == 0) {
        // 0x800EB554: nop
    
            goto L_800EB604;
    }
    // 0x800EB554: nop

    // 0x800EB558: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB55C: nop

    // 0x800EB560: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800EB564: nop

    // 0x800EB568: bne         $t1, $zero, L_800EB5EC
    if (ctx->r9 != 0) {
        // 0x800EB56C: nop
    
            goto L_800EB5EC;
    }
    // 0x800EB56C: nop

    // 0x800EB570: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800EB574:
    // 0x800EB574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB57C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800EB580: jal         0x800281A4
    // 0x800EB584: nop

    func_800281A4(rdram, ctx);
        goto after_9;
    // 0x800EB584: nop

    after_9:
    // 0x800EB588: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800EB58C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800EB590: jal         0x8002B114
    // 0x800EB594: nop

    func_8002B114(rdram, ctx);
        goto after_10;
    // 0x800EB594: nop

    after_10:
    // 0x800EB598: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800EB59C: nop

    // 0x800EB5A0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EB5A4: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x800EB5A8: bne         $at, $zero, L_800EB574
    if (ctx->r1 != 0) {
        // 0x800EB5AC: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_800EB574;
    }
    // 0x800EB5AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800EB5B0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB5B4: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EB5B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EB5BC: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EB5C0: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800EB5C4: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x800EB5C8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x800EB5CC: jal         0x8007EDF4
    // 0x800EB5D0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007EDF4(rdram, ctx);
        goto after_11;
    // 0x800EB5D0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_11:
    // 0x800EB5D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB5D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB5DC: jal         0x8002B114
    // 0x800EB5E0: nop

    func_8002B114(rdram, ctx);
        goto after_12;
    // 0x800EB5E0: nop

    after_12:
    // 0x800EB5E4: b           L_800EB604
    // 0x800EB5E8: nop

        goto L_800EB604;
    // 0x800EB5E8: nop

L_800EB5EC:
    // 0x800EB5EC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB5F0: nop

    // 0x800EB5F4: lh          $t7, 0xAC($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XAC);
    // 0x800EB5F8: nop

    // 0x800EB5FC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800EB600: sh          $t8, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r24;
L_800EB604:
    // 0x800EB604: b           L_800EB60C
    // 0x800EB608: nop

        goto L_800EB60C;
    // 0x800EB608: nop

L_800EB60C:
    // 0x800EB60C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB610: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EB614: jr          $ra
    // 0x800EB618: nop

    return;
    // 0x800EB618: nop

;}
RECOMP_FUNC void func_800E6AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6AA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800E6AA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E6AA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E6AAC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E6AB0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E6AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6ADC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800E6AE0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6AE4: nop

    // 0x800E6AE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6AEC: nop

    // 0x800E6AF0: bne         $t1, $zero, L_800E6B48
    if (ctx->r9 != 0) {
        // 0x800E6AF4: nop
    
            goto L_800E6B48;
    }
    // 0x800E6AF4: nop

    // 0x800E6AF8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6AFC: nop

    // 0x800E6B00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6B04: nop

    // 0x800E6B08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6B0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6B10: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6B14: nop

    // 0x800E6B18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E6B1C: nop

    // 0x800E6B20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6B28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E6B2C: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E6B30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6B34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E6B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6B3C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E6B40: jal         0x8001C0EC
    // 0x800E6B44: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6B44: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E6B48:
    // 0x800E6B48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6B50: jal         0x80029C40
    // 0x800E6B54: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800E6B54: nop

    after_1:
    // 0x800E6B58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E6B5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E6B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6B6C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E6B70: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E6B74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E6B78: jal         0x80029018
    // 0x800E6B7C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800E6B7C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800E6B80: beq         $v0, $zero, L_800E6BA4
    if (ctx->r2 == 0) {
        // 0x800E6B84: nop
    
            goto L_800E6BA4;
    }
    // 0x800E6B84: nop

    // 0x800E6B88: jal         0x800297DC
    // 0x800E6B8C: nop

    func_800297DC(rdram, ctx);
        goto after_3;
    // 0x800E6B8C: nop

    after_3:
    // 0x800E6B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6B98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E6B9C: jal         0x80029824
    // 0x800E6BA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_4;
    // 0x800E6BA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_800E6BA4:
    // 0x800E6BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6BAC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E6BB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E6BB4: jal         0x8002A0D0
    // 0x800E6BB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x800E6BB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x800E6BBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E6BC0: bne         $v0, $at, L_800E6BF8
    if (ctx->r2 != ctx->r1) {
        // 0x800E6BC4: nop
    
            goto L_800E6BF8;
    }
    // 0x800E6BC4: nop

    // 0x800E6BC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E6BCC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6BD0: nop

    // 0x800E6BD4: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x800E6BD8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6BDC: nop

    // 0x800E6BE0: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E6BE4: nop

    // 0x800E6BE8: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800E6BEC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6BF0: nop

    // 0x800E6BF4: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
L_800E6BF8:
    // 0x800E6BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6C00: jal         0x8001B4AC
    // 0x800E6C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800E6C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800E6C08: beq         $v0, $zero, L_800E6C28
    if (ctx->r2 == 0) {
        // 0x800E6C0C: nop
    
            goto L_800E6C28;
    }
    // 0x800E6C0C: nop

    // 0x800E6C10: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6C14: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800E6C18: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E6C1C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800E6C20: nop

    // 0x800E6C24: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E6C28:
    // 0x800E6C28: b           L_800E6C30
    // 0x800E6C2C: nop

        goto L_800E6C30;
    // 0x800E6C2C: nop

L_800E6C30:
    // 0x800E6C30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6C34: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E6C38: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E6C3C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E6C40: jr          $ra
    // 0x800E6C44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800E6C44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800AD21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD21C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AD220: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AD224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AD228: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD22C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AD230: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AD234: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AD238: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD23C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AD240: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD244: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AD248: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AD24C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AD250: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AD254: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD258: nop

    // 0x800AD25C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800AD260: nop

    // 0x800AD264: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x800AD268: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD26C: nop

    // 0x800AD270: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800AD274: nop

    // 0x800AD278: bne         $t3, $zero, L_800AD2B8
    if (ctx->r11 != 0) {
        // 0x800AD27C: nop
    
            goto L_800AD2B8;
    }
    // 0x800AD27C: nop

    // 0x800AD280: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD284: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800AD288: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800AD28C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AD290: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD294: nop

    // 0x800AD298: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800AD29C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AD2A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD2A4: nop

    // 0x800AD2A8: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800AD2AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD2B0: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x800AD2B4: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800AD2B8:
    // 0x800AD2B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD2BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD2C0: jal         0x80029C40
    // 0x800AD2C4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AD2C4: nop

    after_0:
    // 0x800AD2C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD2CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD2D0: jal         0x80029D04
    // 0x800AD2D4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AD2D4: nop

    after_1:
    // 0x800AD2D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD2DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD2E0: lh          $s0, 0x108($t0)
    ctx->r16 = MEM_H(ctx->r8, 0X108);
    // 0x800AD2E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD2E8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x800AD2EC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800AD2F0: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800AD2F4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800AD2F8: jal         0x8001BB34
    // 0x800AD2FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800AD2FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800AD300: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD304: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AD308: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x800AD30C: nop

    // 0x800AD310: bne         $t4, $at, L_800AD34C
    if (ctx->r12 != ctx->r1) {
        // 0x800AD314: nop
    
            goto L_800AD34C;
    }
    // 0x800AD314: nop

    // 0x800AD318: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD31C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800AD320: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x800AD324: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD328: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800AD32C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800AD330: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AD334: nop

    // 0x800AD338: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800AD33C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD344: jal         0x8001BB34
    // 0x800AD348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800AD348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_800AD34C:
    // 0x800AD34C: b           L_800AD354
    // 0x800AD350: nop

        goto L_800AD354;
    // 0x800AD350: nop

L_800AD354:
    // 0x800AD354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AD35C: jr          $ra
    // 0x800AD360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AD360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D3974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3974: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D3978: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D397C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D3980: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3984: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3988: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D398C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3994: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3998: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D399C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D39A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D39A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D39A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D39AC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D39B0: nop

    // 0x800D39B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D39B8: nop

    // 0x800D39BC: bne         $t1, $zero, L_800D3B0C
    if (ctx->r9 != 0) {
        // 0x800D39C0: nop
    
            goto L_800D3B0C;
    }
    // 0x800D39C0: nop

    // 0x800D39C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D39C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D39CC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D39D0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D39D4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800D39D8: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x800D39DC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800D39E0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D39E4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800D39E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D39EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D39F0: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800D39F4: nop

    // 0x800D39F8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800D39FC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800D3A00: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800D3A04: sh          $t8, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r24;
    // 0x800D3A08: nop

    // 0x800D3A0C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800D3A10: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D3A14: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800D3A18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D3A1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D3A20: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800D3A24: nop

    // 0x800D3A28: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800D3A2C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800D3A30: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800D3A34: sh          $t1, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r9;
    // 0x800D3A38: nop

    // 0x800D3A3C: jal         0x80014E80
    // 0x800D3A40: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800D3A40: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800D3A44: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x800D3A48: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D3A4C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D3A50: swc1        $f18, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f18.u32l;
    // 0x800D3A54: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800D3A58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D3A5C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D3A60: nop

    // 0x800D3A64: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800D3A68: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D3A6C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D3A70: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D3A74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D3A78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D3A7C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800D3A80: nop

    // 0x800D3A84: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800D3A88: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800D3A8C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D3A90: sh          $t7, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r15;
    // 0x800D3A94: nop

    // 0x800D3A98: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D3A9C: nop

    // 0x800D3AA0: sh          $zero, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = 0;
    // 0x800D3AA4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D3AA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D3AAC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D3AB0: nop

    // 0x800D3AB4: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
    // 0x800D3AB8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D3ABC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D3AC0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3AC4: nop

    // 0x800D3AC8: swc1        $f16, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f16.u32l;
    // 0x800D3ACC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D3AD0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800D3AD4: sh          $t1, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r9;
    // 0x800D3AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3ADC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800D3AE0: addiu       $t2, $t2, -0x7844
    ctx->r10 = ADD32(ctx->r10, -0X7844);
    // 0x800D3AE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3AE8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800D3AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D3AF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D3AF4: jal         0x8001C0EC
    // 0x800D3AF8: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D3AF8: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    after_1:
    // 0x800D3AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3B04: jal         0x8001BBDC
    // 0x800D3B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D3B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800D3B0C:
    // 0x800D3B0C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D3B10: nop

    // 0x800D3B14: lh          $t5, 0xA8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA8);
    // 0x800D3B18: nop

    // 0x800D3B1C: bne         $t5, $zero, L_800D3B58
    if (ctx->r13 != 0) {
        // 0x800D3B20: nop
    
            goto L_800D3B58;
    }
    // 0x800D3B20: nop

    // 0x800D3B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3B2C: jal         0x80028FA0
    // 0x800D3B30: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800D3B30: nop

    after_3:
    // 0x800D3B34: beq         $v0, $zero, L_800D3B58
    if (ctx->r2 == 0) {
        // 0x800D3B38: nop
    
            goto L_800D3B58;
    }
    // 0x800D3B38: nop

    // 0x800D3B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3B44: jal         0x80029B60
    // 0x800D3B48: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800D3B48: nop

    after_4:
    // 0x800D3B4C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D3B50: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800D3B54: sh          $t7, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r15;
L_800D3B58:
    // 0x800D3B58: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D3B5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800D3B60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D3B64: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D3B68: jal         0x80015538
    // 0x800D3B6C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800D3B6C: nop

    after_5:
    // 0x800D3B70: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D3B74: nop

    // 0x800D3B78: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800D3B7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3B80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3B84: jal         0x80029C40
    // 0x800D3B88: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800D3B88: nop

    after_6:
    // 0x800D3B8C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3B90: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800D3B94: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x800D3B98: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800D3B9C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800D3BA0: jal         0x80015538
    // 0x800D3BA4: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800D3BA4: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_7:
    // 0x800D3BA8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800D3BAC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D3BB0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800D3BB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D3BB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D3BBC: nop

    // 0x800D3BC0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D3BC4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800D3BC8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800D3BCC: sh          $t2, 0xB8($t3)
    MEM_H(0XB8, ctx->r11) = ctx->r10;
    // 0x800D3BD0: nop

    // 0x800D3BD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D3BD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D3BDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3BE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3BE4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800D3BE8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800D3BEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D3BF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800D3BF4: jal         0x800294F0
    // 0x800D3BF8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800294F0(rdram, ctx);
        goto after_8;
    // 0x800D3BF8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x800D3BFC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D3C00: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D3C04: lh          $t7, 0xB8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB8);
    // 0x800D3C08: lwc1        $f19, 0x50A8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X50A8);
    // 0x800D3C0C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800D3C10: lwc1        $f18, 0x50AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X50AC);
    // 0x800D3C14: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800D3C18: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800D3C1C: jal         0x80034970
    // 0x800D3C20: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_9;
    // 0x800D3C20: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_9:
    // 0x800D3C24: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800D3C28: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D3C2C: lh          $t8, 0xB6($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XB6);
    // 0x800D3C30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D3C34: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800D3C38: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800D3C3C: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800D3C40: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D3C44: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800D3C48: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800D3C4C: swc1        $f6, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f6.u32l;
    // 0x800D3C50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3C54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3C58: jal         0x80029D04
    // 0x800D3C5C: nop

    func_80029D04(rdram, ctx);
        goto after_10;
    // 0x800D3C5C: nop

    after_10:
    // 0x800D3C60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D3C64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D3C68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3C6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3C70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D3C74: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D3C78: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D3C7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D3C80: jal         0x80029018
    // 0x800D3C84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x800D3C84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x800D3C88: beq         $v0, $zero, L_800D3CB8
    if (ctx->r2 == 0) {
        // 0x800D3C8C: nop
    
            goto L_800D3CB8;
    }
    // 0x800D3C8C: nop

    // 0x800D3C90: jal         0x800297DC
    // 0x800D3C94: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800D3C94: nop

    after_12:
    // 0x800D3C98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3C9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3CA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D3CA4: jal         0x80029824
    // 0x800D3CA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800D3CA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800D3CAC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3CB0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x800D3CB4: sh          $t6, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r14;
L_800D3CB8:
    // 0x800D3CB8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D3CBC: nop

    // 0x800D3CC0: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D3CC4: nop

    // 0x800D3CC8: bne         $t9, $zero, L_800D3E0C
    if (ctx->r25 != 0) {
        // 0x800D3CCC: nop
    
            goto L_800D3E0C;
    }
    // 0x800D3CCC: nop

    // 0x800D3CD0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D3CD4: nop

    // 0x800D3CD8: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x800D3CDC: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800D3CE0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800D3CE4: nop

    // 0x800D3CE8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D3CEC: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800D3CF0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D3CF4: nop

    // 0x800D3CF8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D3CFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D3D00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D3D04: nop

    // 0x800D3D08: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800D3D0C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800D3D10: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D3D14: sh          $t7, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r15;
    // 0x800D3D18: nop

    // 0x800D3D1C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800D3D20: nop

    // 0x800D3D24: lh          $t4, 0xAE($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XAE);
    // 0x800D3D28: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800D3D2C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800D3D30: nop

    // 0x800D3D34: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D3D38: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800D3D3C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800D3D40: nop

    // 0x800D3D44: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800D3D48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D3D4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D3D50: nop

    // 0x800D3D54: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800D3D58: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800D3D5C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800D3D60: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x800D3D64: nop

    // 0x800D3D68: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D3D6C: nop

    // 0x800D3D70: lh          $t9, 0xB0($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XB0);
    // 0x800D3D74: nop

    // 0x800D3D78: slti        $at, $t9, 0x190
    ctx->r1 = SIGNED(ctx->r25) < 0X190 ? 1 : 0;
    // 0x800D3D7C: beq         $at, $zero, L_800D3D90
    if (ctx->r1 == 0) {
        // 0x800D3D80: nop
    
            goto L_800D3D90;
    }
    // 0x800D3D80: nop

    // 0x800D3D84: slti        $at, $t9, -0x18F
    ctx->r1 = SIGNED(ctx->r25) < -0X18F ? 1 : 0;
    // 0x800D3D88: beq         $at, $zero, L_800D3DBC
    if (ctx->r1 == 0) {
        // 0x800D3D8C: nop
    
            goto L_800D3DBC;
    }
    // 0x800D3D8C: nop

L_800D3D90:
    // 0x800D3D90: jal         0x800297DC
    // 0x800D3D94: nop

    func_800297DC(rdram, ctx);
        goto after_14;
    // 0x800D3D94: nop

    after_14:
    // 0x800D3D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3DA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D3DA4: jal         0x80029824
    // 0x800D3DA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_15;
    // 0x800D3DA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x800D3DAC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D3DB0: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x800D3DB4: b           L_800D3E0C
    // 0x800D3DB8: sh          $t3, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r11;
        goto L_800D3E0C;
    // 0x800D3DB8: sh          $t3, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r11;
L_800D3DBC:
    // 0x800D3DBC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D3DC0: nop

    // 0x800D3DC4: lh          $t2, 0xB2($t7)
    ctx->r10 = MEM_H(ctx->r15, 0XB2);
    // 0x800D3DC8: nop

    // 0x800D3DCC: slti        $at, $t2, 0x190
    ctx->r1 = SIGNED(ctx->r10) < 0X190 ? 1 : 0;
    // 0x800D3DD0: beq         $at, $zero, L_800D3DE4
    if (ctx->r1 == 0) {
        // 0x800D3DD4: nop
    
            goto L_800D3DE4;
    }
    // 0x800D3DD4: nop

    // 0x800D3DD8: slti        $at, $t2, -0x18F
    ctx->r1 = SIGNED(ctx->r10) < -0X18F ? 1 : 0;
    // 0x800D3DDC: beq         $at, $zero, L_800D3E0C
    if (ctx->r1 == 0) {
        // 0x800D3DE0: nop
    
            goto L_800D3E0C;
    }
    // 0x800D3DE0: nop

L_800D3DE4:
    // 0x800D3DE4: jal         0x800297DC
    // 0x800D3DE8: nop

    func_800297DC(rdram, ctx);
        goto after_16;
    // 0x800D3DE8: nop

    after_16:
    // 0x800D3DEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3DF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3DF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D3DF8: jal         0x80029824
    // 0x800D3DFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_17;
    // 0x800D3DFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
    // 0x800D3E00: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D3E04: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800D3E08: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
L_800D3E0C:
    // 0x800D3E0C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D3E10: nop

    // 0x800D3E14: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x800D3E18: nop

    // 0x800D3E1C: beq         $t8, $zero, L_800D3E3C
    if (ctx->r24 == 0) {
        // 0x800D3E20: nop
    
            goto L_800D3E3C;
    }
    // 0x800D3E20: nop

    // 0x800D3E24: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800D3E28: nop

    // 0x800D3E2C: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D3E30: nop

    // 0x800D3E34: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x800D3E38: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_800D3E3C:
    // 0x800D3E3C: b           L_800D3E44
    // 0x800D3E40: nop

        goto L_800D3E44;
    // 0x800D3E40: nop

L_800D3E44:
    // 0x800D3E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D3E48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D3E4C: jr          $ra
    // 0x800D3E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D3E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CA890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CA894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA89C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA8A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA8A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA8A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA8AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA8B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA8B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA8B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CA8BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CA8C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CA8C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA8C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA8CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CA8D0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800CA8D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CA8D8: jal         0x800175F0
    // 0x800CA8DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800CA8DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800CA8E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CA8E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800CA8E8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800CA8EC: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800CA8F0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800CA8F4: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800CA8F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CA8FC: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800CA900: jal         0x8007EDF4
    // 0x800CA904: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x800CA904: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    after_1:
    // 0x800CA908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA90C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA910: jal         0x8002B114
    // 0x800CA914: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800CA914: nop

    after_2:
    // 0x800CA918: b           L_800CA920
    // 0x800CA91C: nop

        goto L_800CA920;
    // 0x800CA91C: nop

L_800CA920:
    // 0x800CA920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CA928: jr          $ra
    // 0x800CA92C: nop

    return;
    // 0x800CA92C: nop

;}
RECOMP_FUNC void func_800BD7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD7CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BD7D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BD7D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BD7D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD7DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD7E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD7E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD7E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD7EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD7F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD7F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD7F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BD7FC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800BD800: nop

    // 0x800BD804: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800BD808: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800BD80C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BD810: beq         $s0, $at, L_800BD82C
    if (ctx->r16 == ctx->r1) {
        // 0x800BD814: nop
    
            goto L_800BD82C;
    }
    // 0x800BD814: nop

    // 0x800BD818: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800BD81C: beq         $s0, $at, L_800BD83C
    if (ctx->r16 == ctx->r1) {
        // 0x800BD820: nop
    
            goto L_800BD83C;
    }
    // 0x800BD820: nop

    // 0x800BD824: b           L_800BD84C
    // 0x800BD828: nop

        goto L_800BD84C;
    // 0x800BD828: nop

L_800BD82C:
    // 0x800BD82C: jal         0x800BD188
    // 0x800BD830: nop

    func_800BD188(rdram, ctx);
        goto after_0;
    // 0x800BD830: nop

    after_0:
    // 0x800BD834: b           L_800BD854
    // 0x800BD838: nop

        goto L_800BD854;
    // 0x800BD838: nop

L_800BD83C:
    // 0x800BD83C: jal         0x800BD2C8
    // 0x800BD840: nop

    func_800BD2C8(rdram, ctx);
        goto after_1;
    // 0x800BD840: nop

    after_1:
    // 0x800BD844: b           L_800BD854
    // 0x800BD848: nop

        goto L_800BD854;
    // 0x800BD848: nop

L_800BD84C:
    // 0x800BD84C: b           L_800BD854
    // 0x800BD850: nop

        goto L_800BD854;
    // 0x800BD850: nop

L_800BD854:
    // 0x800BD854: b           L_800BD85C
    // 0x800BD858: nop

        goto L_800BD85C;
    // 0x800BD858: nop

L_800BD85C:
    // 0x800BD85C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BD864: jr          $ra
    // 0x800BD868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BD868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800900DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800900DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800900E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800900E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800900E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800900EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800900F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800900F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800900F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800900FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090100: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090104: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090108: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009010C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090110: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090114: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090118: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009011C: addiu       $a1, $a1, 0x139C
    ctx->r5 = ADD32(ctx->r5, 0X139C);
    // 0x80090120: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090124: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009012C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090130: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090134: jal         0x80027464
    // 0x80090138: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090138: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009013C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090140: b           L_80090148
    // 0x80090144: nop

        goto L_80090148;
    // 0x80090144: nop

L_80090148:
    // 0x80090148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009014C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090150: jr          $ra
    // 0x80090154: nop

    return;
    // 0x80090154: nop

;}
RECOMP_FUNC void func_800DD928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DD92C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DD930: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DD934: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DD938: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DD93C: lh          $t0, 0x6($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X6);
    // 0x800DD940: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DD944: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800DD948: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DD94C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DD950: addiu       $t9, $t8, -0x5
    ctx->r25 = ADD32(ctx->r24, -0X5);
    // 0x800DD954: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800DD958: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DD95C: lh          $t1, 0x8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X8);
    // 0x800DD960: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DD964: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DD968: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800DD96C: addiu       $a1, $a1, 0x4354
    ctx->r5 = ADD32(ctx->r5, 0X4354);
    // 0x800DD970: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DD974: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DD978: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DD97C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DD980: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DD984: jal         0x80027464
    // 0x800DD988: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DD988: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DD98C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800DD990: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DD994: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800DD998: beq         $t2, $at, L_800DD9C8
    if (ctx->r10 == ctx->r1) {
        // 0x800DD99C: nop
    
            goto L_800DD9C8;
    }
    // 0x800DD99C: nop

    // 0x800DD9A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DD9A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DD9A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800DD9AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DD9B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800DD9B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DD9B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800DD9BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800DD9C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800DD9C4: sb          $t3, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r11;
L_800DD9C8:
    // 0x800DD9C8: b           L_800DD9D0
    // 0x800DD9CC: nop

        goto L_800DD9D0;
    // 0x800DD9CC: nop

L_800DD9D0:
    // 0x800DD9D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DD9D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DD9D8: jr          $ra
    // 0x800DD9DC: nop

    return;
    // 0x800DD9DC: nop

;}
RECOMP_FUNC void func_800E0C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0C54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E0C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E0C5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E0C60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E0C64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E0C68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E0C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0C70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E0C74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0C78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E0C7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0C80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E0C84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E0C88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E0C8C: nop

    // 0x800E0C90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E0C94: nop

    // 0x800E0C98: bne         $t1, $zero, L_800E0D30
    if (ctx->r9 != 0) {
        // 0x800E0C9C: nop
    
            goto L_800E0D30;
    }
    // 0x800E0C9C: nop

    // 0x800E0CA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E0CA4: nop

    // 0x800E0CA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E0CAC: nop

    // 0x800E0CB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E0CB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E0CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0CBC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E0CC0: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E0CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0CC8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E0CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0CD0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E0CD4: jal         0x8001C0EC
    // 0x800E0CD8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E0CD8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E0CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0CE4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0CE8: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E0CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0CF0: jal         0x8001ABF4
    // 0x800E0CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E0CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E0CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0CFC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0D00: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E0D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0D08: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E0D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E0D10: jal         0x8001ABF4
    // 0x800E0D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E0D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E0D18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E0D1C: nop

    // 0x800E0D20: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800E0D24: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E0D28: nop

    // 0x800E0D2C: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800E0D30:
    // 0x800E0D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0D38: jal         0x8002A8B4
    // 0x800E0D3C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800E0D3C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800E0D40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E0D44: nop

    // 0x800E0D48: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E0D4C: nop

    // 0x800E0D50: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E0D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0D5C: jal         0x8001B4AC
    // 0x800E0D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800E0D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E0D64: beq         $v0, $zero, L_800E0DCC
    if (ctx->r2 == 0) {
        // 0x800E0D68: nop
    
            goto L_800E0DCC;
    }
    // 0x800E0D68: nop

    // 0x800E0D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0D74: jal         0x8002A1FC
    // 0x800E0D78: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800E0D78: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_5:
    // 0x800E0D7C: beq         $v0, $zero, L_800E0DA8
    if (ctx->r2 == 0) {
        // 0x800E0D80: nop
    
            goto L_800E0DA8;
    }
    // 0x800E0D80: nop

    // 0x800E0D84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E0D88: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800E0D8C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E0D90: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E0D94: nop

    // 0x800E0D98: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
    // 0x800E0D9C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E0DA0: b           L_800E0DCC
    // 0x800E0DA4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_800E0DCC;
    // 0x800E0DA4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E0DA8:
    // 0x800E0DA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E0DAC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800E0DB0: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E0DB4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E0DB8: nop

    // 0x800E0DBC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E0DC0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E0DC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E0DC8: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800E0DCC:
    // 0x800E0DCC: b           L_800E0DD4
    // 0x800E0DD0: nop

        goto L_800E0DD4;
    // 0x800E0DD0: nop

L_800E0DD4:
    // 0x800E0DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E0DD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E0DDC: jr          $ra
    // 0x800E0DE0: nop

    return;
    // 0x800E0DE0: nop

;}
RECOMP_FUNC void func_8009AD74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009AD78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009AD7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009AD80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009AD84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009AD88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009AD8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AD90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009AD94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AD98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009AD9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009ADA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009ADA4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009ADA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009ADAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009ADB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009ADB4: jal         0x80098864
    // 0x8009ADB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_0;
    // 0x8009ADB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8009ADBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009ADC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009ADC4: jal         0x8002AA94
    // 0x8009ADC8: nop

    func_8002AA94(rdram, ctx);
        goto after_1;
    // 0x8009ADC8: nop

    after_1:
    // 0x8009ADCC: b           L_8009ADD4
    // 0x8009ADD0: nop

        goto L_8009ADD4;
    // 0x8009ADD0: nop

L_8009ADD4:
    // 0x8009ADD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009ADD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009ADDC: jr          $ra
    // 0x8009ADE0: nop

    return;
    // 0x8009ADE0: nop

;}
RECOMP_FUNC void func_800BCD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCD60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BCD64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BCD68: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BCD6C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800BCD70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BCD74: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BCD78: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BCD7C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BCD80: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BCD84: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BCD88: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BCD8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BCD90: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BCD94: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BCD98: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BCD9C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BCDA0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BCDA4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BCDA8: addiu       $a1, $a1, 0x3E50
    ctx->r5 = ADD32(ctx->r5, 0X3E50);
    // 0x800BCDAC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BCDB0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BCDB4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800BCDB8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BCDBC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BCDC0: jal         0x80027464
    // 0x800BCDC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BCDC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BCDC8: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x800BCDCC: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCDD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCDD4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BCDD8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BCDDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BCDE0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BCDE4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BCDE8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800BCDEC: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800BCDF0: lb          $t4, 0x2F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCDF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCDF8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800BCDFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800BCE00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800BCE04: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800BCE08: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800BCE0C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800BCE10: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800BCE14: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x800BCE18: lb          $t7, 0x2F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCE1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCE20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BCE24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BCE28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BCE2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BCE30: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BCE34: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BCE38: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BCE3C: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCE40: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BCE44: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x800BCE48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BCE4C: jal         0x8001ABF4
    // 0x800BCE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800BCE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800BCE54: lb          $t9, 0x2F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCE58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BCE5C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800BCE60: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BCE64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BCE68: lwc1        $f4, 0x4C98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4C98);
    // 0x800BCE6C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BCE70: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BCE74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCE78: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BCE7C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800BCE80: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCE84: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800BCE88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BCE8C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BCE90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800BCE94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BCE98: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800BCE9C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800BCEA0: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800BCEA4: lwc1        $f20, 0xC($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800BCEA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCEAC: swc1        $f20, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f20.u32l;
    // 0x800BCEB0: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCEB4: nop

    // 0x800BCEB8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800BCEBC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800BCEC0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800BCEC4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800BCEC8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800BCECC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800BCED0: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x800BCED4: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCED8: jal         0x8001BB34
    // 0x800BCEDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800BCEDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800BCEE0: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800BCEE4: jal         0x800BCF08
    // 0x800BCEE8: nop

    func_800BCF08(rdram, ctx);
        goto after_3;
    // 0x800BCEE8: nop

    after_3:
    // 0x800BCEEC: b           L_800BCEF4
    // 0x800BCEF0: nop

        goto L_800BCEF4;
    // 0x800BCEF0: nop

L_800BCEF4:
    // 0x800BCEF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BCEF8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800BCEFC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800BCF00: jr          $ra
    // 0x800BCF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800BCF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800B87C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B87C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B87C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B87C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B87CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B87D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B87D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B87D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B87DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B87E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B87E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B87E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B87EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B87F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B87F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B87F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B87FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B8800: addiu       $a1, $a1, 0x3A3C
    ctx->r5 = ADD32(ctx->r5, 0X3A3C);
    // 0x800B8804: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B8808: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B880C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B8810: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B8814: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B8818: jal         0x80027464
    // 0x800B881C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B881C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B8820: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800B8824: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800B8828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B882C: beq         $t1, $at, L_800B88F4
    if (ctx->r9 == ctx->r1) {
        // 0x800B8830: nop
    
            goto L_800B88F4;
    }
    // 0x800B8830: nop

    // 0x800B8834: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x800B8838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B883C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B8840: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B8844: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B8848: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B884C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B8850: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B8854: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B8858: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800B885C: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x800B8860: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B8864: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800B8868: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800B886C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800B8870: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800B8874: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800B8878: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800B887C: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800B8880: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x800B8884: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B8888: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B888C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B8890: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B8894: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B8898: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B889C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B88A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800B88A4: sh          $t7, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r15;
    // 0x800B88A8: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x800B88AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B88B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B88B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B88B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B88BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B88C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B88C4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B88C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B88CC: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B88D0: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x800B88D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B88D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B88DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B88E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B88E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B88E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B88EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B88F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800B88F4:
    // 0x800B88F4: b           L_800B88FC
    // 0x800B88F8: nop

        goto L_800B88FC;
    // 0x800B88F8: nop

L_800B88FC:
    // 0x800B88FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B8904: jr          $ra
    // 0x800B8908: nop

    return;
    // 0x800B8908: nop

;}
RECOMP_FUNC void func_80095588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095588: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009558C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095590: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80095594: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80095598: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009559C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800955A0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800955A4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800955A8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800955AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800955B0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800955B4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800955B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800955BC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800955C0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800955C4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800955C8: addiu       $a1, $a1, 0x47F0
    ctx->r5 = ADD32(ctx->r5, 0X47F0);
    // 0x800955CC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800955D0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800955D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800955D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800955DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800955E0: jal         0x80027464
    // 0x800955E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800955E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800955E8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800955EC: b           L_800955F4
    // 0x800955F0: nop

        goto L_800955F4;
    // 0x800955F0: nop

L_800955F4:
    // 0x800955F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800955F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800955FC: jr          $ra
    // 0x80095600: nop

    return;
    // 0x80095600: nop

;}
RECOMP_FUNC void func_8007A1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A1E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A1E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A1EC: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007A1F0: nop

    // 0x8007A1F4: bne         $t6, $zero, L_8007A22C
    if (ctx->r14 != 0) {
        // 0x8007A1F8: nop
    
            goto L_8007A22C;
    }
    // 0x8007A1F8: nop

    // 0x8007A1FC: jal         0x8007944C
    // 0x8007A200: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007A200: nop

    after_0:
    // 0x8007A204: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007A208: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007A20C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A210: beq         $t7, $at, L_8007A224
    if (ctx->r15 == ctx->r1) {
        // 0x8007A214: nop
    
            goto L_8007A224;
    }
    // 0x8007A214: nop

    // 0x8007A218: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007A21C: jal         0x80079E9C
    // 0x8007A220: nop

    func_80079E9C(rdram, ctx);
        goto after_1;
    // 0x8007A220: nop

    after_1:
L_8007A224:
    // 0x8007A224: b           L_8007A23C
    // 0x8007A228: nop

        goto L_8007A23C;
    // 0x8007A228: nop

L_8007A22C:
    // 0x8007A22C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007A230: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x8007A234: nop

    // 0x8007A238: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8007A23C:
    // 0x8007A23C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007A240: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A244: beq         $t9, $at, L_8007A2A0
    if (ctx->r25 == ctx->r1) {
        // 0x8007A248: nop
    
            goto L_8007A2A0;
    }
    // 0x8007A248: nop

    // 0x8007A24C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007A250: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007A254: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007A258: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A25C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007A260: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007A264: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007A268: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007A26C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007A270: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007A274: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A278: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x8007A27C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8007A280: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007A284: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A288: sh          $t6, -0x1EF8($at)
    MEM_H(-0X1EF8, ctx->r1) = ctx->r14;
    // 0x8007A28C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8007A290: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8007A294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A298: b           L_8007A2A8
    // 0x8007A29C: sh          $t8, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r24;
        goto L_8007A2A8;
    // 0x8007A29C: sh          $t8, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r24;
L_8007A2A0:
    // 0x8007A2A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A2A4: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
L_8007A2A8:
    // 0x8007A2A8: b           L_8007A2B0
    // 0x8007A2AC: nop

        goto L_8007A2B0;
    // 0x8007A2AC: nop

L_8007A2B0:
    // 0x8007A2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A2B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A2B8: jr          $ra
    // 0x8007A2BC: nop

    return;
    // 0x8007A2BC: nop

;}
RECOMP_FUNC void func_800A2BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A2BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2BC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A2BC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A2BCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A2BD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A2BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2BD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2BDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2BE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2BE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A2BE8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A2BEC: nop

    // 0x800A2BF0: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x800A2BF4: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x800A2BF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A2BFC: bne         $t9, $at, L_800A2C1C
    if (ctx->r25 != ctx->r1) {
        // 0x800A2C00: nop
    
            goto L_800A2C1C;
    }
    // 0x800A2C00: nop

    // 0x800A2C04: b           L_800A2C0C
    // 0x800A2C08: nop

        goto L_800A2C0C;
    // 0x800A2C08: nop

L_800A2C0C:
    // 0x800A2C0C: jal         0x800A2C44
    // 0x800A2C10: nop

    func_800A2C44(rdram, ctx);
        goto after_0;
    // 0x800A2C10: nop

    after_0:
    // 0x800A2C14: b           L_800A2C2C
    // 0x800A2C18: nop

        goto L_800A2C2C;
    // 0x800A2C18: nop

L_800A2C1C:
    // 0x800A2C1C: jal         0x800A30E8
    // 0x800A2C20: nop

    func_800A30E8(rdram, ctx);
        goto after_1;
    // 0x800A2C20: nop

    after_1:
    // 0x800A2C24: b           L_800A2C2C
    // 0x800A2C28: nop

        goto L_800A2C2C;
    // 0x800A2C28: nop

L_800A2C2C:
    // 0x800A2C2C: b           L_800A2C34
    // 0x800A2C30: nop

        goto L_800A2C34;
    // 0x800A2C30: nop

L_800A2C34:
    // 0x800A2C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A2C3C: jr          $ra
    // 0x800A2C40: nop

    return;
    // 0x800A2C40: nop

;}
RECOMP_FUNC void func_8007FE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FE5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007FE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FE64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FE68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FE6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FE70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FE74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FE78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FE7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FE80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FE84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FE88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FE8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007FE90: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FE94: nop

    // 0x8007FE98: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8007FE9C: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8007FEA0: nop

    // 0x8007FEA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007FEA8: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x8007FEAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FEB0: nop

    // 0x8007FEB4: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007FEB8: lwc1        $f16, 0x28($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X28);
    // 0x8007FEBC: nop

    // 0x8007FEC0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007FEC4: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
    // 0x8007FEC8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FECC: nop

    // 0x8007FED0: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8007FED4: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8007FED8: nop

    // 0x8007FEDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007FEE0: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x8007FEE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FEE8: nop

    // 0x8007FEEC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8007FEF0: nop

    // 0x8007FEF4: bne         $t4, $zero, L_8007FF14
    if (ctx->r12 != 0) {
        // 0x8007FEF8: nop
    
            goto L_8007FF14;
    }
    // 0x8007FEF8: nop

    // 0x8007FEFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007FF00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8007FF04: jal         0x8001A928
    // 0x8007FF08: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007FF08: nop

    after_0:
    // 0x8007FF0C: b           L_8007FF2C
    // 0x8007FF10: nop

        goto L_8007FF2C;
    // 0x8007FF10: nop

L_8007FF14:
    // 0x8007FF14: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FF18: nop

    // 0x8007FF1C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8007FF20: nop

    // 0x8007FF24: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007FF28: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_8007FF2C:
    // 0x8007FF2C: b           L_8007FF34
    // 0x8007FF30: nop

        goto L_8007FF34;
    // 0x8007FF30: nop

L_8007FF34:
    // 0x8007FF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007FF3C: jr          $ra
    // 0x8007FF40: nop

    return;
    // 0x8007FF40: nop

;}
RECOMP_FUNC void func_800C1204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1204: jr          $ra
    // 0x800C1208: nop

    return;
    // 0x800C1208: nop

    // 0x800C120C: jr          $ra
    // 0x800C1210: nop

    return;
    // 0x800C1210: nop

;}
RECOMP_FUNC void func_800D9A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D9A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D9A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9A24: jal         0x8002B0E4
    // 0x800D9A28: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D9A28: nop

    after_0:
    // 0x800D9A2C: b           L_800D9A34
    // 0x800D9A30: nop

        goto L_800D9A34;
    // 0x800D9A30: nop

L_800D9A34:
    // 0x800D9A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D9A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D9A3C: jr          $ra
    // 0x800D9A40: nop

    return;
    // 0x800D9A40: nop

;}
RECOMP_FUNC void func_800DA8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA8B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA8B4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800DA8B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA8BC: bne         $t6, $at, L_800DA978
    if (ctx->r14 != ctx->r1) {
        // 0x800DA8C0: nop
    
            goto L_800DA978;
    }
    // 0x800DA8C0: nop

    // 0x800DA8C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800DA8C8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800DA8CC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800DA8D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800DA8D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DA8D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800DA8DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DA8E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800DA8E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800DA8E8: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800DA8EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA8F0: bne         $t9, $at, L_800DA978
    if (ctx->r25 != ctx->r1) {
        // 0x800DA8F4: nop
    
            goto L_800DA978;
    }
    // 0x800DA8F4: nop

    // 0x800DA8F8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800DA8FC: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800DA900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA904: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800DA908: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800DA90C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DA910: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800DA914: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800DA918: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DA91C: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x800DA920: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x800DA924: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800DA928: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x800DA92C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA930: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800DA934: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DA938: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800DA93C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800DA940: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800DA944: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800DA948: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800DA94C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x800DA950: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA954: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA958: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA95C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA960: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA964: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA968: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA96C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA970: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800DA974: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800DA978:
    // 0x800DA978: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800DA97C: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x800DA980: nop

    // 0x800DA984: bne         $t8, $zero, L_800DA9B8
    if (ctx->r24 != 0) {
        // 0x800DA988: nop
    
            goto L_800DA9B8;
    }
    // 0x800DA988: nop

    // 0x800DA98C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800DA990: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800DA994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA998: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x800DA99C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800DA9A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800DA9A4: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800DA9A8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800DA9AC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800DA9B0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800DA9B4: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800DA9B8:
    // 0x800DA9B8: jr          $ra
    // 0x800DA9BC: nop

    return;
    // 0x800DA9BC: nop

    // 0x800DA9C0: jr          $ra
    // 0x800DA9C4: nop

    return;
    // 0x800DA9C4: nop

;}
RECOMP_FUNC void func_800FE204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE204: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FE208: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FE20C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800FE210: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FE214: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x800FE218: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800FE21C: nop

    // 0x800FE220: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x800FE224: beq         $t8, $zero, L_800FE2E0
    if (ctx->r24 == 0) {
        // 0x800FE228: nop
    
            goto L_800FE2E0;
    }
    // 0x800FE228: nop

    // 0x800FE22C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800FE230: lw          $s0, 0x4210($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4210);
    // 0x800FE234: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800FE238: beq         $s0, $at, L_800FE254
    if (ctx->r16 == ctx->r1) {
        // 0x800FE23C: nop
    
            goto L_800FE254;
    }
    // 0x800FE23C: nop

    // 0x800FE240: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800FE244: beq         $s0, $at, L_800FE29C
    if (ctx->r16 == ctx->r1) {
        // 0x800FE248: nop
    
            goto L_800FE29C;
    }
    // 0x800FE248: nop

    // 0x800FE24C: b           L_800FE2C0
    // 0x800FE250: nop

        goto L_800FE2C0;
    // 0x800FE250: nop

L_800FE254:
    // 0x800FE254: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE258: lw          $t9, 0x421C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X421C);
    // 0x800FE25C: nop

    // 0x800FE260: beq         $t9, $zero, L_800FE284
    if (ctx->r25 == 0) {
        // 0x800FE264: nop
    
            goto L_800FE284;
    }
    // 0x800FE264: nop

    // 0x800FE268: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800FE26C: lw          $a0, 0x421C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X421C);
    // 0x800FE270: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800FE274: jal         0x80016F38
    // 0x800FE278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_0;
    // 0x800FE278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800FE27C: b           L_800FE294
    // 0x800FE280: nop

        goto L_800FE294;
    // 0x800FE280: nop

L_800FE284:
    // 0x800FE284: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800FE288: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800FE28C: jal         0x80016F38
    // 0x800FE290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_1;
    // 0x800FE290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800FE294:
    // 0x800FE294: b           L_800FE2E0
    // 0x800FE298: nop

        goto L_800FE2E0;
    // 0x800FE298: nop

L_800FE29C:
    // 0x800FE29C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FE2A0: lw          $a2, 0x4220($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4220);
    // 0x800FE2A4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800FE2A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FE2AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FE2B0: jal         0x800175F0
    // 0x800FE2B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800FE2B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800FE2B8: b           L_800FE2E0
    // 0x800FE2BC: nop

        goto L_800FE2E0;
    // 0x800FE2BC: nop

L_800FE2C0:
    // 0x800FE2C0: jal         0x8001D2C0
    // 0x800FE2C4: nop

    func_8001D2C0(rdram, ctx);
        goto after_3;
    // 0x800FE2C4: nop

    after_3:
    // 0x800FE2C8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800FE2CC: lw          $t0, 0x4210($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4210);
    // 0x800FE2D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE2D4: sw          $t0, 0x4FD0($at)
    MEM_W(0X4FD0, ctx->r1) = ctx->r8;
    // 0x800FE2D8: b           L_800FE2E0
    // 0x800FE2DC: nop

        goto L_800FE2E0;
    // 0x800FE2DC: nop

L_800FE2E0:
    // 0x800FE2E0: jal         0x8001D1D4
    // 0x800FE2E4: nop

    func_8001D1D4(rdram, ctx);
        goto after_4;
    // 0x800FE2E4: nop

    after_4:
    // 0x800FE2E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE2EC: bne         $v0, $at, L_800FE2FC
    if (ctx->r2 != ctx->r1) {
        // 0x800FE2F0: nop
    
            goto L_800FE2FC;
    }
    // 0x800FE2F0: nop

    // 0x800FE2F4: b           L_800FE6C8
    // 0x800FE2F8: nop

        goto L_800FE6C8;
    // 0x800FE2F8: nop

L_800FE2FC:
    // 0x800FE2FC: jal         0x8001D1D4
    // 0x800FE300: nop

    func_8001D1D4(rdram, ctx);
        goto after_5;
    // 0x800FE300: nop

    after_5:
    // 0x800FE304: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FE308: bne         $v0, $at, L_800FE31C
    if (ctx->r2 != ctx->r1) {
        // 0x800FE30C: nop
    
            goto L_800FE31C;
    }
    // 0x800FE30C: nop

    // 0x800FE310: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800FE314: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FE318: sw          $t1, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r9;
L_800FE31C:
    // 0x800FE31C: jal         0x800FDF98
    // 0x800FE320: nop

    func_800FDF98(rdram, ctx);
        goto after_6;
    // 0x800FE320: nop

    after_6:
    // 0x800FE324: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800FE328: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800FE32C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FE330: bne         $t2, $at, L_800FE35C
    if (ctx->r10 != ctx->r1) {
        // 0x800FE334: nop
    
            goto L_800FE35C;
    }
    // 0x800FE334: nop

    // 0x800FE338: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800FE33C: lw          $t3, 0x4210($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4210);
    // 0x800FE340: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE344: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800FE348: bgez        $t4, L_800FE35C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800FE34C: sw          $t4, 0x4210($at)
        MEM_W(0X4210, ctx->r1) = ctx->r12;
            goto L_800FE35C;
    }
    // 0x800FE34C: sw          $t4, 0x4210($at)
    MEM_W(0X4210, ctx->r1) = ctx->r12;
    // 0x800FE350: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800FE354: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE358: sw          $t5, 0x4210($at)
    MEM_W(0X4210, ctx->r1) = ctx->r13;
L_800FE35C:
    // 0x800FE35C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800FE360: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800FE364: bne         $t6, $at, L_800FE394
    if (ctx->r14 != ctx->r1) {
        // 0x800FE368: nop
    
            goto L_800FE394;
    }
    // 0x800FE368: nop

    // 0x800FE36C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FE370: lw          $t7, 0x4210($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4210);
    // 0x800FE374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE378: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FE37C: sw          $t8, 0x4210($at)
    MEM_W(0X4210, ctx->r1) = ctx->r24;
    // 0x800FE380: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x800FE384: bne         $at, $zero, L_800FE394
    if (ctx->r1 != 0) {
        // 0x800FE388: nop
    
            goto L_800FE394;
    }
    // 0x800FE388: nop

    // 0x800FE38C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE390: sw          $zero, 0x4210($at)
    MEM_W(0X4210, ctx->r1) = 0;
L_800FE394:
    // 0x800FE394: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE398: lw          $t9, 0x4210($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4210);
    // 0x800FE39C: nop

    // 0x800FE3A0: sltiu       $at, $t9, 0x9
    ctx->r1 = ctx->r25 < 0X9 ? 1 : 0;
    // 0x800FE3A4: beq         $at, $zero, L_800FE6B0
    if (ctx->r1 == 0) {
        // 0x800FE3A8: nop
    
            goto L_800FE6B0;
    }
    // 0x800FE3A8: nop

    // 0x800FE3AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FE3B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE3B4: addu        $at, $at, $t9
    gpr jr_addend_800FE3C0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FE3B8: lw          $t9, 0x46B0($at)
    ctx->r25 = ADD32(ctx->r1, 0X46B0);
    // 0x800FE3BC: nop

    // 0x800FE3C0: jr          $t9
    // 0x800FE3C4: nop

    switch (jr_addend_800FE3C0 >> 2) {
        case 0: goto L_800FE3C8; break;
        case 1: goto L_800FE444; break;
        case 2: goto L_800FE444; break;
        case 3: goto L_800FE4C0; break;
        case 4: goto L_800FE6B0; break;
        case 5: goto L_800FE444; break;
        case 6: goto L_800FE53C; break;
        case 7: goto L_800FE5B8; break;
        case 8: goto L_800FE634; break;
        default: switch_error(__func__, 0x800FE3C0, 0x801346B0);
    }
    // 0x800FE3C4: nop

L_800FE3C8:
    // 0x800FE3C8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800FE3CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE3D0: bne         $t0, $at, L_800FE408
    if (ctx->r8 != ctx->r1) {
        // 0x800FE3D4: nop
    
            goto L_800FE408;
    }
    // 0x800FE3D4: nop

    // 0x800FE3D8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800FE3DC: lw          $t1, 0x4228($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4228);
    // 0x800FE3E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE3E4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800FE3E8: sw          $t2, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->r10;
    // 0x800FE3EC: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x800FE3F0: bne         $at, $zero, L_800FE400
    if (ctx->r1 != 0) {
        // 0x800FE3F4: nop
    
            goto L_800FE400;
    }
    // 0x800FE3F4: nop

    // 0x800FE3F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE3FC: sw          $zero, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = 0;
L_800FE400:
    // 0x800FE400: b           L_800FE43C
    // 0x800FE404: nop

        goto L_800FE43C;
    // 0x800FE404: nop

L_800FE408:
    // 0x800FE408: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800FE40C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE410: bne         $t3, $at, L_800FE43C
    if (ctx->r11 != ctx->r1) {
        // 0x800FE414: nop
    
            goto L_800FE43C;
    }
    // 0x800FE414: nop

    // 0x800FE418: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800FE41C: lw          $t4, 0x4228($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4228);
    // 0x800FE420: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE424: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800FE428: bgez        $t5, L_800FE43C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800FE42C: sw          $t5, 0x4228($at)
        MEM_W(0X4228, ctx->r1) = ctx->r13;
            goto L_800FE43C;
    }
    // 0x800FE42C: sw          $t5, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->r13;
    // 0x800FE430: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x800FE434: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE438: sw          $t6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->r14;
L_800FE43C:
    // 0x800FE43C: b           L_800FE6B0
    // 0x800FE440: nop

        goto L_800FE6B0;
    // 0x800FE440: nop

L_800FE444:
    // 0x800FE444: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800FE448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE44C: bne         $t7, $at, L_800FE484
    if (ctx->r15 != ctx->r1) {
        // 0x800FE450: nop
    
            goto L_800FE484;
    }
    // 0x800FE450: nop

    // 0x800FE454: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FE458: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x800FE45C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE460: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800FE464: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x800FE468: slti        $at, $t9, 0xC0
    ctx->r1 = SIGNED(ctx->r25) < 0XC0 ? 1 : 0;
    // 0x800FE46C: bne         $at, $zero, L_800FE47C
    if (ctx->r1 != 0) {
        // 0x800FE470: nop
    
            goto L_800FE47C;
    }
    // 0x800FE470: nop

    // 0x800FE474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE478: sw          $zero, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = 0;
L_800FE47C:
    // 0x800FE47C: b           L_800FE4B8
    // 0x800FE480: nop

        goto L_800FE4B8;
    // 0x800FE480: nop

L_800FE484:
    // 0x800FE484: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800FE488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE48C: bne         $t0, $at, L_800FE4B8
    if (ctx->r8 != ctx->r1) {
        // 0x800FE490: nop
    
            goto L_800FE4B8;
    }
    // 0x800FE490: nop

    // 0x800FE494: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800FE498: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x800FE49C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE4A0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800FE4A4: bgez        $t2, L_800FE4B8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800FE4A8: sw          $t2, -0x1BD8($at)
        MEM_W(-0X1BD8, ctx->r1) = ctx->r10;
            goto L_800FE4B8;
    }
    // 0x800FE4A8: sw          $t2, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r10;
    // 0x800FE4AC: addiu       $t3, $zero, 0xBF
    ctx->r11 = ADD32(0, 0XBF);
    // 0x800FE4B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE4B4: sw          $t3, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r11;
L_800FE4B8:
    // 0x800FE4B8: b           L_800FE6B0
    // 0x800FE4BC: nop

        goto L_800FE6B0;
    // 0x800FE4BC: nop

L_800FE4C0:
    // 0x800FE4C0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800FE4C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE4C8: bne         $t4, $at, L_800FE500
    if (ctx->r12 != ctx->r1) {
        // 0x800FE4CC: nop
    
            goto L_800FE500;
    }
    // 0x800FE4CC: nop

    // 0x800FE4D0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FE4D4: lw          $t5, 0x65EC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X65EC);
    // 0x800FE4D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE4DC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800FE4E0: sw          $t6, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r14;
    // 0x800FE4E4: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x800FE4E8: bne         $at, $zero, L_800FE4F8
    if (ctx->r1 != 0) {
        // 0x800FE4EC: nop
    
            goto L_800FE4F8;
    }
    // 0x800FE4EC: nop

    // 0x800FE4F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE4F4: sw          $zero, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = 0;
L_800FE4F8:
    // 0x800FE4F8: b           L_800FE534
    // 0x800FE4FC: nop

        goto L_800FE534;
    // 0x800FE4FC: nop

L_800FE500:
    // 0x800FE500: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800FE504: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE508: bne         $t7, $at, L_800FE534
    if (ctx->r15 != ctx->r1) {
        // 0x800FE50C: nop
    
            goto L_800FE534;
    }
    // 0x800FE50C: nop

    // 0x800FE510: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FE514: lw          $t8, 0x65EC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X65EC);
    // 0x800FE518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE51C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800FE520: bgez        $t9, L_800FE534
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800FE524: sw          $t9, 0x65EC($at)
        MEM_W(0X65EC, ctx->r1) = ctx->r25;
            goto L_800FE534;
    }
    // 0x800FE524: sw          $t9, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r25;
    // 0x800FE528: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800FE52C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE530: sw          $t0, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = ctx->r8;
L_800FE534:
    // 0x800FE534: b           L_800FE6B0
    // 0x800FE538: nop

        goto L_800FE6B0;
    // 0x800FE538: nop

L_800FE53C:
    // 0x800FE53C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800FE540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE544: bne         $t1, $at, L_800FE57C
    if (ctx->r9 != ctx->r1) {
        // 0x800FE548: nop
    
            goto L_800FE57C;
    }
    // 0x800FE548: nop

    // 0x800FE54C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800FE550: lw          $t2, 0x421C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X421C);
    // 0x800FE554: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE558: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800FE55C: sw          $t3, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r11;
    // 0x800FE560: slti        $at, $t3, 0x101
    ctx->r1 = SIGNED(ctx->r11) < 0X101 ? 1 : 0;
    // 0x800FE564: bne         $at, $zero, L_800FE574
    if (ctx->r1 != 0) {
        // 0x800FE568: nop
    
            goto L_800FE574;
    }
    // 0x800FE568: nop

    // 0x800FE56C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE570: sw          $zero, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = 0;
L_800FE574:
    // 0x800FE574: b           L_800FE5B0
    // 0x800FE578: nop

        goto L_800FE5B0;
    // 0x800FE578: nop

L_800FE57C:
    // 0x800FE57C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800FE580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE584: bne         $t4, $at, L_800FE5B0
    if (ctx->r12 != ctx->r1) {
        // 0x800FE588: nop
    
            goto L_800FE5B0;
    }
    // 0x800FE588: nop

    // 0x800FE58C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800FE590: lw          $t5, 0x421C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X421C);
    // 0x800FE594: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE598: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800FE59C: bgez        $t6, L_800FE5B0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FE5A0: sw          $t6, 0x421C($at)
        MEM_W(0X421C, ctx->r1) = ctx->r14;
            goto L_800FE5B0;
    }
    // 0x800FE5A0: sw          $t6, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r14;
    // 0x800FE5A4: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x800FE5A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE5AC: sw          $t7, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r15;
L_800FE5B0:
    // 0x800FE5B0: b           L_800FE6B0
    // 0x800FE5B4: nop

        goto L_800FE6B0;
    // 0x800FE5B4: nop

L_800FE5B8:
    // 0x800FE5B8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800FE5BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE5C0: bne         $t8, $at, L_800FE5F8
    if (ctx->r24 != ctx->r1) {
        // 0x800FE5C4: nop
    
            goto L_800FE5F8;
    }
    // 0x800FE5C4: nop

    // 0x800FE5C8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE5CC: lw          $t9, 0x4220($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4220);
    // 0x800FE5D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE5D4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800FE5D8: sw          $t0, 0x4220($at)
    MEM_W(0X4220, ctx->r1) = ctx->r8;
    // 0x800FE5DC: slti        $at, $t0, 0x101
    ctx->r1 = SIGNED(ctx->r8) < 0X101 ? 1 : 0;
    // 0x800FE5E0: bne         $at, $zero, L_800FE5F0
    if (ctx->r1 != 0) {
        // 0x800FE5E4: nop
    
            goto L_800FE5F0;
    }
    // 0x800FE5E4: nop

    // 0x800FE5E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE5EC: sw          $zero, 0x4220($at)
    MEM_W(0X4220, ctx->r1) = 0;
L_800FE5F0:
    // 0x800FE5F0: b           L_800FE62C
    // 0x800FE5F4: nop

        goto L_800FE62C;
    // 0x800FE5F4: nop

L_800FE5F8:
    // 0x800FE5F8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800FE5FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE600: bne         $t1, $at, L_800FE62C
    if (ctx->r9 != ctx->r1) {
        // 0x800FE604: nop
    
            goto L_800FE62C;
    }
    // 0x800FE604: nop

    // 0x800FE608: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800FE60C: lw          $t2, 0x4220($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4220);
    // 0x800FE610: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE614: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800FE618: bgez        $t3, L_800FE62C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800FE61C: sw          $t3, 0x4220($at)
        MEM_W(0X4220, ctx->r1) = ctx->r11;
            goto L_800FE62C;
    }
    // 0x800FE61C: sw          $t3, 0x4220($at)
    MEM_W(0X4220, ctx->r1) = ctx->r11;
    // 0x800FE620: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x800FE624: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE628: sw          $t4, 0x4220($at)
    MEM_W(0X4220, ctx->r1) = ctx->r12;
L_800FE62C:
    // 0x800FE62C: b           L_800FE6B0
    // 0x800FE630: nop

        goto L_800FE6B0;
    // 0x800FE630: nop

L_800FE634:
    // 0x800FE634: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800FE638: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE63C: bne         $t5, $at, L_800FE674
    if (ctx->r13 != ctx->r1) {
        // 0x800FE640: nop
    
            goto L_800FE674;
    }
    // 0x800FE640: nop

    // 0x800FE644: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FE648: lw          $t6, 0x4224($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4224);
    // 0x800FE64C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE650: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800FE654: sw          $t7, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->r15;
    // 0x800FE658: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x800FE65C: bne         $at, $zero, L_800FE66C
    if (ctx->r1 != 0) {
        // 0x800FE660: nop
    
            goto L_800FE66C;
    }
    // 0x800FE660: nop

    // 0x800FE664: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE668: sw          $zero, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = 0;
L_800FE66C:
    // 0x800FE66C: b           L_800FE6A8
    // 0x800FE670: nop

        goto L_800FE6A8;
    // 0x800FE670: nop

L_800FE674:
    // 0x800FE674: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800FE678: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FE67C: bne         $t8, $at, L_800FE6A8
    if (ctx->r24 != ctx->r1) {
        // 0x800FE680: nop
    
            goto L_800FE6A8;
    }
    // 0x800FE680: nop

    // 0x800FE684: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE688: lw          $t9, 0x4224($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4224);
    // 0x800FE68C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE690: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800FE694: bgez        $t0, L_800FE6A8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800FE698: sw          $t0, 0x4224($at)
        MEM_W(0X4224, ctx->r1) = ctx->r8;
            goto L_800FE6A8;
    }
    // 0x800FE698: sw          $t0, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->r8;
    // 0x800FE69C: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x800FE6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE6A4: sw          $t1, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->r9;
L_800FE6A8:
    // 0x800FE6A8: b           L_800FE6B0
    // 0x800FE6AC: nop

        goto L_800FE6B0;
    // 0x800FE6AC: nop

L_800FE6B0:
    // 0x800FE6B0: jal         0x800FDA10
    // 0x800FE6B4: nop

    func_800FDA10(rdram, ctx);
        goto after_7;
    // 0x800FE6B4: nop

    after_7:
    // 0x800FE6B8: jal         0x8001994C
    // 0x800FE6BC: nop

    func_8001994C(rdram, ctx);
        goto after_8;
    // 0x800FE6BC: nop

    after_8:
    // 0x800FE6C0: b           L_800FE6C8
    // 0x800FE6C4: nop

        goto L_800FE6C8;
    // 0x800FE6C4: nop

L_800FE6C8:
    // 0x800FE6C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FE6CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800FE6D0: jr          $ra
    // 0x800FE6D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800FE6D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800DF81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF81C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DF820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF824: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF828: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF82C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF830: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF83C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF840: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF844: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF848: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF84C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DF850: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DF854: nop

    // 0x800DF858: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DF85C: nop

    // 0x800DF860: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DF864: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x800DF868: beq         $at, $zero, L_800DF90C
    if (ctx->r1 == 0) {
        // 0x800DF86C: nop
    
            goto L_800DF90C;
    }
    // 0x800DF86C: nop

    // 0x800DF870: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DF874: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DF878: addu        $at, $at, $t2
    gpr jr_addend_800DF884 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DF87C: lw          $t2, 0x5394($at)
    ctx->r10 = ADD32(ctx->r1, 0X5394);
    // 0x800DF880: nop

    // 0x800DF884: jr          $t2
    // 0x800DF888: nop

    switch (jr_addend_800DF884 >> 2) {
        case 0: goto L_800DF88C; break;
        case 1: goto L_800DF89C; break;
        case 2: goto L_800DF8AC; break;
        case 3: goto L_800DF8BC; break;
        case 4: goto L_800DF8CC; break;
        case 5: goto L_800DF8DC; break;
        case 6: goto L_800DF8EC; break;
        case 7: goto L_800DF8FC; break;
        default: switch_error(__func__, 0x800DF884, 0x80115394);
    }
    // 0x800DF888: nop

L_800DF88C:
    // 0x800DF88C: jal         0x800DE894
    // 0x800DF890: nop

    func_800DE894(rdram, ctx);
        goto after_0;
    // 0x800DF890: nop

    after_0:
    // 0x800DF894: b           L_800DF914
    // 0x800DF898: nop

        goto L_800DF914;
    // 0x800DF898: nop

L_800DF89C:
    // 0x800DF89C: jal         0x800DE95C
    // 0x800DF8A0: nop

    func_800DE95C(rdram, ctx);
        goto after_1;
    // 0x800DF8A0: nop

    after_1:
    // 0x800DF8A4: b           L_800DF914
    // 0x800DF8A8: nop

        goto L_800DF914;
    // 0x800DF8A8: nop

L_800DF8AC:
    // 0x800DF8AC: jal         0x800DEB3C
    // 0x800DF8B0: nop

    func_800DEB3C(rdram, ctx);
        goto after_2;
    // 0x800DF8B0: nop

    after_2:
    // 0x800DF8B4: b           L_800DF914
    // 0x800DF8B8: nop

        goto L_800DF914;
    // 0x800DF8B8: nop

L_800DF8BC:
    // 0x800DF8BC: jal         0x800DECE0
    // 0x800DF8C0: nop

    func_800DECE0(rdram, ctx);
        goto after_3;
    // 0x800DF8C0: nop

    after_3:
    // 0x800DF8C4: b           L_800DF914
    // 0x800DF8C8: nop

        goto L_800DF914;
    // 0x800DF8C8: nop

L_800DF8CC:
    // 0x800DF8CC: jal         0x800DF034
    // 0x800DF8D0: nop

    func_800DF034(rdram, ctx);
        goto after_4;
    // 0x800DF8D0: nop

    after_4:
    // 0x800DF8D4: b           L_800DF914
    // 0x800DF8D8: nop

        goto L_800DF914;
    // 0x800DF8D8: nop

L_800DF8DC:
    // 0x800DF8DC: jal         0x800DF3D4
    // 0x800DF8E0: nop

    func_800DF3D4(rdram, ctx);
        goto after_5;
    // 0x800DF8E0: nop

    after_5:
    // 0x800DF8E4: b           L_800DF914
    // 0x800DF8E8: nop

        goto L_800DF914;
    // 0x800DF8E8: nop

L_800DF8EC:
    // 0x800DF8EC: jal         0x800DF704
    // 0x800DF8F0: nop

    func_800DF704(rdram, ctx);
        goto after_6;
    // 0x800DF8F0: nop

    after_6:
    // 0x800DF8F4: b           L_800DF914
    // 0x800DF8F8: nop

        goto L_800DF914;
    // 0x800DF8F8: nop

L_800DF8FC:
    // 0x800DF8FC: jal         0x800DF734
    // 0x800DF900: nop

    func_800DF734(rdram, ctx);
        goto after_7;
    // 0x800DF900: nop

    after_7:
    // 0x800DF904: b           L_800DF914
    // 0x800DF908: nop

        goto L_800DF914;
    // 0x800DF908: nop

L_800DF90C:
    // 0x800DF90C: b           L_800DF914
    // 0x800DF910: nop

        goto L_800DF914;
    // 0x800DF910: nop

L_800DF914:
    // 0x800DF914: b           L_800DF91C
    // 0x800DF918: nop

        goto L_800DF91C;
    // 0x800DF918: nop

L_800DF91C:
    // 0x800DF91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DF924: jr          $ra
    // 0x800DF928: nop

    return;
    // 0x800DF928: nop

;}
RECOMP_FUNC void func_800F3A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3A68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F3A6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F3A70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F3A74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F3A78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F3A7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F3A80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F3A84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3A88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F3A8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3A90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F3A94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F3A98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F3A9C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800F3AA0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3AA4: nop

    // 0x800F3AA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F3AAC: nop

    // 0x800F3AB0: bne         $t1, $zero, L_800F3B38
    if (ctx->r9 != 0) {
        // 0x800F3AB4: nop
    
            goto L_800F3B38;
    }
    // 0x800F3AB4: nop

    // 0x800F3AB8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3ABC: nop

    // 0x800F3AC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F3AC4: nop

    // 0x800F3AC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F3ACC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F3AD0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3AD4: nop

    // 0x800F3AD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800F3ADC: nop

    // 0x800F3AE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800F3AE4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3AE8: nop

    // 0x800F3AEC: lh          $s0, 0xC2($t7)
    ctx->r16 = MEM_H(ctx->r15, 0XC2);
    // 0x800F3AF0: nop

    // 0x800F3AF4: beq         $s0, $zero, L_800F3B10
    if (ctx->r16 == 0) {
        // 0x800F3AF8: nop
    
            goto L_800F3B10;
    }
    // 0x800F3AF8: nop

    // 0x800F3AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F3B00: beq         $s0, $at, L_800F3B24
    if (ctx->r16 == ctx->r1) {
        // 0x800F3B04: nop
    
            goto L_800F3B24;
    }
    // 0x800F3B04: nop

    // 0x800F3B08: b           L_800F3B38
    // 0x800F3B0C: nop

        goto L_800F3B38;
    // 0x800F3B0C: nop

L_800F3B10:
    // 0x800F3B10: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3B14: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x800F3B18: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800F3B1C: b           L_800F3B38
    // 0x800F3B20: nop

        goto L_800F3B38;
    // 0x800F3B20: nop

L_800F3B24:
    // 0x800F3B24: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3B28: addiu       $t0, $zero, 0x37
    ctx->r8 = ADD32(0, 0X37);
    // 0x800F3B2C: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x800F3B30: b           L_800F3B38
    // 0x800F3B34: nop

        goto L_800F3B38;
    // 0x800F3B34: nop

L_800F3B38:
    // 0x800F3B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3B40: jal         0x80028FA0
    // 0x800F3B44: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800F3B44: nop

    after_0:
    // 0x800F3B48: beq         $v0, $zero, L_800F3B68
    if (ctx->r2 == 0) {
        // 0x800F3B4C: nop
    
            goto L_800F3B68;
    }
    // 0x800F3B4C: nop

    // 0x800F3B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3B58: jal         0x8002B0E4
    // 0x800F3B5C: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800F3B5C: nop

    after_1:
    // 0x800F3B60: b           L_800F3E34
    // 0x800F3B64: nop

        goto L_800F3E34;
    // 0x800F3B64: nop

L_800F3B68:
    // 0x800F3B68: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3B6C: nop

    // 0x800F3B70: lh          $s0, 0xC2($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XC2);
    // 0x800F3B74: nop

    // 0x800F3B78: beq         $s0, $zero, L_800F3B94
    if (ctx->r16 == 0) {
        // 0x800F3B7C: nop
    
            goto L_800F3B94;
    }
    // 0x800F3B7C: nop

    // 0x800F3B80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F3B84: beq         $s0, $at, L_800F3BDC
    if (ctx->r16 == ctx->r1) {
        // 0x800F3B88: nop
    
            goto L_800F3BDC;
    }
    // 0x800F3B88: nop

    // 0x800F3B8C: b           L_800F3C24
    // 0x800F3B90: nop

        goto L_800F3C24;
    // 0x800F3B90: nop

L_800F3B94:
    // 0x800F3B94: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3B98: nop

    // 0x800F3B9C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800F3BA0: nop

    // 0x800F3BA4: slti        $at, $t2, 0x1A
    ctx->r1 = SIGNED(ctx->r10) < 0X1A ? 1 : 0;
    // 0x800F3BA8: bne         $at, $zero, L_800F3BD4
    if (ctx->r1 != 0) {
        // 0x800F3BAC: nop
    
            goto L_800F3BD4;
    }
    // 0x800F3BAC: nop

    // 0x800F3BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3BB8: jal         0x8002A8B4
    // 0x800F3BBC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800F3BBC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x800F3BC0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3BC4: nop

    // 0x800F3BC8: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800F3BCC: nop

    // 0x800F3BD0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
L_800F3BD4:
    // 0x800F3BD4: b           L_800F3C24
    // 0x800F3BD8: nop

        goto L_800F3C24;
    // 0x800F3BD8: nop

L_800F3BDC:
    // 0x800F3BDC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3BE0: nop

    // 0x800F3BE4: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x800F3BE8: nop

    // 0x800F3BEC: slti        $at, $t7, 0x2E
    ctx->r1 = SIGNED(ctx->r15) < 0X2E ? 1 : 0;
    // 0x800F3BF0: bne         $at, $zero, L_800F3C1C
    if (ctx->r1 != 0) {
        // 0x800F3BF4: nop
    
            goto L_800F3C1C;
    }
    // 0x800F3BF4: nop

    // 0x800F3BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3C00: jal         0x8002A8B4
    // 0x800F3C04: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800F3C04: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x800F3C08: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3C0C: nop

    // 0x800F3C10: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800F3C14: nop

    // 0x800F3C18: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
L_800F3C1C:
    // 0x800F3C1C: b           L_800F3C24
    // 0x800F3C20: nop

        goto L_800F3C24;
    // 0x800F3C20: nop

L_800F3C24:
    // 0x800F3C24: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800F3C28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F3C2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F3C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3C34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3C38: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800F3C3C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800F3C40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F3C44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F3C48: jal         0x800295C0
    // 0x800F3C4C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800F3C4C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800F3C50: beq         $v0, $zero, L_800F3C64
    if (ctx->r2 == 0) {
        // 0x800F3C54: nop
    
            goto L_800F3C64;
    }
    // 0x800F3C54: nop

    // 0x800F3C58: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800F3C5C: b           L_800F3C70
    // 0x800F3C60: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
        goto L_800F3C70;
    // 0x800F3C60: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_800F3C64:
    // 0x800F3C64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800F3C68: nop

    // 0x800F3C6C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_800F3C70:
    // 0x800F3C70: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3C74: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800F3C78: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F3C7C: nop

    // 0x800F3C80: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800F3C84: nop

    // 0x800F3C88: bc1f        L_800F3CA8
    if (!c1cs) {
        // 0x800F3C8C: nop
    
            goto L_800F3CA8;
    }
    // 0x800F3C8C: nop

    // 0x800F3C90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3C94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3C98: jal         0x8002B0E4
    // 0x800F3C9C: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800F3C9C: nop

    after_5:
    // 0x800F3CA0: b           L_800F3E34
    // 0x800F3CA4: nop

        goto L_800F3E34;
    // 0x800F3CA4: nop

L_800F3CA8:
    // 0x800F3CA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3CAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3CB0: jal         0x80029D8C
    // 0x800F3CB4: nop

    func_80029D8C(rdram, ctx);
        goto after_6;
    // 0x800F3CB4: nop

    after_6:
    // 0x800F3CB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F3CBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F3CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3CC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F3CCC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800F3CD0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F3CD4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F3CD8: jal         0x80029018
    // 0x800F3CDC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800F3CDC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x800F3CE0: beq         $v0, $zero, L_800F3D00
    if (ctx->r2 == 0) {
        // 0x800F3CE4: nop
    
            goto L_800F3D00;
    }
    // 0x800F3CE4: nop

    // 0x800F3CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3CF0: jal         0x8002B0E4
    // 0x800F3CF4: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800F3CF4: nop

    after_8:
    // 0x800F3CF8: b           L_800F3E34
    // 0x800F3CFC: nop

        goto L_800F3E34;
    // 0x800F3CFC: nop

L_800F3D00:
    // 0x800F3D00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D04: nop

    // 0x800F3D08: lh          $s0, 0xC2($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XC2);
    // 0x800F3D0C: nop

    // 0x800F3D10: beq         $s0, $zero, L_800F3D2C
    if (ctx->r16 == 0) {
        // 0x800F3D14: nop
    
            goto L_800F3D2C;
    }
    // 0x800F3D14: nop

    // 0x800F3D18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F3D1C: beq         $s0, $at, L_800F3DAC
    if (ctx->r16 == ctx->r1) {
        // 0x800F3D20: nop
    
            goto L_800F3DAC;
    }
    // 0x800F3D20: nop

    // 0x800F3D24: b           L_800F3E2C
    // 0x800F3D28: nop

        goto L_800F3E2C;
    // 0x800F3D28: nop

L_800F3D2C:
    // 0x800F3D2C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D30: nop

    // 0x800F3D34: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800F3D38: nop

    // 0x800F3D3C: beq         $t3, $zero, L_800F3DA4
    if (ctx->r11 == 0) {
        // 0x800F3D40: nop
    
            goto L_800F3DA4;
    }
    // 0x800F3D40: nop

    // 0x800F3D44: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D48: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x800F3D4C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F3D50: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800F3D54: jal         0x80015538
    // 0x800F3D58: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800F3D58: nop

    after_9:
    // 0x800F3D5C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D60: nop

    // 0x800F3D64: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
    // 0x800F3D68: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800F3D70: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F3D74: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x800F3D78: jal         0x80015538
    // 0x800F3D7C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800F3D7C: nop

    after_10:
    // 0x800F3D80: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D84: nop

    // 0x800F3D88: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
    // 0x800F3D8C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3D90: nop

    // 0x800F3D94: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800F3D98: nop

    // 0x800F3D9C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800F3DA0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_800F3DA4:
    // 0x800F3DA4: b           L_800F3E2C
    // 0x800F3DA8: nop

        goto L_800F3E2C;
    // 0x800F3DA8: nop

L_800F3DAC:
    // 0x800F3DAC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3DB0: nop

    // 0x800F3DB4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800F3DB8: nop

    // 0x800F3DBC: beq         $t1, $zero, L_800F3E24
    if (ctx->r9 == 0) {
        // 0x800F3DC0: nop
    
            goto L_800F3E24;
    }
    // 0x800F3DC0: nop

    // 0x800F3DC4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3DC8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x800F3DCC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F3DD0: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x800F3DD4: jal         0x80015538
    // 0x800F3DD8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800F3DD8: nop

    after_11:
    // 0x800F3DDC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3DE0: nop

    // 0x800F3DE4: swc1        $f0, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f0.u32l;
    // 0x800F3DE8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3DEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800F3DF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F3DF4: lwc1        $f12, 0x18($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X18);
    // 0x800F3DF8: jal         0x80015538
    // 0x800F3DFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x800F3DFC: nop

    after_12:
    // 0x800F3E00: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3E04: nop

    // 0x800F3E08: swc1        $f0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f0.u32l;
    // 0x800F3E0C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F3E10: nop

    // 0x800F3E14: lh          $t8, 0xA6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA6);
    // 0x800F3E18: nop

    // 0x800F3E1C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800F3E20: sh          $t9, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r25;
L_800F3E24:
    // 0x800F3E24: b           L_800F3E2C
    // 0x800F3E28: nop

        goto L_800F3E2C;
    // 0x800F3E28: nop

L_800F3E2C:
    // 0x800F3E2C: b           L_800F3E34
    // 0x800F3E30: nop

        goto L_800F3E34;
    // 0x800F3E30: nop

L_800F3E34:
    // 0x800F3E34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F3E38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F3E3C: jr          $ra
    // 0x800F3E40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800F3E40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800C0194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0194: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C0198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C019C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800C01A0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800C01A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800C01A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C01AC: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800C01B0: lw          $a3, 0x24($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X24);
    // 0x800C01B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C01B8: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C01BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C01C0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800C01C4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800C01C8: jal         0x800295C0
    // 0x800C01CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x800C01CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800C01D0: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800C01D4: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800C01D8: nop

    // 0x800C01DC: beq         $t7, $zero, L_800C022C
    if (ctx->r15 == 0) {
        // 0x800C01E0: nop
    
            goto L_800C022C;
    }
    // 0x800C01E0: nop

    // 0x800C01E4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C01E8: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C01EC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C01F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800C01F4: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800C01F8: nop

    // 0x800C01FC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800C0200: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800C0204: nop

    // 0x800C0208: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800C020C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C0210: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C0214: nop

    // 0x800C0218: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800C021C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800C0220: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800C0224: b           L_800C027C
    // 0x800C0228: nop

        goto L_800C027C;
    // 0x800C0228: nop

L_800C022C:
    // 0x800C022C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C0230: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C0234: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800C0238: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800C023C: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C0240: nop

    // 0x800C0244: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800C0248: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800C024C: nop

    // 0x800C0250: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800C0254: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C0258: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C025C: nop

    // 0x800C0260: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800C0264: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800C0268: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800C026C: b           L_800C027C
    // 0x800C0270: nop

        goto L_800C027C;
    // 0x800C0270: nop

    // 0x800C0274: b           L_800C027C
    // 0x800C0278: nop

        goto L_800C027C;
    // 0x800C0278: nop

L_800C027C:
    // 0x800C027C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0280: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C0284: jr          $ra
    // 0x800C0288: nop

    return;
    // 0x800C0288: nop

;}
RECOMP_FUNC void func_800D8820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8820: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8824: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D8828: nop

    // 0x800D882C: bne         $t6, $zero, L_800D88E4
    if (ctx->r14 != 0) {
        // 0x800D8830: nop
    
            goto L_800D88E4;
    }
    // 0x800D8830: nop

    // 0x800D8834: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D8838: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D883C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800D8840: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D8844: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D8848: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D884C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D8850: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D8854: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D8858: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800D885C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D8860: bne         $t9, $at, L_800D88E4
    if (ctx->r25 != ctx->r1) {
        // 0x800D8864: nop
    
            goto L_800D88E4;
    }
    // 0x800D8864: nop

    // 0x800D8868: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D886C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D8870: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D8874: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D8878: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D887C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D8880: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D8884: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D8888: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D888C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D8890: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800D8894: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800D8898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D889C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D88A0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D88A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D88A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D88AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D88B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800D88B4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800D88B8: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800D88BC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800D88C0: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800D88C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D88C8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800D88CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D88D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D88D4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D88D8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D88DC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D88E0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800D88E4:
    // 0x800D88E4: jr          $ra
    // 0x800D88E8: nop

    return;
    // 0x800D88E8: nop

    // 0x800D88EC: jr          $ra
    // 0x800D88F0: nop

    return;
    // 0x800D88F0: nop

;}
RECOMP_FUNC void func_800AE210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE210: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AE214: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AE218: nop

    // 0x800AE21C: beq         $t6, $zero, L_800AE22C
    if (ctx->r14 == 0) {
        // 0x800AE220: nop
    
            goto L_800AE22C;
    }
    // 0x800AE220: nop

    // 0x800AE224: jr          $ra
    // 0x800AE228: nop

    return;
    // 0x800AE228: nop

L_800AE22C:
    // 0x800AE22C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AE230: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AE234: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE238: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AE23C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AE240: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AE244: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AE248: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AE24C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AE250: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800AE254: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800AE258: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800AE25C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800AE260: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE264: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AE268: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AE26C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800AE270: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AE274: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800AE278: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800AE27C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800AE280: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800AE284: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800AE288: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE28C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AE290: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AE294: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AE298: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AE29C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AE2A0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AE2A4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AE2A8: jr          $ra
    // 0x800AE2AC: nop

    return;
    // 0x800AE2AC: nop

    // 0x800AE2B0: jr          $ra
    // 0x800AE2B4: nop

    return;
    // 0x800AE2B4: nop

;}
RECOMP_FUNC void func_800C8764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C8768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C876C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8770: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8774: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C8778: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C877C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8780: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8784: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8788: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C878C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8790: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8794: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C8798: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C879C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C87A0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C87A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C87A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C87AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C87B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C87B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C87B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C87BC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C87C0: nop

    // 0x800C87C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800C87C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C87CC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C87D0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C87D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C87D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C87DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C87E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C87E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C87E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C87EC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C87F0: nop

    // 0x800C87F4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800C87F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C87FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8800: jal         0x800281A4
    // 0x800C8804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800C8804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C8808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C880C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8810: jal         0x800281A4
    // 0x800C8814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x800C8814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C8818: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800C881C: jal         0x8002B0E4
    // 0x800C8820: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800C8820: nop

    after_2:
    // 0x800C8824: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8828: jal         0x8002B0E4
    // 0x800C882C: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800C882C: nop

    after_3:
    // 0x800C8830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8838: jal         0x8002B0E4
    // 0x800C883C: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800C883C: nop

    after_4:
    // 0x800C8840: b           L_800C8848
    // 0x800C8844: nop

        goto L_800C8848;
    // 0x800C8844: nop

L_800C8848:
    // 0x800C8848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C884C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C8850: jr          $ra
    // 0x800C8854: nop

    return;
    // 0x800C8854: nop

;}
RECOMP_FUNC void func_8008424C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008424C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80084250: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80084254: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80084258: beq         $t6, $at, L_8008426C
    if (ctx->r14 == ctx->r1) {
        // 0x8008425C: nop
    
            goto L_8008426C;
    }
    // 0x8008425C: nop

    // 0x80084260: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80084264: bne         $t6, $at, L_800842B0
    if (ctx->r14 != ctx->r1) {
        // 0x80084268: nop
    
            goto L_800842B0;
    }
    // 0x80084268: nop

L_8008426C:
    // 0x8008426C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80084270: lb          $t7, -0x1EF0($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1EF0);
    // 0x80084274: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80084278: bne         $t7, $at, L_80084290
    if (ctx->r15 != ctx->r1) {
        // 0x8008427C: nop
    
            goto L_80084290;
    }
    // 0x8008427C: nop

    // 0x80084280: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x80084284: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084288: b           L_800842B0
    // 0x8008428C: sh          $t8, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r24;
        goto L_800842B0;
    // 0x8008428C: sh          $t8, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r24;
L_80084290:
    // 0x80084290: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80084294: lb          $t9, -0x1EF0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1EF0);
    // 0x80084298: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008429C: bne         $t9, $at, L_800842B0
    if (ctx->r25 != ctx->r1) {
        // 0x800842A0: nop
    
            goto L_800842B0;
    }
    // 0x800842A0: nop

    // 0x800842A4: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x800842A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800842AC: sh          $t0, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r8;
L_800842B0:
    // 0x800842B0: jr          $ra
    // 0x800842B4: nop

    return;
    // 0x800842B4: nop

    // 0x800842B8: jr          $ra
    // 0x800842BC: nop

    return;
    // 0x800842BC: nop

;}
RECOMP_FUNC void func_800DFDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DFDBC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DFDC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DFDC4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DFDC8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DFDCC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DFDD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DFDD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DFDD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DFDDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DFDE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFDE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DFDE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DFDEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DFDF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DFDF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DFDF8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DFDFC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DFE00: nop

    // 0x800DFE04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DFE08: nop

    // 0x800DFE0C: bne         $t1, $zero, L_800DFEF4
    if (ctx->r9 != 0) {
        // 0x800DFE10: nop
    
            goto L_800DFEF4;
    }
    // 0x800DFE10: nop

    // 0x800DFE14: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DFE18: nop

    // 0x800DFE1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DFE20: nop

    // 0x800DFE24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DFE28: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DFE2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFE30: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DFE34: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DFE38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFE3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DFE40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFE44: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800DFE48: jal         0x8001C0EC
    // 0x800DFE4C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DFE4C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DFE50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFE54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFE58: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DFE5C: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800DFE60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFE64: jal         0x8001ABF4
    // 0x800DFE68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DFE68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DFE6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFE70: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DFE74: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800DFE78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFE7C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DFE80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DFE84: jal         0x8001ABF4
    // 0x800DFE88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DFE88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DFE8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFE90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFE94: jal         0x8002A46C
    // 0x800DFE98: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DFE98: nop

    after_3:
    // 0x800DFE9C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DFEA0: nop

    // 0x800DFEA4: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800DFEA8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DFEAC: nop

    // 0x800DFEB0: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DFEB4: nop

    // 0x800DFEB8: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800DFEBC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DFEC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DFEC4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DFEC8: nop

    // 0x800DFECC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800DFED0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DFED4: nop

    // 0x800DFED8: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800DFEDC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DFEE0: nop

    // 0x800DFEE4: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800DFEE8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DFEEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800DFEF0: sh          $t1, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r9;
L_800DFEF4:
    // 0x800DFEF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFEF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFEFC: jal         0x80028FA0
    // 0x800DFF00: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DFF00: nop

    after_4:
    // 0x800DFF04: beq         $v0, $zero, L_800DFF1C
    if (ctx->r2 == 0) {
        // 0x800DFF08: nop
    
            goto L_800DFF1C;
    }
    // 0x800DFF08: nop

    // 0x800DFF0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFF10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFF14: jal         0x80029B60
    // 0x800DFF18: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800DFF18: nop

    after_5:
L_800DFF1C:
    // 0x800DFF1C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DFF20: nop

    // 0x800DFF24: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x800DFF28: nop

    // 0x800DFF2C: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x800DFF30: beq         $at, $zero, L_800E0110
    if (ctx->r1 == 0) {
        // 0x800DFF34: nop
    
            goto L_800E0110;
    }
    // 0x800DFF34: nop

    // 0x800DFF38: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DFF3C: nop

    // 0x800DFF40: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800DFF44: nop

    // 0x800DFF48: bne         $t6, $zero, L_800DFF70
    if (ctx->r14 != 0) {
        // 0x800DFF4C: nop
    
            goto L_800DFF70;
    }
    // 0x800DFF4C: nop

    // 0x800DFF50: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DFF54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800DFF58: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800DFF5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFF60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFF64: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800DFF68: jal         0x80029EF8
    // 0x800DFF6C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x800DFF6C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_6:
L_800DFF70:
    // 0x800DFF70: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DFF74: nop

    // 0x800DFF78: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800DFF7C: nop

    // 0x800DFF80: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800DFF84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DFF88: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DFF8C: nop

    // 0x800DFF90: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x800DFF94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFF98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFF9C: jal         0x80029C40
    // 0x800DFFA0: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800DFFA0: nop

    after_7:
    // 0x800DFFA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DFFA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DFFAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFFB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFFB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DFFB8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DFFBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DFFC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DFFC4: jal         0x80029018
    // 0x800DFFC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800DFFC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x800DFFCC: beq         $v0, $zero, L_800DFFF0
    if (ctx->r2 == 0) {
        // 0x800DFFD0: nop
    
            goto L_800DFFF0;
    }
    // 0x800DFFD0: nop

    // 0x800DFFD4: jal         0x800297DC
    // 0x800DFFD8: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800DFFD8: nop

    after_9:
    // 0x800DFFDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DFFE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DFFE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DFFE8: jal         0x80029824
    // 0x800DFFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800DFFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_800DFFF0:
    // 0x800DFFF0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DFFF4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DFFF8: nop

    // 0x800DFFFC: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x800E0000: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800E0004: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E0008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E000C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0010: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E0014: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E0018: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E001C: jal         0x80029F58
    // 0x800E0020: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_11;
    // 0x800E0020: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x800E0024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E0028: bne         $v0, $at, L_800E0108
    if (ctx->r2 != ctx->r1) {
        // 0x800E002C: nop
    
            goto L_800E0108;
    }
    // 0x800E002C: nop

    // 0x800E0030: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E0034: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E0038: nop

    // 0x800E003C: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x800E0040: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E0044: nop

    // 0x800E0048: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E004C: nop

    // 0x800E0050: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E0054: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E0058: nop

    // 0x800E005C: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x800E0060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0068: jal         0x8001B4AC
    // 0x800E006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_12;
    // 0x800E006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800E0070: beq         $v0, $zero, L_800E00E4
    if (ctx->r2 == 0) {
        // 0x800E0074: nop
    
            goto L_800E00E4;
    }
    // 0x800E0074: nop

    // 0x800E0078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E007C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0080: jal         0x8002A1FC
    // 0x800E0084: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_13;
    // 0x800E0084: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_13:
    // 0x800E0088: beq         $v0, $zero, L_800E00C0
    if (ctx->r2 == 0) {
        // 0x800E008C: nop
    
            goto L_800E00C0;
    }
    // 0x800E008C: nop

    // 0x800E0090: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E0094: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800E0098: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E009C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E00A0: nop

    // 0x800E00A4: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800E00A8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E00AC: nop

    // 0x800E00B0: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
    // 0x800E00B4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E00B8: b           L_800E00D8
    // 0x800E00BC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_800E00D8;
    // 0x800E00BC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E00C0:
    // 0x800E00C0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E00C4: nop

    // 0x800E00C8: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800E00CC: nop

    // 0x800E00D0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800E00D4: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
L_800E00D8:
    // 0x800E00D8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E00DC: b           L_800E0108
    // 0x800E00E0: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
        goto L_800E0108;
    // 0x800E00E0: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_800E00E4:
    // 0x800E00E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E00E8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E00EC: nop

    // 0x800E00F0: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x800E00F4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E00F8: nop

    // 0x800E00FC: lwc1        $f16, 0x2C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800E0100: nop

    // 0x800E0104: swc1        $f16, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f16.u32l;
L_800E0108:
    // 0x800E0108: b           L_800E0134
    // 0x800E010C: nop

        goto L_800E0134;
    // 0x800E010C: nop

L_800E0110:
    // 0x800E0110: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E0114: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E0118: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800E011C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E0120: nop

    // 0x800E0124: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
    // 0x800E0128: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E012C: nop

    // 0x800E0130: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E0134:
    // 0x800E0134: b           L_800E013C
    // 0x800E0138: nop

        goto L_800E013C;
    // 0x800E0138: nop

L_800E013C:
    // 0x800E013C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0140: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E0144: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E0148: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E014C: jr          $ra
    // 0x800E0150: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E0150: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800E09D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E09D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E09D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E09D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E09DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E09E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E09E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E09E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E09EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E09F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E09F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E09F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E09FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0A00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E0A04: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E0A08: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E0A0C: nop

    // 0x800E0A10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E0A14: nop

    // 0x800E0A18: bne         $t1, $zero, L_800E0A4C
    if (ctx->r9 != 0) {
        // 0x800E0A1C: nop
    
            goto L_800E0A4C;
    }
    // 0x800E0A1C: nop

    // 0x800E0A20: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E0A24: nop

    // 0x800E0A28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E0A2C: nop

    // 0x800E0A30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E0A34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E0A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0A40: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E0A44: jal         0x80029EF8
    // 0x800E0A48: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E0A48: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_800E0A4C:
    // 0x800E0A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0A50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0A54: jal         0x80028FA0
    // 0x800E0A58: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800E0A58: nop

    after_1:
    // 0x800E0A5C: beq         $v0, $zero, L_800E0A74
    if (ctx->r2 == 0) {
        // 0x800E0A60: nop
    
            goto L_800E0A74;
    }
    // 0x800E0A60: nop

    // 0x800E0A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0A6C: jal         0x80029B60
    // 0x800E0A70: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800E0A70: nop

    after_2:
L_800E0A74:
    // 0x800E0A74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0A78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0A7C: jal         0x8002A46C
    // 0x800E0A80: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E0A80: nop

    after_3:
    // 0x800E0A84: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E0A88: nop

    // 0x800E0A8C: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800E0A90: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E0A94: nop

    // 0x800E0A98: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800E0A9C: nop

    // 0x800E0AA0: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x800E0AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0AAC: jal         0x8002A8B4
    // 0x800E0AB0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800E0AB0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_4:
    // 0x800E0AB4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E0AB8: nop

    // 0x800E0ABC: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E0AC0: nop

    // 0x800E0AC4: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800E0AC8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E0ACC: nop

    // 0x800E0AD0: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800E0AD4: nop

    // 0x800E0AD8: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800E0ADC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E0AE0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E0AE4: nop

    // 0x800E0AE8: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x800E0AEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E0AF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E0AF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0AF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0B00: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E0B04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E0B08: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E0B0C: jal         0x80029018
    // 0x800E0B10: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E0B10: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x800E0B14: beq         $v0, $zero, L_800E0B38
    if (ctx->r2 == 0) {
        // 0x800E0B18: nop
    
            goto L_800E0B38;
    }
    // 0x800E0B18: nop

    // 0x800E0B1C: jal         0x800297DC
    // 0x800E0B20: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800E0B20: nop

    after_6:
    // 0x800E0B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0B2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E0B30: jal         0x80029824
    // 0x800E0B34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800E0B34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800E0B38:
    // 0x800E0B38: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E0B3C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E0B40: nop

    // 0x800E0B44: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x800E0B48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E0B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0B54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E0B58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E0B5C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E0B60: jal         0x80029F58
    // 0x800E0B64: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800E0B64: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800E0B68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E0B6C: bne         $v0, $at, L_800E0B84
    if (ctx->r2 != ctx->r1) {
        // 0x800E0B70: nop
    
            goto L_800E0B84;
    }
    // 0x800E0B70: nop

    // 0x800E0B74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E0B78: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E0B7C: nop

    // 0x800E0B80: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_800E0B84:
    // 0x800E0B84: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E0B88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E0B8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E0B90: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800E0B94: nop

    // 0x800E0B98: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800E0B9C: nop

    // 0x800E0BA0: bc1f        L_800E0C18
    if (!c1cs) {
        // 0x800E0BA4: nop
    
            goto L_800E0C18;
    }
    // 0x800E0BA4: nop

    // 0x800E0BA8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E0BAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E0BB0: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800E0BB4: lwc1        $f7, 0x53F0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X53F0);
    // 0x800E0BB8: lwc1        $f6, 0x53F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X53F4);
    // 0x800E0BBC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800E0BC0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800E0BC4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800E0BC8: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x800E0BCC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E0BD0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E0BD4: lwc1        $f16, 0x10($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800E0BD8: lwc1        $f5, 0x53F8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X53F8);
    // 0x800E0BDC: lwc1        $f4, 0x53FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X53FC);
    // 0x800E0BE0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800E0BE4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800E0BE8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800E0BEC: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x800E0BF0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E0BF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E0BF8: lwc1        $f10, 0x14($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800E0BFC: lwc1        $f19, 0x5400($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5400);
    // 0x800E0C00: lwc1        $f18, 0x5404($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5404);
    // 0x800E0C04: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800E0C08: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800E0C0C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800E0C10: b           L_800E0C3C
    // 0x800E0C14: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
        goto L_800E0C3C;
    // 0x800E0C14: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
L_800E0C18:
    // 0x800E0C18: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E0C1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800E0C20: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800E0C24: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E0C28: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E0C2C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E0C30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E0C34: nop

    // 0x800E0C38: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E0C3C:
    // 0x800E0C3C: b           L_800E0C44
    // 0x800E0C40: nop

        goto L_800E0C44;
    // 0x800E0C40: nop

L_800E0C44:
    // 0x800E0C44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E0C48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E0C4C: jr          $ra
    // 0x800E0C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E0C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009BD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD58: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009BD5C: lbu         $t6, 0x132($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X132);
    // 0x8009BD60: nop

    // 0x8009BD64: bne         $t6, $zero, L_8009BD74
    if (ctx->r14 != 0) {
        // 0x8009BD68: nop
    
            goto L_8009BD74;
    }
    // 0x8009BD68: nop

    // 0x8009BD6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8009BD70: sb          $t7, 0x132($a0)
    MEM_B(0X132, ctx->r4) = ctx->r15;
L_8009BD74:
    // 0x8009BD74: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8009BD78: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8009BD7C: lwc1        $f9, 0x48F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X48F0);
    // 0x8009BD80: lwc1        $f8, 0x48F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X48F4);
    // 0x8009BD84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8009BD88: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8009BD8C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8009BD90: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x8009BD94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009BD98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009BD9C: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8009BDA0: nop

    // 0x8009BDA4: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8009BDA8: nop

    // 0x8009BDAC: bc1f        L_8009BDD0
    if (!c1cs) {
        // 0x8009BDB0: nop
    
            goto L_8009BDD0;
    }
    // 0x8009BDB0: nop

    // 0x8009BDB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009BDB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009BDBC: nop

    // 0x8009BDC0: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8009BDC4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8009BDC8: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x8009BDCC: sb          $zero, 0x132($a0)
    MEM_B(0X132, ctx->r4) = 0;
L_8009BDD0:
    // 0x8009BDD0: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8009BDD4: nop

    // 0x8009BDD8: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x8009BDDC: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    // 0x8009BDE0: b           L_8009BDE8
    // 0x8009BDE4: nop

        goto L_8009BDE8;
    // 0x8009BDE4: nop

L_8009BDE8:
    // 0x8009BDE8: jr          $ra
    // 0x8009BDEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8009BDEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A17E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A17E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A17EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A17F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A17F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A17F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A17FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1800: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1804: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1808: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A180C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1810: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A1814: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A1818: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A181C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A1820: nop

    // 0x800A1824: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A1828: nop

    // 0x800A182C: bne         $t1, $zero, L_800A18C0
    if (ctx->r9 != 0) {
        // 0x800A1830: nop
    
            goto L_800A18C0;
    }
    // 0x800A1830: nop

    // 0x800A1834: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A1838: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A183C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A1840: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A1844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1848: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A184C: nop

    // 0x800A1850: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A1854: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A1858: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A185C: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800A1860: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A1864: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1868: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A186C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1870: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A1874: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1878: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A187C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800A1880: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800A1884: jal         0x80015538
    // 0x800A1888: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A1888: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x800A188C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A1890: nop

    // 0x800A1894: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A1898: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A189C: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x800A18A0: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800A18A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A18A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A18AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A18B0: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x800A18B4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A18B8: jal         0x80017664
    // 0x800A18BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_1;
    // 0x800A18BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800A18C0:
    // 0x800A18C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A18C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A18C8: jal         0x80029C40
    // 0x800A18CC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A18CC: nop

    after_2:
    // 0x800A18D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A18D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A18D8: jal         0x80029D04
    // 0x800A18DC: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A18DC: nop

    after_3:
    // 0x800A18E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A18E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A18E8: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800A18EC: nop

    // 0x800A18F0: bne         $t2, $at, L_800A1960
    if (ctx->r10 != ctx->r1) {
        // 0x800A18F4: nop
    
            goto L_800A1960;
    }
    // 0x800A18F4: nop

    // 0x800A18F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A18FC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x800A1900: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800A1904: lwc1        $f14, 0x3C($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A1908: jal         0x8002A800
    // 0x800A190C: nop

    func_8002A800(rdram, ctx);
        goto after_4;
    // 0x800A190C: nop

    after_4:
    // 0x800A1910: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800A1914: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x800A1918: nop

    // 0x800A191C: beq         $t4, $zero, L_800A1954
    if (ctx->r12 == 0) {
        // 0x800A1920: nop
    
            goto L_800A1954;
    }
    // 0x800A1920: nop

    // 0x800A1924: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800A1928: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A192C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1930: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A1934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1938: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800A193C: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800A1940: jal         0x80015538
    // 0x800A1944: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800A1944: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x800A1948: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A194C: b           L_800A1960
    // 0x800A1950: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
        goto L_800A1960;
    // 0x800A1950: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_800A1954:
    // 0x800A1954: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A1958: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800A195C: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
L_800A1960:
    // 0x800A1960: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A1964: nop

    // 0x800A1968: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A196C: nop

    // 0x800A1970: addiu       $t3, $t2, -0x8
    ctx->r11 = ADD32(ctx->r10, -0X8);
    // 0x800A1974: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800A1978: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A197C: nop

    // 0x800A1980: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A1984: nop

    // 0x800A1988: bgtz        $t5, L_800A19C0
    if (SIGNED(ctx->r13) > 0) {
        // 0x800A198C: nop
    
            goto L_800A19C0;
    }
    // 0x800A198C: nop

    // 0x800A1990: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A1994: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A1998: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A199C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A19A0: nop

    // 0x800A19A4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800A19A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A19AC: nop

    // 0x800A19B0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800A19B4: nop

    // 0x800A19B8: negu        $t2, $t0
    ctx->r10 = SUB32(0, ctx->r8);
    // 0x800A19BC: sh          $t2, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r10;
L_800A19C0:
    // 0x800A19C0: jal         0x800A1DAC
    // 0x800A19C4: nop

    func_800A1DAC(rdram, ctx);
        goto after_6;
    // 0x800A19C4: nop

    after_6:
    // 0x800A19C8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800A19CC: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x800A19D0: nop

    // 0x800A19D4: bne         $t3, $zero, L_800A19F4
    if (ctx->r11 != 0) {
        // 0x800A19D8: nop
    
            goto L_800A19F4;
    }
    // 0x800A19D8: nop

    // 0x800A19DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A19E0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800A19E4: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800A19E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A19EC: nop

    // 0x800A19F0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A19F4:
    // 0x800A19F4: b           L_800A19FC
    // 0x800A19F8: nop

        goto L_800A19FC;
    // 0x800A19F8: nop

L_800A19FC:
    // 0x800A19FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A1A04: jr          $ra
    // 0x800A1A08: nop

    return;
    // 0x800A1A08: nop

;}
RECOMP_FUNC void func_800880E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800880E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800880E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880EC: sb          $t6, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r14;
    // 0x800880F0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800880F4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800880F8: sb          $t7, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r15;
    // 0x800880FC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80088100: lb          $t8, 0x5245($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5245);
    // 0x80088104: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088108: sb          $t8, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r24;
    // 0x8008810C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088110: sb          $zero, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = 0;
    // 0x80088114: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088118: sb          $zero, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = 0;
    // 0x8008811C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088120: sb          $zero, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = 0;
    // 0x80088124: jr          $ra
    // 0x80088128: nop

    return;
    // 0x80088128: nop

    // 0x8008812C: jr          $ra
    // 0x80088130: nop

    return;
    // 0x80088130: nop

;}
RECOMP_FUNC void func_800DA264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA264: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA268: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800DA26C: nop

    // 0x800DA270: bne         $t6, $zero, L_800DA2F4
    if (ctx->r14 != 0) {
        // 0x800DA274: nop
    
            goto L_800DA2F4;
    }
    // 0x800DA274: nop

    // 0x800DA278: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800DA27C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800DA280: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA284: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800DA288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800DA28C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800DA290: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800DA294: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800DA298: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800DA29C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800DA2A0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800DA2A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DA2A8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800DA2AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA2B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800DA2B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800DA2B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800DA2BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800DA2C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800DA2C4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800DA2C8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800DA2CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800DA2D0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800DA2D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800DA2D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800DA2DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800DA2E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800DA2E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800DA2E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800DA2EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800DA2F0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800DA2F4:
    // 0x800DA2F4: jr          $ra
    // 0x800DA2F8: nop

    return;
    // 0x800DA2F8: nop

    // 0x800DA2FC: jr          $ra
    // 0x800DA300: nop

    return;
    // 0x800DA300: nop

;}
RECOMP_FUNC void func_800D87A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D87A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D87AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D87B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D87B4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D87B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D87BC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D87C0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D87C4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D87C8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D87CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D87D0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D87D4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D87D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D87DC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D87E0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D87E4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D87E8: addiu       $a1, $a1, 0x4258
    ctx->r5 = ADD32(ctx->r5, 0X4258);
    // 0x800D87EC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D87F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D87F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D87F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D87FC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D8800: jal         0x80027464
    // 0x800D8804: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D8804: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D8808: b           L_800D8810
    // 0x800D880C: nop

        goto L_800D8810;
    // 0x800D880C: nop

L_800D8810:
    // 0x800D8810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D8818: jr          $ra
    // 0x800D881C: nop

    return;
    // 0x800D881C: nop

;}
RECOMP_FUNC void func_800E3214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3214: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E3218: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E321C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3220: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3224: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3228: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E322C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3230: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3238: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E323C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3240: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3244: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E3248: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E324C: nop

    // 0x800E3250: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E3254: nop

    // 0x800E3258: bne         $t1, $zero, L_800E32C8
    if (ctx->r9 != 0) {
        // 0x800E325C: nop
    
            goto L_800E32C8;
    }
    // 0x800E325C: nop

    // 0x800E3260: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3264: nop

    // 0x800E3268: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E326C: nop

    // 0x800E3270: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E3274: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E3278: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E327C: nop

    // 0x800E3280: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800E3284: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800E3288: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E328C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3290: nop

    // 0x800E3294: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E3298: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E329C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E32A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E32A4: jal         0x80029EF8
    // 0x800E32A8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E32A8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x800E32AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E32B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E32B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E32B8: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800E32BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800E32C0: jal         0x800175F0
    // 0x800E32C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800E32C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800E32C8:
    // 0x800E32C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E32CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E32D0: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800E32D4: nop

    // 0x800E32D8: bne         $t8, $at, L_800E345C
    if (ctx->r24 != ctx->r1) {
        // 0x800E32DC: nop
    
            goto L_800E345C;
    }
    // 0x800E32DC: nop

    // 0x800E32E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E32E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E32E8: jal         0x80028FA0
    // 0x800E32EC: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800E32EC: nop

    after_2:
    // 0x800E32F0: beq         $v0, $zero, L_800E3308
    if (ctx->r2 == 0) {
        // 0x800E32F4: nop
    
            goto L_800E3308;
    }
    // 0x800E32F4: nop

    // 0x800E32F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E32FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3300: jal         0x8002B114
    // 0x800E3304: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800E3304: nop

    after_3:
L_800E3308:
    // 0x800E3308: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E330C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E3310: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800E3314: nop

    // 0x800E3318: beq         $t0, $at, L_800E345C
    if (ctx->r8 == ctx->r1) {
        // 0x800E331C: nop
    
            goto L_800E345C;
    }
    // 0x800E331C: nop

    // 0x800E3320: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3324: nop

    // 0x800E3328: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x800E332C: nop

    // 0x800E3330: slti        $at, $t3, 0x3C
    ctx->r1 = SIGNED(ctx->r11) < 0X3C ? 1 : 0;
    // 0x800E3334: beq         $at, $zero, L_800E3450
    if (ctx->r1 == 0) {
        // 0x800E3338: nop
    
            goto L_800E3450;
    }
    // 0x800E3338: nop

    // 0x800E333C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3340: nop

    // 0x800E3344: lh          $t2, 0xB0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB0);
    // 0x800E3348: nop

    // 0x800E334C: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x800E3350: sh          $t5, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r13;
    // 0x800E3354: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3358: nop

    // 0x800E335C: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800E3360: nop

    // 0x800E3364: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x800E3368: bne         $at, $zero, L_800E33A8
    if (ctx->r1 != 0) {
        // 0x800E336C: nop
    
            goto L_800E33A8;
    }
    // 0x800E336C: nop

    // 0x800E3370: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E3374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E337C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E3380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E3384: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E3388: jal         0x80029F58
    // 0x800E338C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800E338C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800E3390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3394: bne         $v0, $at, L_800E33A8
    if (ctx->r2 != ctx->r1) {
        // 0x800E3398: nop
    
            goto L_800E33A8;
    }
    // 0x800E3398: nop

    // 0x800E339C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E33A0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E33A4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800E33A8:
    // 0x800E33A8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E33AC: nop

    // 0x800E33B0: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800E33B4: nop

    // 0x800E33B8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800E33BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E33C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E33C4: nop

    // 0x800E33C8: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
    // 0x800E33CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E33D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E33D4: jal         0x80029C40
    // 0x800E33D8: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E33D8: nop

    after_5:
    // 0x800E33DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E33E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E33E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E33E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E33EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800E33F0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E33F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E33F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E33FC: jal         0x80029018
    // 0x800E3400: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E3400: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E3404: beq         $v0, $zero, L_800E3418
    if (ctx->r2 == 0) {
        // 0x800E3408: nop
    
            goto L_800E3418;
    }
    // 0x800E3408: nop

    // 0x800E340C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3410: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E3414: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
L_800E3418:
    // 0x800E3418: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800E341C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3420: nop

    // 0x800E3424: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x800E3428: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E342C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E3430: lwc1        $f6, 0x44($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800E3434: lwc1        $f11, 0x5460($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5460);
    // 0x800E3438: lwc1        $f10, 0x5464($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5464);
    // 0x800E343C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800E3440: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800E3444: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800E3448: b           L_800E345C
    // 0x800E344C: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
        goto L_800E345C;
    // 0x800E344C: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_800E3450:
    // 0x800E3450: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E3454: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E3458: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800E345C:
    // 0x800E345C: b           L_800E3464
    // 0x800E3460: nop

        goto L_800E3464;
    // 0x800E3460: nop

L_800E3464:
    // 0x800E3464: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3468: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E346C: jr          $ra
    // 0x800E3470: nop

    return;
    // 0x800E3470: nop

;}
RECOMP_FUNC void func_8008BA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BA3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008BA40: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x8008BA44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA48: sh          $t6, 0x4FA0($at)
    MEM_H(0X4FA0, ctx->r1) = ctx->r14;
    // 0x8008BA4C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008BA50: lb          $t7, -0x1ECC($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1ECC);
    // 0x8008BA54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA58: sh          $t7, 0x4FA2($at)
    MEM_H(0X4FA2, ctx->r1) = ctx->r15;
    // 0x8008BA5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BA60: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8008BA64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA68: swc1        $f4, 0x4F78($at)
    MEM_W(0X4F78, ctx->r1) = ctx->f4.u32l;
    // 0x8008BA6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BA70: lwc1        $f6, -0x1EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8008BA74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA78: swc1        $f6, 0x4F7C($at)
    MEM_W(0X4F7C, ctx->r1) = ctx->f6.u32l;
    // 0x8008BA7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BA80: lwc1        $f8, -0x1EB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8008BA84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA88: swc1        $f8, 0x4F80($at)
    MEM_W(0X4F80, ctx->r1) = ctx->f8.u32l;
    // 0x8008BA8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BA90: lwc1        $f10, -0x1EA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8008BA94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA98: swc1        $f10, 0x4F84($at)
    MEM_W(0X4F84, ctx->r1) = ctx->f10.u32l;
    // 0x8008BA9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAA0: lwc1        $f16, -0x1EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8008BAA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAA8: swc1        $f16, 0x4F88($at)
    MEM_W(0X4F88, ctx->r1) = ctx->f16.u32l;
    // 0x8008BAAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAB0: lwc1        $f18, -0x1EA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EA0);
    // 0x8008BAB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAB8: swc1        $f18, 0x4F8C($at)
    MEM_W(0X4F8C, ctx->r1) = ctx->f18.u32l;
    // 0x8008BABC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAC0: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x8008BAC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAC8: swc1        $f4, 0x4F9C($at)
    MEM_W(0X4F9C, ctx->r1) = ctx->f4.u32l;
    // 0x8008BACC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAD0: lwc1        $f6, -0x1EB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x8008BAD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAD8: swc1        $f6, 0x4F90($at)
    MEM_W(0X4F90, ctx->r1) = ctx->f6.u32l;
    // 0x8008BADC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAE0: lwc1        $f8, -0x1EB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB0);
    // 0x8008BAE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAE8: swc1        $f8, 0x4F94($at)
    MEM_W(0X4F94, ctx->r1) = ctx->f8.u32l;
    // 0x8008BAEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008BAF0: lwc1        $f10, -0x1EAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x8008BAF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BAF8: swc1        $f10, 0x4F98($at)
    MEM_W(0X4F98, ctx->r1) = ctx->f10.u32l;
    // 0x8008BAFC: jr          $ra
    // 0x8008BB00: nop

    return;
    // 0x8008BB00: nop

    // 0x8008BB04: jr          $ra
    // 0x8008BB08: nop

    return;
    // 0x8008BB08: nop

;}
RECOMP_FUNC void func_800B768C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B768C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B7690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B7694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B7698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B769C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B76A0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800B76A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B76A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B76AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B76B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B76B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B76B8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800B76BC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800B76C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B76C4: beq         $s0, $at, L_800B76E0
    if (ctx->r16 == ctx->r1) {
        // 0x800B76C8: nop
    
            goto L_800B76E0;
    }
    // 0x800B76C8: nop

    // 0x800B76CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B76D0: beq         $s0, $at, L_800B76F0
    if (ctx->r16 == ctx->r1) {
        // 0x800B76D4: nop
    
            goto L_800B76F0;
    }
    // 0x800B76D4: nop

    // 0x800B76D8: b           L_800B7700
    // 0x800B76DC: nop

        goto L_800B7700;
    // 0x800B76DC: nop

L_800B76E0:
    // 0x800B76E0: jal         0x800B73FC
    // 0x800B76E4: nop

    func_800B73FC(rdram, ctx);
        goto after_0;
    // 0x800B76E4: nop

    after_0:
    // 0x800B76E8: b           L_800B7708
    // 0x800B76EC: nop

        goto L_800B7708;
    // 0x800B76EC: nop

L_800B76F0:
    // 0x800B76F0: jal         0x800B765C
    // 0x800B76F4: nop

    func_800B765C(rdram, ctx);
        goto after_1;
    // 0x800B76F4: nop

    after_1:
    // 0x800B76F8: b           L_800B7708
    // 0x800B76FC: nop

        goto L_800B7708;
    // 0x800B76FC: nop

L_800B7700:
    // 0x800B7700: b           L_800B7708
    // 0x800B7704: nop

        goto L_800B7708;
    // 0x800B7704: nop

L_800B7708:
    // 0x800B7708: b           L_800B7710
    // 0x800B770C: nop

        goto L_800B7710;
    // 0x800B770C: nop

L_800B7710:
    // 0x800B7710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7714: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B7718: jr          $ra
    // 0x800B771C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B771C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80080C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080C14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080C18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080C1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080C20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080C24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080C28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080C2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080C30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080C34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080C38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080C3C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080C40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80080C44: nop

    // 0x80080C48: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80080C4C: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80080C50: nop

    // 0x80080C54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80080C58: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80080C5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80080C60: nop

    // 0x80080C64: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80080C68: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80080C6C: nop

    // 0x80080C70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80080C74: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x80080C78: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80080C7C: nop

    // 0x80080C80: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80080C84: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80080C88: nop

    // 0x80080C8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80080C90: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
    // 0x80080C94: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80080C98: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080C9C: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80080CA0: lwc1        $f19, -0x34C8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X34C8);
    // 0x80080CA4: lwc1        $f18, -0x34C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X34C4);
    // 0x80080CA8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80080CAC: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80080CB0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80080CB4: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x80080CB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80080CBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80080CC0: lwc1        $f8, 0x28($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80080CC4: nop

    // 0x80080CC8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80080CCC: nop

    // 0x80080CD0: bc1f        L_80080CE8
    if (!c1cs) {
        // 0x80080CD4: nop
    
            goto L_80080CE8;
    }
    // 0x80080CD4: nop

    // 0x80080CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080CE0: jal         0x8001A928
    // 0x80080CE4: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80080CE4: nop

    after_0:
L_80080CE8:
    // 0x80080CE8: b           L_80080CF0
    // 0x80080CEC: nop

        goto L_80080CF0;
    // 0x80080CEC: nop

L_80080CF0:
    // 0x80080CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080CF8: jr          $ra
    // 0x80080CFC: nop

    return;
    // 0x80080CFC: nop

;}
RECOMP_FUNC void func_8006C18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C18C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006C190: lh          $t6, 0x4C22($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4C22);
    // 0x8006C194: nop

    // 0x8006C198: beq         $t6, $zero, L_8006C1CC
    if (ctx->r14 == 0) {
        // 0x8006C19C: nop
    
            goto L_8006C1CC;
    }
    // 0x8006C19C: nop

    // 0x8006C1A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006C1A4: lb          $t7, 0x75EE($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X75EE);
    // 0x8006C1A8: nop

    // 0x8006C1AC: bne         $t7, $zero, L_8006C1CC
    if (ctx->r15 != 0) {
        // 0x8006C1B0: nop
    
            goto L_8006C1CC;
    }
    // 0x8006C1B0: nop

    // 0x8006C1B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006C1B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C1BC: sb          $t8, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r24;
    // 0x8006C1C0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8006C1C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006C1C8: sb          $t9, 0x48B2($at)
    MEM_B(0X48B2, ctx->r1) = ctx->r25;
L_8006C1CC:
    // 0x8006C1CC: jr          $ra
    // 0x8006C1D0: nop

    return;
    // 0x8006C1D0: nop

    // 0x8006C1D4: jr          $ra
    // 0x8006C1D8: nop

    return;
    // 0x8006C1D8: nop

;}
RECOMP_FUNC void func_800A3E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3E28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A3E2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A3E30: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A3E34: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800A3E38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A3E3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A3E40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A3E44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A3E48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3E4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3E50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3E54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3E58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A3E5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3E60: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A3E64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3E68: nop

    // 0x800A3E6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A3E70: nop

    // 0x800A3E74: bne         $t1, $zero, L_800A3F00
    if (ctx->r9 != 0) {
        // 0x800A3E78: nop
    
            goto L_800A3F00;
    }
    // 0x800A3E78: nop

    // 0x800A3E7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A3E80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A3E84: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A3E88: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A3E8C: nop

    // 0x800A3E90: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800A3E94: nop

    // 0x800A3E98: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800A3E9C: nop

    // 0x800A3EA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3EA4: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x800A3EA8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A3EAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A3EB0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A3EB4: nop

    // 0x800A3EB8: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x800A3EBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A3EC0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A3EC4: nop

    // 0x800A3EC8: swc1        $f10, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f10.u32l;
    // 0x800A3ECC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A3ED0: addiu       $t8, $zero, 0x168
    ctx->r24 = ADD32(0, 0X168);
    // 0x800A3ED4: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800A3ED8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A3EDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A3EE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3EE4: nop

    // 0x800A3EE8: swc1        $f16, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f16.u32l;
    // 0x800A3EEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A3EF0: nop

    // 0x800A3EF4: lwc1        $f18, 0x54($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X54);
    // 0x800A3EF8: nop

    // 0x800A3EFC: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_800A3F00:
    // 0x800A3F00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A3F04: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800A3F08: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800A3F0C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A3F10: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800A3F14: jal         0x80015538
    // 0x800A3F18: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A3F18: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x800A3F1C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800A3F20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A3F24: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800A3F28: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A3F2C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A3F30: nop

    // 0x800A3F34: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A3F38: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800A3F3C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800A3F40: sh          $t4, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r12;
    // 0x800A3F44: nop

    // 0x800A3F48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A3F4C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A3F50: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800A3F54: lwc1        $f17, 0x4980($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4980);
    // 0x800A3F58: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800A3F5C: lwc1        $f16, 0x4984($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4984);
    // 0x800A3F60: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800A3F64: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800A3F68: jal         0x80034970
    // 0x800A3F6C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800A3F6C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x800A3F70: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A3F74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3F78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A3F7C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800A3F80: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
    // 0x800A3F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3F8C: jal         0x80029C40
    // 0x800A3F90: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A3F90: nop

    after_2:
    // 0x800A3F94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3F98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3F9C: jal         0x80029D04
    // 0x800A3FA0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A3FA0: nop

    after_3:
    // 0x800A3FA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3FA8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A3FAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A3FB0: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800A3FB4: nop

    // 0x800A3FB8: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x800A3FBC: nop

    // 0x800A3FC0: bc1f        L_800A3FD8
    if (!c1cs) {
        // 0x800A3FC4: nop
    
            goto L_800A3FD8;
    }
    // 0x800A3FC4: nop

    // 0x800A3FC8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A3FCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A3FD0: b           L_800A4028
    // 0x800A3FD4: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
        goto L_800A4028;
    // 0x800A3FD4: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
L_800A3FD8:
    // 0x800A3FD8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A3FDC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A3FE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3FE4: lwc1        $f18, 0x28($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800A3FE8: nop

    // 0x800A3FEC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800A3FF0: nop

    // 0x800A3FF4: bc1f        L_800A400C
    if (!c1cs) {
        // 0x800A3FF8: nop
    
            goto L_800A400C;
    }
    // 0x800A3FF8: nop

    // 0x800A3FFC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A4000: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A4004: b           L_800A401C
    // 0x800A4008: nop

        goto L_800A401C;
    // 0x800A4008: nop

L_800A400C:
    // 0x800A400C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A4010: nop

    // 0x800A4014: lwc1        $f20, 0x28($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800A4018: nop

L_800A401C:
    // 0x800A401C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A4020: nop

    // 0x800A4024: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
L_800A4028:
    // 0x800A4028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A402C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4030: jal         0x8002A46C
    // 0x800A4034: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x800A4034: nop

    after_4:
    // 0x800A4038: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A403C: nop

    // 0x800A4040: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800A4044: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A4048: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x800A404C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A4050: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800A4054: nop

    // 0x800A4058: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800A405C: nop

    // 0x800A4060: bc1f        L_800A4074
    if (!c1cs) {
        // 0x800A4064: nop
    
            goto L_800A4074;
    }
    // 0x800A4064: nop

    // 0x800A4068: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A406C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A4070: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
L_800A4074:
    // 0x800A4074: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A4078: nop

    // 0x800A407C: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800A4080: lwc1        $f16, 0x54($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X54);
    // 0x800A4084: nop

    // 0x800A4088: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800A408C: nop

    // 0x800A4090: bc1f        L_800A415C
    if (!c1cs) {
        // 0x800A4094: nop
    
            goto L_800A415C;
    }
    // 0x800A4094: nop

    // 0x800A4098: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800A409C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A40A0: bne         $t9, $at, L_800A415C
    if (ctx->r25 != ctx->r1) {
        // 0x800A40A4: nop
    
            goto L_800A415C;
    }
    // 0x800A40A4: nop

    // 0x800A40A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A40AC: nop

    // 0x800A40B0: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800A40B4: nop

    // 0x800A40B8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800A40BC: sh          $t2, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r10;
    // 0x800A40C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A40C4: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800A40C8: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x800A40CC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A40D0: nop

    // 0x800A40D4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800A40D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A40DC: nop

    // 0x800A40E0: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800A40E4: nop

    // 0x800A40E8: bgtz        $t7, L_800A415C
    if (SIGNED(ctx->r15) > 0) {
        // 0x800A40EC: nop
    
            goto L_800A415C;
    }
    // 0x800A40EC: nop

    // 0x800A40F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A40F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A40F8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800A40FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A4100: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A4104: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800A4108: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A410C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800A4110: jal         0x80015538
    // 0x800A4114: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800A4114: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_5:
    // 0x800A4118: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A411C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A4120: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A4124: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A4128: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A412C: nop

    // 0x800A4130: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A4134: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x800A4138: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A413C: sh          $t3, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r11;
    // 0x800A4140: nop

    // 0x800A4144: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A4148: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800A414C: sh          $t4, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r12;
    // 0x800A4150: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A4154: nop

    // 0x800A4158: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800A415C:
    // 0x800A415C: b           L_800A4164
    // 0x800A4160: nop

        goto L_800A4164;
    // 0x800A4160: nop

L_800A4164:
    // 0x800A4164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4168: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800A416C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800A4170: jr          $ra
    // 0x800A4174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A4174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007F580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007F584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F588: addiu       $t6, $zero, 0x8F
    ctx->r14 = ADD32(0, 0X8F);
    // 0x8007F58C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007F590:
    // 0x8007F590: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007F594: jal         0x8001A928
    // 0x8007F598: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007F598: nop

    after_0:
    // 0x8007F59C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007F5A0: nop

    // 0x8007F5A4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007F5A8: slti        $at, $t8, 0xCF
    ctx->r1 = SIGNED(ctx->r24) < 0XCF ? 1 : 0;
    // 0x8007F5AC: bne         $at, $zero, L_8007F590
    if (ctx->r1 != 0) {
        // 0x8007F5B0: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8007F590;
    }
    // 0x8007F5B0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8007F5B4: b           L_8007F5BC
    // 0x8007F5B8: nop

        goto L_8007F5BC;
    // 0x8007F5B8: nop

L_8007F5BC:
    // 0x8007F5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F5C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007F5C4: jr          $ra
    // 0x8007F5C8: nop

    return;
    // 0x8007F5C8: nop

;}
RECOMP_FUNC void func_8007DC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DC0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007DC10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DC14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007DC18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007DC1C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007DC20: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007DC24: jal         0x8007944C
    // 0x8007DC28: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007DC28: nop

    after_0:
    // 0x8007DC2C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007DC30: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DC34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007DC38: beq         $t6, $at, L_8007DD48
    if (ctx->r14 == ctx->r1) {
        // 0x8007DC3C: nop
    
            goto L_8007DD48;
    }
    // 0x8007DC3C: nop

    // 0x8007DC40: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DC44: jal         0x8007D944
    // 0x8007DC48: nop

    func_8007D944(rdram, ctx);
        goto after_1;
    // 0x8007DC48: nop

    after_1:
    // 0x8007DC4C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DC50: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007DC54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007DC58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007DC5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007DC60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007DC64: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007DC68: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007DC6C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007DC70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007DC74: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007DC78: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x8007DC7C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007DC80: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007DC84: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007DC88: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007DC8C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8007DC90: nop

    // 0x8007DC94: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x8007DC98: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007DC9C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007DCA0: nop

    // 0x8007DCA4: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x8007DCA8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007DCAC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007DCB0: nop

    // 0x8007DCB4: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8007DCB8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007DCBC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007DCC0: nop

    // 0x8007DCC4: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x8007DCC8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007DCCC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007DCD0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8007DCD4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8007DCD8: lwc1        $f16, -0x36B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X36B0);
    // 0x8007DCDC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007DCE0: nop

    // 0x8007DCE4: swc1        $f16, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f16.u32l;
    // 0x8007DCE8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007DCEC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007DCF0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007DCF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007DCF8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007DCFC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007DD00: lwc1        $f14, -0x36B4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X36B4);
    // 0x8007DD04: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8007DD08: jal         0x80015538
    // 0x8007DD0C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8007DD0C: nop

    after_2:
    // 0x8007DD10: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007DD14: nop

    // 0x8007DD18: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x8007DD1C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8007DD20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007DD24: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007DD28: nop

    // 0x8007DD2C: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
    // 0x8007DD30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DD34: jal         0x800799A8
    // 0x8007DD38: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007DD38: nop

    after_3:
    // 0x8007DD3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DD40: jal         0x80079AD8
    // 0x8007DD44: nop

    func_80079AD8(rdram, ctx);
        goto after_4;
    // 0x8007DD44: nop

    after_4:
L_8007DD48:
    // 0x8007DD48: b           L_8007DD50
    // 0x8007DD4C: nop

        goto L_8007DD50;
    // 0x8007DD4C: nop

L_8007DD50:
    // 0x8007DD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DD54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007DD58: jr          $ra
    // 0x8007DD5C: nop

    return;
    // 0x8007DD5C: nop

;}
RECOMP_FUNC void func_80092FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092FB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092FBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092FC0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092FC4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092FC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092FCC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092FD0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092FD4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092FD8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092FDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092FE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092FE4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092FE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092FEC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092FF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092FF4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092FF8: addiu       $a1, $a1, 0x17A4
    ctx->r5 = ADD32(ctx->r5, 0X17A4);
    // 0x80092FFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093000: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093008: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009300C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093010: jal         0x80027464
    // 0x80093014: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093014: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093018: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009301C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80093020: addiu       $t1, $t1, 0x31B4
    ctx->r9 = ADD32(ctx->r9, 0X31B4);
    // 0x80093024: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093028: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009302C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80093034: jal         0x8001C0EC
    // 0x80093038: addiu       $a3, $zero, 0x283
    ctx->r7 = ADD32(0, 0X283);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80093038: addiu       $a3, $zero, 0x283
    ctx->r7 = ADD32(0, 0X283);
    after_1:
    // 0x8009303C: b           L_80093044
    // 0x80093040: nop

        goto L_80093044;
    // 0x80093040: nop

L_80093044:
    // 0x80093044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093048: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009304C: jr          $ra
    // 0x80093050: nop

    return;
    // 0x80093050: nop

;}
