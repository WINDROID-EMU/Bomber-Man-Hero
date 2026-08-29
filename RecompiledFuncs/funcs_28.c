#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80090590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090590: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090594: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090598: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009059C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800905A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800905A4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800905A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800905AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800905B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800905B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800905B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800905BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800905C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800905C4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800905C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800905CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800905D0: addiu       $a1, $a1, 0x1408
    ctx->r5 = ADD32(ctx->r5, 0X1408);
    // 0x800905D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800905D8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800905DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800905E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800905E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800905E8: jal         0x80027464
    // 0x800905EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800905EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800905F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800905F4: b           L_800905FC
    // 0x800905F8: nop

        goto L_800905FC;
    // 0x800905F8: nop

L_800905FC:
    // 0x800905FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090600: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090604: jr          $ra
    // 0x80090608: nop

    return;
    // 0x80090608: nop

;}
RECOMP_FUNC void func_800BD434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD434: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BD438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BD43C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BD440: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x800BD444: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
L_800BD448:
    // 0x800BD448: lb          $a0, 0x26($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X26);
    // 0x800BD44C: jal         0x800BD3B8
    // 0x800BD450: nop

    func_800BD3B8(rdram, ctx);
        goto after_0;
    // 0x800BD450: nop

    after_0:
    // 0x800BD454: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x800BD458: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BD45C: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800BD460: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800BD464: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800BD468: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x800BD46C: lb          $t9, 0x26($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X26);
    // 0x800BD470: nop

    // 0x800BD474: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800BD478: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x800BD47C: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x800BD480: slti        $at, $t2, 0x7
    ctx->r1 = SIGNED(ctx->r10) < 0X7 ? 1 : 0;
    // 0x800BD484: bne         $at, $zero, L_800BD448
    if (ctx->r1 != 0) {
        // 0x800BD488: sb          $t0, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r8;
            goto L_800BD448;
    }
    // 0x800BD488: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x800BD48C: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800BD490: b           L_800BD4A0
    // 0x800BD494: nop

        goto L_800BD4A0;
    // 0x800BD494: nop

    // 0x800BD498: b           L_800BD4A0
    // 0x800BD49C: nop

        goto L_800BD4A0;
    // 0x800BD49C: nop

L_800BD4A0:
    // 0x800BD4A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD4A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BD4A8: jr          $ra
    // 0x800BD4AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BD4AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008C778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C778: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008C77C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008C780: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008C788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C78C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C790: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C794: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008C798: nop

    // 0x8008C79C: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8008C7A0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008C7A4: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008C7A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008C7AC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008C7B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008C7B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008C7B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008C7BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008C7C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008C7C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C7C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008C7CC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x8008C7D0: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8008C7D4: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008C7D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008C7DC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8008C7E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008C7E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008C7E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008C7EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008C7F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008C7F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C7F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008C7FC: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x8008C800: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8008C804: lh          $t5, 0x6($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X6);
    // 0x8008C808: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008C80C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8008C810: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C814: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C818: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008C81C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C820: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008C824: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C828: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008C82C: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8008C830: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8008C834: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x8008C838: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008C83C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8008C840: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008C844: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008C848: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008C84C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008C850: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008C854: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C858: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008C85C: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x8008C860: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008C864:
    // 0x8008C864: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8008C868: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x8008C86C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008C870: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C874: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008C878: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C87C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008C880: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C884: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8008C888: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8008C88C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008C890: lh          $t6, 0x4238($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4238);
    // 0x8008C894: nop

    // 0x8008C898: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8008C89C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8008C8A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C8A4: beq         $t7, $at, L_8008C984
    if (ctx->r15 == ctx->r1) {
        // 0x8008C8A8: nop
    
            goto L_8008C984;
    }
    // 0x8008C8A8: nop

    // 0x8008C8AC: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8008C8B0: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x8008C8B4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008C8B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008C8BC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008C8C0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8008C8C4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008C8C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008C8CC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8008C8D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008C8D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008C8D8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008C8DC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008C8E0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8008C8E4: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8008C8E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008C8EC: addu        $t4, $t2, $t0
    ctx->r12 = ADD32(ctx->r10, ctx->r8);
    // 0x8008C8F0: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x8008C8F4: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8008C8F8: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8008C8FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008C900: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008C904: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008C908: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8008C90C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008C910: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008C914: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008C918: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008C91C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008C920: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8008C924: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008C928: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008C92C: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8008C930: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008C934: addu        $t3, $t1, $t7
    ctx->r11 = ADD32(ctx->r9, ctx->r15);
    // 0x8008C938: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    // 0x8008C93C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008C940: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8008C944: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8008C948: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8008C94C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008C950: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008C954: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8008C958: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8008C95C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008C960: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008C964: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008C968: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8008C96C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x8008C970: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008C974: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8008C978: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008C97C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x8008C980: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
L_8008C984:
    // 0x8008C984: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8008C988: nop

    // 0x8008C98C: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x8008C990: sll         $t3, $t7, 16
    ctx->r11 = S32(ctx->r15 << 16);
    // 0x8008C994: sra         $t2, $t3, 16
    ctx->r10 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8008C998: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x8008C99C: bne         $at, $zero, L_8008C864
    if (ctx->r1 != 0) {
        // 0x8008C9A0: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_8008C864;
    }
    // 0x8008C9A0: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8008C9A4: b           L_8008C9AC
    // 0x8008C9A8: nop

        goto L_8008C9AC;
    // 0x8008C9A8: nop

L_8008C9AC:
    // 0x8008C9AC: jr          $ra
    // 0x8008C9B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008C9B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80080834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080834: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080838: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008083C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80080840: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80080844: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080848: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8008084C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080850: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080854: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080858: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008085C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080860: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080864: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080868: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008086C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80080870: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80080874: addiu       $t0, $zero, 0x2C7
    ctx->r8 = ADD32(0, 0X2C7);
    // 0x80080878: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8008087C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80080880: lwc1        $f4, -0x34EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X34EC);
    // 0x80080884: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80080888: nop

    // 0x8008088C: swc1        $f4, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f4.u32l;
    // 0x80080890: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80080894: nop

    // 0x80080898: lwc1        $f20, 0x14($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X14);
    // 0x8008089C: nop

    // 0x800808A0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800808A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800808A8: nop

    // 0x800808AC: swc1        $f20, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f20.u32l;
    // 0x800808B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800808B4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800808B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800808BC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800808C0: nop

    // 0x800808C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800808C8: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x800808CC: jal         0x80014E80
    // 0x800808D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800808D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x800808D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800808D8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800808DC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800808E0: jal         0x80014E80
    // 0x800808E4: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800808E4: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    after_1:
    // 0x800808E8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x800808EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800808F0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800808F4: swc1        $f18, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f18.u32l;
    // 0x800808F8: jal         0x80014E80
    // 0x800808FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x800808FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80080900: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x80080904: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80080908: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008090C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80080910: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x80080914: jal         0x80014E80
    // 0x80080918: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80080918: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    after_3:
    // 0x8008091C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80080920: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80080924: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80080928: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x8008092C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80080930: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80080934: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x80080938: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008093C: nop

    // 0x80080940: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
    // 0x80080944: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80080948: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x8008094C: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
    // 0x80080950: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80080954: nop

    // 0x80080958: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x8008095C: b           L_80080964
    // 0x80080960: nop

        goto L_80080964;
    // 0x80080960: nop

L_80080964:
    // 0x80080964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080968: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8008096C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80080970: jr          $ra
    // 0x80080974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80080974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A1E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A1E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1E48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1E4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1E50: jal         0x8002B0E4
    // 0x800A1E54: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800A1E54: nop

    after_0:
    // 0x800A1E58: b           L_800A1E60
    // 0x800A1E5C: nop

        goto L_800A1E60;
    // 0x800A1E5C: nop

L_800A1E60:
    // 0x800A1E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A1E68: jr          $ra
    // 0x800A1E6C: nop

    return;
    // 0x800A1E6C: nop

;}
RECOMP_FUNC void func_8009AF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AF18: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8009AF1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009AF20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8009AF24: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009AF28: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8009AF2C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8009AF30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009AF34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009AF38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009AF3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009AF40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AF44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009AF48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AF4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009AF50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009AF54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009AF58: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8009AF5C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009AF60: nop

    // 0x8009AF64: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8009AF68: nop

    // 0x8009AF6C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8009AF70: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009AF74: nop

    // 0x8009AF78: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x8009AF7C: nop

    // 0x8009AF80: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8009AF84: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009AF88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009AF8C: lh          $s0, 0xA4($t4)
    ctx->r16 = MEM_H(ctx->r12, 0XA4);
    // 0x8009AF90: nop

    // 0x8009AF94: beq         $s0, $at, L_8009AFC8
    if (ctx->r16 == ctx->r1) {
        // 0x8009AF98: nop
    
            goto L_8009AFC8;
    }
    // 0x8009AF98: nop

    // 0x8009AF9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009AFA0: beq         $s0, $at, L_8009B0B4
    if (ctx->r16 == ctx->r1) {
        // 0x8009AFA4: nop
    
            goto L_8009B0B4;
    }
    // 0x8009AFA4: nop

    // 0x8009AFA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009AFAC: beq         $s0, $at, L_8009B190
    if (ctx->r16 == ctx->r1) {
        // 0x8009AFB0: nop
    
            goto L_8009B190;
    }
    // 0x8009AFB0: nop

    // 0x8009AFB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009AFB8: beq         $s0, $at, L_8009B268
    if (ctx->r16 == ctx->r1) {
        // 0x8009AFBC: nop
    
            goto L_8009B268;
    }
    // 0x8009AFBC: nop

    // 0x8009AFC0: b           L_8009B348
    // 0x8009AFC4: nop

        goto L_8009B348;
    // 0x8009AFC4: nop

L_8009AFC8:
    // 0x8009AFC8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009AFCC: nop

    // 0x8009AFD0: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8009AFD4: nop

    // 0x8009AFD8: bne         $t6, $zero, L_8009B07C
    if (ctx->r14 != 0) {
        // 0x8009AFDC: nop
    
            goto L_8009B07C;
    }
    // 0x8009AFDC: nop

    // 0x8009AFE0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009AFE4: nop

    // 0x8009AFE8: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8009AFEC: nop

    // 0x8009AFF0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8009AFF4: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8009AFF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AFFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B000: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009B004: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x8009B008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009B00C: jal         0x8001ABF4
    // 0x8009B010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009B010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8009B014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B018: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009B01C: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x8009B020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B024: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8009B028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009B02C: jal         0x8001ABF4
    // 0x8009B030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009B030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009B034: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009B038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009B03C: lh          $a0, 0xEA($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEA);
    // 0x8009B040: jal         0x8001BB34
    // 0x8009B044: nop

    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x8009B044: nop

    after_2:
    // 0x8009B048: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009B04C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009B050: nop

    // 0x8009B054: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x8009B058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009B05C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009B060: nop

    // 0x8009B064: swc1        $f6, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f6.u32l;
    // 0x8009B068: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009B06C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B070: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009B074: nop

    // 0x8009B078: swc1        $f8, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f8.u32l;
L_8009B07C:
    // 0x8009B07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B080: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B084: jal         0x8002A1FC
    // 0x8009B088: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x8009B088: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_3:
    // 0x8009B08C: beq         $v0, $zero, L_8009B0AC
    if (ctx->r2 == 0) {
        // 0x8009B090: nop
    
            goto L_8009B0AC;
    }
    // 0x8009B090: nop

    // 0x8009B094: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009B098: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8009B09C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8009B0A0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009B0A4: nop

    // 0x8009B0A8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8009B0AC:
    // 0x8009B0AC: b           L_8009B348
    // 0x8009B0B0: nop

        goto L_8009B348;
    // 0x8009B0B0: nop

L_8009B0B4:
    // 0x8009B0B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009B0B8: nop

    // 0x8009B0BC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009B0C0: nop

    // 0x8009B0C4: bne         $t9, $zero, L_8009B138
    if (ctx->r25 != 0) {
        // 0x8009B0C8: nop
    
            goto L_8009B138;
    }
    // 0x8009B0C8: nop

    // 0x8009B0CC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B0D0: nop

    // 0x8009B0D4: lbu         $t0, 0x132($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X132);
    // 0x8009B0D8: nop

    // 0x8009B0DC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8009B0E0: sb          $t1, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r9;
    // 0x8009B0E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8009B0E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009B0EC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009B0F0: nop

    // 0x8009B0F4: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x8009B0F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009B0FC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009B100: nop

    // 0x8009B104: swc1        $f16, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f16.u32l;
    // 0x8009B108: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009B10C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009B110: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009B114: nop

    // 0x8009B118: swc1        $f18, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f18.u32l;
    // 0x8009B11C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009B128: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x8009B12C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009B130: jal         0x800175F0
    // 0x8009B134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8009B134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_8009B138:
    // 0x8009B138: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009B13C: nop

    // 0x8009B140: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8009B144: nop

    // 0x8009B148: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8009B14C: beq         $at, $zero, L_8009B170
    if (ctx->r1 == 0) {
        // 0x8009B150: nop
    
            goto L_8009B170;
    }
    // 0x8009B150: nop

    // 0x8009B154: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009B158: nop

    // 0x8009B15C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8009B160: nop

    // 0x8009B164: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009B168: b           L_8009B188
    // 0x8009B16C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
        goto L_8009B188;
    // 0x8009B16C: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_8009B170:
    // 0x8009B170: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B174: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009B178: sh          $t1, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r9;
    // 0x8009B17C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009B180: nop

    // 0x8009B184: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8009B188:
    // 0x8009B188: b           L_8009B348
    // 0x8009B18C: nop

        goto L_8009B348;
    // 0x8009B18C: nop

L_8009B190:
    // 0x8009B190: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009B194: nop

    // 0x8009B198: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x8009B19C: nop

    // 0x8009B1A0: bne         $t4, $zero, L_8009B230
    if (ctx->r12 != 0) {
        // 0x8009B1A4: nop
    
            goto L_8009B230;
    }
    // 0x8009B1A4: nop

    // 0x8009B1A8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009B1AC: nop

    // 0x8009B1B0: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8009B1B4: nop

    // 0x8009B1B8: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8009B1BC: sb          $t9, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r25;
    // 0x8009B1C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B1C4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8009B1C8: addiu       $t0, $t0, 0x6950
    ctx->r8 = ADD32(ctx->r8, 0X6950);
    // 0x8009B1CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B1D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8009B1D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009B1D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009B1DC: jal         0x8001C0EC
    // 0x8009B1E0: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8009B1E0: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    after_5:
    // 0x8009B1E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009B1E8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009B1EC: nop

    // 0x8009B1F0: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8009B1F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009B1F8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009B1FC: nop

    // 0x8009B200: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8009B204: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009B208: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B20C: nop

    // 0x8009B210: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
    // 0x8009B214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B21C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009B220: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x8009B224: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009B228: jal         0x800175F0
    // 0x8009B22C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x8009B22C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_8009B230:
    // 0x8009B230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B238: jal         0x8001B44C
    // 0x8009B23C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x8009B23C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x8009B240: beq         $v0, $zero, L_8009B260
    if (ctx->r2 == 0) {
        // 0x8009B244: nop
    
            goto L_8009B260;
    }
    // 0x8009B244: nop

    // 0x8009B248: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009B24C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8009B250: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8009B254: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009B258: nop

    // 0x8009B25C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8009B260:
    // 0x8009B260: b           L_8009B348
    // 0x8009B264: nop

        goto L_8009B348;
    // 0x8009B264: nop

L_8009B268:
    // 0x8009B268: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009B26C: nop

    // 0x8009B270: lbu         $t9, 0x132($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X132);
    // 0x8009B274: nop

    // 0x8009B278: bne         $t9, $zero, L_8009B300
    if (ctx->r25 != 0) {
        // 0x8009B27C: nop
    
            goto L_8009B300;
    }
    // 0x8009B27C: nop

    // 0x8009B280: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009B284: nop

    // 0x8009B288: lbu         $t0, 0x132($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X132);
    // 0x8009B28C: nop

    // 0x8009B290: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x8009B294: sb          $t8, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r24;
    // 0x8009B298: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B29C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009B2A0: addiu       $t1, $t1, 0x6950
    ctx->r9 = ADD32(ctx->r9, 0X6950);
    // 0x8009B2A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B2A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009B2AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009B2B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8009B2B4: jal         0x8001C0EC
    // 0x8009B2B8: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x8009B2B8: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    after_8:
    // 0x8009B2BC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B2C0: nop

    // 0x8009B2C4: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x8009B2C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009B2CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009B2D0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009B2D4: nop

    // 0x8009B2D8: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x8009B2DC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009B2E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009B2E4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009B2E8: nop

    // 0x8009B2EC: swc1        $f16, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f16.u32l;
    // 0x8009B2F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009B2F4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009B2F8: nop

    // 0x8009B2FC: swc1        $f18, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f18.u32l;
L_8009B300:
    // 0x8009B300: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009B304: nop

    // 0x8009B308: lh          $t9, 0xA6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XA6);
    // 0x8009B30C: nop

    // 0x8009B310: slti        $at, $t9, 0x3C
    ctx->r1 = SIGNED(ctx->r25) < 0X3C ? 1 : 0;
    // 0x8009B314: beq         $at, $zero, L_8009B338
    if (ctx->r1 == 0) {
        // 0x8009B318: nop
    
            goto L_8009B338;
    }
    // 0x8009B318: nop

    // 0x8009B31C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009B320: nop

    // 0x8009B324: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x8009B328: nop

    // 0x8009B32C: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x8009B330: b           L_8009B340
    // 0x8009B334: sh          $t5, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r13;
        goto L_8009B340;
    // 0x8009B334: sh          $t5, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r13;
L_8009B338:
    // 0x8009B338: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009B33C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
L_8009B340:
    // 0x8009B340: b           L_8009B348
    // 0x8009B344: nop

        goto L_8009B348;
    // 0x8009B344: nop

L_8009B348:
    // 0x8009B348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B34C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B350: jal         0x80029D8C
    // 0x8009B354: nop

    func_80029D8C(rdram, ctx);
        goto after_9;
    // 0x8009B354: nop

    after_9:
    // 0x8009B358: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8009B35C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8009B360: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009B364: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009B368: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B36C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009B370: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009B374: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8009B378: lwc1        $f20, 0x24($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X24);
    // 0x8009B37C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009B380: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B384: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8009B388: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009B38C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009B390: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8009B394: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x8009B398: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B39C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009B3A0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009B3A4: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x8009B3A8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8009B3AC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8009B3B0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8009B3B4: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8009B3B8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8009B3BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009B3C0: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8009B3C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009B3C8: lwc1        $f20, 0x28($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X28);
    // 0x8009B3CC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009B3D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B3D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009B3D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009B3DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009B3E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009B3E4: swc1        $f20, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f20.u32l;
    // 0x8009B3E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B3EC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009B3F0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009B3F4: swc1        $f20, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f20.u32l;
    // 0x8009B3F8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8009B3FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8009B400: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009B404: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009B408: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009B40C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009B410: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009B414: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8009B418: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8009B41C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009B420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B424: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8009B428: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009B42C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009B430: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8009B434: swc1        $f20, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f20.u32l;
    // 0x8009B438: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009B43C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009B440: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009B444: swc1        $f20, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f20.u32l;
    // 0x8009B448: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8009B44C: nop

    // 0x8009B450: beq         $t9, $zero, L_8009B4A0
    if (ctx->r25 == 0) {
        // 0x8009B454: nop
    
            goto L_8009B4A0;
    }
    // 0x8009B454: nop

    // 0x8009B458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B45C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B460: jal         0x800281A4
    // 0x8009B464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_10;
    // 0x8009B464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8009B468: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B46C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B470: jal         0x800281A4
    // 0x8009B474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_11;
    // 0x8009B474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8009B478: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009B47C: jal         0x8002B0E4
    // 0x8009B480: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x8009B480: nop

    after_12:
    // 0x8009B484: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8009B488: jal         0x8002B0E4
    // 0x8009B48C: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x8009B48C: nop

    after_13:
    // 0x8009B490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009B494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009B498: jal         0x8002B0E4
    // 0x8009B49C: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x8009B49C: nop

    after_14:
L_8009B4A0:
    // 0x8009B4A0: b           L_8009B4A8
    // 0x8009B4A4: nop

        goto L_8009B4A8;
    // 0x8009B4A4: nop

L_8009B4A8:
    // 0x8009B4A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009B4AC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8009B4B0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009B4B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8009B4B8: jr          $ra
    // 0x8009B4BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8009B4BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800EBF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBF24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EBF28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EBF2C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800EBF30: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800EBF34: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EBF38: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EBF3C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EBF40: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EBF44: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EBF48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EBF4C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EBF50: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EBF54: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EBF58: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EBF5C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EBF60: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EBF64: addiu       $a1, $a1, 0x44BC
    ctx->r5 = ADD32(ctx->r5, 0X44BC);
    // 0x800EBF68: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EBF6C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EBF70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EBF74: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EBF78: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EBF7C: jal         0x80027464
    // 0x800EBF80: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EBF80: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EBF84: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800EBF88: b           L_800EBF90
    // 0x800EBF8C: nop

        goto L_800EBF90;
    // 0x800EBF8C: nop

L_800EBF90:
    // 0x800EBF90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EBF94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EBF98: jr          $ra
    // 0x800EBF9C: nop

    return;
    // 0x800EBF9C: nop

;}
RECOMP_FUNC void func_8009F54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F54C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009F550: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009F554: nop

    // 0x8009F558: bne         $t6, $zero, L_8009F568
    if (ctx->r14 != 0) {
        // 0x8009F55C: nop
    
            goto L_8009F568;
    }
    // 0x8009F55C: nop

    // 0x8009F560: b           L_8009F584
    // 0x8009F564: nop

        goto L_8009F584;
    // 0x8009F564: nop

L_8009F568:
    // 0x8009F568: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009F56C: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x8009F570: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009F574: bne         $t7, $at, L_8009F584
    if (ctx->r15 != ctx->r1) {
        // 0x8009F578: nop
    
            goto L_8009F584;
    }
    // 0x8009F578: nop

    // 0x8009F57C: b           L_8009F584
    // 0x8009F580: nop

        goto L_8009F584;
    // 0x8009F580: nop

L_8009F584:
    // 0x8009F584: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009F588: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8009F58C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009F590: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009F594: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009F598: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009F59C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009F5A0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009F5A4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009F5A8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8009F5AC: jr          $ra
    // 0x8009F5B0: nop

    return;
    // 0x8009F5B0: nop

    // 0x8009F5B4: jr          $ra
    // 0x8009F5B8: nop

    return;
    // 0x8009F5B8: nop

;}
RECOMP_FUNC void func_800ED170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800ED174: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ED178: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800ED17C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800ED180: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ED184: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ED188: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED18C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED19C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED1A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED1A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED1A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800ED1AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED1B0: nop

    // 0x800ED1B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ED1B8: nop

    // 0x800ED1BC: bne         $t1, $zero, L_800ED230
    if (ctx->r9 != 0) {
        // 0x800ED1C0: nop
    
            goto L_800ED230;
    }
    // 0x800ED1C0: nop

    // 0x800ED1C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED1C8: nop

    // 0x800ED1CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800ED1D0: nop

    // 0x800ED1D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800ED1D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800ED1DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ED1E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED1E4: nop

    // 0x800ED1E8: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800ED1EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED1F0: nop

    // 0x800ED1F4: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800ED1F8: nop

    // 0x800ED1FC: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800ED200: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED204: nop

    // 0x800ED208: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800ED20C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED210: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800ED214: addiu       $t8, $t8, -0x65A0
    ctx->r24 = ADD32(ctx->r24, -0X65A0);
    // 0x800ED218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED21C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800ED220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ED224: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800ED228: jal         0x8001C0EC
    // 0x800ED22C: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ED22C: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_0:
L_800ED230:
    // 0x800ED230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED238: jal         0x8001B44C
    // 0x800ED23C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800ED23C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800ED240: beq         $v0, $zero, L_800ED298
    if (ctx->r2 == 0) {
        // 0x800ED244: nop
    
            goto L_800ED298;
    }
    // 0x800ED244: nop

    // 0x800ED248: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED24C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800ED250: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800ED254: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED258: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800ED25C: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
    // 0x800ED260: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800ED264: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ED268: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800ED26C: nop

    // 0x800ED270: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x800ED274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED278: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800ED27C: addiu       $t2, $t2, -0x65A0
    ctx->r10 = ADD32(ctx->r10, -0X65A0);
    // 0x800ED280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED284: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800ED288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ED28C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800ED290: jal         0x8001C0EC
    // 0x800ED294: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800ED294: addiu       $a3, $zero, 0x16B
    ctx->r7 = ADD32(0, 0X16B);
    after_2:
L_800ED298:
    // 0x800ED298: b           L_800ED2A0
    // 0x800ED29C: nop

        goto L_800ED2A0;
    // 0x800ED29C: nop

L_800ED2A0:
    // 0x800ED2A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800ED2A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800ED2A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800ED2AC: jr          $ra
    // 0x800ED2B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800ED2B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A8A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8A58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A8A5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8A60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A8A64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8A68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A8A6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8A70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A8A74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8A78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8A7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8A80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8A84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A8A88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8A8C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800A8A90: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800A8A94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A8A98: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800A8A9C: nop

    // 0x800A8AA0: beq         $t1, $at, L_800A8B74
    if (ctx->r9 == ctx->r1) {
        // 0x800A8AA4: nop
    
            goto L_800A8B74;
    }
    // 0x800A8AA4: nop

    // 0x800A8AA8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800A8AAC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800A8AB0: lh          $t3, 0xE6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE6);
    // 0x800A8AB4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800A8AB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A8ABC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8AC0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A8AC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8AC8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A8ACC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800A8AD0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800A8AD4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8AD8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800A8ADC: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A8AE0: nop

    // 0x800A8AE4: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x800A8AE8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8AEC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800A8AF0: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800A8AF4: nop

    // 0x800A8AF8: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800A8AFC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8B00: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800A8B04: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800A8B08: nop

    // 0x800A8B0C: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x800A8B10: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8B14: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800A8B18: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A8B1C: nop

    // 0x800A8B20: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x800A8B24: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8B28: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800A8B2C: lwc1        $f16, 0x40($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X40);
    // 0x800A8B30: nop

    // 0x800A8B34: swc1        $f16, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f16.u32l;
    // 0x800A8B38: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A8B3C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800A8B40: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800A8B44: nop

    // 0x800A8B48: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x800A8B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8B54: jal         0x80029C40
    // 0x800A8B58: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800A8B58: nop

    after_0:
    // 0x800A8B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8B64: jal         0x80029D04
    // 0x800A8B68: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800A8B68: nop

    after_1:
    // 0x800A8B6C: b           L_800A8BD0
    // 0x800A8B70: nop

        goto L_800A8BD0;
    // 0x800A8B70: nop

L_800A8B74:
    // 0x800A8B74: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800A8B78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8B7C: lh          $s0, 0xA4($t9)
    ctx->r16 = MEM_H(ctx->r25, 0XA4);
    // 0x800A8B80: nop

    // 0x800A8B84: beq         $s0, $at, L_800A8BA0
    if (ctx->r16 == ctx->r1) {
        // 0x800A8B88: nop
    
            goto L_800A8BA0;
    }
    // 0x800A8B88: nop

    // 0x800A8B8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A8B90: beq         $s0, $at, L_800A8BB0
    if (ctx->r16 == ctx->r1) {
        // 0x800A8B94: nop
    
            goto L_800A8BB0;
    }
    // 0x800A8B94: nop

    // 0x800A8B98: b           L_800A8BC0
    // 0x800A8B9C: nop

        goto L_800A8BC0;
    // 0x800A8B9C: nop

L_800A8BA0:
    // 0x800A8BA0: jal         0x800A8580
    // 0x800A8BA4: nop

    func_800A8580(rdram, ctx);
        goto after_2;
    // 0x800A8BA4: nop

    after_2:
    // 0x800A8BA8: b           L_800A8BD0
    // 0x800A8BAC: nop

        goto L_800A8BD0;
    // 0x800A8BAC: nop

L_800A8BB0:
    // 0x800A8BB0: jal         0x800A8858
    // 0x800A8BB4: nop

    func_800A8858(rdram, ctx);
        goto after_3;
    // 0x800A8BB4: nop

    after_3:
    // 0x800A8BB8: b           L_800A8BD0
    // 0x800A8BBC: nop

        goto L_800A8BD0;
    // 0x800A8BBC: nop

L_800A8BC0:
    // 0x800A8BC0: jal         0x800A8858
    // 0x800A8BC4: nop

    func_800A8858(rdram, ctx);
        goto after_4;
    // 0x800A8BC4: nop

    after_4:
    // 0x800A8BC8: b           L_800A8BD0
    // 0x800A8BCC: nop

        goto L_800A8BD0;
    // 0x800A8BCC: nop

L_800A8BD0:
    // 0x800A8BD0: b           L_800A8BD8
    // 0x800A8BD4: nop

        goto L_800A8BD8;
    // 0x800A8BD4: nop

L_800A8BD8:
    // 0x800A8BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A8BE0: jr          $ra
    // 0x800A8BE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A8BE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80091328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091328: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009132C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091330: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091334: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091338: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009133C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091340: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091344: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091348: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009134C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091350: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091354: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091358: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009135C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091360: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091364: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091368: addiu       $a1, $a1, 0x1540
    ctx->r5 = ADD32(ctx->r5, 0X1540);
    // 0x8009136C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091370: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091374: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091378: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009137C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091380: jal         0x80027464
    // 0x80091384: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091384: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091388: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009138C: b           L_80091394
    // 0x80091390: nop

        goto L_80091394;
    // 0x80091390: nop

L_80091394:
    // 0x80091394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009139C: jr          $ra
    // 0x800913A0: nop

    return;
    // 0x800913A0: nop

;}
RECOMP_FUNC void func_800A9F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9F98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9F9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A9FA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A9FA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9FA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9FAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A9FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9FB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9FB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9FBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A9FC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A9FC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A9FC8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9FCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9FD0: nop

    // 0x800A9FD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A9FD8: nop

    // 0x800A9FDC: bne         $t1, $zero, L_800AA01C
    if (ctx->r9 != 0) {
        // 0x800A9FE0: nop
    
            goto L_800AA01C;
    }
    // 0x800A9FE0: nop

    // 0x800A9FE4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A9FE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A9FEC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A9FF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A9FF4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A9FF8: nop

    // 0x800A9FFC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AA000: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AA004: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AA008: nop

    // 0x800AA00C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AA010: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AA014: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x800AA018: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_800AA01C:
    // 0x800AA01C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA024: jal         0x80029C40
    // 0x800AA028: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AA028: nop

    after_0:
    // 0x800AA02C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA034: jal         0x80029D04
    // 0x800AA038: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AA038: nop

    after_1:
    // 0x800AA03C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AA040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA044: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800AA048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA04C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800AA050: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800AA054: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800AA058: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800AA05C: jal         0x8001BB34
    // 0x800AA060: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800AA060: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800AA064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AA068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AA06C: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800AA070: nop

    // 0x800AA074: bne         $t2, $at, L_800AA0A4
    if (ctx->r10 != ctx->r1) {
        // 0x800AA078: nop
    
            goto L_800AA0A4;
    }
    // 0x800AA078: nop

    // 0x800AA07C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AA080: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800AA084: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AA088: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AA08C: nop

    // 0x800AA090: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800AA094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA09C: jal         0x8001BB34
    // 0x800AA0A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800AA0A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_800AA0A4:
    // 0x800AA0A4: b           L_800AA0AC
    // 0x800AA0A8: nop

        goto L_800AA0AC;
    // 0x800AA0A8: nop

L_800AA0AC:
    // 0x800AA0AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA0B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AA0B4: jr          $ra
    // 0x800AA0B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AA0B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D86E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D86E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D86E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D86EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D86F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D86F4: jal         0x8002B0E4
    // 0x800D86F8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D86F8: nop

    after_0:
    // 0x800D86FC: b           L_800D8704
    // 0x800D8700: nop

        goto L_800D8704;
    // 0x800D8700: nop

L_800D8704:
    // 0x800D8704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D8708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D870C: jr          $ra
    // 0x800D8710: nop

    return;
    // 0x800D8710: nop

;}
RECOMP_FUNC void func_800FE854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE85C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x800FE860: jal         0x8001E954
    // 0x800FE864: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_0;
    // 0x800FE864: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_0:
    // 0x800FE868: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x800FE86C: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x800FE870: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x800FE874: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x800FE878: jal         0x8001E98C
    // 0x800FE87C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_1;
    // 0x800FE87C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800FE880: b           L_800FE888
    // 0x800FE884: nop

        goto L_800FE888;
    // 0x800FE884: nop

L_800FE888:
    // 0x800FE888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FE88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FE890: jr          $ra
    // 0x800FE894: nop

    return;
    // 0x800FE894: nop

;}
RECOMP_FUNC void func_800B068C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B068C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B0690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B0694: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B0698: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B069C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B06A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B06A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B06A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B06AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B06B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B06B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B06B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B06BC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B06C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B06C4: nop

    // 0x800B06C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B06CC: nop

    // 0x800B06D0: bne         $t1, $zero, L_800B075C
    if (ctx->r9 != 0) {
        // 0x800B06D4: nop
    
            goto L_800B075C;
    }
    // 0x800B06D4: nop

    // 0x800B06D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B06DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B06E0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B06E4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800B06E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B06EC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B06F0: nop

    // 0x800B06F4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B06F8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800B06FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B0700: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B0704: nop

    // 0x800B0708: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B070C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0710: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800B0714: addiu       $t6, $t6, 0x77C4
    ctx->r14 = ADD32(ctx->r14, 0X77C4);
    // 0x800B0718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B071C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800B0720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B0724: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B0728: jal         0x8001C0EC
    // 0x800B072C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B072C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    after_0:
    // 0x800B0730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0738: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B073C: addiu       $a3, $a3, 0x77F4
    ctx->r7 = ADD32(ctx->r7, 0X77F4);
    // 0x800B0740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B0744: jal         0x8001ABF4
    // 0x800B0748: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B0748: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800B074C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0754: jal         0x800272E8
    // 0x800B0758: nop

    func_800272E8(rdram, ctx);
        goto after_2;
    // 0x800B0758: nop

    after_2:
L_800B075C:
    // 0x800B075C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0764: jal         0x8002A8B4
    // 0x800B0768: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800B0768: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_3:
    // 0x800B076C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B0770: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800B0774: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B0778: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800B077C: nop

    // 0x800B0780: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x800B0784: nop

    // 0x800B0788: bc1f        L_800B07C0
    if (!c1cs) {
        // 0x800B078C: nop
    
            goto L_800B07C0;
    }
    // 0x800B078C: nop

    // 0x800B0790: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B0794: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B0798: nop

    // 0x800B079C: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x800B07A0: nop

    // 0x800B07A4: bc1f        L_800B07C0
    if (!c1cs) {
        // 0x800B07A8: nop
    
            goto L_800B07C0;
    }
    // 0x800B07A8: nop

    // 0x800B07AC: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x800B07B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B07B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B07B8: nop

    // 0x800B07BC: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
L_800B07C0:
    // 0x800B07C0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B07C4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800B07C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B07CC: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800B07D0: nop

    // 0x800B07D4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x800B07D8: nop

    // 0x800B07DC: bc1f        L_800B0814
    if (!c1cs) {
        // 0x800B07E0: nop
    
            goto L_800B0814;
    }
    // 0x800B07E0: nop

    // 0x800B07E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B07E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800B07EC: nop

    // 0x800B07F0: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800B07F4: nop

    // 0x800B07F8: bc1f        L_800B0814
    if (!c1cs) {
        // 0x800B07FC: nop
    
            goto L_800B0814;
    }
    // 0x800B07FC: nop

    // 0x800B0800: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B0804: lwc1        $f8, 0x4B4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4B4C);
    // 0x800B0808: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B080C: nop

    // 0x800B0810: swc1        $f8, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f8.u32l;
L_800B0814:
    // 0x800B0814: jal         0x80014E80
    // 0x800B0818: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800B0818: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_4:
    // 0x800B081C: addiu       $t1, $v0, 0x154
    ctx->r9 = ADD32(ctx->r2, 0X154);
    // 0x800B0820: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800B0824: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B0828: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B082C: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
    // 0x800B0830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0838: jal         0x80029C40
    // 0x800B083C: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800B083C: nop

    after_5:
    // 0x800B0840: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0844: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0848: jal         0x80029D04
    // 0x800B084C: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800B084C: nop

    after_6:
    // 0x800B0850: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x800B0854: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B0858: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B085C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0860: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0864: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800B0868: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800B086C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B0870: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800B0874: jal         0x800295C0
    // 0x800B0878: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800B0878: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800B087C: beq         $v0, $zero, L_800B089C
    if (ctx->r2 == 0) {
        // 0x800B0880: nop
    
            goto L_800B089C;
    }
    // 0x800B0880: nop

    // 0x800B0884: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B0888: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800B088C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B0890: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B0894: nop

    // 0x800B0898: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B089C:
    // 0x800B089C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B08A0: nop

    // 0x800B08A4: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800B08A8: nop

    // 0x800B08AC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800B08B0: sh          $t8, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r24;
    // 0x800B08B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B08B8: nop

    // 0x800B08BC: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800B08C0: nop

    // 0x800B08C4: bgtz        $t0, L_800B08E4
    if (SIGNED(ctx->r8) > 0) {
        // 0x800B08C8: nop
    
            goto L_800B08E4;
    }
    // 0x800B08C8: nop

    // 0x800B08CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B08D0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800B08D4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800B08D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B08DC: nop

    // 0x800B08E0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800B08E4:
    // 0x800B08E4: b           L_800B08EC
    // 0x800B08E8: nop

        goto L_800B08EC;
    // 0x800B08E8: nop

L_800B08EC:
    // 0x800B08EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B08F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B08F4: jr          $ra
    // 0x800B08F8: nop

    return;
    // 0x800B08F8: nop

;}
RECOMP_FUNC void func_800AFCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AFCC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AFCC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AFCC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AFCCC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AFCD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AFCD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AFCD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFCDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AFCE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFCE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AFCE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AFCEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AFCF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AFCF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFCF8: nop

    // 0x800AFCFC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AFD00: nop

    // 0x800AFD04: bne         $t1, $zero, L_800AFD44
    if (ctx->r9 != 0) {
        // 0x800AFD08: nop
    
            goto L_800AFD44;
    }
    // 0x800AFD08: nop

    // 0x800AFD0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AFD14: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AFD18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AFD1C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD20: nop

    // 0x800AFD24: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AFD28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AFD2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD30: nop

    // 0x800AFD34: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AFD38: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD3C: nop

    // 0x800AFD40: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800AFD44:
    // 0x800AFD44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD48: nop

    // 0x800AFD4C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800AFD50: nop

    // 0x800AFD54: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800AFD58: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800AFD5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFD60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFD64: jal         0x80029C40
    // 0x800AFD68: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AFD68: nop

    after_0:
    // 0x800AFD6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFD70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFD74: jal         0x80029D04
    // 0x800AFD78: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AFD78: nop

    after_1:
    // 0x800AFD7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AFD80: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800AFD84: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AFD88: nop

    // 0x800AFD8C: bne         $t1, $at, L_800AFDB0
    if (ctx->r9 != ctx->r1) {
        // 0x800AFD90: nop
    
            goto L_800AFDB0;
    }
    // 0x800AFD90: nop

    // 0x800AFD94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFD98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFD9C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AFDA0: addiu       $a3, $a3, 0x7754
    ctx->r7 = ADD32(ctx->r7, 0X7754);
    // 0x800AFDA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800AFDA8: jal         0x8001ABF4
    // 0x800AFDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800AFDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800AFDB0:
    // 0x800AFDB0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AFDB4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800AFDB8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800AFDBC: nop

    // 0x800AFDC0: bne         $t3, $at, L_800AFDF8
    if (ctx->r11 != ctx->r1) {
        // 0x800AFDC4: nop
    
            goto L_800AFDF8;
    }
    // 0x800AFDC4: nop

    // 0x800AFDC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFDCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFDD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFDD4: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x800AFDD8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AFDDC: jal         0x800175F0
    // 0x800AFDE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800AFDE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800AFDE4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800AFDE8: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800AFDEC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800AFDF0: jal         0x800B0A78
    // 0x800AFDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800B0A78(rdram, ctx);
        goto after_4;
    // 0x800AFDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800AFDF8:
    // 0x800AFDF8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AFDFC: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x800AFE00: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800AFE04: nop

    // 0x800AFE08: bne         $t5, $at, L_800AFE4C
    if (ctx->r13 != ctx->r1) {
        // 0x800AFE0C: nop
    
            goto L_800AFE4C;
    }
    // 0x800AFE0C: nop

    // 0x800AFE10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFE14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFE18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AFE1C: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x800AFE20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AFE24: jal         0x800175F0
    // 0x800AFE28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800AFE28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x800AFE2C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800AFE30: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800AFE34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE38: jal         0x800B0A78
    // 0x800AFE3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800B0A78(rdram, ctx);
        goto after_6;
    // 0x800AFE3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800AFE40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE44: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800AFE48: sb          $t6, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r14;
L_800AFE4C:
    // 0x800AFE4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFE50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFE54: jal         0x8001B44C
    // 0x800AFE58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800AFE58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800AFE5C: beq         $v0, $zero, L_800AFEA0
    if (ctx->r2 == 0) {
        // 0x800AFE60: nop
    
            goto L_800AFEA0;
    }
    // 0x800AFE60: nop

    // 0x800AFE64: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AFE6C: lbu         $t7, 0x132($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X132);
    // 0x800AFE70: nop

    // 0x800AFE74: bne         $t7, $at, L_800AFE94
    if (ctx->r15 != ctx->r1) {
        // 0x800AFE78: nop
    
            goto L_800AFE94;
    }
    // 0x800AFE78: nop

    // 0x800AFE7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE80: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800AFE84: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800AFE88: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE8C: b           L_800AFEA0
    // 0x800AFE90: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800AFEA0;
    // 0x800AFE90: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800AFE94:
    // 0x800AFE94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AFE98: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800AFE9C: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_800AFEA0:
    // 0x800AFEA0: b           L_800AFEA8
    // 0x800AFEA4: nop

        goto L_800AFEA8;
    // 0x800AFEA4: nop

L_800AFEA8:
    // 0x800AFEA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AFEAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AFEB0: jr          $ra
    // 0x800AFEB4: nop

    return;
    // 0x800AFEB4: nop

;}
RECOMP_FUNC void func_800CB770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB77C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB780: jal         0x8002B0E4
    // 0x800CB784: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CB784: nop

    after_0:
    // 0x800CB788: b           L_800CB790
    // 0x800CB78C: nop

        goto L_800CB790;
    // 0x800CB78C: nop

L_800CB790:
    // 0x800CB790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB798: jr          $ra
    // 0x800CB79C: nop

    return;
    // 0x800CB79C: nop

;}
RECOMP_FUNC void func_80079874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007987C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80079880: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079884: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80079888: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007988C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079890: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80079894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079898: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007989C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800798A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800798A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800798A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800798AC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800798B0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800798B4: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800798B8: lwc1        $f9, -0x3640($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3640);
    // 0x800798BC: lwc1        $f8, -0x363C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X363C);
    // 0x800798C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800798C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800798C8: jal         0x80034970
    // 0x800798CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x800798CC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x800798D0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800798D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800798D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800798DC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800798E0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800798E4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800798E8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800798EC: nop

    // 0x800798F0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800798F4: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x800798F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800798FC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80079900: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079904: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80079908: lwc1        $f17, -0x3638($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3638);
    // 0x8007990C: lwc1        $f16, -0x3634($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3634);
    // 0x80079910: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80079914: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80079918: jal         0x80036570
    // 0x8007991C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8007991C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x80079920: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80079924: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80079928: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007992C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80079930: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80079934: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80079938: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8007993C: nop

    // 0x80079940: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80079944: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x80079948: b           L_80079950
    // 0x8007994C: nop

        goto L_80079950;
    // 0x8007994C: nop

L_80079950:
    // 0x80079950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079954: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079958: jr          $ra
    // 0x8007995C: nop

    return;
    // 0x8007995C: nop

;}
RECOMP_FUNC void func_8009B538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B538: jr          $ra
    // 0x8009B53C: nop

    return;
    // 0x8009B53C: nop

    // 0x8009B540: jr          $ra
    // 0x8009B544: nop

    return;
    // 0x8009B544: nop

;}
RECOMP_FUNC void func_800C60F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C60F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C60F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C60F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C60FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C6100: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C6104: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C6108: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C610C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C6110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C6114: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C6118: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C611C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C6120: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C6124: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C6128: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C612C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6130: nop

    // 0x800C6134: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C6138: nop

    // 0x800C613C: bne         $t1, $zero, L_800C61E8
    if (ctx->r9 != 0) {
        // 0x800C6140: nop
    
            goto L_800C61E8;
    }
    // 0x800C6140: nop

    // 0x800C6144: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6148: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C614C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C6150: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6154: nop

    // 0x800C6158: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800C615C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6160: nop

    // 0x800C6164: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x800C6168: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C616C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6170: nop

    // 0x800C6174: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x800C6178: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C617C: nop

    // 0x800C6180: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800C6184: nop

    // 0x800C6188: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800C618C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6190: nop

    // 0x800C6194: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800C6198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C619C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800C61A0: addiu       $t9, $t9, -0x7E90
    ctx->r25 = ADD32(ctx->r25, -0X7E90);
    // 0x800C61A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C61A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C61AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C61B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C61B4: jal         0x8001C0EC
    // 0x800C61B8: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C61B8: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_0:
    // 0x800C61BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C61C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C61C4: jal         0x8001BBDC
    // 0x800C61C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C61C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C61CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C61D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C61D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C61D8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x800C61DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C61E0: jal         0x800175F0
    // 0x800C61E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800C61E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C61E8:
    // 0x800C61E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C61EC: nop

    // 0x800C61F0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800C61F4: nop

    // 0x800C61F8: bne         $t1, $zero, L_800C62B4
    if (ctx->r9 != 0) {
        // 0x800C61FC: nop
    
            goto L_800C62B4;
    }
    // 0x800C61FC: nop

    // 0x800C6200: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6204: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800C6208: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800C620C: nop

    // 0x800C6210: bne         $t3, $at, L_800C6228
    if (ctx->r11 != ctx->r1) {
        // 0x800C6214: nop
    
            goto L_800C6228;
    }
    // 0x800C6214: nop

    // 0x800C6218: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C621C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C6220: b           L_800C62AC
    // 0x800C6224: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
        goto L_800C62AC;
    // 0x800C6224: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
L_800C6228:
    // 0x800C6228: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C622C: nop

    // 0x800C6230: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800C6234: nop

    // 0x800C6238: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800C623C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800C6240: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6244: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6248: lwc1        $f6, 0xC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800C624C: lwc1        $f11, 0x4D98($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4D98);
    // 0x800C6250: lwc1        $f10, 0x4D9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4D9C);
    // 0x800C6254: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800C6258: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800C625C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800C6260: swc1        $f18, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f18.u32l;
    // 0x800C6264: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6268: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C626C: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x800C6270: lwc1        $f9, 0x4DA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4DA0);
    // 0x800C6274: lwc1        $f8, 0x4DA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4DA4);
    // 0x800C6278: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C627C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C6280: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C6284: swc1        $f16, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f16.u32l;
    // 0x800C6288: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C628C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6290: lwc1        $f18, 0x14($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X14);
    // 0x800C6294: lwc1        $f7, 0x4DA8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4DA8);
    // 0x800C6298: lwc1        $f6, 0x4DAC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4DAC);
    // 0x800C629C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C62A0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C62A4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C62A8: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
L_800C62AC:
    // 0x800C62AC: b           L_800C6380
    // 0x800C62B0: nop

        goto L_800C6380;
    // 0x800C62B0: nop

L_800C62B4:
    // 0x800C62B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C62B8: nop

    // 0x800C62BC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800C62C0: nop

    // 0x800C62C4: bne         $t3, $zero, L_800C62FC
    if (ctx->r11 != 0) {
        // 0x800C62C8: nop
    
            goto L_800C62FC;
    }
    // 0x800C62C8: nop

    // 0x800C62CC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C62D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C62D4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800C62D8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C62DC: nop

    // 0x800C62E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800C62E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C62E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C62EC: jal         0x8001BBDC
    // 0x800C62F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800C62F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800C62F4: b           L_800C6380
    // 0x800C62F8: nop

        goto L_800C6380;
    // 0x800C62F8: nop

L_800C62FC:
    // 0x800C62FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6300: nop

    // 0x800C6304: lh          $t6, 0xA6($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XA6);
    // 0x800C6308: nop

    // 0x800C630C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x800C6310: sh          $t9, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r25;
    // 0x800C6314: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6318: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C631C: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800C6320: lwc1        $f5, 0x4DB0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4DB0);
    // 0x800C6324: lwc1        $f4, 0x4DB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4DB4);
    // 0x800C6328: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C632C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x800C6330: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C6334: swc1        $f8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f8.u32l;
    // 0x800C6338: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C633C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6340: lwc1        $f10, 0x10($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X10);
    // 0x800C6344: lwc1        $f19, 0x4DB8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4DB8);
    // 0x800C6348: lwc1        $f18, 0x4DBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4DBC);
    // 0x800C634C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800C6350: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x800C6354: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800C6358: swc1        $f6, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f6.u32l;
    // 0x800C635C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6360: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6364: lwc1        $f8, 0x14($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800C6368: lwc1        $f17, 0x4DC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4DC0);
    // 0x800C636C: lwc1        $f16, 0x4DC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4DC4);
    // 0x800C6370: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800C6374: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x800C6378: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800C637C: swc1        $f4, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f4.u32l;
L_800C6380:
    // 0x800C6380: b           L_800C6388
    // 0x800C6384: nop

        goto L_800C6388;
    // 0x800C6384: nop

L_800C6388:
    // 0x800C6388: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C638C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C6390: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C6394: jr          $ra
    // 0x800C6398: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C6398: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800FD3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD3F8: jr          $ra
    // 0x800FD3FC: nop

    return;
    // 0x800FD3FC: nop

    // 0x800FD400: jr          $ra
    // 0x800FD404: nop

    return;
    // 0x800FD404: nop

;}
RECOMP_FUNC void func_80094F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094F94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80094F98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094F9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80094FA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80094FA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094FA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80094FAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094FB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80094FB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094FBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80094FC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80094FC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80094FC8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80094FCC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80094FD0: nop

    // 0x80094FD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80094FD8: nop

    // 0x80094FDC: bne         $t1, $zero, L_80095050
    if (ctx->r9 != 0) {
        // 0x80094FE0: nop
    
            goto L_80095050;
    }
    // 0x80094FE0: nop

    // 0x80094FE4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80094FE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80094FEC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80094FF0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80094FF4: nop

    // 0x80094FF8: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x80094FFC: jal         0x80014E80
    // 0x80095000: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80095000: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80095004: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80095008: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8009500C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80095010: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80095014: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80095018: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009501C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80095020: nop

    // 0x80095024: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80095028: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009502C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80095030: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80095034: nop

    // 0x80095038: swc1        $f10, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f10.u32l;
    // 0x8009503C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80095040: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80095044: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80095048: nop

    // 0x8009504C: swc1        $f16, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f16.u32l;
L_80095050:
    // 0x80095050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095058: jal         0x80028FA0
    // 0x8009505C: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8009505C: nop

    after_1:
    // 0x80095060: beq         $v0, $zero, L_80095078
    if (ctx->r2 == 0) {
        // 0x80095064: nop
    
            goto L_80095078;
    }
    // 0x80095064: nop

    // 0x80095068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009506C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095070: jal         0x80029B60
    // 0x80095074: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80095074: nop

    after_2:
L_80095078:
    // 0x80095078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009507C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095080: jal         0x80029C40
    // 0x80095084: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80095084: nop

    after_3:
    // 0x80095088: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8009508C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80095090: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80095094: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80095098: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8009509C: jal         0x80015538
    // 0x800950A0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800950A0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_4:
    // 0x800950A4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800950A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800950AC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800950B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800950B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800950B8: nop

    // 0x800950BC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800950C0: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800950C4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800950C8: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800950CC: nop

    // 0x800950D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800950D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800950D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800950DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800950E0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800950E4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800950E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800950EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800950F0: jal         0x800294F0
    // 0x800950F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800294F0(rdram, ctx);
        goto after_5;
    // 0x800950F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800950F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800950FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80095100: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80095104: lwc1        $f19, 0x48D0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X48D0);
    // 0x80095108: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8009510C: lwc1        $f18, 0x48D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48D4);
    // 0x80095110: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80095114: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80095118: jal         0x80034970
    // 0x8009511C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8009511C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x80095120: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80095124: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80095128: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009512C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80095130: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80095134: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80095138: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8009513C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80095140: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80095144: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80095148: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009514C: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x80095150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095158: jal         0x80029D04
    // 0x8009515C: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x8009515C: nop

    after_7:
    // 0x80095160: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80095164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80095168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009516C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80095174: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80095178: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009517C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80095180: jal         0x80029018
    // 0x80095184: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80095184: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80095188: beq         $v0, $zero, L_800951F4
    if (ctx->r2 == 0) {
        // 0x8009518C: nop
    
            goto L_800951F4;
    }
    // 0x8009518C: nop

    // 0x80095190: jal         0x800297DC
    // 0x80095194: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x80095194: nop

    after_9:
    // 0x80095198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009519C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800951A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800951A4: jal         0x80029824
    // 0x800951A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800951A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800951AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800951B0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800951B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800951B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800951BC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800951C0: jal         0x80015538
    // 0x800951C4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800951C4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_11:
    // 0x800951C8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800951CC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800951D0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800951D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800951D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800951DC: nop

    // 0x800951E0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800951E4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800951E8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800951EC: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x800951F0: nop

L_800951F4:
    // 0x800951F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800951F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800951FC: jal         0x8002A46C
    // 0x80095200: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_12;
    // 0x80095200: nop

    after_12:
    // 0x80095204: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80095208: nop

    // 0x8009520C: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80095210: b           L_80095218
    // 0x80095214: nop

        goto L_80095218;
    // 0x80095214: nop

L_80095218:
    // 0x80095218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009521C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80095220: jr          $ra
    // 0x80095224: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80095224: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800BBCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBCA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BBCA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BBCAC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BBCB0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BBCB4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BBCB8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BBCBC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BBCC0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BBCC4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BBCC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BBCCC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BBCD0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BBCD4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BBCD8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BBCDC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBCE0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BBCE4: addiu       $a1, $a1, 0x3BB0
    ctx->r5 = ADD32(ctx->r5, 0X3BB0);
    // 0x800BBCE8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BBCEC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BBCF0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800BBCF4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BBCF8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BBCFC: jal         0x80027464
    // 0x800BBD00: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BBD00: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BBD04: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800BBD08: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BBD0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BBD10: beq         $t1, $at, L_800BBF18
    if (ctx->r9 == ctx->r1) {
        // 0x800BBD14: nop
    
            goto L_800BBF18;
    }
    // 0x800BBD14: nop

    // 0x800BBD18: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x800BBD1C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800BBD20: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800BBD24: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800BBD28: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800BBD2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800BBD30: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800BBD34: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x800BBD38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800BBD3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBD40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800BBD44: sh          $t3, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r11;
    // 0x800BBD48: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x800BBD4C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800BBD50: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800BBD54: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BBD58: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800BBD5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BBD60: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BBD64: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x800BBD68: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BBD6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBD70: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BBD74: sh          $t8, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r24;
    // 0x800BBD78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800BBD7C: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800BBD80: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x800BBD84: lh          $t1, 0xE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE);
    // 0x800BBD88: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800BBD8C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800BBD90: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800BBD94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BBD98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BBD9C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800BBDA0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BBDA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBDA8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BBDAC: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x800BBDB0: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x800BBDB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BBDB8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800BBDBC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800BBDC0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800BBDC4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800BBDC8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800BBDCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBDD0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800BBDD4: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x800BBDD8: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BBDDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BBDE0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800BBDE4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800BBDE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BBDEC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800BBDF0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BBDF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBDF8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BBDFC: swc1        $f10, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f10.u32l;
    // 0x800BBE00: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x800BBE04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBE08: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x800BBE0C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800BBE10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BBE14: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800BBE18: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BBE1C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BBE20: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800BBE24: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BBE28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBE2C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BBE30: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BBE34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BBE38: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BBE3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BBE40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800BBE44: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800BBE48: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x800BBE4C: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x800BBE50: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BBE54: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800BBE58: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800BBE5C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BBE60: lwc1        $f16, 0x4C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4C78);
    // 0x800BBE64: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800BBE68: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BBE6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBE70: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BBE74: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x800BBE78: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BBE7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBE80: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800BBE84: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800BBE88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BBE8C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800BBE90: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BBE94: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BBE98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800BBE9C: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x800BBEA0: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x800BBEA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBEA8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x800BBEAC: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800BBEB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BBEB4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800BBEB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BBEBC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BBEC0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BBEC4: jal         0x80014E80
    // 0x800BBEC8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800BBEC8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x800BBECC: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x800BBED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BBED4: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800BBED8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800BBEDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BBEE0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800BBEE4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BBEE8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800BBEEC: addiu       $t1, $v0, 0x20
    ctx->r9 = ADD32(ctx->r2, 0X20);
    // 0x800BBEF0: sh          $t1, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r9;
    // 0x800BBEF4: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x800BBEF8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BBEFC: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x800BBF00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BBF04: jal         0x8001ABF4
    // 0x800BBF08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800BBF08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800BBF0C: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x800BBF10: jal         0x800BBF30
    // 0x800BBF14: nop

    func_800BBF30(rdram, ctx);
        goto after_3;
    // 0x800BBF14: nop

    after_3:
L_800BBF18:
    // 0x800BBF18: b           L_800BBF20
    // 0x800BBF1C: nop

        goto L_800BBF20;
    // 0x800BBF1C: nop

L_800BBF20:
    // 0x800BBF20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BBF24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BBF28: jr          $ra
    // 0x800BBF2C: nop

    return;
    // 0x800BBF2C: nop

;}
RECOMP_FUNC void func_800FA888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FA88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA890: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA894: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA898: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FA89C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA8A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA8A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA8A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA8AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA8B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FA8B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FA8B8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800FA8BC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800FA8C0: nop

    // 0x800FA8C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FA8C8: nop

    // 0x800FA8CC: bne         $t1, $zero, L_800FA8EC
    if (ctx->r9 != 0) {
        // 0x800FA8D0: nop
    
            goto L_800FA8EC;
    }
    // 0x800FA8D0: nop

    // 0x800FA8D4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800FA8D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FA8DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FA8E0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x800FA8E4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800FA8E8: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_800FA8EC:
    // 0x800FA8EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800FA8F0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800FA8F4: lb          $t8, 0x5242($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5242);
    // 0x800FA8F8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800FA8FC: nop

    // 0x800FA900: beq         $t7, $t8, L_800FAA24
    if (ctx->r15 == ctx->r24) {
        // 0x800FA904: nop
    
            goto L_800FAA24;
    }
    // 0x800FA904: nop

    // 0x800FA908: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800FA90C: lb          $t9, 0x5242($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5242);
    // 0x800FA910: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800FA914: nop

    // 0x800FA918: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800FA91C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800FA920: nop

    // 0x800FA924: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800FA928: nop

    // 0x800FA92C: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x800FA930: bne         $at, $zero, L_800FA944
    if (ctx->r1 != 0) {
        // 0x800FA934: nop
    
            goto L_800FA944;
    }
    // 0x800FA934: nop

    // 0x800FA938: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800FA93C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800FA940: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_800FA944:
    // 0x800FA944: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x800FA948: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x800FA94C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800FA950: nop

    // 0x800FA954: blez        $t6, L_800FA9B8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800FA958: nop
    
            goto L_800FA9B8;
    }
    // 0x800FA958: nop

L_800FA95C:
    // 0x800FA95C: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x800FA960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA964: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800FA968: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800FA96C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FA970: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800FA974: addiu       $t0, $t0, -0x441C
    ctx->r8 = ADD32(ctx->r8, -0X441C);
    // 0x800FA978: addiu       $t9, $t8, 0x70
    ctx->r25 = ADD32(ctx->r24, 0X70);
    // 0x800FA97C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA980: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
    // 0x800FA984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FA988: jal         0x8001ABF4
    // 0x800FA98C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800FA98C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x800FA990: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x800FA994: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x800FA998: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800FA99C: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x800FA9A0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800FA9A4: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x800FA9A8: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800FA9AC: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800FA9B0: bne         $at, $zero, L_800FA95C
    if (ctx->r1 != 0) {
        // 0x800FA9B4: nop
    
            goto L_800FA95C;
    }
    // 0x800FA9B4: nop

L_800FA9B8:
    // 0x800FA9B8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800FA9BC: nop

    // 0x800FA9C0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800FA9C4: nop

    // 0x800FA9C8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800FA9CC: beq         $at, $zero, L_800FAA24
    if (ctx->r1 == 0) {
        // 0x800FA9D0: sh          $t8, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r24;
            goto L_800FAA24;
    }
    // 0x800FA9D0: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
L_800FA9D4:
    // 0x800FA9D4: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x800FA9D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA9DC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800FA9E0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800FA9E4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800FA9E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800FA9EC: addiu       $t1, $t1, -0x441C
    ctx->r9 = ADD32(ctx->r9, -0X441C);
    // 0x800FA9F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA9F4: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    // 0x800FA9F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FA9FC: jal         0x8001ABF4
    // 0x800FAA00: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800FAA00: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x800FAA04: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x800FAA08: nop

    // 0x800FAA0C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800FAA10: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x800FAA14: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800FAA18: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x800FAA1C: bne         $at, $zero, L_800FA9D4
    if (ctx->r1 != 0) {
        // 0x800FAA20: sh          $t3, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r11;
            goto L_800FA9D4;
    }
    // 0x800FAA20: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
L_800FAA24:
    // 0x800FAA24: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800FAA28: nop

    // 0x800FAA2C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800FAA30: nop

    // 0x800FAA34: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800FAA38: bne         $at, $zero, L_800FAA70
    if (ctx->r1 != 0) {
        // 0x800FAA3C: nop
    
            goto L_800FAA70;
    }
    // 0x800FAA3C: nop

    // 0x800FAA40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAA44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAA48: jal         0x8002A1FC
    // 0x800FAA4C: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800FAA4C: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_2:
    // 0x800FAA50: beq         $v0, $zero, L_800FAA70
    if (ctx->r2 == 0) {
        // 0x800FAA54: nop
    
            goto L_800FAA70;
    }
    // 0x800FAA54: nop

    // 0x800FAA58: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800FAA5C: nop

    // 0x800FAA60: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800FAA64: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800FAA68: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800FAA6C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_800FAA70:
    // 0x800FAA70: b           L_800FAA78
    // 0x800FAA74: nop

        goto L_800FAA78;
    // 0x800FAA74: nop

L_800FAA78:
    // 0x800FAA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FAA7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FAA80: jr          $ra
    // 0x800FAA84: nop

    return;
    // 0x800FAA84: nop

;}
RECOMP_FUNC void func_80097A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097A98: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80097A9C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80097AA0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80097AA4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80097AA8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80097AAC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80097AB0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80097AB4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80097AB8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80097ABC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80097AC0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80097AC4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80097AC8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80097ACC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80097AD0: addiu       $a1, $a1, 0x3628
    ctx->r5 = ADD32(ctx->r5, 0X3628);
    // 0x80097AD4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80097AD8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80097ADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80097AE0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80097AE4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80097AE8: jal         0x80027464
    // 0x80097AEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80097AEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80097AF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80097AF4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80097AF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80097AFC: beq         $t1, $at, L_80097B34
    if (ctx->r9 == ctx->r1) {
        // 0x80097B00: nop
    
            goto L_80097B34;
    }
    // 0x80097B00: nop

    // 0x80097B04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80097B08: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80097B0C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80097B10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80097B14: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80097B18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80097B1C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80097B20: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80097B24: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80097B28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80097B2C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80097B30: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_80097B34:
    // 0x80097B34: b           L_80097B3C
    // 0x80097B38: nop

        goto L_80097B3C;
    // 0x80097B38: nop

L_80097B3C:
    // 0x80097B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80097B44: jr          $ra
    // 0x80097B48: nop

    return;
    // 0x80097B48: nop

;}
RECOMP_FUNC void func_800BB080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BB084: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BB088: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BB08C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800BB090: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB094: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB098: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB09C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB0A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB0A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB0A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB0AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB0B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BB0B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BB0B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BB0BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BB0C0: nop

    // 0x800BB0C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BB0C8: nop

    // 0x800BB0CC: bne         $t1, $zero, L_800BB124
    if (ctx->r9 != 0) {
        // 0x800BB0D0: nop
    
            goto L_800BB124;
    }
    // 0x800BB0D0: nop

    // 0x800BB0D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BB0D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB0DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BB0E0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800BB0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BB0E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BB0EC: nop

    // 0x800BB0F0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BB0F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB0F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BB0FC: nop

    // 0x800BB100: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BB104: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800BB108: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BB10C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BB110: nop

    // 0x800BB114: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x800BB118: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BB11C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800BB120: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_800BB124:
    // 0x800BB124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB128: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB12C: jal         0x80029C40
    // 0x800BB130: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BB130: nop

    after_0:
    // 0x800BB134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB13C: jal         0x80029D04
    // 0x800BB140: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BB140: nop

    after_1:
    // 0x800BB144: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BB148: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800BB14C: lwc1        $f10, 0xC($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800BB150: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800BB154: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BB158: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800BB15C: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x800BB160: nop

    // 0x800BB164: bc1f        L_800BB1B4
    if (!c1cs) {
        // 0x800BB168: nop
    
            goto L_800BB1B4;
    }
    // 0x800BB168: nop

    // 0x800BB16C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BB170: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BB174: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800BB178: lwc1        $f9, 0x4C50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4C50);
    // 0x800BB17C: lwc1        $f8, 0x4C54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4C54);
    // 0x800BB180: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800BB184: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x800BB188: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800BB18C: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x800BB190: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BB194: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x800BB198: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800BB19C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800BB1A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB1A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800BB1A8: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x800BB1AC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800BB1B0: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800BB1B4:
    // 0x800BB1B4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BB1B8: nop

    // 0x800BB1BC: lwc1        $f20, 0xC($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800BB1C0: nop

    // 0x800BB1C4: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
    // 0x800BB1C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BB1CC: nop

    // 0x800BB1D0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800BB1D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BB1D8: nop

    // 0x800BB1DC: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BB1E0: nop

    // 0x800BB1E4: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x800BB1E8: beq         $at, $zero, L_800BB20C
    if (ctx->r1 == 0) {
        // 0x800BB1EC: nop
    
            goto L_800BB20C;
    }
    // 0x800BB1EC: nop

    // 0x800BB1F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BB1F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BB1F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BB1FC: lwc1        $f16, 0x44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800BB200: nop

    // 0x800BB204: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800BB208: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
L_800BB20C:
    // 0x800BB20C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BB210: nop

    // 0x800BB214: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800BB218: nop

    // 0x800BB21C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800BB220: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800BB224: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BB228: nop

    // 0x800BB22C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800BB230: nop

    // 0x800BB234: bgtz        $t1, L_800BB254
    if (SIGNED(ctx->r9) > 0) {
        // 0x800BB238: nop
    
            goto L_800BB254;
    }
    // 0x800BB238: nop

    // 0x800BB23C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BB240: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB244: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800BB248: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BB24C: nop

    // 0x800BB250: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800BB254:
    // 0x800BB254: b           L_800BB25C
    // 0x800BB258: nop

        goto L_800BB25C;
    // 0x800BB258: nop

L_800BB25C:
    // 0x800BB25C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB260: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800BB264: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800BB268: jr          $ra
    // 0x800BB26C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BB26C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B9A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B9A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B9AC: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B9B0: nop

    // 0x8006B9B4: bne         $t6, $zero, L_8006B9DC
    if (ctx->r14 != 0) {
        // 0x8006B9B8: nop
    
            goto L_8006B9DC;
    }
    // 0x8006B9B8: nop

    // 0x8006B9BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B9C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B9C4: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B9C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B9CC: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x8006B9D0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B9D4: jal         0x80017BEC
    // 0x8006B9D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B9D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_8006B9DC:
    // 0x8006B9DC: b           L_8006B9E4
    // 0x8006B9E0: nop

        goto L_8006B9E4;
    // 0x8006B9E0: nop

L_8006B9E4:
    // 0x8006B9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B9E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B9EC: jr          $ra
    // 0x8006B9F0: nop

    return;
    // 0x8006B9F0: nop

;}
RECOMP_FUNC void func_800AF118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AF11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AF120: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF124: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF128: jal         0x8002B0E4
    // 0x800AF12C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800AF12C: nop

    after_0:
    // 0x800AF130: b           L_800AF138
    // 0x800AF134: nop

        goto L_800AF138;
    // 0x800AF134: nop

L_800AF138:
    // 0x800AF138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AF13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AF140: jr          $ra
    // 0x800AF144: nop

    return;
    // 0x800AF144: nop

;}
RECOMP_FUNC void func_800AEB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEB9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AEBA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AEBA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AEBA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AEBAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AEBB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AEBB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AEBB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AEBBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AEBC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AEBC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AEBC8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800AEBCC: nop

    // 0x800AEBD0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800AEBD4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AEBD8: nop

    // 0x800AEBDC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AEBE0: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x800AEBE4: beq         $at, $zero, L_800AEC68
    if (ctx->r1 == 0) {
        // 0x800AEBE8: nop
    
            goto L_800AEC68;
    }
    // 0x800AEBE8: nop

    // 0x800AEBEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AEBF0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AEBF4: addu        $at, $at, $t0
    gpr jr_addend_800AEC00 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AEBF8: lw          $t0, 0x4AF0($at)
    ctx->r8 = ADD32(ctx->r1, 0X4AF0);
    // 0x800AEBFC: nop

    // 0x800AEC00: jr          $t0
    // 0x800AEC04: nop

    switch (jr_addend_800AEC00 >> 2) {
        case 0: goto L_800AEC08; break;
        case 1: goto L_800AEC18; break;
        case 2: goto L_800AEC68; break;
        case 3: goto L_800AEC28; break;
        case 4: goto L_800AEC38; break;
        case 5: goto L_800AEC48; break;
        case 6: goto L_800AEC68; break;
        case 7: goto L_800AEC58; break;
        default: switch_error(__func__, 0x800AEC00, 0x80114AF0);
    }
    // 0x800AEC04: nop

L_800AEC08:
    // 0x800AEC08: jal         0x800AE2B8
    // 0x800AEC0C: nop

    func_800AE2B8(rdram, ctx);
        goto after_0;
    // 0x800AEC0C: nop

    after_0:
    // 0x800AEC10: b           L_800AEC70
    // 0x800AEC14: nop

        goto L_800AEC70;
    // 0x800AEC14: nop

L_800AEC18:
    // 0x800AEC18: jal         0x800AE4A8
    // 0x800AEC1C: nop

    func_800AE4A8(rdram, ctx);
        goto after_1;
    // 0x800AEC1C: nop

    after_1:
    // 0x800AEC20: b           L_800AEC70
    // 0x800AEC24: nop

        goto L_800AEC70;
    // 0x800AEC24: nop

L_800AEC28:
    // 0x800AEC28: jal         0x800AE9A4
    // 0x800AEC2C: nop

    func_800AE9A4(rdram, ctx);
        goto after_2;
    // 0x800AEC2C: nop

    after_2:
    // 0x800AEC30: b           L_800AEC70
    // 0x800AEC34: nop

        goto L_800AEC70;
    // 0x800AEC34: nop

L_800AEC38:
    // 0x800AEC38: jal         0x800AEB7C
    // 0x800AEC3C: nop

    func_800AEB7C(rdram, ctx);
        goto after_3;
    // 0x800AEC3C: nop

    after_3:
    // 0x800AEC40: b           L_800AEC70
    // 0x800AEC44: nop

        goto L_800AEC70;
    // 0x800AEC44: nop

L_800AEC48:
    // 0x800AEC48: jal         0x800AEB8C
    // 0x800AEC4C: nop

    func_800AEB8C(rdram, ctx);
        goto after_4;
    // 0x800AEC4C: nop

    after_4:
    // 0x800AEC50: b           L_800AEC70
    // 0x800AEC54: nop

        goto L_800AEC70;
    // 0x800AEC54: nop

L_800AEC58:
    // 0x800AEC58: jal         0x800AE894
    // 0x800AEC5C: nop

    func_800AE894(rdram, ctx);
        goto after_5;
    // 0x800AEC5C: nop

    after_5:
    // 0x800AEC60: b           L_800AEC70
    // 0x800AEC64: nop

        goto L_800AEC70;
    // 0x800AEC64: nop

L_800AEC68:
    // 0x800AEC68: b           L_800AEC70
    // 0x800AEC6C: nop

        goto L_800AEC70;
    // 0x800AEC6C: nop

L_800AEC70:
    // 0x800AEC70: b           L_800AEC78
    // 0x800AEC74: nop

        goto L_800AEC78;
    // 0x800AEC74: nop

L_800AEC78:
    // 0x800AEC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AEC7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AEC80: jr          $ra
    // 0x800AEC84: nop

    return;
    // 0x800AEC84: nop

;}
RECOMP_FUNC void func_800A8D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8D0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8D10: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A8D14: nop

    // 0x800A8D18: bne         $t6, $zero, L_800A8D50
    if (ctx->r14 != 0) {
        // 0x800A8D1C: nop
    
            goto L_800A8D50;
    }
    // 0x800A8D1C: nop

    // 0x800A8D20: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A8D24: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A8D28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8D2C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A8D30: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A8D34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A8D38: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A8D3C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A8D40: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A8D44: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800A8D48: b           L_800A8DC0
    // 0x800A8D4C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800A8DC0;
    // 0x800A8D4C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800A8D50:
    // 0x800A8D50: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A8D54: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800A8D58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8D5C: bne         $t0, $at, L_800A8D94
    if (ctx->r8 != ctx->r1) {
        // 0x800A8D60: nop
    
            goto L_800A8D94;
    }
    // 0x800A8D60: nop

    // 0x800A8D64: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A8D68: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A8D6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8D70: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A8D74: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A8D78: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A8D7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A8D80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A8D84: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A8D88: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800A8D8C: b           L_800A8DC0
    // 0x800A8D90: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800A8DC0;
    // 0x800A8D90: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800A8D94:
    // 0x800A8D94: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800A8D98: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800A8D9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8DA0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800A8DA4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800A8DA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A8DAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800A8DB0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A8DB4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A8DB8: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800A8DBC: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_800A8DC0:
    // 0x800A8DC0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A8DC4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A8DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8DCC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800A8DD0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8DD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8DD8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8DDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8DE0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A8DE4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A8DE8: jr          $ra
    // 0x800A8DEC: nop

    return;
    // 0x800A8DEC: nop

    // 0x800A8DF0: jr          $ra
    // 0x800A8DF4: nop

    return;
    // 0x800A8DF4: nop

;}
RECOMP_FUNC void func_8009681C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009681C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096820: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80096824: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096828: bne         $t6, $at, L_80096884
    if (ctx->r14 != ctx->r1) {
        // 0x8009682C: nop
    
            goto L_80096884;
    }
    // 0x8009682C: nop

    // 0x80096830: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80096834: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80096838: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009683C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80096840: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80096844: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80096848: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009684C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80096850: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80096854: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80096858: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8009685C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80096860: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80096864: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096868: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009686C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096870: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80096874: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096878: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009687C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80096880: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80096884:
    // 0x80096884: jr          $ra
    // 0x80096888: nop

    return;
    // 0x80096888: nop

    // 0x8009688C: jr          $ra
    // 0x80096890: nop

    return;
    // 0x80096890: nop

;}
RECOMP_FUNC void func_80093228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009322C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093230: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093234: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093238: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009323C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093240: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80093244: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093248: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009324C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093250: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80093254: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093258: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009325C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093260: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093264: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093268: addiu       $a1, $a1, 0x17D4
    ctx->r5 = ADD32(ctx->r5, 0X17D4);
    // 0x8009326C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093270: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093274: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093278: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009327C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093280: jal         0x80027464
    // 0x80093284: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093284: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093288: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009328C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80093290: addiu       $t1, $t1, 0x31B8
    ctx->r9 = ADD32(ctx->r9, 0X31B8);
    // 0x80093294: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093298: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009329C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800932A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800932A4: jal         0x8001C0EC
    // 0x800932A8: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800932A8: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    after_1:
    // 0x800932AC: b           L_800932B4
    // 0x800932B0: nop

        goto L_800932B4;
    // 0x800932B0: nop

L_800932B4:
    // 0x800932B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800932B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800932BC: jr          $ra
    // 0x800932C0: nop

    return;
    // 0x800932C0: nop

;}
RECOMP_FUNC void func_8006389C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006389C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800638A0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800638A4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800638A8: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x800638AC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800638B0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800638B4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800638B8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800638BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800638C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800638C4: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800638C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800638CC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800638D0: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800638D4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800638D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800638DC: lui         $t8, 0xFD48
    ctx->r24 = S32(0XFD48 << 16);
    // 0x800638E0: ori         $t8, $t8, 0x7F
    ctx->r24 = ctx->r24 | 0X7F;
    // 0x800638E4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800638E8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800638EC: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x800638F0: lw          $t1, 0xD0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD0);
    // 0x800638F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800638F8: addiu       $t2, $t1, 0x30
    ctx->r10 = ADD32(ctx->r9, 0X30);
    // 0x800638FC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80063900: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80063904: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80063908: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006390C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80063910: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80063914: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80063918: subu        $t6, $a2, $a2
    ctx->r14 = SUB32(ctx->r6, ctx->r6);
    // 0x8006391C: addiu       $t7, $t6, 0x9
    ctx->r15 = ADD32(ctx->r14, 0X9);
    // 0x80063920: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80063924: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x80063928: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8006392C: andi        $t1, $t0, 0x1FF
    ctx->r9 = ctx->r8 & 0X1FF;
    // 0x80063930: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80063934: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x80063938: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006393C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80063940: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80063944: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80063948: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8006394C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80063950: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80063954: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80063958: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006395C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80063960: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80063964: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80063968: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006396C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80063970: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80063974: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80063978: nop

    // 0x8006397C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80063980: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80063984: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80063988: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006398C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80063990: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80063994: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80063998: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8006399C: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x800639A0: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x800639A4: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800639A8: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x800639AC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800639B0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800639B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800639B8: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x800639BC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800639C0: addiu       $t2, $a2, 0x8
    ctx->r10 = ADD32(ctx->r6, 0X8);
    // 0x800639C4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800639C8: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x800639CC: addiu       $t8, $a3, 0x10
    ctx->r24 = ADD32(ctx->r7, 0X10);
    // 0x800639D0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800639D4: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x800639D8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800639DC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800639E0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800639E4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800639E8: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x800639EC: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800639F0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800639F4: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x800639F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800639FC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80063A00: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80063A04: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80063A08: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80063A0C: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80063A10: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80063A14: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80063A18: nop

    // 0x80063A1C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80063A20: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80063A24: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80063A28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063A2C: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80063A30: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80063A34: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80063A38: subu        $t9, $a2, $a2
    ctx->r25 = SUB32(ctx->r6, ctx->r6);
    // 0x80063A3C: addiu       $t0, $t9, 0x9
    ctx->r8 = ADD32(ctx->r25, 0X9);
    // 0x80063A40: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80063A44: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80063A48: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80063A4C: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x80063A50: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80063A54: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x80063A58: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80063A5C: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x80063A60: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80063A64: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80063A68: nop

    // 0x80063A6C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80063A70: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80063A74: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80063A78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063A7C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80063A80: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80063A84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80063A88: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x80063A8C: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x80063A90: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x80063A94: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80063A98: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x80063A9C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80063AA0: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x80063AA4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80063AA8: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x80063AAC: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x80063AB0: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x80063AB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80063AB8: addiu       $t3, $a3, 0x10
    ctx->r11 = ADD32(ctx->r7, 0X10);
    // 0x80063ABC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80063AC0: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80063AC4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80063AC8: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80063ACC: andi        $t4, $t5, 0xFFF
    ctx->r12 = ctx->r13 & 0XFFF;
    // 0x80063AD0: or          $t8, $t2, $t4
    ctx->r24 = ctx->r10 | ctx->r12;
    // 0x80063AD4: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x80063AD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063ADC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80063AE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063AE4: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x80063AE8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80063AEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80063AF0: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x80063AF4: lui         $t0, 0xF200
    ctx->r8 = S32(0XF200 << 16);
    // 0x80063AF8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80063AFC: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x80063B00: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x80063B04: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x80063B08: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x80063B0C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80063B10: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80063B14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063B18: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x80063B1C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80063B20: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x80063B24: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x80063B28: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80063B2C: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80063B30: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
    // 0x80063B34: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80063B38: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x80063B3C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80063B40: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80063B44: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80063B48: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x80063B4C: or          $t2, $t0, $t5
    ctx->r10 = ctx->r8 | ctx->r13;
    // 0x80063B50: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80063B54: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80063B58: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80063B5C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80063B60: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80063B64: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80063B68: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80063B6C: or          $t3, $t6, $t1
    ctx->r11 = ctx->r14 | ctx->r9;
    // 0x80063B70: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x80063B74: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80063B78: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80063B7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063B80: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x80063B84: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80063B88: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x80063B8C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80063B90: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x80063B94: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80063B98: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80063B9C: nop

    // 0x80063BA0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80063BA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80063BA8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80063BAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063BB0: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x80063BB4: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80063BB8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80063BBC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80063BC0: lui         $t1, 0xB300
    ctx->r9 = S32(0XB300 << 16);
    // 0x80063BC4: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80063BC8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80063BCC: lui         $t0, 0x400
    ctx->r8 = S32(0X400 << 16);
    // 0x80063BD0: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x80063BD4: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x80063BD8: b           L_80063BE0
    // 0x80063BDC: nop

        goto L_80063BE0;
    // 0x80063BDC: nop

L_80063BE0:
    // 0x80063BE0: jr          $ra
    // 0x80063BE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80063BE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007E0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E0EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007E0F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007E0F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007E0F8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007E0FC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007E100: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007E104: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007E108: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007E10C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007E110: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007E114: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E118: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007E11C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E120: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007E124: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007E128: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007E12C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007E130: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007E134: jal         0x8007DF4C
    // 0x8007E138: nop

    func_8007DF4C(rdram, ctx);
        goto after_0;
    // 0x8007E138: nop

    after_0:
    // 0x8007E13C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007E140: lh          $t0, -0x1D08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D08);
    // 0x8007E144: nop

    // 0x8007E148: beq         $t0, $zero, L_8007E294
    if (ctx->r8 == 0) {
        // 0x8007E14C: nop
    
            goto L_8007E294;
    }
    // 0x8007E14C: nop

    // 0x8007E150: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007E154: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x8007E158: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007E15C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8007E160: mflo        $t2
    ctx->r10 = lo;
    // 0x8007E164: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007E168: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8007E16C: nop

    // 0x8007E170: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007E174: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8007E178: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007E17C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007E180: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007E184: nop

    // 0x8007E188: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8007E18C: nop

    // 0x8007E190: bc1f        L_8007E1A8
    if (!c1cs) {
        // 0x8007E194: nop
    
            goto L_8007E1A8;
    }
    // 0x8007E194: nop

    // 0x8007E198: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007E19C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007E1A0: nop

    // 0x8007E1A4: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_8007E1A8:
    // 0x8007E1A8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007E1AC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8007E1B0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007E1B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007E1B8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007E1BC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007E1C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007E1C4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007E1C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007E1CC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007E1D0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8007E1D4: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    // 0x8007E1D8: swc1        $f22, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f22.u32l;
    // 0x8007E1DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007E1E0: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007E1E4: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8007E1E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007E1EC: nop

    // 0x8007E1F0: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x8007E1F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007E1F8: lh          $t7, -0x1D08($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D08);
    // 0x8007E1FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007E200: bne         $t7, $at, L_8007E22C
    if (ctx->r15 != ctx->r1) {
        // 0x8007E204: nop
    
            goto L_8007E22C;
    }
    // 0x8007E204: nop

    // 0x8007E208: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007E20C: addiu       $a3, $a3, 0x65E4
    ctx->r7 = ADD32(ctx->r7, 0X65E4);
    // 0x8007E210: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007E214: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007E218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E21C: jal         0x8001ABF4
    // 0x8007E220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8007E220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007E224: b           L_8007E294
    // 0x8007E228: nop

        goto L_8007E294;
    // 0x8007E228: nop

L_8007E22C:
    // 0x8007E22C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007E230: lh          $t8, -0x1D08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D08);
    // 0x8007E234: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007E238: bne         $t8, $at, L_8007E264
    if (ctx->r24 != ctx->r1) {
        // 0x8007E23C: nop
    
            goto L_8007E264;
    }
    // 0x8007E23C: nop

    // 0x8007E240: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007E244: addiu       $a3, $a3, 0x65E4
    ctx->r7 = ADD32(ctx->r7, 0X65E4);
    // 0x8007E248: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007E24C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007E250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E254: jal         0x8001ABF4
    // 0x8007E258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8007E258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8007E25C: b           L_8007E294
    // 0x8007E260: nop

        goto L_8007E294;
    // 0x8007E260: nop

L_8007E264:
    // 0x8007E264: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007E268: lh          $t9, -0x1D08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D08);
    // 0x8007E26C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8007E270: bne         $t9, $at, L_8007E294
    if (ctx->r25 != ctx->r1) {
        // 0x8007E274: nop
    
            goto L_8007E294;
    }
    // 0x8007E274: nop

    // 0x8007E278: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007E27C: addiu       $a3, $a3, 0x65E4
    ctx->r7 = ADD32(ctx->r7, 0X65E4);
    // 0x8007E280: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007E284: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8007E288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E28C: jal         0x8001ABF4
    // 0x8007E290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007E290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8007E294:
    // 0x8007E294: b           L_8007E29C
    // 0x8007E298: nop

        goto L_8007E29C;
    // 0x8007E298: nop

L_8007E29C:
    // 0x8007E29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007E2A0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007E2A4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007E2A8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007E2AC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007E2B0: jr          $ra
    // 0x8007E2B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007E2B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void Init_ObjTrainingRobo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D7FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D7FA4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D7FA8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D7FAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D7FB0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D7FB4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D7FB8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D7FBC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D7FC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D7FC4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D7FC8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D7FCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D7FD0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D7FD4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D7FD8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D7FDC: addiu       $a1, $a1, 0x4240
    ctx->r5 = ADD32(ctx->r5, 0X4240);
    // 0x800D7FE0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D7FE4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D7FE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D7FEC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D7FF0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D7FF4: jal         0x80027464
    // 0x800D7FF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D7FF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D7FFC: b           L_800D8004
    // 0x800D8000: nop

        goto L_800D8004;
    // 0x800D8000: nop

L_800D8004:
    // 0x800D8004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D800C: jr          $ra
    // 0x800D8010: nop

    return;
    // 0x800D8010: nop

;}
RECOMP_FUNC void func_800BD188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD188: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BD18C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BD190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD194: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD198: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD19C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD1A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD1A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD1AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD1B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD1B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD1B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BD1BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD1C0: nop

    // 0x800BD1C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BD1C8: nop

    // 0x800BD1CC: bne         $t1, $zero, L_800BD230
    if (ctx->r9 != 0) {
        // 0x800BD1D0: nop
    
            goto L_800BD230;
    }
    // 0x800BD1D0: nop

    // 0x800BD1D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD1D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BD1DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BD1E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800BD1E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BD1E8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD1EC: nop

    // 0x800BD1F0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BD1F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BD1F8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD1FC: nop

    // 0x800BD200: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BD204: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BD208: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD20C: nop

    // 0x800BD210: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x800BD214: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BD218: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD21C: nop

    // 0x800BD220: swc1        $f10, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f10.u32l;
    // 0x800BD224: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD228: nop

    // 0x800BD22C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800BD230:
    // 0x800BD230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BD234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BD238: jal         0x80029C40
    // 0x800BD23C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BD23C: nop

    after_0:
    // 0x800BD240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BD244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BD248: jal         0x80029D04
    // 0x800BD24C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BD24C: nop

    after_1:
    // 0x800BD250: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD254: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800BD258: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800BD25C: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800BD260: jal         0x80015538
    // 0x800BD264: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800BD264: nop

    after_2:
    // 0x800BD268: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD26C: nop

    // 0x800BD270: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800BD274: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD278: nop

    // 0x800BD27C: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BD280: nop

    // 0x800BD284: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800BD288: bne         $t3, $zero, L_800BD298
    if (ctx->r11 != 0) {
        // 0x800BD28C: nop
    
            goto L_800BD298;
    }
    // 0x800BD28C: nop

    // 0x800BD290: jal         0x800BD4B0
    // 0x800BD294: nop

    func_800BD4B0(rdram, ctx);
        goto after_3;
    // 0x800BD294: nop

    after_3:
L_800BD298:
    // 0x800BD298: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD29C: nop

    // 0x800BD2A0: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BD2A4: nop

    // 0x800BD2A8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800BD2AC: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x800BD2B0: b           L_800BD2B8
    // 0x800BD2B4: nop

        goto L_800BD2B8;
    // 0x800BD2B4: nop

L_800BD2B8:
    // 0x800BD2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BD2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BD2C0: jr          $ra
    // 0x800BD2C4: nop

    return;
    // 0x800BD2C4: nop

;}
RECOMP_FUNC void func_8009E66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E66C: jr          $ra
    // 0x8009E670: nop

    return;
    // 0x8009E670: nop

    // 0x8009E674: jr          $ra
    // 0x8009E678: nop

    return;
    // 0x8009E678: nop

;}
RECOMP_FUNC void func_8009868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009868C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80098690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098694: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80098698: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009869C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800986A0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800986A4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800986A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800986AC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800986B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800986B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800986B8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800986BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800986C0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800986C4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800986C8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800986CC: addiu       $a1, $a1, 0x3670
    ctx->r5 = ADD32(ctx->r5, 0X3670);
    // 0x800986D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800986D4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800986D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800986DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800986E0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800986E4: jal         0x80027464
    // 0x800986E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800986E8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800986EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800986F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800986F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800986F8: beq         $t1, $at, L_80098774
    if (ctx->r9 == ctx->r1) {
        // 0x800986FC: nop
    
            goto L_80098774;
    }
    // 0x800986FC: nop

    // 0x80098700: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80098704: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80098708: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009870C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80098710: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80098714: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80098718: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009871C: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80098720: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80098724: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098728: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8009872C: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x80098730: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80098734: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80098738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009873C: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x80098740: nop

    // 0x80098744: bne         $t8, $at, L_80098774
    if (ctx->r24 != ctx->r1) {
        // 0x80098748: nop
    
            goto L_80098774;
    }
    // 0x80098748: nop

    // 0x8009874C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80098750: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098754: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80098758: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8009875C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80098760: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80098764: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80098768: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8009876C: addiu       $t9, $zero, 0x195
    ctx->r25 = ADD32(0, 0X195);
    // 0x80098770: sh          $t9, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r25;
L_80098774:
    // 0x80098774: b           L_8009877C
    // 0x80098778: nop

        goto L_8009877C;
    // 0x80098778: nop

L_8009877C:
    // 0x8009877C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80098784: jr          $ra
    // 0x80098788: nop

    return;
    // 0x80098788: nop

;}
RECOMP_FUNC void func_800E74C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E74C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E74C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E74C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E74CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E74D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E74D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E74D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E74DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E74E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E74E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E74E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E74EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E74F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E74F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E74F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E74FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E7500: addiu       $a1, $a1, 0x4468
    ctx->r5 = ADD32(ctx->r5, 0X4468);
    // 0x800E7504: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E7508: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E750C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E7510: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E7514: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E7518: jal         0x80027464
    // 0x800E751C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E751C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E7520: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E7524: b           L_800E752C
    // 0x800E7528: nop

        goto L_800E752C;
    // 0x800E7528: nop

L_800E752C:
    // 0x800E752C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E7534: jr          $ra
    // 0x800E7538: nop

    return;
    // 0x800E7538: nop

;}
RECOMP_FUNC void func_80091518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009151C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091520: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091524: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091528: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009152C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091530: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091534: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091538: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009153C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091540: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091544: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091548: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009154C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091550: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091554: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091558: addiu       $a1, $a1, 0x1570
    ctx->r5 = ADD32(ctx->r5, 0X1570);
    // 0x8009155C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091560: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091564: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091568: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009156C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091570: jal         0x80027464
    // 0x80091574: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091574: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091578: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009157C: b           L_80091584
    // 0x80091580: nop

        goto L_80091584;
    // 0x80091580: nop

L_80091584:
    // 0x80091584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009158C: jr          $ra
    // 0x80091590: nop

    return;
    // 0x80091590: nop

;}
RECOMP_FUNC void func_8008EC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EC3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008EC40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EC44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008EC48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008EC4C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008EC50: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008EC54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008EC58: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EC5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EC60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EC64: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8008EC68: lw          $a0, 0x4D48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4D48);
    // 0x8008EC6C: jal         0x8001BB34
    // 0x8008EC70: nop

    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008EC70: nop

    after_0:
    // 0x8008EC74: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008EC78: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008EC7C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8008EC80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EC84: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008EC88: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008EC8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008EC90: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008EC94: lw          $t2, 0x4D48($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4D48);
    // 0x8008EC98: nop

    // 0x8008EC9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008ECA0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008ECA4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008ECA8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008ECAC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008ECB0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008ECB4: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
    // 0x8008ECB8: b           L_8008ECC0
    // 0x8008ECBC: nop

        goto L_8008ECC0;
    // 0x8008ECBC: nop

L_8008ECC0:
    // 0x8008ECC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008ECC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008ECC8: jr          $ra
    // 0x8008ECCC: nop

    return;
    // 0x8008ECCC: nop

;}
RECOMP_FUNC void func_800FF43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF43C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FF440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FF444: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FF448: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800FF44C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800FF450: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF454: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800FF458: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800FF45C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF460: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800FF464: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF468: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800FF46C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FF470: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF478: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800FF47C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF480: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800FF484: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF488: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF48C: addiu       $a1, $a1, 0x45F4
    ctx->r5 = ADD32(ctx->r5, 0X45F4);
    // 0x800FF490: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF494: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF498: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800FF49C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF4A0: nop

    // 0x800FF4A4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800FF4A8: nop

    // 0x800FF4AC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800FF4B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF4B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF4B8: nop

    // 0x800FF4BC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF4C0: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800FF4C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800FF4C8: jal         0x80036BE4
    // 0x800FF4CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FF4CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x800FF4D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF4D4: jal         0x8005F9EC
    // 0x800FF4D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x800FF4D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800FF4DC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800FF4E0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800FF4E4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800FF4E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF4EC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800FF4F0: lwc1        $f4, 0x18($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800FF4F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF4F8: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800FF4FC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF500: lwc1        $f16, 0x20($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X20);
    // 0x800FF504: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800FF508: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF50C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF510: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800FF514: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF518: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800FF51C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF520: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF524: addiu       $a1, $a1, 0x4610
    ctx->r5 = ADD32(ctx->r5, 0X4610);
    // 0x800FF528: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF52C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF530: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800FF534: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF538: nop

    // 0x800FF53C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800FF540: nop

    // 0x800FF544: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800FF548: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF54C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF550: nop

    // 0x800FF554: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF558: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x800FF55C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800FF560: jal         0x80036BE4
    // 0x800FF564: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x800FF564: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_2:
    // 0x800FF568: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF56C: jal         0x8005F9EC
    // 0x800FF570: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x800FF570: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x800FF574: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FF578: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF57C: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800FF580: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800FF584: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF588: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF58C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF590: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF594: lwc1        $f8, -0x1EBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x800FF598: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FF59C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF5A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF5A4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800FF5A8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF5AC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800FF5B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF5B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF5B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF5BC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF5C0: lwc1        $f16, -0x1EB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x800FF5C4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800FF5C8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF5CC: addiu       $a1, $a1, 0x462C
    ctx->r5 = ADD32(ctx->r5, 0X462C);
    // 0x800FF5D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800FF5D4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF5D8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800FF5DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF5E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF5E4: nop

    // 0x800FF5E8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF5EC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800FF5F0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800FF5F4: jal         0x80036BE4
    // 0x800FF5F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x800FF5F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x800FF5FC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF600: jal         0x8005F9EC
    // 0x800FF604: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_5;
    // 0x800FF604: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
    // 0x800FF608: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800FF60C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF610: lwc1        $f4, -0x1EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x800FF614: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800FF618: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF61C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF624: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF628: lwc1        $f8, -0x1EB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB0);
    // 0x800FF62C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800FF630: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF634: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF638: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800FF63C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF640: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800FF644: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF648: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF64C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF650: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF654: lwc1        $f16, -0x1EAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x800FF658: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800FF65C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF660: addiu       $a1, $a1, 0x4648
    ctx->r5 = ADD32(ctx->r5, 0X4648);
    // 0x800FF664: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800FF668: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF66C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800FF670: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF674: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF678: nop

    // 0x800FF67C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF680: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800FF684: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800FF688: jal         0x80036BE4
    // 0x800FF68C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x800FF68C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x800FF690: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF694: jal         0x8005F9EC
    // 0x800FF698: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_7;
    // 0x800FF698: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_7:
    // 0x800FF69C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800FF6A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF6A4: lwc1        $f4, -0x1EA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x800FF6A8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800FF6AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF6B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF6B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF6B8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF6BC: lwc1        $f8, -0x1EA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800FF6C0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800FF6C4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF6C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF6CC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800FF6D0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF6D4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800FF6D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF6DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF6E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF6E4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF6E8: lwc1        $f16, -0x1EA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA0);
    // 0x800FF6EC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800FF6F0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF6F4: addiu       $a1, $a1, 0x4664
    ctx->r5 = ADD32(ctx->r5, 0X4664);
    // 0x800FF6F8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FF6FC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF700: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800FF704: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF708: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF70C: nop

    // 0x800FF710: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF714: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800FF718: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FF71C: jal         0x80036BE4
    // 0x800FF720: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800FF720: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_8:
    // 0x800FF724: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF728: jal         0x8005F9EC
    // 0x800FF72C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_9;
    // 0x800FF72C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_9:
    // 0x800FF730: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800FF734: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FF738: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x800FF73C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800FF740: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF744: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF748: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF74C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF750: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF754: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FF758: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800FF75C: addiu       $a1, $a1, 0x4680
    ctx->r5 = ADD32(ctx->r5, 0X4680);
    // 0x800FF760: jal         0x80036BE4
    // 0x800FF764: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x800FF764: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_10:
    // 0x800FF768: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF76C: jal         0x8005F9EC
    // 0x800FF770: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_11;
    // 0x800FF770: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_11:
    // 0x800FF774: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FF778: lh          $a2, 0x4C14($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4C14);
    // 0x800FF77C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF780: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF784: addiu       $a1, $a1, 0x4690
    ctx->r5 = ADD32(ctx->r5, 0X4690);
    // 0x800FF788: jal         0x80036BE4
    // 0x800FF78C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x800FF78C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_12:
    // 0x800FF790: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF794: jal         0x8005F9EC
    // 0x800FF798: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_13;
    // 0x800FF798: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_13:
    // 0x800FF79C: b           L_800FF7A4
    // 0x800FF7A0: nop

        goto L_800FF7A4;
    // 0x800FF7A0: nop

L_800FF7A4:
    // 0x800FF7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FF7A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FF7AC: jr          $ra
    // 0x800FF7B0: nop

    return;
    // 0x800FF7B0: nop

;}
RECOMP_FUNC void func_800913A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800913A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800913A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800913AC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800913B0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800913B4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800913B8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800913BC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800913C0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800913C4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800913C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800913CC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800913D0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800913D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800913D8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800913DC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800913E0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800913E4: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x800913E8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800913EC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800913F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800913F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800913F8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800913FC: jal         0x80027464
    // 0x80091400: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091400: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091404: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091408: b           L_80091410
    // 0x8009140C: nop

        goto L_80091410;
    // 0x8009140C: nop

L_80091410:
    // 0x80091410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091414: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091418: jr          $ra
    // 0x8009141C: nop

    return;
    // 0x8009141C: nop

;}
RECOMP_FUNC void func_800713D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800713D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800713D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800713D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800713DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800713E0: lb          $t6, 0x7A20($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A20);
    // 0x800713E4: nop

    // 0x800713E8: bne         $t6, $zero, L_800713F8
    if (ctx->r14 != 0) {
        // 0x800713EC: nop
    
            goto L_800713F8;
    }
    // 0x800713EC: nop

    // 0x800713F0: b           L_80071A58
    // 0x800713F4: nop

        goto L_80071A58;
    // 0x800713F4: nop

L_800713F8:
    // 0x800713F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800713FC: lb          $t7, 0x7630($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7630);
    // 0x80071400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80071404: bne         $t7, $at, L_80071538
    if (ctx->r15 != ctx->r1) {
        // 0x80071408: nop
    
            goto L_80071538;
    }
    // 0x80071408: nop

    // 0x8007140C: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80071410: lb          $s0, 0x7A20($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7A20);
    // 0x80071414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071418: beq         $s0, $at, L_80071434
    if (ctx->r16 == ctx->r1) {
        // 0x8007141C: nop
    
            goto L_80071434;
    }
    // 0x8007141C: nop

    // 0x80071420: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80071424: beq         $s0, $at, L_800714C4
    if (ctx->r16 == ctx->r1) {
        // 0x80071428: nop
    
            goto L_800714C4;
    }
    // 0x80071428: nop

    // 0x8007142C: b           L_80071530
    // 0x80071430: nop

        goto L_80071530;
    // 0x80071430: nop

L_80071434:
    // 0x80071434: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80071438: lb          $t8, 0x7A28($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7A28);
    // 0x8007143C: nop

    // 0x80071440: bne         $t8, $zero, L_8007147C
    if (ctx->r24 != 0) {
        // 0x80071444: nop
    
            goto L_8007147C;
    }
    // 0x80071444: nop

    // 0x80071448: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007144C: lb          $t9, 0x7A28($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7A28);
    // 0x80071450: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071454: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80071458: sb          $t0, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r8;
    // 0x8007145C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071460: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x80071464: jal         0x80017EB8
    // 0x80071468: nop

    func_80017EB8(rdram, ctx);
        goto after_0;
    // 0x80071468: nop

    after_0:
    // 0x8007146C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80071470: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80071474: jal         0x80016F38
    // 0x80071478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_1;
    // 0x80071478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8007147C:
    // 0x8007147C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80071480: lh          $t1, 0x7A30($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7A30);
    // 0x80071484: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071488: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8007148C: sh          $t2, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r10;
    // 0x80071490: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80071494: lh          $t3, 0x7A30($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7A30);
    // 0x80071498: nop

    // 0x8007149C: slti        $at, $t3, 0x15
    ctx->r1 = SIGNED(ctx->r11) < 0X15 ? 1 : 0;
    // 0x800714A0: bne         $at, $zero, L_800714BC
    if (ctx->r1 != 0) {
        // 0x800714A4: nop
    
            goto L_800714BC;
    }
    // 0x800714A4: nop

    // 0x800714A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800714AC: sb          $zero, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = 0;
    // 0x800714B0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800714B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800714B8: sb          $t4, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = ctx->r12;
L_800714BC:
    // 0x800714BC: b           L_80071530
    // 0x800714C0: nop

        goto L_80071530;
    // 0x800714C0: nop

L_800714C4:
    // 0x800714C4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800714C8: lb          $t5, 0x7A28($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7A28);
    // 0x800714CC: nop

    // 0x800714D0: bne         $t5, $zero, L_800714F4
    if (ctx->r13 != 0) {
        // 0x800714D4: nop
    
            goto L_800714F4;
    }
    // 0x800714D4: nop

    // 0x800714D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800714DC: lb          $t6, 0x7A28($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A28);
    // 0x800714E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800714E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800714E8: sb          $t7, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r15;
    // 0x800714EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800714F0: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
L_800714F4:
    // 0x800714F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800714F8: lh          $t8, 0x7A30($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7A30);
    // 0x800714FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071500: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80071504: sh          $t9, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r25;
    // 0x80071508: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007150C: lh          $t0, 0x7A30($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7A30);
    // 0x80071510: nop

    // 0x80071514: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x80071518: bne         $at, $zero, L_80071528
    if (ctx->r1 != 0) {
        // 0x8007151C: nop
    
            goto L_80071528;
    }
    // 0x8007151C: nop

    // 0x80071520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071524: sb          $zero, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = 0;
L_80071528:
    // 0x80071528: b           L_80071530
    // 0x8007152C: nop

        goto L_80071530;
    // 0x8007152C: nop

L_80071530:
    // 0x80071530: b           L_80071A50
    // 0x80071534: nop

        goto L_80071A50;
    // 0x80071534: nop

L_80071538:
    // 0x80071538: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8007153C: lb          $s0, 0x7A20($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7A20);
    // 0x80071540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80071544: beq         $s0, $at, L_80071578
    if (ctx->r16 == ctx->r1) {
        // 0x80071548: nop
    
            goto L_80071578;
    }
    // 0x80071548: nop

    // 0x8007154C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80071550: beq         $s0, $at, L_800717C8
    if (ctx->r16 == ctx->r1) {
        // 0x80071554: nop
    
            goto L_800717C8;
    }
    // 0x80071554: nop

    // 0x80071558: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007155C: beq         $s0, $at, L_800718C4
    if (ctx->r16 == ctx->r1) {
        // 0x80071560: nop
    
            goto L_800718C4;
    }
    // 0x80071560: nop

    // 0x80071564: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80071568: beq         $s0, $at, L_800719CC
    if (ctx->r16 == ctx->r1) {
        // 0x8007156C: nop
    
            goto L_800719CC;
    }
    // 0x8007156C: nop

    // 0x80071570: b           L_80071A50
    // 0x80071574: nop

        goto L_80071A50;
    // 0x80071574: nop

L_80071578:
    // 0x80071578: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007157C: lb          $t1, 0x7A28($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7A28);
    // 0x80071580: nop

    // 0x80071584: bne         $t1, $zero, L_800715FC
    if (ctx->r9 != 0) {
        // 0x80071588: nop
    
            goto L_800715FC;
    }
    // 0x80071588: nop

    // 0x8007158C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80071590: lb          $t2, 0x7A28($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7A28);
    // 0x80071594: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071598: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007159C: sb          $t3, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r11;
    // 0x800715A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715A4: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x800715A8: addiu       $t4, $zero, 0x140
    ctx->r12 = ADD32(0, 0X140);
    // 0x800715AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715B0: sw          $t4, 0x7A2C($at)
    MEM_W(0X7A2C, ctx->r1) = ctx->r12;
    // 0x800715B4: addiu       $t5, $zero, 0x140
    ctx->r13 = ADD32(0, 0X140);
    // 0x800715B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715BC: sw          $t5, 0x7A34($at)
    MEM_W(0X7A34, ctx->r1) = ctx->r13;
    // 0x800715C0: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x800715C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715C8: sw          $t6, 0x7A3C($at)
    MEM_W(0X7A3C, ctx->r1) = ctx->r14;
    // 0x800715CC: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x800715D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715D4: sw          $t7, 0x7A44($at)
    MEM_W(0X7A44, ctx->r1) = ctx->r15;
    // 0x800715D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800715DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800715E0: sb          $t8, 0x7A38($at)
    MEM_B(0X7A38, ctx->r1) = ctx->r24;
    // 0x800715E4: jal         0x80017EB8
    // 0x800715E8: nop

    func_80017EB8(rdram, ctx);
        goto after_2;
    // 0x800715E8: nop

    after_2:
    // 0x800715EC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x800715F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800715F4: jal         0x80016F38
    // 0x800715F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_3;
    // 0x800715F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800715FC:
    // 0x800715FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80071600: lh          $t9, 0x7A50($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7A50);
    // 0x80071604: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071608: addiu       $t0, $t9, 0xD
    ctx->r8 = ADD32(ctx->r25, 0XD);
    // 0x8007160C: sh          $t0, 0x7A50($at)
    MEM_H(0X7A50, ctx->r1) = ctx->r8;
    // 0x80071610: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80071614: lh          $t1, 0x7A50($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7A50);
    // 0x80071618: nop

    // 0x8007161C: slti        $at, $t1, 0x100
    ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
    // 0x80071620: bne         $at, $zero, L_80071634
    if (ctx->r1 != 0) {
        // 0x80071624: nop
    
            goto L_80071634;
    }
    // 0x80071624: nop

    // 0x80071628: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8007162C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071630: sh          $t2, 0x7A50($at)
    MEM_H(0X7A50, ctx->r1) = ctx->r10;
L_80071634:
    // 0x80071634: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80071638: lw          $t3, 0x7A4C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A4C);
    // 0x8007163C: nop

    // 0x80071640: slti        $at, $t3, 0xF
    ctx->r1 = SIGNED(ctx->r11) < 0XF ? 1 : 0;
    // 0x80071644: beq         $at, $zero, L_80071660
    if (ctx->r1 == 0) {
        // 0x80071648: nop
    
            goto L_80071660;
    }
    // 0x80071648: nop

    // 0x8007164C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80071650: lw          $t4, 0x7A4C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A4C);
    // 0x80071654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071658: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007165C: sw          $t5, 0x7A4C($at)
    MEM_W(0X7A4C, ctx->r1) = ctx->r13;
L_80071660:
    // 0x80071660: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80071664: lh          $t6, 0x7A10($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7A10);
    // 0x80071668: nop

    // 0x8007166C: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x80071670: beq         $at, $zero, L_80071694
    if (ctx->r1 == 0) {
        // 0x80071674: nop
    
            goto L_80071694;
    }
    // 0x80071674: nop

    // 0x80071678: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007167C: lh          $t7, 0x7A30($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7A30);
    // 0x80071680: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071684: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80071688: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007168C: b           L_800716A0
    // 0x80071690: sh          $t8, 0x7A10($at)
    MEM_H(0X7A10, ctx->r1) = ctx->r24;
        goto L_800716A0;
    // 0x80071690: sh          $t8, 0x7A10($at)
    MEM_H(0X7A10, ctx->r1) = ctx->r24;
L_80071694:
    // 0x80071694: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80071698: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007169C: sh          $t9, 0x7A10($at)
    MEM_H(0X7A10, ctx->r1) = ctx->r25;
L_800716A0:
    // 0x800716A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800716A4: lw          $t0, 0x7A2C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A2C);
    // 0x800716A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800716AC: addiu       $t1, $t0, -0x9
    ctx->r9 = ADD32(ctx->r8, -0X9);
    // 0x800716B0: sw          $t1, 0x7A2C($at)
    MEM_W(0X7A2C, ctx->r1) = ctx->r9;
    // 0x800716B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800716B8: lw          $t2, 0x7A2C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A2C);
    // 0x800716BC: nop

    // 0x800716C0: slti        $at, $t2, 0xC0
    ctx->r1 = SIGNED(ctx->r10) < 0XC0 ? 1 : 0;
    // 0x800716C4: beq         $at, $zero, L_800716D8
    if (ctx->r1 == 0) {
        // 0x800716C8: nop
    
            goto L_800716D8;
    }
    // 0x800716C8: nop

    // 0x800716CC: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x800716D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800716D4: sw          $t3, 0x7A2C($at)
    MEM_W(0X7A2C, ctx->r1) = ctx->r11;
L_800716D8:
    // 0x800716D8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800716DC: lw          $t4, 0x7A34($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A34);
    // 0x800716E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800716E4: addiu       $t5, $t4, -0x4
    ctx->r13 = ADD32(ctx->r12, -0X4);
    // 0x800716E8: sw          $t5, 0x7A34($at)
    MEM_W(0X7A34, ctx->r1) = ctx->r13;
    // 0x800716EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800716F0: lw          $t6, 0x7A34($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A34);
    // 0x800716F4: nop

    // 0x800716F8: slti        $at, $t6, 0x110
    ctx->r1 = SIGNED(ctx->r14) < 0X110 ? 1 : 0;
    // 0x800716FC: beq         $at, $zero, L_80071710
    if (ctx->r1 == 0) {
        // 0x80071700: nop
    
            goto L_80071710;
    }
    // 0x80071700: nop

    // 0x80071704: addiu       $t7, $zero, 0x110
    ctx->r15 = ADD32(0, 0X110);
    // 0x80071708: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007170C: sw          $t7, 0x7A34($at)
    MEM_W(0X7A34, ctx->r1) = ctx->r15;
L_80071710:
    // 0x80071710: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80071714: lw          $t8, 0x7A3C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A3C);
    // 0x80071718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007171C: addiu       $t9, $t8, -0xD
    ctx->r25 = ADD32(ctx->r24, -0XD);
    // 0x80071720: sw          $t9, 0x7A3C($at)
    MEM_W(0X7A3C, ctx->r1) = ctx->r25;
    // 0x80071724: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80071728: lw          $t0, 0x7A3C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A3C);
    // 0x8007172C: nop

    // 0x80071730: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x80071734: beq         $at, $zero, L_80071748
    if (ctx->r1 == 0) {
        // 0x80071738: nop
    
            goto L_80071748;
    }
    // 0x80071738: nop

    // 0x8007173C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80071740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071744: sw          $t1, 0x7A3C($at)
    MEM_W(0X7A3C, ctx->r1) = ctx->r9;
L_80071748:
    // 0x80071748: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007174C: lw          $t2, 0x7A44($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A44);
    // 0x80071750: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071754: addiu       $t3, $t2, -0x5
    ctx->r11 = ADD32(ctx->r10, -0X5);
    // 0x80071758: sw          $t3, 0x7A44($at)
    MEM_W(0X7A44, ctx->r1) = ctx->r11;
    // 0x8007175C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80071760: lw          $t4, 0x7A44($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A44);
    // 0x80071764: nop

    // 0x80071768: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
    // 0x8007176C: beq         $at, $zero, L_80071780
    if (ctx->r1 == 0) {
        // 0x80071770: nop
    
            goto L_80071780;
    }
    // 0x80071770: nop

    // 0x80071774: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x80071778: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007177C: sw          $t5, 0x7A44($at)
    MEM_W(0X7A44, ctx->r1) = ctx->r13;
L_80071780:
    // 0x80071780: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80071784: lh          $t6, 0x7A30($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7A30);
    // 0x80071788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007178C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80071790: sh          $t7, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r15;
    // 0x80071794: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80071798: lh          $t8, 0x7A30($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7A30);
    // 0x8007179C: nop

    // 0x800717A0: slti        $at, $t8, 0x15
    ctx->r1 = SIGNED(ctx->r24) < 0X15 ? 1 : 0;
    // 0x800717A4: bne         $at, $zero, L_800717C0
    if (ctx->r1 != 0) {
        // 0x800717A8: nop
    
            goto L_800717C0;
    }
    // 0x800717A8: nop

    // 0x800717AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800717B0: sb          $zero, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = 0;
    // 0x800717B4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800717B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800717BC: sb          $t9, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = ctx->r25;
L_800717C0:
    // 0x800717C0: b           L_80071A50
    // 0x800717C4: nop

        goto L_80071A50;
    // 0x800717C4: nop

L_800717C8:
    // 0x800717C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800717CC: lb          $t0, 0x7A28($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7A28);
    // 0x800717D0: nop

    // 0x800717D4: bne         $t0, $zero, L_80071874
    if (ctx->r8 != 0) {
        // 0x800717D8: nop
    
            goto L_80071874;
    }
    // 0x800717D8: nop

    // 0x800717DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800717E0: lb          $t1, 0x7A28($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7A28);
    // 0x800717E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800717E8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800717EC: sb          $t2, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r10;
    // 0x800717F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800717F4: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x800717F8: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x800717FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071800: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071804: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x80071808: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007180C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071810: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x80071814: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80071818: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007181C: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x80071820: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80071824: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071828: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x8007182C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071830: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80071834: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071838: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x8007183C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80071840: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071844: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x80071848: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8007184C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071850: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071854: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x80071858: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007185C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071860: swc1        $f6, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f6.u32l;
    // 0x80071864: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071868: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8007186C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071870: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
L_80071874:
    // 0x80071874: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071878: sh          $zero, 0x7A50($at)
    MEM_H(0X7A50, ctx->r1) = 0;
    // 0x8007187C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80071880: lh          $t3, 0x7A30($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7A30);
    // 0x80071884: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071888: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007188C: sh          $t4, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r12;
    // 0x80071890: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80071894: lh          $t5, 0x7A30($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7A30);
    // 0x80071898: nop

    // 0x8007189C: slti        $at, $t5, 0x2D
    ctx->r1 = SIGNED(ctx->r13) < 0X2D ? 1 : 0;
    // 0x800718A0: bne         $at, $zero, L_800718BC
    if (ctx->r1 != 0) {
        // 0x800718A4: nop
    
            goto L_800718BC;
    }
    // 0x800718A4: nop

    // 0x800718A8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800718AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800718B0: sb          $t6, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = ctx->r14;
    // 0x800718B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800718B8: sb          $zero, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = 0;
L_800718BC:
    // 0x800718BC: b           L_80071A50
    // 0x800718C0: nop

        goto L_80071A50;
    // 0x800718C0: nop

L_800718C4:
    // 0x800718C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800718C8: lb          $t7, 0x7A28($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7A28);
    // 0x800718CC: nop

    // 0x800718D0: bne         $t7, $zero, L_80071984
    if (ctx->r15 != 0) {
        // 0x800718D4: nop
    
            goto L_80071984;
    }
    // 0x800718D4: nop

    // 0x800718D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800718DC: lb          $t8, 0x7A28($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7A28);
    // 0x800718E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800718E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800718E8: sb          $t9, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r25;
    // 0x800718EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800718F0: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x800718F4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800718F8: lbu         $t0, 0x7A38($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7A38);
    // 0x800718FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071900: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80071904: sb          $t1, 0x7A38($at)
    MEM_B(0X7A38, ctx->r1) = ctx->r9;
    // 0x80071908: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007190C: lb          $t2, 0x7630($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7630);
    // 0x80071910: nop

    // 0x80071914: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80071918: beq         $at, $zero, L_8007194C
    if (ctx->r1 == 0) {
        // 0x8007191C: nop
    
            goto L_8007194C;
    }
    // 0x8007191C: nop

    // 0x80071920: jal         0x80069FD8
    // 0x80071924: nop

    func_80069FD8(rdram, ctx);
        goto after_4;
    // 0x80071924: nop

    after_4:
    // 0x80071928: jal         0x8006A404
    // 0x8007192C: nop

    func_8006A404(rdram, ctx);
        goto after_5;
    // 0x8007192C: nop

    after_5:
    // 0x80071930: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x80071934: lbu         $t3, 0x2F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2F);
    // 0x80071938: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x8007193C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071940: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x80071944: b           L_8007196C
    // 0x80071948: sh          $t5, 0x7A40($at)
    MEM_H(0X7A40, ctx->r1) = ctx->r13;
        goto L_8007196C;
    // 0x80071948: sh          $t5, 0x7A40($at)
    MEM_H(0X7A40, ctx->r1) = ctx->r13;
L_8007194C:
    // 0x8007194C: jal         0x8006A898
    // 0x80071950: nop

    func_8006A898(rdram, ctx);
        goto after_6;
    // 0x80071950: nop

    after_6:
    // 0x80071954: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x80071958: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x8007195C: addiu       $t7, $zero, 0x24
    ctx->r15 = ADD32(0, 0X24);
    // 0x80071960: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071964: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80071968: sh          $t8, 0x7A40($at)
    MEM_H(0X7A40, ctx->r1) = ctx->r24;
L_8007196C:
    // 0x8007196C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80071970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071974: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    // 0x80071978: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8007197C: jal         0x800178D4
    // 0x80071980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80071980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_80071984:
    // 0x80071984: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80071988: lh          $t9, 0x7A30($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7A30);
    // 0x8007198C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071990: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80071994: sh          $t0, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r8;
    // 0x80071998: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007199C: lh          $t1, 0x7A30($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7A30);
    // 0x800719A0: nop

    // 0x800719A4: slti        $at, $t1, 0x1F
    ctx->r1 = SIGNED(ctx->r9) < 0X1F ? 1 : 0;
    // 0x800719A8: bne         $at, $zero, L_800719C4
    if (ctx->r1 != 0) {
        // 0x800719AC: nop
    
            goto L_800719C4;
    }
    // 0x800719AC: nop

    // 0x800719B0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800719B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800719B8: sb          $t2, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = ctx->r10;
    // 0x800719BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800719C0: sb          $zero, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = 0;
L_800719C4:
    // 0x800719C4: b           L_80071A50
    // 0x800719C8: nop

        goto L_80071A50;
    // 0x800719C8: nop

L_800719CC:
    // 0x800719CC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800719D0: lb          $t4, 0x7A28($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7A28);
    // 0x800719D4: nop

    // 0x800719D8: bne         $t4, $zero, L_80071A14
    if (ctx->r12 != 0) {
        // 0x800719DC: nop
    
            goto L_80071A14;
    }
    // 0x800719DC: nop

    // 0x800719E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800719E4: lb          $t3, 0x7A28($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7A28);
    // 0x800719E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800719EC: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800719F0: sb          $t5, 0x7A28($at)
    MEM_B(0X7A28, ctx->r1) = ctx->r13;
    // 0x800719F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800719F8: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x800719FC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80071A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071A04: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    // 0x80071A08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80071A0C: jal         0x800178D4
    // 0x80071A10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x80071A10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_80071A14:
    // 0x80071A14: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80071A18: lh          $t7, 0x7A30($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7A30);
    // 0x80071A1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071A20: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80071A24: sh          $t6, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = ctx->r14;
    // 0x80071A28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80071A2C: lh          $t8, 0x7A30($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7A30);
    // 0x80071A30: nop

    // 0x80071A34: slti        $at, $t8, 0x2E
    ctx->r1 = SIGNED(ctx->r24) < 0X2E ? 1 : 0;
    // 0x80071A38: bne         $at, $zero, L_80071A48
    if (ctx->r1 != 0) {
        // 0x80071A3C: nop
    
            goto L_80071A48;
    }
    // 0x80071A3C: nop

    // 0x80071A40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071A44: sb          $zero, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = 0;
L_80071A48:
    // 0x80071A48: b           L_80071A50
    // 0x80071A4C: nop

        goto L_80071A50;
    // 0x80071A4C: nop

L_80071A50:
    // 0x80071A50: b           L_80071A58
    // 0x80071A54: nop

        goto L_80071A58;
    // 0x80071A54: nop

L_80071A58:
    // 0x80071A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80071A5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80071A60: jr          $ra
    // 0x80071A64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80071A64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80071A68: nop

    // 0x80071A6C: nop

;}
RECOMP_FUNC void func_800B6A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B6A94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B6A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B6A9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B6AA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B6AA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B6AA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B6AAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6AB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B6AB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6AB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B6ABC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B6AC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B6AC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B6AC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B6ACC: nop

    // 0x800B6AD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B6AD4: nop

    // 0x800B6AD8: bne         $t1, $zero, L_800B6B58
    if (ctx->r9 != 0) {
        // 0x800B6ADC: nop
    
            goto L_800B6B58;
    }
    // 0x800B6ADC: nop

    // 0x800B6AE0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B6AE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B6AE8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B6AEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6AF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B6AF4: nop

    // 0x800B6AF8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B6AFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6B00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B6B04: nop

    // 0x800B6B08: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B6B0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B6B10: nop

    // 0x800B6B14: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800B6B18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6B1C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B6B20: addiu       $t7, $t7, 0x7AA0
    ctx->r15 = ADD32(ctx->r15, 0X7AA0);
    // 0x800B6B24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6B28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B6B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6B30: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800B6B34: jal         0x8001C0EC
    // 0x800B6B38: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B6B38: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_0:
    // 0x800B6B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6B44: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B6B48: addiu       $a3, $a3, 0x7B68
    ctx->r7 = ADD32(ctx->r7, 0X7B68);
    // 0x800B6B4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6B50: jal         0x8001ABF4
    // 0x800B6B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B6B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800B6B58:
    // 0x800B6B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6B5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6B60: jal         0x80029C40
    // 0x800B6B64: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B6B64: nop

    after_2:
    // 0x800B6B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6B70: jal         0x80029D04
    // 0x800B6B74: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B6B74: nop

    after_3:
    // 0x800B6B78: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B6B7C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x800B6B80: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800B6B84: nop

    // 0x800B6B88: bne         $t9, $at, L_800B6BC0
    if (ctx->r25 != ctx->r1) {
        // 0x800B6B8C: nop
    
            goto L_800B6BC0;
    }
    // 0x800B6B8C: nop

    // 0x800B6B90: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800B6B94: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800B6B98: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800B6B9C: jal         0x800B7720
    // 0x800B6BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800B7720(rdram, ctx);
        goto after_4;
    // 0x800B6BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800B6BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6BB0: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800B6BB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B6BB8: jal         0x800175F0
    // 0x800B6BBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800B6BBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_800B6BC0:
    // 0x800B6BC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B6BC4: nop

    // 0x800B6BC8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800B6BCC: nop

    // 0x800B6BD0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800B6BD4: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800B6BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6BDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6BE0: jal         0x8001B44C
    // 0x800B6BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800B6BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800B6BE8: beq         $v0, $zero, L_800B6C48
    if (ctx->r2 == 0) {
        // 0x800B6BEC: nop
    
            goto L_800B6C48;
    }
    // 0x800B6BEC: nop

    // 0x800B6BF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B6BF4: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x800B6BF8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B6BFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B6C00: nop

    // 0x800B6C04: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800B6C08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6C0C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800B6C10: addiu       $t6, $t6, 0x7AA0
    ctx->r14 = ADD32(ctx->r14, 0X7AA0);
    // 0x800B6C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6C18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800B6C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6C20: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800B6C24: jal         0x8001C0EC
    // 0x800B6C28: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800B6C28: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_7:
    // 0x800B6C2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6C30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6C34: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B6C38: addiu       $a3, $a3, 0x7B4C
    ctx->r7 = ADD32(ctx->r7, 0X7B4C);
    // 0x800B6C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B6C40: jal         0x8001ABF4
    // 0x800B6C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800B6C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_800B6C48:
    // 0x800B6C48: b           L_800B6C50
    // 0x800B6C4C: nop

        goto L_800B6C50;
    // 0x800B6C4C: nop

L_800B6C50:
    // 0x800B6C50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6C54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B6C58: jr          $ra
    // 0x800B6C5C: nop

    return;
    // 0x800B6C5C: nop

;}
RECOMP_FUNC void func_80094E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094E04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80094E08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094E0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80094E10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80094E14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094E18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80094E1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094E20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094E24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80094E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094E2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80094E30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80094E34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80094E38: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80094E3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80094E40: nop

    // 0x80094E44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80094E48: nop

    // 0x80094E4C: bne         $t1, $zero, L_80094EBC
    if (ctx->r9 != 0) {
        // 0x80094E50: nop
    
            goto L_80094EBC;
    }
    // 0x80094E50: nop

    // 0x80094E54: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80094E58: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80094E5C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80094E60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80094E64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80094E68: nop

    // 0x80094E6C: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80094E70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80094E74: nop

    // 0x80094E78: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80094E7C: nop

    // 0x80094E80: swc1        $f6, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f6.u32l;
    // 0x80094E84: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80094E88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80094E8C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80094E90: nop

    // 0x80094E94: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80094E98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80094E9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80094EA0: nop

    // 0x80094EA4: swc1        $f10, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f10.u32l;
    // 0x80094EA8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80094EAC: nop

    // 0x80094EB0: lwc1        $f16, 0x48($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X48);
    // 0x80094EB4: nop

    // 0x80094EB8: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
L_80094EBC:
    // 0x80094EBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094EC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094EC4: jal         0x80028FA0
    // 0x80094EC8: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80094EC8: nop

    after_0:
    // 0x80094ECC: beq         $v0, $zero, L_80094EEC
    if (ctx->r2 == 0) {
        // 0x80094ED0: nop
    
            goto L_80094EEC;
    }
    // 0x80094ED0: nop

    // 0x80094ED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094EDC: jal         0x80029B60
    // 0x80094EE0: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x80094EE0: nop

    after_1:
    // 0x80094EE4: b           L_80094F10
    // 0x80094EE8: nop

        goto L_80094F10;
    // 0x80094EE8: nop

L_80094EEC:
    // 0x80094EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094EF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094EF4: jal         0x8002A8B4
    // 0x80094EF8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80094EF8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x80094EFC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80094F00: nop

    // 0x80094F04: lwc1        $f18, 0x3C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80094F08: nop

    // 0x80094F0C: swc1        $f18, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f18.u32l;
L_80094F10:
    // 0x80094F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094F18: jal         0x80029C40
    // 0x80094F1C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80094F1C: nop

    after_3:
    // 0x80094F20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094F24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094F28: jal         0x80029D04
    // 0x80094F2C: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x80094F2C: nop

    after_4:
    // 0x80094F30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80094F34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094F38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094F3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80094F44: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80094F48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094F4C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80094F50: jal         0x80029018
    // 0x80094F54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80094F54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80094F58: beq         $v0, $zero, L_80094F7C
    if (ctx->r2 == 0) {
        // 0x80094F5C: nop
    
            goto L_80094F7C;
    }
    // 0x80094F5C: nop

    // 0x80094F60: jal         0x800297DC
    // 0x80094F64: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80094F64: nop

    after_6:
    // 0x80094F68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094F6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094F70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80094F74: jal         0x80029824
    // 0x80094F78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80094F78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80094F7C:
    // 0x80094F7C: b           L_80094F84
    // 0x80094F80: nop

        goto L_80094F84;
    // 0x80094F80: nop

L_80094F84:
    // 0x80094F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094F88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80094F8C: jr          $ra
    // 0x80094F90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80094F90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800DA760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA760: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DA764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA768: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA76C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA770: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA774: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA778: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA77C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA780: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA784: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DA788: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DA78C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DA790: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DA794: nop

    // 0x800DA798: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DA79C: nop

    // 0x800DA7A0: bne         $t1, $zero, L_800DA7B4
    if (ctx->r9 != 0) {
        // 0x800DA7A4: nop
    
            goto L_800DA7B4;
    }
    // 0x800DA7A4: nop

    // 0x800DA7A8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DA7AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DA7B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800DA7B4:
    // 0x800DA7B4: b           L_800DA7BC
    // 0x800DA7B8: nop

        goto L_800DA7BC;
    // 0x800DA7B8: nop

L_800DA7BC:
    // 0x800DA7BC: jr          $ra
    // 0x800DA7C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DA7C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DF734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF734: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DF738: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DF73C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DF740: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DF744: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DF748: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF74C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DF750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DF754: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DF758: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DF75C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DF760: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DF764: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DF768: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DF76C: nop

    // 0x800DF770: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800DF774: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DF778: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DF77C: nop

    // 0x800DF780: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x800DF784: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DF788: nop

    // 0x800DF78C: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800DF790: nop

    // 0x800DF794: swc1        $f8, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f8.u32l;
    // 0x800DF798: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DF79C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DF7A0: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800DF7A4: nop

    // 0x800DF7A8: bne         $t4, $at, L_800DF7C0
    if (ctx->r12 != ctx->r1) {
        // 0x800DF7AC: nop
    
            goto L_800DF7C0;
    }
    // 0x800DF7AC: nop

    // 0x800DF7B0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DF7B4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800DF7B8: b           L_800DF80C
    // 0x800DF7BC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800DF80C;
    // 0x800DF7BC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800DF7C0:
    // 0x800DF7C0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800DF7C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800DF7C8: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x800DF7CC: nop

    // 0x800DF7D0: bne         $t8, $at, L_800DF7E8
    if (ctx->r24 != ctx->r1) {
        // 0x800DF7D4: nop
    
            goto L_800DF7E8;
    }
    // 0x800DF7D4: nop

    // 0x800DF7D8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DF7DC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800DF7E0: b           L_800DF80C
    // 0x800DF7E4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
        goto L_800DF80C;
    // 0x800DF7E4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_800DF7E8:
    // 0x800DF7E8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DF7EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800DF7F0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800DF7F4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DF7F8: nop

    // 0x800DF7FC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800DF800: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DF804: nop

    // 0x800DF808: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_800DF80C:
    // 0x800DF80C: b           L_800DF814
    // 0x800DF810: nop

        goto L_800DF814;
    // 0x800DF810: nop

L_800DF814:
    // 0x800DF814: jr          $ra
    // 0x800DF818: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DF818: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80086AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086AD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80086AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80086AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086ADC: sb          $zero, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = 0;
    // 0x80086AE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086AE4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80086AE8: nop

    // 0x80086AEC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80086AF0: nop

    // 0x80086AF4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80086AF8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80086AFC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80086B00: nop

    // 0x80086B04: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80086B08: nop

    // 0x80086B0C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80086B10: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086B14: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80086B18: nop

    // 0x80086B1C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80086B20: nop

    // 0x80086B24: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80086B28: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80086B2C: lb          $t9, 0x523E($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523E);
    // 0x80086B30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80086B34: bne         $t9, $at, L_80086B5C
    if (ctx->r25 != ctx->r1) {
        // 0x80086B38: nop
    
            goto L_80086B5C;
    }
    // 0x80086B38: nop

    // 0x80086B3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80086B40: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80086B44: lwc1        $f19, -0x32B0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X32B0);
    // 0x80086B48: lwc1        $f18, -0x32AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X32AC);
    // 0x80086B4C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80086B50: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80086B54: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80086B58: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80086B5C:
    // 0x80086B5C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80086B60: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80086B64: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80086B68: jal         0x800843CC
    // 0x80086B6C: nop

    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80086B6C: nop

    after_0:
    // 0x80086B70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086B74: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80086B78: nop

    // 0x80086B7C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80086B80: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80086B84: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80086B88: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086B8C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80086B90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80086B94: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x80086B98: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80086B9C: bne         $t4, $at, L_80086BB4
    if (ctx->r12 != ctx->r1) {
        // 0x80086BA0: nop
    
            goto L_80086BB4;
    }
    // 0x80086BA0: nop

    // 0x80086BA4: b           L_80086D40
    // 0x80086BA8: nop

        goto L_80086D40;
    // 0x80086BA8: nop

    // 0x80086BAC: b           L_80086D38
    // 0x80086BB0: nop

        goto L_80086D38;
    // 0x80086BB0: nop

L_80086BB4:
    // 0x80086BB4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80086BB8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80086BBC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80086BC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80086BC4: lw          $t7, 0x7740($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7740);
    // 0x80086BC8: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    // 0x80086BCC: bne         $t7, $at, L_80086C14
    if (ctx->r15 != ctx->r1) {
        // 0x80086BD0: nop
    
            goto L_80086C14;
    }
    // 0x80086BD0: nop

    // 0x80086BD4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80086BD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086BDC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80086BE0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80086BE4: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086BE8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80086BEC: nop

    // 0x80086BF0: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80086BF4: nop

    // 0x80086BF8: bc1f        L_80086C0C
    if (!c1cs) {
        // 0x80086BFC: nop
    
            goto L_80086C0C;
    }
    // 0x80086BFC: nop

    // 0x80086C00: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80086C04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086C08: sb          $t0, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r8;
L_80086C0C:
    // 0x80086C0C: b           L_80086D38
    // 0x80086C10: nop

        goto L_80086D38;
    // 0x80086C10: nop

L_80086C14:
    // 0x80086C14: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80086C18: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80086C1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80086C20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80086C24: lw          $t3, 0x7740($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7740);
    // 0x80086C28: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    // 0x80086C2C: bne         $t3, $at, L_80086C74
    if (ctx->r11 != ctx->r1) {
        // 0x80086C30: nop
    
            goto L_80086C74;
    }
    // 0x80086C30: nop

    // 0x80086C34: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80086C38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086C3C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80086C40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80086C44: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086C48: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80086C4C: nop

    // 0x80086C50: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80086C54: nop

    // 0x80086C58: bc1f        L_80086C6C
    if (!c1cs) {
        // 0x80086C5C: nop
    
            goto L_80086C6C;
    }
    // 0x80086C5C: nop

    // 0x80086C60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80086C64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086C68: sb          $t6, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r14;
L_80086C6C:
    // 0x80086C6C: b           L_80086D38
    // 0x80086C70: nop

        goto L_80086D38;
    // 0x80086C70: nop

L_80086C74:
    // 0x80086C74: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80086C78: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086C7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80086C80: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80086C84: lw          $t9, 0x7740($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7740);
    // 0x80086C88: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80086C8C: beq         $t9, $at, L_80086CA0
    if (ctx->r25 == ctx->r1) {
        // 0x80086C90: nop
    
            goto L_80086CA0;
    }
    // 0x80086C90: nop

    // 0x80086C94: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x80086C98: bne         $t9, $at, L_80086D38
    if (ctx->r25 != ctx->r1) {
        // 0x80086C9C: nop
    
            goto L_80086D38;
    }
    // 0x80086C9C: nop

L_80086CA0:
    // 0x80086CA0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80086CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086CA8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80086CAC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80086CB0: lwc1        $f6, 0x7760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086CB4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80086CB8: nop

    // 0x80086CBC: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80086CC0: nop

    // 0x80086CC4: bc1f        L_80086D38
    if (!c1cs) {
        // 0x80086CC8: nop
    
            goto L_80086D38;
    }
    // 0x80086CC8: nop

    // 0x80086CCC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80086CD0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086CD4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80086CD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80086CDC: lw          $t4, 0x7750($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7750);
    // 0x80086CE0: nop

    // 0x80086CE4: bne         $t4, $zero, L_80086CFC
    if (ctx->r12 != 0) {
        // 0x80086CE8: nop
    
            goto L_80086CFC;
    }
    // 0x80086CE8: nop

    // 0x80086CEC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80086CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086CF4: b           L_80086D38
    // 0x80086CF8: sb          $t5, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r13;
        goto L_80086D38;
    // 0x80086CF8: sb          $t5, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r13;
L_80086CFC:
    // 0x80086CFC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80086D00: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086D04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80086D08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80086D0C: lw          $t8, 0x7750($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7750);
    // 0x80086D10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80086D14: bne         $t8, $at, L_80086D2C
    if (ctx->r24 != ctx->r1) {
        // 0x80086D18: nop
    
            goto L_80086D2C;
    }
    // 0x80086D18: nop

    // 0x80086D1C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80086D20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086D24: b           L_80086D38
    // 0x80086D28: sb          $t9, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r25;
        goto L_80086D38;
    // 0x80086D28: sb          $t9, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r25;
L_80086D2C:
    // 0x80086D2C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80086D30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086D34: sb          $t0, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = ctx->r8;
L_80086D38:
    // 0x80086D38: b           L_80086D40
    // 0x80086D3C: nop

        goto L_80086D40;
    // 0x80086D3C: nop

L_80086D40:
    // 0x80086D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80086D44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80086D48: jr          $ra
    // 0x80086D4C: nop

    return;
    // 0x80086D4C: nop

;}
RECOMP_FUNC void func_800E4E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4E3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E4E40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4E44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E4E48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E4E4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E4E50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4E54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4E58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4E60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4E64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E4E68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4E6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E4E70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4E74: nop

    // 0x800E4E78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E4E7C: nop

    // 0x800E4E80: bne         $t1, $zero, L_800E4EF8
    if (ctx->r9 != 0) {
        // 0x800E4E84: nop
    
            goto L_800E4EF8;
    }
    // 0x800E4E84: nop

    // 0x800E4E88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4E8C: nop

    // 0x800E4E90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E4E94: nop

    // 0x800E4E98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4E9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4EA0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4EA4: nop

    // 0x800E4EA8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E4EAC: nop

    // 0x800E4EB0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E4EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4EB8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E4EBC: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E4EC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4EC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E4EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4ECC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E4ED0: jal         0x8001C0EC
    // 0x800E4ED4: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E4ED4: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E4ED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4EDC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E4EE0: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E4EE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4EE8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E4EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4EF0: jal         0x8001ABF4
    // 0x800E4EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E4EF8:
    // 0x800E4EF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4F00: jal         0x8001B4AC
    // 0x800E4F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E4F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E4F08: beq         $v0, $zero, L_800E4F28
    if (ctx->r2 == 0) {
        // 0x800E4F0C: nop
    
            goto L_800E4F28;
    }
    // 0x800E4F0C: nop

    // 0x800E4F10: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4F14: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x800E4F18: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E4F1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4F20: nop

    // 0x800E4F24: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E4F28:
    // 0x800E4F28: b           L_800E4F30
    // 0x800E4F2C: nop

        goto L_800E4F30;
    // 0x800E4F2C: nop

L_800E4F30:
    // 0x800E4F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4F34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E4F38: jr          $ra
    // 0x800E4F3C: nop

    return;
    // 0x800E4F3C: nop

;}
