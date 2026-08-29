#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80093618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009361C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093620: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093624: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093628: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009362C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093630: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093634: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093638: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009363C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093640: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80093644: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093648: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009364C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093650: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093654: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093658: addiu       $a1, $a1, 0x1838
    ctx->r5 = ADD32(ctx->r5, 0X1838);
    // 0x8009365C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093660: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093664: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80093668: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009366C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093670: jal         0x80027464
    // 0x80093674: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093674: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093678: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009367C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80093680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80093684: beq         $t1, $at, L_800936FC
    if (ctx->r9 == ctx->r1) {
        // 0x80093688: nop
    
            goto L_800936FC;
    }
    // 0x80093688: nop

    // 0x8009368C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093690: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093694: jal         0x80027B34
    // 0x80093698: addiu       $a1, $a1, 0x1828
    ctx->r5 = ADD32(ctx->r5, 0X1828);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x80093698: addiu       $a1, $a1, 0x1828
    ctx->r5 = ADD32(ctx->r5, 0X1828);
    after_1:
    // 0x8009369C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800936A0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800936A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800936A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800936AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800936B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800936B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800936B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800936BC: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800936C0: nop

    // 0x800936C4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800936C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800936CC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800936D0: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x800936D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800936D8: jal         0x8001ABF4
    // 0x800936DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800936DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800936E0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800936E4: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x800936E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800936EC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800936F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800936F4: jal         0x8001ABF4
    // 0x800936F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800936F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800936FC:
    // 0x800936FC: b           L_80093704
    // 0x80093700: nop

        goto L_80093704;
    // 0x80093700: nop

L_80093704:
    // 0x80093704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009370C: jr          $ra
    // 0x80093710: nop

    return;
    // 0x80093710: nop

;}
RECOMP_FUNC void func_800DC6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC6D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800DC6D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DC6D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800DC6DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC6E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC6E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC6E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC6EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC6F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC6F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC6F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC6FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC700: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC704: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800DC708: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DC70C: nop

    // 0x800DC710: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DC714: nop

    // 0x800DC718: bne         $t1, $zero, L_800DC784
    if (ctx->r9 != 0) {
        // 0x800DC71C: nop
    
            goto L_800DC784;
    }
    // 0x800DC71C: nop

    // 0x800DC720: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DC724: nop

    // 0x800DC728: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DC72C: nop

    // 0x800DC730: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DC734: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DC738: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DC73C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DC740: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DC744: nop

    // 0x800DC748: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DC74C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800DC750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DC754: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DC758: nop

    // 0x800DC75C: swc1        $f6, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f6.u32l;
    // 0x800DC760: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC764: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800DC768: addiu       $t7, $t7, -0x7018
    ctx->r15 = ADD32(ctx->r15, -0X7018);
    // 0x800DC76C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC770: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800DC774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DC778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DC77C: jal         0x8001C0EC
    // 0x800DC780: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DC780: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
L_800DC784:
    // 0x800DC784: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC788: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC78C: jal         0x80028FA0
    // 0x800DC790: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800DC790: nop

    after_1:
    // 0x800DC794: beq         $v0, $zero, L_800DC7AC
    if (ctx->r2 == 0) {
        // 0x800DC798: nop
    
            goto L_800DC7AC;
    }
    // 0x800DC798: nop

    // 0x800DC79C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC7A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC7A4: jal         0x80029B60
    // 0x800DC7A8: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800DC7A8: nop

    after_2:
L_800DC7AC:
    // 0x800DC7AC: jal         0x80014E80
    // 0x800DC7B0: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800DC7B0: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    after_3:
    // 0x800DC7B4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800DC7B8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800DC7BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC7C0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800DC7C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC7C8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DC7CC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800DC7D0: jal         0x8002A8B4
    // 0x800DC7D4: nop

    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800DC7D4: nop

    after_4:
    // 0x800DC7D8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DC7DC: nop

    // 0x800DC7E0: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800DC7E4: nop

    // 0x800DC7E8: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800DC7EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DC7F0: nop

    // 0x800DC7F4: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800DC7F8: nop

    // 0x800DC7FC: bne         $t1, $zero, L_800DC87C
    if (ctx->r9 != 0) {
        // 0x800DC800: nop
    
            goto L_800DC87C;
    }
    // 0x800DC800: nop

    // 0x800DC804: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DC808: nop

    // 0x800DC80C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800DC810: nop

    // 0x800DC814: slti        $at, $t4, 0x1E
    ctx->r1 = SIGNED(ctx->r12) < 0X1E ? 1 : 0;
    // 0x800DC818: beq         $at, $zero, L_800DC850
    if (ctx->r1 == 0) {
        // 0x800DC81C: nop
    
            goto L_800DC850;
    }
    // 0x800DC81C: nop

    // 0x800DC820: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DC824: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800DC828: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DC82C: nop

    // 0x800DC830: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x800DC834: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DC838: nop

    // 0x800DC83C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800DC840: nop

    // 0x800DC844: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800DC848: b           L_800DC874
    // 0x800DC84C: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
        goto L_800DC874;
    // 0x800DC84C: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800DC850:
    // 0x800DC850: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800DC854: nop

    // 0x800DC858: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800DC85C: nop

    // 0x800DC860: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800DC864: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x800DC868: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DC86C: nop

    // 0x800DC870: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
L_800DC874:
    // 0x800DC874: b           L_800DC8E0
    // 0x800DC878: nop

        goto L_800DC8E0;
    // 0x800DC878: nop

L_800DC87C:
    // 0x800DC87C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DC880: nop

    // 0x800DC884: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800DC888: nop

    // 0x800DC88C: slti        $at, $t4, 0x1E
    ctx->r1 = SIGNED(ctx->r12) < 0X1E ? 1 : 0;
    // 0x800DC890: beq         $at, $zero, L_800DC8C8
    if (ctx->r1 == 0) {
        // 0x800DC894: nop
    
            goto L_800DC8C8;
    }
    // 0x800DC894: nop

    // 0x800DC898: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800DC89C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800DC8A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DC8A4: nop

    // 0x800DC8A8: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x800DC8AC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DC8B0: nop

    // 0x800DC8B4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800DC8B8: nop

    // 0x800DC8BC: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x800DC8C0: b           L_800DC8E0
    // 0x800DC8C4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
        goto L_800DC8E0;
    // 0x800DC8C4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800DC8C8:
    // 0x800DC8C8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DC8CC: nop

    // 0x800DC8D0: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x800DC8D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DC8D8: nop

    // 0x800DC8DC: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
L_800DC8E0:
    // 0x800DC8E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC8E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC8E8: jal         0x80029C40
    // 0x800DC8EC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800DC8EC: nop

    after_5:
    // 0x800DC8F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DC8F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DC8F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC8FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC900: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800DC904: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800DC908: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DC90C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800DC910: jal         0x80029018
    // 0x800DC914: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800DC914: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800DC918: beq         $v0, $zero, L_800DC93C
    if (ctx->r2 == 0) {
        // 0x800DC91C: nop
    
            goto L_800DC93C;
    }
    // 0x800DC91C: nop

    // 0x800DC920: jal         0x800297DC
    // 0x800DC924: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800DC924: nop

    after_7:
    // 0x800DC928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC92C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC930: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DC934: jal         0x80029824
    // 0x800DC938: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800DC938: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800DC93C:
    // 0x800DC93C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC944: jal         0x8002A1FC
    // 0x800DC948: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800DC948: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_9:
    // 0x800DC94C: beq         $v0, $zero, L_800DC96C
    if (ctx->r2 == 0) {
        // 0x800DC950: nop
    
            goto L_800DC96C;
    }
    // 0x800DC950: nop

    // 0x800DC954: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DC958: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800DC95C: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x800DC960: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DC964: nop

    // 0x800DC968: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800DC96C:
    // 0x800DC96C: b           L_800DC974
    // 0x800DC970: nop

        goto L_800DC974;
    // 0x800DC970: nop

L_800DC974:
    // 0x800DC974: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DC978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800DC97C: jr          $ra
    // 0x800DC980: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800DC980: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800B5368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5368: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B536C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B5370: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800B5374: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800B5378: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800B537C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800B5380: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B5384: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B5388: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800B538C: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x800B5390: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B5394: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B5398: addiu       $a1, $a1, 0x3A00
    ctx->r5 = ADD32(ctx->r5, 0X3A00);
    // 0x800B539C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B53A0: jal         0x80027464
    // 0x800B53A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B53A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800B53A8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x800B53AC: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x800B53B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B53B4: beq         $t7, $at, L_800B5580
    if (ctx->r15 == ctx->r1) {
        // 0x800B53B8: nop
    
            goto L_800B5580;
    }
    // 0x800B53B8: nop

    // 0x800B53BC: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800B53C0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800B53C4: jal         0x80026F10
    // 0x800B53C8: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800B53C8: nop

    after_1:
    // 0x800B53CC: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x800B53D0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800B53D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B53D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B53DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B53E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B53E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B53E8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800B53EC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800B53F0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800B53F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B53F8: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x800B53FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B5400: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B5404: jal         0x80015538
    // 0x800B5408: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800B5408: nop

    after_2:
    // 0x800B540C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800B5410: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B5414: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B5418: lwc1        $f17, 0x4BB8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4BB8);
    // 0x800B541C: lwc1        $f16, 0x4BBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BBC);
    // 0x800B5420: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800B5424: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800B5428: jal         0x80034970
    // 0x800B542C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x800B542C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x800B5430: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800B5434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B5438: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B543C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B5440: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x800B5444: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B5448: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800B544C: lwc1        $f17, 0x4BC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4BC0);
    // 0x800B5450: lwc1        $f16, 0x4BC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BC4);
    // 0x800B5454: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800B5458: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800B545C: jal         0x80036570
    // 0x800B5460: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x800B5460: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x800B5464: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x800B5468: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B546C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B5470: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800B5474: swc1        $f6, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f6.u32l;
    // 0x800B5478: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800B547C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B5480: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800B5484: lwc1        $f10, 0x24($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X24);
    // 0x800B5488: nop

    // 0x800B548C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B5490: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x800B5494: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800B5498: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B549C: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800B54A0: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800B54A4: nop

    // 0x800B54A8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B54AC: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x800B54B0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800B54B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800B54B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B54BC: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800B54C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B54C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B54C8: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x800B54CC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800B54D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B54D4: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x800B54D8: nop

    // 0x800B54DC: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
    // 0x800B54E0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800B54E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B54E8: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800B54EC: nop

    // 0x800B54F0: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x800B54F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B54F8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B54FC: nop

    // 0x800B5500: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x800B5504: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800B5508: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B550C: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B5510: nop

    // 0x800B5514: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x800B5518: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B551C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B5520: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B5524: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B5528: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x800B552C: sh          $t0, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r8;
    // 0x800B5530: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B5534: nop

    // 0x800B5538: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B553C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B5540: nop

    // 0x800B5544: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x800B5548: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800B554C: addiu       $t4, $t4, 0x7A98
    ctx->r12 = ADD32(ctx->r12, 0X7A98);
    // 0x800B5550: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B5554: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800B5558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B555C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B5560: jal         0x8001C0EC
    // 0x800B5564: addiu       $a3, $zero, 0xB8
    ctx->r7 = ADD32(0, 0XB8);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800B5564: addiu       $a3, $zero, 0xB8
    ctx->r7 = ADD32(0, 0XB8);
    after_5:
    // 0x800B5568: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B556C: jal         0x80029C40
    // 0x800B5570: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800B5570: nop

    after_6:
    // 0x800B5574: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B5578: jal         0x80029D04
    // 0x800B557C: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x800B557C: nop

    after_7:
L_800B5580:
    // 0x800B5580: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x800B5584: b           L_800B5594
    // 0x800B5588: nop

        goto L_800B5594;
    // 0x800B5588: nop

    // 0x800B558C: b           L_800B5594
    // 0x800B5590: nop

        goto L_800B5594;
    // 0x800B5590: nop

L_800B5594:
    // 0x800B5594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B5598: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B559C: jr          $ra
    // 0x800B55A0: nop

    return;
    // 0x800B55A0: nop

;}
RECOMP_FUNC void func_800B0E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0E8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B0E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B0E94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B0E98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B0E9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B0EA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0EA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0EA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B0EAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0EB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0EB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B0EB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B0EBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B0EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0EC8: jal         0x8001BB34
    // 0x800B0ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B0ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B0ED0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0ED4: nop

    // 0x800B0ED8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B0EDC: nop

    // 0x800B0EE0: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    // 0x800B0EE4: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x800B0EE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B0EEC: beq         $t2, $at, L_800B0FB4
    if (ctx->r10 == ctx->r1) {
        // 0x800B0EF0: nop
    
            goto L_800B0FB4;
    }
    // 0x800B0EF0: nop

    // 0x800B0EF4: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x800B0EF8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800B0EFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B0F00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B0F04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B0F08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B0F0C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B0F10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800B0F14: lh          $t5, 0x4254($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4254);
    // 0x800B0F18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B0F1C: beq         $t5, $at, L_800B0FB4
    if (ctx->r13 == ctx->r1) {
        // 0x800B0F20: nop
    
            goto L_800B0FB4;
    }
    // 0x800B0F20: nop

    // 0x800B0F24: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x800B0F28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B0F2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0F30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0F34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B0F38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0F3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0F40: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B0F44: lh          $t8, 0x4256($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4256);
    // 0x800B0F48: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800B0F4C: beq         $t8, $at, L_800B0F60
    if (ctx->r24 == ctx->r1) {
        // 0x800B0F50: nop
    
            goto L_800B0F60;
    }
    // 0x800B0F50: nop

    // 0x800B0F54: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800B0F58: bne         $t8, $at, L_800B0FB4
    if (ctx->r24 != ctx->r1) {
        // 0x800B0F5C: nop
    
            goto L_800B0FB4;
    }
    // 0x800B0F5C: nop

L_800B0F60:
    // 0x800B0F60: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0F64: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x800B0F68: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B0F6C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0F70: nop

    // 0x800B0F74: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800B0F78: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x800B0F7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0F80: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B0F84: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B0F88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B0F8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B0F90: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B0F94: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B0F98: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800B0F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0FA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0FA4: jal         0x800281A4
    // 0x800B0FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x800B0FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800B0FAC: b           L_800B1038
    // 0x800B0FB0: nop

        goto L_800B1038;
    // 0x800B0FB0: nop

L_800B0FB4:
    // 0x800B0FB4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800B0FB8: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x800B0FBC: nop

    // 0x800B0FC0: bne         $t4, $zero, L_800B0FD8
    if (ctx->r12 != 0) {
        // 0x800B0FC4: nop
    
            goto L_800B0FD8;
    }
    // 0x800B0FC4: nop

    // 0x800B0FC8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0FCC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800B0FD0: b           L_800B1024
    // 0x800B0FD4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800B1024;
    // 0x800B0FD4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800B0FD8:
    // 0x800B0FD8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B0FDC: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x800B0FE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B0FE4: bne         $t7, $at, L_800B0FFC
    if (ctx->r15 != ctx->r1) {
        // 0x800B0FE8: nop
    
            goto L_800B0FFC;
    }
    // 0x800B0FE8: nop

    // 0x800B0FEC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0FF0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800B0FF4: b           L_800B1024
    // 0x800B0FF8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
        goto L_800B1024;
    // 0x800B0FF8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800B0FFC:
    // 0x800B0FFC: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x800B1000: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B1004: bne         $t0, $at, L_800B101C
    if (ctx->r8 != ctx->r1) {
        // 0x800B1008: nop
    
            goto L_800B101C;
    }
    // 0x800B1008: nop

    // 0x800B100C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B1010: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800B1014: b           L_800B1024
    // 0x800B1018: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800B1024;
    // 0x800B1018: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800B101C:
    // 0x800B101C: b           L_800B1038
    // 0x800B1020: nop

        goto L_800B1038;
    // 0x800B1020: nop

L_800B1024:
    // 0x800B1024: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B1028: nop

    // 0x800B102C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800B1030: b           L_800B1038
    // 0x800B1034: nop

        goto L_800B1038;
    // 0x800B1034: nop

L_800B1038:
    // 0x800B1038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B103C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B1040: jr          $ra
    // 0x800B1044: nop

    return;
    // 0x800B1044: nop

;}
RECOMP_FUNC void func_8007D944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D944: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007D948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D94C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007D950: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007D954: jal         0x800794C4
    // 0x8007D958: nop

    func_800794C4(rdram, ctx);
        goto after_0;
    // 0x8007D958: nop

    after_0:
    // 0x8007D95C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007D960: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007D964: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007D968: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D96C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007D970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D974: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007D978: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007D97C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D980: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007D984: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007D988: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8007D98C: lw          $a3, 0x60($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X60);
    // 0x8007D990: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007D994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D998: jal         0x8001BD44
    // 0x8007D99C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007D99C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x8007D9A0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9A4: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x8007D9A8: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007D9AC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9B0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x8007D9B4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x8007D9B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9BC: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8007D9C0: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8007D9C4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9C8: nop

    // 0x8007D9CC: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x8007D9D0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007D9D8: sh          $t8, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r24;
    // 0x8007D9DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9E0: nop

    // 0x8007D9E4: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
    // 0x8007D9E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007D9EC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007D9F0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9F4: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007D9F8: nop

    // 0x8007D9FC: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x8007DA00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007DA04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007DA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007DA0C: jal         0x80019448
    // 0x8007DA10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8007DA10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8007DA14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007DA18: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007DA1C: addiu       $a3, $a3, 0x65E4
    ctx->r7 = ADD32(ctx->r7, 0X65E4);
    // 0x8007DA20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007DA24: jal         0x8001ABF4
    // 0x8007DA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007DA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8007DA2C: b           L_8007DA34
    // 0x8007DA30: nop

        goto L_8007DA34;
    // 0x8007DA30: nop

L_8007DA34:
    // 0x8007DA34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007DA3C: jr          $ra
    // 0x8007DA40: nop

    return;
    // 0x8007DA40: nop

;}
RECOMP_FUNC void func_8009071C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009071C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090724: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090728: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009072C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090730: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090734: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090738: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009073C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090740: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090744: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090748: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009074C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090750: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090754: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090758: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009075C: addiu       $a1, $a1, 0x142C
    ctx->r5 = ADD32(ctx->r5, 0X142C);
    // 0x80090760: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090764: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090768: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009076C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090770: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090774: jal         0x80027464
    // 0x80090778: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090778: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009077C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090780: b           L_80090788
    // 0x80090784: nop

        goto L_80090788;
    // 0x80090784: nop

L_80090788:
    // 0x80090788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009078C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090790: jr          $ra
    // 0x80090794: nop

    return;
    // 0x80090794: nop

;}
RECOMP_FUNC void func_800BCD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCD50: jr          $ra
    // 0x800BCD54: nop

    return;
    // 0x800BCD54: nop

    // 0x800BCD58: jr          $ra
    // 0x800BCD5C: nop

    return;
    // 0x800BCD5C: nop

;}
RECOMP_FUNC void func_800B6D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B6D40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B6D44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B6D48: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B6D4C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B6D50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B6D54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B6D58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B6D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B6D60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6D64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B6D68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6D6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B6D70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B6D74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B6D78: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B6D7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6D80: nop

    // 0x800B6D84: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B6D88: nop

    // 0x800B6D8C: bne         $t1, $zero, L_800B6DD8
    if (ctx->r9 != 0) {
        // 0x800B6D90: nop
    
            goto L_800B6DD8;
    }
    // 0x800B6D90: nop

    // 0x800B6D94: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6D98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B6D9C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B6DA0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800B6DA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6DA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6DAC: nop

    // 0x800B6DB0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B6DB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6DB8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6DBC: nop

    // 0x800B6DC0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B6DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6DCC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B6DD0: jal         0x80029EF8
    // 0x800B6DD4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800B6DD4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
L_800B6DD8:
    // 0x800B6DD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6DDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6DE0: jal         0x80029C40
    // 0x800B6DE4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B6DE4: nop

    after_1:
    // 0x800B6DE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B6DEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6DF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6DF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B6DF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B6DFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B6E00: jal         0x80029F58
    // 0x800B6E04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_2;
    // 0x800B6E04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800B6E08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B6E0C: bne         $v0, $at, L_800B6E8C
    if (ctx->r2 != ctx->r1) {
        // 0x800B6E10: nop
    
            goto L_800B6E8C;
    }
    // 0x800B6E10: nop

    // 0x800B6E14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B6E18: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E1C: nop

    // 0x800B6E20: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x800B6E24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B6E28: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E2C: nop

    // 0x800B6E30: swc1        $f16, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f16.u32l;
    // 0x800B6E34: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E38: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B6E3C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B6E40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E44: nop

    // 0x800B6E48: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800B6E4C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800B6E50: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x800B6E54: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800B6E58: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800B6E5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B6E60: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B6E64: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x800B6E68: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800B6E6C: bne         $t4, $at, L_800B6E8C
    if (ctx->r12 != ctx->r1) {
        // 0x800B6E70: nop
    
            goto L_800B6E8C;
    }
    // 0x800B6E70: nop

    // 0x800B6E74: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E78: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x800B6E7C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800B6E80: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E84: nop

    // 0x800B6E88: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800B6E8C:
    // 0x800B6E8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6E90: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6E94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B6E98: lwc1        $f18, 0x28($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800B6E9C: nop

    // 0x800B6EA0: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800B6EA4: nop

    // 0x800B6EA8: bc1f        L_800B6EC0
    if (!c1cs) {
        // 0x800B6EAC: nop
    
            goto L_800B6EC0;
    }
    // 0x800B6EAC: nop

    // 0x800B6EB0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800B6EB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B6EB8: b           L_800B6F10
    // 0x800B6EBC: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
        goto L_800B6F10;
    // 0x800B6EBC: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
L_800B6EC0:
    // 0x800B6EC0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6EC4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B6ECC: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800B6ED0: nop

    // 0x800B6ED4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800B6ED8: nop

    // 0x800B6EDC: bc1f        L_800B6EF4
    if (!c1cs) {
        // 0x800B6EE0: nop
    
            goto L_800B6EF4;
    }
    // 0x800B6EE0: nop

    // 0x800B6EE4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800B6EE8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800B6EEC: b           L_800B6F04
    // 0x800B6EF0: nop

        goto L_800B6F04;
    // 0x800B6EF0: nop

L_800B6EF4:
    // 0x800B6EF4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6EF8: nop

    // 0x800B6EFC: lwc1        $f20, 0x28($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800B6F00: nop

L_800B6F04:
    // 0x800B6F04: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B6F08: nop

    // 0x800B6F0C: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
L_800B6F10:
    // 0x800B6F10: b           L_800B6F18
    // 0x800B6F14: nop

        goto L_800B6F18;
    // 0x800B6F14: nop

L_800B6F18:
    // 0x800B6F18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B6F1C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B6F20: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B6F24: jr          $ra
    // 0x800B6F28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B6F28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80076458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007645C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076460: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80076464: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076468: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007646C: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x80076470: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80076474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076478: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x8007647C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80076480: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076484: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x80076488: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007648C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076490: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x80076494: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80076498: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007649C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800764A0: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x800764A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800764A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800764AC: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x800764B0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800764B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800764B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800764BC: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x800764C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800764C4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800764C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800764CC: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800764D0: nop

    // 0x800764D4: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x800764D8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800764DC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800764E0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800764E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800764E8: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800764EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800764F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800764F4: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x800764F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800764FC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80076500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076504: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80076508: nop

    // 0x8007650C: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80076510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076514: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x80076518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007651C: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x80076520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076524: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x80076528: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007652C: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80076530: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80076534: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80076538: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007653C: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80076540: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076544: lh          $t2, 0x30($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X30);
    // 0x80076548: nop

    // 0x8007654C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80076550: nop

    // 0x80076554: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80076558: swc1        $f6, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f6.u32l;
    // 0x8007655C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80076560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80076564: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076568: swc1        $f8, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f8.u32l;
    // 0x8007656C: jal         0x80072160
    // 0x80076570: nop

    func_80072160(rdram, ctx);
        goto after_0;
    // 0x80076570: nop

    after_0:
    // 0x80076574: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80076578: lw          $t3, 0x65EC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X65EC);
    // 0x8007657C: nop

    // 0x80076580: sltiu       $at, $t3, 0x8
    ctx->r1 = ctx->r11 < 0X8 ? 1 : 0;
    // 0x80076584: beq         $at, $zero, L_80076618
    if (ctx->r1 == 0) {
        // 0x80076588: nop
    
            goto L_80076618;
    }
    // 0x80076588: nop

    // 0x8007658C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80076590: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80076594: addu        $at, $at, $t3
    gpr jr_addend_800765A0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80076598: lw          $t3, 0x5C64($at)
    ctx->r11 = ADD32(ctx->r1, 0X5C64);
    // 0x8007659C: nop

    // 0x800765A0: jr          $t3
    // 0x800765A4: nop

    switch (jr_addend_800765A0 >> 2) {
        case 0: goto L_800765A8; break;
        case 1: goto L_800765A8; break;
        case 2: goto L_800765B8; break;
        case 3: goto L_800765C8; break;
        case 4: goto L_800765D8; break;
        case 5: goto L_800765E8; break;
        case 6: goto L_800765F8; break;
        case 7: goto L_80076608; break;
        default: switch_error(__func__, 0x800765A0, 0x80105C64);
    }
    // 0x800765A4: nop

L_800765A8:
    // 0x800765A8: jal         0x80072948
    // 0x800765AC: nop

    func_80072948(rdram, ctx);
        goto after_1;
    // 0x800765AC: nop

    after_1:
    // 0x800765B0: b           L_80076620
    // 0x800765B4: nop

        goto L_80076620;
    // 0x800765B4: nop

L_800765B8:
    // 0x800765B8: jal         0x80073580
    // 0x800765BC: nop

    func_80073580(rdram, ctx);
        goto after_2;
    // 0x800765BC: nop

    after_2:
    // 0x800765C0: b           L_80076620
    // 0x800765C4: nop

        goto L_80076620;
    // 0x800765C4: nop

L_800765C8:
    // 0x800765C8: jal         0x80074194
    // 0x800765CC: nop

    func_80074194(rdram, ctx);
        goto after_3;
    // 0x800765CC: nop

    after_3:
    // 0x800765D0: b           L_80076620
    // 0x800765D4: nop

        goto L_80076620;
    // 0x800765D4: nop

L_800765D8:
    // 0x800765D8: jal         0x800744D8
    // 0x800765DC: nop

    func_800744D8(rdram, ctx);
        goto after_4;
    // 0x800765DC: nop

    after_4:
    // 0x800765E0: b           L_80076620
    // 0x800765E4: nop

        goto L_80076620;
    // 0x800765E4: nop

L_800765E8:
    // 0x800765E8: jal         0x80074B04
    // 0x800765EC: nop

    func_80074B04(rdram, ctx);
        goto after_5;
    // 0x800765EC: nop

    after_5:
    // 0x800765F0: b           L_80076620
    // 0x800765F4: nop

        goto L_80076620;
    // 0x800765F4: nop

L_800765F8:
    // 0x800765F8: jal         0x800757C0
    // 0x800765FC: nop

    func_800757C0(rdram, ctx);
        goto after_6;
    // 0x800765FC: nop

    after_6:
    // 0x80076600: b           L_80076620
    // 0x80076604: nop

        goto L_80076620;
    // 0x80076604: nop

L_80076608:
    // 0x80076608: jal         0x800761FC
    // 0x8007660C: nop

    func_800761FC(rdram, ctx);
        goto after_7;
    // 0x8007660C: nop

    after_7:
    // 0x80076610: b           L_80076620
    // 0x80076614: nop

        goto L_80076620;
    // 0x80076614: nop

L_80076618:
    // 0x80076618: b           L_80076620
    // 0x8007661C: nop

        goto L_80076620;
    // 0x8007661C: nop

L_80076620:
    // 0x80076620: jal         0x800723A4
    // 0x80076624: nop

    func_800723A4(rdram, ctx);
        goto after_8;
    // 0x80076624: nop

    after_8:
    // 0x80076628: b           L_80076630
    // 0x8007662C: nop

        goto L_80076630;
    // 0x8007662C: nop

L_80076630:
    // 0x80076630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076638: jr          $ra
    // 0x8007663C: nop

    return;
    // 0x8007663C: nop

;}
RECOMP_FUNC void func_800C77D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C77D8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800C77DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C77E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C77E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C77E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C77EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C77F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C77F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C77F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C77FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C7800: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C7804: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800C7808: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C780C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C7810: nop

    // 0x800C7814: bne         $t0, $zero, L_800C784C
    if (ctx->r8 != 0) {
        // 0x800C7818: nop
    
            goto L_800C784C;
    }
    // 0x800C7818: nop

    // 0x800C781C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C7820: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C7824: lh          $t2, 0xE6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE6);
    // 0x800C7828: nop

    // 0x800C782C: bne         $t2, $at, L_800C784C
    if (ctx->r10 != ctx->r1) {
        // 0x800C7830: nop
    
            goto L_800C784C;
    }
    // 0x800C7830: nop

    // 0x800C7834: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C7838: nop

    // 0x800C783C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800C7840: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800C7844: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800C7848: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800C784C:
    // 0x800C784C: b           L_800C7854
    // 0x800C7850: nop

        goto L_800C7854;
    // 0x800C7850: nop

L_800C7854:
    // 0x800C7854: jr          $ra
    // 0x800C7858: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800C7858: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80098164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098164: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80098168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009816C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80098174: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80098178: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009817C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80098180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098184: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80098188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009818C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80098190: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80098194: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80098198: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009819C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800981A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800981A4: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800981A8: nop

    // 0x800981AC: beq         $s0, $at, L_800981C8
    if (ctx->r16 == ctx->r1) {
        // 0x800981B0: nop
    
            goto L_800981C8;
    }
    // 0x800981B0: nop

    // 0x800981B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800981B8: beq         $s0, $at, L_800981DC
    if (ctx->r16 == ctx->r1) {
        // 0x800981BC: nop
    
            goto L_800981DC;
    }
    // 0x800981BC: nop

    // 0x800981C0: b           L_800981F0
    // 0x800981C4: nop

        goto L_800981F0;
    // 0x800981C4: nop

L_800981C8:
    // 0x800981C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800981CC: jal         0x80097EE4
    // 0x800981D0: nop

    func_80097EE4(rdram, ctx);
        goto after_0;
    // 0x800981D0: nop

    after_0:
    // 0x800981D4: b           L_800981F0
    // 0x800981D8: nop

        goto L_800981F0;
    // 0x800981D8: nop

L_800981DC:
    // 0x800981DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800981E0: jal         0x80098000
    // 0x800981E4: nop

    func_80098000(rdram, ctx);
        goto after_1;
    // 0x800981E4: nop

    after_1:
    // 0x800981E8: b           L_800981F0
    // 0x800981EC: nop

        goto L_800981F0;
    // 0x800981EC: nop

L_800981F0:
    // 0x800981F0: b           L_800981F8
    // 0x800981F4: nop

        goto L_800981F8;
    // 0x800981F4: nop

L_800981F8:
    // 0x800981F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800981FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098200: jr          $ra
    // 0x80098204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80098204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AD364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD364: jr          $ra
    // 0x800AD368: nop

    return;
    // 0x800AD368: nop

    // 0x800AD36C: jr          $ra
    // 0x800AD370: nop

    return;
    // 0x800AD370: nop

;}
RECOMP_FUNC void func_800B2E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2E5C: jr          $ra
    // 0x800B2E60: nop

    return;
    // 0x800B2E60: nop

    // 0x800B2E64: jr          $ra
    // 0x800B2E68: nop

    return;
    // 0x800B2E68: nop

;}
RECOMP_FUNC void func_800F2008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2008: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F200C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F2010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2018: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F201C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F202C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2030: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2034: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2038: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F203C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2040: nop

    // 0x800F2044: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F2048: nop

    // 0x800F204C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800F2050: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2054: nop

    // 0x800F2058: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F205C: nop

    // 0x800F2060: bne         $t3, $zero, L_800F2140
    if (ctx->r11 != 0) {
        // 0x800F2064: nop
    
            goto L_800F2140;
    }
    // 0x800F2064: nop

    // 0x800F2068: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F206C: nop

    // 0x800F2070: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F2074: nop

    // 0x800F2078: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F207C: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F2080: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2084: nop

    // 0x800F2088: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F208C: nop

    // 0x800F2090: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F2094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2098: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F209C: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F20A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F20A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F20A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F20AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F20B0: jal         0x8001C0EC
    // 0x800F20B4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F20B4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F20B8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F20BC: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F20C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F20C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F20C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F20CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F20D0: jal         0x8001C0EC
    // 0x800F20D4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F20D4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F20D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F20DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F20E0: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F20E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F20E8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F20EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F20F0: jal         0x8001ABF4
    // 0x800F20F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F20F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F20F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F20FC: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F2100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F2104: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F2108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F210C: jal         0x8001ABF4
    // 0x800F2110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F2110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F2114: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2118: nop

    // 0x800F211C: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x800F2120: nop

    // 0x800F2124: bne         $t2, $zero, L_800F2140
    if (ctx->r10 != 0) {
        // 0x800F2128: nop
    
            goto L_800F2140;
    }
    // 0x800F2128: nop

    // 0x800F212C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2134: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F2138: jal         0x80029EF8
    // 0x800F213C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800F213C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_4:
L_800F2140:
    // 0x800F2140: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F2144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F2148: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F214C: nop

    // 0x800F2150: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800F2154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F215C: jal         0x80028FA0
    // 0x800F2160: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800F2160: nop

    after_5:
    // 0x800F2164: beq         $v0, $zero, L_800F217C
    if (ctx->r2 == 0) {
        // 0x800F2168: nop
    
            goto L_800F217C;
    }
    // 0x800F2168: nop

    // 0x800F216C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2174: jal         0x80029B60
    // 0x800F2178: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800F2178: nop

    after_6:
L_800F217C:
    // 0x800F217C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2184: jal         0x8002A8B4
    // 0x800F2188: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x800F2188: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_7:
    // 0x800F218C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2194: jal         0x80029C40
    // 0x800F2198: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800F2198: nop

    after_8:
    // 0x800F219C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F21A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F21A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F21A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F21AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F21B0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F21B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F21B8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F21BC: jal         0x80029018
    // 0x800F21C0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800F21C0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x800F21C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F21C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F21CC: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800F21D0: nop

    // 0x800F21D4: bne         $t6, $at, L_800F2230
    if (ctx->r14 != ctx->r1) {
        // 0x800F21D8: nop
    
            goto L_800F2230;
    }
    // 0x800F21D8: nop

    // 0x800F21DC: lh          $t4, 0xB0($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB0);
    // 0x800F21E0: nop

    // 0x800F21E4: bne         $t4, $zero, L_800F2230
    if (ctx->r12 != 0) {
        // 0x800F21E8: nop
    
            goto L_800F2230;
    }
    // 0x800F21E8: nop

    // 0x800F21EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F21F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F21F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F21F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F21FC: jal         0x8002A0D0
    // 0x800F2200: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_10;
    // 0x800F2200: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    after_10:
    // 0x800F2204: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F2208: bne         $v0, $at, L_800F2228
    if (ctx->r2 != ctx->r1) {
        // 0x800F220C: nop
    
            goto L_800F2228;
    }
    // 0x800F220C: nop

    // 0x800F2210: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2214: nop

    // 0x800F2218: lbu         $t7, 0x132($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X132);
    // 0x800F221C: nop

    // 0x800F2220: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800F2224: sb          $t9, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r25;
L_800F2228:
    // 0x800F2228: b           L_800F233C
    // 0x800F222C: nop

        goto L_800F233C;
    // 0x800F222C: nop

L_800F2230:
    // 0x800F2230: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F2234: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F2238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F223C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2240: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800F2244: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F2248: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F224C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F2250: jal         0x800295C0
    // 0x800F2254: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x800F2254: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x800F2258: beq         $v0, $zero, L_800F2270
    if (ctx->r2 == 0) {
        // 0x800F225C: nop
    
            goto L_800F2270;
    }
    // 0x800F225C: nop

    // 0x800F2260: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F2264: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2268: b           L_800F2280
    // 0x800F226C: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
        goto L_800F2280;
    // 0x800F226C: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
L_800F2270:
    // 0x800F2270: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F2274: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2278: nop

    // 0x800F227C: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
L_800F2280:
    // 0x800F2280: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2284: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800F2288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F228C: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800F2290: nop

    // 0x800F2294: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F2298: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x800F229C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800F22A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F22A4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F22A8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F22AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F22B0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F22B4: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800F22B8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F22BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F22C0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F22C4: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F22C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F22CC: nop

    // 0x800F22D0: lh          $t7, 0xB6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XB6);
    // 0x800F22D4: nop

    // 0x800F22D8: bne         $t7, $zero, L_800F2324
    if (ctx->r15 != 0) {
        // 0x800F22DC: nop
    
            goto L_800F2324;
    }
    // 0x800F22DC: nop

    // 0x800F22E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F22E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F22E8: jal         0x8002A2EC
    // 0x800F22EC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_12;
    // 0x800F22EC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_12:
    // 0x800F22F0: beq         $v0, $zero, L_800F231C
    if (ctx->r2 == 0) {
        // 0x800F22F4: nop
    
            goto L_800F231C;
    }
    // 0x800F22F4: nop

    // 0x800F22F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F22FC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800F2300: sh          $t9, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r25;
    // 0x800F2304: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2308: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800F230C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800F2310: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2314: nop

    // 0x800F2318: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F231C:
    // 0x800F231C: b           L_800F233C
    // 0x800F2320: nop

        goto L_800F233C;
    // 0x800F2320: nop

L_800F2324:
    // 0x800F2324: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2328: nop

    // 0x800F232C: lh          $t6, 0xB6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XB6);
    // 0x800F2330: nop

    // 0x800F2334: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x800F2338: sh          $t5, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r13;
L_800F233C:
    // 0x800F233C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800F2340: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2344: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F2348: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F234C: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800F2350: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x800F2354: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F2358: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F235C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F2360: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F2364: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2368: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F236C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x800F2370: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800F2374: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2378: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F237C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F2380: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800F2384: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800F2388: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F238C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F2390: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F2394: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F2398: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F239C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F23A0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F23A4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800F23A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F23AC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F23B0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F23B4: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800F23B8: lwc1        $f4, 0x2C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800F23BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F23C0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F23C4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F23C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F23CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F23D0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F23D4: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x800F23D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F23DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F23E0: jal         0x8002A2EC
    // 0x800F23E4: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_13;
    // 0x800F23E4: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_13:
    // 0x800F23E8: beq         $v0, $zero, L_800F23F8
    if (ctx->r2 == 0) {
        // 0x800F23EC: nop
    
            goto L_800F23F8;
    }
    // 0x800F23EC: nop

    // 0x800F23F0: b           L_800F2410
    // 0x800F23F4: nop

        goto L_800F2410;
    // 0x800F23F4: nop

L_800F23F8:
    // 0x800F23F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F23FC: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800F2400: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F2404: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F2408: nop

    // 0x800F240C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F2410:
    // 0x800F2410: b           L_800F2418
    // 0x800F2414: nop

        goto L_800F2418;
    // 0x800F2414: nop

L_800F2418:
    // 0x800F2418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F241C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F2420: jr          $ra
    // 0x800F2424: nop

    return;
    // 0x800F2424: nop

;}
RECOMP_FUNC void func_800E56D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E56D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E56D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E56DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E56E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E56E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E56E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E56EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E56F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E56F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E56F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E56FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5700: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5704: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800E5708: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E570C: nop

    // 0x800E5710: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800E5714: nop

    // 0x800E5718: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800E571C: sltiu       $at, $t2, 0xC
    ctx->r1 = ctx->r10 < 0XC ? 1 : 0;
    // 0x800E5720: beq         $at, $zero, L_800E5804
    if (ctx->r1 == 0) {
        // 0x800E5724: nop
    
            goto L_800E5804;
    }
    // 0x800E5724: nop

    // 0x800E5728: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E572C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E5730: addu        $at, $at, $t2
    gpr jr_addend_800E573C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800E5734: lw          $t2, 0x548C($at)
    ctx->r10 = ADD32(ctx->r1, 0X548C);
    // 0x800E5738: nop

    // 0x800E573C: jr          $t2
    // 0x800E5740: nop

    switch (jr_addend_800E573C >> 2) {
        case 0: goto L_800E5744; break;
        case 1: goto L_800E5754; break;
        case 2: goto L_800E5764; break;
        case 3: goto L_800E5774; break;
        case 4: goto L_800E5784; break;
        case 5: goto L_800E5794; break;
        case 6: goto L_800E57A4; break;
        case 7: goto L_800E57B4; break;
        case 8: goto L_800E57C4; break;
        case 9: goto L_800E57D4; break;
        case 10: goto L_800E57E4; break;
        case 11: goto L_800E57F4; break;
        default: switch_error(__func__, 0x800E573C, 0x8011548C);
    }
    // 0x800E5740: nop

L_800E5744:
    // 0x800E5744: jal         0x800E45C4
    // 0x800E5748: nop

    func_800E45C4(rdram, ctx);
        goto after_0;
    // 0x800E5748: nop

    after_0:
    // 0x800E574C: b           L_800E580C
    // 0x800E5750: nop

        goto L_800E580C;
    // 0x800E5750: nop

L_800E5754:
    // 0x800E5754: jal         0x800E4728
    // 0x800E5758: nop

    func_800E4728(rdram, ctx);
        goto after_1;
    // 0x800E5758: nop

    after_1:
    // 0x800E575C: b           L_800E580C
    // 0x800E5760: nop

        goto L_800E580C;
    // 0x800E5760: nop

L_800E5764:
    // 0x800E5764: jal         0x800E49AC
    // 0x800E5768: nop

    func_800E49AC(rdram, ctx);
        goto after_2;
    // 0x800E5768: nop

    after_2:
    // 0x800E576C: b           L_800E580C
    // 0x800E5770: nop

        goto L_800E580C;
    // 0x800E5770: nop

L_800E5774:
    // 0x800E5774: jal         0x800E4BF4
    // 0x800E5778: nop

    func_800E4BF4(rdram, ctx);
        goto after_3;
    // 0x800E5778: nop

    after_3:
    // 0x800E577C: b           L_800E580C
    // 0x800E5780: nop

        goto L_800E580C;
    // 0x800E5780: nop

L_800E5784:
    // 0x800E5784: jal         0x800E4E3C
    // 0x800E5788: nop

    func_800E4E3C(rdram, ctx);
        goto after_4;
    // 0x800E5788: nop

    after_4:
    // 0x800E578C: b           L_800E580C
    // 0x800E5790: nop

        goto L_800E580C;
    // 0x800E5790: nop

L_800E5794:
    // 0x800E5794: jal         0x800E4F40
    // 0x800E5798: nop

    func_800E4F40(rdram, ctx);
        goto after_5;
    // 0x800E5798: nop

    after_5:
    // 0x800E579C: b           L_800E580C
    // 0x800E57A0: nop

        goto L_800E580C;
    // 0x800E57A0: nop

L_800E57A4:
    // 0x800E57A4: jal         0x800E5058
    // 0x800E57A8: nop

    func_800E5058(rdram, ctx);
        goto after_6;
    // 0x800E57A8: nop

    after_6:
    // 0x800E57AC: b           L_800E580C
    // 0x800E57B0: nop

        goto L_800E580C;
    // 0x800E57B0: nop

L_800E57B4:
    // 0x800E57B4: jal         0x800E515C
    // 0x800E57B8: nop

    func_800E515C(rdram, ctx);
        goto after_7;
    // 0x800E57B8: nop

    after_7:
    // 0x800E57BC: b           L_800E580C
    // 0x800E57C0: nop

        goto L_800E580C;
    // 0x800E57C0: nop

L_800E57C4:
    // 0x800E57C4: jal         0x800E5260
    // 0x800E57C8: nop

    func_800E5260(rdram, ctx);
        goto after_8;
    // 0x800E57C8: nop

    after_8:
    // 0x800E57CC: b           L_800E580C
    // 0x800E57D0: nop

        goto L_800E580C;
    // 0x800E57D0: nop

L_800E57D4:
    // 0x800E57D4: jal         0x800E5364
    // 0x800E57D8: nop

    func_800E5364(rdram, ctx);
        goto after_9;
    // 0x800E57D8: nop

    after_9:
    // 0x800E57DC: b           L_800E580C
    // 0x800E57E0: nop

        goto L_800E580C;
    // 0x800E57E0: nop

L_800E57E4:
    // 0x800E57E4: jal         0x800E54F8
    // 0x800E57E8: nop

    func_800E54F8(rdram, ctx);
        goto after_10;
    // 0x800E57E8: nop

    after_10:
    // 0x800E57EC: b           L_800E580C
    // 0x800E57F0: nop

        goto L_800E580C;
    // 0x800E57F0: nop

L_800E57F4:
    // 0x800E57F4: jal         0x800E5528
    // 0x800E57F8: nop

    func_800E5528(rdram, ctx);
        goto after_11;
    // 0x800E57F8: nop

    after_11:
    // 0x800E57FC: b           L_800E580C
    // 0x800E5800: nop

        goto L_800E580C;
    // 0x800E5800: nop

L_800E5804:
    // 0x800E5804: b           L_800E580C
    // 0x800E5808: nop

        goto L_800E580C;
    // 0x800E5808: nop

L_800E580C:
    // 0x800E580C: b           L_800E5814
    // 0x800E5810: nop

        goto L_800E5814;
    // 0x800E5810: nop

L_800E5814:
    // 0x800E5814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E5818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E581C: jr          $ra
    // 0x800E5820: nop

    return;
    // 0x800E5820: nop

;}
RECOMP_FUNC void func_8008D3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D3F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008D3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D400: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008D404: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D408: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008D40C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008D410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D414: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D418: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D41C: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008D420: nop

    // 0x8008D424: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8008D428: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D42C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008D430: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008D434: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D438: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008D43C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D440: lh          $t1, 0x4D56($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4D56);
    // 0x8008D444: nop

    // 0x8008D448: bne         $t1, $zero, L_8008D45C
    if (ctx->r9 != 0) {
        // 0x8008D44C: nop
    
            goto L_8008D45C;
    }
    // 0x8008D44C: nop

    // 0x8008D450: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8008D454: jal         0x8008DA20
    // 0x8008D458: nop

    func_8008DA20(rdram, ctx);
        goto after_0;
    // 0x8008D458: nop

    after_0:
L_8008D45C:
    // 0x8008D45C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8008D460:
    // 0x8008D460: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008D464: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x8008D468: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008D46C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008D470: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008D474: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008D478: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008D47C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008D480: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8008D484: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008D488: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D48C: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8008D490: nop

    // 0x8008D494: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8008D498: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008D49C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008D4A0: beq         $t8, $at, L_8008D4F8
    if (ctx->r24 == ctx->r1) {
        // 0x8008D4A4: nop
    
            goto L_8008D4F8;
    }
    // 0x8008D4A4: nop

    // 0x8008D4A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008D4AC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8008D4B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008D4B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D4B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008D4BC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008D4C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D4C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008D4C8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008D4CC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008D4D0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8008D4D4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008D4D8: lwc1        $f4, 0x28($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X28);
    // 0x8008D4DC: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8008D4E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008D4E4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008D4E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008D4EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008D4F0: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8008D4F4: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
L_8008D4F8:
    // 0x8008D4F8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8008D4FC: nop

    // 0x8008D500: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008D504: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8008D508: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8008D50C: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8008D510: bne         $at, $zero, L_8008D460
    if (ctx->r1 != 0) {
        // 0x8008D514: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_8008D460;
    }
    // 0x8008D514: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8008D518: b           L_8008D520
    // 0x8008D51C: nop

        goto L_8008D520;
    // 0x8008D51C: nop

L_8008D520:
    // 0x8008D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008D528: jr          $ra
    // 0x8008D52C: nop

    return;
    // 0x8008D52C: nop

;}
RECOMP_FUNC void func_800F9A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9A20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F9A28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9A2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F9A30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9A34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F9A38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9A3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9A40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9A44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F9A48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F9A4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F9A50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F9A54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9A58: nop

    // 0x800F9A5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F9A60: nop

    // 0x800F9A64: bne         $t1, $zero, L_800F9A78
    if (ctx->r9 != 0) {
        // 0x800F9A68: nop
    
            goto L_800F9A78;
    }
    // 0x800F9A68: nop

    // 0x800F9A6C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9A70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F9A74: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800F9A78:
    // 0x800F9A78: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F9A7C: nop

    // 0x800F9A80: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800F9A84: nop

    // 0x800F9A88: bne         $t5, $zero, L_800F9B48
    if (ctx->r13 != 0) {
        // 0x800F9A8C: nop
    
            goto L_800F9B48;
    }
    // 0x800F9A8C: nop

    // 0x800F9A90: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9A94: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x800F9A98: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x800F9A9C: nop

    // 0x800F9AA0: bne         $t7, $at, L_800F9AFC
    if (ctx->r15 != ctx->r1) {
        // 0x800F9AA4: nop
    
            goto L_800F9AFC;
    }
    // 0x800F9AA4: nop

    // 0x800F9AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9AB0: jal         0x8002A1FC
    // 0x800F9AB4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x800F9AB4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_0:
    // 0x800F9AB8: bne         $v0, $zero, L_800F9AF4
    if (ctx->r2 != 0) {
        // 0x800F9ABC: nop
    
            goto L_800F9AF4;
    }
    // 0x800F9ABC: nop

    // 0x800F9AC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9AC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F9AC8: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800F9ACC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F9AD0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800F9AD4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x800F9AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9ADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9AE4: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x800F9AE8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F9AEC: jal         0x800175F0
    // 0x800F9AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800F9AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800F9AF4:
    // 0x800F9AF4: b           L_800F9B48
    // 0x800F9AF8: nop

        goto L_800F9B48;
    // 0x800F9AF8: nop

L_800F9AFC:
    // 0x800F9AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9B04: jal         0x8002A1FC
    // 0x800F9B08: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800F9B08: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_2:
    // 0x800F9B0C: beq         $v0, $zero, L_800F9B48
    if (ctx->r2 == 0) {
        // 0x800F9B10: nop
    
            goto L_800F9B48;
    }
    // 0x800F9B10: nop

    // 0x800F9B14: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F9B1C: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800F9B20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B24: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F9B28: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x800F9B2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9B30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9B38: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x800F9B3C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F9B40: jal         0x800175F0
    // 0x800F9B44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800F9B44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_800F9B48:
    // 0x800F9B48: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B4C: nop

    // 0x800F9B50: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800F9B54: nop

    // 0x800F9B58: beq         $t7, $zero, L_800F9C34
    if (ctx->r15 == 0) {
        // 0x800F9B5C: nop
    
            goto L_800F9C34;
    }
    // 0x800F9B5C: nop

    // 0x800F9B60: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B64: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x800F9B68: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x800F9B6C: nop

    // 0x800F9B70: bne         $t9, $at, L_800F9B98
    if (ctx->r25 != ctx->r1) {
        // 0x800F9B74: nop
    
            goto L_800F9B98;
    }
    // 0x800F9B74: nop

    // 0x800F9B78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B7C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800F9B80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F9B84: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800F9B88: nop

    // 0x800F9B8C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800F9B90: b           L_800F9BB4
    // 0x800F9B94: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800F9BB4;
    // 0x800F9B94: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800F9B98:
    // 0x800F9B98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F9B9C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800F9BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F9BA4: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800F9BA8: nop

    // 0x800F9BAC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800F9BB0: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_800F9BB4:
    // 0x800F9BB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F9BB8: nop

    // 0x800F9BBC: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800F9BC0: nop

    // 0x800F9BC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F9BC8: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
    // 0x800F9BCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F9BD0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800F9BD4: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800F9BD8: nop

    // 0x800F9BDC: bne         $t6, $at, L_800F9C34
    if (ctx->r14 != ctx->r1) {
        // 0x800F9BE0: nop
    
            goto L_800F9C34;
    }
    // 0x800F9BE0: nop

    // 0x800F9BE4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F9BE8: nop

    // 0x800F9BEC: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800F9BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9BF8: jal         0x800261E8
    // 0x800F9BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800261E8(rdram, ctx);
        goto after_4;
    // 0x800F9BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800F9C00: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F9C04: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x800F9C08: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x800F9C0C: nop

    // 0x800F9C10: bne         $t9, $at, L_800F9C28
    if (ctx->r25 != ctx->r1) {
        // 0x800F9C14: nop
    
            goto L_800F9C28;
    }
    // 0x800F9C14: nop

    // 0x800F9C18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F9C1C: addiu       $t0, $zero, 0x4E
    ctx->r8 = ADD32(0, 0X4E);
    // 0x800F9C20: b           L_800F9C34
    // 0x800F9C24: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
        goto L_800F9C34;
    // 0x800F9C24: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_800F9C28:
    // 0x800F9C28: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F9C2C: addiu       $t3, $zero, 0x4D
    ctx->r11 = ADD32(0, 0X4D);
    // 0x800F9C30: sh          $t3, 0xE4($t4)
    MEM_H(0XE4, ctx->r12) = ctx->r11;
L_800F9C34:
    // 0x800F9C34: b           L_800F9C3C
    // 0x800F9C38: nop

        goto L_800F9C3C;
    // 0x800F9C38: nop

L_800F9C3C:
    // 0x800F9C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9C40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F9C44: jr          $ra
    // 0x800F9C48: nop

    return;
    // 0x800F9C48: nop

;}
RECOMP_FUNC void func_800DB710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DB714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DB718: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DB71C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DB720: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DB724: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DB728: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DB72C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DB730: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DB734: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DB738: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DB73C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DB740: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DB744: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DB748: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DB74C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DB750: addiu       $a1, $a1, 0x42F4
    ctx->r5 = ADD32(ctx->r5, 0X42F4);
    // 0x800DB754: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DB758: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DB75C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DB760: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DB764: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DB768: jal         0x80027464
    // 0x800DB76C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DB76C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DB770: b           L_800DB778
    // 0x800DB774: nop

        goto L_800DB778;
    // 0x800DB774: nop

L_800DB778:
    // 0x800DB778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DB77C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DB780: jr          $ra
    // 0x800DB784: nop

    return;
    // 0x800DB784: nop

;}
RECOMP_FUNC void func_800ED038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800ED03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ED040: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ED044: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ED048: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED04C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED050: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED054: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED05C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED060: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED064: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED068: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800ED06C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED070: nop

    // 0x800ED074: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x800ED078: nop

    // 0x800ED07C: beq         $t1, $zero, L_800ED098
    if (ctx->r9 == 0) {
        // 0x800ED080: nop
    
            goto L_800ED098;
    }
    // 0x800ED080: nop

    // 0x800ED084: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED088: nop

    // 0x800ED08C: lh          $a0, 0xB4($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XB4);
    // 0x800ED090: jal         0x8002B114
    // 0x800ED094: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800ED094: nop

    after_0:
L_800ED098:
    // 0x800ED098: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED09C: nop

    // 0x800ED0A0: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x800ED0A4: nop

    // 0x800ED0A8: beq         $t4, $zero, L_800ED0C4
    if (ctx->r12 == 0) {
        // 0x800ED0AC: nop
    
            goto L_800ED0C4;
    }
    // 0x800ED0AC: nop

    // 0x800ED0B0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED0B4: nop

    // 0x800ED0B8: lh          $a0, 0xB6($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XB6);
    // 0x800ED0BC: jal         0x8002B114
    // 0x800ED0C0: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x800ED0C0: nop

    after_1:
L_800ED0C4:
    // 0x800ED0C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED0C8: nop

    // 0x800ED0CC: lh          $t7, 0xB8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB8);
    // 0x800ED0D0: nop

    // 0x800ED0D4: beq         $t7, $zero, L_800ED0F0
    if (ctx->r15 == 0) {
        // 0x800ED0D8: nop
    
            goto L_800ED0F0;
    }
    // 0x800ED0D8: nop

    // 0x800ED0DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED0E0: nop

    // 0x800ED0E4: lh          $a0, 0xB8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XB8);
    // 0x800ED0E8: jal         0x8002B114
    // 0x800ED0EC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800ED0EC: nop

    after_2:
L_800ED0F0:
    // 0x800ED0F0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED0F4: nop

    // 0x800ED0F8: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x800ED0FC: nop

    // 0x800ED100: beq         $t0, $zero, L_800ED11C
    if (ctx->r8 == 0) {
        // 0x800ED104: nop
    
            goto L_800ED11C;
    }
    // 0x800ED104: nop

    // 0x800ED108: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED10C: nop

    // 0x800ED110: lh          $a0, 0xBA($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XBA);
    // 0x800ED114: jal         0x8002B114
    // 0x800ED118: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800ED118: nop

    after_3:
L_800ED11C:
    // 0x800ED11C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED120: nop

    // 0x800ED124: lh          $t3, 0xBC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBC);
    // 0x800ED128: nop

    // 0x800ED12C: beq         $t3, $zero, L_800ED148
    if (ctx->r11 == 0) {
        // 0x800ED130: nop
    
            goto L_800ED148;
    }
    // 0x800ED130: nop

    // 0x800ED134: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED138: nop

    // 0x800ED13C: lh          $a0, 0xBC($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XBC);
    // 0x800ED140: jal         0x8002B114
    // 0x800ED144: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x800ED144: nop

    after_4:
L_800ED148:
    // 0x800ED148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED14C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED150: jal         0x8002B0E4
    // 0x800ED154: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800ED154: nop

    after_5:
    // 0x800ED158: b           L_800ED160
    // 0x800ED15C: nop

        goto L_800ED160;
    // 0x800ED15C: nop

L_800ED160:
    // 0x800ED160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800ED164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800ED168: jr          $ra
    // 0x800ED16C: nop

    return;
    // 0x800ED16C: nop

;}
RECOMP_FUNC void func_800CB9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB9C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB9CC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800CB9D0: nop

    // 0x800CB9D4: bne         $t6, $zero, L_800CBA30
    if (ctx->r14 != 0) {
        // 0x800CB9D8: nop
    
            goto L_800CBA30;
    }
    // 0x800CB9D8: nop

    // 0x800CB9DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800CB9E0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800CB9E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CB9E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CB9EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CB9F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CB9F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CB9F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CB9FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CBA00: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800CBA04: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800CBA08: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CBA0C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CBA10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CBA14: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CBA18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CBA1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CBA20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CBA24: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CBA28: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CBA2C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800CBA30:
    // 0x800CBA30: jr          $ra
    // 0x800CBA34: nop

    return;
    // 0x800CBA34: nop

    // 0x800CBA38: jr          $ra
    // 0x800CBA3C: nop

    return;
    // 0x800CBA3C: nop

;}
RECOMP_FUNC void func_800EF250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EF250: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EF254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EF258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EF25C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EF260: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EF264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EF268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF26C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EF270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EF278: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EF27C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF280: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EF284: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EF288: nop

    // 0x800EF28C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EF290: nop

    // 0x800EF294: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800EF298: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EF29C: nop

    // 0x800EF2A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EF2A4: nop

    // 0x800EF2A8: bne         $t3, $zero, L_800EF348
    if (ctx->r11 != 0) {
        // 0x800EF2AC: nop
    
            goto L_800EF348;
    }
    // 0x800EF2AC: nop

    // 0x800EF2B0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EF2B4: nop

    // 0x800EF2B8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EF2BC: nop

    // 0x800EF2C0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EF2C4: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EF2C8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EF2CC: nop

    // 0x800EF2D0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EF2D4: nop

    // 0x800EF2D8: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EF2DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF2E0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EF2E4: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800EF2E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF2EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EF2F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EF2F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800EF2F8: jal         0x8001C0EC
    // 0x800EF2FC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EF2FC: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EF300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF308: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EF30C: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EF310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EF314: jal         0x8001ABF4
    // 0x800EF318: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800EF318: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800EF31C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EF320: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EF324: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EF328: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x800EF32C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800EF330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EF334: jal         0x8001ABF4
    // 0x800EF338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EF338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800EF33C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EF340: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800EF344: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
L_800EF348:
    // 0x800EF348: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800EF34C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EF350: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EF354: nop

    // 0x800EF358: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800EF35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF364: jal         0x80028FA0
    // 0x800EF368: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800EF368: nop

    after_3:
    // 0x800EF36C: beq         $v0, $zero, L_800EF384
    if (ctx->r2 == 0) {
        // 0x800EF370: nop
    
            goto L_800EF384;
    }
    // 0x800EF370: nop

    // 0x800EF374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF37C: jal         0x80029B60
    // 0x800EF380: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800EF380: nop

    after_4:
L_800EF384:
    // 0x800EF384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF38C: jal         0x8002A8B4
    // 0x800EF390: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x800EF390: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_5:
    // 0x800EF394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF39C: jal         0x80029C40
    // 0x800EF3A0: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800EF3A0: nop

    after_6:
    // 0x800EF3A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EF3A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EF3AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF3B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF3B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EF3B8: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800EF3BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EF3C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800EF3C4: jal         0x80029018
    // 0x800EF3C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800EF3C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x800EF3CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EF3D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EF3D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF3D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF3DC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EF3E0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EF3E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EF3E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EF3EC: jal         0x800295C0
    // 0x800EF3F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x800EF3F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800EF3F4: beq         $v0, $zero, L_800EF40C
    if (ctx->r2 == 0) {
        // 0x800EF3F8: nop
    
            goto L_800EF40C;
    }
    // 0x800EF3F8: nop

    // 0x800EF3FC: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EF400: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EF404: b           L_800EF41C
    // 0x800EF408: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
        goto L_800EF41C;
    // 0x800EF408: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
L_800EF40C:
    // 0x800EF40C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EF410: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EF414: nop

    // 0x800EF418: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
L_800EF41C:
    // 0x800EF41C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EF420: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800EF424: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EF428: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800EF42C: nop

    // 0x800EF430: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EF434: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800EF438: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800EF43C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EF440: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EF444: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EF448: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EF44C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EF450: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800EF454: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EF458: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF45C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EF460: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800EF464: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EF468: nop

    // 0x800EF46C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800EF470: nop

    // 0x800EF474: bne         $t1, $zero, L_800EF5A8
    if (ctx->r9 != 0) {
        // 0x800EF478: nop
    
            goto L_800EF5A8;
    }
    // 0x800EF478: nop

    // 0x800EF47C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EF480: nop

    // 0x800EF484: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800EF488: nop

    // 0x800EF48C: bne         $t3, $zero, L_800EF4C4
    if (ctx->r11 != 0) {
        // 0x800EF490: nop
    
            goto L_800EF4C4;
    }
    // 0x800EF490: nop

    // 0x800EF494: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EF498: nop

    // 0x800EF49C: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800EF4A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EF4A4: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800EF4A8: sh          $t6, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r14;
    // 0x800EF4AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EF4B0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800EF4B4: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x800EF4B8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EF4BC: b           L_800EF5A0
    // 0x800EF4C0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_800EF5A0;
    // 0x800EF4C0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800EF4C4:
    // 0x800EF4C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF4C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF4CC: jal         0x8002A2EC
    // 0x800EF4D0: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_9;
    // 0x800EF4D0: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_9:
    // 0x800EF4D4: beq         $v0, $zero, L_800EF570
    if (ctx->r2 == 0) {
        // 0x800EF4D8: nop
    
            goto L_800EF570;
    }
    // 0x800EF4D8: nop

    // 0x800EF4DC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EF4E0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800EF4E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EF4E8: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800EF4EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EF4F0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800EF4F4: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800EF4F8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800EF4FC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EF500: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EF504: addiu       $a1, $a1, 0x43F0
    ctx->r5 = ADD32(ctx->r5, 0X43F0);
    // 0x800EF508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EF50C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x800EF510: jal         0x80027464
    // 0x800EF514: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x800EF514: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x800EF518: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800EF51C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800EF520: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EF524: beq         $t1, $at, L_800EF568
    if (ctx->r9 == ctx->r1) {
        // 0x800EF528: nop
    
            goto L_800EF568;
    }
    // 0x800EF528: nop

    // 0x800EF52C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800EF530: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EF534: addiu       $a3, $a3, -0x6AA4
    ctx->r7 = ADD32(ctx->r7, -0X6AA4);
    // 0x800EF538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EF53C: jal         0x8001ABF4
    // 0x800EF540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x800EF540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x800EF544: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EF548: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800EF54C: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800EF550: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EF554: nop

    // 0x800EF558: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x800EF55C: nop

    // 0x800EF560: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x800EF564: sh          $t4, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r12;
L_800EF568:
    // 0x800EF568: b           L_800EF5A0
    // 0x800EF56C: nop

        goto L_800EF5A0;
    // 0x800EF56C: nop

L_800EF570:
    // 0x800EF570: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EF574: nop

    // 0x800EF578: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800EF57C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EF580: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800EF584: sh          $t7, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r15;
    // 0x800EF588: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800EF58C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800EF590: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800EF594: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EF598: nop

    // 0x800EF59C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800EF5A0:
    // 0x800EF5A0: b           L_800EF5C0
    // 0x800EF5A4: nop

        goto L_800EF5C0;
    // 0x800EF5A4: nop

L_800EF5A8:
    // 0x800EF5A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EF5AC: nop

    // 0x800EF5B0: lh          $t6, 0xA6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA6);
    // 0x800EF5B4: nop

    // 0x800EF5B8: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x800EF5BC: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
L_800EF5C0:
    // 0x800EF5C0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800EF5C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EF5C8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800EF5CC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF5D0: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800EF5D4: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800EF5D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EF5DC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF5E0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EF5E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EF5E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF5EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800EF5F0: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800EF5F4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800EF5F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EF5FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EF600: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EF604: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800EF608: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800EF60C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EF610: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EF614: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EF618: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EF61C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF620: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EF624: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x800EF628: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800EF62C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EF630: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800EF634: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800EF638: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800EF63C: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800EF640: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800EF644: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800EF648: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EF64C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800EF650: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF654: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800EF658: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x800EF65C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF664: jal         0x8002A2EC
    // 0x800EF668: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_12;
    // 0x800EF668: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_12:
    // 0x800EF66C: beq         $v0, $zero, L_800EF67C
    if (ctx->r2 == 0) {
        // 0x800EF670: nop
    
            goto L_800EF67C;
    }
    // 0x800EF670: nop

    // 0x800EF674: b           L_800EF694
    // 0x800EF678: nop

        goto L_800EF694;
    // 0x800EF678: nop

L_800EF67C:
    // 0x800EF67C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EF680: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800EF684: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x800EF688: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EF68C: nop

    // 0x800EF690: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800EF694:
    // 0x800EF694: b           L_800EF69C
    // 0x800EF698: nop

        goto L_800EF69C;
    // 0x800EF698: nop

L_800EF69C:
    // 0x800EF69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EF6A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EF6A4: jr          $ra
    // 0x800EF6A8: nop

    return;
    // 0x800EF6A8: nop

;}
RECOMP_FUNC void func_80090448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090448: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009044C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090450: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090454: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090458: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009045C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090460: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090464: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090468: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009046C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090470: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090474: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090478: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009047C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090480: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090484: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090488: addiu       $a1, $a1, 0x13F0
    ctx->r5 = ADD32(ctx->r5, 0X13F0);
    // 0x8009048C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090490: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090494: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090498: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009049C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800904A0: jal         0x80027464
    // 0x800904A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800904A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800904A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800904AC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800904B0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800904B4: addiu       $a3, $a3, 0x2298
    ctx->r7 = ADD32(ctx->r7, 0X2298);
    // 0x800904B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800904BC: jal         0x8001ABF4
    // 0x800904C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800904C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800904C4: b           L_800904CC
    // 0x800904C8: nop

        goto L_800904CC;
    // 0x800904C8: nop

L_800904CC:
    // 0x800904CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800904D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800904D4: jr          $ra
    // 0x800904D8: nop

    return;
    // 0x800904D8: nop

;}
RECOMP_FUNC void func_800843CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800843CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800843D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800843D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800843D8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x800843DC: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x800843E0: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800843E4: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800843E8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800843EC: jal         0x80067748
    // 0x800843F0: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x800843F0: nop

    after_0:
    // 0x800843F4: jal         0x800670E8
    // 0x800843F8: nop

    func_800670E8(rdram, ctx);
        goto after_1;
    // 0x800843F8: nop

    after_1:
    // 0x800843FC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80084400: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80084404: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80084408: jal         0x80068CC4
    // 0x8008440C: nop

    func_80068CC4(rdram, ctx);
        goto after_2;
    // 0x8008440C: nop

    after_2:
    // 0x80084410: jal         0x80069314
    // 0x80084414: nop

    func_80069314(rdram, ctx);
        goto after_3;
    // 0x80084414: nop

    after_3:
    // 0x80084418: b           L_80084420
    // 0x8008441C: nop

        goto L_80084420;
    // 0x8008441C: nop

L_80084420:
    // 0x80084420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80084428: jr          $ra
    // 0x8008442C: nop

    return;
    // 0x8008442C: nop

;}
RECOMP_FUNC void func_80088B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088B80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088B88: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80088B8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088B90: sh          $t6, 0x4BF2($at)
    MEM_H(0X4BF2, ctx->r1) = ctx->r14;
    // 0x80088B94: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80088B98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088B9C: sh          $t7, 0x4BF8($at)
    MEM_H(0X4BF8, ctx->r1) = ctx->r15;
    // 0x80088BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BA4: sb          $zero, 0x4BF0($at)
    MEM_B(0X4BF0, ctx->r1) = 0;
    // 0x80088BA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BAC: sb          $zero, 0x4C26($at)
    MEM_B(0X4C26, ctx->r1) = 0;
    // 0x80088BB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BB4: sb          $zero, 0x4C24($at)
    MEM_B(0X4C24, ctx->r1) = 0;
    // 0x80088BB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BBC: sb          $zero, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = 0;
    // 0x80088BC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BC4: sh          $zero, 0x4C22($at)
    MEM_H(0X4C22, ctx->r1) = 0;
    // 0x80088BC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BCC: sh          $zero, 0x4C0C($at)
    MEM_H(0X4C0C, ctx->r1) = 0;
    // 0x80088BD0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80088BD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BD8: sh          $t8, 0x4C1E($at)
    MEM_H(0X4C1E, ctx->r1) = ctx->r24;
    // 0x80088BDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BE0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80088BE4: sh          $t9, 0x4C1C($at)
    MEM_H(0X4C1C, ctx->r1) = ctx->r25;
    // 0x80088BE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BEC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80088BF0: sh          $t0, 0x4C1A($at)
    MEM_H(0X4C1A, ctx->r1) = ctx->r8;
    // 0x80088BF4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80088BF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BFC: sh          $t1, 0x4C20($at)
    MEM_H(0X4C20, ctx->r1) = ctx->r9;
    // 0x80088C00: jal         0x80088D84
    // 0x80088C04: nop

    func_80088D84(rdram, ctx);
        goto after_0;
    // 0x80088C04: nop

    after_0:
    // 0x80088C08: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_80088C0C:
    // 0x80088C0C: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80088C10: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C14: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80088C18: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80088C1C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80088C20: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80088C24: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80088C28: sw          $t2, 0x4D48($at)
    MEM_W(0X4D48, ctx->r1) = ctx->r10;
    // 0x80088C2C: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80088C30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80088C34: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80088C38: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80088C3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80088C40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C44: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80088C48: swc1        $f4, 0x4D4C($at)
    MEM_W(0X4D4C, ctx->r1) = ctx->f4.u32l;
    // 0x80088C4C: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80088C50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80088C54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80088C58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80088C5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80088C60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C64: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80088C68: swc1        $f6, 0x4D50($at)
    MEM_W(0X4D50, ctx->r1) = ctx->f6.u32l;
    // 0x80088C6C: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80088C70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C74: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80088C78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80088C7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80088C80: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80088C84: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
    // 0x80088C88: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x80088C8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C90: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80088C94: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80088C98: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80088C9C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80088CA0: sh          $zero, 0x4D56($at)
    MEM_H(0X4D56, ctx->r1) = 0;
    // 0x80088CA4: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80088CA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088CAC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80088CB0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80088CB4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80088CB8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80088CBC: sh          $zero, 0x4D58($at)
    MEM_H(0X4D58, ctx->r1) = 0;
    // 0x80088CC0: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80088CC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088CC8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80088CCC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80088CD0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80088CD4: sh          $t5, 0x4C28($at)
    MEM_H(0X4C28, ctx->r1) = ctx->r13;
    // 0x80088CD8: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80088CDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088CE0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80088CE4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80088CE8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80088CEC: sh          $t8, 0x4C58($at)
    MEM_H(0X4C58, ctx->r1) = ctx->r24;
    // 0x80088CF0: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80088CF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088CF8: sll         $t2, $t3, 1
    ctx->r10 = S32(ctx->r11 << 1);
    // 0x80088CFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80088D00: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80088D04: sh          $t1, 0x4C88($at)
    MEM_H(0X4C88, ctx->r1) = ctx->r9;
    // 0x80088D08: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80088D0C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088D10: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80088D14: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80088D18: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80088D1C: sh          $t4, 0x4CB8($at)
    MEM_H(0X4CB8, ctx->r1) = ctx->r12;
    // 0x80088D20: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80088D24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088D28: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80088D2C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80088D30: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80088D34: sh          $t7, 0x4CE8($at)
    MEM_H(0X4CE8, ctx->r1) = ctx->r15;
    // 0x80088D38: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80088D3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088D40: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x80088D44: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80088D48: sh          $zero, 0x4D18($at)
    MEM_H(0X4D18, ctx->r1) = 0;
    // 0x80088D4C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x80088D50: nop

    // 0x80088D54: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80088D58: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80088D5C: sra         $t4, $t6, 16
    ctx->r12 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80088D60: slti        $at, $t4, 0x18
    ctx->r1 = SIGNED(ctx->r12) < 0X18 ? 1 : 0;
    // 0x80088D64: bne         $at, $zero, L_80088C0C
    if (ctx->r1 != 0) {
        // 0x80088D68: sh          $t2, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r10;
            goto L_80088C0C;
    }
    // 0x80088D68: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x80088D6C: b           L_80088D74
    // 0x80088D70: nop

        goto L_80088D74;
    // 0x80088D70: nop

L_80088D74:
    // 0x80088D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088D78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088D7C: jr          $ra
    // 0x80088D80: nop

    return;
    // 0x80088D80: nop

;}
RECOMP_FUNC void func_8008C638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C638: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008C63C: sb          $zero, 0x6606($at)
    MEM_B(0X6606, ctx->r1) = 0;
    // 0x8008C640: jr          $ra
    // 0x8008C644: nop

    return;
    // 0x8008C644: nop

    // 0x8008C648: jr          $ra
    // 0x8008C64C: nop

    return;
    // 0x8008C64C: nop

;}
RECOMP_FUNC void func_800CF260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF260: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CF264: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CF268: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CF26C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CF270: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF274: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF278: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF27C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF284: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF28C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF290: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CF294: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CF298: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800CF29C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2A0: nop

    // 0x800CF2A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CF2A8: nop

    // 0x800CF2AC: bne         $t1, $zero, L_800CF314
    if (ctx->r9 != 0) {
        // 0x800CF2B0: nop
    
            goto L_800CF314;
    }
    // 0x800CF2B0: nop

    // 0x800CF2B4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2B8: nop

    // 0x800CF2BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CF2C0: nop

    // 0x800CF2C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CF2C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CF2CC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2D0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800CF2D4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CF2D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2DC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800CF2E0: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x800CF2E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CF2E8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2EC: nop

    // 0x800CF2F0: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x800CF2F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CF2F8: nop

    // 0x800CF2FC: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800CF300: nop

    // 0x800CF304: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800CF308: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800CF30C: nop

    // 0x800CF310: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
L_800CF314:
    // 0x800CF314: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CF318: nop

    // 0x800CF31C: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800CF320: nop

    // 0x800CF324: bne         $t4, $zero, L_800CF3D8
    if (ctx->r12 != 0) {
        // 0x800CF328: nop
    
            goto L_800CF3D8;
    }
    // 0x800CF328: nop

    // 0x800CF32C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CF330: nop

    // 0x800CF334: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800CF338: nop

    // 0x800CF33C: slti        $at, $t5, -0x9
    ctx->r1 = SIGNED(ctx->r13) < -0X9 ? 1 : 0;
    // 0x800CF340: beq         $at, $zero, L_800CF354
    if (ctx->r1 == 0) {
        // 0x800CF344: nop
    
            goto L_800CF354;
    }
    // 0x800CF344: nop

    // 0x800CF348: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CF34C: addiu       $t6, $zero, -0xA
    ctx->r14 = ADD32(0, -0XA);
    // 0x800CF350: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800CF354:
    // 0x800CF354: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CF358: nop

    // 0x800CF35C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800CF360: nop

    // 0x800CF364: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800CF368: nop

    // 0x800CF36C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CF370: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800CF374: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CF378: nop

    // 0x800CF37C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800CF380: nop

    // 0x800CF384: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800CF388: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x800CF38C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800CF390: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CF394: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CF398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF39C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF3A0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800CF3A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800CF3A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CF3AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CF3B0: jal         0x800295C0
    // 0x800CF3B4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x800CF3B4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800CF3B8: beq         $v0, $zero, L_800CF3D0
    if (ctx->r2 == 0) {
        // 0x800CF3BC: nop
    
            goto L_800CF3D0;
    }
    // 0x800CF3BC: nop

    // 0x800CF3C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF3C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF3C8: jal         0x8002B0E4
    // 0x800CF3CC: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800CF3CC: nop

    after_1:
L_800CF3D0:
    // 0x800CF3D0: b           L_800CF3F0
    // 0x800CF3D4: nop

        goto L_800CF3F0;
    // 0x800CF3D4: nop

L_800CF3D8:
    // 0x800CF3D8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800CF3DC: nop

    // 0x800CF3E0: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x800CF3E4: nop

    // 0x800CF3E8: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800CF3EC: sh          $t5, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r13;
L_800CF3F0:
    // 0x800CF3F0: b           L_800CF3F8
    // 0x800CF3F4: nop

        goto L_800CF3F8;
    // 0x800CF3F4: nop

L_800CF3F8:
    // 0x800CF3F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CF3FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CF400: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF404: jr          $ra
    // 0x800CF408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CF408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80062EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062EAC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80062EB0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80062EB4: lw          $t6, 0x39D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X39D0);
    // 0x80062EB8: nop

    // 0x80062EBC: beq         $t6, $zero, L_80062ED8
    if (ctx->r14 == 0) {
        // 0x80062EC0: nop
    
            goto L_80062ED8;
    }
    // 0x80062EC0: nop

    // 0x80062EC4: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80062EC8: lw          $t7, 0x39D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X39D0);
    // 0x80062ECC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80062ED0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80062ED4: sw          $t8, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r24;
L_80062ED8:
    // 0x80062ED8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80062EDC: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80062EE0: lw          $t9, 0x39D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X39D0);
    // 0x80062EE4: nop

    // 0x80062EE8: bne         $t9, $zero, L_80062FB0
    if (ctx->r25 != 0) {
        // 0x80062EEC: nop
    
            goto L_80062FB0;
    }
    // 0x80062EEC: nop

    // 0x80062EF0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80062EF4: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x80062EF8: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80062EFC: nop

    // 0x80062F00: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x80062F04: beq         $t2, $zero, L_80062F18
    if (ctx->r10 == 0) {
        // 0x80062F08: nop
    
            goto L_80062F18;
    }
    // 0x80062F08: nop

    // 0x80062F0C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80062F10: b           L_80062F8C
    // 0x80062F14: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
        goto L_80062F8C;
    // 0x80062F14: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_80062F18:
    // 0x80062F18: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80062F1C: addiu       $t4, $t4, -0x1D10
    ctx->r12 = ADD32(ctx->r12, -0X1D10);
    // 0x80062F20: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80062F24: nop

    // 0x80062F28: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x80062F2C: beq         $t6, $zero, L_80062F40
    if (ctx->r14 == 0) {
        // 0x80062F30: nop
    
            goto L_80062F40;
    }
    // 0x80062F30: nop

    // 0x80062F34: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80062F38: b           L_80062F8C
    // 0x80062F3C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
        goto L_80062F8C;
    // 0x80062F3C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_80062F40:
    // 0x80062F40: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80062F44: addiu       $t8, $t8, -0x1D10
    ctx->r24 = ADD32(ctx->r24, -0X1D10);
    // 0x80062F48: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80062F4C: nop

    // 0x80062F50: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x80062F54: beq         $t0, $zero, L_80062F68
    if (ctx->r8 == 0) {
        // 0x80062F58: nop
    
            goto L_80062F68;
    }
    // 0x80062F58: nop

    // 0x80062F5C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80062F60: b           L_80062F8C
    // 0x80062F64: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
        goto L_80062F8C;
    // 0x80062F64: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
L_80062F68:
    // 0x80062F68: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80062F6C: addiu       $t2, $t2, -0x1D10
    ctx->r10 = ADD32(ctx->r10, -0X1D10);
    // 0x80062F70: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80062F74: nop

    // 0x80062F78: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x80062F7C: beq         $t4, $zero, L_80062F8C
    if (ctx->r12 == 0) {
        // 0x80062F80: nop
    
            goto L_80062F8C;
    }
    // 0x80062F80: nop

    // 0x80062F84: addiu       $t5, $zero, -0x2
    ctx->r13 = ADD32(0, -0X2);
    // 0x80062F88: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
L_80062F8C:
    // 0x80062F8C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80062F90: nop

    // 0x80062F94: beq         $t6, $zero, L_80062FA8
    if (ctx->r14 == 0) {
        // 0x80062F98: nop
    
            goto L_80062FA8;
    }
    // 0x80062F98: nop

    // 0x80062F9C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80062FA0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80062FA4: sw          $t7, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r15;
L_80062FA8:
    // 0x80062FA8: b           L_800630E8
    // 0x80062FAC: nop

        goto L_800630E8;
    // 0x80062FAC: nop

L_80062FB0:
    // 0x80062FB0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80062FB4: addiu       $t8, $t8, -0x1D30
    ctx->r24 = ADD32(ctx->r24, -0X1D30);
    // 0x80062FB8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80062FBC: nop

    // 0x80062FC0: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x80062FC4: beq         $t0, $zero, L_80062FFC
    if (ctx->r8 == 0) {
        // 0x80062FC8: nop
    
            goto L_80062FFC;
    }
    // 0x80062FC8: nop

    // 0x80062FCC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80062FD0: lw          $t1, 0x39D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X39D0);
    // 0x80062FD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80062FD8: bne         $t1, $at, L_80062FF4
    if (ctx->r9 != ctx->r1) {
        // 0x80062FDC: nop
    
            goto L_80062FF4;
    }
    // 0x80062FDC: nop

    // 0x80062FE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80062FE4: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80062FE8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80062FEC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80062FF0: sw          $t3, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r11;
L_80062FF4:
    // 0x80062FF4: b           L_800630E8
    // 0x80062FF8: nop

        goto L_800630E8;
    // 0x80062FF8: nop

L_80062FFC:
    // 0x80062FFC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80063000: addiu       $t4, $t4, -0x1D30
    ctx->r12 = ADD32(ctx->r12, -0X1D30);
    // 0x80063004: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80063008: nop

    // 0x8006300C: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x80063010: beq         $t6, $zero, L_80063048
    if (ctx->r14 == 0) {
        // 0x80063014: nop
    
            goto L_80063048;
    }
    // 0x80063014: nop

    // 0x80063018: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8006301C: lw          $t7, 0x39D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X39D0);
    // 0x80063020: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80063024: bne         $t7, $at, L_80063040
    if (ctx->r15 != ctx->r1) {
        // 0x80063028: nop
    
            goto L_80063040;
    }
    // 0x80063028: nop

    // 0x8006302C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80063030: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80063034: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80063038: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006303C: sw          $t9, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r25;
L_80063040:
    // 0x80063040: b           L_800630E8
    // 0x80063044: nop

        goto L_800630E8;
    // 0x80063044: nop

L_80063048:
    // 0x80063048: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006304C: addiu       $t0, $t0, -0x1D30
    ctx->r8 = ADD32(ctx->r8, -0X1D30);
    // 0x80063050: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80063054: nop

    // 0x80063058: andi        $t2, $t1, 0x800
    ctx->r10 = ctx->r9 & 0X800;
    // 0x8006305C: beq         $t2, $zero, L_80063094
    if (ctx->r10 == 0) {
        // 0x80063060: nop
    
            goto L_80063094;
    }
    // 0x80063060: nop

    // 0x80063064: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80063068: lw          $t3, 0x39D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X39D0);
    // 0x8006306C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80063070: bne         $t3, $at, L_8006308C
    if (ctx->r11 != ctx->r1) {
        // 0x80063074: nop
    
            goto L_8006308C;
    }
    // 0x80063074: nop

    // 0x80063078: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8006307C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80063080: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80063084: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80063088: sw          $t5, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r13;
L_8006308C:
    // 0x8006308C: b           L_800630E8
    // 0x80063090: nop

        goto L_800630E8;
    // 0x80063090: nop

L_80063094:
    // 0x80063094: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063098: addiu       $t6, $t6, -0x1D30
    ctx->r14 = ADD32(ctx->r14, -0X1D30);
    // 0x8006309C: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800630A0: nop

    // 0x800630A4: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x800630A8: beq         $t8, $zero, L_800630E0
    if (ctx->r24 == 0) {
        // 0x800630AC: nop
    
            goto L_800630E0;
    }
    // 0x800630AC: nop

    // 0x800630B0: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x800630B4: lw          $t9, 0x39D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X39D0);
    // 0x800630B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800630BC: bne         $t9, $at, L_800630D8
    if (ctx->r25 != ctx->r1) {
        // 0x800630C0: nop
    
            goto L_800630D8;
    }
    // 0x800630C0: nop

    // 0x800630C4: addiu       $t0, $zero, -0x2
    ctx->r8 = ADD32(0, -0X2);
    // 0x800630C8: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800630CC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800630D0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800630D4: sw          $t1, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r9;
L_800630D8:
    // 0x800630D8: b           L_800630E8
    // 0x800630DC: nop

        goto L_800630E8;
    // 0x800630DC: nop

L_800630E0:
    // 0x800630E0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800630E4: sw          $zero, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = 0;
L_800630E8:
    // 0x800630E8: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x800630EC: b           L_800630FC
    // 0x800630F0: nop

        goto L_800630FC;
    // 0x800630F0: nop

    // 0x800630F4: b           L_800630FC
    // 0x800630F8: nop

        goto L_800630FC;
    // 0x800630F8: nop

L_800630FC:
    // 0x800630FC: jr          $ra
    // 0x80063100: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80063100: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009E10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E10C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E114: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E118: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E11C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E120: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E124: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E12C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E130: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E134: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009E138: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E13C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009E140: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E144: nop

    // 0x8009E148: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009E14C: nop

    // 0x8009E150: bne         $t1, $zero, L_8009E170
    if (ctx->r9 != 0) {
        // 0x8009E154: nop
    
            goto L_8009E170;
    }
    // 0x8009E154: nop

    // 0x8009E158: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E15C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009E160: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009E164: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E168: nop

    // 0x8009E16C: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_8009E170:
    // 0x8009E170: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E174: nop

    // 0x8009E178: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8009E17C: nop

    // 0x8009E180: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8009E184: beq         $at, $zero, L_8009E1C4
    if (ctx->r1 == 0) {
        // 0x8009E188: nop
    
            goto L_8009E1C4;
    }
    // 0x8009E188: nop

    // 0x8009E18C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E190: nop

    // 0x8009E194: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8009E198: nop

    // 0x8009E19C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8009E1A0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x8009E1A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E1A8: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x8009E1AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009E1B0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8009E1B4: nop

    // 0x8009E1B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009E1BC: b           L_8009E1F4
    // 0x8009E1C0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_8009E1F4;
    // 0x8009E1C0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_8009E1C4:
    // 0x8009E1C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E1C8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009E1CC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8009E1D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E1D4: nop

    // 0x8009E1D8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x8009E1DC: lui         $a2, 0x450B
    ctx->r6 = S32(0X450B << 16);
    // 0x8009E1E0: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x8009E1E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8009E1E8: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x8009E1EC: jal         0x800941C4
    // 0x8009E1F0: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    func_800941C4(rdram, ctx);
        goto after_0;
    // 0x8009E1F0: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_0:
L_8009E1F4:
    // 0x8009E1F4: b           L_8009E1FC
    // 0x8009E1F8: nop

        goto L_8009E1FC;
    // 0x8009E1F8: nop

L_8009E1FC:
    // 0x8009E1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E204: jr          $ra
    // 0x8009E208: nop

    return;
    // 0x8009E208: nop

;}
RECOMP_FUNC void func_80095E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095E1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095E20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80095E24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095E28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095E30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095E34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095E38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095E3C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80095E40: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80095E44: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80095E48: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80095E4C: jal         0x80015538
    // 0x80095E50: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80095E50: nop

    after_0:
    // 0x80095E54: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80095E58: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80095E5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095E60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80095E64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80095E68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80095E6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80095E70: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80095E74: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80095E78: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80095E7C: b           L_80095E84
    // 0x80095E80: nop

        goto L_80095E84;
    // 0x80095E80: nop

L_80095E84:
    // 0x80095E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095E8C: jr          $ra
    // 0x80095E90: nop

    return;
    // 0x80095E90: nop

;}
RECOMP_FUNC void func_800E2738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2738: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E273C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E2740: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E2744: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E2748: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E274C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2750: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2754: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2758: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E275C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2764: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2768: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E276C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2770: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E2774: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E2778: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E277C: nop

    // 0x800E2780: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E2784: nop

    // 0x800E2788: bne         $t1, $zero, L_800E2848
    if (ctx->r9 != 0) {
        // 0x800E278C: nop
    
            goto L_800E2848;
    }
    // 0x800E278C: nop

    // 0x800E2790: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E2794: nop

    // 0x800E2798: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E279C: nop

    // 0x800E27A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E27A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E27A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E27AC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E27B0: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E27B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E27B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E27BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E27C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800E27C4: jal         0x8001C0EC
    // 0x800E27C8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E27C8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E27CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E27D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E27D4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E27D8: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E27DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E27E0: jal         0x8001ABF4
    // 0x800E27E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E27E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E27E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E27EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E27F0: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E27F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E27F8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E27FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E2800: jal         0x8001ABF4
    // 0x800E2804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E2804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E2808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E280C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2810: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    // 0x800E2814: jal         0x80029EF8
    // 0x800E2818: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800E2818: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x800E281C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E2820: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E2824: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E2828: nop

    // 0x800E282C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E2830: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E2834: nop

    // 0x800E2838: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800E283C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E2840: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800E2844: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E2848:
    // 0x800E2848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E284C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2850: jal         0x8002A8B4
    // 0x800E2854: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800E2854: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x800E2858: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E285C: nop

    // 0x800E2860: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E2864: nop

    // 0x800E2868: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x800E286C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E2870: nop

    // 0x800E2874: lwc1        $f8, 0x28($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800E2878: nop

    // 0x800E287C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800E2880: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E2884: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E2888: nop

    // 0x800E288C: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
    // 0x800E2890: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2894: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2898: jal         0x80029C40
    // 0x800E289C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E289C: nop

    after_5:
    // 0x800E28A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E28A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E28A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E28AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E28B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E28B4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E28B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E28BC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E28C0: jal         0x80029018
    // 0x800E28C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E28C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E28C8: beq         $v0, $zero, L_800E28EC
    if (ctx->r2 == 0) {
        // 0x800E28CC: nop
    
            goto L_800E28EC;
    }
    // 0x800E28CC: nop

    // 0x800E28D0: jal         0x800297DC
    // 0x800E28D4: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800E28D4: nop

    after_7:
    // 0x800E28D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E28DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E28E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E28E4: jal         0x80029824
    // 0x800E28E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800E28E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800E28EC:
    // 0x800E28EC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E28F0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E28F4: nop

    // 0x800E28F8: swc1        $f4, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f4.u32l;
    // 0x800E28FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E2900: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2904: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E290C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E2910: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E2914: jal         0x80029F58
    // 0x800E2918: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x800E2918: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x800E291C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E2920: bne         $v0, $at, L_800E2968
    if (ctx->r2 != ctx->r1) {
        // 0x800E2924: nop
    
            goto L_800E2968;
    }
    // 0x800E2924: nop

    // 0x800E2928: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E292C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E2930: nop

    // 0x800E2934: swc1        $f8, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f8.u32l;
    // 0x800E2938: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E293C: nop

    // 0x800E2940: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800E2944: nop

    // 0x800E2948: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800E294C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E2950: nop

    // 0x800E2954: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800E2958: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E295C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E2960: nop

    // 0x800E2964: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
L_800E2968:
    // 0x800E2968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E296C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2970: jal         0x8001B4AC
    // 0x800E2974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_10;
    // 0x800E2974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x800E2978: beq         $v0, $zero, L_800E29E0
    if (ctx->r2 == 0) {
        // 0x800E297C: nop
    
            goto L_800E29E0;
    }
    // 0x800E297C: nop

    // 0x800E2980: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E2984: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E2988: nop

    // 0x800E298C: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x800E2990: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E2994: nop

    // 0x800E2998: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E299C: nop

    // 0x800E29A0: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800E29A4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E29A8: nop

    // 0x800E29AC: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800E29B0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E29B4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E29B8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E29BC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E29C0: nop

    // 0x800E29C4: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800E29C8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E29CC: nop

    // 0x800E29D0: sh          $zero, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = 0;
    // 0x800E29D4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E29D8: nop

    // 0x800E29DC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800E29E0:
    // 0x800E29E0: b           L_800E29E8
    // 0x800E29E4: nop

        goto L_800E29E8;
    // 0x800E29E4: nop

L_800E29E8:
    // 0x800E29E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E29EC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E29F0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E29F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E29F8: jr          $ra
    // 0x800E29FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E29FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800C2C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C2C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C2C38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2C3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2C40: jal         0x8002B0E4
    // 0x800C2C44: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C2C44: nop

    after_0:
    // 0x800C2C48: b           L_800C2C50
    // 0x800C2C4C: nop

        goto L_800C2C50;
    // 0x800C2C4C: nop

L_800C2C50:
    // 0x800C2C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C2C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C2C58: jr          $ra
    // 0x800C2C5C: nop

    return;
    // 0x800C2C5C: nop

;}
RECOMP_FUNC void func_800B3118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3118: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800B311C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B3120: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B3124: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B3128: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B312C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B3130: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B3134: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B3138: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B313C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3144: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3148: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B314C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B3150: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800B3154: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3158: nop

    // 0x800B315C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B3160: nop

    // 0x800B3164: bne         $t1, $zero, L_800B31B0
    if (ctx->r9 != 0) {
        // 0x800B3168: nop
    
            goto L_800B31B0;
    }
    // 0x800B3168: nop

    // 0x800B316C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3170: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B3174: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B3178: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800B317C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B3180: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3184: nop

    // 0x800B3188: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B318C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800B3190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B3194: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3198: nop

    // 0x800B319C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B31A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B31A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B31A8: jal         0x800272E8
    // 0x800B31AC: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x800B31AC: nop

    after_0:
L_800B31B0:
    // 0x800B31B0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800B31B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B31B8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800B31BC: nop

    // 0x800B31C0: bne         $t7, $at, L_800B320C
    if (ctx->r15 != ctx->r1) {
        // 0x800B31C4: nop
    
            goto L_800B320C;
    }
    // 0x800B31C4: nop

    // 0x800B31C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B31CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B31D0: jal         0x8002A560
    // 0x800B31D4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_1;
    // 0x800B31D4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_1:
    // 0x800B31D8: bne         $v0, $zero, L_800B320C
    if (ctx->r2 != 0) {
        // 0x800B31DC: nop
    
            goto L_800B320C;
    }
    // 0x800B31DC: nop

    // 0x800B31E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B31E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B31E8: jal         0x8002A8B4
    // 0x800B31EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800B31EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_2:
    // 0x800B31F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B31F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B31F8: jal         0x8002A9A4
    // 0x800B31FC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8002A9A4(rdram, ctx);
        goto after_3;
    // 0x800B31FC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_3:
    // 0x800B3200: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3204: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B3208: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
L_800B320C:
    // 0x800B320C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3210: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x800B3214: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800B3218: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800B321C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B3220: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800B3224: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x800B3228: nop

    // 0x800B322C: bc1f        L_800B3278
    if (!c1cs) {
        // 0x800B3230: nop
    
            goto L_800B3278;
    }
    // 0x800B3230: nop

    // 0x800B3234: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3238: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B323C: lwc1        $f18, 0xC($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0XC);
    // 0x800B3240: lwc1        $f7, 0x4B80($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4B80);
    // 0x800B3244: lwc1        $f6, 0x4B84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B84);
    // 0x800B3248: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800B324C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800B3250: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800B3254: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x800B3258: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800B325C: nop

    // 0x800B3260: lwc1        $f20, 0xC($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800B3264: nop

    // 0x800B3268: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
    // 0x800B326C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3270: nop

    // 0x800B3274: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
L_800B3278:
    // 0x800B3278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B327C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3280: jal         0x80029C40
    // 0x800B3284: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B3284: nop

    after_4:
    // 0x800B3288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B328C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3290: jal         0x80029D04
    // 0x800B3294: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B3294: nop

    after_5:
    // 0x800B3298: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x800B329C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B32A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B32A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B32A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B32AC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800B32B0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800B32B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B32B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800B32BC: jal         0x800295C0
    // 0x800B32C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x800B32C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800B32C4: beq         $v0, $zero, L_800B32E4
    if (ctx->r2 == 0) {
        // 0x800B32C8: nop
    
            goto L_800B32E4;
    }
    // 0x800B32C8: nop

    // 0x800B32CC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B32D0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800B32D4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800B32D8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800B32DC: nop

    // 0x800B32E0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B32E4:
    // 0x800B32E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B32E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B32EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B32F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B32F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B32F8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x800B32FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B3300: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B3304: jal         0x80029018
    // 0x800B3308: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800B3308: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800B330C: beq         $v0, $zero, L_800B332C
    if (ctx->r2 == 0) {
        // 0x800B3310: nop
    
            goto L_800B332C;
    }
    // 0x800B3310: nop

    // 0x800B3314: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3318: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800B331C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800B3320: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3324: nop

    // 0x800B3328: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800B332C:
    // 0x800B332C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800B3330: lh          $t0, 0x51A0($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X51A0);
    // 0x800B3334: nop

    // 0x800B3338: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x800B333C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3340: nop

    // 0x800B3344: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800B3348: nop

    // 0x800B334C: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x800B3350: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3354: nop

    // 0x800B3358: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800B335C: nop

    // 0x800B3360: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800B3364: sh          $t4, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r12;
    // 0x800B3368: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B336C: nop

    // 0x800B3370: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800B3374: nop

    // 0x800B3378: bgtz        $t6, L_800B3398
    if (SIGNED(ctx->r14) > 0) {
        // 0x800B337C: nop
    
            goto L_800B3398;
    }
    // 0x800B337C: nop

    // 0x800B3380: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3384: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800B3388: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800B338C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B3390: nop

    // 0x800B3394: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800B3398:
    // 0x800B3398: b           L_800B33A0
    // 0x800B339C: nop

        goto L_800B33A0;
    // 0x800B339C: nop

L_800B33A0:
    // 0x800B33A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B33A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B33A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B33AC: jr          $ra
    // 0x800B33B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800B33B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800BF240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BF244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BF248: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BF24C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BF250: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BF254: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BF258: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF25C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF260: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BF264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF268: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BF26C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BF270: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BF274: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BF278: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BF27C: nop

    // 0x800BF280: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BF284: nop

    // 0x800BF288: bne         $t1, $zero, L_800BF2D8
    if (ctx->r9 != 0) {
        // 0x800BF28C: nop
    
            goto L_800BF2D8;
    }
    // 0x800BF28C: nop

    // 0x800BF290: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BF294: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BF298: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BF29C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BF2A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BF2A4: nop

    // 0x800BF2A8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BF2AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BF2B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BF2B4: nop

    // 0x800BF2B8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BF2BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BF2C0: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x800BF2C4: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800BF2C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF2CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF2D0: jal         0x8001BBDC
    // 0x800BF2D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800BF2D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800BF2D8:
    // 0x800BF2D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF2DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF2E0: jal         0x80029C40
    // 0x800BF2E4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BF2E4: nop

    after_1:
    // 0x800BF2E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF2EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF2F0: jal         0x80029D04
    // 0x800BF2F4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BF2F4: nop

    after_2:
    // 0x800BF2F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BF2FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF300: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800BF304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF308: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800BF30C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800BF310: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800BF314: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800BF318: jal         0x8001BB34
    // 0x800BF31C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800BF31C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800BF320: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BF324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BF328: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800BF32C: nop

    // 0x800BF330: bne         $t2, $at, L_800BF37C
    if (ctx->r10 != ctx->r1) {
        // 0x800BF334: nop
    
            goto L_800BF37C;
    }
    // 0x800BF334: nop

    // 0x800BF338: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BF33C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800BF340: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x800BF344: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BF348: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800BF34C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800BF350: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BF354: nop

    // 0x800BF358: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800BF35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF364: jal         0x8001BB34
    // 0x800BF368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800BF368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800BF36C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF374: jal         0x8001BBDC
    // 0x800BF378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800BF378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800BF37C:
    // 0x800BF37C: b           L_800BF384
    // 0x800BF380: nop

        goto L_800BF384;
    // 0x800BF380: nop

L_800BF384:
    // 0x800BF384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BF38C: jr          $ra
    // 0x800BF390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BF390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009318C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009318C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093194: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093198: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009319C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800931A0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800931A4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800931A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800931AC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800931B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800931B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800931B8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800931BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800931C0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800931C4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800931C8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800931CC: addiu       $a1, $a1, 0x17C8
    ctx->r5 = ADD32(ctx->r5, 0X17C8);
    // 0x800931D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800931D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800931D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800931DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800931E0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800931E4: jal         0x80027464
    // 0x800931E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800931E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800931EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800931F0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800931F4: addiu       $t1, $t1, 0x31B8
    ctx->r9 = ADD32(ctx->r9, 0X31B8);
    // 0x800931F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800931FC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80093200: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80093204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80093208: jal         0x8001C0EC
    // 0x8009320C: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8009320C: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    after_1:
    // 0x80093210: b           L_80093218
    // 0x80093214: nop

        goto L_80093218;
    // 0x80093214: nop

L_80093218:
    // 0x80093218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009321C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093220: jr          $ra
    // 0x80093224: nop

    return;
    // 0x80093224: nop

;}
RECOMP_FUNC void func_80084120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084120: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80084124: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80084128: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8008412C: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80084130: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80084134: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80084138: nop

    // 0x8008413C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80084140: nop

    // 0x80084144: bc1f        L_80084164
    if (!c1cs) {
        // 0x80084148: nop
    
            goto L_80084164;
    }
    // 0x80084148: nop

    // 0x8008414C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80084150: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80084154: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80084158: nop

    // 0x8008415C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80084160: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_80084164:
    // 0x80084164: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80084168: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8008416C: nop

    // 0x80084170: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80084174: nop

    // 0x80084178: bc1t        L_800841A0
    if (c1cs) {
        // 0x8008417C: nop
    
            goto L_800841A0;
    }
    // 0x8008417C: nop

    // 0x80084180: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80084184: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80084188: nop

    // 0x8008418C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80084190: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80084194: nop

    // 0x80084198: bc1f        L_800841A8
    if (!c1cs) {
        // 0x8008419C: nop
    
            goto L_800841A8;
    }
    // 0x8008419C: nop

L_800841A0:
    // 0x800841A0: b           L_800841E0
    // 0x800841A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800841E0;
    // 0x800841A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800841A8:
    // 0x800841A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800841AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800841B0: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800841B4: nop

    // 0x800841B8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800841BC: nop

    // 0x800841C0: bc1f        L_800841D0
    if (!c1cs) {
        // 0x800841C4: nop
    
            goto L_800841D0;
    }
    // 0x800841C4: nop

    // 0x800841C8: b           L_800841E0
    // 0x800841CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800841E0;
    // 0x800841CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800841D0:
    // 0x800841D0: b           L_800841E0
    // 0x800841D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800841E0;
    // 0x800841D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800841D8: b           L_800841E0
    // 0x800841DC: nop

        goto L_800841E0;
    // 0x800841DC: nop

L_800841E0:
    // 0x800841E0: jr          $ra
    // 0x800841E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800841E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009D4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D4EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D4F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D4F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009D4F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009D4FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009D500: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009D504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009D50C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D510: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009D514: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009D518: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8009D51C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D520: bne         $t8, $at, L_8009D540
    if (ctx->r24 != ctx->r1) {
        // 0x8009D524: nop
    
            goto L_8009D540;
    }
    // 0x8009D524: nop

    // 0x8009D528: b           L_8009D530
    // 0x8009D52C: nop

        goto L_8009D530;
    // 0x8009D52C: nop

L_8009D530:
    // 0x8009D530: jal         0x8009CC88
    // 0x8009D534: nop

    func_8009CC88(rdram, ctx);
        goto after_0;
    // 0x8009D534: nop

    after_0:
    // 0x8009D538: b           L_8009D540
    // 0x8009D53C: nop

        goto L_8009D540;
    // 0x8009D53C: nop

L_8009D540:
    // 0x8009D540: b           L_8009D548
    // 0x8009D544: nop

        goto L_8009D548;
    // 0x8009D544: nop

L_8009D548:
    // 0x8009D548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D550: jr          $ra
    // 0x8009D554: nop

    return;
    // 0x8009D554: nop

;}
RECOMP_FUNC void func_800BDEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDEE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800BDEE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BDEE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800BDEEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BDEF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BDEF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BDEF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BDEFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDF00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BDF04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDF08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BDF0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BDF10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BDF14: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800BDF18: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF1C: nop

    // 0x800BDF20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BDF24: nop

    // 0x800BDF28: bne         $t1, $zero, L_800BDFB0
    if (ctx->r9 != 0) {
        // 0x800BDF2C: nop
    
            goto L_800BDFB0;
    }
    // 0x800BDF2C: nop

    // 0x800BDF30: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF34: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BDF38: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BDF3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BDF40: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF44: nop

    // 0x800BDF48: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BDF4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BDF50: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF54: nop

    // 0x800BDF58: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BDF5C: jal         0x80014E80
    // 0x800BDF60: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800BDF60: addiu       $a0, $zero, -0x5A
    ctx->r4 = ADD32(0, -0X5A);
    after_0:
    // 0x800BDF64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800BDF68: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF6C: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x800BDF70: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800BDF74: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BDF78: jal         0x80015538
    // 0x800BDF7C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800BDF7C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x800BDF80: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF84: nop

    // 0x800BDF88: swc1        $f0, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f0.u32l;
    // 0x800BDF8C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800BDF90: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800BDF94: lwc1        $f12, 0xD4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0XD4);
    // 0x800BDF98: lwc1        $f14, 0x3C($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800BDF9C: jal         0x8002A800
    // 0x800BDFA0: nop

    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x800BDFA0: nop

    after_2:
    // 0x800BDFA4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BDFA8: nop

    // 0x800BDFAC: sh          $v0, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = ctx->r2;
L_800BDFB0:
    // 0x800BDFB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800BDFB4: nop

    // 0x800BDFB8: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800BDFBC: nop

    // 0x800BDFC0: swc1        $f10, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f10.u32l;
    // 0x800BDFC4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800BDFC8: nop

    // 0x800BDFCC: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800BDFD0: nop

    // 0x800BDFD4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800BDFD8: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
    // 0x800BDFDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDFE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDFE4: jal         0x80028FA0
    // 0x800BDFE8: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800BDFE8: nop

    after_3:
    // 0x800BDFEC: beq         $v0, $zero, L_800BE024
    if (ctx->r2 == 0) {
        // 0x800BDFF0: nop
    
            goto L_800BE024;
    }
    // 0x800BDFF0: nop

    // 0x800BDFF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDFF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDFFC: jal         0x80029B60
    // 0x800BE000: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800BE000: nop

    after_4:
    // 0x800BE004: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800BE008: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800BE00C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800BE010: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BE014: nop

    // 0x800BE018: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800BE01C: b           L_800BE13C
    // 0x800BE020: nop

        goto L_800BE13C;
    // 0x800BE020: nop

L_800BE024:
    // 0x800BE024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE02C: jal         0x80029C40
    // 0x800BE030: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800BE030: nop

    after_5:
    // 0x800BE034: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800BE038: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x800BE03C: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800BE040: lwc1        $f14, 0xD4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x800BE044: jal         0x8002A800
    // 0x800BE048: nop

    func_8002A800(rdram, ctx);
        goto after_6;
    // 0x800BE048: nop

    after_6:
    // 0x800BE04C: bne         $v0, $zero, L_800BE088
    if (ctx->r2 != 0) {
        // 0x800BE050: nop
    
            goto L_800BE088;
    }
    // 0x800BE050: nop

    // 0x800BE054: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BE058: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800BE05C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800BE060: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800BE064: nop

    // 0x800BE068: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800BE06C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800BE070: nop

    // 0x800BE074: lwc1        $f16, 0x3C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800BE078: nop

    // 0x800BE07C: swc1        $f16, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f16.u32l;
    // 0x800BE080: b           L_800BE13C
    // 0x800BE084: nop

        goto L_800BE13C;
    // 0x800BE084: nop

L_800BE088:
    // 0x800BE088: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800BE08C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800BE090: lh          $t2, 0xB4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB4);
    // 0x800BE094: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BE098: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800BE09C: nop

    // 0x800BE0A0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800BE0A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800BE0A8: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800BE0AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800BE0B0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800BE0B4: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800BE0B8: jal         0x80015538
    // 0x800BE0BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800BE0BC: nop

    after_7:
    // 0x800BE0C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800BE0C4: nop

    // 0x800BE0C8: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800BE0CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BE0D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BE0D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE0D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE0DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800BE0E0: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x800BE0E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BE0E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BE0EC: jal         0x80029018
    // 0x800BE0F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800BE0F0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800BE0F4: beq         $v0, $zero, L_800BE134
    if (ctx->r2 == 0) {
        // 0x800BE0F8: nop
    
            goto L_800BE134;
    }
    // 0x800BE0F8: nop

    // 0x800BE0FC: jal         0x80014E80
    // 0x800BE100: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x800BE100: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_9:
    // 0x800BE104: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800BE108: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800BE10C: lh          $t8, 0xB4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB4);
    // 0x800BE110: lwc1        $f12, 0xD4($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x800BE114: multu       $s0, $t8
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800BE118: mflo        $t9
    ctx->r25 = lo;
    // 0x800BE11C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800BE120: jal         0x80015538
    // 0x800BE124: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800BE124: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_10:
    // 0x800BE128: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800BE12C: nop

    // 0x800BE130: swc1        $f0, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f0.u32l;
L_800BE134:
    // 0x800BE134: b           L_800BE13C
    // 0x800BE138: nop

        goto L_800BE13C;
    // 0x800BE138: nop

L_800BE13C:
    // 0x800BE13C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BE140: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800BE144: jr          $ra
    // 0x800BE148: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800BE148: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E91E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E91E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E91E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E91EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E91F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E91F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E91F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E91FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E9200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E9208: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E920C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E9210: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E9214: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E9218: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E921C: nop

    // 0x800E9220: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E9224: nop

    // 0x800E9228: bne         $t1, $zero, L_800E93D4
    if (ctx->r9 != 0) {
        // 0x800E922C: nop
    
            goto L_800E93D4;
    }
    // 0x800E922C: nop

    // 0x800E9230: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9234: nop

    // 0x800E9238: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E923C: nop

    // 0x800E9240: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E9244: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E9248: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E924C: nop

    // 0x800E9250: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E9254: nop

    // 0x800E9258: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E925C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9260: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E9264: addiu       $t7, $t7, -0x6714
    ctx->r15 = ADD32(ctx->r15, -0X6714);
    // 0x800E9268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E926C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E9270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E9274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E9278: jal         0x8001C0EC
    // 0x800E927C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E927C: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800E9280: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9284: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E9288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E928C: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800E9290: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x800E9294: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800E9298: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E929C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E92A0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800E92A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E92A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x800E92AC: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800E92B0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800E92B4: addiu       $a2, $a2, 0x4498
    ctx->r6 = ADD32(ctx->r6, 0X4498);
    // 0x800E92B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E92BC: jal         0x80027C00
    // 0x800E92C0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_80027C00(rdram, ctx);
        goto after_1;
    // 0x800E92C0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x800E92C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E92C8: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E92CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E92D0: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800E92D4: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x800E92D8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800E92DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E92E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800E92E4: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800E92E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E92EC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x800E92F0: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800E92F4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800E92F8: addiu       $a2, $a2, 0x44A4
    ctx->r6 = ADD32(ctx->r6, 0X44A4);
    // 0x800E92FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E9300: jal         0x80027C00
    // 0x800E9304: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_80027C00(rdram, ctx);
        goto after_2;
    // 0x800E9304: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x800E9308: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E930C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E9310: lwc1        $f18, 0x553C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X553C);
    // 0x800E9314: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800E9318: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x800E931C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800E9320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E9328: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800E932C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9330: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800E9334: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800E9338: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800E933C: addiu       $a2, $a2, 0x448C
    ctx->r6 = ADD32(ctx->r6, 0X448C);
    // 0x800E9340: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800E9344: jal         0x80027C00
    // 0x800E9348: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80027C00(rdram, ctx);
        goto after_3;
    // 0x800E9348: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800E934C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9350: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E9354: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x800E9358: addiu       $a3, $a3, -0x66C4
    ctx->r7 = ADD32(ctx->r7, -0X66C4);
    // 0x800E935C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E9360: jal         0x8001ABF4
    // 0x800E9364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800E9364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800E9368: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E936C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800E9370: addiu       $t4, $t4, -0x668C
    ctx->r12 = ADD32(ctx->r12, -0X668C);
    // 0x800E9374: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x800E9378: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800E937C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E9380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E9384: jal         0x8001C0EC
    // 0x800E9388: addiu       $a3, $zero, 0xC6
    ctx->r7 = ADD32(0, 0XC6);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800E9388: addiu       $a3, $zero, 0xC6
    ctx->r7 = ADD32(0, 0XC6);
    after_5:
    // 0x800E938C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9390: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800E9394: addiu       $t6, $t6, -0x6688
    ctx->r14 = ADD32(ctx->r14, -0X6688);
    // 0x800E9398: lh          $a0, 0xEA($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XEA);
    // 0x800E939C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800E93A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E93A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E93A8: jal         0x8001C0EC
    // 0x800E93AC: addiu       $a3, $zero, 0xC7
    ctx->r7 = ADD32(0, 0XC7);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800E93AC: addiu       $a3, $zero, 0xC7
    ctx->r7 = ADD32(0, 0XC7);
    after_6:
    // 0x800E93B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E93B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E93B8: addiu       $t7, $t7, -0x66F4
    ctx->r15 = ADD32(ctx->r15, -0X66F4);
    // 0x800E93BC: lh          $a0, 0xEC($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XEC);
    // 0x800E93C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E93C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E93C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E93CC: jal         0x8001C0EC
    // 0x800E93D0: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800E93D0: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_7:
L_800E93D4:
    // 0x800E93D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E93D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E93DC: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800E93E0: jal         0x8002A2EC
    // 0x800E93E4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x800E93E4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_8:
    // 0x800E93E8: beq         $v0, $zero, L_800E9408
    if (ctx->r2 == 0) {
        // 0x800E93EC: nop
    
            goto L_800E9408;
    }
    // 0x800E93EC: nop

    // 0x800E93F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E93F4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E93F8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E93FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E9400: nop

    // 0x800E9404: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E9408:
    // 0x800E9408: b           L_800E9410
    // 0x800E940C: nop

        goto L_800E9410;
    // 0x800E940C: nop

L_800E9410:
    // 0x800E9410: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E9414: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E9418: jr          $ra
    // 0x800E941C: nop

    return;
    // 0x800E941C: nop

;}
RECOMP_FUNC void func_800DC4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC4CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DC4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DC4D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC4D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC4DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC4E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC4E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC4E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC4EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC4F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC4F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC4F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC4FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DC500: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC504: nop

    // 0x800DC508: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DC50C: nop

    // 0x800DC510: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DC514: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x800DC518: beq         $at, $zero, L_800DC5AC
    if (ctx->r1 == 0) {
        // 0x800DC51C: nop
    
            goto L_800DC5AC;
    }
    // 0x800DC51C: nop

    // 0x800DC520: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DC524: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DC528: addu        $at, $at, $t2
    gpr jr_addend_800DC534 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DC52C: lw          $t2, 0x5344($at)
    ctx->r10 = ADD32(ctx->r1, 0X5344);
    // 0x800DC530: nop

    // 0x800DC534: jr          $t2
    // 0x800DC538: nop

    switch (jr_addend_800DC534 >> 2) {
        case 0: goto L_800DC53C; break;
        case 1: goto L_800DC54C; break;
        case 2: goto L_800DC55C; break;
        case 3: goto L_800DC56C; break;
        case 4: goto L_800DC57C; break;
        case 5: goto L_800DC58C; break;
        case 6: goto L_800DC59C; break;
        default: switch_error(__func__, 0x800DC534, 0x80115344);
    }
    // 0x800DC538: nop

L_800DC53C:
    // 0x800DC53C: jal         0x800DC300
    // 0x800DC540: nop

    func_800DC300(rdram, ctx);
        goto after_0;
    // 0x800DC540: nop

    after_0:
    // 0x800DC544: b           L_800DC5B4
    // 0x800DC548: nop

        goto L_800DC5B4;
    // 0x800DC548: nop

L_800DC54C:
    // 0x800DC54C: jal         0x800DC3D0
    // 0x800DC550: nop

    func_800DC3D0(rdram, ctx);
        goto after_1;
    // 0x800DC550: nop

    after_1:
    // 0x800DC554: b           L_800DC5B4
    // 0x800DC558: nop

        goto L_800DC5B4;
    // 0x800DC558: nop

L_800DC55C:
    // 0x800DC55C: jal         0x800DBA0C
    // 0x800DC560: nop

    func_800DBA0C(rdram, ctx);
        goto after_2;
    // 0x800DC560: nop

    after_2:
    // 0x800DC564: b           L_800DC5B4
    // 0x800DC568: nop

        goto L_800DC5B4;
    // 0x800DC568: nop

L_800DC56C:
    // 0x800DC56C: jal         0x800DBB78
    // 0x800DC570: nop

    func_800DBB78(rdram, ctx);
        goto after_3;
    // 0x800DC570: nop

    after_3:
    // 0x800DC574: b           L_800DC5B4
    // 0x800DC578: nop

        goto L_800DC5B4;
    // 0x800DC578: nop

L_800DC57C:
    // 0x800DC57C: jal         0x800DBBA8
    // 0x800DC580: nop

    func_800DBBA8(rdram, ctx);
        goto after_4;
    // 0x800DC580: nop

    after_4:
    // 0x800DC584: b           L_800DC5B4
    // 0x800DC588: nop

        goto L_800DC5B4;
    // 0x800DC588: nop

L_800DC58C:
    // 0x800DC58C: jal         0x800DBCFC
    // 0x800DC590: nop

    func_800DBCFC(rdram, ctx);
        goto after_5;
    // 0x800DC590: nop

    after_5:
    // 0x800DC594: b           L_800DC5B4
    // 0x800DC598: nop

        goto L_800DC5B4;
    // 0x800DC598: nop

L_800DC59C:
    // 0x800DC59C: jal         0x800DC07C
    // 0x800DC5A0: nop

    func_800DC07C(rdram, ctx);
        goto after_6;
    // 0x800DC5A0: nop

    after_6:
    // 0x800DC5A4: b           L_800DC5B4
    // 0x800DC5A8: nop

        goto L_800DC5B4;
    // 0x800DC5A8: nop

L_800DC5AC:
    // 0x800DC5AC: b           L_800DC5B4
    // 0x800DC5B0: nop

        goto L_800DC5B4;
    // 0x800DC5B0: nop

L_800DC5B4:
    // 0x800DC5B4: b           L_800DC5BC
    // 0x800DC5B8: nop

        goto L_800DC5BC;
    // 0x800DC5B8: nop

L_800DC5BC:
    // 0x800DC5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DC5C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DC5C4: jr          $ra
    // 0x800DC5C8: nop

    return;
    // 0x800DC5C8: nop

;}
RECOMP_FUNC void func_800EE134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE134: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EE138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EE13C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800EE140: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EE144: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EE148: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EE14C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE150: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE154: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EE158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE15C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EE160: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EE164: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EE168: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EE16C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EE170: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EE174: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800EE178: nop

    // 0x800EE17C: beq         $s0, $at, L_800EE1A4
    if (ctx->r16 == ctx->r1) {
        // 0x800EE180: nop
    
            goto L_800EE1A4;
    }
    // 0x800EE180: nop

    // 0x800EE184: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EE188: beq         $s0, $at, L_800EE1B4
    if (ctx->r16 == ctx->r1) {
        // 0x800EE18C: nop
    
            goto L_800EE1B4;
    }
    // 0x800EE18C: nop

    // 0x800EE190: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800EE194: beq         $s0, $at, L_800EE1C4
    if (ctx->r16 == ctx->r1) {
        // 0x800EE198: nop
    
            goto L_800EE1C4;
    }
    // 0x800EE198: nop

    // 0x800EE19C: b           L_800EE1D4
    // 0x800EE1A0: nop

        goto L_800EE1D4;
    // 0x800EE1A0: nop

L_800EE1A4:
    // 0x800EE1A4: jal         0x800EDAE0
    // 0x800EE1A8: nop

    func_800EDAE0(rdram, ctx);
        goto after_0;
    // 0x800EE1A8: nop

    after_0:
    // 0x800EE1AC: b           L_800EE1DC
    // 0x800EE1B0: nop

        goto L_800EE1DC;
    // 0x800EE1B0: nop

L_800EE1B4:
    // 0x800EE1B4: jal         0x800EDDE4
    // 0x800EE1B8: nop

    func_800EDDE4(rdram, ctx);
        goto after_1;
    // 0x800EE1B8: nop

    after_1:
    // 0x800EE1BC: b           L_800EE1DC
    // 0x800EE1C0: nop

        goto L_800EE1DC;
    // 0x800EE1C0: nop

L_800EE1C4:
    // 0x800EE1C4: jal         0x800EDFA4
    // 0x800EE1C8: nop

    func_800EDFA4(rdram, ctx);
        goto after_2;
    // 0x800EE1C8: nop

    after_2:
    // 0x800EE1CC: b           L_800EE1DC
    // 0x800EE1D0: nop

        goto L_800EE1DC;
    // 0x800EE1D0: nop

L_800EE1D4:
    // 0x800EE1D4: b           L_800EE1DC
    // 0x800EE1D8: nop

        goto L_800EE1DC;
    // 0x800EE1D8: nop

L_800EE1DC:
    // 0x800EE1DC: b           L_800EE1E4
    // 0x800EE1E0: nop

        goto L_800EE1E4;
    // 0x800EE1E0: nop

L_800EE1E4:
    // 0x800EE1E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE1E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800EE1EC: jr          $ra
    // 0x800EE1F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800EE1F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AF814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF814: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AF818: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AF81C: nop

    // 0x800AF820: bne         $t6, $zero, L_800AF858
    if (ctx->r14 != 0) {
        // 0x800AF824: nop
    
            goto L_800AF858;
    }
    // 0x800AF824: nop

    // 0x800AF828: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AF82C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AF830: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF834: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AF838: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AF83C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AF840: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AF844: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AF848: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AF84C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800AF850: b           L_800AF8A4
    // 0x800AF854: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800AF8A4;
    // 0x800AF854: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800AF858:
    // 0x800AF858: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800AF85C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800AF860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AF864: bne         $t0, $at, L_800AF89C
    if (ctx->r8 != ctx->r1) {
        // 0x800AF868: nop
    
            goto L_800AF89C;
    }
    // 0x800AF868: nop

    // 0x800AF86C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800AF870: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800AF874: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF878: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AF87C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AF880: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AF884: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AF888: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AF88C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AF890: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800AF894: b           L_800AF8A4
    // 0x800AF898: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800AF8A4;
    // 0x800AF898: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800AF89C:
    // 0x800AF89C: jr          $ra
    // 0x800AF8A0: nop

    return;
    // 0x800AF8A0: nop

L_800AF8A4:
    // 0x800AF8A4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800AF8A8: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x800AF8AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AF8B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AF8B4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AF8B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AF8BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AF8C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AF8C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AF8C8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AF8CC: jr          $ra
    // 0x800AF8D0: nop

    return;
    // 0x800AF8D0: nop

    // 0x800AF8D4: jr          $ra
    // 0x800AF8D8: nop

    return;
    // 0x800AF8D8: nop

;}
RECOMP_FUNC void func_800CA52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA534: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA538: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA53C: jal         0x8002B0E4
    // 0x800CA540: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CA540: nop

    after_0:
    // 0x800CA544: b           L_800CA54C
    // 0x800CA548: nop

        goto L_800CA54C;
    // 0x800CA548: nop

L_800CA54C:
    // 0x800CA54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA554: jr          $ra
    // 0x800CA558: nop

    return;
    // 0x800CA558: nop

;}
RECOMP_FUNC void func_800AE9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE9A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AE9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AE9AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AE9B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AE9B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AE9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AE9BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE9C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AE9C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE9C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AE9CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AE9D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AE9D4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800AE9D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE9DC: nop

    // 0x800AE9E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AE9E4: nop

    // 0x800AE9E8: bne         $t1, $zero, L_800AEA44
    if (ctx->r9 != 0) {
        // 0x800AE9EC: nop
    
            goto L_800AEA44;
    }
    // 0x800AE9EC: nop

    // 0x800AE9F0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE9F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AE9F8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AE9FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AEA00: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA04: nop

    // 0x800AEA08: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AEA0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AEA10: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA14: nop

    // 0x800AEA18: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AEA1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA20: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800AEA24: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x800AEA28: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA2C: nop

    // 0x800AEA30: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800AEA34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEA38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEA3C: jal         0x8001BB34
    // 0x800AEA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800AEA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800AEA44:
    // 0x800AEA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEA4C: jal         0x80029C40
    // 0x800AEA50: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800AEA50: nop

    after_1:
    // 0x800AEA54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEA58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEA5C: jal         0x80029D04
    // 0x800AEA60: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800AEA60: nop

    after_2:
    // 0x800AEA64: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA68: nop

    // 0x800AEA6C: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800AEA70: nop

    // 0x800AEA74: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800AEA78: sh          $t1, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r9;
    // 0x800AEA7C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA80: nop

    // 0x800AEA84: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800AEA88: nop

    // 0x800AEA8C: bgtz        $t3, L_800AEB64
    if (SIGNED(ctx->r11) > 0) {
        // 0x800AEA90: nop
    
            goto L_800AEB64;
    }
    // 0x800AEA90: nop

    // 0x800AEA94: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEA98: nop

    // 0x800AEA9C: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800AEAA0: nop

    // 0x800AEAA4: sh          $t5, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r13;
    // 0x800AEAA8: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEAAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AEAB0: beq         $t6, $at, L_800AEAD4
    if (ctx->r14 == ctx->r1) {
        // 0x800AEAB4: nop
    
            goto L_800AEAD4;
    }
    // 0x800AEAB4: nop

    // 0x800AEAB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEAC0: jal         0x800281A4
    // 0x800AEAC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_3;
    // 0x800AEAC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800AEAC8: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEACC: jal         0x8002B0E4
    // 0x800AEAD0: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x800AEAD0: nop

    after_4:
L_800AEAD4:
    // 0x800AEAD4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEAD8: nop

    // 0x800AEADC: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x800AEAE0: nop

    // 0x800AEAE4: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    // 0x800AEAE8: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEAEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AEAF0: beq         $t0, $at, L_800AEB14
    if (ctx->r8 == ctx->r1) {
        // 0x800AEAF4: nop
    
            goto L_800AEB14;
    }
    // 0x800AEAF4: nop

    // 0x800AEAF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEB00: jal         0x800281A4
    // 0x800AEB04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_5;
    // 0x800AEB04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800AEB08: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEB0C: jal         0x8002B0E4
    // 0x800AEB10: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800AEB10: nop

    after_6:
L_800AEB14:
    // 0x800AEB14: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEB18: nop

    // 0x800AEB1C: lh          $t9, 0xEC($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XEC);
    // 0x800AEB20: nop

    // 0x800AEB24: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x800AEB28: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEB2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AEB30: beq         $t2, $at, L_800AEB54
    if (ctx->r10 == ctx->r1) {
        // 0x800AEB34: nop
    
            goto L_800AEB54;
    }
    // 0x800AEB34: nop

    // 0x800AEB38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEB3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEB40: jal         0x800281A4
    // 0x800AEB44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x800AEB44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x800AEB48: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AEB4C: jal         0x8002B0E4
    // 0x800AEB50: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800AEB50: nop

    after_8:
L_800AEB54:
    // 0x800AEB54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEB58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEB5C: jal         0x8002B0E4
    // 0x800AEB60: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800AEB60: nop

    after_9:
L_800AEB64:
    // 0x800AEB64: b           L_800AEB6C
    // 0x800AEB68: nop

        goto L_800AEB6C;
    // 0x800AEB68: nop

L_800AEB6C:
    // 0x800AEB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AEB70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AEB74: jr          $ra
    // 0x800AEB78: nop

    return;
    // 0x800AEB78: nop

;}
RECOMP_FUNC void func_800E0938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E0938: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E093C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E0940: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E0944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E0948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E094C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E0954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E095C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E0960: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E0964: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E0968: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E096C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E0970: nop

    // 0x800E0974: bne         $t0, $zero, L_800E09A0
    if (ctx->r8 != 0) {
        // 0x800E0978: nop
    
            goto L_800E09A0;
    }
    // 0x800E0978: nop

    // 0x800E097C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E0980: nop

    // 0x800E0984: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E0988: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E098C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800E0990: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E0994: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E0998: b           L_800E09C0
    // 0x800E099C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E09C0;
    // 0x800E099C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E09A0:
    // 0x800E09A0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800E09A4: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800E09A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E09AC: bne         $t5, $at, L_800E09C0
    if (ctx->r13 != ctx->r1) {
        // 0x800E09B0: nop
    
            goto L_800E09C0;
    }
    // 0x800E09B0: nop

    // 0x800E09B4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E09B8: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800E09BC: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_800E09C0:
    // 0x800E09C0: b           L_800E09C8
    // 0x800E09C4: nop

        goto L_800E09C8;
    // 0x800E09C4: nop

L_800E09C8:
    // 0x800E09C8: jr          $ra
    // 0x800E09CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E09CC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DCEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCEE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DCEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DCEEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DCEF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DCEF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DCEF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DCEFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCF00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DCF04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCF08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DCF0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DCF10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DCF14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DCF18: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCF1C: nop

    // 0x800DCF20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DCF24: nop

    // 0x800DCF28: bne         $t1, $zero, L_800DCF64
    if (ctx->r9 != 0) {
        // 0x800DCF2C: nop
    
            goto L_800DCF64;
    }
    // 0x800DCF2C: nop

    // 0x800DCF30: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCF34: nop

    // 0x800DCF38: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DCF3C: nop

    // 0x800DCF40: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DCF44: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DCF48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCF4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCF50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DCF54: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DCF58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DCF5C: jal         0x8001ABF4
    // 0x800DCF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800DCF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800DCF64:
    // 0x800DCF64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DCF68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DCF6C: jal         0x8002A1FC
    // 0x800DCF70: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800DCF70: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_1:
    // 0x800DCF74: beq         $v0, $zero, L_800DCF94
    if (ctx->r2 == 0) {
        // 0x800DCF78: nop
    
            goto L_800DCF94;
    }
    // 0x800DCF78: nop

    // 0x800DCF7C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCF80: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800DCF84: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800DCF88: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCF8C: nop

    // 0x800DCF90: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800DCF94:
    // 0x800DCF94: b           L_800DCF9C
    // 0x800DCF98: nop

        goto L_800DCF9C;
    // 0x800DCF98: nop

L_800DCF9C:
    // 0x800DCF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DCFA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DCFA4: jr          $ra
    // 0x800DCFA8: nop

    return;
    // 0x800DCFA8: nop

;}
RECOMP_FUNC void func_80092790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092790: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092794: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092798: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009279C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800927A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800927A4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800927A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800927AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800927B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800927B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800927B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800927BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800927C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800927C4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800927C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800927CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800927D0: addiu       $a1, $a1, 0x16FC
    ctx->r5 = ADD32(ctx->r5, 0X16FC);
    // 0x800927D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800927D8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800927DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800927E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800927E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800927E8: jal         0x80027464
    // 0x800927EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800927EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800927F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800927F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800927F8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800927FC: addiu       $a3, $a3, 0x1CF8
    ctx->r7 = ADD32(ctx->r7, 0X1CF8);
    // 0x80092800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092804: jal         0x8001ABF4
    // 0x80092808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009280C: b           L_80092814
    // 0x80092810: nop

        goto L_80092814;
    // 0x80092810: nop

L_80092814:
    // 0x80092814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009281C: jr          $ra
    // 0x80092820: nop

    return;
    // 0x80092820: nop

;}
RECOMP_FUNC void func_800DD7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD7B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DD7B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DD7B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD7BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD7C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD7C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD7C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD7CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DD7D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD7D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DD7D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DD7DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DD7E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DD7E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DD7E8: nop

    // 0x800DD7EC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DD7F0: nop

    // 0x800DD7F4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DD7F8: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800DD7FC: beq         $at, $zero, L_800DD880
    if (ctx->r1 == 0) {
        // 0x800DD800: nop
    
            goto L_800DD880;
    }
    // 0x800DD800: nop

    // 0x800DD804: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DD808: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DD80C: addu        $at, $at, $t2
    gpr jr_addend_800DD818 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DD810: lw          $t2, 0x5360($at)
    ctx->r10 = ADD32(ctx->r1, 0X5360);
    // 0x800DD814: nop

    // 0x800DD818: jr          $t2
    // 0x800DD81C: nop

    switch (jr_addend_800DD818 >> 2) {
        case 0: goto L_800DD820; break;
        case 1: goto L_800DD830; break;
        case 2: goto L_800DD840; break;
        case 3: goto L_800DD850; break;
        case 4: goto L_800DD860; break;
        case 5: goto L_800DD870; break;
        default: switch_error(__func__, 0x800DD818, 0x80115360);
    }
    // 0x800DD81C: nop

L_800DD820:
    // 0x800DD820: jal         0x800DCEE4
    // 0x800DD824: nop

    func_800DCEE4(rdram, ctx);
        goto after_0;
    // 0x800DD824: nop

    after_0:
    // 0x800DD828: b           L_800DD888
    // 0x800DD82C: nop

        goto L_800DD888;
    // 0x800DD82C: nop

L_800DD830:
    // 0x800DD830: jal         0x800DCFAC
    // 0x800DD834: nop

    func_800DCFAC(rdram, ctx);
        goto after_1;
    // 0x800DD834: nop

    after_1:
    // 0x800DD838: b           L_800DD888
    // 0x800DD83C: nop

        goto L_800DD888;
    // 0x800DD83C: nop

L_800DD840:
    // 0x800DD840: jal         0x800DD160
    // 0x800DD844: nop

    func_800DD160(rdram, ctx);
        goto after_2;
    // 0x800DD844: nop

    after_2:
    // 0x800DD848: b           L_800DD888
    // 0x800DD84C: nop

        goto L_800DD888;
    // 0x800DD84C: nop

L_800DD850:
    // 0x800DD850: jal         0x800DD300
    // 0x800DD854: nop

    func_800DD300(rdram, ctx);
        goto after_3;
    // 0x800DD854: nop

    after_3:
    // 0x800DD858: b           L_800DD888
    // 0x800DD85C: nop

        goto L_800DD888;
    // 0x800DD85C: nop

L_800DD860:
    // 0x800DD860: jal         0x800DD690
    // 0x800DD864: nop

    func_800DD690(rdram, ctx);
        goto after_4;
    // 0x800DD864: nop

    after_4:
    // 0x800DD868: b           L_800DD888
    // 0x800DD86C: nop

        goto L_800DD888;
    // 0x800DD86C: nop

L_800DD870:
    // 0x800DD870: jal         0x800DD6C0
    // 0x800DD874: nop

    func_800DD6C0(rdram, ctx);
        goto after_5;
    // 0x800DD874: nop

    after_5:
    // 0x800DD878: b           L_800DD888
    // 0x800DD87C: nop

        goto L_800DD888;
    // 0x800DD87C: nop

L_800DD880:
    // 0x800DD880: b           L_800DD888
    // 0x800DD884: nop

        goto L_800DD888;
    // 0x800DD884: nop

L_800DD888:
    // 0x800DD888: b           L_800DD890
    // 0x800DD88C: nop

        goto L_800DD890;
    // 0x800DD88C: nop

L_800DD890:
    // 0x800DD890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DD894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DD898: jr          $ra
    // 0x800DD89C: nop

    return;
    // 0x800DD89C: nop

;}
RECOMP_FUNC void func_800E80E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E80E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E80E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E80E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E80EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E80F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E80F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E80F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E80FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8104: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8108: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E810C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E8110: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E8114: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E8118: nop

    // 0x800E811C: bne         $t0, $zero, L_800E8148
    if (ctx->r8 != 0) {
        // 0x800E8120: nop
    
            goto L_800E8148;
    }
    // 0x800E8120: nop

    // 0x800E8124: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E8128: nop

    // 0x800E812C: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E8130: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E8134: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800E8138: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E813C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E8140: b           L_800E815C
    // 0x800E8144: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E815C;
    // 0x800E8144: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E8148:
    // 0x800E8148: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E814C: nop

    // 0x800E8150: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800E8154: nop

    // 0x800E8158: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
L_800E815C:
    // 0x800E815C: b           L_800E8164
    // 0x800E8160: nop

        goto L_800E8164;
    // 0x800E8160: nop

L_800E8164:
    // 0x800E8164: jr          $ra
    // 0x800E8168: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E8168: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DAE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAE20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800DAE24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DAE28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800DAE2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DAE30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DAE34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DAE38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DAE3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAE40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DAE44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DAE48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DAE4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DAE50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DAE54: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800DAE58: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DAE5C: nop

    // 0x800DAE60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DAE64: nop

    // 0x800DAE68: bne         $t1, $zero, L_800DAEC0
    if (ctx->r9 != 0) {
        // 0x800DAE6C: nop
    
            goto L_800DAEC0;
    }
    // 0x800DAE6C: nop

    // 0x800DAE70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800DAE74: nop

    // 0x800DAE78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DAE7C: nop

    // 0x800DAE80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DAE84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DAE88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DAE8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DAE90: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DAE94: nop

    // 0x800DAE98: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DAE9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DAEA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800DAEA4: addiu       $t6, $t6, -0x7164
    ctx->r14 = ADD32(ctx->r14, -0X7164);
    // 0x800DAEA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DAEAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800DAEB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DAEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DAEB8: jal         0x8001C0EC
    // 0x800DAEBC: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DAEBC: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    after_0:
L_800DAEC0:
    // 0x800DAEC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DAEC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DAEC8: jal         0x80028FA0
    // 0x800DAECC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800DAECC: nop

    after_1:
    // 0x800DAED0: beq         $v0, $zero, L_800DAEE8
    if (ctx->r2 == 0) {
        // 0x800DAED4: nop
    
            goto L_800DAEE8;
    }
    // 0x800DAED4: nop

    // 0x800DAED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DAEDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DAEE0: jal         0x80029B60
    // 0x800DAEE4: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800DAEE4: nop

    after_2:
L_800DAEE8:
    // 0x800DAEE8: jal         0x80014E80
    // 0x800DAEEC: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800DAEEC: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    after_3:
    // 0x800DAEF0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800DAEF4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800DAEF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DAEFC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DAF00: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DAF04: jal         0x80015538
    // 0x800DAF08: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800DAF08: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x800DAF0C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF10: nop

    // 0x800DAF14: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800DAF18: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF1C: nop

    // 0x800DAF20: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DAF24: nop

    // 0x800DAF28: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x800DAF2C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF30: nop

    // 0x800DAF34: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800DAF38: nop

    // 0x800DAF3C: bne         $t3, $zero, L_800DAFBC
    if (ctx->r11 != 0) {
        // 0x800DAF40: nop
    
            goto L_800DAFBC;
    }
    // 0x800DAF40: nop

    // 0x800DAF44: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF48: nop

    // 0x800DAF4C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800DAF50: nop

    // 0x800DAF54: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x800DAF58: beq         $at, $zero, L_800DAF90
    if (ctx->r1 == 0) {
        // 0x800DAF5C: nop
    
            goto L_800DAF90;
    }
    // 0x800DAF5C: nop

    // 0x800DAF60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DAF64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DAF68: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF6C: nop

    // 0x800DAF70: swc1        $f10, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f10.u32l;
    // 0x800DAF74: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF78: nop

    // 0x800DAF7C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800DAF80: nop

    // 0x800DAF84: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800DAF88: b           L_800DAFB4
    // 0x800DAF8C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
        goto L_800DAFB4;
    // 0x800DAF8C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_800DAF90:
    // 0x800DAF90: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DAF94: nop

    // 0x800DAF98: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800DAF9C: nop

    // 0x800DAFA0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800DAFA4: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800DAFA8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DAFAC: nop

    // 0x800DAFB0: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
L_800DAFB4:
    // 0x800DAFB4: b           L_800DB020
    // 0x800DAFB8: nop

        goto L_800DB020;
    // 0x800DAFB8: nop

L_800DAFBC:
    // 0x800DAFBC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800DAFC0: nop

    // 0x800DAFC4: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800DAFC8: nop

    // 0x800DAFCC: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x800DAFD0: beq         $at, $zero, L_800DB008
    if (ctx->r1 == 0) {
        // 0x800DAFD4: nop
    
            goto L_800DB008;
    }
    // 0x800DAFD4: nop

    // 0x800DAFD8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800DAFDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800DAFE0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DAFE4: nop

    // 0x800DAFE8: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
    // 0x800DAFEC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800DAFF0: nop

    // 0x800DAFF4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800DAFF8: nop

    // 0x800DAFFC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800DB000: b           L_800DB020
    // 0x800DB004: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
        goto L_800DB020;
    // 0x800DB004: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800DB008:
    // 0x800DB008: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800DB00C: nop

    // 0x800DB010: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800DB014: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800DB018: nop

    // 0x800DB01C: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
L_800DB020:
    // 0x800DB020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB028: jal         0x80029C40
    // 0x800DB02C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800DB02C: nop

    after_5:
    // 0x800DB030: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DB034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DB038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB03C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB040: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800DB044: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800DB048: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DB04C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800DB050: jal         0x80029018
    // 0x800DB054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800DB054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800DB058: beq         $v0, $zero, L_800DB07C
    if (ctx->r2 == 0) {
        // 0x800DB05C: nop
    
            goto L_800DB07C;
    }
    // 0x800DB05C: nop

    // 0x800DB060: jal         0x800297DC
    // 0x800DB064: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800DB064: nop

    after_7:
    // 0x800DB068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB06C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB070: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DB074: jal         0x80029824
    // 0x800DB078: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800DB078: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800DB07C:
    // 0x800DB07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB080: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB084: jal         0x8002A1FC
    // 0x800DB088: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800DB088: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_9:
    // 0x800DB08C: beq         $v0, $zero, L_800DB0E0
    if (ctx->r2 == 0) {
        // 0x800DB090: nop
    
            goto L_800DB0E0;
    }
    // 0x800DB090: nop

    // 0x800DB094: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DB098: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800DB09C: nop

    // 0x800DB0A0: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
    // 0x800DB0A4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800DB0A8: nop

    // 0x800DB0AC: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800DB0B0: nop

    // 0x800DB0B4: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
    // 0x800DB0B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DB0BC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800DB0C0: nop

    // 0x800DB0C4: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x800DB0C8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800DB0CC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800DB0D0: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DB0D4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800DB0D8: nop

    // 0x800DB0DC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800DB0E0:
    // 0x800DB0E0: b           L_800DB0E8
    // 0x800DB0E4: nop

        goto L_800DB0E8;
    // 0x800DB0E4: nop

L_800DB0E8:
    // 0x800DB0E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DB0EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800DB0F0: jr          $ra
    // 0x800DB0F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800DB0F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800AD034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AD034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AD038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AD03C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AD040: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AD044: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AD048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AD04C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD050: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AD054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AD058: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AD05C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AD060: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AD064: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800AD068: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD06C: nop

    // 0x800AD070: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AD074: nop

    // 0x800AD078: bne         $t1, $zero, L_800AD0D8
    if (ctx->r9 != 0) {
        // 0x800AD07C: nop
    
            goto L_800AD0D8;
    }
    // 0x800AD07C: nop

    // 0x800AD080: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD084: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AD088: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AD08C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800AD090: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AD094: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD098: nop

    // 0x800AD09C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AD0A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AD0A4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD0A8: nop

    // 0x800AD0AC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AD0B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD0B4: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x800AD0B8: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800AD0BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD0C0: nop

    // 0x800AD0C4: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800AD0C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD0CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD0D0: jal         0x8001BB34
    // 0x800AD0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800AD0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800AD0D8:
    // 0x800AD0D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD0DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD0E0: jal         0x80029C40
    // 0x800AD0E4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800AD0E4: nop

    after_1:
    // 0x800AD0E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD0EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD0F0: jal         0x80029D04
    // 0x800AD0F4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800AD0F4: nop

    after_2:
    // 0x800AD0F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD0FC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800AD100: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AD104: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800AD108: jal         0x80015538
    // 0x800AD10C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800AD10C: nop

    after_3:
    // 0x800AD110: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD114: nop

    // 0x800AD118: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x800AD11C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD120: lui         $at, 0xC180
    ctx->r1 = S32(0XC180 << 16);
    // 0x800AD124: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AD128: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800AD12C: jal         0x80015538
    // 0x800AD130: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800AD130: nop

    after_4:
    // 0x800AD134: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD138: nop

    // 0x800AD13C: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x800AD140: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD144: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AD148: lwc1        $f10, 0x4AD0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4AD0);
    // 0x800AD14C: lwc1        $f8, 0x44($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X44);
    // 0x800AD150: nop

    // 0x800AD154: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800AD158: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x800AD15C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD160: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AD164: lwc1        $f4, 0x4AD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4AD4);
    // 0x800AD168: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x800AD16C: nop

    // 0x800AD170: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800AD174: nop

    // 0x800AD178: bc1f        L_800AD1A0
    if (!c1cs) {
        // 0x800AD17C: nop
    
            goto L_800AD1A0;
    }
    // 0x800AD17C: nop

    // 0x800AD180: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD184: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AD188: lwc1        $f8, 0x4AD8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4AD8);
    // 0x800AD18C: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x800AD190: nop

    // 0x800AD194: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800AD198: b           L_800AD1AC
    // 0x800AD19C: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
        goto L_800AD1AC;
    // 0x800AD19C: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
L_800AD1A0:
    // 0x800AD1A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD1A4: nop

    // 0x800AD1A8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800AD1AC:
    // 0x800AD1AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD1B0: nop

    // 0x800AD1B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800AD1B8: nop

    // 0x800AD1BC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800AD1C0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800AD1C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD1C8: nop

    // 0x800AD1CC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AD1D0: nop

    // 0x800AD1D4: bgtz        $t1, L_800AD204
    if (SIGNED(ctx->r9) > 0) {
        // 0x800AD1D8: nop
    
            goto L_800AD204;
    }
    // 0x800AD1D8: nop

    // 0x800AD1DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD1E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD1E4: jal         0x8001BB34
    // 0x800AD1E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800AD1E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800AD1EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AD1F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AD1F4: jal         0x8002B0E4
    // 0x800AD1F8: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800AD1F8: nop

    after_6:
    // 0x800AD1FC: b           L_800AD20C
    // 0x800AD200: nop

        goto L_800AD20C;
    // 0x800AD200: nop

L_800AD204:
    // 0x800AD204: b           L_800AD20C
    // 0x800AD208: nop

        goto L_800AD20C;
    // 0x800AD208: nop

L_800AD20C:
    // 0x800AD20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AD210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AD214: jr          $ra
    // 0x800AD218: nop

    return;
    // 0x800AD218: nop

;}
